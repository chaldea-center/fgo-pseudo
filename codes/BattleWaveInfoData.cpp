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
  int32_t v14; // w3
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
  int32_t v25; // w3
  il2cpp_array_size_t v26; // w24
  struct DropInfo_array *v27; // x8
  _DWORD *v28; // x26
  int32_t v29; // w2
  int32_t v30; // w3
  __int64 v31; // x23
  _DWORD *v32; // x0
  int v33; // w21
  struct BattleWaveInfoData_BattleItemInfo_array *battleItemInfos; // x8
  __int64 v35; // x0
  int32_t v36; // w2
  int32_t v37; // w3
  il2cpp_array_size_t v38; // w24
  struct BattleWaveInfoData_BattleItemInfo_array *v39; // x8
  _DWORD *v40; // x26
  int32_t v41; // w2
  int32_t v42; // w3
  __int64 v43; // x23
  _DWORD *v44; // x0
  BattleWaveInfoData_SaveData_o *result; // x0
  __int64 v46; // x0

  if ( (byte_4A6F970 & 1) == 0 )
  {
    sub_1B90010(&int___TypeInfo, method);
    sub_1B90010(&BattleWaveInfoData_BattleItemInfo_SaveData___TypeInfo, v3);
    sub_1B90010(&DropInfo_SaveData___TypeInfo, v4);
    sub_1B90010(&BattleWaveInfoData_SaveData_TypeInfo, v5);
    byte_4A6F970 = 1;
  }
  v6 = sub_1B9025C(BattleWaveInfoData_SaveData_TypeInfo);
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
  v11 = sub_1B900B8(int___TypeInfo, (unsigned int)max_length);
  *(_QWORD *)(v6 + 24) = v11;
  v12 = (__int64 *)(v6 + 24);
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v6 + 24), v11, v13, v14);
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
        sub_1B90274(IsNullOrEmpty, v8);
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
  v23 = sub_1B900B8(DropInfo_SaveData___TypeInfo, (unsigned int)v21);
  *(_QWORD *)(v6 + 32) = v23;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v6 + 32), v23, v24, v25);
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
        IsNullOrEmpty = sub_1B9014C(IsNullOrEmpty, *(_QWORD *)(*(_QWORD *)v28 + 64LL));
        if ( !IsNullOrEmpty )
        {
LABEL_46:
          v46 = sub_1B90290(IsNullOrEmpty);
          sub_1B90138(v46, 0LL);
        }
      }
      if ( v26 >= v28[6] )
        goto LABEL_45;
      v32 = &v28[2 * v26];
      *((_QWORD *)v32 + 4) = v31;
      sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v32 + 8), v31, v29, v30);
      if ( v21 == ++v26 )
        goto LABEL_29;
    }
LABEL_44:
    sub_1B9026C(IsNullOrEmpty, v8);
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
  v35 = sub_1B900B8(BattleWaveInfoData_BattleItemInfo_SaveData___TypeInfo, (unsigned int)v33);
  *(_QWORD *)(v6 + 40) = v35;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v6 + 40), v35, v36, v37);
  if ( v33 >= 1 )
  {
    v38 = 0;
    do
    {
      v39 = this->fields.battleItemInfos;
      if ( !v39 )
        goto LABEL_44;
      if ( v38 >= v39->max_length )
        goto LABEL_45;
      IsNullOrEmpty = (__int64)v39->m_Items[v38];
      if ( !IsNullOrEmpty )
        goto LABEL_44;
      v40 = *(_DWORD **)(v6 + 40);
      IsNullOrEmpty = (__int64)BattleWaveInfoData_BattleItemInfo__GetSaveData(
                                 (BattleWaveInfoData_BattleItemInfo_o *)IsNullOrEmpty,
                                 v8);
      if ( !v40 )
        goto LABEL_44;
      v43 = IsNullOrEmpty;
      if ( IsNullOrEmpty )
      {
        IsNullOrEmpty = sub_1B9014C(IsNullOrEmpty, *(_QWORD *)(*(_QWORD *)v40 + 64LL));
        if ( !IsNullOrEmpty )
          goto LABEL_46;
      }
      if ( v38 >= v40[6] )
        goto LABEL_45;
      v44 = &v40[2 * v38];
      *((_QWORD *)v44 + 4) = v43;
      sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v44 + 8), v43, v41, v42);
    }
    while ( v33 != ++v38 );
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
  __int64 v11; // x0
  struct System_Int32_array **p_equipSkillChargeNum; // x22
  int32_t v13; // w2
  int32_t v14; // w3
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
  int32_t v26; // w3
  unsigned __int64 v27; // x23
  __int64 v28; // x25
  __int64 v29; // x26
  DropInfo_o *v30; // x22
  struct DropInfo_SaveData_array *v31; // x8
  unsigned int *v32; // x27
  int32_t v33; // w2
  int32_t v34; // w3
  struct BattleWaveInfoData_BattleItemInfo_SaveData_array *battleItemInfos; // x8
  int v36; // w21
  __int64 v37; // x0
  struct BattleWaveInfoData_BattleItemInfo_array **p_battleItemInfos; // x22
  int32_t v39; // w2
  int32_t v40; // w3
  il2cpp_array_size_t v41; // w24
  Il2CppObject *v42; // x23
  struct BattleWaveInfoData_BattleItemInfo_SaveData_array *v43; // x8
  BattleWaveInfoData_BattleItemInfo_SaveData_o *v44; // x8
  struct BattleWaveInfoData_BattleItemInfo_array *v45; // x27
  int32_t v46; // w2
  int32_t v47; // w3
  Il2CppClass **v48; // x0
  __int64 v49; // x0

  v4 = this;
  if ( (byte_4A6F96F & 1) == 0 )
  {
    sub_1B90010(&BattleWaveInfoData_BattleItemInfo___TypeInfo, saveData);
    sub_1B90010(&BattleWaveInfoData_BattleItemInfo_TypeInfo, v5);
    sub_1B90010(&DropInfo___TypeInfo, v6);
    sub_1B90010(&DropInfo_TypeInfo, v7);
    this = (BattleWaveInfoData_o *)sub_1B90010(&int___TypeInfo, v8);
    byte_4A6F96F = 1;
  }
  if ( !saveData )
    goto LABEL_34;
  *(_QWORD *)&v4->fields.wave = *(_QWORD *)&saveData->fields.wave;
  equipSkillChargeNum = saveData->fields.equipSkillChargeNum;
  if ( !equipSkillChargeNum )
    goto LABEL_34;
  v10 = *(_QWORD *)&equipSkillChargeNum->max_length;
  v11 = sub_1B900B8(int___TypeInfo, (unsigned int)v10);
  v4->fields.equipSkillChargeNum = (struct System_Int32_array *)v11;
  p_equipSkillChargeNum = &v4->fields.equipSkillChargeNum;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v4->fields.equipSkillChargeNum, v11, v13, v14);
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
        sub_1B90274(this, saveData);
      *(_DWORD *)(v20 + 4 * v18) = v19[v18];
      ++v18;
    }
    while ( (unsigned int)v10 != v18 );
  }
  dropInfos = saveData->fields.dropInfos;
  if ( !dropInfos )
LABEL_34:
    sub_1B9026C(this, saveData);
  v22 = *(_QWORD *)&dropInfos->max_length;
  v23 = sub_1B900B8(DropInfo___TypeInfo, (unsigned int)v22);
  v4->fields.dropInfos = (struct DropInfo_array *)v23;
  p_dropInfos = (unsigned int **)&v4->fields.dropInfos;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v4->fields.dropInfos, v23, v25, v26);
  if ( (int)v22 >= 1 )
  {
    v27 = 0LL;
    v28 = (unsigned int)v22;
    v29 = 8LL;
    do
    {
      v30 = (DropInfo_o *)sub_1B9025C(DropInfo_TypeInfo);
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
      this = (BattleWaveInfoData_o *)sub_1B9014C(v30, *(_QWORD *)(*(_QWORD *)v32 + 64LL));
      if ( !this )
      {
LABEL_36:
        v49 = sub_1B90290(this);
        sub_1B90138(v49, 0LL);
      }
      if ( v27 >= v32[6] )
        goto LABEL_35;
      *(_QWORD *)&v32[v29] = v30;
      sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v32[v29], (int32_t)v30, v33, v34);
      ++v27;
      v29 += 2LL;
    }
    while ( v28 != v27 );
  }
  battleItemInfos = saveData->fields.battleItemInfos;
  if ( !battleItemInfos )
    goto LABEL_34;
  v36 = battleItemInfos->max_length;
  v37 = sub_1B900B8(BattleWaveInfoData_BattleItemInfo___TypeInfo, (unsigned int)v36);
  v4->fields.battleItemInfos = (struct BattleWaveInfoData_BattleItemInfo_array *)v37;
  p_battleItemInfos = &v4->fields.battleItemInfos;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v4->fields.battleItemInfos, v37, v39, v40);
  if ( v36 >= 1 )
  {
    v41 = 0;
    do
    {
      v42 = (Il2CppObject *)sub_1B9025C(BattleWaveInfoData_BattleItemInfo_TypeInfo);
      System_Object___ctor(v42, 0LL);
      v43 = saveData->fields.battleItemInfos;
      if ( !v43 )
        goto LABEL_34;
      if ( v41 >= v43->max_length )
        goto LABEL_35;
      if ( !v42 )
        goto LABEL_34;
      v44 = v43->m_Items[v41];
      if ( !v44 )
        goto LABEL_34;
      v42[1].klass = (Il2CppClass *)v44->fields;
      v45 = *p_battleItemInfos;
      if ( !*p_battleItemInfos )
        goto LABEL_34;
      this = (BattleWaveInfoData_o *)sub_1B9014C(v42, v45->obj.klass->_1.element_class);
      if ( !this )
        goto LABEL_36;
      if ( v41 >= v45->max_length )
        goto LABEL_35;
      v48 = &v45->obj.klass + (int)v41;
      v48[4] = (Il2CppClass *)v42;
      sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v48 + 4), (int32_t)v42, v46, v47);
    }
    while ( v36 != ++v41 );
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
  __int64 v15; // x0
  int32_t v16; // w2
  int32_t v17; // w3
  unsigned __int64 v18; // x23
  struct System_Int32_array *equipSkillChargeNum; // x25
  char *v20; // x9
  struct System_Collections_Generic_List_BattleDropItem__o *droplist; // x8
  __int64 v22; // x21
  __int64 v23; // x0
  int32_t v24; // w2
  int32_t v25; // w3
  unsigned __int64 v26; // x23
  __int64 v27; // x25
  unsigned int *dropInfos; // x27
  int32_t v29; // w2
  int32_t v30; // w3
  BattleWaveInfoData_o *v31; // x24
  int32_t wave; // w23
  BattleWaveInfoData_o *v33; // x21
  __int64 v34; // x0
  int32_t v35; // w2
  int32_t v36; // w3
  struct BattleWaveInfoData_BattleItemInfo_array *battleItemInfos; // x22
  Il2CppObject *v38; // x23
  int32_t v39; // w2
  int32_t v40; // w3
  __int64 v41; // x0

  v4 = this;
  if ( (byte_4A6F971 & 1) == 0 )
  {
    sub_1B90010(&BattleWaveInfoData_BattleItemInfo___TypeInfo, battleData);
    sub_1B90010(&BattleWaveInfoData_BattleItemInfo_TypeInfo, v5);
    sub_1B90010(&DropInfo___TypeInfo, v6);
    sub_1B90010(&int___TypeInfo, v7);
    sub_1B90010(&Method_System_Collections_Generic_List_BattleDropItem__get_Count__, v8);
    sub_1B90010(&Method_System_Collections_Generic_List_BattleSkillInfoData__get_Count__, v9);
    sub_1B90010(&Method_System_Collections_Generic_List_BattleDropItem__get_Item__, v10);
    sub_1B90010(&Method_System_Collections_Generic_List_BattleSkillInfoData__get_Item__, v11);
    this = (BattleWaveInfoData_o *)sub_1B90010(&Method_SingletonTemplate_BattleItemData__get_Instance__, v12);
    byte_4A6F971 = 1;
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
  v15 = sub_1B900B8(int___TypeInfo, (unsigned int)size);
  v4->fields.equipSkillChargeNum = (struct System_Int32_array *)v15;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v4->fields.equipSkillChargeNum, v15, v16, v17);
  if ( (int)size >= 1 )
  {
    v18 = 0LL;
    while ( 1 )
    {
      this = (BattleWaveInfoData_o *)battleData->fields.masterSkillInfo;
      if ( !this )
        break;
      equipSkillChargeNum = v4->fields.equipSkillChargeNum;
      this = (BattleWaveInfoData_o *)System_Collections_Generic_List_object___get_Item(
                                       (System_Collections_Generic_List_object__o *)this,
                                       v18,
                                       (const MethodInfo_35106F0 *)Method_System_Collections_Generic_List_BattleSkillInfoData__get_Item__);
      if ( !this || !equipSkillChargeNum )
        break;
      if ( v18 >= equipSkillChargeNum->max_length )
        goto LABEL_32;
      v20 = (char *)equipSkillChargeNum + 4 * v18++;
      *((_DWORD *)v20 + 8) = this->fields.battleItemInfos;
      if ( size == v18 )
        goto LABEL_12;
    }
LABEL_31:
    sub_1B9026C(this, battleData);
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
    v22 = (unsigned int)droplist->fields._size;
    v23 = sub_1B900B8(DropInfo___TypeInfo, (unsigned int)v22);
    v4->fields.dropInfos = (struct DropInfo_array *)v23;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v4->fields.dropInfos, v23, v24, v25);
    if ( (int)v22 >= 1 )
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
                                         (const MethodInfo_35106F0 *)Method_System_Collections_Generic_List_BattleDropItem__get_Item__);
        if ( !this )
          goto LABEL_31;
        this = (BattleWaveInfoData_o *)BattleDropItem__GetDropInfo((BattleDropItem_o *)this, 0LL);
        if ( !dropInfos )
          goto LABEL_31;
        v31 = this;
        if ( this )
        {
          this = (BattleWaveInfoData_o *)sub_1B9014C(this, *(_QWORD *)(*(_QWORD *)dropInfos + 64LL));
          if ( !this )
            goto LABEL_33;
        }
        if ( v26 >= dropInfos[6] )
          goto LABEL_32;
        *(_QWORD *)&dropInfos[v27] = v31;
        sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&dropInfos[v27], (int32_t)v31, v29, v30);
        ++v26;
        v27 += 2LL;
      }
      while ( v22 != v26 );
    }
  }
  this = (BattleWaveInfoData_o *)SingletonTemplate_object___get_Instance((const MethodInfo_374D460 *)Method_SingletonTemplate_BattleItemData__get_Instance__);
  if ( !this )
    goto LABEL_31;
  wave = this->fields.wave;
  v33 = this;
  v34 = sub_1B900B8(BattleWaveInfoData_BattleItemInfo___TypeInfo, wave > 0);
  v4->fields.battleItemInfos = (struct BattleWaveInfoData_BattleItemInfo_array *)v34;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v4->fields.battleItemInfos, v34, v35, v36);
  if ( wave >= 1 )
  {
    battleItemInfos = v4->fields.battleItemInfos;
    v38 = (Il2CppObject *)sub_1B9025C(BattleWaveInfoData_BattleItemInfo_TypeInfo);
    System_Object___ctor(v38, 0LL);
    if ( !v38 )
      goto LABEL_31;
    v38[1].klass = *(Il2CppClass **)&v33->fields.wave;
    if ( !battleItemInfos )
      goto LABEL_31;
    this = (BattleWaveInfoData_o *)sub_1B9014C(v38, battleItemInfos->obj.klass->_1.element_class);
    if ( !this )
    {
LABEL_33:
      v41 = sub_1B90290(this);
      sub_1B90138(v41, 0LL);
    }
    if ( !battleItemInfos->max_length )
LABEL_32:
      sub_1B90274(this, battleData);
    battleItemInfos->m_Items[0] = (BattleWaveInfoData_BattleItemInfo_o *)v38;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)battleItemInfos->m_Items, (int32_t)v38, v39, v40);
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

  if ( (byte_4A6F972 & 1) == 0 )
  {
    sub_1B90010(&BattleWaveInfoData_BattleItemInfo_SaveData_TypeInfo, method);
    byte_4A6F972 = 1;
  }
  v3 = sub_1B9025C(BattleWaveInfoData_BattleItemInfo_SaveData_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  if ( !v3 )
    sub_1B9026C(v4, v5);
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
    sub_1B9026C(this, 0LL);
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