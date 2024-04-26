void __fastcall ClassRelationOverwriteEntity___ctor(ClassRelationOverwriteEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4353BDF & 1) == 0 )
  {
    sub_B70694(&Method_DataEntityBase_string___ctor__);
    byte_4353BDF = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_21C038C *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall ClassRelationOverwriteEntity__CreatePK(
        int32_t id,
        int32_t atkSide,
        int32_t atkClass,
        int32_t defClass,
        const MethodInfo *method)
{
  if ( (byte_4353BDD & 1) == 0 )
  {
    sub_B70694(&Method_DataEntityBase_CreateMultiplePK_int__int__int__int___);
    byte_4353BDD = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int__int_(
           id,
           atkSide,
           atkClass,
           defClass,
           (const MethodInfo_1CA2C2C *)Method_DataEntityBase_CreateMultiplePK_int__int__int__int___);
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
  __int64 v5; // x0
  __int64 v6; // x1
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  System_Int32_array **v13; // x21
  __int64 v14; // x2
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  System_Int32_array **v21; // x21
  __int64 v22; // x2
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  System_Int32_array **v29; // x21
  __int64 v30; // x2
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  System_Int32_array **v37; // x21
  __int64 v38; // x2
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  System_Int32_array **v45; // x21
  __int64 v46; // x2
  __int64 v47; // x21
  System_Int32_array **v48; // x20
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  __int64 v56; // x0
  __int64 v57; // x0
  int32_t damageRate; // [xsp+8h] [xbp-38h] BYREF
  int32_t defClass; // [xsp+Ch] [xbp-34h] BYREF
  int32_t atkClass; // [xsp+10h] [xbp-30h] BYREF
  int32_t atkSide; // [xsp+14h] [xbp-2Ch] BYREF
  int32_t id; // [xsp+18h] [xbp-28h] BYREF
  int32_t type; // [xsp+1Ch] [xbp-24h] BYREF

  if ( (byte_4353BDE & 1) == 0 )
  {
    sub_B70694(&int_TypeInfo);
    sub_B70694(&object___TypeInfo);
    sub_B70694(&ClassRelationOverwriteEntity_TYPE_TypeInfo);
    sub_B70694(&StringLiteral_19689/*"id:{0} side:{1} atk:{2} def:{3} rate:{4} type:{5}"*/);
    byte_4353BDE = 1;
  }
  type = 0;
  v3 = (System_Object_array *)sub_B706AC(object___TypeInfo, 6LL);
  id = this->fields.id;
  v5 = j_il2cpp_value_box_0(int_TypeInfo, &id, v4);
  if ( !v3 )
    goto LABEL_26;
  v13 = (System_Int32_array **)v5;
  if ( v5 )
  {
    v5 = sub_B70754(v5, v3->obj.klass->_1.element_class);
    if ( !v5 )
      goto LABEL_25;
  }
  if ( !v3->max_length )
    goto LABEL_24;
  v3->m_Items[0] = (Il2CppObject *)v13;
  sub_B70630((BattleServantConfConponent_o *)v3->m_Items, v13, v7, v8, v9, v10, v11, v12);
  atkSide = this->fields.atkSide;
  v5 = j_il2cpp_value_box_0(int_TypeInfo, &atkSide, v14);
  v21 = (System_Int32_array **)v5;
  if ( v5 )
  {
    v5 = sub_B70754(v5, v3->obj.klass->_1.element_class);
    if ( !v5 )
      goto LABEL_25;
  }
  if ( v3->max_length <= 1 )
    goto LABEL_24;
  v3->m_Items[1] = (Il2CppObject *)v21;
  sub_B70630((BattleServantConfConponent_o *)&v3->m_Items[1], v21, v15, v16, v17, v18, v19, v20);
  atkClass = this->fields.atkClass;
  v5 = j_il2cpp_value_box_0(int_TypeInfo, &atkClass, v22);
  v29 = (System_Int32_array **)v5;
  if ( v5 )
  {
    v5 = sub_B70754(v5, v3->obj.klass->_1.element_class);
    if ( !v5 )
      goto LABEL_25;
  }
  if ( v3->max_length <= 2 )
    goto LABEL_24;
  v3->m_Items[2] = (Il2CppObject *)v29;
  sub_B70630((BattleServantConfConponent_o *)&v3->m_Items[2], v29, v23, v24, v25, v26, v27, v28);
  defClass = this->fields.defClass;
  v5 = j_il2cpp_value_box_0(int_TypeInfo, &defClass, v30);
  v37 = (System_Int32_array **)v5;
  if ( v5 )
  {
    v5 = sub_B70754(v5, v3->obj.klass->_1.element_class);
    if ( !v5 )
      goto LABEL_25;
  }
  if ( v3->max_length <= 3 )
    goto LABEL_24;
  v3->m_Items[3] = (Il2CppObject *)v37;
  sub_B70630((BattleServantConfConponent_o *)&v3->m_Items[3], v37, v31, v32, v33, v34, v35, v36);
  damageRate = this->fields.damageRate;
  v5 = j_il2cpp_value_box_0(int_TypeInfo, &damageRate, v38);
  v45 = (System_Int32_array **)v5;
  if ( v5 )
  {
    v5 = sub_B70754(v5, v3->obj.klass->_1.element_class);
    if ( !v5 )
    {
LABEL_25:
      v57 = sub_B7078C(v5);
      sub_B70738(v57, 0LL);
    }
  }
  if ( v3->max_length <= 4 )
    goto LABEL_24;
  v3->m_Items[4] = (Il2CppObject *)v45;
  sub_B70630((BattleServantConfConponent_o *)&v3->m_Items[4], v45, v39, v40, v41, v42, v43, v44);
  type = this->fields.type;
  v5 = j_il2cpp_value_box_0(ClassRelationOverwriteEntity_TYPE_TypeInfo, &type, v46);
  if ( !v5 )
LABEL_26:
    sub_B7076C(v5, v6);
  v47 = v5;
  v48 = (System_Int32_array **)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v5 + 360LL))(
                                 v5,
                                 *(_QWORD *)(*(_QWORD *)v5 + 368LL));
  v5 = j_il2cpp_object_unbox_0(v47);
  type = *(_DWORD *)v5;
  if ( v48 )
  {
    v5 = sub_B70754(v48, v3->obj.klass->_1.element_class);
    if ( !v5 )
      goto LABEL_25;
  }
  if ( v3->max_length <= 5 )
  {
LABEL_24:
    v56 = sub_B70798(v5);
    sub_B70738(v56, 0LL);
  }
  v3->m_Items[5] = (Il2CppObject *)v48;
  sub_B70630((BattleServantConfConponent_o *)&v3->m_Items[5], v48, v49, v50, v51, v52, v53, v54);
  return System_String__Format_44836892((System_String_o *)StringLiteral_19689/*"id:{0} side:{1} atk:{2} def:{3} rate:{4} type:{5}"*/, v3, 0LL);
}


float __fastcall ClassRelationOverwriteEntity__getRate(ClassRelationOverwriteEntity_o *this, const MethodInfo *method)
{
  return (float)this->fields.damageRate / 1000.0;
}