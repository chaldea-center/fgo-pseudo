void __fastcall ClassRelationOverwriteEntity___ctor(ClassRelationOverwriteEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4B6695D & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataEntityBase_string___ctor__, method);
    byte_4B6695D = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_31FD63C *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall ClassRelationOverwriteEntity__CreatePK(
        int32_t id,
        int32_t atkSide,
        int32_t atkClass,
        int32_t defClass,
        const MethodInfo *method)
{
  if ( (byte_4B6695B & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataEntityBase_CreateMultiplePK_int__int__int__int___, *(_QWORD *)&atkSide);
    byte_4B6695B = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int__int_(
           id,
           atkSide,
           atkClass,
           defClass,
           (const MethodInfo_2F57C84 *)Method_DataEntityBase_CreateMultiplePK_int__int__int__int___);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  System_Object_array *v6; // x19
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x4
  System_String_o *v10; // x0
  __int64 v11; // x1
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  int64_t v18; // x21
  __int64 v19; // x2
  __int64 v20; // x3
  __int64 v21; // x4
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  int64_t v28; // x21
  __int64 v29; // x2
  __int64 v30; // x3
  __int64 v31; // x4
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  int64_t v38; // x21
  __int64 v39; // x2
  __int64 v40; // x3
  __int64 v41; // x4
  int64_t v42; // x2
  int32_t v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7
  int64_t v48; // x21
  __int64 v49; // x2
  __int64 v50; // x3
  __int64 v51; // x4
  int64_t v52; // x2
  int32_t v53; // w3
  System_String_o *v54; // x4
  BattleSetupInfo_o *v55; // x5
  FollowerInfo_o *v56; // x6
  PartyListViewItem_o *v57; // x7
  int64_t v58; // x21
  int32_t type; // w9
  int64_t v60; // x2
  int32_t v61; // w3
  System_String_o *v62; // x4
  BattleSetupInfo_o *v63; // x5
  FollowerInfo_o *v64; // x6
  PartyListViewItem_o *v65; // x7
  int64_t v66; // x20
  __int64 v68; // x0
  System_Enum_o v69; // [xsp+8h] [xbp-58h] BYREF
  int32_t v70; // [xsp+18h] [xbp-48h]
  int32_t damageRate; // [xsp+24h] [xbp-3Ch] BYREF
  int32_t defClass; // [xsp+28h] [xbp-38h] BYREF
  int32_t atkClass; // [xsp+2Ch] [xbp-34h] BYREF
  int32_t atkSide; // [xsp+38h] [xbp-28h] BYREF
  int32_t id; // [xsp+3Ch] [xbp-24h] BYREF

  if ( (byte_4B6695C & 1) == 0 )
  {
    sub_1BE4ACC(&int_TypeInfo, method);
    sub_1BE4ACC(&object___TypeInfo, v3);
    sub_1BE4ACC(&ClassRelationOverwriteEntity_TYPE_TypeInfo, v4);
    sub_1BE4ACC(&StringLiteral_20487/*"id:{0} side:{1} atk:{2} def:{3} rate:{4} type:{5}"*/, v5);
    byte_4B6695C = 1;
  }
  v6 = (System_Object_array *)sub_1BE4B74(object___TypeInfo, 6LL);
  id = this->fields.id;
  v10 = (System_String_o *)j_il2cpp_value_box_0(int_TypeInfo, &id, v7, v8, v9);
  if ( !v6 )
    sub_1BE4D28(v10, v11);
  v18 = (int64_t)v10;
  if ( v10 )
  {
    v10 = (System_String_o *)sub_1BE4C08(v10, v6->obj.klass->_1.element_class);
    if ( !v10 )
      goto LABEL_24;
  }
  if ( !v6->max_length )
    goto LABEL_23;
  v6->m_Items[0] = (Il2CppObject *)v18;
  sub_1BE4A70((PartyOrganizationUtility_o *)v6->m_Items, v18, v12, v13, v14, v15, v16, v17);
  atkSide = this->fields.atkSide;
  v10 = (System_String_o *)j_il2cpp_value_box_0(int_TypeInfo, &atkSide, v19, v20, v21);
  v28 = (int64_t)v10;
  if ( v10 )
  {
    v10 = (System_String_o *)sub_1BE4C08(v10, v6->obj.klass->_1.element_class);
    if ( !v10 )
      goto LABEL_24;
  }
  if ( v6->max_length <= 1 )
    goto LABEL_23;
  v6->m_Items[1] = (Il2CppObject *)v28;
  sub_1BE4A70((PartyOrganizationUtility_o *)&v6->m_Items[1], v28, v22, v23, v24, v25, v26, v27);
  atkClass = this->fields.atkClass;
  v10 = (System_String_o *)j_il2cpp_value_box_0(int_TypeInfo, &atkClass, v29, v30, v31);
  v38 = (int64_t)v10;
  if ( v10 )
  {
    v10 = (System_String_o *)sub_1BE4C08(v10, v6->obj.klass->_1.element_class);
    if ( !v10 )
      goto LABEL_24;
  }
  if ( v6->max_length <= 2 )
    goto LABEL_23;
  v6->m_Items[2] = (Il2CppObject *)v38;
  sub_1BE4A70((PartyOrganizationUtility_o *)&v6->m_Items[2], v38, v32, v33, v34, v35, v36, v37);
  defClass = this->fields.defClass;
  v10 = (System_String_o *)j_il2cpp_value_box_0(int_TypeInfo, &defClass, v39, v40, v41);
  v48 = (int64_t)v10;
  if ( v10 )
  {
    v10 = (System_String_o *)sub_1BE4C08(v10, v6->obj.klass->_1.element_class);
    if ( !v10 )
      goto LABEL_24;
  }
  if ( v6->max_length <= 3 )
    goto LABEL_23;
  v6->m_Items[3] = (Il2CppObject *)v48;
  sub_1BE4A70((PartyOrganizationUtility_o *)&v6->m_Items[3], v48, v42, v43, v44, v45, v46, v47);
  damageRate = this->fields.damageRate;
  v10 = (System_String_o *)j_il2cpp_value_box_0(int_TypeInfo, &damageRate, v49, v50, v51);
  v58 = (int64_t)v10;
  if ( v10 )
  {
    v10 = (System_String_o *)sub_1BE4C08(v10, v6->obj.klass->_1.element_class);
    if ( !v10 )
      goto LABEL_24;
  }
  if ( v6->max_length <= 4 )
    goto LABEL_23;
  v6->m_Items[4] = (Il2CppObject *)v58;
  sub_1BE4A70((PartyOrganizationUtility_o *)&v6->m_Items[4], v58, v52, v53, v54, v55, v56, v57);
  type = this->fields.type;
  v69.klass = (System_Enum_c *)ClassRelationOverwriteEntity_TYPE_TypeInfo;
  v69.monitor = (void *)-1LL;
  v70 = type;
  v10 = System_Enum__ToString(&v69, 0LL);
  v66 = (int64_t)v10;
  if ( v10 )
  {
    v10 = (System_String_o *)sub_1BE4C08(v10, v6->obj.klass->_1.element_class);
    if ( !v10 )
    {
LABEL_24:
      v68 = sub_1BE4D4C(v10);
      sub_1BE4BF4(v68, 0LL);
    }
  }
  if ( v6->max_length <= 5 )
LABEL_23:
    sub_1BE4D30(v10, v11);
  v6->m_Items[5] = (Il2CppObject *)v66;
  sub_1BE4A70((PartyOrganizationUtility_o *)&v6->m_Items[5], v66, v60, v61, v62, v63, v64, v65);
  return System_String__Format_62713316((System_String_o *)StringLiteral_20487/*"id:{0} side:{1} atk:{2} def:{3} rate:{4} type:{5}"*/, v6, 0LL);
}


float __fastcall ClassRelationOverwriteEntity__getRate(ClassRelationOverwriteEntity_o *this, const MethodInfo *method)
{
  return (float)this->fields.damageRate / 1000.0;
}