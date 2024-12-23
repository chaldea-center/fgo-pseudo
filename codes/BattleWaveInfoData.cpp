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
  il2cpp_array_size_t v54; // w24
  struct BattleWaveInfoData_BattleItemInfo_array *v55; // x8
  _DWORD *v56; // x26
  int64_t v57; // x2
  int32_t v58; // w3
  System_String_o *v59; // x4
  BattleSetupInfo_o *v60; // x5
  FollowerInfo_o *v61; // x6
  PartyListViewItem_o *v62; // x7
  int64_t v63; // x23
  _DWORD *v64; // x0
  BattleWaveInfoData_SaveData_o *result; // x0
  __int64 v66; // x0

  if ( (byte_4B666A2 & 1) == 0 )
  {
    sub_1BE4ACC(&int___TypeInfo, method);
    sub_1BE4ACC(&BattleWaveInfoData_BattleItemInfo_SaveData___TypeInfo, v3);
    sub_1BE4ACC(&DropInfo_SaveData___TypeInfo, v4);
    sub_1BE4ACC(&BattleWaveInfoData_SaveData_TypeInfo, v5);
    byte_4B666A2 = 1;
  }
  v6 = sub_1BE4D18(BattleWaveInfoData_SaveData_TypeInfo);
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
  v11 = sub_1BE4B74(int___TypeInfo, (unsigned int)max_length);
  *(_QWORD *)(v6 + 24) = v11;
  v12 = (__int64 *)(v6 + 24);
  sub_1BE4A70((PartyOrganizationUtility_o *)(v6 + 24), v11, v13, v14, v15, v16, v17, v18);
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
        sub_1BE4D30(IsNullOrEmpty, v8);
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
  v27 = sub_1BE4B74(DropInfo_SaveData___TypeInfo, (unsigned int)v25);
  *(_QWORD *)(v6 + 32) = v27;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v6 + 32), v27, v28, v29, v30, v31, v32, v33);
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
        IsNullOrEmpty = sub_1BE4C08(IsNullOrEmpty, *(_QWORD *)(*(_QWORD *)v36 + 64LL));
        if ( !IsNullOrEmpty )
        {
LABEL_46:
          v66 = sub_1BE4D4C(IsNullOrEmpty);
          sub_1BE4BF4(v66, 0LL);
        }
      }
      if ( v34 >= v36[6] )
        goto LABEL_45;
      v44 = &v36[2 * v34];
      *((_QWORD *)v44 + 4) = v43;
      sub_1BE4A70((PartyOrganizationUtility_o *)(v44 + 8), v43, v37, v38, v39, v40, v41, v42);
      if ( v25 == ++v34 )
        goto LABEL_29;
    }
LABEL_44:
    sub_1BE4D28(IsNullOrEmpty, v8);
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
  v47 = sub_1BE4B74(BattleWaveInfoData_BattleItemInfo_SaveData___TypeInfo, (unsigned int)v45);
  *(_QWORD *)(v6 + 40) = v47;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v6 + 40), v47, v48, v49, v50, v51, v52, v53);
  if ( v45 >= 1 )
  {
    v54 = 0;
    do
    {
      v55 = this->fields.battleItemInfos;
      if ( !v55 )
        goto LABEL_44;
      if ( v54 >= v55->max_length )
        goto LABEL_45;
      IsNullOrEmpty = (__int64)v55->m_Items[v54];
      if ( !IsNullOrEmpty )
        goto LABEL_44;
      v56 = *(_DWORD **)(v6 + 40);
      IsNullOrEmpty = (__int64)BattleWaveInfoData_BattleItemInfo__GetSaveData(
                                 (BattleWaveInfoData_BattleItemInfo_o *)IsNullOrEmpty,
                                 v8);
      if ( !v56 )
        goto LABEL_44;
      v63 = IsNullOrEmpty;
      if ( IsNullOrEmpty )
      {
        IsNullOrEmpty = sub_1BE4C08(IsNullOrEmpty, *(_QWORD *)(*(_QWORD *)v56 + 64LL));
        if ( !IsNullOrEmpty )
          goto LABEL_46;
      }
      if ( v54 >= v56[6] )
        goto LABEL_45;
      v64 = &v56[2 * v54];
      *((_QWORD *)v64 + 4) = v63;
      sub_1BE4A70((PartyOrganizationUtility_o *)(v64 + 8), v63, v57, v58, v59, v60, v61, v62);
    }
    while ( v45 != ++v54 );
  }
  result = (BattleWaveInfoData_SaveData_o *)v6;
  *(_DWORD *)(v6 + 48) = this->fields.star;
  return result;
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
  il2cpp_array_size_t v57; // w24
  Il2CppObject *v58; // x23
  struct BattleWaveInfoData_BattleItemInfo_SaveData_array *v59; // x8
  BattleWaveInfoData_BattleItemInfo_SaveData_o *v60; // x8
  struct BattleWaveInfoData_BattleItemInfo_array *v61; // x27
  int64_t v62; // x2
  int32_t v63; // w3
  System_String_o *v64; // x4
  BattleSetupInfo_o *v65; // x5
  FollowerInfo_o *v66; // x6
  PartyListViewItem_o *v67; // x7
  Il2CppClass **v68; // x0
  __int64 v69; // x0

  v4 = this;
  if ( (byte_4B666A1 & 1) == 0 )
  {
    sub_1BE4ACC(&BattleWaveInfoData_BattleItemInfo___TypeInfo, saveData);
    sub_1BE4ACC(&BattleWaveInfoData_BattleItemInfo_TypeInfo, v5);
    sub_1BE4ACC(&DropInfo___TypeInfo, v6);
    sub_1BE4ACC(&DropInfo_TypeInfo, v7);
    this = (BattleWaveInfoData_o *)sub_1BE4ACC(&int___TypeInfo, v8);
    byte_4B666A1 = 1;
  }
  if ( !saveData )
    goto LABEL_34;
  *(_QWORD *)&v4->fields.wave = *(_QWORD *)&saveData->fields.wave;
  equipSkillChargeNum = saveData->fields.equipSkillChargeNum;
  if ( !equipSkillChargeNum )
    goto LABEL_34;
  v10 = *(_QWORD *)&equipSkillChargeNum->max_length;
  v11 = sub_1BE4B74(int___TypeInfo, (unsigned int)v10);
  v4->fields.equipSkillChargeNum = (struct System_Int32_array *)v11;
  p_equipSkillChargeNum = &v4->fields.equipSkillChargeNum;
  sub_1BE4A70((PartyOrganizationUtility_o *)&v4->fields.equipSkillChargeNum, v11, v13, v14, v15, v16, v17, v18);
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
        sub_1BE4D30(this, saveData);
      *(_DWORD *)(v24 + 4 * v22) = v23[v22];
      ++v22;
    }
    while ( (unsigned int)v10 != v22 );
  }
  dropInfos = saveData->fields.dropInfos;
  if ( !dropInfos )
LABEL_34:
    sub_1BE4D28(this, saveData);
  v26 = *(_QWORD *)&dropInfos->max_length;
  v27 = sub_1BE4B74(DropInfo___TypeInfo, (unsigned int)v26);
  v4->fields.dropInfos = (struct DropInfo_array *)v27;
  p_dropInfos = (unsigned int **)&v4->fields.dropInfos;
  sub_1BE4A70((PartyOrganizationUtility_o *)&v4->fields.dropInfos, v27, v29, v30, v31, v32, v33, v34);
  if ( (int)v26 >= 1 )
  {
    v35 = 0LL;
    v36 = (unsigned int)v26;
    v37 = 8LL;
    do
    {
      v38 = (DropInfo_o *)sub_1BE4D18(DropInfo_TypeInfo);
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
      this = (BattleWaveInfoData_o *)sub_1BE4C08(v38, *(_QWORD *)(*(_QWORD *)v40 + 64LL));
      if ( !this )
      {
LABEL_36:
        v69 = sub_1BE4D4C(this);
        sub_1BE4BF4(v69, 0LL);
      }
      if ( v35 >= v40[6] )
        goto LABEL_35;
      *(_QWORD *)&v40[v37] = v38;
      sub_1BE4A70((PartyOrganizationUtility_o *)&v40[v37], (int64_t)v38, v41, v42, v43, v44, v45, v46);
      ++v35;
      v37 += 2LL;
    }
    while ( v36 != v35 );
  }
  battleItemInfos = saveData->fields.battleItemInfos;
  if ( !battleItemInfos )
    goto LABEL_34;
  v48 = battleItemInfos->max_length;
  v49 = sub_1BE4B74(BattleWaveInfoData_BattleItemInfo___TypeInfo, (unsigned int)v48);
  v4->fields.battleItemInfos = (struct BattleWaveInfoData_BattleItemInfo_array *)v49;
  p_battleItemInfos = &v4->fields.battleItemInfos;
  sub_1BE4A70((PartyOrganizationUtility_o *)&v4->fields.battleItemInfos, v49, v51, v52, v53, v54, v55, v56);
  if ( v48 >= 1 )
  {
    v57 = 0;
    do
    {
      v58 = (Il2CppObject *)sub_1BE4D18(BattleWaveInfoData_BattleItemInfo_TypeInfo);
      System_Object___ctor(v58, 0LL);
      v59 = saveData->fields.battleItemInfos;
      if ( !v59 )
        goto LABEL_34;
      if ( v57 >= v59->max_length )
        goto LABEL_35;
      if ( !v58 )
        goto LABEL_34;
      v60 = v59->m_Items[v57];
      if ( !v60 )
        goto LABEL_34;
      v58[1].klass = (Il2CppClass *)v60->fields;
      v61 = *p_battleItemInfos;
      if ( !*p_battleItemInfos )
        goto LABEL_34;
      this = (BattleWaveInfoData_o *)sub_1BE4C08(v58, v61->obj.klass->_1.element_class);
      if ( !this )
        goto LABEL_36;
      if ( v57 >= v61->max_length )
        goto LABEL_35;
      v68 = &v61->obj.klass + (int)v57;
      v68[4] = (Il2CppClass *)v58;
      sub_1BE4A70((PartyOrganizationUtility_o *)(v68 + 4), (int64_t)v58, v62, v63, v64, v65, v66, v67);
    }
    while ( v48 != ++v57 );
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
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  struct System_Collections_Generic_List_BattleSkillInfoData__o *masterSkillInfo; // x8
  __int64 size; // x21
  int64_t v15; // x0
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  unsigned __int64 v22; // x23
  struct System_Int32_array *equipSkillChargeNum; // x25
  char *v24; // x9
  struct System_Collections_Generic_List_BattleDropItem__o *droplist; // x8
  __int64 v26; // x21
  int64_t v27; // x0
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  unsigned __int64 v34; // x23
  __int64 v35; // x25
  unsigned int *dropInfos; // x27
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7
  BattleWaveInfoData_o *v43; // x24
  int32_t wave; // w23
  BattleWaveInfoData_o *v45; // x21
  int64_t v46; // x0
  int64_t v47; // x2
  int32_t v48; // w3
  System_String_o *v49; // x4
  BattleSetupInfo_o *v50; // x5
  FollowerInfo_o *v51; // x6
  PartyListViewItem_o *v52; // x7
  struct BattleWaveInfoData_BattleItemInfo_array *battleItemInfos; // x22
  Il2CppObject *v54; // x23
  int64_t v55; // x2
  int32_t v56; // w3
  System_String_o *v57; // x4
  BattleSetupInfo_o *v58; // x5
  FollowerInfo_o *v59; // x6
  PartyListViewItem_o *v60; // x7
  __int64 v61; // x0

  v4 = this;
  if ( (byte_4B666A3 & 1) == 0 )
  {
    sub_1BE4ACC(&BattleWaveInfoData_BattleItemInfo___TypeInfo, battleData);
    sub_1BE4ACC(&BattleWaveInfoData_BattleItemInfo_TypeInfo, v5);
    sub_1BE4ACC(&DropInfo___TypeInfo, v6);
    sub_1BE4ACC(&int___TypeInfo, v7);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_BattleDropItem__get_Count__, v8);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_BattleSkillInfoData__get_Count__, v9);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_BattleDropItem__get_Item__, v10);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_BattleSkillInfoData__get_Item__, v11);
    this = (BattleWaveInfoData_o *)sub_1BE4ACC(&Method_SingletonTemplate_BattleItemData__get_Instance__, v12);
    byte_4B666A3 = 1;
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
  v15 = sub_1BE4B74(int___TypeInfo, (unsigned int)size);
  v4->fields.equipSkillChargeNum = (struct System_Int32_array *)v15;
  sub_1BE4A70((PartyOrganizationUtility_o *)&v4->fields.equipSkillChargeNum, v15, v16, v17, v18, v19, v20, v21);
  if ( (int)size >= 1 )
  {
    v22 = 0LL;
    while ( 1 )
    {
      this = (BattleWaveInfoData_o *)battleData->fields.masterSkillInfo;
      if ( !this )
        break;
      equipSkillChargeNum = v4->fields.equipSkillChargeNum;
      this = (BattleWaveInfoData_o *)System_Collections_Generic_List_object___get_Item(
                                       (System_Collections_Generic_List_object__o *)this,
                                       v22,
                                       (const MethodInfo_35EBF54 *)Method_System_Collections_Generic_List_BattleSkillInfoData__get_Item__);
      if ( !this || !equipSkillChargeNum )
        break;
      if ( v22 >= equipSkillChargeNum->max_length )
        goto LABEL_32;
      v24 = (char *)equipSkillChargeNum + 4 * v22++;
      *((_DWORD *)v24 + 8) = this->fields.battleItemInfos;
      if ( size == v22 )
        goto LABEL_12;
    }
LABEL_31:
    sub_1BE4D28(this, battleData);
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
    v26 = (unsigned int)droplist->fields._size;
    v27 = sub_1BE4B74(DropInfo___TypeInfo, (unsigned int)v26);
    v4->fields.dropInfos = (struct DropInfo_array *)v27;
    sub_1BE4A70((PartyOrganizationUtility_o *)&v4->fields.dropInfos, v27, v28, v29, v30, v31, v32, v33);
    if ( (int)v26 >= 1 )
    {
      v34 = 0LL;
      v35 = 8LL;
      do
      {
        this = (BattleWaveInfoData_o *)battleData->fields.droplist;
        if ( !this )
          goto LABEL_31;
        dropInfos = (unsigned int *)v4->fields.dropInfos;
        this = (BattleWaveInfoData_o *)System_Collections_Generic_List_object___get_Item(
                                         (System_Collections_Generic_List_object__o *)this,
                                         v34,
                                         (const MethodInfo_35EBF54 *)Method_System_Collections_Generic_List_BattleDropItem__get_Item__);
        if ( !this )
          goto LABEL_31;
        this = (BattleWaveInfoData_o *)BattleDropItem__GetDropInfo((BattleDropItem_o *)this, 0LL);
        if ( !dropInfos )
          goto LABEL_31;
        v43 = this;
        if ( this )
        {
          this = (BattleWaveInfoData_o *)sub_1BE4C08(this, *(_QWORD *)(*(_QWORD *)dropInfos + 64LL));
          if ( !this )
            goto LABEL_33;
        }
        if ( v34 >= dropInfos[6] )
          goto LABEL_32;
        *(_QWORD *)&dropInfos[v35] = v43;
        sub_1BE4A70((PartyOrganizationUtility_o *)&dropInfos[v35], (int64_t)v43, v37, v38, v39, v40, v41, v42);
        ++v34;
        v35 += 2LL;
      }
      while ( v26 != v34 );
    }
  }
  this = (BattleWaveInfoData_o *)SingletonTemplate_object___get_Instance((const MethodInfo_38291E8 *)Method_SingletonTemplate_BattleItemData__get_Instance__);
  if ( !this )
    goto LABEL_31;
  wave = this->fields.wave;
  v45 = this;
  v46 = sub_1BE4B74(BattleWaveInfoData_BattleItemInfo___TypeInfo, wave > 0);
  v4->fields.battleItemInfos = (struct BattleWaveInfoData_BattleItemInfo_array *)v46;
  sub_1BE4A70((PartyOrganizationUtility_o *)&v4->fields.battleItemInfos, v46, v47, v48, v49, v50, v51, v52);
  if ( wave >= 1 )
  {
    battleItemInfos = v4->fields.battleItemInfos;
    v54 = (Il2CppObject *)sub_1BE4D18(BattleWaveInfoData_BattleItemInfo_TypeInfo);
    System_Object___ctor(v54, 0LL);
    if ( !v54 )
      goto LABEL_31;
    v54[1].klass = *(Il2CppClass **)&v45->fields.wave;
    if ( !battleItemInfos )
      goto LABEL_31;
    this = (BattleWaveInfoData_o *)sub_1BE4C08(v54, battleItemInfos->obj.klass->_1.element_class);
    if ( !this )
    {
LABEL_33:
      v61 = sub_1BE4D4C(this);
      sub_1BE4BF4(v61, 0LL);
    }
    if ( !battleItemInfos->max_length )
LABEL_32:
      sub_1BE4D30(this, battleData);
    battleItemInfos->m_Items[0] = (BattleWaveInfoData_BattleItemInfo_o *)v54;
    sub_1BE4A70((PartyOrganizationUtility_o *)battleItemInfos->m_Items, (int64_t)v54, v55, v56, v57, v58, v59, v60);
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

  if ( (byte_4B666A4 & 1) == 0 )
  {
    sub_1BE4ACC(&BattleWaveInfoData_BattleItemInfo_SaveData_TypeInfo, method);
    byte_4B666A4 = 1;
  }
  v3 = sub_1BE4D18(BattleWaveInfoData_BattleItemInfo_SaveData_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  if ( !v3 )
    sub_1BE4D28(v4, v5);
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
    sub_1BE4D28(this, 0LL);
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