void __fastcall EventCampaignReleaseEntity___ctor(EventCampaignReleaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_40FC5B9 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataEntityBase_string___ctor__, method);
    byte_40FC5B9 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_266F2D4 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall EventCampaignReleaseEntity__CreatePK(
        int32_t eventId,
        int32_t target,
        int32_t idx,
        const MethodInfo *method)
{
  if ( (byte_40FC5B8 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataEntityBase_CreateMultiplePK_int__int__int___, *(_QWORD *)&target);
    byte_40FC5B8 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           eventId,
           target,
           idx,
           (const MethodInfo_18C25C8 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *__fastcall EventCampaignReleaseEntity__CreatePrimaryKey(
        EventCampaignReleaseEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return EventCampaignReleaseEntity__CreatePK(this->fields.eventId, this->fields.target, this->fields.idx, v2);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall EventCampaignReleaseEntity__getCreatePrimarykey(
        int32_t eventId,
        int32_t target,
        int32_t idx,
        const MethodInfo *method)
{
  __int64 v4; // x1
  System_String_array *v5; // x19
  System_String_o *v6; // x0
  System_Int32_array **v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  System_Int32_array **v14; // x20
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  System_Int32_array **v25; // x20
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  System_Int32_array **v36; // x20
  int32_t v38; // [xsp+Ch] [xbp-24h] BYREF
  int32_t v39; // [xsp+18h] [xbp-18h] BYREF
  int32_t v40; // [xsp+1Ch] [xbp-14h] BYREF

  v40 = eventId;
  v39 = target;
  v38 = idx;
  if ( (byte_40FC5B7 & 1) == 0 )
  {
    sub_B16FFC(&string___TypeInfo, *(_QWORD *)&target);
    sub_B16FFC(&StringLiteral_1223, v4);
    byte_40FC5B7 = 1;
  }
  v5 = (System_String_array *)sub_B17014(string___TypeInfo, 5LL, *(_QWORD *)&idx);
  v6 = System_Int32__ToString((int32_t)&v40, 0LL);
  if ( !v5 )
    sub_B170D4();
  v14 = (System_Int32_array **)v6;
  if ( v6 )
  {
    v6 = (System_String_o *)sub_B170BC(v6, v5->obj.klass->_1.element_class);
    if ( !v6 )
      goto LABEL_25;
  }
  if ( !v5->max_length )
    goto LABEL_24;
  v5->m_Items[0] = (System_String_o *)v14;
  sub_B16F98((BattleServantConfConponent_o *)v5->m_Items, v14, v8, v9, v10, v11, v12, v13);
  v6 = (System_String_o *)StringLiteral_1223;
  if ( StringLiteral_1223 )
  {
    v6 = (System_String_o *)sub_B170BC(StringLiteral_1223, v5->obj.klass->_1.element_class);
    if ( !v6 )
      goto LABEL_25;
    v7 = (System_Int32_array **)StringLiteral_1223;
  }
  else
  {
    v7 = 0LL;
  }
  if ( v5->max_length <= 1 )
    goto LABEL_24;
  v5->m_Items[1] = (System_String_o *)v7;
  sub_B16F98((BattleServantConfConponent_o *)&v5->m_Items[1], v7, v8, v15, v16, v17, v18, v19);
  v6 = System_Int32__ToString((int32_t)&v39, 0LL);
  v25 = (System_Int32_array **)v6;
  if ( v6 )
  {
    v6 = (System_String_o *)sub_B170BC(v6, v5->obj.klass->_1.element_class);
    if ( !v6 )
      goto LABEL_25;
  }
  if ( v5->max_length <= 2 )
    goto LABEL_24;
  v5->m_Items[2] = (System_String_o *)v25;
  sub_B16F98((BattleServantConfConponent_o *)&v5->m_Items[2], v25, v8, v20, v21, v22, v23, v24);
  v6 = (System_String_o *)StringLiteral_1223;
  if ( StringLiteral_1223 )
  {
    v6 = (System_String_o *)sub_B170BC(StringLiteral_1223, v5->obj.klass->_1.element_class);
    if ( !v6 )
      goto LABEL_25;
    v7 = (System_Int32_array **)StringLiteral_1223;
  }
  else
  {
    v7 = 0LL;
  }
  if ( v5->max_length <= 3 )
    goto LABEL_24;
  v5->m_Items[3] = (System_String_o *)v7;
  sub_B16F98((BattleServantConfConponent_o *)&v5->m_Items[3], v7, v8, v26, v27, v28, v29, v30);
  v6 = System_Int32__ToString((int32_t)&v38, 0LL);
  v36 = (System_Int32_array **)v6;
  if ( v6 )
  {
    v6 = (System_String_o *)sub_B170BC(v6, v5->obj.klass->_1.element_class);
    if ( !v6 )
    {
LABEL_25:
      sub_B170F4(v6);
      sub_B170A0();
    }
  }
  if ( v5->max_length <= 4 )
  {
LABEL_24:
    sub_B17100(v6, v7, v8);
    sub_B170A0();
  }
  v5->m_Items[4] = (System_String_o *)v36;
  sub_B16F98((BattleServantConfConponent_o *)&v5->m_Items[4], v36, v8, v31, v32, v33, v34, v35);
  return System_String__Concat_43823856(v5, 0LL);
}