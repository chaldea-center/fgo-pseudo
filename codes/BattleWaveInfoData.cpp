void __fastcall BattleWaveInfoData___ctor(BattleWaveInfoData_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


BattleWaveInfoData_SaveData_o *__fastcall BattleWaveInfoData__GetSaveData(
        BattleWaveInfoData_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x20
  __int64 IsNullOrEmpty; // x0
  const MethodInfo *v13; // x1
  int max_length; // w21
  struct System_Int32_array *equipSkillChargeNum; // x8
  int64_t v16; // x0
  __int64 *v17; // x22
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  struct System_Int32_array *v24; // x12
  __int64 v25; // x9
  unsigned __int64 v26; // x10
  unsigned __int64 v27; // x8
  int32_t *v28; // x12
  __int64 v29; // x13
  int v30; // w21
  struct DropInfo_array *dropInfos; // x8
  int64_t v32; // x0
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  il2cpp_array_size_t v39; // w24
  struct DropInfo_array *v40; // x8
  _DWORD *v41; // x26
  int64_t v42; // x2
  int32_t v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7
  int64_t v48; // x23
  _DWORD *v49; // x0
  int v50; // w21
  struct BattleWaveInfoData_BattleItemInfo_array *battleItemInfos; // x8
  int64_t v52; // x0
  int64_t v53; // x2
  int32_t v54; // w3
  System_String_o *v55; // x4
  BattleSetupInfo_o *v56; // x5
  FollowerInfo_o *v57; // x6
  PartyListViewItem_o *v58; // x7
  il2cpp_array_size_t v59; // w24
  struct BattleWaveInfoData_BattleItemInfo_array *v60; // x8
  _DWORD *v61; // x26
  int64_t v62; // x2
  int32_t v63; // w3
  System_String_o *v64; // x4
  BattleSetupInfo_o *v65; // x5
  FollowerInfo_o *v66; // x6
  PartyListViewItem_o *v67; // x7
  int64_t v68; // x23
  _DWORD *v69; // x0
  BattleWaveInfoData_SaveData_o *result; // x0
  __int64 v71; // x0

  if ( (byte_4B15CEC & 1) == 0 )
  {
    sub_1BCA7E0(&int___TypeInfo, method, v2);
    sub_1BCA7E0(&BattleWaveInfoData_BattleItemInfo_SaveData___TypeInfo, v5, v6);
    sub_1BCA7E0(&DropInfo_SaveData___TypeInfo, v7, v8);
    sub_1BCA7E0(&BattleWaveInfoData_SaveData_TypeInfo, v9, v10);
    byte_4B15CEC = 1;
  }
  v11 = sub_1BCAA2C(BattleWaveInfoData_SaveData_TypeInfo, method, v2, v3);
  System_Object___ctor((Il2CppObject *)v11, 0LL);
  if ( !v11 )
    goto LABEL_44;
  *(_QWORD *)(v11 + 16) = *(_QWORD *)&this->fields.wave;
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
  v16 = sub_1BCA888(int___TypeInfo, (unsigned int)max_length);
  *(_QWORD *)(v11 + 24) = v16;
  v17 = (__int64 *)(v11 + 24);
  sub_1BCA784((PartyOrganizationUtility_o *)(v11 + 24), v16, v18, v19, v20, v21, v22, v23);
  if ( max_length >= 1 )
  {
    v24 = this->fields.equipSkillChargeNum;
    if ( !v24 )
      goto LABEL_44;
    v25 = *v17;
    v26 = v24->max_length;
    v27 = 0LL;
    v28 = &v24->m_Items[1];
    v29 = *v17 + 32;
    do
    {
      if ( v27 >= v26 )
        goto LABEL_45;
      if ( !v25 )
        goto LABEL_44;
      if ( v27 >= *(unsigned int *)(v25 + 24) )
LABEL_45:
        sub_1BCAA44(IsNullOrEmpty, v13);
      *(_DWORD *)(v29 + 4 * v27) = v28[v27];
      ++v27;
    }
    while ( max_length != v27 );
  }
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.dropInfos, 0LL);
  if ( (IsNullOrEmpty & 1) != 0 )
  {
    v30 = 0;
  }
  else
  {
    dropInfos = this->fields.dropInfos;
    if ( !dropInfos )
      goto LABEL_44;
    v30 = dropInfos->max_length;
  }
  v32 = sub_1BCA888(DropInfo_SaveData___TypeInfo, (unsigned int)v30);
  *(_QWORD *)(v11 + 32) = v32;
  sub_1BCA784((PartyOrganizationUtility_o *)(v11 + 32), v32, v33, v34, v35, v36, v37, v38);
  if ( v30 >= 1 )
  {
    v39 = 0;
    while ( 1 )
    {
      v40 = this->fields.dropInfos;
      if ( !v40 )
        break;
      if ( v39 >= v40->max_length )
        goto LABEL_45;
      IsNullOrEmpty = (__int64)v40->m_Items[v39];
      if ( !IsNullOrEmpty )
        break;
      v41 = *(_DWORD **)(v11 + 32);
      IsNullOrEmpty = (__int64)DropInfo__GetSaveData((DropInfo_o *)IsNullOrEmpty, 0LL);
      if ( !v41 )
        break;
      v48 = IsNullOrEmpty;
      if ( IsNullOrEmpty )
      {
        IsNullOrEmpty = sub_1BCA91C(IsNullOrEmpty, *(_QWORD *)(*(_QWORD *)v41 + 64LL));
        if ( !IsNullOrEmpty )
        {
LABEL_46:
          v71 = sub_1BCAA60(IsNullOrEmpty);
          sub_1BCA908(v71, 0LL);
        }
      }
      if ( v39 >= v41[6] )
        goto LABEL_45;
      v49 = &v41[2 * v39];
      *((_QWORD *)v49 + 4) = v48;
      sub_1BCA784((PartyOrganizationUtility_o *)(v49 + 8), v48, v42, v43, v44, v45, v46, v47);
      if ( v30 == ++v39 )
        goto LABEL_29;
    }
LABEL_44:
    sub_1BCAA3C(IsNullOrEmpty, v13);
  }
LABEL_29:
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.battleItemInfos, 0LL);
  if ( (IsNullOrEmpty & 1) != 0 )
  {
    v50 = 0;
  }
  else
  {
    battleItemInfos = this->fields.battleItemInfos;
    if ( !battleItemInfos )
      goto LABEL_44;
    v50 = battleItemInfos->max_length;
  }
  v52 = sub_1BCA888(BattleWaveInfoData_BattleItemInfo_SaveData___TypeInfo, (unsigned int)v50);
  *(_QWORD *)(v11 + 40) = v52;
  sub_1BCA784((PartyOrganizationUtility_o *)(v11 + 40), v52, v53, v54, v55, v56, v57, v58);
  if ( v50 >= 1 )
  {
    v59 = 0;
    do
    {
      v60 = this->fields.battleItemInfos;
      if ( !v60 )
        goto LABEL_44;
      if ( v59 >= v60->max_length )
        goto LABEL_45;
      IsNullOrEmpty = (__int64)v60->m_Items[v59];
      if ( !IsNullOrEmpty )
        goto LABEL_44;
      v61 = *(_DWORD **)(v11 + 40);
      IsNullOrEmpty = (__int64)BattleWaveInfoData_BattleItemInfo__GetSaveData(
                                 (BattleWaveInfoData_BattleItemInfo_o *)IsNullOrEmpty,
                                 v13);
      if ( !v61 )
        goto LABEL_44;
      v68 = IsNullOrEmpty;
      if ( IsNullOrEmpty )
      {
        IsNullOrEmpty = sub_1BCA91C(IsNullOrEmpty, *(_QWORD *)(*(_QWORD *)v61 + 64LL));
        if ( !IsNullOrEmpty )
          goto LABEL_46;
      }
      if ( v59 >= v61[6] )
        goto LABEL_45;
      v69 = &v61[2 * v59];
      *((_QWORD *)v69 + 4) = v68;
      sub_1BCA784((PartyOrganizationUtility_o *)(v69 + 8), v68, v62, v63, v64, v65, v66, v67);
    }
    while ( v50 != ++v59 );
  }
  result = (BattleWaveInfoData_SaveData_o *)v11;
  *(_DWORD *)(v11 + 48) = this->fields.star;
  return result;
}


void __fastcall BattleWaveInfoData__SetDataFromSaveData(
        BattleWaveInfoData_o *this,
        BattleWaveInfoData_SaveData_o *saveData,
        const MethodInfo *method)
{
  BattleWaveInfoData_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  struct System_Int32_array *equipSkillChargeNum; // x8
  __int64 v14; // x21
  int64_t v15; // x0
  struct System_Int32_array **p_equipSkillChargeNum; // x22
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  struct System_Int32_array *v23; // x12
  struct System_Int32_array *v24; // x9
  unsigned __int64 max_length; // x10
  unsigned __int64 v26; // x8
  int32_t *v27; // x12
  __int64 v28; // x13
  struct DropInfo_SaveData_array *dropInfos; // x8
  __int64 v30; // x22
  int64_t v31; // x0
  unsigned int **p_dropInfos; // x21
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  __int64 v39; // x2
  __int64 v40; // x3
  unsigned __int64 v41; // x23
  __int64 v42; // x25
  __int64 v43; // x26
  DropInfo_o *v44; // x22
  struct DropInfo_SaveData_array *v45; // x8
  unsigned int *v46; // x27
  int64_t v47; // x2
  int32_t v48; // w3
  System_String_o *v49; // x4
  BattleSetupInfo_o *v50; // x5
  FollowerInfo_o *v51; // x6
  PartyListViewItem_o *v52; // x7
  struct BattleWaveInfoData_BattleItemInfo_SaveData_array *battleItemInfos; // x8
  int v54; // w21
  int64_t v55; // x0
  struct BattleWaveInfoData_BattleItemInfo_array **p_battleItemInfos; // x22
  int64_t v57; // x2
  int32_t v58; // w3
  System_String_o *v59; // x4
  BattleSetupInfo_o *v60; // x5
  FollowerInfo_o *v61; // x6
  PartyListViewItem_o *v62; // x7
  __int64 v63; // x1
  __int64 v64; // x2
  __int64 v65; // x3
  il2cpp_array_size_t v66; // w24
  Il2CppObject *v67; // x23
  struct BattleWaveInfoData_BattleItemInfo_SaveData_array *v68; // x8
  BattleWaveInfoData_BattleItemInfo_SaveData_o *v69; // x8
  struct BattleWaveInfoData_BattleItemInfo_array *v70; // x27
  int64_t v71; // x2
  int32_t v72; // w3
  System_String_o *v73; // x4
  BattleSetupInfo_o *v74; // x5
  FollowerInfo_o *v75; // x6
  PartyListViewItem_o *v76; // x7
  Il2CppClass **v77; // x0
  __int64 v78; // x0

  v4 = this;
  if ( (byte_4B15CEB & 1) == 0 )
  {
    sub_1BCA7E0(&BattleWaveInfoData_BattleItemInfo___TypeInfo, saveData, method);
    sub_1BCA7E0(&BattleWaveInfoData_BattleItemInfo_TypeInfo, v5, v6);
    sub_1BCA7E0(&DropInfo___TypeInfo, v7, v8);
    sub_1BCA7E0(&DropInfo_TypeInfo, v9, v10);
    this = (BattleWaveInfoData_o *)sub_1BCA7E0(&int___TypeInfo, v11, v12);
    byte_4B15CEB = 1;
  }
  if ( !saveData )
    goto LABEL_34;
  *(_QWORD *)&v4->fields.wave = *(_QWORD *)&saveData->fields.wave;
  equipSkillChargeNum = saveData->fields.equipSkillChargeNum;
  if ( !equipSkillChargeNum )
    goto LABEL_34;
  v14 = *(_QWORD *)&equipSkillChargeNum->max_length;
  v15 = sub_1BCA888(int___TypeInfo, (unsigned int)v14);
  v4->fields.equipSkillChargeNum = (struct System_Int32_array *)v15;
  p_equipSkillChargeNum = &v4->fields.equipSkillChargeNum;
  sub_1BCA784((PartyOrganizationUtility_o *)&v4->fields.equipSkillChargeNum, v15, v17, v18, v19, v20, v21, v22);
  if ( (int)v14 >= 1 )
  {
    v23 = saveData->fields.equipSkillChargeNum;
    if ( !v23 )
      goto LABEL_34;
    v24 = *p_equipSkillChargeNum;
    max_length = v23->max_length;
    v26 = 0LL;
    v27 = &v23->m_Items[1];
    v28 = (__int64)&(*p_equipSkillChargeNum)->m_Items[1];
    do
    {
      if ( v26 >= max_length )
        goto LABEL_35;
      if ( !v24 )
        goto LABEL_34;
      if ( v26 >= v24->max_length )
LABEL_35:
        sub_1BCAA44(this, saveData);
      *(_DWORD *)(v28 + 4 * v26) = v27[v26];
      ++v26;
    }
    while ( (unsigned int)v14 != v26 );
  }
  dropInfos = saveData->fields.dropInfos;
  if ( !dropInfos )
LABEL_34:
    sub_1BCAA3C(this, saveData);
  v30 = *(_QWORD *)&dropInfos->max_length;
  v31 = sub_1BCA888(DropInfo___TypeInfo, (unsigned int)v30);
  v4->fields.dropInfos = (struct DropInfo_array *)v31;
  p_dropInfos = (unsigned int **)&v4->fields.dropInfos;
  sub_1BCA784((PartyOrganizationUtility_o *)&v4->fields.dropInfos, v31, v33, v34, v35, v36, v37, v38);
  if ( (int)v30 >= 1 )
  {
    v41 = 0LL;
    v42 = (unsigned int)v30;
    v43 = 8LL;
    do
    {
      v44 = (DropInfo_o *)sub_1BCAA2C(DropInfo_TypeInfo, saveData, v39, v40);
      DropInfo___ctor(v44, 0LL);
      v45 = saveData->fields.dropInfos;
      if ( !v45 )
        goto LABEL_34;
      if ( v41 >= v45->max_length )
        goto LABEL_35;
      if ( !v44 )
        goto LABEL_34;
      DropInfo__SetDataFromSaveData(v44, *(DropInfo_SaveData_o **)((char *)&v45->obj.klass + v43 * 4), 0LL);
      v46 = *p_dropInfos;
      if ( !*p_dropInfos )
        goto LABEL_34;
      this = (BattleWaveInfoData_o *)sub_1BCA91C(v44, *(_QWORD *)(*(_QWORD *)v46 + 64LL));
      if ( !this )
      {
LABEL_36:
        v78 = sub_1BCAA60(this);
        sub_1BCA908(v78, 0LL);
      }
      if ( v41 >= v46[6] )
        goto LABEL_35;
      *(_QWORD *)&v46[v43] = v44;
      sub_1BCA784((PartyOrganizationUtility_o *)&v46[v43], (int64_t)v44, v47, v48, v49, v50, v51, v52);
      ++v41;
      v43 += 2LL;
    }
    while ( v42 != v41 );
  }
  battleItemInfos = saveData->fields.battleItemInfos;
  if ( !battleItemInfos )
    goto LABEL_34;
  v54 = battleItemInfos->max_length;
  v55 = sub_1BCA888(BattleWaveInfoData_BattleItemInfo___TypeInfo, (unsigned int)v54);
  v4->fields.battleItemInfos = (struct BattleWaveInfoData_BattleItemInfo_array *)v55;
  p_battleItemInfos = &v4->fields.battleItemInfos;
  sub_1BCA784((PartyOrganizationUtility_o *)&v4->fields.battleItemInfos, v55, v57, v58, v59, v60, v61, v62);
  if ( v54 >= 1 )
  {
    v66 = 0;
    do
    {
      v67 = (Il2CppObject *)sub_1BCAA2C(BattleWaveInfoData_BattleItemInfo_TypeInfo, v63, v64, v65);
      System_Object___ctor(v67, 0LL);
      v68 = saveData->fields.battleItemInfos;
      if ( !v68 )
        goto LABEL_34;
      if ( v66 >= v68->max_length )
        goto LABEL_35;
      if ( !v67 )
        goto LABEL_34;
      v69 = v68->m_Items[v66];
      if ( !v69 )
        goto LABEL_34;
      v67[1].klass = (Il2CppClass *)v69->fields;
      v70 = *p_battleItemInfos;
      if ( !*p_battleItemInfos )
        goto LABEL_34;
      this = (BattleWaveInfoData_o *)sub_1BCA91C(v67, v70->obj.klass->_1.element_class);
      if ( !this )
        goto LABEL_36;
      if ( v66 >= v70->max_length )
        goto LABEL_35;
      v77 = &v70->obj.klass + (int)v66;
      v77[4] = (Il2CppClass *)v67;
      sub_1BCA784((PartyOrganizationUtility_o *)(v77 + 4), (int64_t)v67, v71, v72, v73, v74, v75, v76);
    }
    while ( v54 != ++v66 );
  }
  v4->fields.star = saveData->fields.star;
}


void __fastcall BattleWaveInfoData__SetWaveInfoData(
        BattleWaveInfoData_o *this,
        BattleData_o *battleData,
        const MethodInfo *method)
{
  BattleWaveInfoData_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  struct System_Collections_Generic_List_BattleSkillInfoData__o *masterSkillInfo; // x8
  __int64 size; // x21
  int64_t v23; // x0
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  unsigned __int64 v30; // x23
  struct System_Int32_array *equipSkillChargeNum; // x25
  char *v32; // x9
  struct System_Collections_Generic_List_BattleDropItem__o *droplist; // x8
  __int64 v34; // x21
  int64_t v35; // x0
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  unsigned __int64 v42; // x23
  __int64 v43; // x25
  unsigned int *dropInfos; // x27
  int64_t v45; // x2
  int32_t v46; // w3
  System_String_o *v47; // x4
  BattleSetupInfo_o *v48; // x5
  FollowerInfo_o *v49; // x6
  PartyListViewItem_o *v50; // x7
  BattleWaveInfoData_o *v51; // x24
  int32_t wave; // w23
  BattleWaveInfoData_o *v53; // x21
  int64_t v54; // x0
  int64_t v55; // x2
  int32_t v56; // w3
  System_String_o *v57; // x4
  BattleSetupInfo_o *v58; // x5
  FollowerInfo_o *v59; // x6
  PartyListViewItem_o *v60; // x7
  __int64 v61; // x1
  __int64 v62; // x2
  __int64 v63; // x3
  struct BattleWaveInfoData_BattleItemInfo_array *battleItemInfos; // x22
  Il2CppObject *v65; // x23
  int64_t v66; // x2
  int32_t v67; // w3
  System_String_o *v68; // x4
  BattleSetupInfo_o *v69; // x5
  FollowerInfo_o *v70; // x6
  PartyListViewItem_o *v71; // x7
  __int64 v72; // x0

  v4 = this;
  if ( (byte_4B15CED & 1) == 0 )
  {
    sub_1BCA7E0(&BattleWaveInfoData_BattleItemInfo___TypeInfo, battleData, method);
    sub_1BCA7E0(&BattleWaveInfoData_BattleItemInfo_TypeInfo, v5, v6);
    sub_1BCA7E0(&DropInfo___TypeInfo, v7, v8);
    sub_1BCA7E0(&int___TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleDropItem__get_Count__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleSkillInfoData__get_Count__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleDropItem__get_Item__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleSkillInfoData__get_Item__, v17, v18);
    this = (BattleWaveInfoData_o *)sub_1BCA7E0(&Method_SingletonTemplate_BattleItemData__get_Instance__, v19, v20);
    byte_4B15CED = 1;
  }
  if ( !battleData )
    goto LABEL_31;
  this = (BattleWaveInfoData_o *)BattleData__getDispWaveCount(battleData, 0LL);
  v4->fields.wave = (int)this;
  v4->fields.turn = battleData->fields.totalTurnCount + 1;
  masterSkillInfo = battleData->fields.masterSkillInfo;
  if ( !masterSkillInfo )
    goto LABEL_31;
  size = (unsigned int)masterSkillInfo->fields._size;
  v23 = sub_1BCA888(int___TypeInfo, (unsigned int)size);
  v4->fields.equipSkillChargeNum = (struct System_Int32_array *)v23;
  sub_1BCA784((PartyOrganizationUtility_o *)&v4->fields.equipSkillChargeNum, v23, v24, v25, v26, v27, v28, v29);
  if ( (int)size >= 1 )
  {
    v30 = 0LL;
    while ( 1 )
    {
      this = (BattleWaveInfoData_o *)battleData->fields.masterSkillInfo;
      if ( !this )
        break;
      equipSkillChargeNum = v4->fields.equipSkillChargeNum;
      this = (BattleWaveInfoData_o *)System_Collections_Generic_List_object___get_Item(
                                       (System_Collections_Generic_List_object__o *)this,
                                       v30,
                                       (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_BattleSkillInfoData__get_Item__);
      if ( !this || !equipSkillChargeNum )
        break;
      if ( v30 >= equipSkillChargeNum->max_length )
        goto LABEL_32;
      v32 = (char *)equipSkillChargeNum + 4 * v30++;
      *((_DWORD *)v32 + 8) = this->fields.battleItemInfos;
      if ( size == v30 )
        goto LABEL_12;
    }
LABEL_31:
    sub_1BCAA3C(this, battleData);
  }
LABEL_12:
  this = (BattleWaveInfoData_o *)BasicHelper__IsNullOrEmpty(
                                   (System_Collections_ICollection_o *)battleData->fields.droplist,
                                   0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    droplist = battleData->fields.droplist;
    if ( !droplist )
      goto LABEL_31;
    v34 = (unsigned int)droplist->fields._size;
    v35 = sub_1BCA888(DropInfo___TypeInfo, (unsigned int)v34);
    v4->fields.dropInfos = (struct DropInfo_array *)v35;
    sub_1BCA784((PartyOrganizationUtility_o *)&v4->fields.dropInfos, v35, v36, v37, v38, v39, v40, v41);
    if ( (int)v34 >= 1 )
    {
      v42 = 0LL;
      v43 = 8LL;
      do
      {
        this = (BattleWaveInfoData_o *)battleData->fields.droplist;
        if ( !this )
          goto LABEL_31;
        dropInfos = (unsigned int *)v4->fields.dropInfos;
        this = (BattleWaveInfoData_o *)System_Collections_Generic_List_object___get_Item(
                                         (System_Collections_Generic_List_object__o *)this,
                                         v42,
                                         (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_BattleDropItem__get_Item__);
        if ( !this )
          goto LABEL_31;
        this = (BattleWaveInfoData_o *)BattleDropItem__GetDropInfo((BattleDropItem_o *)this, 0LL);
        if ( !dropInfos )
          goto LABEL_31;
        v51 = this;
        if ( this )
        {
          this = (BattleWaveInfoData_o *)sub_1BCA91C(this, *(_QWORD *)(*(_QWORD *)dropInfos + 64LL));
          if ( !this )
            goto LABEL_33;
        }
        if ( v42 >= dropInfos[6] )
          goto LABEL_32;
        *(_QWORD *)&dropInfos[v43] = v51;
        sub_1BCA784((PartyOrganizationUtility_o *)&dropInfos[v43], (int64_t)v51, v45, v46, v47, v48, v49, v50);
        ++v42;
        v43 += 2LL;
      }
      while ( v34 != v42 );
    }
  }
  this = (BattleWaveInfoData_o *)SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_BattleItemData__get_Instance__);
  if ( !this )
    goto LABEL_31;
  wave = this->fields.wave;
  v53 = this;
  v54 = sub_1BCA888(BattleWaveInfoData_BattleItemInfo___TypeInfo, wave > 0);
  v4->fields.battleItemInfos = (struct BattleWaveInfoData_BattleItemInfo_array *)v54;
  sub_1BCA784((PartyOrganizationUtility_o *)&v4->fields.battleItemInfos, v54, v55, v56, v57, v58, v59, v60);
  if ( wave >= 1 )
  {
    battleItemInfos = v4->fields.battleItemInfos;
    v65 = (Il2CppObject *)sub_1BCAA2C(BattleWaveInfoData_BattleItemInfo_TypeInfo, v61, v62, v63);
    System_Object___ctor(v65, 0LL);
    if ( !v65 )
      goto LABEL_31;
    v65[1].klass = *(Il2CppClass **)&v53->fields.wave;
    if ( !battleItemInfos )
      goto LABEL_31;
    this = (BattleWaveInfoData_o *)sub_1BCA91C(v65, battleItemInfos->obj.klass->_1.element_class);
    if ( !this )
    {
LABEL_33:
      v72 = sub_1BCAA60(this);
      sub_1BCA908(v72, 0LL);
    }
    if ( !battleItemInfos->max_length )
LABEL_32:
      sub_1BCAA44(this, battleData);
    battleItemInfos->m_Items[0] = (BattleWaveInfoData_BattleItemInfo_o *)v65;
    sub_1BCA784((PartyOrganizationUtility_o *)battleItemInfos->m_Items, (int64_t)v65, v66, v67, v68, v69, v70, v71);
  }
  v4->fields.star = battleData->fields.criticalstars;
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
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  BattleWaveInfoData_BattleItemInfo_SaveData_o *result; // x0

  if ( (byte_4B15CEE & 1) == 0 )
  {
    sub_1BCA7E0(&BattleWaveInfoData_BattleItemInfo_SaveData_TypeInfo, method, v2);
    byte_4B15CEE = 1;
  }
  v5 = sub_1BCAA2C(BattleWaveInfoData_BattleItemInfo_SaveData_TypeInfo, method, v2, v3);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5 )
    sub_1BCAA3C(v6, v7);
  result = (BattleWaveInfoData_BattleItemInfo_SaveData_o *)v5;
  *(BattleWaveInfoData_BattleItemInfo_Fields *)(v5 + 16) = this->fields;
  return result;
}


void __fastcall BattleWaveInfoData_BattleItemInfo__SetDataFromSaveData(
        BattleWaveInfoData_BattleItemInfo_o *this,
        BattleWaveInfoData_BattleItemInfo_SaveData_o *saveData,
        const MethodInfo *method)
{
  if ( !saveData )
    sub_1BCAA3C(this, 0LL);
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