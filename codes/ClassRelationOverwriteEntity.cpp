void __fastcall ClassRelationOverwriteEntity___ctor(ClassRelationOverwriteEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B15F9A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataEntityBase_string___ctor__, method, v2);
    byte_4B15F9A = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_31B2CB8 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall ClassRelationOverwriteEntity__CreatePK(
        int32_t id,
        int32_t atkSide,
        int32_t atkClass,
        int32_t defClass,
        const MethodInfo *method)
{
  if ( (byte_4B15F98 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataEntityBase_CreateMultiplePK_int__int__int__int___,
      *(_QWORD *)&atkSide,
      *(_QWORD *)&atkClass);
    byte_4B15F98 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int__int_(
           id,
           atkSide,
           atkClass,
           defClass,
           (const MethodInfo_2F11804 *)Method_DataEntityBase_CreateMultiplePK_int__int__int__int___);
}


System_String_o *__fastcall ClassRelationOverwriteEntity__CreatePrimaryKey(
        ClassRelationOverwriteEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x4

  return ClassRelationOverwriteEntity__CreatePK(
           this->fields.id,
           this->fields.atkSide,
           this->fields.atkClass,
           this->fields.defClass,
           v2);
}


System_String_o *__fastcall ClassRelationOverwriteEntity__getFieldsLogString(
        ClassRelationOverwriteEntity_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  System_Object_array *v10; // x19
  System_String_o *v11; // x0
  __int64 v12; // x1
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  int64_t v19; // x21
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  int64_t v26; // x21
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  int64_t v33; // x21
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  int64_t v40; // x21
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7
  int64_t v47; // x21
  int32_t type; // w9
  int64_t v49; // x2
  int32_t v50; // w3
  System_String_o *v51; // x4
  BattleSetupInfo_o *v52; // x5
  FollowerInfo_o *v53; // x6
  PartyListViewItem_o *v54; // x7
  int64_t v55; // x20
  __int64 v57; // x0
  System_Enum_o v58; // [xsp+8h] [xbp-58h] BYREF
  int32_t v59; // [xsp+18h] [xbp-48h]
  int32_t damageRate; // [xsp+24h] [xbp-3Ch] BYREF
  int32_t defClass; // [xsp+28h] [xbp-38h] BYREF
  int32_t atkClass; // [xsp+2Ch] [xbp-34h] BYREF
  int32_t atkSide; // [xsp+38h] [xbp-28h] BYREF
  int32_t id; // [xsp+3Ch] [xbp-24h] BYREF

  if ( (byte_4B15F99 & 1) == 0 )
  {
    sub_1BCA7E0(&int_TypeInfo, method, v2);
    sub_1BCA7E0(&object___TypeInfo, v4, v5);
    sub_1BCA7E0(&ClassRelationOverwriteEntity_TYPE_TypeInfo, v6, v7);
    sub_1BCA7E0(&StringLiteral_20419/*"id:{0} side:{1} atk:{2} def:{3} rate:{4} type:{5}"*/, v8, v9);
    byte_4B15F99 = 1;
  }
  v10 = (System_Object_array *)sub_1BCA888(object___TypeInfo, 6LL);
  id = this->fields.id;
  v11 = (System_String_o *)j_il2cpp_value_box_0(int_TypeInfo, &id);
  if ( !v10 )
    sub_1BCAA3C(v11, v12);
  v19 = (int64_t)v11;
  if ( v11 )
  {
    v11 = (System_String_o *)sub_1BCA91C(v11, v10->obj.klass->_1.element_class);
    if ( !v11 )
      goto LABEL_24;
  }
  if ( !v10->max_length )
    goto LABEL_23;
  v10->m_Items[0] = (Il2CppObject *)v19;
  sub_1BCA784((PartyOrganizationUtility_o *)v10->m_Items, v19, v13, v14, v15, v16, v17, v18);
  atkSide = this->fields.atkSide;
  v11 = (System_String_o *)j_il2cpp_value_box_0(int_TypeInfo, &atkSide);
  v26 = (int64_t)v11;
  if ( v11 )
  {
    v11 = (System_String_o *)sub_1BCA91C(v11, v10->obj.klass->_1.element_class);
    if ( !v11 )
      goto LABEL_24;
  }
  if ( v10->max_length <= 1 )
    goto LABEL_23;
  v10->m_Items[1] = (Il2CppObject *)v26;
  sub_1BCA784((PartyOrganizationUtility_o *)&v10->m_Items[1], v26, v20, v21, v22, v23, v24, v25);
  atkClass = this->fields.atkClass;
  v11 = (System_String_o *)j_il2cpp_value_box_0(int_TypeInfo, &atkClass);
  v33 = (int64_t)v11;
  if ( v11 )
  {
    v11 = (System_String_o *)sub_1BCA91C(v11, v10->obj.klass->_1.element_class);
    if ( !v11 )
      goto LABEL_24;
  }
  if ( v10->max_length <= 2 )
    goto LABEL_23;
  v10->m_Items[2] = (Il2CppObject *)v33;
  sub_1BCA784((PartyOrganizationUtility_o *)&v10->m_Items[2], v33, v27, v28, v29, v30, v31, v32);
  defClass = this->fields.defClass;
  v11 = (System_String_o *)j_il2cpp_value_box_0(int_TypeInfo, &defClass);
  v40 = (int64_t)v11;
  if ( v11 )
  {
    v11 = (System_String_o *)sub_1BCA91C(v11, v10->obj.klass->_1.element_class);
    if ( !v11 )
      goto LABEL_24;
  }
  if ( v10->max_length <= 3 )
    goto LABEL_23;
  v10->m_Items[3] = (Il2CppObject *)v40;
  sub_1BCA784((PartyOrganizationUtility_o *)&v10->m_Items[3], v40, v34, v35, v36, v37, v38, v39);
  damageRate = this->fields.damageRate;
  v11 = (System_String_o *)j_il2cpp_value_box_0(int_TypeInfo, &damageRate);
  v47 = (int64_t)v11;
  if ( v11 )
  {
    v11 = (System_String_o *)sub_1BCA91C(v11, v10->obj.klass->_1.element_class);
    if ( !v11 )
      goto LABEL_24;
  }
  if ( v10->max_length <= 4 )
    goto LABEL_23;
  v10->m_Items[4] = (Il2CppObject *)v47;
  sub_1BCA784((PartyOrganizationUtility_o *)&v10->m_Items[4], v47, v41, v42, v43, v44, v45, v46);
  type = this->fields.type;
  v58.klass = (System_Enum_c *)ClassRelationOverwriteEntity_TYPE_TypeInfo;
  v58.monitor = (void *)-1LL;
  v59 = type;
  v11 = System_Enum__ToString(&v58, 0LL);
  v55 = (int64_t)v11;
  if ( v11 )
  {
    v11 = (System_String_o *)sub_1BCA91C(v11, v10->obj.klass->_1.element_class);
    if ( !v11 )
    {
LABEL_24:
      v57 = sub_1BCAA60(v11);
      sub_1BCA908(v57, 0LL);
    }
  }
  if ( v10->max_length <= 5 )
LABEL_23:
    sub_1BCAA44(v11, v12);
  v10->m_Items[5] = (Il2CppObject *)v55;
  sub_1BCA784((PartyOrganizationUtility_o *)&v10->m_Items[5], v55, v49, v50, v51, v52, v53, v54);
  return System_String__Format_62415728((System_String_o *)StringLiteral_20419/*"id:{0} side:{1} atk:{2} def:{3} rate:{4} type:{5}"*/, v10, 0LL);
}


float __fastcall ClassRelationOverwriteEntity__getRate(ClassRelationOverwriteEntity_o *this, const MethodInfo *method)
{
  return (float)this->fields.damageRate / 1000.0;
}