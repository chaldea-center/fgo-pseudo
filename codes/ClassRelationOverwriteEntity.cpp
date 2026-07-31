void ClassRelationOverwriteEntity___ctor(ClassRelationOverwriteEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5938403 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_string___ctor__);
    byte_5938403 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3EDADE8 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *ClassRelationOverwriteEntity__CreatePK(
        int32_t id,
        int32_t atkSide,
        int32_t atkClass,
        int32_t defClass,
        const MethodInfo *method)
{
  if ( (byte_5938401 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_CreateMultiplePK_int__int__int__int___);
    byte_5938401 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int__int_(
           id,
           atkSide,
           atkClass,
           defClass,
           (const MethodInfo_38218C0 *)Method_DataEntityBase_CreateMultiplePK_int__int__int__int___);
}


System_String_o *ClassRelationOverwriteEntity__CreatePrimaryKey(
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


System_String_o *ClassRelationOverwriteEntity__getFieldsLogString(
        ClassRelationOverwriteEntity_o *this,
        const MethodInfo *method)
{
  System_Object_array *v3; // x19
  System_String_o *v4; // x0
  __int64 v5; // x1
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  Il2CppObject *v12; // x21
  __int64 v13; // x1
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  Il2CppObject *v20; // x21
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  Il2CppObject *v27; // x21
  System_String_o *v28; // x2
  System_String_o *v29; // x3
  int32_t v30; // w4
  int32_t v31; // w5
  bool v32; // w6
  bool v33; // w7
  Il2CppObject *v34; // x21
  System_String_o *v35; // x2
  System_String_o *v36; // x3
  int32_t v37; // w4
  int32_t v38; // w5
  bool v39; // w6
  bool v40; // w7
  Il2CppObject *v41; // x21
  int32_t type; // w9
  System_String_o *v43; // x2
  System_String_o *v44; // x3
  int32_t v45; // w4
  int32_t v46; // w5
  bool v47; // w6
  bool v48; // w7
  Il2CppObject *v49; // x20
  __int64 v51; // x0
  System_Enum_o v52; // [xsp+8h] [xbp-58h] BYREF
  int32_t v53; // [xsp+18h] [xbp-48h]
  int32_t damageRate; // [xsp+24h] [xbp-3Ch] BYREF
  int32_t defClass; // [xsp+28h] [xbp-38h] BYREF
  int32_t atkClass; // [xsp+2Ch] [xbp-34h] BYREF
  int32_t atkSide; // [xsp+38h] [xbp-28h] BYREF
  int32_t id; // [xsp+3Ch] [xbp-24h] BYREF

  if ( (byte_5938402 & 1) == 0 )
  {
    sub_21FFC50(&object___TypeInfo);
    sub_21FFC50(&ClassRelationOverwriteEntity_TYPE_TypeInfo);
    sub_21FFC50(&StringLiteral_21197/*"id:{0} side:{1} atk:{2} def:{3} rate:{4} type:{5}"*/);
    byte_5938402 = 1;
  }
  v3 = (System_Object_array *)sub_21FFD10(object___TypeInfo, 6);
  id = this->fields.id;
  v4 = (System_String_o *)j_il2cpp_value_box_0(qword_594C070, &id);
  if ( !v3 )
    sub_21FFECC(v4, v5);
  v12 = (Il2CppObject *)v4;
  if ( v4 )
  {
    v4 = (System_String_o *)sub_21FFDA4(v4, v3->obj.klass->_1.element_class);
    if ( !v4 )
      goto LABEL_24;
  }
  if ( !LODWORD(v3->max_length) )
    goto LABEL_23;
  v3->m_Items[0] = v12;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)v3->m_Items, (int32_t)v12, v6, v7, v8, v9, v10, v11);
  atkSide = this->fields.atkSide;
  v4 = (System_String_o *)j_il2cpp_value_box_0(qword_594C070, &atkSide);
  v20 = (Il2CppObject *)v4;
  if ( v4 )
  {
    v4 = (System_String_o *)sub_21FFDA4(v4, v3->obj.klass->_1.element_class);
    if ( !v4 )
      goto LABEL_24;
  }
  if ( (v3->max_length & 0xFFFFFFFE) == 0 )
    goto LABEL_23;
  v3->m_Items[1] = v20;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v3->m_Items[1], (int32_t)v20, v14, v15, v16, v17, v18, v19);
  atkClass = this->fields.atkClass;
  v4 = (System_String_o *)j_il2cpp_value_box_0(qword_594C070, &atkClass);
  v27 = (Il2CppObject *)v4;
  if ( v4 )
  {
    v4 = (System_String_o *)sub_21FFDA4(v4, v3->obj.klass->_1.element_class);
    if ( !v4 )
      goto LABEL_24;
  }
  if ( LODWORD(v3->max_length) <= 2 )
    goto LABEL_23;
  v3->m_Items[2] = v27;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v3->m_Items[2], (int32_t)v27, v21, v22, v23, v24, v25, v26);
  defClass = this->fields.defClass;
  v4 = (System_String_o *)j_il2cpp_value_box_0(qword_594C070, &defClass);
  v34 = (Il2CppObject *)v4;
  if ( v4 )
  {
    v4 = (System_String_o *)sub_21FFDA4(v4, v3->obj.klass->_1.element_class);
    if ( !v4 )
      goto LABEL_24;
  }
  if ( (v3->max_length & 0xFFFFFFFC) == 0 )
    goto LABEL_23;
  v3->m_Items[3] = v34;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v3->m_Items[3], (int32_t)v34, v28, v29, v30, v31, v32, v33);
  damageRate = this->fields.damageRate;
  v4 = (System_String_o *)j_il2cpp_value_box_0(qword_594C070, &damageRate);
  v41 = (Il2CppObject *)v4;
  if ( v4 )
  {
    v4 = (System_String_o *)sub_21FFDA4(v4, v3->obj.klass->_1.element_class);
    if ( !v4 )
      goto LABEL_24;
  }
  if ( LODWORD(v3->max_length) <= 4 )
    goto LABEL_23;
  v3->m_Items[4] = v41;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v3->m_Items[4], (int32_t)v41, v35, v36, v37, v38, v39, v40);
  type = this->fields.type;
  v52.klass = (System_Enum_c *)ClassRelationOverwriteEntity_TYPE_TypeInfo;
  v52.monitor = (void *)-1LL;
  v53 = type;
  v4 = System_Enum__ToString(&v52, 0);
  v49 = (Il2CppObject *)v4;
  if ( v4 )
  {
    v4 = (System_String_o *)sub_21FFDA4(v4, v3->obj.klass->_1.element_class);
    if ( !v4 )
    {
LABEL_24:
      v51 = sub_21FFEF0(v4, v13);
      sub_21FFD90(v51, 0);
    }
  }
  if ( LODWORD(v3->max_length) <= 5 )
LABEL_23:
    sub_21FFED4(v4);
  v3->m_Items[5] = v49;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v3->m_Items[5], (int32_t)v49, v43, v44, v45, v46, v47, v48);
  return System_String__Format_75484712((System_String_o *)StringLiteral_21197/*"id:{0} side:{1} atk:{2} def:{3} rate:{4} type:{5}"*/, v3, 0);
}


float ClassRelationOverwriteEntity__getRate(ClassRelationOverwriteEntity_o *this, const MethodInfo *method)
{
  return (float)this->fields.damageRate / 1000.0;
}