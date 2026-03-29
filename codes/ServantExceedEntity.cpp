void ServantExceedEntity___ctor(ServantExceedEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x0
  __int64 v4; // x1
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7
  __int64 v11; // x20
  int32_t v12; // w1
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  int32_t v19; // w1
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  int32_t v26; // w1
  int32_t v27; // w2
  int32_t v28; // w3
  System_String_o *v29; // x4
  int32_t v30; // w5
  int64_t v31; // x6
  System_String_o *v32; // x7
  int32_t v33; // w1
  int32_t v34; // w2
  int32_t v35; // w3
  System_String_o *v36; // x4
  int32_t v37; // w5
  int64_t v38; // x6
  System_String_o *v39; // x7
  int32_t v40; // w1
  int32_t v41; // w2
  int32_t v42; // w3
  System_String_o *v43; // x4
  int32_t v44; // w5
  int64_t v45; // x6
  System_String_o *v46; // x7
  int32_t v47; // w1
  int32_t v48; // w2
  int32_t v49; // w3
  System_String_o *v50; // x4
  int32_t v51; // w5
  int64_t v52; // x6
  System_String_o *v53; // x7
  int32_t v54; // w1
  int32_t v55; // w2
  int32_t v56; // w3
  System_String_o *v57; // x4
  int32_t v58; // w5
  int64_t v59; // x6
  System_String_o *v60; // x7
  int32_t v61; // w1
  int32_t v62; // w2
  int32_t v63; // w3
  System_String_o *v64; // x4
  int32_t v65; // w5
  int64_t v66; // x6
  System_String_o *v67; // x7

  if ( (byte_4D31308 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataEntityBase_string___ctor__);
    sub_1C93AD4(&string___TypeInfo);
    sub_1C93AD4(&StringLiteral_18131/*"class_b_"*/);
    sub_1C93AD4(&StringLiteral_18135/*"class_g_"*/);
    sub_1C93AD4(&StringLiteral_18136/*"class_n_"*/);
    sub_1C93AD4(&StringLiteral_18137/*"class_s_"*/);
    byte_4D31308 = 1;
  }
  v3 = sub_1C93B7C(string___TypeInfo, 8);
  if ( !v3 )
    sub_1C93D2C(0, v4);
  v11 = v3;
  if ( !*(_DWORD *)(v3 + 24) )
    goto LABEL_13;
  v12 = StringLiteral_18136/*"class_n_"*/;
  *(_QWORD *)(v3 + 32) = StringLiteral_18136/*"class_n_"*/;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v3 + 32), v12, v5, v6, v7, v8, v9, v10);
  if ( *(_DWORD *)(v11 + 24) <= 1u )
    goto LABEL_13;
  v19 = StringLiteral_18131/*"class_b_"*/;
  *(_QWORD *)(v11 + 40) = StringLiteral_18131/*"class_b_"*/;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v11 + 40), v19, v13, v14, v15, v16, v17, v18);
  if ( *(_DWORD *)(v11 + 24) <= 2u )
    goto LABEL_13;
  v26 = StringLiteral_18137/*"class_s_"*/;
  *(_QWORD *)(v11 + 48) = StringLiteral_18137/*"class_s_"*/;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v11 + 48), v26, v20, v21, v22, v23, v24, v25);
  if ( *(_DWORD *)(v11 + 24) <= 3u )
    goto LABEL_13;
  v33 = StringLiteral_18135/*"class_g_"*/;
  *(_QWORD *)(v11 + 56) = StringLiteral_18135/*"class_g_"*/;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v11 + 56), v33, v27, v28, v29, v30, v31, v32);
  if ( *(_DWORD *)(v11 + 24) <= 4u )
    goto LABEL_13;
  v40 = StringLiteral_18135/*"class_g_"*/;
  *(_QWORD *)(v11 + 64) = StringLiteral_18135/*"class_g_"*/;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v11 + 64), v40, v34, v35, v36, v37, v38, v39);
  if ( *(_DWORD *)(v11 + 24) <= 5u
    || (v47 = StringLiteral_18135/*"class_g_"*/,
        *(_QWORD *)(v11 + 72) = StringLiteral_18135/*"class_g_"*/,
        sub_1C93A78((GrandQuestFolderBoardItem_o *)(v11 + 72), v47, v41, v42, v43, v44, v45, v46),
        *(_DWORD *)(v11 + 24) <= 6u)
    || (v54 = StringLiteral_18136/*"class_n_"*/,
        *(_QWORD *)(v11 + 80) = StringLiteral_18136/*"class_n_"*/,
        sub_1C93A78((GrandQuestFolderBoardItem_o *)(v11 + 80), v54, v48, v49, v50, v51, v52, v53),
        *(_DWORD *)(v11 + 24) <= 7u) )
  {
LABEL_13:
    sub_1C93D34(v3);
  }
  v61 = StringLiteral_18136/*"class_n_"*/;
  *(_QWORD *)(v11 + 88) = StringLiteral_18136/*"class_n_"*/;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v11 + 88), v61, v55, v56, v57, v58, v59, v60);
  this->fields.frameCardFileList = (struct System_String_array *)v11;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields, v11, v62, v63, v64, v65, v66, v67);
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3460BB4 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *ServantExceedEntity__CreatePK(int32_t rarity, int32_t exceedCount, const MethodInfo *method)
{
  if ( (byte_4D31307 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_4D31307 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           rarity,
           exceedCount,
           (const MethodInfo_31A2BC4 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *ServantExceedEntity__CreatePrimaryKey(ServantExceedEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return ServantExceedEntity__CreatePK(this->fields.rarity, this->fields.exceedCount, v2);
}


int32_t ServantExceedEntity__GetFrameType(ServantExceedEntity_o *this, bool isGrandServant, const MethodInfo *method)
{
  __int64 v3; // x8

  v3 = 40;
  if ( isGrandServant )
    v3 = 56;
  return *(_DWORD *)((char *)&this->klass + v3);
}


int32_t ServantExceedEntity__GetRarityIcon(ServantExceedEntity_o *this, bool isGrandServant, const MethodInfo *method)
{
  __int64 v3; // x8

  v3 = 44;
  if ( isGrandServant )
    v3 = 60;
  return *(_DWORD *)((char *)&this->klass + v3);
}


System_String_o *ServantExceedEntity__getFrameCardPrefix(ServantExceedEntity_o *this, const MethodInfo *method)
{
  struct System_String_array *frameCardFileList; // x8
  __int64 frameType; // x9

  frameCardFileList = this->fields.frameCardFileList;
  if ( !frameCardFileList )
    sub_1C93D2C(this, method);
  frameType = this->fields.frameType;
  if ( (unsigned int)frameType >= LODWORD(frameCardFileList->max_length) )
    sub_1C93D34(this);
  return frameCardFileList->m_Items[frameType];
}