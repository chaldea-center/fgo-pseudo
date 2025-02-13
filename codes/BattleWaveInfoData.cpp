void __fastcall BattleWaveInfoData___ctor(BattleWaveInfoData_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


BattleWaveInfoData_SaveData_o *__fastcall BattleWaveInfoData__GetSaveData(
        BattleWaveInfoData_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 IsNullOrEmpty; // x0
  const MethodInfo *v5; // x1
  int max_length; // w21
  struct System_Int32_array *equipSkillChargeNum; // x8
  int64_t v8; // x0
  __int64 *v9; // x22
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  struct System_Int32_array *v16; // x12
  __int64 v17; // x9
  unsigned __int64 v18; // x10
  unsigned __int64 v19; // x8
  int32_t *v20; // x12
  __int64 v21; // x13
  int v22; // w21
  struct DropInfo_array *dropInfos; // x8
  int64_t v24; // x0
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  il2cpp_array_size_t v31; // w24
  struct DropInfo_array *v32; // x8
  _DWORD *v33; // x26
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  int64_t v40; // x23
  _DWORD *v41; // x0
  int v42; // w21
  struct BattleWaveInfoData_BattleItemInfo_array *battleItemInfos; // x8
  int64_t v44; // x0
  int64_t v45; // x2
  int32_t v46; // w3
  System_String_o *v47; // x4
  BattleSetupInfo_o *v48; // x5
  FollowerInfo_o *v49; // x6
  PartyListViewItem_o *v50; // x7
  il2cpp_array_size_t v51; // w24
  struct BattleWaveInfoData_BattleItemInfo_array *v52; // x8
  _DWORD *v53; // x26
  int64_t v54; // x2
  int32_t v55; // w3
  System_String_o *v56; // x4
  BattleSetupInfo_o *v57; // x5
  FollowerInfo_o *v58; // x6
  PartyListViewItem_o *v59; // x7
  int64_t v60; // x23
  _DWORD *v61; // x0
  BattleWaveInfoData_SaveData_o *result; // x0
  __int64 v63; // x0

  if ( (byte_4BDC031 & 1) == 0 )
  {
    sub_1C21E38(&int___TypeInfo);
    sub_1C21E38(&BattleWaveInfoData_BattleItemInfo_SaveData___TypeInfo);
    sub_1C21E38(&DropInfo_SaveData___TypeInfo);
    sub_1C21E38(&BattleWaveInfoData_SaveData_TypeInfo);
    byte_4BDC031 = 1;
  }
  v3 = sub_1C22084(BattleWaveInfoData_SaveData_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  if ( !v3 )
    goto LABEL_44;
  *(_QWORD *)(v3 + 16) = *(_QWORD *)&this->fields.wave;
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
  v8 = sub_1C21EE0(int___TypeInfo, (unsigned int)max_length);
  *(_QWORD *)(v3 + 24) = v8;
  v9 = (__int64 *)(v3 + 24);
  sub_1C21DDC((PartyOrganizationUtility_o *)(v3 + 24), v8, v10, v11, v12, v13, v14, v15);
  if ( max_length >= 1 )
  {
    v16 = this->fields.equipSkillChargeNum;
    if ( !v16 )
      goto LABEL_44;
    v17 = *v9;
    v18 = v16->max_length;
    v19 = 0LL;
    v20 = &v16->m_Items[1];
    v21 = *v9 + 32;
    do
    {
      if ( v19 >= v18 )
        goto LABEL_45;
      if ( !v17 )
        goto LABEL_44;
      if ( v19 >= *(unsigned int *)(v17 + 24) )
LABEL_45:
        sub_1C2209C(IsNullOrEmpty, v5);
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
  v24 = sub_1C21EE0(DropInfo_SaveData___TypeInfo, (unsigned int)v22);
  *(_QWORD *)(v3 + 32) = v24;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v3 + 32), v24, v25, v26, v27, v28, v29, v30);
  if ( v22 >= 1 )
  {
    v31 = 0;
    while ( 1 )
    {
      v32 = this->fields.dropInfos;
      if ( !v32 )
        break;
      if ( v31 >= v32->max_length )
        goto LABEL_45;
      IsNullOrEmpty = (__int64)v32->m_Items[v31];
      if ( !IsNullOrEmpty )
        break;
      v33 = *(_DWORD **)(v3 + 32);
      IsNullOrEmpty = (__int64)DropInfo__GetSaveData((DropInfo_o *)IsNullOrEmpty, 0LL);
      if ( !v33 )
        break;
      v40 = IsNullOrEmpty;
      if ( IsNullOrEmpty )
      {
        IsNullOrEmpty = sub_1C21F74(IsNullOrEmpty, *(_QWORD *)(*(_QWORD *)v33 + 64LL));
        if ( !IsNullOrEmpty )
        {
LABEL_46:
          v63 = sub_1C220B8(IsNullOrEmpty);
          sub_1C21F60(v63, 0LL);
        }
      }
      if ( v31 >= v33[6] )
        goto LABEL_45;
      v41 = &v33[2 * v31];
      *((_QWORD *)v41 + 4) = v40;
      sub_1C21DDC((PartyOrganizationUtility_o *)(v41 + 8), v40, v34, v35, v36, v37, v38, v39);
      if ( v22 == ++v31 )
        goto LABEL_29;
    }
LABEL_44:
    sub_1C22094(IsNullOrEmpty, v5);
  }
LABEL_29:
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.battleItemInfos, 0LL);
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
  v44 = sub_1C21EE0(BattleWaveInfoData_BattleItemInfo_SaveData___TypeInfo, (unsigned int)v42);
  *(_QWORD *)(v3 + 40) = v44;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v3 + 40), v44, v45, v46, v47, v48, v49, v50);
  if ( v42 >= 1 )
  {
    v51 = 0;
    do
    {
      v52 = this->fields.battleItemInfos;
      if ( !v52 )
        goto LABEL_44;
      if ( v51 >= v52->max_length )
        goto LABEL_45;
      IsNullOrEmpty = (__int64)v52->m_Items[v51];
      if ( !IsNullOrEmpty )
        goto LABEL_44;
      v53 = *(_DWORD **)(v3 + 40);
      IsNullOrEmpty = (__int64)BattleWaveInfoData_BattleItemInfo__GetSaveData(
                                 (BattleWaveInfoData_BattleItemInfo_o *)IsNullOrEmpty,
                                 v5);
      if ( !v53 )
        goto LABEL_44;
      v60 = IsNullOrEmpty;
      if ( IsNullOrEmpty )
      {
        IsNullOrEmpty = sub_1C21F74(IsNullOrEmpty, *(_QWORD *)(*(_QWORD *)v53 + 64LL));
        if ( !IsNullOrEmpty )
          goto LABEL_46;
      }
      if ( v51 >= v53[6] )
        goto LABEL_45;
      v61 = &v53[2 * v51];
      *((_QWORD *)v61 + 4) = v60;
      sub_1C21DDC((PartyOrganizationUtility_o *)(v61 + 8), v60, v54, v55, v56, v57, v58, v59);
    }
    while ( v42 != ++v51 );
  }
  result = (BattleWaveInfoData_SaveData_o *)v3;
  *(_DWORD *)(v3 + 48) = this->fields.star;
  return result;
}


void __fastcall BattleWaveInfoData__SetDataFromSaveData(
        BattleWaveInfoData_o *this,
        BattleWaveInfoData_SaveData_o *saveData,
        const MethodInfo *method)
{
  BattleWaveInfoData_o *v4; // x20
  struct System_Int32_array *equipSkillChargeNum; // x8
  __int64 v6; // x21
  int64_t v7; // x0
  struct System_Int32_array **p_equipSkillChargeNum; // x22
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  struct System_Int32_array *v15; // x12
  struct System_Int32_array *v16; // x9
  unsigned __int64 max_length; // x10
  unsigned __int64 v18; // x8
  int32_t *v19; // x12
  __int64 v20; // x13
  struct DropInfo_SaveData_array *dropInfos; // x8
  __int64 v22; // x22
  int64_t v23; // x0
  unsigned int **p_dropInfos; // x21
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  unsigned __int64 v31; // x23
  __int64 v32; // x25
  __int64 v33; // x26
  DropInfo_o *v34; // x22
  struct DropInfo_SaveData_array *v35; // x8
  unsigned int *v36; // x27
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7
  struct BattleWaveInfoData_BattleItemInfo_SaveData_array *battleItemInfos; // x8
  int v44; // w21
  int64_t v45; // x0
  struct BattleWaveInfoData_BattleItemInfo_array **p_battleItemInfos; // x22
  int64_t v47; // x2
  int32_t v48; // w3
  System_String_o *v49; // x4
  BattleSetupInfo_o *v50; // x5
  FollowerInfo_o *v51; // x6
  PartyListViewItem_o *v52; // x7
  il2cpp_array_size_t v53; // w24
  Il2CppObject *v54; // x23
  struct BattleWaveInfoData_BattleItemInfo_SaveData_array *v55; // x8
  BattleWaveInfoData_BattleItemInfo_SaveData_o *v56; // x8
  struct BattleWaveInfoData_BattleItemInfo_array *v57; // x27
  int64_t v58; // x2
  int32_t v59; // w3
  System_String_o *v60; // x4
  BattleSetupInfo_o *v61; // x5
  FollowerInfo_o *v62; // x6
  PartyListViewItem_o *v63; // x7
  Il2CppClass **v64; // x0
  __int64 v65; // x0

  v4 = this;
  if ( (byte_4BDC030 & 1) == 0 )
  {
    sub_1C21E38(&BattleWaveInfoData_BattleItemInfo___TypeInfo);
    sub_1C21E38(&BattleWaveInfoData_BattleItemInfo_TypeInfo);
    sub_1C21E38(&DropInfo___TypeInfo);
    sub_1C21E38(&DropInfo_TypeInfo);
    this = (BattleWaveInfoData_o *)sub_1C21E38(&int___TypeInfo);
    byte_4BDC030 = 1;
  }
  if ( !saveData )
    goto LABEL_34;
  *(_QWORD *)&v4->fields.wave = *(_QWORD *)&saveData->fields.wave;
  equipSkillChargeNum = saveData->fields.equipSkillChargeNum;
  if ( !equipSkillChargeNum )
    goto LABEL_34;
  v6 = *(_QWORD *)&equipSkillChargeNum->max_length;
  v7 = sub_1C21EE0(int___TypeInfo, (unsigned int)v6);
  v4->fields.equipSkillChargeNum = (struct System_Int32_array *)v7;
  p_equipSkillChargeNum = &v4->fields.equipSkillChargeNum;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v4->fields.equipSkillChargeNum, v7, v9, v10, v11, v12, v13, v14);
  if ( (int)v6 >= 1 )
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
        sub_1C2209C(this, saveData);
      *(_DWORD *)(v20 + 4 * v18) = v19[v18];
      ++v18;
    }
    while ( (unsigned int)v6 != v18 );
  }
  dropInfos = saveData->fields.dropInfos;
  if ( !dropInfos )
LABEL_34:
    sub_1C22094(this, saveData);
  v22 = *(_QWORD *)&dropInfos->max_length;
  v23 = sub_1C21EE0(DropInfo___TypeInfo, (unsigned int)v22);
  v4->fields.dropInfos = (struct DropInfo_array *)v23;
  p_dropInfos = (unsigned int **)&v4->fields.dropInfos;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v4->fields.dropInfos, v23, v25, v26, v27, v28, v29, v30);
  if ( (int)v22 >= 1 )
  {
    v31 = 0LL;
    v32 = (unsigned int)v22;
    v33 = 8LL;
    do
    {
      v34 = (DropInfo_o *)sub_1C22084(DropInfo_TypeInfo);
      DropInfo___ctor(v34, 0LL);
      v35 = saveData->fields.dropInfos;
      if ( !v35 )
        goto LABEL_34;
      if ( v31 >= v35->max_length )
        goto LABEL_35;
      if ( !v34 )
        goto LABEL_34;
      DropInfo__SetDataFromSaveData(v34, *(DropInfo_SaveData_o **)((char *)&v35->obj.klass + v33 * 4), 0LL);
      v36 = *p_dropInfos;
      if ( !*p_dropInfos )
        goto LABEL_34;
      this = (BattleWaveInfoData_o *)sub_1C21F74(v34, *(_QWORD *)(*(_QWORD *)v36 + 64LL));
      if ( !this )
      {
LABEL_36:
        v65 = sub_1C220B8(this);
        sub_1C21F60(v65, 0LL);
      }
      if ( v31 >= v36[6] )
        goto LABEL_35;
      *(_QWORD *)&v36[v33] = v34;
      sub_1C21DDC((PartyOrganizationUtility_o *)&v36[v33], (int64_t)v34, v37, v38, v39, v40, v41, v42);
      ++v31;
      v33 += 2LL;
    }
    while ( v32 != v31 );
  }
  battleItemInfos = saveData->fields.battleItemInfos;
  if ( !battleItemInfos )
    goto LABEL_34;
  v44 = battleItemInfos->max_length;
  v45 = sub_1C21EE0(BattleWaveInfoData_BattleItemInfo___TypeInfo, (unsigned int)v44);
  v4->fields.battleItemInfos = (struct BattleWaveInfoData_BattleItemInfo_array *)v45;
  p_battleItemInfos = &v4->fields.battleItemInfos;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v4->fields.battleItemInfos, v45, v47, v48, v49, v50, v51, v52);
  if ( v44 >= 1 )
  {
    v53 = 0;
    do
    {
      v54 = (Il2CppObject *)sub_1C22084(BattleWaveInfoData_BattleItemInfo_TypeInfo);
      System_Object___ctor(v54, 0LL);
      v55 = saveData->fields.battleItemInfos;
      if ( !v55 )
        goto LABEL_34;
      if ( v53 >= v55->max_length )
        goto LABEL_35;
      if ( !v54 )
        goto LABEL_34;
      v56 = v55->m_Items[v53];
      if ( !v56 )
        goto LABEL_34;
      v54[1].klass = (Il2CppClass *)v56->fields;
      v57 = *p_battleItemInfos;
      if ( !*p_battleItemInfos )
        goto LABEL_34;
      this = (BattleWaveInfoData_o *)sub_1C21F74(v54, v57->obj.klass->_1.element_class);
      if ( !this )
        goto LABEL_36;
      if ( v53 >= v57->max_length )
        goto LABEL_35;
      v64 = &v57->obj.klass + (int)v53;
      v64[4] = (Il2CppClass *)v54;
      sub_1C21DDC((PartyOrganizationUtility_o *)(v64 + 4), (int64_t)v54, v58, v59, v60, v61, v62, v63);
    }
    while ( v44 != ++v53 );
  }
  v4->fields.star = saveData->fields.star;
}


void __fastcall BattleWaveInfoData__SetWaveInfoData(
        BattleWaveInfoData_o *this,
        BattleData_o *battleData,
        const MethodInfo *method)
{
  BattleWaveInfoData_o *v4; // x20
  struct System_Collections_Generic_List_BattleSkillInfoData__o *masterSkillInfo; // x8
  __int64 size; // x21
  int64_t v7; // x0
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  unsigned __int64 v14; // x23
  struct System_Int32_array *equipSkillChargeNum; // x25
  char *v16; // x9
  struct System_Collections_Generic_List_BattleDropItem__o *droplist; // x8
  __int64 v18; // x21
  int64_t v19; // x0
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  unsigned __int64 v26; // x23
  __int64 v27; // x25
  unsigned int *dropInfos; // x27
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  BattleWaveInfoData_o *v35; // x24
  int32_t wave; // w23
  BattleWaveInfoData_o *v37; // x21
  int64_t v38; // x0
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  struct BattleWaveInfoData_BattleItemInfo_array *battleItemInfos; // x22
  Il2CppObject *v46; // x23
  int64_t v47; // x2
  int32_t v48; // w3
  System_String_o *v49; // x4
  BattleSetupInfo_o *v50; // x5
  FollowerInfo_o *v51; // x6
  PartyListViewItem_o *v52; // x7
  __int64 v53; // x0

  v4 = this;
  if ( (byte_4BDC032 & 1) == 0 )
  {
    sub_1C21E38(&BattleWaveInfoData_BattleItemInfo___TypeInfo);
    sub_1C21E38(&BattleWaveInfoData_BattleItemInfo_TypeInfo);
    sub_1C21E38(&DropInfo___TypeInfo);
    sub_1C21E38(&int___TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleDropItem__get_Count__);
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleSkillInfoData__get_Count__);
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleDropItem__get_Item__);
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleSkillInfoData__get_Item__);
    this = (BattleWaveInfoData_o *)sub_1C21E38(&Method_SingletonTemplate_BattleItemData__get_Instance__);
    byte_4BDC032 = 1;
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
  v7 = sub_1C21EE0(int___TypeInfo, (unsigned int)size);
  v4->fields.equipSkillChargeNum = (struct System_Int32_array *)v7;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v4->fields.equipSkillChargeNum, v7, v8, v9, v10, v11, v12, v13);
  if ( (int)size >= 1 )
  {
    v14 = 0LL;
    while ( 1 )
    {
      this = (BattleWaveInfoData_o *)battleData->fields.masterSkillInfo;
      if ( !this )
        break;
      equipSkillChargeNum = v4->fields.equipSkillChargeNum;
      this = (BattleWaveInfoData_o *)System_Collections_Generic_List_object___get_Item(
                                       (System_Collections_Generic_List_object__o *)this,
                                       v14,
                                       (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_BattleSkillInfoData__get_Item__);
      if ( !this || !equipSkillChargeNum )
        break;
      if ( v14 >= equipSkillChargeNum->max_length )
        goto LABEL_32;
      v16 = (char *)equipSkillChargeNum + 4 * v14++;
      *((_DWORD *)v16 + 8) = this->fields.battleItemInfos;
      if ( size == v14 )
        goto LABEL_12;
    }
LABEL_31:
    sub_1C22094(this, battleData);
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
    v18 = (unsigned int)droplist->fields._size;
    v19 = sub_1C21EE0(DropInfo___TypeInfo, (unsigned int)v18);
    v4->fields.dropInfos = (struct DropInfo_array *)v19;
    sub_1C21DDC((PartyOrganizationUtility_o *)&v4->fields.dropInfos, v19, v20, v21, v22, v23, v24, v25);
    if ( (int)v18 >= 1 )
    {
      v26 = 0LL;
      v27 = 8LL;
      do
      {
        this = (BattleWaveInfoData_o *)battleData->fields.droplist;
        if ( !this )
          goto LABEL_31;
        dropInfos = (unsigned int *)v4->fields.dropInfos;
        this = (BattleWaveInfoData_o *)System_Collections_Generic_List_object___get_Item(
                                         (System_Collections_Generic_List_object__o *)this,
                                         v26,
                                         (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_BattleDropItem__get_Item__);
        if ( !this )
          goto LABEL_31;
        this = (BattleWaveInfoData_o *)BattleDropItem__GetDropInfo((BattleDropItem_o *)this, 0LL);
        if ( !dropInfos )
          goto LABEL_31;
        v35 = this;
        if ( this )
        {
          this = (BattleWaveInfoData_o *)sub_1C21F74(this, *(_QWORD *)(*(_QWORD *)dropInfos + 64LL));
          if ( !this )
            goto LABEL_33;
        }
        if ( v26 >= dropInfos[6] )
          goto LABEL_32;
        *(_QWORD *)&dropInfos[v27] = v35;
        sub_1C21DDC((PartyOrganizationUtility_o *)&dropInfos[v27], (int64_t)v35, v29, v30, v31, v32, v33, v34);
        ++v26;
        v27 += 2LL;
      }
      while ( v18 != v26 );
    }
  }
  this = (BattleWaveInfoData_o *)SingletonTemplate_object___get_Instance((const MethodInfo_388D478 *)Method_SingletonTemplate_BattleItemData__get_Instance__);
  if ( !this )
    goto LABEL_31;
  wave = this->fields.wave;
  v37 = this;
  v38 = sub_1C21EE0(BattleWaveInfoData_BattleItemInfo___TypeInfo, wave > 0);
  v4->fields.battleItemInfos = (struct BattleWaveInfoData_BattleItemInfo_array *)v38;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v4->fields.battleItemInfos, v38, v39, v40, v41, v42, v43, v44);
  if ( wave >= 1 )
  {
    battleItemInfos = v4->fields.battleItemInfos;
    v46 = (Il2CppObject *)sub_1C22084(BattleWaveInfoData_BattleItemInfo_TypeInfo);
    System_Object___ctor(v46, 0LL);
    if ( !v46 )
      goto LABEL_31;
    v46[1].klass = *(Il2CppClass **)&v37->fields.wave;
    if ( !battleItemInfos )
      goto LABEL_31;
    this = (BattleWaveInfoData_o *)sub_1C21F74(v46, battleItemInfos->obj.klass->_1.element_class);
    if ( !this )
    {
LABEL_33:
      v53 = sub_1C220B8(this);
      sub_1C21F60(v53, 0LL);
    }
    if ( !battleItemInfos->max_length )
LABEL_32:
      sub_1C2209C(this, battleData);
    battleItemInfos->m_Items[0] = (BattleWaveInfoData_BattleItemInfo_o *)v46;
    sub_1C21DDC((PartyOrganizationUtility_o *)battleItemInfos->m_Items, (int64_t)v46, v47, v48, v49, v50, v51, v52);
  }
  v4->fields.star = battleData->fields.totalCriticalStars;
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

  if ( (byte_4BDC033 & 1) == 0 )
  {
    sub_1C21E38(&BattleWaveInfoData_BattleItemInfo_SaveData_TypeInfo);
    byte_4BDC033 = 1;
  }
  v3 = sub_1C22084(BattleWaveInfoData_BattleItemInfo_SaveData_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  if ( !v3 )
    sub_1C22094(v4, v5);
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
    sub_1C22094(this, 0LL);
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