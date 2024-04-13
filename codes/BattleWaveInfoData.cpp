void __fastcall BattleWaveInfoData___ctor(BattleWaveInfoData_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


BattleWaveInfoData_SaveData_o *__fastcall BattleWaveInfoData__GetSaveData(
        BattleWaveInfoData_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  __int64 v14; // x20
  __int64 IsNullOrEmpty; // x0
  __int64 v16; // x1
  int max_length; // w22
  struct System_Int32_array *equipSkillChargeNum; // x8
  System_Int32_array **v19; // x0
  __int64 *v20; // x21
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  __int64 v27; // x9
  struct System_Int32_array *v28; // x10
  __int64 v29; // x11
  bool v30; // cc
  int v31; // w21
  struct DropInfo_array *dropInfos; // x8
  System_Int32_array **v33; // x0
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  il2cpp_array_size_t v40; // w24
  __int64 v41; // x25
  struct DropInfo_array *v42; // x8
  _DWORD *v43; // x26
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  System_Int32_array **v50; // x23
  int v51; // w21
  struct BattleWaveInfoData_BattleItemInfo_array *battleItemInfos; // x8
  System_Int32_array **v53; // x0
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  il2cpp_array_size_t v60; // w24
  __int64 v61; // x25
  struct BattleWaveInfoData_BattleItemInfo_array *v62; // x8
  _DWORD *v63; // x26
  System_String_array **v64; // x2
  System_String_array **v65; // x3
  System_Boolean_array **v66; // x4
  System_Int32_array **v67; // x5
  System_Int32_array *v68; // x6
  System_Int32_array *v69; // x7
  System_Int32_array **v70; // x23
  BattleWaveInfoData_SaveData_o *result; // x0
  __int64 v72; // x0
  __int64 v73; // x0

  if ( (byte_42E7DF0 & 1) == 0 )
  {
    sub_B5D5C4(&int___TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&BattleWaveInfoData_BattleItemInfo_SaveData___TypeInfo, v5, v6, v7);
    sub_B5D5C4(&DropInfo_SaveData___TypeInfo, v8, v9, v10);
    sub_B5D5C4(&BattleWaveInfoData_SaveData_TypeInfo, v11, v12, v13);
    byte_42E7DF0 = 1;
  }
  v14 = sub_B5D694(BattleWaveInfoData_SaveData_TypeInfo);
  BattleWaveInfoData_SaveData___ctor((BattleWaveInfoData_SaveData_o *)v14, 0LL);
  if ( !v14 )
    goto LABEL_44;
  *(_DWORD *)(v14 + 16) = this->fields.wave;
  *(_DWORD *)(v14 + 20) = this->fields.turn;
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
  v19 = (System_Int32_array **)sub_B5D5DC(int___TypeInfo, (unsigned int)max_length);
  *(_QWORD *)(v14 + 24) = v19;
  v20 = (__int64 *)(v14 + 24);
  sub_B5D560((BattleServantConfConponent_o *)(v14 + 24), v19, v21, v22, v23, v24, v25, v26);
  if ( max_length >= 1 )
  {
    v27 = 8LL;
    while ( 1 )
    {
      v28 = this->fields.equipSkillChargeNum;
      if ( !v28 )
        break;
      if ( v27 - 8 >= (unsigned __int64)v28->max_length )
        goto LABEL_45;
      v29 = *v20;
      if ( !*v20 )
        break;
      if ( v27 - 8 >= (unsigned __int64)*(unsigned int *)(v29 + 24) )
      {
LABEL_45:
        v72 = sub_B5D6C8(IsNullOrEmpty);
        sub_B5D668(v72, 0LL);
      }
      v30 = v27 - 7 < max_length;
      *(_DWORD *)(v29 + 4 * v27) = *((_DWORD *)&v28->obj.klass + v27);
      ++v27;
      if ( !v30 )
        goto LABEL_15;
    }
LABEL_44:
    sub_B5D69C(IsNullOrEmpty, v16);
  }
LABEL_15:
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.dropInfos, 0LL);
  if ( (IsNullOrEmpty & 1) != 0 )
  {
    v31 = 0;
  }
  else
  {
    dropInfos = this->fields.dropInfos;
    if ( !dropInfos )
      goto LABEL_44;
    v31 = dropInfos->max_length;
  }
  v33 = (System_Int32_array **)sub_B5D5DC(DropInfo_SaveData___TypeInfo, (unsigned int)v31);
  *(_QWORD *)(v14 + 32) = v33;
  sub_B5D560((BattleServantConfConponent_o *)(v14 + 32), v33, v34, v35, v36, v37, v38, v39);
  if ( v31 >= 1 )
  {
    v40 = 0;
    v41 = 8LL;
    do
    {
      v42 = this->fields.dropInfos;
      if ( !v42 )
        goto LABEL_44;
      if ( v40 >= v42->max_length )
        goto LABEL_45;
      IsNullOrEmpty = *(__int64 *)((char *)&v42->obj.klass + v41 * 4);
      if ( !IsNullOrEmpty )
        goto LABEL_44;
      v43 = *(_DWORD **)(v14 + 32);
      IsNullOrEmpty = (__int64)DropInfo__GetSaveData((DropInfo_o *)IsNullOrEmpty, 0LL);
      if ( !v43 )
        goto LABEL_44;
      v50 = (System_Int32_array **)IsNullOrEmpty;
      if ( IsNullOrEmpty )
      {
        IsNullOrEmpty = sub_B5D684(IsNullOrEmpty, *(_QWORD *)(*(_QWORD *)v43 + 64LL));
        if ( !IsNullOrEmpty )
        {
LABEL_46:
          v73 = sub_B5D6BC(IsNullOrEmpty);
          sub_B5D668(v73, 0LL);
        }
      }
      if ( v40 >= v43[6] )
        goto LABEL_45;
      *(_QWORD *)&v43[v41] = v50;
      sub_B5D560((BattleServantConfConponent_o *)&v43[v41], v50, v44, v45, v46, v47, v48, v49);
      ++v40;
      v41 += 2LL;
    }
    while ( (int)v40 < v31 );
  }
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.battleItemInfos, 0LL);
  if ( (IsNullOrEmpty & 1) != 0 )
  {
    v51 = 0;
  }
  else
  {
    battleItemInfos = this->fields.battleItemInfos;
    if ( !battleItemInfos )
      goto LABEL_44;
    v51 = battleItemInfos->max_length;
  }
  v53 = (System_Int32_array **)sub_B5D5DC(BattleWaveInfoData_BattleItemInfo_SaveData___TypeInfo, (unsigned int)v51);
  *(_QWORD *)(v14 + 40) = v53;
  sub_B5D560((BattleServantConfConponent_o *)(v14 + 40), v53, v54, v55, v56, v57, v58, v59);
  if ( v51 >= 1 )
  {
    v60 = 0;
    v61 = 8LL;
    do
    {
      v62 = this->fields.battleItemInfos;
      if ( !v62 )
        goto LABEL_44;
      if ( v60 >= v62->max_length )
        goto LABEL_45;
      IsNullOrEmpty = *(__int64 *)((char *)&v62->obj.klass + v61 * 4);
      if ( !IsNullOrEmpty )
        goto LABEL_44;
      v63 = *(_DWORD **)(v14 + 40);
      IsNullOrEmpty = (__int64)BattleWaveInfoData_BattleItemInfo__GetSaveData(
                                 (BattleWaveInfoData_BattleItemInfo_o *)IsNullOrEmpty,
                                 0LL);
      if ( !v63 )
        goto LABEL_44;
      v70 = (System_Int32_array **)IsNullOrEmpty;
      if ( IsNullOrEmpty )
      {
        IsNullOrEmpty = sub_B5D684(IsNullOrEmpty, *(_QWORD *)(*(_QWORD *)v63 + 64LL));
        if ( !IsNullOrEmpty )
          goto LABEL_46;
      }
      if ( v60 >= v63[6] )
        goto LABEL_45;
      *(_QWORD *)&v63[v61] = v70;
      sub_B5D560((BattleServantConfConponent_o *)&v63[v61], v70, v64, v65, v66, v67, v68, v69);
      ++v60;
      v61 += 2LL;
    }
    while ( (int)v60 < v51 );
  }
  result = (BattleWaveInfoData_SaveData_o *)v14;
  *(_DWORD *)(v14 + 48) = this->fields.star;
  return result;
}


void __fastcall BattleWaveInfoData__SetDataFromSaveData(
        BattleWaveInfoData_o *this,
        BattleWaveInfoData_SaveData_o *saveData,
        const MethodInfo *method)
{
  __int64 v3; // x3
  BattleWaveInfoData_o *v5; // x20
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  struct System_Int32_array *equipSkillChargeNum; // x8
  __int64 v19; // x22
  System_Int32_array **v20; // x0
  struct System_Int32_array **p_equipSkillChargeNum; // x21
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  __int64 v28; // x9
  struct System_Int32_array *v29; // x10
  struct System_Int32_array *v30; // x11
  bool v31; // cc
  struct DropInfo_SaveData_array *dropInfos; // x8
  __int64 v33; // x22
  System_Int32_array **v34; // x0
  unsigned int **p_dropInfos; // x21
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  unsigned __int64 v42; // x23
  signed __int64 v43; // x24
  __int64 v44; // x25
  DropInfo_o *v45; // x22
  struct DropInfo_SaveData_array *v46; // x8
  unsigned int *v47; // x27
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  struct BattleWaveInfoData_BattleItemInfo_SaveData_array *battleItemInfos; // x8
  __int64 v55; // x22
  System_Int32_array **v56; // x0
  unsigned int **p_battleItemInfos; // x21
  System_String_array **v58; // x2
  System_String_array **v59; // x3
  System_Boolean_array **v60; // x4
  System_Int32_array **v61; // x5
  System_Int32_array *v62; // x6
  System_Int32_array *v63; // x7
  unsigned __int64 v64; // x23
  signed __int64 v65; // x24
  __int64 v66; // x25
  BattleWaveInfoData_BattleItemInfo_o *v67; // x22
  struct BattleWaveInfoData_BattleItemInfo_SaveData_array *v68; // x8
  unsigned int *v69; // x27
  System_String_array **v70; // x2
  System_String_array **v71; // x3
  System_Boolean_array **v72; // x4
  System_Int32_array **v73; // x5
  System_Int32_array *v74; // x6
  System_Int32_array *v75; // x7
  __int64 v76; // x0
  __int64 v77; // x0

  v5 = this;
  if ( (byte_42E7DEF & 1) == 0 )
  {
    sub_B5D5C4(&BattleWaveInfoData_BattleItemInfo___TypeInfo, (_DWORD)saveData, (_DWORD)method, v3);
    sub_B5D5C4(&BattleWaveInfoData_BattleItemInfo_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&DropInfo___TypeInfo, v9, v10, v11);
    sub_B5D5C4(&DropInfo_TypeInfo, v12, v13, v14);
    this = (BattleWaveInfoData_o *)sub_B5D5C4(&int___TypeInfo, v15, v16, v17);
    byte_42E7DEF = 1;
  }
  if ( !saveData )
    goto LABEL_33;
  v5->fields.wave = saveData->fields.wave;
  v5->fields.turn = saveData->fields.turn;
  equipSkillChargeNum = saveData->fields.equipSkillChargeNum;
  if ( !equipSkillChargeNum )
    goto LABEL_33;
  v19 = *(_QWORD *)&equipSkillChargeNum->max_length;
  v20 = (System_Int32_array **)sub_B5D5DC(int___TypeInfo, (unsigned int)v19);
  v5->fields.equipSkillChargeNum = (struct System_Int32_array *)v20;
  p_equipSkillChargeNum = &v5->fields.equipSkillChargeNum;
  sub_B5D560((BattleServantConfConponent_o *)&v5->fields.equipSkillChargeNum, v20, v22, v23, v24, v25, v26, v27);
  if ( (int)v19 >= 1 )
  {
    v28 = 8LL;
    while ( 1 )
    {
      v29 = saveData->fields.equipSkillChargeNum;
      if ( !v29 )
        break;
      if ( v28 - 8 >= (unsigned __int64)v29->max_length )
        goto LABEL_34;
      v30 = *p_equipSkillChargeNum;
      if ( !*p_equipSkillChargeNum )
        break;
      if ( v28 - 8 >= (unsigned __int64)v30->max_length )
      {
LABEL_34:
        v76 = sub_B5D6C8(this);
        sub_B5D668(v76, 0LL);
      }
      v31 = v28 - 7 < (int)v19;
      *((_DWORD *)&v30->obj.klass + v28) = *((_DWORD *)&v29->obj.klass + v28);
      ++v28;
      if ( !v31 )
        goto LABEL_12;
    }
LABEL_33:
    sub_B5D69C(this, saveData);
  }
LABEL_12:
  dropInfos = saveData->fields.dropInfos;
  if ( !dropInfos )
    goto LABEL_33;
  v33 = *(_QWORD *)&dropInfos->max_length;
  v34 = (System_Int32_array **)sub_B5D5DC(DropInfo___TypeInfo, (unsigned int)v33);
  v5->fields.dropInfos = (struct DropInfo_array *)v34;
  p_dropInfos = (unsigned int **)&v5->fields.dropInfos;
  sub_B5D560((BattleServantConfConponent_o *)&v5->fields.dropInfos, v34, v36, v37, v38, v39, v40, v41);
  if ( (int)v33 >= 1 )
  {
    v42 = 0LL;
    v43 = (int)v33;
    v44 = 8LL;
    do
    {
      v45 = (DropInfo_o *)sub_B5D694(DropInfo_TypeInfo);
      DropInfo___ctor(v45, 0LL);
      v46 = saveData->fields.dropInfos;
      if ( !v46 )
        goto LABEL_33;
      if ( v42 >= v46->max_length )
        goto LABEL_34;
      if ( !v45 )
        goto LABEL_33;
      DropInfo__SetDataFromSaveData(v45, *(DropInfo_SaveData_o **)((char *)&v46->obj.klass + v44 * 4), 0LL);
      v47 = *p_dropInfos;
      if ( !*p_dropInfos )
        goto LABEL_33;
      this = (BattleWaveInfoData_o *)sub_B5D684(v45, *(_QWORD *)(*(_QWORD *)v47 + 64LL));
      if ( !this )
      {
LABEL_35:
        v77 = sub_B5D6BC(this);
        sub_B5D668(v77, 0LL);
      }
      if ( v42 >= v47[6] )
        goto LABEL_34;
      *(_QWORD *)&v47[v44] = v45;
      sub_B5D560((BattleServantConfConponent_o *)&v47[v44], (System_Int32_array **)v45, v48, v49, v50, v51, v52, v53);
      ++v42;
      v44 += 2LL;
    }
    while ( (__int64)v42 < v43 );
  }
  battleItemInfos = saveData->fields.battleItemInfos;
  if ( !battleItemInfos )
    goto LABEL_33;
  v55 = *(_QWORD *)&battleItemInfos->max_length;
  v56 = (System_Int32_array **)sub_B5D5DC(BattleWaveInfoData_BattleItemInfo___TypeInfo, (unsigned int)v55);
  v5->fields.battleItemInfos = (struct BattleWaveInfoData_BattleItemInfo_array *)v56;
  p_battleItemInfos = (unsigned int **)&v5->fields.battleItemInfos;
  sub_B5D560((BattleServantConfConponent_o *)&v5->fields.battleItemInfos, v56, v58, v59, v60, v61, v62, v63);
  if ( (int)v55 >= 1 )
  {
    v64 = 0LL;
    v65 = (int)v55;
    v66 = 8LL;
    do
    {
      v67 = (BattleWaveInfoData_BattleItemInfo_o *)sub_B5D694(BattleWaveInfoData_BattleItemInfo_TypeInfo);
      BattleWaveInfoData_BattleItemInfo___ctor(v67, 0LL);
      v68 = saveData->fields.battleItemInfos;
      if ( !v68 )
        goto LABEL_33;
      if ( v64 >= v68->max_length )
        goto LABEL_34;
      if ( !v67 )
        goto LABEL_33;
      BattleWaveInfoData_BattleItemInfo__SetDataFromSaveData(
        v67,
        *(BattleWaveInfoData_BattleItemInfo_SaveData_o **)((char *)&v68->obj.klass + v66 * 4),
        0LL);
      v69 = *p_battleItemInfos;
      if ( !*p_battleItemInfos )
        goto LABEL_33;
      this = (BattleWaveInfoData_o *)sub_B5D684(v67, *(_QWORD *)(*(_QWORD *)v69 + 64LL));
      if ( !this )
        goto LABEL_35;
      if ( v64 >= v69[6] )
        goto LABEL_34;
      *(_QWORD *)&v69[v66] = v67;
      sub_B5D560((BattleServantConfConponent_o *)&v69[v66], (System_Int32_array **)v67, v70, v71, v72, v73, v74, v75);
      ++v64;
      v66 += 2LL;
    }
    while ( (__int64)v64 < v65 );
  }
  v5->fields.star = saveData->fields.star;
}


void __fastcall BattleWaveInfoData__SetWaveInfoData(
        BattleWaveInfoData_o *this,
        BattleData_o *battleData,
        const MethodInfo *method)
{
  __int64 v3; // x3
  BattleWaveInfoData_o *v5; // x20
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  struct System_Collections_Generic_List_BattleSkillInfoData__o *masterSkillInfo; // x8
  int size; // w21
  System_Int32_array **v35; // x0
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  __int64 v42; // x23
  struct System_Collections_Generic_List_BattleSkillInfoData__o *v43; // x25
  struct System_Int32_array *equipSkillChargeNum; // x24
  BattleSkillInfoData_o *v45; // x8
  char *v46; // x9
  struct System_Collections_Generic_List_BattleDropItem__o *droplist; // x8
  int v48; // w21
  System_Int32_array **v49; // x0
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  unsigned int v56; // w24
  __int64 v57; // x25
  struct System_Collections_Generic_List_BattleDropItem__o *v58; // x23
  struct DropInfo_array *dropInfos; // x26
  System_String_array **v60; // x2
  System_String_array **v61; // x3
  System_Boolean_array **v62; // x4
  System_Int32_array **v63; // x5
  System_Int32_array *v64; // x6
  System_Int32_array *v65; // x7
  System_Int32_array **v66; // x23
  int32_t wave; // w23
  BattleWaveInfoData_o *v68; // x21
  System_Int32_array **v69; // x0
  System_String_array **v70; // x2
  System_String_array **v71; // x3
  System_Boolean_array **v72; // x4
  System_Int32_array **v73; // x5
  System_Int32_array *v74; // x6
  System_Int32_array *v75; // x7
  struct BattleWaveInfoData_BattleItemInfo_array *battleItemInfos; // x22
  BattleWaveInfoData_BattleItemInfo_o *v77; // x23
  System_String_array **v78; // x2
  System_String_array **v79; // x3
  System_Boolean_array **v80; // x4
  System_Int32_array **v81; // x5
  System_Int32_array *v82; // x6
  System_Int32_array *v83; // x7
  __int64 v84; // x0
  __int64 v85; // x0

  v5 = this;
  if ( (byte_42E7DF1 & 1) == 0 )
  {
    sub_B5D5C4(&BattleWaveInfoData_BattleItemInfo___TypeInfo, (_DWORD)battleData, (_DWORD)method, v3);
    sub_B5D5C4(&BattleWaveInfoData_BattleItemInfo_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&DropInfo___TypeInfo, v9, v10, v11);
    sub_B5D5C4(&int___TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleDropItem__get_Count__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleSkillInfoData__get_Count__, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleDropItem__get_Item__, v21, v22, v23);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleSkillInfoData__get_Item__, v24, v25, v26);
    sub_B5D5C4(&Method_SingletonTemplate_BattleItemData__get_Instance__, v27, v28, v29);
    this = (BattleWaveInfoData_o *)sub_B5D5C4(&SingletonTemplate_BattleItemData__TypeInfo, v30, v31, v32);
    byte_42E7DF1 = 1;
  }
  if ( !battleData )
    goto LABEL_38;
  this = (BattleWaveInfoData_o *)BattleData__getDispWaveCount(battleData, 0LL);
  v5->fields.wave = (int)this;
  v5->fields.turn = battleData->fields.totalTurnCount + 1;
  masterSkillInfo = battleData->fields.masterSkillInfo;
  if ( !masterSkillInfo )
    goto LABEL_38;
  size = masterSkillInfo->fields._size;
  v35 = (System_Int32_array **)sub_B5D5DC(int___TypeInfo, (unsigned int)size);
  v5->fields.equipSkillChargeNum = (struct System_Int32_array *)v35;
  sub_B5D560((BattleServantConfConponent_o *)&v5->fields.equipSkillChargeNum, v35, v36, v37, v38, v39, v40, v41);
  if ( size >= 1 )
  {
    v42 = 0LL;
    while ( 1 )
    {
      v43 = battleData->fields.masterSkillInfo;
      if ( !v43 )
        break;
      equipSkillChargeNum = v5->fields.equipSkillChargeNum;
      if ( v43->fields._size <= (unsigned int)v42 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      v45 = v43->fields._items->m_Items[v42];
      if ( !v45 || !equipSkillChargeNum )
        break;
      if ( (unsigned int)v42 >= equipSkillChargeNum->max_length )
        goto LABEL_39;
      v46 = (char *)equipSkillChargeNum + 4 * v42++;
      *((_DWORD *)v46 + 8) = v45->fields.chargeTurn;
      if ( (int)v42 >= size )
        goto LABEL_14;
    }
LABEL_38:
    sub_B5D69C(this, battleData);
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
    v48 = droplist->fields._size;
    v49 = (System_Int32_array **)sub_B5D5DC(DropInfo___TypeInfo, (unsigned int)v48);
    v5->fields.dropInfos = (struct DropInfo_array *)v49;
    sub_B5D560((BattleServantConfConponent_o *)&v5->fields.dropInfos, v49, v50, v51, v52, v53, v54, v55);
    if ( v48 >= 1 )
    {
      v56 = 0;
      v57 = 32LL;
      do
      {
        v58 = battleData->fields.droplist;
        if ( !v58 )
          goto LABEL_38;
        dropInfos = v5->fields.dropInfos;
        if ( v58->fields._size <= v56 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
        this = *(BattleWaveInfoData_o **)((char *)&v58->fields._items->obj.klass + v57);
        if ( !this )
          goto LABEL_38;
        this = (BattleWaveInfoData_o *)BattleDropItem__GetDropInfo((BattleDropItem_o *)this, 0LL);
        if ( !dropInfos )
          goto LABEL_38;
        v66 = (System_Int32_array **)this;
        if ( this )
        {
          this = (BattleWaveInfoData_o *)sub_B5D684(this, dropInfos->obj.klass->_1.element_class);
          if ( !this )
            goto LABEL_40;
        }
        if ( v56 >= dropInfos->max_length )
          goto LABEL_39;
        *(Il2CppClass **)((char *)&dropInfos->obj.klass + v57) = (Il2CppClass *)v66;
        sub_B5D560((BattleServantConfConponent_o *)((char *)dropInfos + v57), v66, v60, v61, v62, v63, v64, v65);
        ++v56;
        v57 += 8LL;
      }
      while ( (int)v56 < v48 );
    }
  }
  if ( (BYTE3(SingletonTemplate_BattleItemData__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_BattleItemData__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_BattleItemData__TypeInfo);
  }
  this = (BattleWaveInfoData_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_BattleItemData__get_Instance__);
  if ( !this )
    goto LABEL_38;
  wave = this->fields.wave;
  v68 = this;
  v69 = (System_Int32_array **)sub_B5D5DC(BattleWaveInfoData_BattleItemInfo___TypeInfo, wave > 0);
  v5->fields.battleItemInfos = (struct BattleWaveInfoData_BattleItemInfo_array *)v69;
  sub_B5D560((BattleServantConfConponent_o *)&v5->fields.battleItemInfos, v69, v70, v71, v72, v73, v74, v75);
  if ( wave >= 1 )
  {
    battleItemInfos = v5->fields.battleItemInfos;
    v77 = (BattleWaveInfoData_BattleItemInfo_o *)sub_B5D694(BattleWaveInfoData_BattleItemInfo_TypeInfo);
    BattleWaveInfoData_BattleItemInfo___ctor(v77, 0LL);
    if ( !v77 )
      goto LABEL_38;
    v77->fields.itemId = v68->fields.wave;
    v77->fields.num = v68->fields.turn;
    if ( !battleItemInfos )
      goto LABEL_38;
    this = (BattleWaveInfoData_o *)sub_B5D684(v77, battleItemInfos->obj.klass->_1.element_class);
    if ( !this )
    {
LABEL_40:
      v85 = sub_B5D6BC(this);
      sub_B5D668(v85, 0LL);
    }
    if ( !battleItemInfos->max_length )
    {
LABEL_39:
      v84 = sub_B5D6C8(this);
      sub_B5D668(v84, 0LL);
    }
    battleItemInfos->m_Items[0] = v77;
    sub_B5D560(
      (BattleServantConfConponent_o *)battleItemInfos->m_Items,
      (System_Int32_array **)v77,
      v78,
      v79,
      v80,
      v81,
      v82,
      v83);
  }
  v5->fields.star = battleData->fields.criticalstars;
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
  int v2; // w2
  __int64 v3; // x3
  BattleWaveInfoData_BattleItemInfo_SaveData_o *v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  BattleWaveInfoData_BattleItemInfo_SaveData_o *result; // x0

  if ( (byte_42E60FB & 1) == 0 )
  {
    sub_B5D5C4(&BattleWaveInfoData_BattleItemInfo_SaveData_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E60FB = 1;
  }
  v5 = (BattleWaveInfoData_BattleItemInfo_SaveData_o *)sub_B5D694(BattleWaveInfoData_BattleItemInfo_SaveData_TypeInfo);
  BattleWaveInfoData_BattleItemInfo_SaveData___ctor(v5, 0LL);
  if ( !v5 )
    sub_B5D69C(v6, v7);
  result = v5;
  v5->fields.itemId = this->fields.itemId;
  v5->fields.num = this->fields.num;
  return result;
}


void __fastcall BattleWaveInfoData_BattleItemInfo__SetDataFromSaveData(
        BattleWaveInfoData_BattleItemInfo_o *this,
        BattleWaveInfoData_BattleItemInfo_SaveData_o *saveData,
        const MethodInfo *method)
{
  if ( !saveData )
    sub_B5D69C(this, 0LL);
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