void __fastcall ServantExceedEntity___ctor(ServantExceedEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x0
  __int64 v4; // x1
  int32_t v5; // w2
  int32_t v6; // w3
  __int64 v7; // x20
  int32_t v8; // w1
  int32_t v9; // w2
  int32_t v10; // w3
  int32_t v11; // w1
  int32_t v12; // w2
  int32_t v13; // w3
  int32_t v14; // w1
  int32_t v15; // w2
  int32_t v16; // w3
  int32_t v17; // w1
  int32_t v18; // w2
  int32_t v19; // w3
  int32_t v20; // w1
  int32_t v21; // w2
  int32_t v22; // w3
  int32_t v23; // w1
  int32_t v24; // w2
  int32_t v25; // w3
  int32_t v26; // w1
  int32_t v27; // w2
  int32_t v28; // w3
  int32_t v29; // w1
  int32_t v30; // w2
  int32_t v31; // w3

  if ( (byte_4A5B86A & 1) == 0 )
  {
    sub_1B885B0(&Method_DataEntityBase_string___ctor__);
    sub_1B885B0(&string___TypeInfo);
    sub_1B885B0(&StringLiteral_17993/*"class_b_"*/);
    sub_1B885B0(&StringLiteral_17997/*"class_g_"*/);
    sub_1B885B0(&StringLiteral_17998/*"class_n_"*/);
    sub_1B885B0(&StringLiteral_17999/*"class_s_"*/);
    byte_4A5B86A = 1;
  }
  v3 = sub_1B88658(string___TypeInfo, 8LL);
  if ( !v3 )
    sub_1B8880C(0LL, v4);
  v7 = v3;
  if ( !*(_DWORD *)(v3 + 24) )
    goto LABEL_13;
  v8 = StringLiteral_17998/*"class_n_"*/;
  *(_QWORD *)(v3 + 32) = StringLiteral_17998/*"class_n_"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v3 + 32), v8, v5, v6);
  if ( *(_DWORD *)(v7 + 24) <= 1u )
    goto LABEL_13;
  v11 = StringLiteral_17993/*"class_b_"*/;
  *(_QWORD *)(v7 + 40) = StringLiteral_17993/*"class_b_"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 40), v11, v9, v10);
  if ( *(_DWORD *)(v7 + 24) <= 2u )
    goto LABEL_13;
  v14 = StringLiteral_17999/*"class_s_"*/;
  *(_QWORD *)(v7 + 48) = StringLiteral_17999/*"class_s_"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 48), v14, v12, v13);
  if ( *(_DWORD *)(v7 + 24) <= 3u )
    goto LABEL_13;
  v17 = StringLiteral_17997/*"class_g_"*/;
  *(_QWORD *)(v7 + 56) = StringLiteral_17997/*"class_g_"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 56), v17, v15, v16);
  if ( *(_DWORD *)(v7 + 24) <= 4u )
    goto LABEL_13;
  v20 = StringLiteral_17997/*"class_g_"*/;
  *(_QWORD *)(v7 + 64) = StringLiteral_17997/*"class_g_"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 64), v20, v18, v19);
  if ( *(_DWORD *)(v7 + 24) <= 5u
    || (v23 = StringLiteral_17997/*"class_g_"*/,
        *(_QWORD *)(v7 + 72) = StringLiteral_17997/*"class_g_"*/,
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 72), v23, v21, v22),
        *(_DWORD *)(v7 + 24) <= 6u)
    || (v26 = StringLiteral_17998/*"class_n_"*/,
        *(_QWORD *)(v7 + 80) = StringLiteral_17998/*"class_n_"*/,
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 80), v26, v24, v25),
        *(_DWORD *)(v7 + 24) <= 7u) )
  {
LABEL_13:
    sub_1B88814(v3, v4);
  }
  v29 = StringLiteral_17998/*"class_n_"*/;
  *(_QWORD *)(v7 + 88) = StringLiteral_17998/*"class_n_"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 88), v29, v27, v28);
  this->fields.frameCardFileList = (struct System_String_array *)v7;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields, v7, v30, v31);
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_311D7AC *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall ServantExceedEntity__CreatePK(
        int32_t rarity,
        int32_t exceedCount,
        const MethodInfo *method)
{
  if ( (byte_4A5B869 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_4A5B869 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           rarity,
           exceedCount,
           (const MethodInfo_2E7DB2C *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall ServantExceedEntity__CreatePrimaryKey(
        ServantExceedEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return ServantExceedEntity__CreatePK(this->fields.rarity, this->fields.exceedCount, v2);
}


System_String_o *__fastcall ServantExceedEntity__getFrameCardPrefix(
        ServantExceedEntity_o *this,
        const MethodInfo *method)
{
  struct System_String_array *frameCardFileList; // x8
  __int64 frameType; // x9

  frameCardFileList = this->fields.frameCardFileList;
  if ( !frameCardFileList )
    sub_1B8880C(this, method);
  frameType = this->fields.frameType;
  if ( (unsigned int)frameType >= frameCardFileList->max_length )
    sub_1B88814(this, method);
  return frameCardFileList->m_Items[frameType];
}