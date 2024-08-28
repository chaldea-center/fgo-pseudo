void __fastcall ClassRelationOverwriteEntity___ctor(ClassRelationOverwriteEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4A1F87F & 1) == 0 )
  {
    sub_1B715CC(&Method_DataEntityBase_string___ctor__, method);
    byte_4A1F87F = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_30F85D8 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall ClassRelationOverwriteEntity__CreatePK(
        int32_t id,
        int32_t atkSide,
        int32_t atkClass,
        int32_t defClass,
        const MethodInfo *method)
{
  if ( (byte_4A1F87D & 1) == 0 )
  {
    sub_1B715CC(&Method_DataEntityBase_CreateMultiplePK_int__int__int__int___, *(_QWORD *)&atkSide);
    byte_4A1F87D = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int__int_(
           id,
           atkSide,
           atkClass,
           defClass,
           (const MethodInfo_2E59F5C *)Method_DataEntityBase_CreateMultiplePK_int__int__int__int___);
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
  int32_t v12; // w2
  int32_t v13; // w3
  Il2CppObject *v14; // x21
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  int32_t v18; // w2
  int32_t v19; // w3
  Il2CppObject *v20; // x21
  __int64 v21; // x2
  __int64 v22; // x3
  __int64 v23; // x4
  int32_t v24; // w2
  int32_t v25; // w3
  Il2CppObject *v26; // x21
  __int64 v27; // x2
  __int64 v28; // x3
  __int64 v29; // x4
  int32_t v30; // w2
  int32_t v31; // w3
  Il2CppObject *v32; // x21
  __int64 v33; // x2
  __int64 v34; // x3
  __int64 v35; // x4
  int32_t v36; // w2
  int32_t v37; // w3
  Il2CppObject *v38; // x21
  int32_t type; // w9
  int32_t v40; // w2
  int32_t v41; // w3
  Il2CppObject *v42; // x20
  __int64 v44; // x0
  System_Enum_o v45; // [xsp+8h] [xbp-58h] BYREF
  int32_t v46; // [xsp+18h] [xbp-48h]
  int32_t damageRate; // [xsp+24h] [xbp-3Ch] BYREF
  int32_t defClass; // [xsp+28h] [xbp-38h] BYREF
  int32_t atkClass; // [xsp+2Ch] [xbp-34h] BYREF
  int32_t atkSide; // [xsp+38h] [xbp-28h] BYREF
  int32_t id; // [xsp+3Ch] [xbp-24h] BYREF

  if ( (byte_4A1F87E & 1) == 0 )
  {
    sub_1B715CC(&int_TypeInfo, method);
    sub_1B715CC(&object___TypeInfo, v3);
    sub_1B715CC(&ClassRelationOverwriteEntity_TYPE_TypeInfo, v4);
    sub_1B715CC(&StringLiteral_20153/*"id:{0} side:{1} atk:{2} def:{3} rate:{4} type:{5}"*/, v5);
    byte_4A1F87E = 1;
  }
  v6 = (System_Object_array *)sub_1B71674(object___TypeInfo, 6LL);
  id = this->fields.id;
  v10 = (System_String_o *)j_il2cpp_value_box_0(int_TypeInfo, &id, v7, v8, v9);
  if ( !v6 )
    sub_1B71828(v10, v11);
  v14 = (Il2CppObject *)v10;
  if ( v10 )
  {
    v10 = (System_String_o *)sub_1B71708(v10, v6->obj.klass->_1.element_class);
    if ( !v10 )
      goto LABEL_24;
  }
  if ( !v6->max_length )
    goto LABEL_23;
  v6->m_Items[0] = v14;
  sub_1B71570((ServantStatusBattleListViewItem_o *)v6->m_Items, (int32_t)v14, v12, v13);
  atkSide = this->fields.atkSide;
  v10 = (System_String_o *)j_il2cpp_value_box_0(int_TypeInfo, &atkSide, v15, v16, v17);
  v20 = (Il2CppObject *)v10;
  if ( v10 )
  {
    v10 = (System_String_o *)sub_1B71708(v10, v6->obj.klass->_1.element_class);
    if ( !v10 )
      goto LABEL_24;
  }
  if ( v6->max_length <= 1 )
    goto LABEL_23;
  v6->m_Items[1] = v20;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v6->m_Items[1], (int32_t)v20, v18, v19);
  atkClass = this->fields.atkClass;
  v10 = (System_String_o *)j_il2cpp_value_box_0(int_TypeInfo, &atkClass, v21, v22, v23);
  v26 = (Il2CppObject *)v10;
  if ( v10 )
  {
    v10 = (System_String_o *)sub_1B71708(v10, v6->obj.klass->_1.element_class);
    if ( !v10 )
      goto LABEL_24;
  }
  if ( v6->max_length <= 2 )
    goto LABEL_23;
  v6->m_Items[2] = v26;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v6->m_Items[2], (int32_t)v26, v24, v25);
  defClass = this->fields.defClass;
  v10 = (System_String_o *)j_il2cpp_value_box_0(int_TypeInfo, &defClass, v27, v28, v29);
  v32 = (Il2CppObject *)v10;
  if ( v10 )
  {
    v10 = (System_String_o *)sub_1B71708(v10, v6->obj.klass->_1.element_class);
    if ( !v10 )
      goto LABEL_24;
  }
  if ( v6->max_length <= 3 )
    goto LABEL_23;
  v6->m_Items[3] = v32;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v6->m_Items[3], (int32_t)v32, v30, v31);
  damageRate = this->fields.damageRate;
  v10 = (System_String_o *)j_il2cpp_value_box_0(int_TypeInfo, &damageRate, v33, v34, v35);
  v38 = (Il2CppObject *)v10;
  if ( v10 )
  {
    v10 = (System_String_o *)sub_1B71708(v10, v6->obj.klass->_1.element_class);
    if ( !v10 )
      goto LABEL_24;
  }
  if ( v6->max_length <= 4 )
    goto LABEL_23;
  v6->m_Items[4] = v38;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v6->m_Items[4], (int32_t)v38, v36, v37);
  type = this->fields.type;
  v45.klass = (System_Enum_c *)ClassRelationOverwriteEntity_TYPE_TypeInfo;
  v45.monitor = (void *)-1LL;
  v46 = type;
  v10 = System_Enum__ToString(&v45, 0LL);
  v42 = (Il2CppObject *)v10;
  if ( v10 )
  {
    v10 = (System_String_o *)sub_1B71708(v10, v6->obj.klass->_1.element_class);
    if ( !v10 )
    {
LABEL_24:
      v44 = sub_1B7184C(v10);
      sub_1B716F4(v44, 0LL);
    }
  }
  if ( v6->max_length <= 5 )
LABEL_23:
    sub_1B71830(v10, v11);
  v6->m_Items[5] = v42;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v6->m_Items[5], (int32_t)v42, v40, v41);
  return System_String__Format_61520012((System_String_o *)StringLiteral_20153/*"id:{0} side:{1} atk:{2} def:{3} rate:{4} type:{5}"*/, v6, 0LL);
}


float __fastcall ClassRelationOverwriteEntity__getRate(ClassRelationOverwriteEntity_o *this, const MethodInfo *method)
{
  return (float)this->fields.damageRate / 1000.0;
}