void __fastcall ServantExceedEntity___ctor(ServantExceedEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x0
  __int64 v9; // x1
  int32_t v10; // w2
  int32_t v11; // w3
  __int64 v12; // x20
  int32_t v13; // w1
  int32_t v14; // w2
  int32_t v15; // w3
  int32_t v16; // w1
  int32_t v17; // w2
  int32_t v18; // w3
  int32_t v19; // w1
  int32_t v20; // w2
  int32_t v21; // w3
  int32_t v22; // w1
  int32_t v23; // w2
  int32_t v24; // w3
  int32_t v25; // w1
  int32_t v26; // w2
  int32_t v27; // w3
  int32_t v28; // w1
  int32_t v29; // w2
  int32_t v30; // w3
  int32_t v31; // w1
  int32_t v32; // w2
  int32_t v33; // w3
  int32_t v34; // w1
  int32_t v35; // w2
  int32_t v36; // w3

  if ( (byte_4A201CA & 1) == 0 )
  {
    sub_1B715CC(&Method_DataEntityBase_string___ctor__, method);
    sub_1B715CC(&string___TypeInfo, v3);
    sub_1B715CC(&StringLiteral_17943/*"class_b_"*/, v4);
    sub_1B715CC(&StringLiteral_17947/*"class_g_"*/, v5);
    sub_1B715CC(&StringLiteral_17948/*"class_n_"*/, v6);
    sub_1B715CC(&StringLiteral_17949/*"class_s_"*/, v7);
    byte_4A201CA = 1;
  }
  v8 = sub_1B71674(string___TypeInfo, 8LL);
  if ( !v8 )
    sub_1B71828(0LL, v9);
  v12 = v8;
  if ( !*(_DWORD *)(v8 + 24) )
    goto LABEL_13;
  v13 = StringLiteral_17948/*"class_n_"*/;
  *(_QWORD *)(v8 + 32) = StringLiteral_17948/*"class_n_"*/;
  sub_1B71570((ServantStatusBattleListViewItem_o *)(v8 + 32), v13, v10, v11);
  if ( *(_DWORD *)(v12 + 24) <= 1u )
    goto LABEL_13;
  v16 = StringLiteral_17943/*"class_b_"*/;
  *(_QWORD *)(v12 + 40) = StringLiteral_17943/*"class_b_"*/;
  sub_1B71570((ServantStatusBattleListViewItem_o *)(v12 + 40), v16, v14, v15);
  if ( *(_DWORD *)(v12 + 24) <= 2u )
    goto LABEL_13;
  v19 = StringLiteral_17949/*"class_s_"*/;
  *(_QWORD *)(v12 + 48) = StringLiteral_17949/*"class_s_"*/;
  sub_1B71570((ServantStatusBattleListViewItem_o *)(v12 + 48), v19, v17, v18);
  if ( *(_DWORD *)(v12 + 24) <= 3u )
    goto LABEL_13;
  v22 = StringLiteral_17947/*"class_g_"*/;
  *(_QWORD *)(v12 + 56) = StringLiteral_17947/*"class_g_"*/;
  sub_1B71570((ServantStatusBattleListViewItem_o *)(v12 + 56), v22, v20, v21);
  if ( *(_DWORD *)(v12 + 24) <= 4u )
    goto LABEL_13;
  v25 = StringLiteral_17947/*"class_g_"*/;
  *(_QWORD *)(v12 + 64) = StringLiteral_17947/*"class_g_"*/;
  sub_1B71570((ServantStatusBattleListViewItem_o *)(v12 + 64), v25, v23, v24);
  if ( *(_DWORD *)(v12 + 24) <= 5u
    || (v28 = StringLiteral_17947/*"class_g_"*/,
        *(_QWORD *)(v12 + 72) = StringLiteral_17947/*"class_g_"*/,
        sub_1B71570((ServantStatusBattleListViewItem_o *)(v12 + 72), v28, v26, v27),
        *(_DWORD *)(v12 + 24) <= 6u)
    || (v31 = StringLiteral_17948/*"class_n_"*/,
        *(_QWORD *)(v12 + 80) = StringLiteral_17948/*"class_n_"*/,
        sub_1B71570((ServantStatusBattleListViewItem_o *)(v12 + 80), v31, v29, v30),
        *(_DWORD *)(v12 + 24) <= 7u) )
  {
LABEL_13:
    sub_1B71830(v8, v9);
  }
  v34 = StringLiteral_17948/*"class_n_"*/;
  *(_QWORD *)(v12 + 88) = StringLiteral_17948/*"class_n_"*/;
  sub_1B71570((ServantStatusBattleListViewItem_o *)(v12 + 88), v34, v32, v33);
  this->fields.frameCardFileList = (struct System_String_array *)v12;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&this->fields, v12, v35, v36);
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_30F85D8 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall ServantExceedEntity__CreatePK(
        int32_t rarity,
        int32_t exceedCount,
        const MethodInfo *method)
{
  if ( (byte_4A201C9 & 1) == 0 )
  {
    sub_1B715CC(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&exceedCount);
    byte_4A201C9 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           rarity,
           exceedCount,
           (const MethodInfo_2E5960C *)Method_DataEntityBase_CreateMultiplePK_int__int___);
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
    sub_1B71828(this, method);
  frameType = this->fields.frameType;
  if ( (unsigned int)frameType >= frameCardFileList->max_length )
    sub_1B71830(this, method);
  return frameCardFileList->m_Items[frameType];
}