void __fastcall ServantExceedEntity___ctor(ServantExceedEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x0
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  struct System_String_array *v15; // x20
  __int64 v16; // x0
  System_Int32_array **v17; // x1
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_Int32_array **v24; // x1
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  System_Int32_array **v31; // x1
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  System_Int32_array **v38; // x1
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  System_Int32_array **v45; // x1
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  System_Int32_array **v52; // x1
  System_String_array **v53; // x2
  System_String_array **v54; // x3
  System_Boolean_array **v55; // x4
  System_Int32_array **v56; // x5
  System_Int32_array *v57; // x6
  System_Int32_array *v58; // x7
  System_Int32_array **v59; // x1
  System_String_array **v60; // x2
  System_String_array **v61; // x3
  System_Boolean_array **v62; // x4
  System_Int32_array **v63; // x5
  System_Int32_array *v64; // x6
  System_Int32_array *v65; // x7
  System_Int32_array **v66; // x1
  System_String_array **v67; // x2
  System_String_array **v68; // x3
  System_Boolean_array **v69; // x4
  System_Int32_array **v70; // x5
  System_Int32_array *v71; // x6
  System_Int32_array *v72; // x7
  __int64 v73; // x0
  __int64 v74; // x0

  if ( (byte_4217523 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataEntityBase_string___ctor__, method);
    sub_B0D8A4(&string___TypeInfo, v3);
    sub_B0D8A4(&StringLiteral_17507/*"class_b_"*/, v4);
    sub_B0D8A4(&StringLiteral_17510/*"class_g_"*/, v5);
    sub_B0D8A4(&StringLiteral_17511/*"class_n_"*/, v6);
    sub_B0D8A4(&StringLiteral_17512/*"class_s_"*/, v7);
    byte_4217523 = 1;
  }
  v8 = sub_B0D8BC(string___TypeInfo, 8LL);
  if ( !v8 )
    sub_B0D97C(0LL);
  v15 = (struct System_String_array *)v8;
  v16 = StringLiteral_17511/*"class_n_"*/;
  if ( StringLiteral_17511/*"class_n_"*/ )
  {
    v16 = sub_B0D964(StringLiteral_17511/*"class_n_"*/, v15->obj.klass->_1.element_class);
    if ( !v16 )
      goto LABEL_46;
    v17 = (System_Int32_array **)StringLiteral_17511/*"class_n_"*/;
  }
  else
  {
    v17 = 0LL;
  }
  if ( !v15->max_length )
    goto LABEL_45;
  v15->m_Items[0] = (System_String_o *)v17;
  sub_B0D840((BattleServantConfConponent_o *)v15->m_Items, v17, v9, v10, v11, v12, v13, v14);
  v16 = StringLiteral_17507/*"class_b_"*/;
  if ( StringLiteral_17507/*"class_b_"*/ )
  {
    v16 = sub_B0D964(StringLiteral_17507/*"class_b_"*/, v15->obj.klass->_1.element_class);
    if ( !v16 )
      goto LABEL_46;
    v24 = (System_Int32_array **)StringLiteral_17507/*"class_b_"*/;
  }
  else
  {
    v24 = 0LL;
  }
  if ( v15->max_length <= 1 )
    goto LABEL_45;
  v15->m_Items[1] = (System_String_o *)v24;
  sub_B0D840((BattleServantConfConponent_o *)&v15->m_Items[1], v24, v18, v19, v20, v21, v22, v23);
  v16 = StringLiteral_17512/*"class_s_"*/;
  if ( StringLiteral_17512/*"class_s_"*/ )
  {
    v16 = sub_B0D964(StringLiteral_17512/*"class_s_"*/, v15->obj.klass->_1.element_class);
    if ( !v16 )
      goto LABEL_46;
    v31 = (System_Int32_array **)StringLiteral_17512/*"class_s_"*/;
  }
  else
  {
    v31 = 0LL;
  }
  if ( v15->max_length <= 2 )
    goto LABEL_45;
  v15->m_Items[2] = (System_String_o *)v31;
  sub_B0D840((BattleServantConfConponent_o *)&v15->m_Items[2], v31, v25, v26, v27, v28, v29, v30);
  v16 = StringLiteral_17510/*"class_g_"*/;
  if ( StringLiteral_17510/*"class_g_"*/ )
  {
    v16 = sub_B0D964(StringLiteral_17510/*"class_g_"*/, v15->obj.klass->_1.element_class);
    if ( !v16 )
      goto LABEL_46;
    v38 = (System_Int32_array **)StringLiteral_17510/*"class_g_"*/;
  }
  else
  {
    v38 = 0LL;
  }
  if ( v15->max_length <= 3 )
    goto LABEL_45;
  v15->m_Items[3] = (System_String_o *)v38;
  sub_B0D840((BattleServantConfConponent_o *)&v15->m_Items[3], v38, v32, v33, v34, v35, v36, v37);
  v16 = StringLiteral_17510/*"class_g_"*/;
  if ( StringLiteral_17510/*"class_g_"*/ )
  {
    v16 = sub_B0D964(StringLiteral_17510/*"class_g_"*/, v15->obj.klass->_1.element_class);
    if ( !v16 )
      goto LABEL_46;
    v45 = (System_Int32_array **)StringLiteral_17510/*"class_g_"*/;
  }
  else
  {
    v45 = 0LL;
  }
  if ( v15->max_length <= 4 )
    goto LABEL_45;
  v15->m_Items[4] = (System_String_o *)v45;
  sub_B0D840((BattleServantConfConponent_o *)&v15->m_Items[4], v45, v39, v40, v41, v42, v43, v44);
  v16 = StringLiteral_17510/*"class_g_"*/;
  if ( StringLiteral_17510/*"class_g_"*/ )
  {
    v16 = sub_B0D964(StringLiteral_17510/*"class_g_"*/, v15->obj.klass->_1.element_class);
    if ( !v16 )
      goto LABEL_46;
    v52 = (System_Int32_array **)StringLiteral_17510/*"class_g_"*/;
  }
  else
  {
    v52 = 0LL;
  }
  if ( v15->max_length <= 5 )
    goto LABEL_45;
  v15->m_Items[5] = (System_String_o *)v52;
  sub_B0D840((BattleServantConfConponent_o *)&v15->m_Items[5], v52, v46, v47, v48, v49, v50, v51);
  v16 = StringLiteral_17511/*"class_n_"*/;
  if ( StringLiteral_17511/*"class_n_"*/ )
  {
    v16 = sub_B0D964(StringLiteral_17511/*"class_n_"*/, v15->obj.klass->_1.element_class);
    if ( !v16 )
      goto LABEL_46;
    v59 = (System_Int32_array **)StringLiteral_17511/*"class_n_"*/;
  }
  else
  {
    v59 = 0LL;
  }
  if ( v15->max_length <= 6 )
    goto LABEL_45;
  v15->m_Items[6] = (System_String_o *)v59;
  sub_B0D840((BattleServantConfConponent_o *)&v15->m_Items[6], v59, v53, v54, v55, v56, v57, v58);
  v16 = StringLiteral_17511/*"class_n_"*/;
  if ( StringLiteral_17511/*"class_n_"*/ )
  {
    v16 = sub_B0D964(StringLiteral_17511/*"class_n_"*/, v15->obj.klass->_1.element_class);
    if ( v16 )
    {
      v66 = (System_Int32_array **)StringLiteral_17511/*"class_n_"*/;
      goto LABEL_43;
    }
LABEL_46:
    v74 = sub_B0D99C(v16);
    sub_B0D948(v74, 0LL);
  }
  v66 = 0LL;
LABEL_43:
  if ( v15->max_length <= 7 )
  {
LABEL_45:
    v73 = sub_B0D9A8(v16);
    sub_B0D948(v73, 0LL);
  }
  v15->m_Items[7] = (System_String_o *)v66;
  sub_B0D840((BattleServantConfConponent_o *)&v15->m_Items[7], v66, v60, v61, v62, v63, v64, v65);
  this->fields.frameCardFileList = v15;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v15, v67, v68, v69, v70, v71, v72);
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_2669B20 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall ServantExceedEntity__CreatePK(
        int32_t rarity,
        int32_t exceedCount,
        const MethodInfo *method)
{
  if ( (byte_4217522 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&exceedCount);
    byte_4217522 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           rarity,
           exceedCount,
           (const MethodInfo_171341C *)Method_DataEntityBase_CreateMultiplePK_int__int___);
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
  __int64 v5; // x0

  frameCardFileList = this->fields.frameCardFileList;
  if ( !frameCardFileList )
    sub_B0D97C(this);
  frameType = this->fields.frameType;
  if ( (unsigned int)frameType >= frameCardFileList->max_length )
  {
    v5 = sub_B0D9A8(this);
    sub_B0D948(v5, 0LL);
  }
  return frameCardFileList->m_Items[frameType];
}