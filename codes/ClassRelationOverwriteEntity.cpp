void __fastcall ClassRelationOverwriteEntity___ctor(ClassRelationOverwriteEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4BDC2DA & 1) == 0 )
  {
    sub_1C21E38(&Method_DataEntityBase_string___ctor__);
    byte_4BDC2DA = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_325995C *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall ClassRelationOverwriteEntity__CreatePK(
        int32_t id,
        int32_t atkSide,
        int32_t atkClass,
        int32_t defClass,
        const MethodInfo *method)
{
  if ( (byte_4BDC2D8 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataEntityBase_CreateMultiplePK_int__int__int__int___);
    byte_4BDC2D8 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int__int_(
           id,
           atkSide,
           atkClass,
           defClass,
           (const MethodInfo_2FAE978 *)Method_DataEntityBase_CreateMultiplePK_int__int__int__int___);
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
  System_Object_array *v3; // x19
  __int64 v4; // x2
  __int64 v5; // x3
  __int64 v6; // x4
  System_String_o *v7; // x0
  __int64 v8; // x1
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  int64_t v15; // x21
  __int64 v16; // x2
  __int64 v17; // x3
  __int64 v18; // x4
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  int64_t v25; // x21
  __int64 v26; // x2
  __int64 v27; // x3
  __int64 v28; // x4
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  int64_t v35; // x21
  __int64 v36; // x2
  __int64 v37; // x3
  __int64 v38; // x4
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  int64_t v45; // x21
  __int64 v46; // x2
  __int64 v47; // x3
  __int64 v48; // x4
  int64_t v49; // x2
  int32_t v50; // w3
  System_String_o *v51; // x4
  BattleSetupInfo_o *v52; // x5
  FollowerInfo_o *v53; // x6
  PartyListViewItem_o *v54; // x7
  int64_t v55; // x21
  int32_t type; // w9
  int64_t v57; // x2
  int32_t v58; // w3
  System_String_o *v59; // x4
  BattleSetupInfo_o *v60; // x5
  FollowerInfo_o *v61; // x6
  PartyListViewItem_o *v62; // x7
  int64_t v63; // x20
  __int64 v65; // x0
  System_Enum_o v66; // [xsp+8h] [xbp-58h] BYREF
  int32_t v67; // [xsp+18h] [xbp-48h]
  int32_t damageRate; // [xsp+24h] [xbp-3Ch] BYREF
  int32_t defClass; // [xsp+28h] [xbp-38h] BYREF
  int32_t atkClass; // [xsp+2Ch] [xbp-34h] BYREF
  int32_t atkSide; // [xsp+38h] [xbp-28h] BYREF
  int32_t id; // [xsp+3Ch] [xbp-24h] BYREF

  if ( (byte_4BDC2D9 & 1) == 0 )
  {
    sub_1C21E38(&int_TypeInfo);
    sub_1C21E38(&object___TypeInfo);
    sub_1C21E38(&ClassRelationOverwriteEntity_TYPE_TypeInfo);
    sub_1C21E38(&StringLiteral_20560/*"id:{0} side:{1} atk:{2} def:{3} rate:{4} type:{5}"*/);
    byte_4BDC2D9 = 1;
  }
  v3 = (System_Object_array *)sub_1C21EE0(object___TypeInfo, 6LL);
  id = this->fields.id;
  v7 = (System_String_o *)j_il2cpp_value_box_0(int_TypeInfo, &id, v4, v5, v6);
  if ( !v3 )
    sub_1C22094(v7, v8);
  v15 = (int64_t)v7;
  if ( v7 )
  {
    v7 = (System_String_o *)sub_1C21F74(v7, v3->obj.klass->_1.element_class);
    if ( !v7 )
      goto LABEL_24;
  }
  if ( !v3->max_length )
    goto LABEL_23;
  v3->m_Items[0] = (Il2CppObject *)v15;
  sub_1C21DDC((PartyOrganizationUtility_o *)v3->m_Items, v15, v9, v10, v11, v12, v13, v14);
  atkSide = this->fields.atkSide;
  v7 = (System_String_o *)j_il2cpp_value_box_0(int_TypeInfo, &atkSide, v16, v17, v18);
  v25 = (int64_t)v7;
  if ( v7 )
  {
    v7 = (System_String_o *)sub_1C21F74(v7, v3->obj.klass->_1.element_class);
    if ( !v7 )
      goto LABEL_24;
  }
  if ( v3->max_length <= 1 )
    goto LABEL_23;
  v3->m_Items[1] = (Il2CppObject *)v25;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v3->m_Items[1], v25, v19, v20, v21, v22, v23, v24);
  atkClass = this->fields.atkClass;
  v7 = (System_String_o *)j_il2cpp_value_box_0(int_TypeInfo, &atkClass, v26, v27, v28);
  v35 = (int64_t)v7;
  if ( v7 )
  {
    v7 = (System_String_o *)sub_1C21F74(v7, v3->obj.klass->_1.element_class);
    if ( !v7 )
      goto LABEL_24;
  }
  if ( v3->max_length <= 2 )
    goto LABEL_23;
  v3->m_Items[2] = (Il2CppObject *)v35;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v3->m_Items[2], v35, v29, v30, v31, v32, v33, v34);
  defClass = this->fields.defClass;
  v7 = (System_String_o *)j_il2cpp_value_box_0(int_TypeInfo, &defClass, v36, v37, v38);
  v45 = (int64_t)v7;
  if ( v7 )
  {
    v7 = (System_String_o *)sub_1C21F74(v7, v3->obj.klass->_1.element_class);
    if ( !v7 )
      goto LABEL_24;
  }
  if ( v3->max_length <= 3 )
    goto LABEL_23;
  v3->m_Items[3] = (Il2CppObject *)v45;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v3->m_Items[3], v45, v39, v40, v41, v42, v43, v44);
  damageRate = this->fields.damageRate;
  v7 = (System_String_o *)j_il2cpp_value_box_0(int_TypeInfo, &damageRate, v46, v47, v48);
  v55 = (int64_t)v7;
  if ( v7 )
  {
    v7 = (System_String_o *)sub_1C21F74(v7, v3->obj.klass->_1.element_class);
    if ( !v7 )
      goto LABEL_24;
  }
  if ( v3->max_length <= 4 )
    goto LABEL_23;
  v3->m_Items[4] = (Il2CppObject *)v55;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v3->m_Items[4], v55, v49, v50, v51, v52, v53, v54);
  type = this->fields.type;
  v66.klass = (System_Enum_c *)ClassRelationOverwriteEntity_TYPE_TypeInfo;
  v66.monitor = (void *)-1LL;
  v67 = type;
  v7 = System_Enum__ToString(&v66, 0LL);
  v63 = (int64_t)v7;
  if ( v7 )
  {
    v7 = (System_String_o *)sub_1C21F74(v7, v3->obj.klass->_1.element_class);
    if ( !v7 )
    {
LABEL_24:
      v65 = sub_1C220B8(v7);
      sub_1C21F60(v65, 0LL);
    }
  }
  if ( v3->max_length <= 5 )
LABEL_23:
    sub_1C2209C(v7, v8);
  v3->m_Items[5] = (Il2CppObject *)v63;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v3->m_Items[5], v63, v57, v58, v59, v60, v61, v62);
  return System_String__Format_63129984((System_String_o *)StringLiteral_20560/*"id:{0} side:{1} atk:{2} def:{3} rate:{4} type:{5}"*/, v3, 0LL);
}


float __fastcall ClassRelationOverwriteEntity__getRate(ClassRelationOverwriteEntity_o *this, const MethodInfo *method)
{
  return (float)this->fields.damageRate / 1000.0;
}