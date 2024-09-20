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
  __int64 v8; // x0
  __int64 *v9; // x22
  int32_t v10; // w2
  int32_t v11; // w3
  struct System_Int32_array *v12; // x12
  __int64 v13; // x9
  unsigned __int64 v14; // x10
  unsigned __int64 v15; // x8
  int32_t *v16; // x12
  __int64 v17; // x13
  int v18; // w21
  struct DropInfo_array *dropInfos; // x8
  __int64 v20; // x0
  int32_t v21; // w2
  int32_t v22; // w3
  il2cpp_array_size_t v23; // w24
  struct DropInfo_array *v24; // x8
  _DWORD *v25; // x26
  int32_t v26; // w2
  int32_t v27; // w3
  __int64 v28; // x23
  _DWORD *v29; // x0
  int v30; // w21
  struct BattleWaveInfoData_BattleItemInfo_array *battleItemInfos; // x8
  __int64 v32; // x0
  int32_t v33; // w2
  int32_t v34; // w3
  il2cpp_array_size_t v35; // w24
  struct BattleWaveInfoData_BattleItemInfo_array *v36; // x8
  _DWORD *v37; // x26
  int32_t v38; // w2
  int32_t v39; // w3
  __int64 v40; // x23
  _DWORD *v41; // x0
  BattleWaveInfoData_SaveData_o *result; // x0
  __int64 v43; // x0

  if ( (byte_4A5AC67 & 1) == 0 )
  {
    sub_1B885B0(&int___TypeInfo);
    sub_1B885B0(&BattleWaveInfoData_BattleItemInfo_SaveData___TypeInfo);
    sub_1B885B0(&DropInfo_SaveData___TypeInfo);
    sub_1B885B0(&BattleWaveInfoData_SaveData_TypeInfo);
    byte_4A5AC67 = 1;
  }
  v3 = sub_1B887FC(BattleWaveInfoData_SaveData_TypeInfo);
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
  v8 = sub_1B88658(int___TypeInfo, (unsigned int)max_length);
  *(_QWORD *)(v3 + 24) = v8;
  v9 = (__int64 *)(v3 + 24);
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v3 + 24), v8, v10, v11);
  if ( max_length >= 1 )
  {
    v12 = this->fields.equipSkillChargeNum;
    if ( !v12 )
      goto LABEL_44;
    v13 = *v9;
    v14 = v12->max_length;
    v15 = 0LL;
    v16 = &v12->m_Items[1];
    v17 = *v9 + 32;
    do
    {
      if ( v15 >= v14 )
        goto LABEL_45;
      if ( !v13 )
        goto LABEL_44;
      if ( v15 >= *(unsigned int *)(v13 + 24) )
LABEL_45:
        sub_1B88814(IsNullOrEmpty, v5);
      *(_DWORD *)(v17 + 4 * v15) = v16[v15];
      ++v15;
    }
    while ( max_length != v15 );
  }
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.dropInfos, 0LL);
  if ( (IsNullOrEmpty & 1) != 0 )
  {
    v18 = 0;
  }
  else
  {
    dropInfos = this->fields.dropInfos;
    if ( !dropInfos )
      goto LABEL_44;
    v18 = dropInfos->max_length;
  }
  v20 = sub_1B88658(DropInfo_SaveData___TypeInfo, (unsigned int)v18);
  *(_QWORD *)(v3 + 32) = v20;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v3 + 32), v20, v21, v22);
  if ( v18 >= 1 )
  {
    v23 = 0;
    while ( 1 )
    {
      v24 = this->fields.dropInfos;
      if ( !v24 )
        break;
      if ( v23 >= v24->max_length )
        goto LABEL_45;
      IsNullOrEmpty = (__int64)v24->m_Items[v23];
      if ( !IsNullOrEmpty )
        break;
      v25 = *(_DWORD **)(v3 + 32);
      IsNullOrEmpty = (__int64)DropInfo__GetSaveData((DropInfo_o *)IsNullOrEmpty, 0LL);
      if ( !v25 )
        break;
      v28 = IsNullOrEmpty;
      if ( IsNullOrEmpty )
      {
        IsNullOrEmpty = sub_1B886EC(IsNullOrEmpty, *(_QWORD *)(*(_QWORD *)v25 + 64LL));
        if ( !IsNullOrEmpty )
        {
LABEL_46:
          v43 = sub_1B88830(IsNullOrEmpty);
          sub_1B886D8(v43, 0LL);
        }
      }
      if ( v23 >= v25[6] )
        goto LABEL_45;
      v29 = &v25[2 * v23];
      *((_QWORD *)v29 + 4) = v28;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v29 + 8), v28, v26, v27);
      if ( v18 == ++v23 )
        goto LABEL_29;
    }
LABEL_44:
    sub_1B8880C(IsNullOrEmpty, v5);
  }
LABEL_29:
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.battleItemInfos, 0LL);
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
  v32 = sub_1B88658(BattleWaveInfoData_BattleItemInfo_SaveData___TypeInfo, (unsigned int)v30);
  *(_QWORD *)(v3 + 40) = v32;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v3 + 40), v32, v33, v34);
  if ( v30 >= 1 )
  {
    v35 = 0;
    do
    {
      v36 = this->fields.battleItemInfos;
      if ( !v36 )
        goto LABEL_44;
      if ( v35 >= v36->max_length )
        goto LABEL_45;
      IsNullOrEmpty = (__int64)v36->m_Items[v35];
      if ( !IsNullOrEmpty )
        goto LABEL_44;
      v37 = *(_DWORD **)(v3 + 40);
      IsNullOrEmpty = (__int64)BattleWaveInfoData_BattleItemInfo__GetSaveData(
                                 (BattleWaveInfoData_BattleItemInfo_o *)IsNullOrEmpty,
                                 v5);
      if ( !v37 )
        goto LABEL_44;
      v40 = IsNullOrEmpty;
      if ( IsNullOrEmpty )
      {
        IsNullOrEmpty = sub_1B886EC(IsNullOrEmpty, *(_QWORD *)(*(_QWORD *)v37 + 64LL));
        if ( !IsNullOrEmpty )
          goto LABEL_46;
      }
      if ( v35 >= v37[6] )
        goto LABEL_45;
      v41 = &v37[2 * v35];
      *((_QWORD *)v41 + 4) = v40;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v41 + 8), v40, v38, v39);
    }
    while ( v30 != ++v35 );
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
  __int64 v7; // x0
  struct System_Int32_array **p_equipSkillChargeNum; // x22
  int32_t v9; // w2
  int32_t v10; // w3
  struct System_Int32_array *v11; // x12
  struct System_Int32_array *v12; // x9
  unsigned __int64 max_length; // x10
  unsigned __int64 v14; // x8
  int32_t *v15; // x12
  __int64 v16; // x13
  struct DropInfo_SaveData_array *dropInfos; // x8
  __int64 v18; // x22
  __int64 v19; // x0
  unsigned int **p_dropInfos; // x21
  int32_t v21; // w2
  int32_t v22; // w3
  unsigned __int64 v23; // x23
  __int64 v24; // x25
  __int64 v25; // x26
  DropInfo_o *v26; // x22
  struct DropInfo_SaveData_array *v27; // x8
  unsigned int *v28; // x27
  int32_t v29; // w2
  int32_t v30; // w3
  struct BattleWaveInfoData_BattleItemInfo_SaveData_array *battleItemInfos; // x8
  int v32; // w21
  __int64 v33; // x0
  struct BattleWaveInfoData_BattleItemInfo_array **p_battleItemInfos; // x22
  int32_t v35; // w2
  int32_t v36; // w3
  il2cpp_array_size_t v37; // w24
  Il2CppObject *v38; // x23
  struct BattleWaveInfoData_BattleItemInfo_SaveData_array *v39; // x8
  BattleWaveInfoData_BattleItemInfo_SaveData_o *v40; // x8
  struct BattleWaveInfoData_BattleItemInfo_array *v41; // x27
  int32_t v42; // w2
  int32_t v43; // w3
  Il2CppClass **v44; // x0
  __int64 v45; // x0

  v4 = this;
  if ( (byte_4A5AC66 & 1) == 0 )
  {
    sub_1B885B0(&BattleWaveInfoData_BattleItemInfo___TypeInfo);
    sub_1B885B0(&BattleWaveInfoData_BattleItemInfo_TypeInfo);
    sub_1B885B0(&DropInfo___TypeInfo);
    sub_1B885B0(&DropInfo_TypeInfo);
    this = (BattleWaveInfoData_o *)sub_1B885B0(&int___TypeInfo);
    byte_4A5AC66 = 1;
  }
  if ( !saveData )
    goto LABEL_34;
  *(_QWORD *)&v4->fields.wave = *(_QWORD *)&saveData->fields.wave;
  equipSkillChargeNum = saveData->fields.equipSkillChargeNum;
  if ( !equipSkillChargeNum )
    goto LABEL_34;
  v6 = *(_QWORD *)&equipSkillChargeNum->max_length;
  v7 = sub_1B88658(int___TypeInfo, (unsigned int)v6);
  v4->fields.equipSkillChargeNum = (struct System_Int32_array *)v7;
  p_equipSkillChargeNum = &v4->fields.equipSkillChargeNum;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v4->fields.equipSkillChargeNum, v7, v9, v10);
  if ( (int)v6 >= 1 )
  {
    v11 = saveData->fields.equipSkillChargeNum;
    if ( !v11 )
      goto LABEL_34;
    v12 = *p_equipSkillChargeNum;
    max_length = v11->max_length;
    v14 = 0LL;
    v15 = &v11->m_Items[1];
    v16 = (__int64)&(*p_equipSkillChargeNum)->m_Items[1];
    do
    {
      if ( v14 >= max_length )
        goto LABEL_35;
      if ( !v12 )
        goto LABEL_34;
      if ( v14 >= v12->max_length )
LABEL_35:
        sub_1B88814(this, saveData);
      *(_DWORD *)(v16 + 4 * v14) = v15[v14];
      ++v14;
    }
    while ( (unsigned int)v6 != v14 );
  }
  dropInfos = saveData->fields.dropInfos;
  if ( !dropInfos )
LABEL_34:
    sub_1B8880C(this, saveData);
  v18 = *(_QWORD *)&dropInfos->max_length;
  v19 = sub_1B88658(DropInfo___TypeInfo, (unsigned int)v18);
  v4->fields.dropInfos = (struct DropInfo_array *)v19;
  p_dropInfos = (unsigned int **)&v4->fields.dropInfos;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v4->fields.dropInfos, v19, v21, v22);
  if ( (int)v18 >= 1 )
  {
    v23 = 0LL;
    v24 = (unsigned int)v18;
    v25 = 8LL;
    do
    {
      v26 = (DropInfo_o *)sub_1B887FC(DropInfo_TypeInfo);
      DropInfo___ctor(v26, 0LL);
      v27 = saveData->fields.dropInfos;
      if ( !v27 )
        goto LABEL_34;
      if ( v23 >= v27->max_length )
        goto LABEL_35;
      if ( !v26 )
        goto LABEL_34;
      DropInfo__SetDataFromSaveData(v26, *(DropInfo_SaveData_o **)((char *)&v27->obj.klass + v25 * 4), 0LL);
      v28 = *p_dropInfos;
      if ( !*p_dropInfos )
        goto LABEL_34;
      this = (BattleWaveInfoData_o *)sub_1B886EC(v26, *(_QWORD *)(*(_QWORD *)v28 + 64LL));
      if ( !this )
      {
LABEL_36:
        v45 = sub_1B88830(this);
        sub_1B886D8(v45, 0LL);
      }
      if ( v23 >= v28[6] )
        goto LABEL_35;
      *(_QWORD *)&v28[v25] = v26;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&v28[v25], (int32_t)v26, v29, v30);
      ++v23;
      v25 += 2LL;
    }
    while ( v24 != v23 );
  }
  battleItemInfos = saveData->fields.battleItemInfos;
  if ( !battleItemInfos )
    goto LABEL_34;
  v32 = battleItemInfos->max_length;
  v33 = sub_1B88658(BattleWaveInfoData_BattleItemInfo___TypeInfo, (unsigned int)v32);
  v4->fields.battleItemInfos = (struct BattleWaveInfoData_BattleItemInfo_array *)v33;
  p_battleItemInfos = &v4->fields.battleItemInfos;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v4->fields.battleItemInfos, v33, v35, v36);
  if ( v32 >= 1 )
  {
    v37 = 0;
    do
    {
      v38 = (Il2CppObject *)sub_1B887FC(BattleWaveInfoData_BattleItemInfo_TypeInfo);
      System_Object___ctor(v38, 0LL);
      v39 = saveData->fields.battleItemInfos;
      if ( !v39 )
        goto LABEL_34;
      if ( v37 >= v39->max_length )
        goto LABEL_35;
      if ( !v38 )
        goto LABEL_34;
      v40 = v39->m_Items[v37];
      if ( !v40 )
        goto LABEL_34;
      v38[1].klass = (Il2CppClass *)v40->fields;
      v41 = *p_battleItemInfos;
      if ( !*p_battleItemInfos )
        goto LABEL_34;
      this = (BattleWaveInfoData_o *)sub_1B886EC(v38, v41->obj.klass->_1.element_class);
      if ( !this )
        goto LABEL_36;
      if ( v37 >= v41->max_length )
        goto LABEL_35;
      v44 = &v41->obj.klass + (int)v37;
      v44[4] = (Il2CppClass *)v38;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v44 + 4), (int32_t)v38, v42, v43);
    }
    while ( v32 != ++v37 );
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
  __int64 v7; // x0
  int32_t v8; // w2
  int32_t v9; // w3
  unsigned __int64 v10; // x23
  struct System_Int32_array *equipSkillChargeNum; // x25
  char *v12; // x9
  struct System_Collections_Generic_List_BattleDropItem__o *droplist; // x8
  __int64 v14; // x21
  __int64 v15; // x0
  int32_t v16; // w2
  int32_t v17; // w3
  unsigned __int64 v18; // x23
  __int64 v19; // x25
  unsigned int *dropInfos; // x27
  int32_t v21; // w2
  int32_t v22; // w3
  BattleWaveInfoData_o *v23; // x24
  int32_t wave; // w23
  BattleWaveInfoData_o *v25; // x21
  __int64 v26; // x0
  int32_t v27; // w2
  int32_t v28; // w3
  struct BattleWaveInfoData_BattleItemInfo_array *battleItemInfos; // x22
  Il2CppObject *v30; // x23
  int32_t v31; // w2
  int32_t v32; // w3
  __int64 v33; // x0

  v4 = this;
  if ( (byte_4A5AC68 & 1) == 0 )
  {
    sub_1B885B0(&BattleWaveInfoData_BattleItemInfo___TypeInfo);
    sub_1B885B0(&BattleWaveInfoData_BattleItemInfo_TypeInfo);
    sub_1B885B0(&DropInfo___TypeInfo);
    sub_1B885B0(&int___TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleDropItem__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleSkillInfoData__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleDropItem__get_Item__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleSkillInfoData__get_Item__);
    this = (BattleWaveInfoData_o *)sub_1B885B0(&Method_SingletonTemplate_BattleItemData__get_Instance__);
    byte_4A5AC68 = 1;
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
  v7 = sub_1B88658(int___TypeInfo, (unsigned int)size);
  v4->fields.equipSkillChargeNum = (struct System_Int32_array *)v7;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v4->fields.equipSkillChargeNum, v7, v8, v9);
  if ( (int)size >= 1 )
  {
    v10 = 0LL;
    while ( 1 )
    {
      this = (BattleWaveInfoData_o *)battleData->fields.masterSkillInfo;
      if ( !this )
        break;
      equipSkillChargeNum = v4->fields.equipSkillChargeNum;
      this = (BattleWaveInfoData_o *)System_Collections_Generic_List_object___get_Item(
                                       (System_Collections_Generic_List_object__o *)this,
                                       v10,
                                       (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_BattleSkillInfoData__get_Item__);
      if ( !this || !equipSkillChargeNum )
        break;
      if ( v10 >= equipSkillChargeNum->max_length )
        goto LABEL_32;
      v12 = (char *)equipSkillChargeNum + 4 * v10++;
      *((_DWORD *)v12 + 8) = this->fields.battleItemInfos;
      if ( size == v10 )
        goto LABEL_12;
    }
LABEL_31:
    sub_1B8880C(this, battleData);
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
    v14 = (unsigned int)droplist->fields._size;
    v15 = sub_1B88658(DropInfo___TypeInfo, (unsigned int)v14);
    v4->fields.dropInfos = (struct DropInfo_array *)v15;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v4->fields.dropInfos, v15, v16, v17);
    if ( (int)v14 >= 1 )
    {
      v18 = 0LL;
      v19 = 8LL;
      do
      {
        this = (BattleWaveInfoData_o *)battleData->fields.droplist;
        if ( !this )
          goto LABEL_31;
        dropInfos = (unsigned int *)v4->fields.dropInfos;
        this = (BattleWaveInfoData_o *)System_Collections_Generic_List_object___get_Item(
                                         (System_Collections_Generic_List_object__o *)this,
                                         v18,
                                         (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_BattleDropItem__get_Item__);
        if ( !this )
          goto LABEL_31;
        this = (BattleWaveInfoData_o *)BattleDropItem__GetDropInfo((BattleDropItem_o *)this, 0LL);
        if ( !dropInfos )
          goto LABEL_31;
        v23 = this;
        if ( this )
        {
          this = (BattleWaveInfoData_o *)sub_1B886EC(this, *(_QWORD *)(*(_QWORD *)dropInfos + 64LL));
          if ( !this )
            goto LABEL_33;
        }
        if ( v18 >= dropInfos[6] )
          goto LABEL_32;
        *(_QWORD *)&dropInfos[v19] = v23;
        sub_1B88554((ServantStatusBattleListViewItem_o *)&dropInfos[v19], (int32_t)v23, v21, v22);
        ++v18;
        v19 += 2LL;
      }
      while ( v14 != v18 );
    }
  }
  this = (BattleWaveInfoData_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_BattleItemData__get_Instance__);
  if ( !this )
    goto LABEL_31;
  wave = this->fields.wave;
  v25 = this;
  v26 = sub_1B88658(BattleWaveInfoData_BattleItemInfo___TypeInfo, wave > 0);
  v4->fields.battleItemInfos = (struct BattleWaveInfoData_BattleItemInfo_array *)v26;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v4->fields.battleItemInfos, v26, v27, v28);
  if ( wave >= 1 )
  {
    battleItemInfos = v4->fields.battleItemInfos;
    v30 = (Il2CppObject *)sub_1B887FC(BattleWaveInfoData_BattleItemInfo_TypeInfo);
    System_Object___ctor(v30, 0LL);
    if ( !v30 )
      goto LABEL_31;
    v30[1].klass = *(Il2CppClass **)&v25->fields.wave;
    if ( !battleItemInfos )
      goto LABEL_31;
    this = (BattleWaveInfoData_o *)sub_1B886EC(v30, battleItemInfos->obj.klass->_1.element_class);
    if ( !this )
    {
LABEL_33:
      v33 = sub_1B88830(this);
      sub_1B886D8(v33, 0LL);
    }
    if ( !battleItemInfos->max_length )
LABEL_32:
      sub_1B88814(this, battleData);
    battleItemInfos->m_Items[0] = (BattleWaveInfoData_BattleItemInfo_o *)v30;
    sub_1B88554((ServantStatusBattleListViewItem_o *)battleItemInfos->m_Items, (int32_t)v30, v31, v32);
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
  __int64 v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  BattleWaveInfoData_BattleItemInfo_SaveData_o *result; // x0

  if ( (byte_4A5AC69 & 1) == 0 )
  {
    sub_1B885B0(&BattleWaveInfoData_BattleItemInfo_SaveData_TypeInfo);
    byte_4A5AC69 = 1;
  }
  v3 = sub_1B887FC(BattleWaveInfoData_BattleItemInfo_SaveData_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  if ( !v3 )
    sub_1B8880C(v4, v5);
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
    sub_1B8880C(this, 0LL);
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