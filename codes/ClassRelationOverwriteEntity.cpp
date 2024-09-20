void __fastcall ClassRelationOverwriteEntity___ctor(ClassRelationOverwriteEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4A5AF0A & 1) == 0 )
  {
    sub_1B885B0(&Method_DataEntityBase_string___ctor__);
    byte_4A5AF0A = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_311D7AC *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall ClassRelationOverwriteEntity__CreatePK(
        int32_t id,
        int32_t atkSide,
        int32_t atkClass,
        int32_t defClass,
        const MethodInfo *method)
{
  if ( (byte_4A5AF08 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataEntityBase_CreateMultiplePK_int__int__int__int___);
    byte_4A5AF08 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int__int_(
           id,
           atkSide,
           atkClass,
           defClass,
           (const MethodInfo_2E7E47C *)Method_DataEntityBase_CreateMultiplePK_int__int__int__int___);
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
  int32_t v9; // w2
  int32_t v10; // w3
  Il2CppObject *v11; // x21
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  int32_t v15; // w2
  int32_t v16; // w3
  Il2CppObject *v17; // x21
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  int32_t v21; // w2
  int32_t v22; // w3
  Il2CppObject *v23; // x21
  __int64 v24; // x2
  __int64 v25; // x3
  __int64 v26; // x4
  int32_t v27; // w2
  int32_t v28; // w3
  Il2CppObject *v29; // x21
  __int64 v30; // x2
  __int64 v31; // x3
  __int64 v32; // x4
  int32_t v33; // w2
  int32_t v34; // w3
  Il2CppObject *v35; // x21
  int32_t type; // w9
  int32_t v37; // w2
  int32_t v38; // w3
  Il2CppObject *v39; // x20
  __int64 v41; // x0
  System_Enum_o v42; // [xsp+8h] [xbp-58h] BYREF
  int32_t v43; // [xsp+18h] [xbp-48h]
  int32_t damageRate; // [xsp+24h] [xbp-3Ch] BYREF
  int32_t defClass; // [xsp+28h] [xbp-38h] BYREF
  int32_t atkClass; // [xsp+2Ch] [xbp-34h] BYREF
  int32_t atkSide; // [xsp+38h] [xbp-28h] BYREF
  int32_t id; // [xsp+3Ch] [xbp-24h] BYREF

  if ( (byte_4A5AF09 & 1) == 0 )
  {
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&object___TypeInfo);
    sub_1B885B0(&ClassRelationOverwriteEntity_TYPE_TypeInfo);
    sub_1B885B0(&StringLiteral_20205/*"id:{0} side:{1} atk:{2} def:{3} rate:{4} type:{5}"*/);
    byte_4A5AF09 = 1;
  }
  v3 = (System_Object_array *)sub_1B88658(object___TypeInfo, 6LL);
  id = this->fields.id;
  v7 = (System_String_o *)j_il2cpp_value_box_0(int_TypeInfo, &id, v4, v5, v6);
  if ( !v3 )
    sub_1B8880C(v7, v8);
  v11 = (Il2CppObject *)v7;
  if ( v7 )
  {
    v7 = (System_String_o *)sub_1B886EC(v7, v3->obj.klass->_1.element_class);
    if ( !v7 )
      goto LABEL_24;
  }
  if ( !v3->max_length )
    goto LABEL_23;
  v3->m_Items[0] = v11;
  sub_1B88554((ServantStatusBattleListViewItem_o *)v3->m_Items, (int32_t)v11, v9, v10);
  atkSide = this->fields.atkSide;
  v7 = (System_String_o *)j_il2cpp_value_box_0(int_TypeInfo, &atkSide, v12, v13, v14);
  v17 = (Il2CppObject *)v7;
  if ( v7 )
  {
    v7 = (System_String_o *)sub_1B886EC(v7, v3->obj.klass->_1.element_class);
    if ( !v7 )
      goto LABEL_24;
  }
  if ( v3->max_length <= 1 )
    goto LABEL_23;
  v3->m_Items[1] = v17;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v3->m_Items[1], (int32_t)v17, v15, v16);
  atkClass = this->fields.atkClass;
  v7 = (System_String_o *)j_il2cpp_value_box_0(int_TypeInfo, &atkClass, v18, v19, v20);
  v23 = (Il2CppObject *)v7;
  if ( v7 )
  {
    v7 = (System_String_o *)sub_1B886EC(v7, v3->obj.klass->_1.element_class);
    if ( !v7 )
      goto LABEL_24;
  }
  if ( v3->max_length <= 2 )
    goto LABEL_23;
  v3->m_Items[2] = v23;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v3->m_Items[2], (int32_t)v23, v21, v22);
  defClass = this->fields.defClass;
  v7 = (System_String_o *)j_il2cpp_value_box_0(int_TypeInfo, &defClass, v24, v25, v26);
  v29 = (Il2CppObject *)v7;
  if ( v7 )
  {
    v7 = (System_String_o *)sub_1B886EC(v7, v3->obj.klass->_1.element_class);
    if ( !v7 )
      goto LABEL_24;
  }
  if ( v3->max_length <= 3 )
    goto LABEL_23;
  v3->m_Items[3] = v29;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v3->m_Items[3], (int32_t)v29, v27, v28);
  damageRate = this->fields.damageRate;
  v7 = (System_String_o *)j_il2cpp_value_box_0(int_TypeInfo, &damageRate, v30, v31, v32);
  v35 = (Il2CppObject *)v7;
  if ( v7 )
  {
    v7 = (System_String_o *)sub_1B886EC(v7, v3->obj.klass->_1.element_class);
    if ( !v7 )
      goto LABEL_24;
  }
  if ( v3->max_length <= 4 )
    goto LABEL_23;
  v3->m_Items[4] = v35;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v3->m_Items[4], (int32_t)v35, v33, v34);
  type = this->fields.type;
  v42.klass = (System_Enum_c *)ClassRelationOverwriteEntity_TYPE_TypeInfo;
  v42.monitor = (void *)-1LL;
  v43 = type;
  v7 = System_Enum__ToString(&v42, 0LL);
  v39 = (Il2CppObject *)v7;
  if ( v7 )
  {
    v7 = (System_String_o *)sub_1B886EC(v7, v3->obj.klass->_1.element_class);
    if ( !v7 )
    {
LABEL_24:
      v41 = sub_1B88830(v7);
      sub_1B886D8(v41, 0LL);
    }
  }
  if ( v3->max_length <= 5 )
LABEL_23:
    sub_1B88814(v7, v8);
  v3->m_Items[5] = v39;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v3->m_Items[5], (int32_t)v39, v37, v38);
  return System_String__Format_61721540((System_String_o *)StringLiteral_20205/*"id:{0} side:{1} atk:{2} def:{3} rate:{4} type:{5}"*/, v3, 0LL);
}


float __fastcall ClassRelationOverwriteEntity__getRate(ClassRelationOverwriteEntity_o *this, const MethodInfo *method)
{
  return (float)this->fields.damageRate / 1000.0;
}