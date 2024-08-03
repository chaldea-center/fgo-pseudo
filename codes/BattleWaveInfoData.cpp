void __fastcall BattleWaveInfoData___ctor(BattleWaveInfoData_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


BattleWaveInfoData_SaveData_o *__fastcall BattleWaveInfoData__GetSaveData(
        BattleWaveInfoData_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x20
  __int64 IsNullOrEmpty; // x0
  int max_length; // w21
  struct System_Int32_array *equipSkillChargeNum; // x8
  __int64 v11; // x0
  __int64 *v12; // x22
  int32_t v13; // w2
  int32_t v14; // w3
  const MethodInfo *v15; // x1
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
  int32_t v26; // w3
  il2cpp_array_size_t v27; // w24
  struct DropInfo_array *v28; // x8
  _DWORD *v29; // x26
  int32_t v30; // w2
  int32_t v31; // w3
  __int64 v32; // x23
  _DWORD *v33; // x0
  int v34; // w21
  struct BattleWaveInfoData_BattleItemInfo_array *battleItemInfos; // x8
  __int64 v36; // x0
  int32_t v37; // w2
  int32_t v38; // w3
  il2cpp_array_size_t v39; // w24
  struct BattleWaveInfoData_BattleItemInfo_array *v40; // x8
  _DWORD *v41; // x26
  int32_t v42; // w2
  int32_t v43; // w3
  __int64 v44; // x23
  _DWORD *v45; // x0
  BattleWaveInfoData_SaveData_o *result; // x0
  __int64 v47; // x0

  if ( (byte_49FBF25 & 1) == 0 )
  {
    sub_1B640C8(&int___TypeInfo, method);
    sub_1B640C8(&BattleWaveInfoData_BattleItemInfo_SaveData___TypeInfo, v4);
    sub_1B640C8(&DropInfo_SaveData___TypeInfo, v5);
    sub_1B640C8(&BattleWaveInfoData_SaveData_TypeInfo, v6);
    byte_49FBF25 = 1;
  }
  v7 = sub_1B64314(BattleWaveInfoData_SaveData_TypeInfo, method, v2);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7 )
    goto LABEL_44;
  *(_QWORD *)(v7 + 16) = *(_QWORD *)&this->fields.wave;
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
  v11 = sub_1B64170(int___TypeInfo, (unsigned int)max_length);
  *(_QWORD *)(v7 + 24) = v11;
  v12 = (__int64 *)(v7 + 24);
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v7 + 24), v11, v13, v14);
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
        sub_1B6432C(IsNullOrEmpty, v15);
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
  v24 = sub_1B64170(DropInfo_SaveData___TypeInfo, (unsigned int)v22);
  *(_QWORD *)(v7 + 32) = v24;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v7 + 32), v24, v25, v26);
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
      v29 = *(_DWORD **)(v7 + 32);
      IsNullOrEmpty = (__int64)DropInfo__GetSaveData((DropInfo_o *)IsNullOrEmpty, 0LL);
      if ( !v29 )
        break;
      v32 = IsNullOrEmpty;
      if ( IsNullOrEmpty )
      {
        IsNullOrEmpty = sub_1B64204(IsNullOrEmpty, *(_QWORD *)(*(_QWORD *)v29 + 64LL));
        if ( !IsNullOrEmpty )
        {
LABEL_46:
          v47 = sub_1B64348(IsNullOrEmpty);
          sub_1B641F0(v47, 0LL);
        }
      }
      if ( v27 >= v29[6] )
        goto LABEL_45;
      v33 = &v29[2 * v27];
      *((_QWORD *)v33 + 4) = v32;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v33 + 8), v32, v30, v31);
      if ( v22 == ++v27 )
        goto LABEL_29;
    }
LABEL_44:
    sub_1B64324(IsNullOrEmpty);
  }
LABEL_29:
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.battleItemInfos, 0LL);
  if ( (IsNullOrEmpty & 1) != 0 )
  {
    v34 = 0;
  }
  else
  {
    battleItemInfos = this->fields.battleItemInfos;
    if ( !battleItemInfos )
      goto LABEL_44;
    v34 = battleItemInfos->max_length;
  }
  v36 = sub_1B64170(BattleWaveInfoData_BattleItemInfo_SaveData___TypeInfo, (unsigned int)v34);
  *(_QWORD *)(v7 + 40) = v36;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v7 + 40), v36, v37, v38);
  if ( v34 >= 1 )
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
      v41 = *(_DWORD **)(v7 + 40);
      IsNullOrEmpty = (__int64)BattleWaveInfoData_BattleItemInfo__GetSaveData(
                                 (BattleWaveInfoData_BattleItemInfo_o *)IsNullOrEmpty,
                                 v15);
      if ( !v41 )
        goto LABEL_44;
      v44 = IsNullOrEmpty;
      if ( IsNullOrEmpty )
      {
        IsNullOrEmpty = sub_1B64204(IsNullOrEmpty, *(_QWORD *)(*(_QWORD *)v41 + 64LL));
        if ( !IsNullOrEmpty )
          goto LABEL_46;
      }
      if ( v39 >= v41[6] )
        goto LABEL_45;
      v45 = &v41[2 * v39];
      *((_QWORD *)v45 + 4) = v44;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v45 + 8), v44, v42, v43);
    }
    while ( v34 != ++v39 );
  }
  result = (BattleWaveInfoData_SaveData_o *)v7;
  *(_DWORD *)(v7 + 48) = this->fields.star;
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
  __int64 v15; // x1
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
  int32_t v27; // w3
  __int64 v28; // x1
  __int64 v29; // x2
  unsigned __int64 v30; // x23
  __int64 v31; // x25
  __int64 v32; // x26
  DropInfo_o *v33; // x22
  struct DropInfo_SaveData_array *v34; // x8
  unsigned int *v35; // x27
  int32_t v36; // w2
  int32_t v37; // w3
  struct BattleWaveInfoData_BattleItemInfo_SaveData_array *battleItemInfos; // x8
  int v39; // w21
  __int64 v40; // x0
  struct BattleWaveInfoData_BattleItemInfo_array **p_battleItemInfos; // x22
  int32_t v42; // w2
  int32_t v43; // w3
  __int64 v44; // x1
  __int64 v45; // x2
  il2cpp_array_size_t v46; // w24
  Il2CppObject *v47; // x23
  struct BattleWaveInfoData_BattleItemInfo_SaveData_array *v48; // x8
  BattleWaveInfoData_BattleItemInfo_SaveData_o *v49; // x8
  struct BattleWaveInfoData_BattleItemInfo_array *v50; // x27
  int32_t v51; // w2
  int32_t v52; // w3
  Il2CppClass **v53; // x0
  __int64 v54; // x0

  v4 = this;
  if ( (byte_49FBF24 & 1) == 0 )
  {
    sub_1B640C8(&BattleWaveInfoData_BattleItemInfo___TypeInfo, saveData);
    sub_1B640C8(&BattleWaveInfoData_BattleItemInfo_TypeInfo, v5);
    sub_1B640C8(&DropInfo___TypeInfo, v6);
    sub_1B640C8(&DropInfo_TypeInfo, v7);
    this = (BattleWaveInfoData_o *)sub_1B640C8(&int___TypeInfo, v8);
    byte_49FBF24 = 1;
  }
  if ( !saveData )
    goto LABEL_34;
  *(_QWORD *)&v4->fields.wave = *(_QWORD *)&saveData->fields.wave;
  equipSkillChargeNum = saveData->fields.equipSkillChargeNum;
  if ( !equipSkillChargeNum )
    goto LABEL_34;
  v10 = *(_QWORD *)&equipSkillChargeNum->max_length;
  v11 = sub_1B64170(int___TypeInfo, (unsigned int)v10);
  v4->fields.equipSkillChargeNum = (struct System_Int32_array *)v11;
  p_equipSkillChargeNum = &v4->fields.equipSkillChargeNum;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v4->fields.equipSkillChargeNum, v11, v13, v14);
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
        sub_1B6432C(this, v15);
      *(_DWORD *)(v21 + 4 * v19) = v20[v19];
      ++v19;
    }
    while ( (unsigned int)v10 != v19 );
  }
  dropInfos = saveData->fields.dropInfos;
  if ( !dropInfos )
LABEL_34:
    sub_1B64324(this);
  v23 = *(_QWORD *)&dropInfos->max_length;
  v24 = sub_1B64170(DropInfo___TypeInfo, (unsigned int)v23);
  v4->fields.dropInfos = (struct DropInfo_array *)v24;
  p_dropInfos = (unsigned int **)&v4->fields.dropInfos;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v4->fields.dropInfos, v24, v26, v27);
  if ( (int)v23 >= 1 )
  {
    v30 = 0LL;
    v31 = (unsigned int)v23;
    v32 = 8LL;
    do
    {
      v33 = (DropInfo_o *)sub_1B64314(DropInfo_TypeInfo, v28, v29);
      DropInfo___ctor(v33, 0LL);
      v34 = saveData->fields.dropInfos;
      if ( !v34 )
        goto LABEL_34;
      if ( v30 >= v34->max_length )
        goto LABEL_35;
      if ( !v33 )
        goto LABEL_34;
      DropInfo__SetDataFromSaveData(v33, *(DropInfo_SaveData_o **)((char *)&v34->obj.klass + v32 * 4), 0LL);
      v35 = *p_dropInfos;
      if ( !*p_dropInfos )
        goto LABEL_34;
      this = (BattleWaveInfoData_o *)sub_1B64204(v33, *(_QWORD *)(*(_QWORD *)v35 + 64LL));
      if ( !this )
      {
LABEL_36:
        v54 = sub_1B64348(this);
        sub_1B641F0(v54, 0LL);
      }
      if ( v30 >= v35[6] )
        goto LABEL_35;
      *(_QWORD *)&v35[v32] = v33;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&v35[v32], (int32_t)v33, v36, v37);
      ++v30;
      v32 += 2LL;
    }
    while ( v31 != v30 );
  }
  battleItemInfos = saveData->fields.battleItemInfos;
  if ( !battleItemInfos )
    goto LABEL_34;
  v39 = battleItemInfos->max_length;
  v40 = sub_1B64170(BattleWaveInfoData_BattleItemInfo___TypeInfo, (unsigned int)v39);
  v4->fields.battleItemInfos = (struct BattleWaveInfoData_BattleItemInfo_array *)v40;
  p_battleItemInfos = &v4->fields.battleItemInfos;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v4->fields.battleItemInfos, v40, v42, v43);
  if ( v39 >= 1 )
  {
    v46 = 0;
    do
    {
      v47 = (Il2CppObject *)sub_1B64314(BattleWaveInfoData_BattleItemInfo_TypeInfo, v44, v45);
      System_Object___ctor(v47, 0LL);
      v48 = saveData->fields.battleItemInfos;
      if ( !v48 )
        goto LABEL_34;
      if ( v46 >= v48->max_length )
        goto LABEL_35;
      if ( !v47 )
        goto LABEL_34;
      v49 = v48->m_Items[v46];
      if ( !v49 )
        goto LABEL_34;
      v47[1].klass = (Il2CppClass *)v49->fields;
      v50 = *p_battleItemInfos;
      if ( !*p_battleItemInfos )
        goto LABEL_34;
      this = (BattleWaveInfoData_o *)sub_1B64204(v47, v50->obj.klass->_1.element_class);
      if ( !this )
        goto LABEL_36;
      if ( v46 >= v50->max_length )
        goto LABEL_35;
      v53 = &v50->obj.klass + (int)v46;
      v53[4] = (Il2CppClass *)v47;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v53 + 4), (int32_t)v47, v51, v52);
    }
    while ( v39 != ++v46 );
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
  __int64 v20; // x1
  char *v21; // x9
  struct System_Collections_Generic_List_BattleDropItem__o *droplist; // x8
  __int64 v23; // x21
  __int64 v24; // x0
  int32_t v25; // w2
  int32_t v26; // w3
  unsigned __int64 v27; // x23
  __int64 v28; // x25
  unsigned int *dropInfos; // x27
  int32_t v30; // w2
  int32_t v31; // w3
  BattleWaveInfoData_o *v32; // x24
  int32_t wave; // w23
  BattleWaveInfoData_o *v34; // x21
  __int64 v35; // x0
  int32_t v36; // w2
  int32_t v37; // w3
  __int64 v38; // x1
  __int64 v39; // x2
  struct BattleWaveInfoData_BattleItemInfo_array *battleItemInfos; // x22
  Il2CppObject *v41; // x23
  int32_t v42; // w2
  int32_t v43; // w3
  __int64 v44; // x0

  v4 = this;
  if ( (byte_49FBF26 & 1) == 0 )
  {
    sub_1B640C8(&BattleWaveInfoData_BattleItemInfo___TypeInfo, battleData);
    sub_1B640C8(&BattleWaveInfoData_BattleItemInfo_TypeInfo, v5);
    sub_1B640C8(&DropInfo___TypeInfo, v6);
    sub_1B640C8(&int___TypeInfo, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleDropItem__get_Count__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleSkillInfoData__get_Count__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleDropItem__get_Item__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleSkillInfoData__get_Item__, v11);
    this = (BattleWaveInfoData_o *)sub_1B640C8(&Method_SingletonTemplate_BattleItemData__get_Instance__, v12);
    byte_49FBF26 = 1;
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
  v15 = sub_1B64170(int___TypeInfo, (unsigned int)size);
  v4->fields.equipSkillChargeNum = (struct System_Int32_array *)v15;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v4->fields.equipSkillChargeNum, v15, v16, v17);
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
                                       (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_BattleSkillInfoData__get_Item__);
      if ( !this || !equipSkillChargeNum )
        break;
      if ( v18 >= equipSkillChargeNum->max_length )
        goto LABEL_32;
      v21 = (char *)equipSkillChargeNum + 4 * v18++;
      *((_DWORD *)v21 + 8) = this->fields.battleItemInfos;
      if ( size == v18 )
        goto LABEL_12;
    }
LABEL_31:
    sub_1B64324(this);
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
    v23 = (unsigned int)droplist->fields._size;
    v24 = sub_1B64170(DropInfo___TypeInfo, (unsigned int)v23);
    v4->fields.dropInfos = (struct DropInfo_array *)v24;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v4->fields.dropInfos, v24, v25, v26);
    if ( (int)v23 >= 1 )
    {
      v27 = 0LL;
      v28 = 8LL;
      do
      {
        this = (BattleWaveInfoData_o *)battleData->fields.droplist;
        if ( !this )
          goto LABEL_31;
        dropInfos = (unsigned int *)v4->fields.dropInfos;
        this = (BattleWaveInfoData_o *)System_Collections_Generic_List_object___get_Item(
                                         (System_Collections_Generic_List_object__o *)this,
                                         v27,
                                         (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_BattleDropItem__get_Item__);
        if ( !this )
          goto LABEL_31;
        this = (BattleWaveInfoData_o *)BattleDropItem__GetDropInfo((BattleDropItem_o *)this, 0LL);
        if ( !dropInfos )
          goto LABEL_31;
        v32 = this;
        if ( this )
        {
          this = (BattleWaveInfoData_o *)sub_1B64204(this, *(_QWORD *)(*(_QWORD *)dropInfos + 64LL));
          if ( !this )
            goto LABEL_33;
        }
        if ( v27 >= dropInfos[6] )
          goto LABEL_32;
        *(_QWORD *)&dropInfos[v28] = v32;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&dropInfos[v28], (int32_t)v32, v30, v31);
        ++v27;
        v28 += 2LL;
      }
      while ( v23 != v27 );
    }
  }
  this = (BattleWaveInfoData_o *)SingletonTemplate_object___get_Instance((const MethodInfo_36EC45C *)Method_SingletonTemplate_BattleItemData__get_Instance__);
  if ( !this )
    goto LABEL_31;
  wave = this->fields.wave;
  v34 = this;
  v35 = sub_1B64170(BattleWaveInfoData_BattleItemInfo___TypeInfo, wave > 0);
  v4->fields.battleItemInfos = (struct BattleWaveInfoData_BattleItemInfo_array *)v35;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v4->fields.battleItemInfos, v35, v36, v37);
  if ( wave >= 1 )
  {
    battleItemInfos = v4->fields.battleItemInfos;
    v41 = (Il2CppObject *)sub_1B64314(BattleWaveInfoData_BattleItemInfo_TypeInfo, v38, v39);
    System_Object___ctor(v41, 0LL);
    if ( !v41 )
      goto LABEL_31;
    v41[1].klass = *(Il2CppClass **)&v34->fields.wave;
    if ( !battleItemInfos )
      goto LABEL_31;
    this = (BattleWaveInfoData_o *)sub_1B64204(v41, battleItemInfos->obj.klass->_1.element_class);
    if ( !this )
    {
LABEL_33:
      v44 = sub_1B64348(this);
      sub_1B641F0(v44, 0LL);
    }
    if ( !battleItemInfos->max_length )
LABEL_32:
      sub_1B6432C(this, v20);
    battleItemInfos->m_Items[0] = (BattleWaveInfoData_BattleItemInfo_o *)v41;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)battleItemInfos->m_Items, (int32_t)v41, v42, v43);
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
  __int64 v4; // x20
  __int64 v5; // x0
  BattleWaveInfoData_BattleItemInfo_SaveData_o *result; // x0

  if ( (byte_49FBF27 & 1) == 0 )
  {
    sub_1B640C8(&BattleWaveInfoData_BattleItemInfo_SaveData_TypeInfo, method);
    byte_49FBF27 = 1;
  }
  v4 = sub_1B64314(BattleWaveInfoData_BattleItemInfo_SaveData_TypeInfo, method, v2);
  System_Object___ctor((Il2CppObject *)v4, 0LL);
  if ( !v4 )
    sub_1B64324(v5);
  result = (BattleWaveInfoData_BattleItemInfo_SaveData_o *)v4;
  *(BattleWaveInfoData_BattleItemInfo_Fields *)(v4 + 16) = this->fields;
  return result;
}


void __fastcall BattleWaveInfoData_BattleItemInfo__SetDataFromSaveData(
        BattleWaveInfoData_BattleItemInfo_o *this,
        BattleWaveInfoData_BattleItemInfo_SaveData_o *saveData,
        const MethodInfo *method)
{
  if ( !saveData )
    sub_1B64324(this);
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