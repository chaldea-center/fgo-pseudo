void __fastcall EventCampaignReleaseEntity___ctor(EventCampaignReleaseEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EB131 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_string___ctor__, (_DWORD)method, v2, v3);
    byte_42EB131 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_23FAD5C *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall EventCampaignReleaseEntity__CreatePK(
        int32_t eventId,
        int32_t target,
        int32_t idx,
        const MethodInfo *method)
{
  if ( (byte_42EB130 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_CreateMultiplePK_int__int__int___, target, idx, method);
    byte_42EB130 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           eventId,
           target,
           idx,
           (const MethodInfo_1AE3440 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *__fastcall EventCampaignReleaseEntity__CreatePrimaryKey(
        EventCampaignReleaseEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return EventCampaignReleaseEntity__CreatePK(this->fields.eventId, this->fields.target, this->fields.idx, v2);
}


System_String_o *__fastcall EventCampaignReleaseEntity__getCreatePrimarykey(
        int32_t eventId,
        int32_t target,
        int32_t idx,
        const MethodInfo *method)
{
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  System_String_array *v7; // x19
  System_String_o *v8; // x0
  __int64 v9; // x1
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  System_Int32_array **v16; // x20
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  System_Int32_array **v23; // x1
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  System_Int32_array **v30; // x20
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  System_Int32_array **v37; // x1
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  System_Int32_array **v44; // x20
  __int64 v46; // x0
  __int64 v47; // x0
  int32_t v48; // [xsp+Ch] [xbp-24h] BYREF
  int32_t v49; // [xsp+18h] [xbp-18h] BYREF
  int32_t v50; // [xsp+1Ch] [xbp-14h] BYREF

  v50 = eventId;
  v49 = target;
  v48 = idx;
  if ( (byte_42EB12F & 1) == 0 )
  {
    sub_B5D5C4(&string___TypeInfo, target, idx, method);
    sub_B5D5C4(&StringLiteral_1245/*":"*/, v4, v5, v6);
    byte_42EB12F = 1;
  }
  v7 = (System_String_array *)sub_B5D5DC(string___TypeInfo, 5LL);
  v8 = System_Int32__ToString((int32_t)&v50, 0LL);
  if ( !v7 )
    sub_B5D69C(v8, v9);
  v16 = (System_Int32_array **)v8;
  if ( v8 )
  {
    v8 = (System_String_o *)sub_B5D684(v8, v7->obj.klass->_1.element_class);
    if ( !v8 )
      goto LABEL_25;
  }
  if ( !v7->max_length )
    goto LABEL_24;
  v7->m_Items[0] = (System_String_o *)v16;
  sub_B5D560((BattleServantConfConponent_o *)v7->m_Items, v16, v10, v11, v12, v13, v14, v15);
  v8 = (System_String_o *)StringLiteral_1245/*":"*/;
  if ( StringLiteral_1245/*":"*/ )
  {
    v8 = (System_String_o *)sub_B5D684(StringLiteral_1245/*":"*/, v7->obj.klass->_1.element_class);
    if ( !v8 )
      goto LABEL_25;
    v23 = (System_Int32_array **)StringLiteral_1245/*":"*/;
  }
  else
  {
    v23 = 0LL;
  }
  if ( v7->max_length <= 1 )
    goto LABEL_24;
  v7->m_Items[1] = (System_String_o *)v23;
  sub_B5D560((BattleServantConfConponent_o *)&v7->m_Items[1], v23, v17, v18, v19, v20, v21, v22);
  v8 = System_Int32__ToString((int32_t)&v49, 0LL);
  v30 = (System_Int32_array **)v8;
  if ( v8 )
  {
    v8 = (System_String_o *)sub_B5D684(v8, v7->obj.klass->_1.element_class);
    if ( !v8 )
      goto LABEL_25;
  }
  if ( v7->max_length <= 2 )
    goto LABEL_24;
  v7->m_Items[2] = (System_String_o *)v30;
  sub_B5D560((BattleServantConfConponent_o *)&v7->m_Items[2], v30, v24, v25, v26, v27, v28, v29);
  v8 = (System_String_o *)StringLiteral_1245/*":"*/;
  if ( StringLiteral_1245/*":"*/ )
  {
    v8 = (System_String_o *)sub_B5D684(StringLiteral_1245/*":"*/, v7->obj.klass->_1.element_class);
    if ( !v8 )
      goto LABEL_25;
    v37 = (System_Int32_array **)StringLiteral_1245/*":"*/;
  }
  else
  {
    v37 = 0LL;
  }
  if ( v7->max_length <= 3 )
    goto LABEL_24;
  v7->m_Items[3] = (System_String_o *)v37;
  sub_B5D560((BattleServantConfConponent_o *)&v7->m_Items[3], v37, v31, v32, v33, v34, v35, v36);
  v8 = System_Int32__ToString((int32_t)&v48, 0LL);
  v44 = (System_Int32_array **)v8;
  if ( v8 )
  {
    v8 = (System_String_o *)sub_B5D684(v8, v7->obj.klass->_1.element_class);
    if ( !v8 )
    {
LABEL_25:
      v47 = sub_B5D6BC(v8);
      sub_B5D668(v47, 0LL);
    }
  }
  if ( v7->max_length <= 4 )
  {
LABEL_24:
    v46 = sub_B5D6C8(v8);
    sub_B5D668(v46, 0LL);
  }
  v7->m_Items[4] = (System_String_o *)v44;
  sub_B5D560((BattleServantConfConponent_o *)&v7->m_Items[4], v44, v38, v39, v40, v41, v42, v43);
  return System_String__Concat_44657912(v7, 0LL);
}