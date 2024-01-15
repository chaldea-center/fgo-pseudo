void __fastcall ServantExceedEntity___ctor(ServantExceedEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x0
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  struct System_String_array *v16; // x20
  __int64 v17; // x0
  System_Int32_array **v18; // x1
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7

  if ( (byte_40FD095 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataEntityBase_string___ctor__, method);
    sub_B16FFC(&string___TypeInfo, v4);
    sub_B16FFC(&StringLiteral_17385/*"class_b_"*/, v5);
    sub_B16FFC(&StringLiteral_17388/*"class_g_"*/, v6);
    sub_B16FFC(&StringLiteral_17389/*"class_n_"*/, v7);
    sub_B16FFC(&StringLiteral_17390/*"class_s_"*/, v8);
    byte_40FD095 = 1;
  }
  v9 = sub_B17014(string___TypeInfo, 8LL, v2);
  if ( !v9 )
    sub_B170D4();
  v16 = (struct System_String_array *)v9;
  v17 = StringLiteral_17389/*"class_n_"*/;
  if ( StringLiteral_17389/*"class_n_"*/ )
  {
    v17 = sub_B170BC(StringLiteral_17389/*"class_n_"*/, v16->obj.klass->_1.element_class);
    if ( !v17 )
      goto LABEL_46;
    v18 = (System_Int32_array **)StringLiteral_17389/*"class_n_"*/;
  }
  else
  {
    v18 = 0LL;
  }
  if ( !v16->max_length )
    goto LABEL_45;
  v16->m_Items[0] = (System_String_o *)v18;
  sub_B16F98((BattleServantConfConponent_o *)v16->m_Items, v18, v10, v11, v12, v13, v14, v15);
  v17 = StringLiteral_17385/*"class_b_"*/;
  if ( StringLiteral_17385/*"class_b_"*/ )
  {
    v17 = sub_B170BC(StringLiteral_17385/*"class_b_"*/, v16->obj.klass->_1.element_class);
    if ( !v17 )
      goto LABEL_46;
    v18 = (System_Int32_array **)StringLiteral_17385/*"class_b_"*/;
  }
  else
  {
    v18 = 0LL;
  }
  if ( v16->max_length <= 1 )
    goto LABEL_45;
  v16->m_Items[1] = (System_String_o *)v18;
  sub_B16F98((BattleServantConfConponent_o *)&v16->m_Items[1], v18, v10, v19, v20, v21, v22, v23);
  v17 = StringLiteral_17390/*"class_s_"*/;
  if ( StringLiteral_17390/*"class_s_"*/ )
  {
    v17 = sub_B170BC(StringLiteral_17390/*"class_s_"*/, v16->obj.klass->_1.element_class);
    if ( !v17 )
      goto LABEL_46;
    v18 = (System_Int32_array **)StringLiteral_17390/*"class_s_"*/;
  }
  else
  {
    v18 = 0LL;
  }
  if ( v16->max_length <= 2 )
    goto LABEL_45;
  v16->m_Items[2] = (System_String_o *)v18;
  sub_B16F98((BattleServantConfConponent_o *)&v16->m_Items[2], v18, v10, v24, v25, v26, v27, v28);
  v17 = StringLiteral_17388/*"class_g_"*/;
  if ( StringLiteral_17388/*"class_g_"*/ )
  {
    v17 = sub_B170BC(StringLiteral_17388/*"class_g_"*/, v16->obj.klass->_1.element_class);
    if ( !v17 )
      goto LABEL_46;
    v18 = (System_Int32_array **)StringLiteral_17388/*"class_g_"*/;
  }
  else
  {
    v18 = 0LL;
  }
  if ( v16->max_length <= 3 )
    goto LABEL_45;
  v16->m_Items[3] = (System_String_o *)v18;
  sub_B16F98((BattleServantConfConponent_o *)&v16->m_Items[3], v18, v10, v29, v30, v31, v32, v33);
  v17 = StringLiteral_17388/*"class_g_"*/;
  if ( StringLiteral_17388/*"class_g_"*/ )
  {
    v17 = sub_B170BC(StringLiteral_17388/*"class_g_"*/, v16->obj.klass->_1.element_class);
    if ( !v17 )
      goto LABEL_46;
    v18 = (System_Int32_array **)StringLiteral_17388/*"class_g_"*/;
  }
  else
  {
    v18 = 0LL;
  }
  if ( v16->max_length <= 4 )
    goto LABEL_45;
  v16->m_Items[4] = (System_String_o *)v18;
  sub_B16F98((BattleServantConfConponent_o *)&v16->m_Items[4], v18, v10, v34, v35, v36, v37, v38);
  v17 = StringLiteral_17388/*"class_g_"*/;
  if ( StringLiteral_17388/*"class_g_"*/ )
  {
    v17 = sub_B170BC(StringLiteral_17388/*"class_g_"*/, v16->obj.klass->_1.element_class);
    if ( !v17 )
      goto LABEL_46;
    v18 = (System_Int32_array **)StringLiteral_17388/*"class_g_"*/;
  }
  else
  {
    v18 = 0LL;
  }
  if ( v16->max_length <= 5 )
    goto LABEL_45;
  v16->m_Items[5] = (System_String_o *)v18;
  sub_B16F98((BattleServantConfConponent_o *)&v16->m_Items[5], v18, v10, v39, v40, v41, v42, v43);
  v17 = StringLiteral_17389/*"class_n_"*/;
  if ( StringLiteral_17389/*"class_n_"*/ )
  {
    v17 = sub_B170BC(StringLiteral_17389/*"class_n_"*/, v16->obj.klass->_1.element_class);
    if ( !v17 )
      goto LABEL_46;
    v18 = (System_Int32_array **)StringLiteral_17389/*"class_n_"*/;
  }
  else
  {
    v18 = 0LL;
  }
  if ( v16->max_length <= 6 )
    goto LABEL_45;
  v16->m_Items[6] = (System_String_o *)v18;
  sub_B16F98((BattleServantConfConponent_o *)&v16->m_Items[6], v18, v10, v44, v45, v46, v47, v48);
  v17 = StringLiteral_17389/*"class_n_"*/;
  if ( StringLiteral_17389/*"class_n_"*/ )
  {
    v17 = sub_B170BC(StringLiteral_17389/*"class_n_"*/, v16->obj.klass->_1.element_class);
    if ( v17 )
    {
      v18 = (System_Int32_array **)StringLiteral_17389/*"class_n_"*/;
      goto LABEL_43;
    }
LABEL_46:
    sub_B170F4(v17);
    sub_B170A0();
  }
  v18 = 0LL;
LABEL_43:
  if ( v16->max_length <= 7 )
  {
LABEL_45:
    sub_B17100(v17, v18, v10);
    sub_B170A0();
  }
  v16->m_Items[7] = (System_String_o *)v18;
  sub_B16F98((BattleServantConfConponent_o *)&v16->m_Items[7], v18, v10, v49, v50, v51, v52, v53);
  this->fields.frameCardFileList = v16;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v16, v54, v55, v56, v57, v58, v59);
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_266F2D4 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall ServantExceedEntity__CreatePK(
        int32_t rarity,
        int32_t exceedCount,
        const MethodInfo *method)
{
  if ( (byte_40FD094 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&exceedCount);
    byte_40FD094 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           rarity,
           exceedCount,
           (const MethodInfo_18C21A0 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
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
  __int64 v2; // x2
  struct System_String_array *frameCardFileList; // x8
  __int64 frameType; // x9

  frameCardFileList = this->fields.frameCardFileList;
  if ( !frameCardFileList )
    sub_B170D4();
  frameType = this->fields.frameType;
  if ( (unsigned int)frameType >= frameCardFileList->max_length )
  {
    sub_B17100(this, method, v2);
    sub_B170A0();
  }
  return frameCardFileList->m_Items[frameType];
}