void __fastcall ServantScriptEntity___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v19; // x1
  struct ServantScriptEntity_StaticFields *v20; // x0
  System_Int32_array **v21; // x1
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  struct ServantScriptEntity_StaticFields *v28; // x0
  System_Int32_array **v29; // x1
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  struct ServantScriptEntity_StaticFields *v36; // x0
  System_Int32_array **v37; // x1
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  struct ServantScriptEntity_StaticFields *v44; // x0
  System_Int32_array **v45; // x1
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  struct ServantScriptEntity_StaticFields *v52; // x0
  System_Int32_array **v53; // x1
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  struct ServantScriptEntity_StaticFields *v60; // x0
  System_Int32_array **v61; // x1
  System_String_array **v62; // x2
  System_String_array **v63; // x3
  System_Boolean_array **v64; // x4
  System_Int32_array **v65; // x5
  System_Int32_array *v66; // x6
  System_Int32_array *v67; // x7
  struct ServantScriptEntity_StaticFields *v68; // x0
  System_Int32_array **v69; // x1
  System_String_array **v70; // x2
  System_String_array **v71; // x3
  System_Boolean_array **v72; // x4
  System_Int32_array **v73; // x5
  System_Int32_array *v74; // x6
  System_Int32_array *v75; // x7
  struct ServantScriptEntity_StaticFields *v76; // x0
  System_Int32_array **v77; // x1
  System_String_array **v78; // x2
  System_String_array **v79; // x3
  System_Boolean_array **v80; // x4
  System_Int32_array **v81; // x5
  System_Int32_array *v82; // x6
  System_Int32_array *v83; // x7
  struct ServantScriptEntity_StaticFields *v84; // x0
  System_Int32_array **v85; // x1
  System_String_array **v86; // x2
  System_String_array **v87; // x3
  System_Boolean_array **v88; // x4
  System_Int32_array **v89; // x5
  System_Int32_array *v90; // x6
  System_Int32_array *v91; // x7

  if ( (byte_4189C03 & 1) == 0 )
  {
    sub_B2C35C(&ServantScriptEntity_TypeInfo, v1);
    sub_B2C35C(&StringLiteral_21467/*"photoSvtScale"*/, v8);
    sub_B2C35C(&StringLiteral_2772/*"BattleBondOffset"*/, v9);
    sub_B2C35C(&StringLiteral_23113/*"value"*/, v10);
    sub_B2C35C(&StringLiteral_21466/*"photoSvtPosition"*/, v11);
    sub_B2C35C(&StringLiteral_20999/*"myroomForm"*/, v12);
    sub_B2C35C(&StringLiteral_17647/*"conds"*/, v13);
    sub_B2C35C(&StringLiteral_17564/*"combineResultMultipleForm"*/, v14);
    sub_B2C35C(&StringLiteral_18669/*"faceSize"*/, v15);
    sub_B2C35C(&StringLiteral_13622/*"TerminalOffset"*/, v16);
    sub_B2C35C(&StringLiteral_17646/*"condType"*/, v17);
    byte_4189C03 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)ServantScriptEntity_TypeInfo->static_fields;
  v19 = (System_Int32_array **)StringLiteral_18669/*"faceSize"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_18669/*"faceSize"*/;
  sub_B2C2F8(static_fields, v19, v2, v3, v4, v5, v6, v7);
  v20 = ServantScriptEntity_TypeInfo->static_fields;
  v21 = (System_Int32_array **)StringLiteral_20999/*"myroomForm"*/;
  v20->MYROOM_FORM_KEY = (struct System_String_o *)StringLiteral_20999/*"myroomForm"*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&v20->MYROOM_FORM_KEY, v21, v22, v23, v24, v25, v26, v27);
  v28 = ServantScriptEntity_TypeInfo->static_fields;
  v29 = (System_Int32_array **)StringLiteral_17564/*"combineResultMultipleForm"*/;
  v28->COMBINE_RESULT_FORM_KEY = (struct System_String_o *)StringLiteral_17564/*"combineResultMultipleForm"*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&v28->COMBINE_RESULT_FORM_KEY, v29, v30, v31, v32, v33, v34, v35);
  v36 = ServantScriptEntity_TypeInfo->static_fields;
  v37 = (System_Int32_array **)StringLiteral_17647/*"conds"*/;
  v36->COND_KEY = (struct System_String_o *)StringLiteral_17647/*"conds"*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&v36->COND_KEY, v37, v38, v39, v40, v41, v42, v43);
  v44 = ServantScriptEntity_TypeInfo->static_fields;
  v45 = (System_Int32_array **)StringLiteral_17646/*"condType"*/;
  v44->COND_TYPE_KEY = (struct System_String_o *)StringLiteral_17646/*"condType"*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&v44->COND_TYPE_KEY, v45, v46, v47, v48, v49, v50, v51);
  v52 = ServantScriptEntity_TypeInfo->static_fields;
  v53 = (System_Int32_array **)StringLiteral_23113/*"value"*/;
  v52->COND_VALUE_KEY = (struct System_String_o *)StringLiteral_23113/*"value"*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&v52->COND_VALUE_KEY, v53, v54, v55, v56, v57, v58, v59);
  v60 = ServantScriptEntity_TypeInfo->static_fields;
  v61 = (System_Int32_array **)StringLiteral_13622/*"TerminalOffset"*/;
  v60->TERMINAL_OFFSET_KEY = (struct System_String_o *)StringLiteral_13622/*"TerminalOffset"*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&v60->TERMINAL_OFFSET_KEY, v61, v62, v63, v64, v65, v66, v67);
  v68 = ServantScriptEntity_TypeInfo->static_fields;
  v69 = (System_Int32_array **)StringLiteral_2772/*"BattleBondOffset"*/;
  v68->BATTLE_BOND_OFFSET_KEY = (struct System_String_o *)StringLiteral_2772/*"BattleBondOffset"*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&v68->BATTLE_BOND_OFFSET_KEY, v69, v70, v71, v72, v73, v74, v75);
  v76 = ServantScriptEntity_TypeInfo->static_fields;
  v77 = (System_Int32_array **)StringLiteral_21466/*"photoSvtPosition"*/;
  v76->PHOT_SVT_POSITION_KEY = (struct System_String_o *)StringLiteral_21466/*"photoSvtPosition"*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&v76->PHOT_SVT_POSITION_KEY, v77, v78, v79, v80, v81, v82, v83);
  v84 = ServantScriptEntity_TypeInfo->static_fields;
  v85 = (System_Int32_array **)StringLiteral_21467/*"photoSvtScale"*/;
  v84->PHOT_SVT_SCALE_KEY = (struct System_String_o *)StringLiteral_21467/*"photoSvtScale"*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&v84->PHOT_SVT_SCALE_KEY, v85, v86, v87, v88, v89, v90, v91);
}


void __fastcall ServantScriptEntity___ctor(ServantScriptEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4189C02 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_string___ctor__, method);
    byte_4189C02 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_24E401C *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall ServantScriptEntity__CreatePK(int32_t id, int32_t form, const MethodInfo *method)
{
  if ( (byte_4189BF6 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&form);
    byte_4189BF6 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           id,
           form,
           (const MethodInfo_1732908 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall ServantScriptEntity__CreatePrimaryKey(
        ServantScriptEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  int32_t form; // w19
  int32_t id; // w20

  if ( (byte_4189BF5 & 1) == 0 )
  {
    sub_B2C35C(&ServantScriptEntity_TypeInfo, method);
    byte_4189BF5 = 1;
  }
  id = this->fields.id;
  form = this->fields.form;
  if ( (BYTE3(ServantScriptEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantScriptEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantScriptEntity_TypeInfo);
  }
  return ServantScriptEntity__CreatePK(id, form, v2);
}


System_Int32_array *__fastcall ServantScriptEntity__GetBattleBondOffset(
        ServantScriptEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  ServantScriptEntity_c *v4; // x0

  if ( (byte_4189BFD & 1) == 0 )
  {
    sub_B2C35C(&ServantScriptEntity_TypeInfo, method);
    byte_4189BFD = 1;
  }
  v4 = ServantScriptEntity_TypeInfo;
  if ( (BYTE3(ServantScriptEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantScriptEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantScriptEntity_TypeInfo);
    v4 = ServantScriptEntity_TypeInfo;
  }
  return ServantScriptEntity__GetExtendOffset(this, v4->static_fields->BATTLE_BOND_OFFSET_KEY, v2);
}


System_Int32_array *__fastcall ServantScriptEntity__GetExtendOffset(
        ServantScriptEntity_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Int32_array *v11; // x19
  __int64 v12; // x1
  System_Collections_Generic_Dictionary_Type__IStoreExtension__o *extendData; // x0
  __int64 v14; // x10
  System_Collections_Generic_List_object__c *v15; // x9
  System_Collections_Generic_Dictionary_Type__IStoreExtension__o *v16; // x21
  unsigned __int64 i; // x8
  unsigned __int64 v18; // x23
  Il2CppObject *v19; // x20
  __int64 v21; // x0

  if ( (byte_4189BFE & 1) == 0 )
  {
    sub_B2C35C(&System_Convert_TypeInfo, key);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v6);
    sub_B2C35C(&int___TypeInfo, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_object__get_Count__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_object__get_Item__, v9);
    sub_B2C35C(&System_Collections_Generic_List_object__TypeInfo, v10);
    byte_4189BFE = 1;
  }
  v11 = (System_Int32_array *)sub_B2C374(int___TypeInfo, 2LL);
  if ( this->fields.extendData
    && System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
         (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.extendData,
         (System_Xml_XmlQualifiedName_o *)key,
         (const MethodInfo_2DB1F34 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    extendData = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)this->fields.extendData;
    if ( !extendData )
      goto LABEL_26;
    extendData = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                                                     extendData,
                                                                                     (System_Type_o *)key,
                                                                                     (const MethodInfo_2DB1BFC *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( extendData )
    {
      v14 = *(&System_Collections_Generic_List_object__TypeInfo->_2.bitflags2 + 1);
      if ( *(&extendData->klass->_2.bitflags2 + 1) >= (unsigned int)v14 )
      {
        v15 = (System_Collections_Generic_List_object__c *)extendData->klass->_2.typeHierarchy[v14 - 1];
        v16 = v15 == System_Collections_Generic_List_object__TypeInfo ? extendData : 0LL;
        if ( v15 == System_Collections_Generic_List_object__TypeInfo )
        {
          if ( v16 )
          {
            for ( i = 0LL; ; i = 1LL )
            {
              v18 = i;
              if ( (__int64)i >= SLODWORD(v16->fields.entries) )
              {
                extendData = 0LL;
                if ( !v11 )
                  break;
              }
              else
              {
                if ( i >= LODWORD(v16->fields.entries) )
                  System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
                v19 = *(Il2CppObject **)&v16->fields.buckets->m_Items[2 * i + 1];
                if ( (BYTE3(System_Convert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !System_Convert_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
                }
                extendData = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)System_Convert__ToInt32(
                                                                                                 v19,
                                                                                                 0LL);
                if ( !v11 )
                  break;
              }
              if ( v18 >= v11->max_length )
              {
                v21 = sub_B2C460(extendData);
                sub_B2C400(v21, 0LL);
              }
              v11->m_Items[v18 + 1] = (int)extendData;
              if ( v18 )
                return v11;
            }
          }
LABEL_26:
          sub_B2C434(extendData, v12);
        }
      }
    }
  }
  return v11;
}


System_Int32_array *__fastcall ServantScriptEntity__GetPhotoSvtPosition(
        ServantScriptEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  ServantScriptEntity_c *v4; // x0

  if ( (byte_4189C00 & 1) == 0 )
  {
    sub_B2C35C(&ServantScriptEntity_TypeInfo, method);
    byte_4189C00 = 1;
  }
  v4 = ServantScriptEntity_TypeInfo;
  if ( (BYTE3(ServantScriptEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantScriptEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantScriptEntity_TypeInfo);
    v4 = ServantScriptEntity_TypeInfo;
  }
  return ServantScriptEntity__GetExtendOffset(this, v4->static_fields->PHOT_SVT_POSITION_KEY, v2);
}


float __fastcall ServantScriptEntity__GetPhotoSvtScale(ServantScriptEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *extendData; // x20
  ServantScriptEntity_c *v7; // x0
  __int64 v8; // x1
  ServantScriptEntity_c *v9; // x0
  struct System_Collections_Generic_Dictionary_string__object__o *v10; // x19
  Il2CppObject *Item; // x19

  if ( (byte_4189C01 & 1) == 0 )
  {
    sub_B2C35C(&System_Convert_TypeInfo, method);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v4);
    sub_B2C35C(&ServantScriptEntity_TypeInfo, v5);
    byte_4189C01 = 1;
  }
  extendData = this->fields.extendData;
  if ( !extendData )
    return 1.0;
  v7 = ServantScriptEntity_TypeInfo;
  if ( (BYTE3(ServantScriptEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantScriptEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantScriptEntity_TypeInfo);
    v7 = ServantScriptEntity_TypeInfo;
  }
  if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)extendData,
          (System_Xml_XmlQualifiedName_o *)v7->static_fields->PHOT_SVT_SCALE_KEY,
          (const MethodInfo_2DB1F34 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return 1.0;
  v9 = ServantScriptEntity_TypeInfo;
  v10 = this->fields.extendData;
  if ( (BYTE3(ServantScriptEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantScriptEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantScriptEntity_TypeInfo);
  }
  if ( !v10 )
    sub_B2C434(v9, v8);
  Item = (Il2CppObject *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                           (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v10,
                           (System_Type_o *)ServantScriptEntity_TypeInfo->static_fields->PHOT_SVT_SCALE_KEY,
                           (const MethodInfo_2DB1BFC *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( (BYTE3(System_Convert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !System_Convert_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  }
  return System_Convert__ToSingle(Item, 0LL);
}


System_Int32_array *__fastcall ServantScriptEntity__GetTerminalOffset(
        ServantScriptEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  ServantScriptEntity_c *v4; // x0

  if ( (byte_4189BFC & 1) == 0 )
  {
    sub_B2C35C(&ServantScriptEntity_TypeInfo, method);
    byte_4189BFC = 1;
  }
  v4 = ServantScriptEntity_TypeInfo;
  if ( (BYTE3(ServantScriptEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantScriptEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantScriptEntity_TypeInfo);
    v4 = ServantScriptEntity_TypeInfo;
  }
  return ServantScriptEntity__GetExtendOffset(this, v4->static_fields->TERMINAL_OFFSET_KEY, v2);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantScriptEntity__IsCondEnable(
        ServantScriptEntity_o *this,
        int32_t friendship,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *extendData; // x21
  ServantScriptEntity_c *v14; // x0
  void *v15; // x1
  System_String_o *Item; // x0
  struct System_Collections_Generic_Dictionary_string__object__o *v17; // x21
  __int64 v18; // x9
  __int64 v19; // x9
  ServantScriptEntity_c *v20; // x0
  ServantScriptEntity_c *v21; // x0
  int32_t v22; // w22
  int64_t v23; // x21
  System_String_o *v24; // x0
  int32_t v25; // w19
  ServantScriptEntity_o *v26; // x0
  System_String_o *v27; // x1
  const MethodInfo *v28; // x2

  if ( (byte_4189BFB & 1) == 0 )
  {
    sub_B2C35C(&CondType_TypeInfo, *(_QWORD *)&friendship);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v6);
    sub_B2C35C(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v7);
    sub_B2C35C(&long_TypeInfo, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_object__get_Count__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_object__get_Item__, v10);
    sub_B2C35C(&System_Collections_Generic_List_object__TypeInfo, v11);
    sub_B2C35C(&ServantScriptEntity_TypeInfo, v12);
    byte_4189BFB = 1;
  }
  extendData = this->fields.extendData;
  if ( !extendData )
    goto LABEL_39;
  v14 = ServantScriptEntity_TypeInfo;
  if ( (BYTE3(ServantScriptEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantScriptEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantScriptEntity_TypeInfo);
    v14 = ServantScriptEntity_TypeInfo;
  }
  if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)extendData,
          (System_Xml_XmlQualifiedName_o *)v14->static_fields->COND_KEY,
          (const MethodInfo_2DB1F34 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    goto LABEL_39;
  Item = (System_String_o *)ServantScriptEntity_TypeInfo;
  v17 = this->fields.extendData;
  if ( (BYTE3(ServantScriptEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantScriptEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantScriptEntity_TypeInfo);
  }
  if ( !v17 )
    goto LABEL_47;
  Item = (System_String_o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                              (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v17,
                              (System_Type_o *)ServantScriptEntity_TypeInfo->static_fields->COND_KEY,
                              (const MethodInfo_2DB1BFC *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !Item )
    return (char)Item;
  v15 = System_Collections_Generic_List_object__TypeInfo;
  v18 = *(&System_Collections_Generic_List_object__TypeInfo->_2.bitflags2 + 1);
  if ( *(&Item->klass->_2.bitflags2 + 1) < (unsigned int)v18
    || (System_Collections_Generic_List_object__c *)Item->klass->_2.typeHierarchy[v18 - 1] != System_Collections_Generic_List_object__TypeInfo )
  {
    goto LABEL_48;
  }
  if ( SLODWORD(Item[1].klass) < 1 )
    goto LABEL_39;
  v17 = *(struct System_Collections_Generic_Dictionary_string__object__o **)(*(_QWORD *)&Item->fields + 32LL);
  if ( v17 )
  {
    v15 = System_Collections_Generic_Dictionary_string__object__TypeInfo;
    v19 = *(&System_Collections_Generic_Dictionary_string__object__TypeInfo->_2.bitflags2 + 1);
    if ( *(&v17->klass->_2.bitflags2 + 1) < (unsigned int)v19
      || (System_Collections_Generic_Dictionary_string__object__c *)v17->klass->_2.typeHierarchy[v19 - 1] != System_Collections_Generic_Dictionary_string__object__TypeInfo )
    {
LABEL_49:
      sub_B2C728(v17);
      LOBYTE(Item) = (unsigned __int8)ServantScriptEntity__GetExtendOffset(v26, v27, v28);
      return (char)Item;
    }
  }
  Item = (System_String_o *)ServantScriptEntity_TypeInfo;
  if ( (BYTE3(ServantScriptEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantScriptEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantScriptEntity_TypeInfo);
  }
  if ( !v17 )
    goto LABEL_47;
  if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v17,
          (System_Xml_XmlQualifiedName_o *)ServantScriptEntity_TypeInfo->static_fields->COND_TYPE_KEY,
          (const MethodInfo_2DB1F34 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    goto LABEL_39;
  v20 = ServantScriptEntity_TypeInfo;
  if ( (BYTE3(ServantScriptEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantScriptEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantScriptEntity_TypeInfo);
    v20 = ServantScriptEntity_TypeInfo;
  }
  if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v17,
          (System_Xml_XmlQualifiedName_o *)v20->static_fields->COND_VALUE_KEY,
          (const MethodInfo_2DB1F34 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    goto LABEL_39;
  v21 = ServantScriptEntity_TypeInfo;
  if ( (BYTE3(ServantScriptEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantScriptEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantScriptEntity_TypeInfo);
    v21 = ServantScriptEntity_TypeInfo;
  }
  Item = (System_String_o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                              (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v17,
                              (System_Type_o *)v21->static_fields->COND_TYPE_KEY,
                              (const MethodInfo_2DB1BFC *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !Item )
    goto LABEL_47;
  if ( Item->klass->_1.element_class != long_TypeInfo->_1.element_class )
    goto LABEL_48;
  v22 = *(_DWORD *)j_il2cpp_object_unbox_0(Item);
  Item = (System_String_o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                              (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v17,
                              (System_Type_o *)ServantScriptEntity_TypeInfo->static_fields->COND_VALUE_KEY,
                              (const MethodInfo_2DB1BFC *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !Item )
    goto LABEL_47;
  if ( Item->klass->_1.element_class != long_TypeInfo->_1.element_class )
  {
LABEL_48:
    sub_B2C728(Item);
    goto LABEL_49;
  }
  v23 = *(_QWORD *)j_il2cpp_object_unbox_0(Item);
  if ( (friendship & 0x80000000) == 0 )
  {
    if ( v22 == 99 )
    {
      LOBYTE(Item) = v23 >= friendship;
      return (char)Item;
    }
    if ( v22 == 98 )
    {
      LOBYTE(Item) = v23 <= friendship;
      return (char)Item;
    }
LABEL_39:
    LOBYTE(Item) = 0;
    return (char)Item;
  }
  Item = System_Int32__ToString((int)this + 16, 0LL);
  if ( !Item )
LABEL_47:
    sub_B2C434(Item, v15);
  v24 = System_String__Substring_44369268(Item, 0, Item->fields.m_stringLength - 1, 0LL);
  v25 = System_Int32__Parse(v24, 0LL);
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  LOBYTE(Item) = CondType__IsOpen(v22, v25, v23, 0, 0LL);
  return (char)Item;
}


bool __fastcall ServantScriptEntity__IsPhotoSvtPosition(ServantScriptEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *extendData; // x19
  ServantScriptEntity_c *v5; // x0

  if ( (byte_4189BFF & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, method);
    sub_B2C35C(&ServantScriptEntity_TypeInfo, v3);
    byte_4189BFF = 1;
  }
  extendData = this->fields.extendData;
  if ( !extendData )
    return 0;
  v5 = ServantScriptEntity_TypeInfo;
  if ( (BYTE3(ServantScriptEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantScriptEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantScriptEntity_TypeInfo);
    v5 = ServantScriptEntity_TypeInfo;
  }
  return System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
           (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)extendData,
           (System_Xml_XmlQualifiedName_o *)v5->static_fields->PHOT_SVT_POSITION_KEY,
           (const MethodInfo_2DB1F34 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
}


UnityEngine_Vector2Int_o __fastcall ServantScriptEntity__getFaceSize(
        ServantScriptEntity_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  UnityEngine_Vector2Int_o zero; // x0
  struct System_Collections_Generic_Dictionary_string__object__o *extendData; // x21
  UnityEngine_Vector2Int_o data; // x19
  ServantScriptEntity_c *v12; // x0
  __int64 v13; // x1
  ServantScriptEntity_c *v14; // x0
  struct System_Collections_Generic_Dictionary_string__object__o *v15; // x20
  UnityEngine_Purchasing_IStoreExtension_o *Item; // x0
  UnityEngine_Purchasing_IStoreExtension_o *v17; // x20
  __int64 v18; // x10
  Il2CppObject *v19; // x0
  unsigned __int64 v20; // x0
  int monitor; // w8
  Il2CppObject *v23; // x19

  if ( (byte_4189BF8 & 1) == 0 )
  {
    sub_B2C35C(&System_Convert_TypeInfo, method);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_object__get_Count__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_object__get_Item__, v6);
    sub_B2C35C(&System_Collections_Generic_List_object__TypeInfo, v7);
    sub_B2C35C(&ServantScriptEntity_TypeInfo, v8);
    byte_4189BF8 = 1;
  }
  zero = UnityEngine_Vector2Int__get_zero(0LL);
  extendData = this->fields.extendData;
  data = zero;
  if ( extendData )
  {
    v12 = ServantScriptEntity_TypeInfo;
    if ( (BYTE3(ServantScriptEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantScriptEntity_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantScriptEntity_TypeInfo);
      v12 = ServantScriptEntity_TypeInfo;
    }
    if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
           (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)extendData,
           (System_Xml_XmlQualifiedName_o *)v12->static_fields->FACE_SIZE_KEY,
           (const MethodInfo_2DB1F34 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    {
      v14 = ServantScriptEntity_TypeInfo;
      v15 = this->fields.extendData;
      if ( (BYTE3(ServantScriptEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantScriptEntity_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantScriptEntity_TypeInfo);
      }
      if ( !v15 )
        sub_B2C434(v14, v13);
      Item = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
               (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v15,
               (System_Type_o *)ServantScriptEntity_TypeInfo->static_fields->FACE_SIZE_KEY,
               (const MethodInfo_2DB1BFC *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
      v17 = Item;
      if ( Item
        && (v18 = *(&System_Collections_Generic_List_object__TypeInfo->_2.bitflags2 + 1),
            *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v18)
        && (System_Collections_Generic_List_object__c *)Item->klass->_2.typeHierarchy[v18 - 1] == System_Collections_Generic_List_object__TypeInfo )
      {
        monitor = (int)Item[1].monitor;
        if ( monitor != 1 )
        {
          if ( monitor >= 2 )
          {
            data = (UnityEngine_Vector2Int_o)Item[1].klass->_1.byval_arg.data;
            if ( (BYTE3(System_Convert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !System_Convert_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
            }
            data.fields.m_X = System_Convert__ToInt32(*(Il2CppObject **)&data, 0LL);
            if ( LODWORD(v17[1].monitor) <= 1 )
              System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
            LODWORD(v20) = System_Convert__ToInt32(*(Il2CppObject **)&v17[1].klass->_1.byval_arg.bits, 0LL);
          }
          else
          {
            v20 = HIDWORD(*(unsigned __int64 *)&data);
          }
          return (UnityEngine_Vector2Int_o)((unsigned int)data.fields.m_X | ((unsigned __int64)(unsigned int)v20 << 32));
        }
        v23 = (Il2CppObject *)Item[1].klass->_1.byval_arg.data;
        if ( (BYTE3(System_Convert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !System_Convert_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
        }
        v19 = v23;
      }
      else
      {
        if ( (BYTE3(System_Convert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !System_Convert_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
        }
        v19 = (Il2CppObject *)v17;
      }
      LODWORD(v20) = System_Convert__ToInt32(v19, 0LL);
      data.fields.m_X = v20;
      return (UnityEngine_Vector2Int_o)((unsigned int)data.fields.m_X | ((unsigned __int64)(unsigned int)v20 << 32));
    }
  }
  return data;
}


int32_t __fastcall ServantScriptEntity__getMyRoomForm(ServantScriptEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *extendData; // x20
  ServantScriptEntity_c *v7; // x0
  __int64 v8; // x1
  void *Item; // x0
  struct System_Collections_Generic_Dictionary_string__object__o *v10; // x19
  ServantScriptEntity_o *v12; // x0
  const MethodInfo *v13; // x1

  if ( (byte_4189BF9 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, method);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v3);
    sub_B2C35C(&long_TypeInfo, v4);
    sub_B2C35C(&ServantScriptEntity_TypeInfo, v5);
    byte_4189BF9 = 1;
  }
  extendData = this->fields.extendData;
  if ( !extendData )
    return 0;
  v7 = ServantScriptEntity_TypeInfo;
  if ( (BYTE3(ServantScriptEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantScriptEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantScriptEntity_TypeInfo);
    v7 = ServantScriptEntity_TypeInfo;
  }
  if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)extendData,
          (System_Xml_XmlQualifiedName_o *)v7->static_fields->MYROOM_FORM_KEY,
          (const MethodInfo_2DB1F34 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return 0;
  Item = ServantScriptEntity_TypeInfo;
  v10 = this->fields.extendData;
  if ( (BYTE3(ServantScriptEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantScriptEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantScriptEntity_TypeInfo);
  }
  if ( !v10
    || (Item = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                 (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v10,
                 (System_Type_o *)ServantScriptEntity_TypeInfo->static_fields->MYROOM_FORM_KEY,
                 (const MethodInfo_2DB1BFC *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
    sub_B2C434(Item, v8);
  }
  if ( *(Il2CppClass **)(*(_QWORD *)Item + 64LL) == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(Item);
  sub_B2C728(Item);
  return ServantScriptEntity__isMultipleForm(v12, v13);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Vector2_o __fastcall ServantScriptEntity__getOffset(
        ServantScriptEntity_o *this,
        int32_t offsetKind,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *TerminalOffset; // x0
  __int64 v8; // x1
  __int64 v9; // x10
  __int64 v10; // x8
  int32_t offsetX; // w8
  int32_t offsetY; // w9
  float v13; // s0
  float v14; // s1
  __int64 v15; // x0
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  if ( (byte_4189BF7 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_ServantScriptAddMaster___, *(_QWORD *)&offsetKind);
    sub_B2C35C(&DataManager_TypeInfo, v5);
    sub_B2C35C(&Method_DataMasterBase_ServantScriptAddMaster__ServantScriptAddEntity__int__TryGetEntity__, v6);
    byte_4189BF7 = 1;
  }
  entity = 0LL;
  if ( (unsigned int)(offsetKind - 3) > 1 )
  {
    switch ( offsetKind )
    {
      case 1:
      case 2:
      case 5:
        goto LABEL_17;
      case 6:
        TerminalOffset = (DataMasterBase_WarMaster__WarEntity__int__o *)ServantScriptEntity__GetTerminalOffset(
                                                                          this,
                                                                          *(const MethodInfo **)&offsetKind);
        if ( TerminalOffset )
          goto LABEL_20;
        goto LABEL_24;
      case 7:
        TerminalOffset = (DataMasterBase_WarMaster__WarEntity__int__o *)ServantScriptEntity__GetBattleBondOffset(
                                                                          this,
                                                                          *(const MethodInfo **)&offsetKind);
        if ( !TerminalOffset )
          goto LABEL_24;
LABEL_20:
        if ( LODWORD(TerminalOffset->fields._MasterName_k__BackingField) < 2 )
        {
          v15 = sub_B2C460(TerminalOffset);
          sub_B2C400(v15, 0LL);
        }
        offsetX = LODWORD(TerminalOffset->fields.list) + this->fields.offsetXMyroom;
        offsetY = HIDWORD(TerminalOffset->fields.list) + this->fields.offsetYMyroom;
        break;
      default:
        offsetX = this->fields.offsetX;
        offsetY = this->fields.offsetY;
        break;
    }
  }
  else
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    TerminalOffset = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_ServantScriptAddMaster___);
    if ( !TerminalOffset )
      goto LABEL_24;
    TerminalOffset = (DataMasterBase_WarMaster__WarEntity__int__o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                                                      TerminalOffset,
                                                                      &entity,
                                                                      this->fields.id,
                                                                      (const MethodInfo_24E412C *)Method_DataMasterBase_ServantScriptAddMaster__ServantScriptAddEntity__int__TryGetEntity__);
    if ( ((unsigned __int8)TerminalOffset & 1) == 0 )
    {
LABEL_17:
      offsetX = this->fields.offsetXMyroom;
      offsetY = this->fields.offsetYMyroom;
      goto LABEL_22;
    }
    if ( !entity )
LABEL_24:
      sub_B2C434(TerminalOffset, v8);
    v9 = 36LL;
    if ( offsetKind != 4 )
      v9 = 28LL;
    if ( offsetKind == 4 )
      v10 = 32LL;
    else
      v10 = 24LL;
    offsetX = *(_DWORD *)((char *)&entity->klass + v10);
    offsetY = *(_DWORD *)((char *)&entity->klass + v9);
  }
LABEL_22:
  v13 = (float)offsetX;
  v14 = (float)offsetY;
  result.fields.y = v14;
  result.fields.x = v13;
  return result;
}


bool __fastcall ServantScriptEntity__isMultipleForm(ServantScriptEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *extendData; // x19
  ServantScriptEntity_c *v5; // x0

  if ( (byte_4189BFA & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, method);
    sub_B2C35C(&ServantScriptEntity_TypeInfo, v3);
    byte_4189BFA = 1;
  }
  extendData = this->fields.extendData;
  if ( !extendData )
    return 0;
  v5 = ServantScriptEntity_TypeInfo;
  if ( (BYTE3(ServantScriptEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantScriptEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantScriptEntity_TypeInfo);
    v5 = ServantScriptEntity_TypeInfo;
  }
  return System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
           (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)extendData,
           (System_Xml_XmlQualifiedName_o *)v5->static_fields->COMBINE_RESULT_FORM_KEY,
           (const MethodInfo_2DB1F34 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
}