void __fastcall EventCampaignReleaseEntity___ctor(EventCampaignReleaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_418A2F0 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_string___ctor__, method);
    byte_418A2F0 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_24E401C *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall EventCampaignReleaseEntity__CreatePK(
        int32_t eventId,
        int32_t target,
        int32_t idx,
        const MethodInfo *method)
{
  if ( (byte_418A2EF & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_CreateMultiplePK_int__int__int___, *(_QWORD *)&target);
    byte_418A2EF = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           eventId,
           target,
           idx,
           (const MethodInfo_1732D30 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
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
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  System_Int32_array **v14; // x20
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  System_Int32_array **v21; // x1
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  System_Int32_array **v28; // x20
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  System_Int32_array **v35; // x1
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  System_Int32_array **v42; // x20
  __int64 v44; // x0
  __int64 v45; // x0
  int32_t v46; // [xsp+Ch] [xbp-24h] BYREF
  int32_t v47; // [xsp+18h] [xbp-18h] BYREF
  int32_t v48; // [xsp+1Ch] [xbp-14h] BYREF

  v48 = eventId;
  v47 = target;
  v46 = idx;
  if ( (byte_418A2EE & 1) == 0 )
  {
    sub_B2C35C(&string___TypeInfo, *(_QWORD *)&target);
    sub_B2C35C(&StringLiteral_1225/*":"*/, v4);
    byte_418A2EE = 1;
  }
  v5 = (System_String_array *)sub_B2C374(string___TypeInfo, 5LL);
  v6 = System_Int32__ToString((int32_t)&v48, 0LL);
  if ( !v5 )
    sub_B2C434(v6, v7);
  v14 = (System_Int32_array **)v6;
  if ( v6 )
  {
    v6 = (System_String_o *)sub_B2C41C(v6, v5->obj.klass->_1.element_class);
    if ( !v6 )
      goto LABEL_25;
  }
  if ( !v5->max_length )
    goto LABEL_24;
  v5->m_Items[0] = (System_String_o *)v14;
  sub_B2C2F8((BattleServantConfConponent_o *)v5->m_Items, v14, v8, v9, v10, v11, v12, v13);
  v6 = (System_String_o *)StringLiteral_1225/*":"*/;
  if ( StringLiteral_1225/*":"*/ )
  {
    v6 = (System_String_o *)sub_B2C41C(StringLiteral_1225/*":"*/, v5->obj.klass->_1.element_class);
    if ( !v6 )
      goto LABEL_25;
    v21 = (System_Int32_array **)StringLiteral_1225/*":"*/;
  }
  else
  {
    v21 = 0LL;
  }
  if ( v5->max_length <= 1 )
    goto LABEL_24;
  v5->m_Items[1] = (System_String_o *)v21;
  sub_B2C2F8((BattleServantConfConponent_o *)&v5->m_Items[1], v21, v15, v16, v17, v18, v19, v20);
  v6 = System_Int32__ToString((int32_t)&v47, 0LL);
  v28 = (System_Int32_array **)v6;
  if ( v6 )
  {
    v6 = (System_String_o *)sub_B2C41C(v6, v5->obj.klass->_1.element_class);
    if ( !v6 )
      goto LABEL_25;
  }
  if ( v5->max_length <= 2 )
    goto LABEL_24;
  v5->m_Items[2] = (System_String_o *)v28;
  sub_B2C2F8((BattleServantConfConponent_o *)&v5->m_Items[2], v28, v22, v23, v24, v25, v26, v27);
  v6 = (System_String_o *)StringLiteral_1225/*":"*/;
  if ( StringLiteral_1225/*":"*/ )
  {
    v6 = (System_String_o *)sub_B2C41C(StringLiteral_1225/*":"*/, v5->obj.klass->_1.element_class);
    if ( !v6 )
      goto LABEL_25;
    v35 = (System_Int32_array **)StringLiteral_1225/*":"*/;
  }
  else
  {
    v35 = 0LL;
  }
  if ( v5->max_length <= 3 )
    goto LABEL_24;
  v5->m_Items[3] = (System_String_o *)v35;
  sub_B2C2F8((BattleServantConfConponent_o *)&v5->m_Items[3], v35, v29, v30, v31, v32, v33, v34);
  v6 = System_Int32__ToString((int32_t)&v46, 0LL);
  v42 = (System_Int32_array **)v6;
  if ( v6 )
  {
    v6 = (System_String_o *)sub_B2C41C(v6, v5->obj.klass->_1.element_class);
    if ( !v6 )
    {
LABEL_25:
      v45 = sub_B2C454(v6);
      sub_B2C400(v45, 0LL);
    }
  }
  if ( v5->max_length <= 4 )
  {
LABEL_24:
    v44 = sub_B2C460(v6);
    sub_B2C400(v44, 0LL);
  }
  v5->m_Items[4] = (System_String_o *)v42;
  sub_B2C2F8((BattleServantConfConponent_o *)&v5->m_Items[4], v42, v36, v37, v38, v39, v40, v41);
  return System_String__Concat_44385656(v5, 0LL);
}