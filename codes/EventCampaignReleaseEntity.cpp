void __fastcall EventCampaignReleaseEntity___ctor(EventCampaignReleaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4216ED0 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataEntityBase_string___ctor__, method);
    byte_4216ED0 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_2669B20 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall EventCampaignReleaseEntity__CreatePK(
        int32_t eventId,
        int32_t target,
        int32_t idx,
        const MethodInfo *method)
{
  if ( (byte_4216ECF & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataEntityBase_CreateMultiplePK_int__int__int___, *(_QWORD *)&target);
    byte_4216ECF = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           eventId,
           target,
           idx,
           (const MethodInfo_1713844 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
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
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  System_Int32_array **v13; // x20
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  System_Int32_array **v20; // x1
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  System_Int32_array **v27; // x20
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  System_Int32_array **v34; // x1
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  System_Int32_array **v41; // x20
  __int64 v43; // x0
  __int64 v44; // x0
  int32_t v45; // [xsp+Ch] [xbp-24h] BYREF
  int32_t v46; // [xsp+18h] [xbp-18h] BYREF
  int32_t v47; // [xsp+1Ch] [xbp-14h] BYREF

  v47 = eventId;
  v46 = target;
  v45 = idx;
  if ( (byte_4216ECE & 1) == 0 )
  {
    sub_B0D8A4(&string___TypeInfo, *(_QWORD *)&target);
    sub_B0D8A4(&StringLiteral_1232/*":"*/, v4);
    byte_4216ECE = 1;
  }
  v5 = (System_String_array *)sub_B0D8BC(string___TypeInfo, 5LL);
  v6 = System_Int32__ToString((int32_t)&v47, 0LL);
  if ( !v5 )
    sub_B0D97C(v6);
  v13 = (System_Int32_array **)v6;
  if ( v6 )
  {
    v6 = (System_String_o *)sub_B0D964(v6, v5->obj.klass->_1.element_class);
    if ( !v6 )
      goto LABEL_25;
  }
  if ( !v5->max_length )
    goto LABEL_24;
  v5->m_Items[0] = (System_String_o *)v13;
  sub_B0D840((BattleServantConfConponent_o *)v5->m_Items, v13, v7, v8, v9, v10, v11, v12);
  v6 = (System_String_o *)StringLiteral_1232/*":"*/;
  if ( StringLiteral_1232/*":"*/ )
  {
    v6 = (System_String_o *)sub_B0D964(StringLiteral_1232/*":"*/, v5->obj.klass->_1.element_class);
    if ( !v6 )
      goto LABEL_25;
    v20 = (System_Int32_array **)StringLiteral_1232/*":"*/;
  }
  else
  {
    v20 = 0LL;
  }
  if ( v5->max_length <= 1 )
    goto LABEL_24;
  v5->m_Items[1] = (System_String_o *)v20;
  sub_B0D840((BattleServantConfConponent_o *)&v5->m_Items[1], v20, v14, v15, v16, v17, v18, v19);
  v6 = System_Int32__ToString((int32_t)&v46, 0LL);
  v27 = (System_Int32_array **)v6;
  if ( v6 )
  {
    v6 = (System_String_o *)sub_B0D964(v6, v5->obj.klass->_1.element_class);
    if ( !v6 )
      goto LABEL_25;
  }
  if ( v5->max_length <= 2 )
    goto LABEL_24;
  v5->m_Items[2] = (System_String_o *)v27;
  sub_B0D840((BattleServantConfConponent_o *)&v5->m_Items[2], v27, v21, v22, v23, v24, v25, v26);
  v6 = (System_String_o *)StringLiteral_1232/*":"*/;
  if ( StringLiteral_1232/*":"*/ )
  {
    v6 = (System_String_o *)sub_B0D964(StringLiteral_1232/*":"*/, v5->obj.klass->_1.element_class);
    if ( !v6 )
      goto LABEL_25;
    v34 = (System_Int32_array **)StringLiteral_1232/*":"*/;
  }
  else
  {
    v34 = 0LL;
  }
  if ( v5->max_length <= 3 )
    goto LABEL_24;
  v5->m_Items[3] = (System_String_o *)v34;
  sub_B0D840((BattleServantConfConponent_o *)&v5->m_Items[3], v34, v28, v29, v30, v31, v32, v33);
  v6 = System_Int32__ToString((int32_t)&v45, 0LL);
  v41 = (System_Int32_array **)v6;
  if ( v6 )
  {
    v6 = (System_String_o *)sub_B0D964(v6, v5->obj.klass->_1.element_class);
    if ( !v6 )
    {
LABEL_25:
      v44 = sub_B0D99C(v6);
      sub_B0D948(v44, 0LL);
    }
  }
  if ( v5->max_length <= 4 )
  {
LABEL_24:
    v43 = sub_B0D9A8(v6);
    sub_B0D948(v43, 0LL);
  }
  v5->m_Items[4] = (System_String_o *)v41;
  sub_B0D840((BattleServantConfConponent_o *)&v5->m_Items[4], v41, v35, v36, v37, v38, v39, v40);
  return System_String__Concat_43930028(v5, 0LL);
}