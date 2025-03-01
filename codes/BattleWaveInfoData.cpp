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
  int64_t v11; // x0
  __int64 *v12; // x22
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  struct System_Int32_array *v19; // x12
  __int64 v20; // x9
  unsigned __int64 v21; // x10
  unsigned __int64 v22; // x8
  int32_t *v23; // x12
  __int64 v24; // x13
  int v25; // w21
  struct DropInfo_array *dropInfos; // x8
  int64_t v27; // x0
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  il2cpp_array_size_t v34; // w24
  struct DropInfo_array *v35; // x8
  _DWORD *v36; // x26
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7
  int64_t v43; // x23
  _DWORD *v44; // x0
  int v45; // w21
  struct BattleWaveInfoData_BattleItemInfo_array *battleItemInfos; // x8
  int64_t v47; // x0
  int64_t v48; // x2
  int32_t v49; // w3
  System_String_o *v50; // x4
  BattleSetupInfo_o *v51; // x5
  FollowerInfo_o *v52; // x6
  PartyListViewItem_o *v53; // x7
  int64_t v54; // x2
  int32_t v55; // w3
  System_String_o *v56; // x4
  BattleSetupInfo_o *v57; // x5
  FollowerInfo_o *v58; // x6
  PartyListViewItem_o *v59; // x7
  il2cpp_array_size_t v60; // w24
  struct BattleWaveInfoData_BattleItemInfo_array *v61; // x8
  _DWORD *v62; // x26
  int64_t v63; // x2
  int32_t v64; // w3
  System_String_o *v65; // x4
  BattleSetupInfo_o *v66; // x5
  FollowerInfo_o *v67; // x6
  PartyListViewItem_o *v68; // x7
  int64_t v69; // x23
  _DWORD *v70; // x0
  struct System_String_array *enemySvtInfos; // x1
  struct System_Collections_Generic_Dictionary_int__int__o *battleFlag; // x1
  int64_t v73; // x2
  int32_t v74; // w3
  System_String_o *v75; // x4
  BattleSetupInfo_o *v76; // x5
  FollowerInfo_o *v77; // x6
  PartyListViewItem_o *v78; // x7
  struct System_String_o *fieldEnvironmentData; // x1
  int64_t v80; // x2
  int32_t v81; // w3
  System_String_o *v82; // x4
  BattleSetupInfo_o *v83; // x5
  FollowerInfo_o *v84; // x6
  PartyListViewItem_o *v85; // x7
  __int64 v87; // x0

  if ( (byte_4BFD236 & 1) == 0 )
  {
    sub_1C2E12C(&int___TypeInfo, method);
    sub_1C2E12C(&BattleWaveInfoData_BattleItemInfo_SaveData___TypeInfo, v3);
    sub_1C2E12C(&DropInfo_SaveData___TypeInfo, v4);
    sub_1C2E12C(&BattleWaveInfoData_SaveData_TypeInfo, v5);
    byte_4BFD236 = 1;
  }
  v6 = sub_1C2E378(BattleWaveInfoData_SaveData_TypeInfo);
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
  v11 = sub_1C2E1D4(int___TypeInfo, (unsigned int)max_length);
  *(_QWORD *)(v6 + 24) = v11;
  v12 = (__int64 *)(v6 + 24);
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v6 + 24), v11, v13, v14, v15, v16, v17, v18);
  if ( max_length >= 1 )
  {
    v19 = this->fields.equipSkillChargeNum;
    if ( !v19 )
      goto LABEL_44;
    v20 = *v12;
    v21 = v19->max_length;
    v22 = 0LL;
    v23 = &v19->m_Items[1];
    v24 = *v12 + 32;
    do
    {
      if ( v22 >= v21 )
        goto LABEL_45;
      if ( !v20 )
        goto LABEL_44;
      if ( v22 >= *(unsigned int *)(v20 + 24) )
LABEL_45:
        sub_1C2E390(IsNullOrEmpty, v8);
      *(_DWORD *)(v24 + 4 * v22) = v23[v22];
      ++v22;
    }
    while ( max_length != v22 );
  }
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.dropInfos, 0LL);
  if ( (IsNullOrEmpty & 1) != 0 )
  {
    v25 = 0;
  }
  else
  {
    dropInfos = this->fields.dropInfos;
    if ( !dropInfos )
      goto LABEL_44;
    v25 = dropInfos->max_length;
  }
  v27 = sub_1C2E1D4(DropInfo_SaveData___TypeInfo, (unsigned int)v25);
  *(_QWORD *)(v6 + 32) = v27;
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v6 + 32), v27, v28, v29, v30, v31, v32, v33);
  if ( v25 >= 1 )
  {
    v34 = 0;
    while ( 1 )
    {
      v35 = this->fields.dropInfos;
      if ( !v35 )
        break;
      if ( v34 >= v35->max_length )
        goto LABEL_45;
      IsNullOrEmpty = (__int64)v35->m_Items[v34];
      if ( !IsNullOrEmpty )
        break;
      v36 = *(_DWORD **)(v6 + 32);
      IsNullOrEmpty = (__int64)DropInfo__GetSaveData((DropInfo_o *)IsNullOrEmpty, 0LL);
      if ( !v36 )
        break;
      v43 = IsNullOrEmpty;
      if ( IsNullOrEmpty )
      {
        IsNullOrEmpty = sub_1C2E268(IsNullOrEmpty, *(_QWORD *)(*(_QWORD *)v36 + 64LL));
        if ( !IsNullOrEmpty )
        {
LABEL_46:
          v87 = sub_1C2E3AC(IsNullOrEmpty);
          sub_1C2E254(v87, 0LL);
        }
      }
      if ( v34 >= v36[6] )
        goto LABEL_45;
      v44 = &v36[2 * v34];
      *((_QWORD *)v44 + 4) = v43;
      sub_1C2E0D0((PartyOrganizationUtility_o *)(v44 + 8), v43, v37, v38, v39, v40, v41, v42);
      if ( v25 == ++v34 )
        goto LABEL_29;
    }
LABEL_44:
    sub_1C2E388(IsNullOrEmpty, v8);
  }
LABEL_29:
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.battleItemInfos, 0LL);
  if ( (IsNullOrEmpty & 1) != 0 )
  {
    v45 = 0;
  }
  else
  {
    battleItemInfos = this->fields.battleItemInfos;
    if ( !battleItemInfos )
      goto LABEL_44;
    v45 = battleItemInfos->max_length;
  }
  v47 = sub_1C2E1D4(BattleWaveInfoData_BattleItemInfo_SaveData___TypeInfo, (unsigned int)v45);
  *(_QWORD *)(v6 + 40) = v47;
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v6 + 40), v47, v48, v49, v50, v51, v52, v53);
  if ( v45 >= 1 )
  {
    v60 = 0;
    do
    {
      v61 = this->fields.battleItemInfos;
      if ( !v61 )
        goto LABEL_44;
      if ( v60 >= v61->max_length )
        goto LABEL_45;
      IsNullOrEmpty = (__int64)v61->m_Items[v60];
      if ( !IsNullOrEmpty )
        goto LABEL_44;
      v62 = *(_DWORD **)(v6 + 40);
      IsNullOrEmpty = (__int64)BattleWaveInfoData_BattleItemInfo__GetSaveData(
                                 (BattleWaveInfoData_BattleItemInfo_o *)IsNullOrEmpty,
                                 v8);
      if ( !v62 )
        goto LABEL_44;
      v69 = IsNullOrEmpty;
      if ( IsNullOrEmpty )
      {
        IsNullOrEmpty = sub_1C2E268(IsNullOrEmpty, *(_QWORD *)(*(_QWORD *)v62 + 64LL));
        if ( !IsNullOrEmpty )
          goto LABEL_46;
      }
      if ( v60 >= v62[6] )
        goto LABEL_45;
      v70 = &v62[2 * v60];
      *((_QWORD *)v70 + 4) = v69;
      sub_1C2E0D0((PartyOrganizationUtility_o *)(v70 + 8), v69, v63, v64, v65, v66, v67, v68);
    }
    while ( v45 != ++v60 );
  }
  *(_DWORD *)(v6 + 48) = this->fields.star;
  enemySvtInfos = this->fields.enemySvtInfos;
  *(_QWORD *)(v6 + 56) = enemySvtInfos;
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v6 + 56), (int64_t)enemySvtInfos, v54, v55, v56, v57, v58, v59);
  battleFlag = this->fields.battleFlag;
  *(_QWORD *)(v6 + 64) = battleFlag;
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v6 + 64), (int64_t)battleFlag, v73, v74, v75, v76, v77, v78);
  fieldEnvironmentData = this->fields.fieldEnvironmentData;
  *(_QWORD *)(v6 + 72) = fieldEnvironmentData;
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v6 + 72), (int64_t)fieldEnvironmentData, v80, v81, v82, v83, v84, v85);
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
  int64_t v11; // x0
  struct System_Int32_array **p_equipSkillChargeNum; // x22
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  struct System_Int32_array *v19; // x12
  struct System_Int32_array *v20; // x9
  unsigned __int64 max_length; // x10
  unsigned __int64 v22; // x8
  int32_t *v23; // x12
  __int64 v24; // x13
  struct DropInfo_SaveData_array *dropInfos; // x8
  __int64 v26; // x22
  int64_t v27; // x0
  unsigned int **p_dropInfos; // x21
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  unsigned __int64 v35; // x23
  __int64 v36; // x25
  __int64 v37; // x26
  DropInfo_o *v38; // x22
  struct DropInfo_SaveData_array *v39; // x8
  unsigned int *v40; // x27
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7
  struct BattleWaveInfoData_BattleItemInfo_SaveData_array *battleItemInfos; // x8
  int v48; // w21
  int64_t v49; // x0
  struct BattleWaveInfoData_BattleItemInfo_array **p_battleItemInfos; // x22
  int64_t v51; // x2
  int32_t v52; // w3
  System_String_o *v53; // x4
  BattleSetupInfo_o *v54; // x5
  FollowerInfo_o *v55; // x6
  PartyListViewItem_o *v56; // x7
  int64_t v57; // x2
  int32_t v58; // w3
  System_String_o *v59; // x4
  BattleSetupInfo_o *v60; // x5
  FollowerInfo_o *v61; // x6
  PartyListViewItem_o *v62; // x7
  il2cpp_array_size_t v63; // w24
  Il2CppObject *v64; // x23
  struct BattleWaveInfoData_BattleItemInfo_SaveData_array *v65; // x8
  BattleWaveInfoData_BattleItemInfo_SaveData_o *v66; // x8
  struct BattleWaveInfoData_BattleItemInfo_array *v67; // x27
  int64_t v68; // x2
  int32_t v69; // w3
  System_String_o *v70; // x4
  BattleSetupInfo_o *v71; // x5
  FollowerInfo_o *v72; // x6
  PartyListViewItem_o *v73; // x7
  Il2CppClass **v74; // x0
  struct System_String_array *enemySvtInfos; // x1
  struct System_Collections_Generic_Dictionary_int__int__o *battleFlag; // x1
  int64_t v77; // x2
  int32_t v78; // w3
  System_String_o *v79; // x4
  BattleSetupInfo_o *v80; // x5
  FollowerInfo_o *v81; // x6
  PartyListViewItem_o *v82; // x7
  __int64 v83; // x0

  v4 = this;
  if ( (byte_4BFD235 & 1) == 0 )
  {
    sub_1C2E12C(&BattleWaveInfoData_BattleItemInfo___TypeInfo, saveData);
    sub_1C2E12C(&BattleWaveInfoData_BattleItemInfo_TypeInfo, v5);
    sub_1C2E12C(&DropInfo___TypeInfo, v6);
    sub_1C2E12C(&DropInfo_TypeInfo, v7);
    this = (BattleWaveInfoData_o *)sub_1C2E12C(&int___TypeInfo, v8);
    byte_4BFD235 = 1;
  }
  if ( !saveData )
    goto LABEL_34;
  *(_QWORD *)&v4->fields.wave = *(_QWORD *)&saveData->fields.wave;
  equipSkillChargeNum = saveData->fields.equipSkillChargeNum;
  if ( !equipSkillChargeNum )
    goto LABEL_34;
  v10 = *(_QWORD *)&equipSkillChargeNum->max_length;
  v11 = sub_1C2E1D4(int___TypeInfo, (unsigned int)v10);
  v4->fields.equipSkillChargeNum = (struct System_Int32_array *)v11;
  p_equipSkillChargeNum = &v4->fields.equipSkillChargeNum;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&v4->fields.equipSkillChargeNum, v11, v13, v14, v15, v16, v17, v18);
  if ( (int)v10 >= 1 )
  {
    v19 = saveData->fields.equipSkillChargeNum;
    if ( !v19 )
      goto LABEL_34;
    v20 = *p_equipSkillChargeNum;
    max_length = v19->max_length;
    v22 = 0LL;
    v23 = &v19->m_Items[1];
    v24 = (__int64)&(*p_equipSkillChargeNum)->m_Items[1];
    do
    {
      if ( v22 >= max_length )
        goto LABEL_35;
      if ( !v20 )
        goto LABEL_34;
      if ( v22 >= v20->max_length )
LABEL_35:
        sub_1C2E390(this, saveData);
      *(_DWORD *)(v24 + 4 * v22) = v23[v22];
      ++v22;
    }
    while ( (unsigned int)v10 != v22 );
  }
  dropInfos = saveData->fields.dropInfos;
  if ( !dropInfos )
LABEL_34:
    sub_1C2E388(this, saveData);
  v26 = *(_QWORD *)&dropInfos->max_length;
  v27 = sub_1C2E1D4(DropInfo___TypeInfo, (unsigned int)v26);
  v4->fields.dropInfos = (struct DropInfo_array *)v27;
  p_dropInfos = (unsigned int **)&v4->fields.dropInfos;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&v4->fields.dropInfos, v27, v29, v30, v31, v32, v33, v34);
  if ( (int)v26 >= 1 )
  {
    v35 = 0LL;
    v36 = (unsigned int)v26;
    v37 = 8LL;
    do
    {
      v38 = (DropInfo_o *)sub_1C2E378(DropInfo_TypeInfo);
      DropInfo___ctor(v38, 0LL);
      v39 = saveData->fields.dropInfos;
      if ( !v39 )
        goto LABEL_34;
      if ( v35 >= v39->max_length )
        goto LABEL_35;
      if ( !v38 )
        goto LABEL_34;
      DropInfo__SetDataFromSaveData(v38, *(DropInfo_SaveData_o **)((char *)&v39->obj.klass + v37 * 4), 0LL);
      v40 = *p_dropInfos;
      if ( !*p_dropInfos )
        goto LABEL_34;
      this = (BattleWaveInfoData_o *)sub_1C2E268(v38, *(_QWORD *)(*(_QWORD *)v40 + 64LL));
      if ( !this )
      {
LABEL_36:
        v83 = sub_1C2E3AC(this);
        sub_1C2E254(v83, 0LL);
      }
      if ( v35 >= v40[6] )
        goto LABEL_35;
      *(_QWORD *)&v40[v37] = v38;
      sub_1C2E0D0((PartyOrganizationUtility_o *)&v40[v37], (int64_t)v38, v41, v42, v43, v44, v45, v46);
      ++v35;
      v37 += 2LL;
    }
    while ( v36 != v35 );
  }
  battleItemInfos = saveData->fields.battleItemInfos;
  if ( !battleItemInfos )
    goto LABEL_34;
  v48 = battleItemInfos->max_length;
  v49 = sub_1C2E1D4(BattleWaveInfoData_BattleItemInfo___TypeInfo, (unsigned int)v48);
  v4->fields.battleItemInfos = (struct BattleWaveInfoData_BattleItemInfo_array *)v49;
  p_battleItemInfos = &v4->fields.battleItemInfos;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&v4->fields.battleItemInfos, v49, v51, v52, v53, v54, v55, v56);
  if ( v48 >= 1 )
  {
    v63 = 0;
    do
    {
      v64 = (Il2CppObject *)sub_1C2E378(BattleWaveInfoData_BattleItemInfo_TypeInfo);
      System_Object___ctor(v64, 0LL);
      v65 = saveData->fields.battleItemInfos;
      if ( !v65 )
        goto LABEL_34;
      if ( v63 >= v65->max_length )
        goto LABEL_35;
      if ( !v64 )
        goto LABEL_34;
      v66 = v65->m_Items[v63];
      if ( !v66 )
        goto LABEL_34;
      v64[1].klass = (Il2CppClass *)v66->fields;
      v67 = *p_battleItemInfos;
      if ( !*p_battleItemInfos )
        goto LABEL_34;
      this = (BattleWaveInfoData_o *)sub_1C2E268(v64, v67->obj.klass->_1.element_class);
      if ( !this )
        goto LABEL_36;
      if ( v63 >= v67->max_length )
        goto LABEL_35;
      v74 = &v67->obj.klass + (int)v63;
      v74[4] = (Il2CppClass *)v64;
      sub_1C2E0D0((PartyOrganizationUtility_o *)(v74 + 4), (int64_t)v64, v68, v69, v70, v71, v72, v73);
    }
    while ( v48 != ++v63 );
  }
  v4->fields.star = saveData->fields.star;
  enemySvtInfos = saveData->fields.enemySvtInfos;
  v4->fields.enemySvtInfos = enemySvtInfos;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v4->fields.enemySvtInfos,
    (int64_t)enemySvtInfos,
    v57,
    v58,
    v59,
    v60,
    v61,
    v62);
  battleFlag = saveData->fields.battleFlag;
  v4->fields.battleFlag = battleFlag;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&v4->fields.battleFlag, (int64_t)battleFlag, v77, v78, v79, v80, v81, v82);
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
  int64_t v20; // x0
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  unsigned __int64 v27; // x24
  struct System_Int32_array *equipSkillChargeNum; // x26
  char *v29; // x9
  struct System_Collections_Generic_List_BattleDropItem__o *droplist; // x8
  __int64 v31; // x22
  int64_t v32; // x0
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  unsigned __int64 v39; // x24
  __int64 v40; // x26
  unsigned int *dropInfos; // x28
  int64_t v42; // x2
  int32_t v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7
  BattleWaveInfoData_o *v48; // x25
  int32_t wave; // w24
  BattleWaveInfoData_o *v50; // x22
  int64_t v51; // x0
  int64_t v52; // x2
  int32_t v53; // w3
  System_String_o *v54; // x4
  BattleSetupInfo_o *v55; // x5
  FollowerInfo_o *v56; // x6
  PartyListViewItem_o *v57; // x7
  struct BattleWaveInfoData_BattleItemInfo_array *battleItemInfos; // x23
  Il2CppObject *v59; // x24
  int64_t v60; // x2
  int32_t v61; // w3
  System_String_o *v62; // x4
  BattleSetupInfo_o *v63; // x5
  FollowerInfo_o *v64; // x6
  PartyListViewItem_o *v65; // x7
  int64_t v66; // x0
  int64_t v67; // x2
  int32_t v68; // w3
  System_String_o *v69; // x4
  BattleSetupInfo_o *v70; // x5
  FollowerInfo_o *v71; // x6
  PartyListViewItem_o *v72; // x7
  __int64 v73; // x8
  unsigned __int64 v74; // x23
  __int64 v75; // x24
  struct System_String_array *enemySvtInfos; // x26
  int64_t v77; // x2
  int32_t v78; // w3
  System_String_o *v79; // x4
  BattleSetupInfo_o *v80; // x5
  FollowerInfo_o *v81; // x6
  PartyListViewItem_o *v82; // x7
  struct System_Int32_array *v83; // x1
  System_Collections_Generic_Dictionary_int__int__o *BattleValueDict; // x0
  int64_t v85; // x2
  int32_t v86; // w3
  System_String_o *v87; // x4
  BattleSetupInfo_o *v88; // x5
  FollowerInfo_o *v89; // x6
  PartyListViewItem_o *v90; // x7
  Il2CppObject *SaveData; // x0
  int64_t v92; // x2
  int32_t v93; // w3
  System_String_o *v94; // x4
  BattleSetupInfo_o *v95; // x5
  FollowerInfo_o *v96; // x6
  PartyListViewItem_o *v97; // x7
  struct System_Int32_array *v98; // x1
  __int64 v99; // x0

  v6 = this;
  if ( (byte_4BFD237 & 1) == 0 )
  {
    sub_1C2E12C(&BattleWaveInfoData_BattleItemInfo___TypeInfo, battleData);
    sub_1C2E12C(&BattleWaveInfoData_BattleItemInfo_TypeInfo, v7);
    sub_1C2E12C(&Method_ByteCompressor_ImportMiniMessagePack_BattleFieldEnvironmentData_SaveData___, v8);
    sub_1C2E12C(&Method_ByteCompressor_ImportMiniMessagePack_BattleServantData_SaveData___, v9);
    sub_1C2E12C(&DropInfo___TypeInfo, v10);
    sub_1C2E12C(&int___TypeInfo, v11);
    sub_1C2E12C(&Method_System_Collections_Generic_List_BattleDropItem__get_Count__, v12);
    sub_1C2E12C(&Method_System_Collections_Generic_List_BattleSkillInfoData__get_Count__, v13);
    sub_1C2E12C(&Method_System_Collections_Generic_List_BattleDropItem__get_Item__, v14);
    sub_1C2E12C(&Method_System_Collections_Generic_List_BattleSkillInfoData__get_Item__, v15);
    sub_1C2E12C(&Method_SingletonTemplate_BattleItemData__get_Instance__, v16);
    this = (BattleWaveInfoData_o *)sub_1C2E12C(&string___TypeInfo, v17);
    byte_4BFD237 = 1;
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
  v20 = sub_1C2E1D4(int___TypeInfo, (unsigned int)size);
  v6->fields.equipSkillChargeNum = (struct System_Int32_array *)v20;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&v6->fields.equipSkillChargeNum, v20, v21, v22, v23, v24, v25, v26);
  if ( (int)size >= 1 )
  {
    v27 = 0LL;
    while ( 1 )
    {
      this = (BattleWaveInfoData_o *)battleData->fields.masterSkillInfo;
      if ( !this )
        break;
      equipSkillChargeNum = v6->fields.equipSkillChargeNum;
      this = (BattleWaveInfoData_o *)System_Collections_Generic_List_object___get_Item(
                                       (System_Collections_Generic_List_object__o *)this,
                                       v27,
                                       (const MethodInfo_366B5DC *)Method_System_Collections_Generic_List_BattleSkillInfoData__get_Item__);
      if ( !this || !equipSkillChargeNum )
        break;
      if ( v27 >= equipSkillChargeNum->max_length )
        goto LABEL_48;
      v29 = (char *)equipSkillChargeNum + 4 * v27++;
      *((_DWORD *)v29 + 8) = this->fields.battleItemInfos;
      if ( size == v27 )
        goto LABEL_12;
    }
LABEL_47:
    sub_1C2E388(this, battleData);
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
    v31 = (unsigned int)droplist->fields._size;
    v32 = sub_1C2E1D4(DropInfo___TypeInfo, (unsigned int)v31);
    v6->fields.dropInfos = (struct DropInfo_array *)v32;
    sub_1C2E0D0((PartyOrganizationUtility_o *)&v6->fields.dropInfos, v32, v33, v34, v35, v36, v37, v38);
    if ( (int)v31 >= 1 )
    {
      v39 = 0LL;
      v40 = 8LL;
      do
      {
        this = (BattleWaveInfoData_o *)battleData->fields.droplist;
        if ( !this )
          goto LABEL_47;
        dropInfos = (unsigned int *)v6->fields.dropInfos;
        this = (BattleWaveInfoData_o *)System_Collections_Generic_List_object___get_Item(
                                         (System_Collections_Generic_List_object__o *)this,
                                         v39,
                                         (const MethodInfo_366B5DC *)Method_System_Collections_Generic_List_BattleDropItem__get_Item__);
        if ( !this )
          goto LABEL_47;
        this = (BattleWaveInfoData_o *)BattleDropItem__GetDropInfo((BattleDropItem_o *)this, 0LL);
        if ( !dropInfos )
          goto LABEL_47;
        v48 = this;
        if ( this )
        {
          this = (BattleWaveInfoData_o *)sub_1C2E268(this, *(_QWORD *)(*(_QWORD *)dropInfos + 64LL));
          if ( !this )
            goto LABEL_49;
        }
        if ( v39 >= dropInfos[6] )
          goto LABEL_48;
        *(_QWORD *)&dropInfos[v40] = v48;
        sub_1C2E0D0((PartyOrganizationUtility_o *)&dropInfos[v40], (int64_t)v48, v42, v43, v44, v45, v46, v47);
        ++v39;
        v40 += 2LL;
      }
      while ( v31 != v39 );
    }
  }
  this = (BattleWaveInfoData_o *)SingletonTemplate_object___get_Instance((const MethodInfo_38A83B0 *)Method_SingletonTemplate_BattleItemData__get_Instance__);
  if ( !this )
    goto LABEL_47;
  wave = this->fields.wave;
  v50 = this;
  v51 = sub_1C2E1D4(BattleWaveInfoData_BattleItemInfo___TypeInfo, wave > 0);
  v6->fields.battleItemInfos = (struct BattleWaveInfoData_BattleItemInfo_array *)v51;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&v6->fields.battleItemInfos, v51, v52, v53, v54, v55, v56, v57);
  if ( wave >= 1 )
  {
    battleItemInfos = v6->fields.battleItemInfos;
    v59 = (Il2CppObject *)sub_1C2E378(BattleWaveInfoData_BattleItemInfo_TypeInfo);
    System_Object___ctor(v59, 0LL);
    if ( !v59 )
      goto LABEL_47;
    v59[1].klass = *(Il2CppClass **)&v50->fields.wave;
    if ( !battleItemInfos )
      goto LABEL_47;
    this = (BattleWaveInfoData_o *)sub_1C2E268(v59, battleItemInfos->obj.klass->_1.element_class);
    if ( !this )
    {
LABEL_49:
      v99 = sub_1C2E3AC(this);
      sub_1C2E254(v99, 0LL);
    }
    if ( !battleItemInfos->max_length )
LABEL_48:
      sub_1C2E390(this, battleData);
    battleItemInfos->m_Items[0] = (BattleWaveInfoData_BattleItemInfo_o *)v59;
    sub_1C2E0D0((PartyOrganizationUtility_o *)battleItemInfos->m_Items, (int64_t)v59, v60, v61, v62, v63, v64, v65);
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
    v66 = sub_1C2E1D4(string___TypeInfo, enemySaveData->max_length);
    v6->fields.enemySvtInfos = (struct System_String_array *)v66;
    sub_1C2E0D0((PartyOrganizationUtility_o *)&v6->fields.enemySvtInfos, v66, v67, v68, v69, v70, v71, v72);
    v73 = *(_QWORD *)&enemySaveData->max_length;
    if ( (int)v73 >= 1 )
    {
      v74 = 0LL;
      v75 = 32LL;
      while ( v74 < (unsigned int)v73 )
      {
        enemySvtInfos = v6->fields.enemySvtInfos;
        this = (BattleWaveInfoData_o *)ByteCompressor__ImportMiniMessagePack_object_(
                                         *(Il2CppObject **)((char *)&enemySaveData->obj.klass + v75),
                                         (const MethodInfo_2FC41E0 *)Method_ByteCompressor_ImportMiniMessagePack_BattleServantData_SaveData___);
        if ( !this )
          goto LABEL_47;
        this = (BattleWaveInfoData_o *)ByteCompressor__ToGzip((ByteCompressor_o *)this, 0LL);
        if ( !this )
          goto LABEL_47;
        this = (BattleWaveInfoData_o *)ByteCompressor__ToBase64Str((ByteCompressor_o *)this, 0LL);
        if ( !this || !enemySvtInfos )
          goto LABEL_47;
        if ( v74 >= enemySvtInfos->max_length )
          goto LABEL_48;
        v83 = this->fields.equipSkillChargeNum;
        *(Il2CppClass **)((char *)&enemySvtInfos->obj.klass + v75) = (Il2CppClass *)v83;
        sub_1C2E0D0(
          (PartyOrganizationUtility_o *)((char *)enemySvtInfos + v75),
          (int64_t)v83,
          v77,
          v78,
          v79,
          v80,
          v81,
          v82);
        LODWORD(v73) = enemySaveData->max_length;
        ++v74;
        v75 += 8LL;
        if ( (__int64)v74 >= (int)v73 )
          goto LABEL_42;
      }
      goto LABEL_48;
    }
  }
LABEL_42:
  BattleValueDict = BattleData__GetBattleValueDict(battleData, 0LL);
  v6->fields.battleFlag = BattleValueDict;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v6->fields.battleFlag,
    (int64_t)BattleValueDict,
    v85,
    v86,
    v87,
    v88,
    v89,
    v90);
  this = (BattleWaveInfoData_o *)battleData->fields._FieldEnvData_k__BackingField;
  if ( !this )
    goto LABEL_47;
  SaveData = (Il2CppObject *)BattleFieldEnvironmentData__GetSaveData((BattleFieldEnvironmentData_o *)this, 0LL);
  this = (BattleWaveInfoData_o *)ByteCompressor__ImportMiniMessagePack_object_(
                                   SaveData,
                                   (const MethodInfo_2FC41E0 *)Method_ByteCompressor_ImportMiniMessagePack_BattleFieldEnvironmentData_SaveData___);
  if ( !this )
    goto LABEL_47;
  this = (BattleWaveInfoData_o *)ByteCompressor__ToGzip((ByteCompressor_o *)this, 0LL);
  if ( !this )
    goto LABEL_47;
  this = (BattleWaveInfoData_o *)ByteCompressor__ToBase64Str((ByteCompressor_o *)this, 0LL);
  if ( !this )
    goto LABEL_47;
  v98 = this->fields.equipSkillChargeNum;
  v6->fields.fieldEnvironmentData = (struct System_String_o *)v98;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v6->fields.fieldEnvironmentData,
    (int64_t)v98,
    v92,
    v93,
    v94,
    v95,
    v96,
    v97);
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

  if ( (byte_4BFD238 & 1) == 0 )
  {
    sub_1C2E12C(&BattleWaveInfoData_BattleItemInfo_SaveData_TypeInfo, method);
    byte_4BFD238 = 1;
  }
  v3 = sub_1C2E378(BattleWaveInfoData_BattleItemInfo_SaveData_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  if ( !v3 )
    sub_1C2E388(v4, v5);
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
    sub_1C2E388(this, 0LL);
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