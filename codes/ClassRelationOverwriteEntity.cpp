void __fastcall ClassRelationOverwriteEntity___ctor(ClassRelationOverwriteEntity_o *this, const MethodInfo *method)
{
  if ( (byte_42B07A6 & 1) == 0 )
  {
    sub_B52984(&Method_DataEntityBase_string___ctor__);
    byte_42B07A6 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_23E2224 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall ClassRelationOverwriteEntity__CreatePK(
        int32_t id,
        int32_t atkSide,
        int32_t atkClass,
        int32_t defClass,
        const MethodInfo *method)
{
  if ( (byte_42B07A4 & 1) == 0 )
  {
    sub_B52984(&Method_DataEntityBase_CreateMultiplePK_int__int__int__int___);
    byte_42B07A4 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int__int_(
           id,
           atkSide,
           atkClass,
           defClass,
           (const MethodInfo_1A4E810 *)Method_DataEntityBase_CreateMultiplePK_int__int__int__int___);
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
  __int64 v4; // x0
  __int64 v5; // x1
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  System_Int32_array **v12; // x21
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  System_Int32_array **v19; // x21
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  System_Int32_array **v26; // x21
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  System_Int32_array **v33; // x21
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  System_Int32_array **v40; // x21
  __int64 v41; // x21
  System_Int32_array **v42; // x20
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  __int64 v50; // x0
  __int64 v51; // x0
  int32_t damageRate; // [xsp+8h] [xbp-38h] BYREF
  int32_t defClass; // [xsp+Ch] [xbp-34h] BYREF
  int32_t atkClass; // [xsp+10h] [xbp-30h] BYREF
  int32_t atkSide; // [xsp+14h] [xbp-2Ch] BYREF
  int32_t id; // [xsp+18h] [xbp-28h] BYREF
  int32_t type; // [xsp+1Ch] [xbp-24h] BYREF

  if ( (byte_42B07A5 & 1) == 0 )
  {
    sub_B52984(&int_TypeInfo);
    sub_B52984(&object___TypeInfo);
    sub_B52984(&ClassRelationOverwriteEntity_TYPE_TypeInfo);
    sub_B52984(&StringLiteral_19532/*"id:{0} side:{1} atk:{2} def:{3} rate:{4} type:{5}"*/);
    byte_42B07A5 = 1;
  }
  type = 0;
  v3 = (System_Object_array *)sub_B5299C(object___TypeInfo, 6LL);
  id = this->fields.id;
  v4 = j_il2cpp_value_box_0(int_TypeInfo, &id);
  if ( !v3 )
    goto LABEL_26;
  v12 = (System_Int32_array **)v4;
  if ( v4 )
  {
    v4 = sub_B52A44(v4, v3->obj.klass->_1.element_class);
    if ( !v4 )
      goto LABEL_25;
  }
  if ( !v3->max_length )
    goto LABEL_24;
  v3->m_Items[0] = (Il2CppObject *)v12;
  sub_B52920((BattleServantConfConponent_o *)v3->m_Items, v12, v6, v7, v8, v9, v10, v11);
  atkSide = this->fields.atkSide;
  v4 = j_il2cpp_value_box_0(int_TypeInfo, &atkSide);
  v19 = (System_Int32_array **)v4;
  if ( v4 )
  {
    v4 = sub_B52A44(v4, v3->obj.klass->_1.element_class);
    if ( !v4 )
      goto LABEL_25;
  }
  if ( v3->max_length <= 1 )
    goto LABEL_24;
  v3->m_Items[1] = (Il2CppObject *)v19;
  sub_B52920((BattleServantConfConponent_o *)&v3->m_Items[1], v19, v13, v14, v15, v16, v17, v18);
  atkClass = this->fields.atkClass;
  v4 = j_il2cpp_value_box_0(int_TypeInfo, &atkClass);
  v26 = (System_Int32_array **)v4;
  if ( v4 )
  {
    v4 = sub_B52A44(v4, v3->obj.klass->_1.element_class);
    if ( !v4 )
      goto LABEL_25;
  }
  if ( v3->max_length <= 2 )
    goto LABEL_24;
  v3->m_Items[2] = (Il2CppObject *)v26;
  sub_B52920((BattleServantConfConponent_o *)&v3->m_Items[2], v26, v20, v21, v22, v23, v24, v25);
  defClass = this->fields.defClass;
  v4 = j_il2cpp_value_box_0(int_TypeInfo, &defClass);
  v33 = (System_Int32_array **)v4;
  if ( v4 )
  {
    v4 = sub_B52A44(v4, v3->obj.klass->_1.element_class);
    if ( !v4 )
      goto LABEL_25;
  }
  if ( v3->max_length <= 3 )
    goto LABEL_24;
  v3->m_Items[3] = (Il2CppObject *)v33;
  sub_B52920((BattleServantConfConponent_o *)&v3->m_Items[3], v33, v27, v28, v29, v30, v31, v32);
  damageRate = this->fields.damageRate;
  v4 = j_il2cpp_value_box_0(int_TypeInfo, &damageRate);
  v40 = (System_Int32_array **)v4;
  if ( v4 )
  {
    v4 = sub_B52A44(v4, v3->obj.klass->_1.element_class);
    if ( !v4 )
    {
LABEL_25:
      v51 = sub_B52A7C(v4);
      sub_B52A28(v51, 0LL);
    }
  }
  if ( v3->max_length <= 4 )
    goto LABEL_24;
  v3->m_Items[4] = (Il2CppObject *)v40;
  sub_B52920((BattleServantConfConponent_o *)&v3->m_Items[4], v40, v34, v35, v36, v37, v38, v39);
  type = this->fields.type;
  v4 = j_il2cpp_value_box_0(ClassRelationOverwriteEntity_TYPE_TypeInfo, &type);
  if ( !v4 )
LABEL_26:
    sub_B52A5C(v4, v5);
  v41 = v4;
  v42 = (System_Int32_array **)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v4 + 360LL))(
                                 v4,
                                 *(_QWORD *)(*(_QWORD *)v4 + 368LL));
  v4 = j_il2cpp_object_unbox_0(v41);
  type = *(_DWORD *)v4;
  if ( v42 )
  {
    v4 = sub_B52A44(v42, v3->obj.klass->_1.element_class);
    if ( !v4 )
      goto LABEL_25;
  }
  if ( v3->max_length <= 5 )
  {
LABEL_24:
    v50 = sub_B52A88(v4);
    sub_B52A28(v50, 0LL);
  }
  v3->m_Items[5] = (Il2CppObject *)v42;
  sub_B52920((BattleServantConfConponent_o *)&v3->m_Items[5], v42, v43, v44, v45, v46, v47, v48);
  return System_String__Format_44647040((System_String_o *)StringLiteral_19532/*"id:{0} side:{1} atk:{2} def:{3} rate:{4} type:{5}"*/, v3, 0LL);
}


float __fastcall ClassRelationOverwriteEntity__getRate(ClassRelationOverwriteEntity_o *this, const MethodInfo *method)
{
  return (float)this->fields.damageRate / 1000.0;
}