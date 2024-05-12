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
  __int64 v5; // x1
  int max_length; // w22
  struct System_Int32_array *equipSkillChargeNum; // x8
  System_Int32_array **v8; // x0
  __int64 *v9; // x21
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  __int64 v16; // x9
  struct System_Int32_array *v17; // x10
  __int64 v18; // x11
  bool v19; // cc
  int v20; // w21
  struct DropInfo_array *dropInfos; // x8
  System_Int32_array **v22; // x0
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  il2cpp_array_size_t v29; // w24
  __int64 v30; // x25
  struct DropInfo_array *v31; // x8
  _DWORD *v32; // x26
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  System_Int32_array **v39; // x23
  int v40; // w21
  struct BattleWaveInfoData_BattleItemInfo_array *battleItemInfos; // x8
  System_Int32_array **v42; // x0
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  il2cpp_array_size_t v49; // w24
  __int64 v50; // x25
  struct BattleWaveInfoData_BattleItemInfo_array *v51; // x8
  _DWORD *v52; // x26
  System_String_array **v53; // x2
  System_String_array **v54; // x3
  System_Boolean_array **v55; // x4
  System_Int32_array **v56; // x5
  System_Int32_array *v57; // x6
  System_Int32_array *v58; // x7
  System_Int32_array **v59; // x23
  BattleWaveInfoData_SaveData_o *result; // x0
  __int64 v61; // x0
  __int64 v62; // x0

  if ( (byte_438A8DF & 1) == 0 )
  {
    sub_B775C4(&int___TypeInfo);
    sub_B775C4(&BattleWaveInfoData_BattleItemInfo_SaveData___TypeInfo);
    sub_B775C4(&DropInfo_SaveData___TypeInfo);
    sub_B775C4(&BattleWaveInfoData_SaveData_TypeInfo);
    byte_438A8DF = 1;
  }
  v3 = sub_B77694(BattleWaveInfoData_SaveData_TypeInfo);
  BattleWaveInfoData_SaveData___ctor((BattleWaveInfoData_SaveData_o *)v3, 0LL);
  if ( !v3 )
    goto LABEL_44;
  *(_DWORD *)(v3 + 16) = this->fields.wave;
  *(_DWORD *)(v3 + 20) = this->fields.turn;
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
  v8 = (System_Int32_array **)sub_B775DC(int___TypeInfo, (unsigned int)max_length);
  *(_QWORD *)(v3 + 24) = v8;
  v9 = (__int64 *)(v3 + 24);
  sub_B77560((BattleServantConfConponent_o *)(v3 + 24), v8, v10, v11, v12, v13, v14, v15);
  if ( max_length >= 1 )
  {
    v16 = 8LL;
    while ( 1 )
    {
      v17 = this->fields.equipSkillChargeNum;
      if ( !v17 )
        break;
      if ( v16 - 8 >= (unsigned __int64)v17->max_length )
        goto LABEL_45;
      v18 = *v9;
      if ( !*v9 )
        break;
      if ( v16 - 8 >= (unsigned __int64)*(unsigned int *)(v18 + 24) )
      {
LABEL_45:
        v61 = sub_B776C8(IsNullOrEmpty);
        sub_B77668(v61, 0LL);
      }
      v19 = v16 - 7 < max_length;
      *(_DWORD *)(v18 + 4 * v16) = *((_DWORD *)&v17->obj.klass + v16);
      ++v16;
      if ( !v19 )
        goto LABEL_15;
    }
LABEL_44:
    sub_B7769C(IsNullOrEmpty, v5);
  }
LABEL_15:
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.dropInfos, 0LL);
  if ( (IsNullOrEmpty & 1) != 0 )
  {
    v20 = 0;
  }
  else
  {
    dropInfos = this->fields.dropInfos;
    if ( !dropInfos )
      goto LABEL_44;
    v20 = dropInfos->max_length;
  }
  v22 = (System_Int32_array **)sub_B775DC(DropInfo_SaveData___TypeInfo, (unsigned int)v20);
  *(_QWORD *)(v3 + 32) = v22;
  sub_B77560((BattleServantConfConponent_o *)(v3 + 32), v22, v23, v24, v25, v26, v27, v28);
  if ( v20 >= 1 )
  {
    v29 = 0;
    v30 = 8LL;
    do
    {
      v31 = this->fields.dropInfos;
      if ( !v31 )
        goto LABEL_44;
      if ( v29 >= v31->max_length )
        goto LABEL_45;
      IsNullOrEmpty = *(__int64 *)((char *)&v31->obj.klass + v30 * 4);
      if ( !IsNullOrEmpty )
        goto LABEL_44;
      v32 = *(_DWORD **)(v3 + 32);
      IsNullOrEmpty = (__int64)DropInfo__GetSaveData((DropInfo_o *)IsNullOrEmpty, 0LL);
      if ( !v32 )
        goto LABEL_44;
      v39 = (System_Int32_array **)IsNullOrEmpty;
      if ( IsNullOrEmpty )
      {
        IsNullOrEmpty = sub_B77684(IsNullOrEmpty, *(_QWORD *)(*(_QWORD *)v32 + 64LL));
        if ( !IsNullOrEmpty )
        {
LABEL_46:
          v62 = sub_B776BC(IsNullOrEmpty);
          sub_B77668(v62, 0LL);
        }
      }
      if ( v29 >= v32[6] )
        goto LABEL_45;
      *(_QWORD *)&v32[v30] = v39;
      sub_B77560((BattleServantConfConponent_o *)&v32[v30], v39, v33, v34, v35, v36, v37, v38);
      ++v29;
      v30 += 2LL;
    }
    while ( (int)v29 < v20 );
  }
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.battleItemInfos, 0LL);
  if ( (IsNullOrEmpty & 1) != 0 )
  {
    v40 = 0;
  }
  else
  {
    battleItemInfos = this->fields.battleItemInfos;
    if ( !battleItemInfos )
      goto LABEL_44;
    v40 = battleItemInfos->max_length;
  }
  v42 = (System_Int32_array **)sub_B775DC(BattleWaveInfoData_BattleItemInfo_SaveData___TypeInfo, (unsigned int)v40);
  *(_QWORD *)(v3 + 40) = v42;
  sub_B77560((BattleServantConfConponent_o *)(v3 + 40), v42, v43, v44, v45, v46, v47, v48);
  if ( v40 >= 1 )
  {
    v49 = 0;
    v50 = 8LL;
    do
    {
      v51 = this->fields.battleItemInfos;
      if ( !v51 )
        goto LABEL_44;
      if ( v49 >= v51->max_length )
        goto LABEL_45;
      IsNullOrEmpty = *(__int64 *)((char *)&v51->obj.klass + v50 * 4);
      if ( !IsNullOrEmpty )
        goto LABEL_44;
      v52 = *(_DWORD **)(v3 + 40);
      IsNullOrEmpty = (__int64)BattleWaveInfoData_BattleItemInfo__GetSaveData(
                                 (BattleWaveInfoData_BattleItemInfo_o *)IsNullOrEmpty,
                                 0LL);
      if ( !v52 )
        goto LABEL_44;
      v59 = (System_Int32_array **)IsNullOrEmpty;
      if ( IsNullOrEmpty )
      {
        IsNullOrEmpty = sub_B77684(IsNullOrEmpty, *(_QWORD *)(*(_QWORD *)v52 + 64LL));
        if ( !IsNullOrEmpty )
          goto LABEL_46;
      }
      if ( v49 >= v52[6] )
        goto LABEL_45;
      *(_QWORD *)&v52[v50] = v59;
      sub_B77560((BattleServantConfConponent_o *)&v52[v50], v59, v53, v54, v55, v56, v57, v58);
      ++v49;
      v50 += 2LL;
    }
    while ( (int)v49 < v40 );
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
  __int64 v6; // x22
  System_Int32_array **v7; // x0
  struct System_Int32_array **p_equipSkillChargeNum; // x21
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  __int64 v15; // x9
  struct System_Int32_array *v16; // x10
  struct System_Int32_array *v17; // x11
  bool v18; // cc
  struct DropInfo_SaveData_array *dropInfos; // x8
  __int64 v20; // x22
  System_Int32_array **v21; // x0
  unsigned int **p_dropInfos; // x21
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  unsigned __int64 v29; // x23
  signed __int64 v30; // x24
  __int64 v31; // x25
  DropInfo_o *v32; // x22
  struct DropInfo_SaveData_array *v33; // x8
  unsigned int *v34; // x27
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  struct BattleWaveInfoData_BattleItemInfo_SaveData_array *battleItemInfos; // x8
  __int64 v42; // x22
  System_Int32_array **v43; // x0
  unsigned int **p_battleItemInfos; // x21
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  unsigned __int64 v51; // x23
  signed __int64 v52; // x24
  __int64 v53; // x25
  BattleWaveInfoData_BattleItemInfo_o *v54; // x22
  struct BattleWaveInfoData_BattleItemInfo_SaveData_array *v55; // x8
  unsigned int *v56; // x27
  System_String_array **v57; // x2
  System_String_array **v58; // x3
  System_Boolean_array **v59; // x4
  System_Int32_array **v60; // x5
  System_Int32_array *v61; // x6
  System_Int32_array *v62; // x7
  __int64 v63; // x0
  __int64 v64; // x0

  v4 = this;
  if ( (byte_438A8DE & 1) == 0 )
  {
    sub_B775C4(&BattleWaveInfoData_BattleItemInfo___TypeInfo);
    sub_B775C4(&BattleWaveInfoData_BattleItemInfo_TypeInfo);
    sub_B775C4(&DropInfo___TypeInfo);
    sub_B775C4(&DropInfo_TypeInfo);
    this = (BattleWaveInfoData_o *)sub_B775C4(&int___TypeInfo);
    byte_438A8DE = 1;
  }
  if ( !saveData )
    goto LABEL_33;
  v4->fields.wave = saveData->fields.wave;
  v4->fields.turn = saveData->fields.turn;
  equipSkillChargeNum = saveData->fields.equipSkillChargeNum;
  if ( !equipSkillChargeNum )
    goto LABEL_33;
  v6 = *(_QWORD *)&equipSkillChargeNum->max_length;
  v7 = (System_Int32_array **)sub_B775DC(int___TypeInfo, (unsigned int)v6);
  v4->fields.equipSkillChargeNum = (struct System_Int32_array *)v7;
  p_equipSkillChargeNum = &v4->fields.equipSkillChargeNum;
  sub_B77560((BattleServantConfConponent_o *)&v4->fields.equipSkillChargeNum, v7, v9, v10, v11, v12, v13, v14);
  if ( (int)v6 >= 1 )
  {
    v15 = 8LL;
    while ( 1 )
    {
      v16 = saveData->fields.equipSkillChargeNum;
      if ( !v16 )
        break;
      if ( v15 - 8 >= (unsigned __int64)v16->max_length )
        goto LABEL_34;
      v17 = *p_equipSkillChargeNum;
      if ( !*p_equipSkillChargeNum )
        break;
      if ( v15 - 8 >= (unsigned __int64)v17->max_length )
      {
LABEL_34:
        v63 = sub_B776C8(this);
        sub_B77668(v63, 0LL);
      }
      v18 = v15 - 7 < (int)v6;
      *((_DWORD *)&v17->obj.klass + v15) = *((_DWORD *)&v16->obj.klass + v15);
      ++v15;
      if ( !v18 )
        goto LABEL_12;
    }
LABEL_33:
    sub_B7769C(this, saveData);
  }
LABEL_12:
  dropInfos = saveData->fields.dropInfos;
  if ( !dropInfos )
    goto LABEL_33;
  v20 = *(_QWORD *)&dropInfos->max_length;
  v21 = (System_Int32_array **)sub_B775DC(DropInfo___TypeInfo, (unsigned int)v20);
  v4->fields.dropInfos = (struct DropInfo_array *)v21;
  p_dropInfos = (unsigned int **)&v4->fields.dropInfos;
  sub_B77560((BattleServantConfConponent_o *)&v4->fields.dropInfos, v21, v23, v24, v25, v26, v27, v28);
  if ( (int)v20 >= 1 )
  {
    v29 = 0LL;
    v30 = (int)v20;
    v31 = 8LL;
    do
    {
      v32 = (DropInfo_o *)sub_B77694(DropInfo_TypeInfo);
      DropInfo___ctor(v32, 0LL);
      v33 = saveData->fields.dropInfos;
      if ( !v33 )
        goto LABEL_33;
      if ( v29 >= v33->max_length )
        goto LABEL_34;
      if ( !v32 )
        goto LABEL_33;
      DropInfo__SetDataFromSaveData(v32, *(DropInfo_SaveData_o **)((char *)&v33->obj.klass + v31 * 4), 0LL);
      v34 = *p_dropInfos;
      if ( !*p_dropInfos )
        goto LABEL_33;
      this = (BattleWaveInfoData_o *)sub_B77684(v32, *(_QWORD *)(*(_QWORD *)v34 + 64LL));
      if ( !this )
      {
LABEL_35:
        v64 = sub_B776BC(this);
        sub_B77668(v64, 0LL);
      }
      if ( v29 >= v34[6] )
        goto LABEL_34;
      *(_QWORD *)&v34[v31] = v32;
      sub_B77560((BattleServantConfConponent_o *)&v34[v31], (System_Int32_array **)v32, v35, v36, v37, v38, v39, v40);
      ++v29;
      v31 += 2LL;
    }
    while ( (__int64)v29 < v30 );
  }
  battleItemInfos = saveData->fields.battleItemInfos;
  if ( !battleItemInfos )
    goto LABEL_33;
  v42 = *(_QWORD *)&battleItemInfos->max_length;
  v43 = (System_Int32_array **)sub_B775DC(BattleWaveInfoData_BattleItemInfo___TypeInfo, (unsigned int)v42);
  v4->fields.battleItemInfos = (struct BattleWaveInfoData_BattleItemInfo_array *)v43;
  p_battleItemInfos = (unsigned int **)&v4->fields.battleItemInfos;
  sub_B77560((BattleServantConfConponent_o *)&v4->fields.battleItemInfos, v43, v45, v46, v47, v48, v49, v50);
  if ( (int)v42 >= 1 )
  {
    v51 = 0LL;
    v52 = (int)v42;
    v53 = 8LL;
    do
    {
      v54 = (BattleWaveInfoData_BattleItemInfo_o *)sub_B77694(BattleWaveInfoData_BattleItemInfo_TypeInfo);
      BattleWaveInfoData_BattleItemInfo___ctor(v54, 0LL);
      v55 = saveData->fields.battleItemInfos;
      if ( !v55 )
        goto LABEL_33;
      if ( v51 >= v55->max_length )
        goto LABEL_34;
      if ( !v54 )
        goto LABEL_33;
      BattleWaveInfoData_BattleItemInfo__SetDataFromSaveData(
        v54,
        *(BattleWaveInfoData_BattleItemInfo_SaveData_o **)((char *)&v55->obj.klass + v53 * 4),
        0LL);
      v56 = *p_battleItemInfos;
      if ( !*p_battleItemInfos )
        goto LABEL_33;
      this = (BattleWaveInfoData_o *)sub_B77684(v54, *(_QWORD *)(*(_QWORD *)v56 + 64LL));
      if ( !this )
        goto LABEL_35;
      if ( v51 >= v56[6] )
        goto LABEL_34;
      *(_QWORD *)&v56[v53] = v54;
      sub_B77560((BattleServantConfConponent_o *)&v56[v53], (System_Int32_array **)v54, v57, v58, v59, v60, v61, v62);
      ++v51;
      v53 += 2LL;
    }
    while ( (__int64)v51 < v52 );
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
  int size; // w21
  System_Int32_array **v7; // x0
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  __int64 v14; // x23
  struct System_Collections_Generic_List_BattleSkillInfoData__o *v15; // x25
  struct System_Int32_array *equipSkillChargeNum; // x24
  BattleSkillInfoData_o *v17; // x8
  char *v18; // x9
  struct System_Collections_Generic_List_BattleDropItem__o *droplist; // x8
  int v20; // w21
  System_Int32_array **v21; // x0
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  unsigned int v28; // w24
  __int64 v29; // x25
  struct System_Collections_Generic_List_BattleDropItem__o *v30; // x23
  struct DropInfo_array *dropInfos; // x26
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  System_Int32_array **v38; // x23
  int32_t wave; // w23
  BattleWaveInfoData_o *v40; // x21
  System_Int32_array **v41; // x0
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  struct BattleWaveInfoData_BattleItemInfo_array *battleItemInfos; // x22
  BattleWaveInfoData_BattleItemInfo_o *v49; // x23
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  __int64 v56; // x0
  __int64 v57; // x0

  v4 = this;
  if ( (byte_438A8E0 & 1) == 0 )
  {
    sub_B775C4(&BattleWaveInfoData_BattleItemInfo___TypeInfo);
    sub_B775C4(&BattleWaveInfoData_BattleItemInfo_TypeInfo);
    sub_B775C4(&DropInfo___TypeInfo);
    sub_B775C4(&int___TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_BattleDropItem__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_BattleSkillInfoData__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_BattleDropItem__get_Item__);
    sub_B775C4(&Method_System_Collections_Generic_List_BattleSkillInfoData__get_Item__);
    sub_B775C4(&Method_SingletonTemplate_BattleItemData__get_Instance__);
    this = (BattleWaveInfoData_o *)sub_B775C4(&SingletonTemplate_BattleItemData__TypeInfo);
    byte_438A8E0 = 1;
  }
  if ( !battleData )
    goto LABEL_38;
  this = (BattleWaveInfoData_o *)BattleData__getDispWaveCount(battleData, 0LL);
  v4->fields.wave = (int)this;
  v4->fields.turn = battleData->fields.totalTurnCount + 1;
  masterSkillInfo = battleData->fields.masterSkillInfo;
  if ( !masterSkillInfo )
    goto LABEL_38;
  size = masterSkillInfo->fields._size;
  v7 = (System_Int32_array **)sub_B775DC(int___TypeInfo, (unsigned int)size);
  v4->fields.equipSkillChargeNum = (struct System_Int32_array *)v7;
  sub_B77560((BattleServantConfConponent_o *)&v4->fields.equipSkillChargeNum, v7, v8, v9, v10, v11, v12, v13);
  if ( size >= 1 )
  {
    v14 = 0LL;
    while ( 1 )
    {
      v15 = battleData->fields.masterSkillInfo;
      if ( !v15 )
        break;
      equipSkillChargeNum = v4->fields.equipSkillChargeNum;
      if ( v15->fields._size <= (unsigned int)v14 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
      v17 = v15->fields._items->m_Items[v14];
      if ( !v17 || !equipSkillChargeNum )
        break;
      if ( (unsigned int)v14 >= equipSkillChargeNum->max_length )
        goto LABEL_39;
      v18 = (char *)equipSkillChargeNum + 4 * v14++;
      *((_DWORD *)v18 + 8) = v17->fields.chargeTurn;
      if ( (int)v14 >= size )
        goto LABEL_14;
    }
LABEL_38:
    sub_B7769C(this, battleData);
  }
LABEL_14:
  this = (BattleWaveInfoData_o *)BasicHelper__IsNullOrEmpty(
                                   (System_Collections_ICollection_o *)battleData->fields.droplist,
                                   0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    droplist = battleData->fields.droplist;
    if ( !droplist )
      goto LABEL_38;
    v20 = droplist->fields._size;
    v21 = (System_Int32_array **)sub_B775DC(DropInfo___TypeInfo, (unsigned int)v20);
    v4->fields.dropInfos = (struct DropInfo_array *)v21;
    sub_B77560((BattleServantConfConponent_o *)&v4->fields.dropInfos, v21, v22, v23, v24, v25, v26, v27);
    if ( v20 >= 1 )
    {
      v28 = 0;
      v29 = 32LL;
      do
      {
        v30 = battleData->fields.droplist;
        if ( !v30 )
          goto LABEL_38;
        dropInfos = v4->fields.dropInfos;
        if ( v30->fields._size <= v28 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
        this = *(BattleWaveInfoData_o **)((char *)&v30->fields._items->obj.klass + v29);
        if ( !this )
          goto LABEL_38;
        this = (BattleWaveInfoData_o *)BattleDropItem__GetDropInfo((BattleDropItem_o *)this, 0LL);
        if ( !dropInfos )
          goto LABEL_38;
        v38 = (System_Int32_array **)this;
        if ( this )
        {
          this = (BattleWaveInfoData_o *)sub_B77684(this, dropInfos->obj.klass->_1.element_class);
          if ( !this )
            goto LABEL_40;
        }
        if ( v28 >= dropInfos->max_length )
          goto LABEL_39;
        *(Il2CppClass **)((char *)&dropInfos->obj.klass + v29) = (Il2CppClass *)v38;
        sub_B77560((BattleServantConfConponent_o *)((char *)dropInfos + v29), v38, v32, v33, v34, v35, v36, v37);
        ++v28;
        v29 += 8LL;
      }
      while ( (int)v28 < v20 );
    }
  }
  if ( (BYTE3(SingletonTemplate_BattleItemData__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_BattleItemData__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_BattleItemData__TypeInfo);
  }
  this = (BattleWaveInfoData_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2D168C0 *)Method_SingletonTemplate_BattleItemData__get_Instance__);
  if ( !this )
    goto LABEL_38;
  wave = this->fields.wave;
  v40 = this;
  v41 = (System_Int32_array **)sub_B775DC(BattleWaveInfoData_BattleItemInfo___TypeInfo, wave > 0);
  v4->fields.battleItemInfos = (struct BattleWaveInfoData_BattleItemInfo_array *)v41;
  sub_B77560((BattleServantConfConponent_o *)&v4->fields.battleItemInfos, v41, v42, v43, v44, v45, v46, v47);
  if ( wave >= 1 )
  {
    battleItemInfos = v4->fields.battleItemInfos;
    v49 = (BattleWaveInfoData_BattleItemInfo_o *)sub_B77694(BattleWaveInfoData_BattleItemInfo_TypeInfo);
    BattleWaveInfoData_BattleItemInfo___ctor(v49, 0LL);
    if ( !v49 )
      goto LABEL_38;
    v49->fields.itemId = v40->fields.wave;
    v49->fields.num = v40->fields.turn;
    if ( !battleItemInfos )
      goto LABEL_38;
    this = (BattleWaveInfoData_o *)sub_B77684(v49, battleItemInfos->obj.klass->_1.element_class);
    if ( !this )
    {
LABEL_40:
      v57 = sub_B776BC(this);
      sub_B77668(v57, 0LL);
    }
    if ( !battleItemInfos->max_length )
    {
LABEL_39:
      v56 = sub_B776C8(this);
      sub_B77668(v56, 0LL);
    }
    battleItemInfos->m_Items[0] = v49;
    sub_B77560(
      (BattleServantConfConponent_o *)battleItemInfos->m_Items,
      (System_Int32_array **)v49,
      v50,
      v51,
      v52,
      v53,
      v54,
      v55);
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
  BattleWaveInfoData_BattleItemInfo_SaveData_o *v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  BattleWaveInfoData_BattleItemInfo_SaveData_o *result; // x0

  if ( (byte_4388500 & 1) == 0 )
  {
    sub_B775C4(&BattleWaveInfoData_BattleItemInfo_SaveData_TypeInfo);
    byte_4388500 = 1;
  }
  v3 = (BattleWaveInfoData_BattleItemInfo_SaveData_o *)sub_B77694(BattleWaveInfoData_BattleItemInfo_SaveData_TypeInfo);
  BattleWaveInfoData_BattleItemInfo_SaveData___ctor(v3, 0LL);
  if ( !v3 )
    sub_B7769C(v4, v5);
  result = v3;
  v3->fields.itemId = this->fields.itemId;
  v3->fields.num = this->fields.num;
  return result;
}


void __fastcall BattleWaveInfoData_BattleItemInfo__SetDataFromSaveData(
        BattleWaveInfoData_BattleItemInfo_o *this,
        BattleWaveInfoData_BattleItemInfo_SaveData_o *saveData,
        const MethodInfo *method)
{
  if ( !saveData )
    sub_B7769C(this, 0LL);
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