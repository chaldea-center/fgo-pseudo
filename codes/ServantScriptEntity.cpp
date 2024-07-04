void __fastcall ServantScriptEntity___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  int32_t v3; // w3
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
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
  int32_t v18; // w1
  struct ServantScriptEntity_StaticFields *static_fields; // x0
  int32_t v20; // w2
  int32_t v21; // w3
  int32_t v22; // w1
  struct ServantScriptEntity_StaticFields *v23; // x0
  int32_t v24; // w2
  int32_t v25; // w3
  int32_t v26; // w1
  struct ServantScriptEntity_StaticFields *v27; // x0
  int32_t v28; // w2
  int32_t v29; // w3
  int32_t v30; // w1
  struct ServantScriptEntity_StaticFields *v31; // x0
  int32_t v32; // w2
  int32_t v33; // w3
  int32_t v34; // w1
  struct ServantScriptEntity_StaticFields *v35; // x0
  int32_t v36; // w2
  int32_t v37; // w3
  int32_t v38; // w1
  struct ServantScriptEntity_StaticFields *v39; // x0
  int32_t v40; // w2
  int32_t v41; // w3
  int32_t v42; // w1
  struct ServantScriptEntity_StaticFields *v43; // x0
  int32_t v44; // w2
  int32_t v45; // w3
  int32_t v46; // w1
  struct ServantScriptEntity_StaticFields *v47; // x0
  int32_t v48; // w2
  int32_t v49; // w3
  struct ServantScriptEntity_StaticFields *v50; // x0
  int32_t v51; // w1
  int32_t v52; // w2
  int32_t v53; // w3
  struct ServantScriptEntity_StaticFields *v54; // x0
  int32_t v55; // w1
  int32_t v56; // w2
  int32_t v57; // w3
  struct ServantScriptEntity_StaticFields *v58; // x0
  int32_t v59; // w1
  int32_t v60; // w2
  int32_t v61; // w3
  struct ServantScriptEntity_StaticFields *v62; // x0
  int32_t v63; // w1
  int32_t v64; // w2
  int32_t v65; // w3
  struct ServantScriptEntity_StaticFields *v66; // x0
  int32_t v67; // w1
  int32_t v68; // w2
  int32_t v69; // w3

  if ( (byte_48E2F8E & 1) == 0 )
  {
    sub_1B00CCC(&ServantScriptEntity_TypeInfo, v1);
    sub_1B00CCC(&StringLiteral_22213/*"photoSvtScale"*/, v4);
    sub_1B00CCC(&StringLiteral_22211/*"photoSvtPositionLeft"*/, v5);
    sub_1B00CCC(&StringLiteral_22212/*"photoSvtPositionRight"*/, v6);
    sub_1B00CCC(&StringLiteral_3192/*"BattleBondOffset"*/, v7);
    sub_1B00CCC(&StringLiteral_24139/*"value"*/, v8);
    sub_1B00CCC(&StringLiteral_22210/*"photoSvtPosition"*/, v9);
    sub_1B00CCC(&StringLiteral_21677/*"myroomForm"*/, v10);
    sub_1B00CCC(&StringLiteral_22214/*"photoSvtScaleLeft"*/, v11);
    sub_1B00CCC(&StringLiteral_17956/*"conds"*/, v12);
    sub_1B00CCC(&StringLiteral_22215/*"photoSvtScaleRight"*/, v13);
    sub_1B00CCC(&StringLiteral_17873/*"combineResultMultipleForm"*/, v14);
    sub_1B00CCC(&StringLiteral_19096/*"faceSize"*/, v15);
    sub_1B00CCC(&StringLiteral_13387/*"TerminalOffset"*/, v16);
    sub_1B00CCC(&StringLiteral_17955/*"condType"*/, v17);
    byte_48E2F8E = 1;
  }
  ServantScriptEntity_TypeInfo->static_fields->FACE_SIZE_KEY = (struct System_String_o *)StringLiteral_19096/*"faceSize"*/;
  sub_1B00C70(
    (ServantStatusBattleListViewItem_o *)ServantScriptEntity_TypeInfo->static_fields,
    StringLiteral_19096/*"faceSize"*/,
    v2,
    v3);
  v18 = StringLiteral_21677/*"myroomForm"*/;
  static_fields = ServantScriptEntity_TypeInfo->static_fields;
  static_fields->MYROOM_FORM_KEY = (struct System_String_o *)StringLiteral_21677/*"myroomForm"*/;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&static_fields->MYROOM_FORM_KEY, v18, v20, v21);
  v22 = StringLiteral_17873/*"combineResultMultipleForm"*/;
  v23 = ServantScriptEntity_TypeInfo->static_fields;
  v23->COMBINE_RESULT_FORM_KEY = (struct System_String_o *)StringLiteral_17873/*"combineResultMultipleForm"*/;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&v23->COMBINE_RESULT_FORM_KEY, v22, v24, v25);
  v26 = StringLiteral_17956/*"conds"*/;
  v27 = ServantScriptEntity_TypeInfo->static_fields;
  v27->COND_KEY = (struct System_String_o *)StringLiteral_17956/*"conds"*/;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&v27->COND_KEY, v26, v28, v29);
  v30 = StringLiteral_17955/*"condType"*/;
  v31 = ServantScriptEntity_TypeInfo->static_fields;
  v31->COND_TYPE_KEY = (struct System_String_o *)StringLiteral_17955/*"condType"*/;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&v31->COND_TYPE_KEY, v30, v32, v33);
  v34 = StringLiteral_24139/*"value"*/;
  v35 = ServantScriptEntity_TypeInfo->static_fields;
  v35->COND_VALUE_KEY = (struct System_String_o *)StringLiteral_24139/*"value"*/;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&v35->COND_VALUE_KEY, v34, v36, v37);
  v38 = StringLiteral_13387/*"TerminalOffset"*/;
  v39 = ServantScriptEntity_TypeInfo->static_fields;
  v39->TERMINAL_OFFSET_KEY = (struct System_String_o *)StringLiteral_13387/*"TerminalOffset"*/;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&v39->TERMINAL_OFFSET_KEY, v38, v40, v41);
  v42 = StringLiteral_3192/*"BattleBondOffset"*/;
  v43 = ServantScriptEntity_TypeInfo->static_fields;
  v43->BATTLE_BOND_OFFSET_KEY = (struct System_String_o *)StringLiteral_3192/*"BattleBondOffset"*/;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&v43->BATTLE_BOND_OFFSET_KEY, v42, v44, v45);
  v46 = StringLiteral_22210/*"photoSvtPosition"*/;
  v47 = ServantScriptEntity_TypeInfo->static_fields;
  v47->PHOT_SVT_POSITION_KEY = (struct System_String_o *)StringLiteral_22210/*"photoSvtPosition"*/;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&v47->PHOT_SVT_POSITION_KEY, v46, v48, v49);
  v50 = ServantScriptEntity_TypeInfo->static_fields;
  v51 = StringLiteral_22212/*"photoSvtPositionRight"*/;
  v50->PHOT_SVT_POSITION_RIGHT_KEY = (struct System_String_o *)StringLiteral_22212/*"photoSvtPositionRight"*/;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&v50->PHOT_SVT_POSITION_RIGHT_KEY, v51, v52, v53);
  v54 = ServantScriptEntity_TypeInfo->static_fields;
  v55 = StringLiteral_22211/*"photoSvtPositionLeft"*/;
  v54->PHOT_SVT_POSITION_LEFT_KEY = (struct System_String_o *)StringLiteral_22211/*"photoSvtPositionLeft"*/;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&v54->PHOT_SVT_POSITION_LEFT_KEY, v55, v56, v57);
  v58 = ServantScriptEntity_TypeInfo->static_fields;
  v59 = StringLiteral_22213/*"photoSvtScale"*/;
  v58->PHOT_SVT_SCALE_KEY = (struct System_String_o *)StringLiteral_22213/*"photoSvtScale"*/;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&v58->PHOT_SVT_SCALE_KEY, v59, v60, v61);
  v62 = ServantScriptEntity_TypeInfo->static_fields;
  v63 = StringLiteral_22215/*"photoSvtScaleRight"*/;
  v62->PHOT_SVT_SCALE_RIGHT_KEY = (struct System_String_o *)StringLiteral_22215/*"photoSvtScaleRight"*/;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&v62->PHOT_SVT_SCALE_RIGHT_KEY, v63, v64, v65);
  v66 = ServantScriptEntity_TypeInfo->static_fields;
  v67 = StringLiteral_22214/*"photoSvtScaleLeft"*/;
  v66->PHOT_SVT_SCALE_LEFT_KEY = (struct System_String_o *)StringLiteral_22214/*"photoSvtScaleLeft"*/;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&v66->PHOT_SVT_SCALE_LEFT_KEY, v67, v68, v69);
}


void __fastcall ServantScriptEntity___ctor(ServantScriptEntity_o *this, const MethodInfo *method)
{
  if ( (byte_48E2F8D & 1) == 0 )
  {
    sub_1B00CCC(&Method_DataEntityBase_string___ctor__, method);
    byte_48E2F8D = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_2FE68C4 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall ServantScriptEntity__CreatePK(int32_t id, int32_t form, const MethodInfo *method)
{
  if ( (byte_48E2F7E & 1) == 0 )
  {
    sub_1B00CCC(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&form);
    byte_48E2F7E = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           id,
           form,
           (const MethodInfo_2D60E34 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall ServantScriptEntity__CreatePrimaryKey(
        ServantScriptEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  int32_t form; // w19
  int32_t id; // w20

  if ( (byte_48E2F7D & 1) == 0 )
  {
    sub_1B00CCC(&ServantScriptEntity_TypeInfo, method);
    byte_48E2F7D = 1;
  }
  id = this->fields.id;
  form = this->fields.form;
  if ( !ServantScriptEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantScriptEntity_TypeInfo);
  return ServantScriptEntity__CreatePK(id, form, v2);
}


System_Int32_array *__fastcall ServantScriptEntity__GetBattleBondOffset(
        ServantScriptEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  ServantScriptEntity_c *v4; // x0

  if ( (byte_48E2F85 & 1) == 0 )
  {
    sub_1B00CCC(&ServantScriptEntity_TypeInfo, method);
    byte_48E2F85 = 1;
  }
  v4 = ServantScriptEntity_TypeInfo;
  if ( !ServantScriptEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantScriptEntity_TypeInfo);
    v4 = ServantScriptEntity_TypeInfo;
  }
  return ServantScriptEntity__GetExtendOffset(this, v4->static_fields->BATTLE_BOND_OFFSET_KEY, 0LL, v2);
}


System_Int32_array *__fastcall ServantScriptEntity__GetExtendOffset(
        ServantScriptEntity_o *this,
        System_String_o *key,
        System_Int32_array *defaultValue,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *extendData; // x0
  __int64 v14; // x1
  System_Collections_Generic_Dictionary_object__object__o *Item; // x0
  __int64 methodPtr_low; // x10
  System_Collections_Generic_List_object__c *v17; // x9
  System_Collections_Generic_List_object__o *v18; // x20
  unsigned __int64 v19; // x21
  char v20; // w8
  char v21; // w25
  Il2CppObject *v22; // x22
  char *v23; // x9

  if ( (byte_48E2F86 & 1) == 0 )
  {
    sub_1B00CCC(&System_Convert_TypeInfo, key);
    sub_1B00CCC(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v7);
    sub_1B00CCC(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v8);
    sub_1B00CCC(&int___TypeInfo, v9);
    sub_1B00CCC(&Method_System_Collections_Generic_List_object__get_Count__, v10);
    sub_1B00CCC(&Method_System_Collections_Generic_List_object__get_Item__, v11);
    sub_1B00CCC(&System_Collections_Generic_List_object__TypeInfo, v12);
    byte_48E2F86 = 1;
  }
  if ( !defaultValue )
    defaultValue = (System_Int32_array *)sub_1B00D74(int___TypeInfo, 2LL);
  extendData = this->fields.extendData;
  if ( extendData
    && System_Collections_Generic_Dictionary_object__object___ContainsKey(
         (System_Collections_Generic_Dictionary_object__object__o *)extendData,
         (Il2CppObject *)key,
         (const MethodInfo_308DC3C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    Item = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.extendData;
    if ( !Item )
      goto LABEL_25;
    Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                        Item,
                                                                        (Il2CppObject *)key,
                                                                        (const MethodInfo_308D9C8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( Item )
    {
      methodPtr_low = LOBYTE(System_Collections_Generic_List_object__TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(Item->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low )
      {
        v17 = (System_Collections_Generic_List_object__c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1];
        v18 = v17 == System_Collections_Generic_List_object__TypeInfo
            ? (System_Collections_Generic_List_object__o *)Item
            : 0LL;
        if ( v17 == System_Collections_Generic_List_object__TypeInfo )
        {
          if ( v18 )
          {
            v19 = 0LL;
            v20 = 1;
            while ( 1 )
            {
              v21 = v20;
              if ( (__int64)v19 >= v18->fields._size )
              {
                Item = 0LL;
              }
              else
              {
                v22 = System_Collections_Generic_List_object___get_Item(
                        v18,
                        v19,
                        (const MethodInfo_33C1700 *)Method_System_Collections_Generic_List_object__get_Item__);
                if ( !System_Convert_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
                Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Convert__ToInt32(v22, 0LL);
              }
              if ( !defaultValue )
                break;
              if ( v19 >= defaultValue->max_length )
                sub_1B00F30(Item, v14);
              v20 = 0;
              v23 = (char *)defaultValue + 4 * v19;
              v19 = 1LL;
              *((_DWORD *)v23 + 8) = (_DWORD)Item;
              if ( (v21 & 1) == 0 )
                return defaultValue;
            }
          }
LABEL_25:
          sub_1B00F28(Item, v14);
        }
      }
    }
  }
  return defaultValue;
}


System_Int32_array *__fastcall ServantScriptEntity__GetPhotoSvtPosition(
        ServantScriptEntity_o *this,
        System_Int32_array *defaultValue,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  ServantScriptEntity_c *v6; // x0

  if ( (byte_48E2F87 & 1) == 0 )
  {
    sub_1B00CCC(&ServantScriptEntity_TypeInfo, defaultValue);
    byte_48E2F87 = 1;
  }
  v6 = ServantScriptEntity_TypeInfo;
  if ( !ServantScriptEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantScriptEntity_TypeInfo);
    v6 = ServantScriptEntity_TypeInfo;
  }
  return ServantScriptEntity__GetExtendOffset(this, v6->static_fields->PHOT_SVT_POSITION_KEY, defaultValue, v3);
}


System_Int32_array *__fastcall ServantScriptEntity__GetPhotoSvtPositionLeft(
        ServantScriptEntity_o *this,
        System_Int32_array *defaultValue,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  ServantScriptEntity_c *v6; // x0

  if ( (byte_48E2F89 & 1) == 0 )
  {
    sub_1B00CCC(&ServantScriptEntity_TypeInfo, defaultValue);
    byte_48E2F89 = 1;
  }
  v6 = ServantScriptEntity_TypeInfo;
  if ( !ServantScriptEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantScriptEntity_TypeInfo);
    v6 = ServantScriptEntity_TypeInfo;
  }
  return ServantScriptEntity__GetExtendOffset(this, v6->static_fields->PHOT_SVT_POSITION_LEFT_KEY, defaultValue, v3);
}


System_Int32_array *__fastcall ServantScriptEntity__GetPhotoSvtPositionRight(
        ServantScriptEntity_o *this,
        System_Int32_array *defaultValue,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  ServantScriptEntity_c *v6; // x0

  if ( (byte_48E2F88 & 1) == 0 )
  {
    sub_1B00CCC(&ServantScriptEntity_TypeInfo, defaultValue);
    byte_48E2F88 = 1;
  }
  v6 = ServantScriptEntity_TypeInfo;
  if ( !ServantScriptEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantScriptEntity_TypeInfo);
    v6 = ServantScriptEntity_TypeInfo;
  }
  return ServantScriptEntity__GetExtendOffset(this, v6->static_fields->PHOT_SVT_POSITION_RIGHT_KEY, defaultValue, v3);
}


float __fastcall ServantScriptEntity__GetPhotoSvtScale(
        ServantScriptEntity_o *this,
        float defaultValue,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *extendData; // x20
  ServantScriptEntity_c *v9; // x0
  __int64 v10; // x1
  ServantScriptEntity_c *v11; // x0
  struct System_Collections_Generic_Dictionary_string__object__o *v12; // x19
  Il2CppObject *Item; // x19

  if ( (byte_48E2F8A & 1) == 0 )
  {
    sub_1B00CCC(&System_Convert_TypeInfo, method);
    sub_1B00CCC(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v5);
    sub_1B00CCC(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v6);
    sub_1B00CCC(&ServantScriptEntity_TypeInfo, v7);
    byte_48E2F8A = 1;
  }
  extendData = this->fields.extendData;
  if ( !extendData )
    return defaultValue;
  v9 = ServantScriptEntity_TypeInfo;
  if ( !ServantScriptEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantScriptEntity_TypeInfo);
    v9 = ServantScriptEntity_TypeInfo;
  }
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)extendData,
          (Il2CppObject *)v9->static_fields->PHOT_SVT_SCALE_KEY,
          (const MethodInfo_308DC3C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return defaultValue;
  v11 = ServantScriptEntity_TypeInfo;
  v12 = this->fields.extendData;
  if ( !ServantScriptEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantScriptEntity_TypeInfo);
  if ( !v12 )
    sub_1B00F28(v11, v10);
  Item = System_Collections_Generic_Dictionary_object__object___get_Item(
           (System_Collections_Generic_Dictionary_object__object__o *)v12,
           (Il2CppObject *)ServantScriptEntity_TypeInfo->static_fields->PHOT_SVT_SCALE_KEY,
           (const MethodInfo_308D9C8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !System_Convert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  return System_Convert__ToSingle(Item, 0LL);
}


float __fastcall ServantScriptEntity__GetPhotoSvtScaleLeft(
        ServantScriptEntity_o *this,
        float defaultValue,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *extendData; // x20
  ServantScriptEntity_c *v9; // x0
  __int64 v10; // x1
  ServantScriptEntity_c *v11; // x0
  struct System_Collections_Generic_Dictionary_string__object__o *v12; // x19
  Il2CppObject *Item; // x19

  if ( (byte_48E2F8C & 1) == 0 )
  {
    sub_1B00CCC(&System_Convert_TypeInfo, method);
    sub_1B00CCC(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v5);
    sub_1B00CCC(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v6);
    sub_1B00CCC(&ServantScriptEntity_TypeInfo, v7);
    byte_48E2F8C = 1;
  }
  extendData = this->fields.extendData;
  if ( !extendData )
    return defaultValue;
  v9 = ServantScriptEntity_TypeInfo;
  if ( !ServantScriptEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantScriptEntity_TypeInfo);
    v9 = ServantScriptEntity_TypeInfo;
  }
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)extendData,
          (Il2CppObject *)v9->static_fields->PHOT_SVT_SCALE_LEFT_KEY,
          (const MethodInfo_308DC3C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return defaultValue;
  v11 = ServantScriptEntity_TypeInfo;
  v12 = this->fields.extendData;
  if ( !ServantScriptEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantScriptEntity_TypeInfo);
  if ( !v12 )
    sub_1B00F28(v11, v10);
  Item = System_Collections_Generic_Dictionary_object__object___get_Item(
           (System_Collections_Generic_Dictionary_object__object__o *)v12,
           (Il2CppObject *)ServantScriptEntity_TypeInfo->static_fields->PHOT_SVT_SCALE_LEFT_KEY,
           (const MethodInfo_308D9C8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !System_Convert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  return System_Convert__ToSingle(Item, 0LL);
}


float __fastcall ServantScriptEntity__GetPhotoSvtScaleRight(
        ServantScriptEntity_o *this,
        float defaultValue,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *extendData; // x20
  ServantScriptEntity_c *v9; // x0
  __int64 v10; // x1
  ServantScriptEntity_c *v11; // x0
  struct System_Collections_Generic_Dictionary_string__object__o *v12; // x19
  Il2CppObject *Item; // x19

  if ( (byte_48E2F8B & 1) == 0 )
  {
    sub_1B00CCC(&System_Convert_TypeInfo, method);
    sub_1B00CCC(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v5);
    sub_1B00CCC(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v6);
    sub_1B00CCC(&ServantScriptEntity_TypeInfo, v7);
    byte_48E2F8B = 1;
  }
  extendData = this->fields.extendData;
  if ( !extendData )
    return defaultValue;
  v9 = ServantScriptEntity_TypeInfo;
  if ( !ServantScriptEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantScriptEntity_TypeInfo);
    v9 = ServantScriptEntity_TypeInfo;
  }
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)extendData,
          (Il2CppObject *)v9->static_fields->PHOT_SVT_SCALE_RIGHT_KEY,
          (const MethodInfo_308DC3C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return defaultValue;
  v11 = ServantScriptEntity_TypeInfo;
  v12 = this->fields.extendData;
  if ( !ServantScriptEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantScriptEntity_TypeInfo);
  if ( !v12 )
    sub_1B00F28(v11, v10);
  Item = System_Collections_Generic_Dictionary_object__object___get_Item(
           (System_Collections_Generic_Dictionary_object__object__o *)v12,
           (Il2CppObject *)ServantScriptEntity_TypeInfo->static_fields->PHOT_SVT_SCALE_RIGHT_KEY,
           (const MethodInfo_308D9C8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !System_Convert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  return System_Convert__ToSingle(Item, 0LL);
}


System_Int32_array *__fastcall ServantScriptEntity__GetTerminalOffset(
        ServantScriptEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  ServantScriptEntity_c *v4; // x0

  if ( (byte_48E2F84 & 1) == 0 )
  {
    sub_1B00CCC(&ServantScriptEntity_TypeInfo, method);
    byte_48E2F84 = 1;
  }
  v4 = ServantScriptEntity_TypeInfo;
  if ( !ServantScriptEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantScriptEntity_TypeInfo);
    v4 = ServantScriptEntity_TypeInfo;
  }
  return ServantScriptEntity__GetExtendOffset(this, v4->static_fields->TERMINAL_OFFSET_KEY, 0LL, v2);
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
  System_Collections_Generic_Dictionary_string__object__c *v15; // x1
  int *Item; // x0
  struct System_Collections_Generic_Dictionary_string__object__o *v17; // x21
  __int64 methodPtr_low; // x9
  Il2CppObject *v19; // x0
  __int64 v20; // x9
  ServantScriptEntity_c *v21; // x0
  ServantScriptEntity_c *v22; // x0
  __int64 v23; // x2
  __int64 v24; // x3
  int32_t v25; // w22
  __int64 v26; // x2
  __int64 v27; // x3
  int64_t v28; // x21
  System_String_o *v29; // x0
  int32_t v30; // w19
  ServantScriptEntity_o *v31; // x0
  System_String_o *v32; // x1
  System_Int32_array *v33; // x2
  const MethodInfo *v34; // x3

  if ( (byte_48E2F83 & 1) == 0 )
  {
    sub_1B00CCC(&CondType_TypeInfo, *(_QWORD *)&friendship);
    sub_1B00CCC(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v5);
    sub_1B00CCC(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v6);
    sub_1B00CCC(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v7);
    sub_1B00CCC(&long_TypeInfo, v8);
    sub_1B00CCC(&Method_System_Collections_Generic_List_object__get_Count__, v9);
    sub_1B00CCC(&Method_System_Collections_Generic_List_object__get_Item__, v10);
    sub_1B00CCC(&System_Collections_Generic_List_object__TypeInfo, v11);
    sub_1B00CCC(&ServantScriptEntity_TypeInfo, v12);
    byte_48E2F83 = 1;
  }
  extendData = this->fields.extendData;
  if ( !extendData )
    goto LABEL_34;
  v14 = ServantScriptEntity_TypeInfo;
  if ( !ServantScriptEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantScriptEntity_TypeInfo);
    v14 = ServantScriptEntity_TypeInfo;
  }
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)extendData,
          (Il2CppObject *)v14->static_fields->COND_KEY,
          (const MethodInfo_308DC3C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    goto LABEL_34;
  Item = (int *)ServantScriptEntity_TypeInfo;
  v17 = this->fields.extendData;
  if ( !ServantScriptEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantScriptEntity_TypeInfo);
  if ( !v17 )
    goto LABEL_41;
  Item = (int *)System_Collections_Generic_Dictionary_object__object___get_Item(
                  (System_Collections_Generic_Dictionary_object__object__o *)v17,
                  (Il2CppObject *)ServantScriptEntity_TypeInfo->static_fields->COND_KEY,
                  (const MethodInfo_308D9C8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !Item )
    return (char)Item;
  methodPtr_low = LOBYTE(System_Collections_Generic_List_object__TypeInfo->vtable._0_Equals.methodPtr);
  if ( *(unsigned __int8 *)(*(_QWORD *)Item + 304LL) < (unsigned int)methodPtr_low
    || *(System_Collections_Generic_List_object__c **)(*(_QWORD *)(*(_QWORD *)Item + 200LL) + 8 * methodPtr_low - 8) != System_Collections_Generic_List_object__TypeInfo )
  {
    goto LABEL_42;
  }
  if ( Item[6] < 1 )
    goto LABEL_34;
  v19 = System_Collections_Generic_List_object___get_Item(
          (System_Collections_Generic_List_object__o *)Item,
          0,
          (const MethodInfo_33C1700 *)Method_System_Collections_Generic_List_object__get_Item__);
  v17 = (struct System_Collections_Generic_Dictionary_string__object__o *)v19;
  if ( v19 )
  {
    v15 = System_Collections_Generic_Dictionary_string__object__TypeInfo;
    v20 = LOBYTE(System_Collections_Generic_Dictionary_string__object__TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v19->klass->vtable[0].methodPtr) < (unsigned int)v20
      || (System_Collections_Generic_Dictionary_string__object__c *)v19->klass->_2.typeHierarchy[v20 - 1] != System_Collections_Generic_Dictionary_string__object__TypeInfo )
    {
LABEL_43:
      sub_1B011E8(v17);
      LOBYTE(Item) = (unsigned __int8)ServantScriptEntity__GetExtendOffset(v31, v32, v33, v34);
      return (char)Item;
    }
  }
  Item = (int *)ServantScriptEntity_TypeInfo;
  if ( !ServantScriptEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantScriptEntity_TypeInfo);
  if ( !v17 )
    goto LABEL_41;
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)v17,
          (Il2CppObject *)ServantScriptEntity_TypeInfo->static_fields->COND_TYPE_KEY,
          (const MethodInfo_308DC3C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    goto LABEL_34;
  v21 = ServantScriptEntity_TypeInfo;
  if ( !ServantScriptEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantScriptEntity_TypeInfo);
    v21 = ServantScriptEntity_TypeInfo;
  }
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)v17,
          (Il2CppObject *)v21->static_fields->COND_VALUE_KEY,
          (const MethodInfo_308DC3C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    goto LABEL_34;
  v22 = ServantScriptEntity_TypeInfo;
  if ( !ServantScriptEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantScriptEntity_TypeInfo);
    v22 = ServantScriptEntity_TypeInfo;
  }
  Item = (int *)System_Collections_Generic_Dictionary_object__object___get_Item(
                  (System_Collections_Generic_Dictionary_object__object__o *)v17,
                  (Il2CppObject *)v22->static_fields->COND_TYPE_KEY,
                  (const MethodInfo_308D9C8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !Item )
    goto LABEL_41;
  if ( *(Il2CppClass **)(*(_QWORD *)Item + 64LL) != long_TypeInfo->_1.element_class )
    goto LABEL_42;
  v25 = *(_DWORD *)j_il2cpp_object_unbox_0(Item, long_TypeInfo, v23, v24);
  Item = (int *)System_Collections_Generic_Dictionary_object__object___get_Item(
                  (System_Collections_Generic_Dictionary_object__object__o *)v17,
                  (Il2CppObject *)ServantScriptEntity_TypeInfo->static_fields->COND_VALUE_KEY,
                  (const MethodInfo_308D9C8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !Item )
    goto LABEL_41;
  if ( *(Il2CppClass **)(*(_QWORD *)Item + 64LL) != long_TypeInfo->_1.element_class )
  {
LABEL_42:
    sub_1B011E8(Item);
    goto LABEL_43;
  }
  v28 = *(_QWORD *)j_il2cpp_object_unbox_0(Item, long_TypeInfo, v26, v27);
  if ( (friendship & 0x80000000) == 0 )
  {
    if ( v25 == 99 )
    {
      LOBYTE(Item) = v28 >= (unsigned int)friendship;
      return (char)Item;
    }
    if ( v25 == 98 )
    {
      LOBYTE(Item) = v28 <= (unsigned int)friendship;
      return (char)Item;
    }
LABEL_34:
    LOBYTE(Item) = 0;
    return (char)Item;
  }
  Item = (int *)System_Int32__ToString((int)this + 16, 0LL);
  if ( !Item )
LABEL_41:
    sub_1B00F28(Item, v15);
  v29 = System_String__Substring_60344744((System_String_o *)Item, 0, Item[4] - 1, 0LL);
  v30 = System_Int32__Parse(v29, 0LL);
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  LOBYTE(Item) = CondType__IsOpen(v25, v30, v28, 0, 0LL);
  return (char)Item;
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
  struct System_Collections_Generic_Dictionary_string__object__o *extendData; // x21
  unsigned __int64 s_Zero; // x19
  ServantScriptEntity_c *v11; // x0
  __int64 v12; // x1
  ServantScriptEntity_c *v13; // x0
  struct System_Collections_Generic_Dictionary_string__object__o *v14; // x20
  System_Collections_Generic_List_object__o *Item; // x0
  System_Collections_Generic_List_object__o *v16; // x20
  __int64 methodPtr_low; // x10
  Il2CppObject *v18; // x0
  unsigned __int64 v19; // x0
  int size; // w8
  Il2CppObject *v22; // x19
  Il2CppObject *v23; // x0

  if ( (byte_48E2F80 & 1) == 0 )
  {
    sub_1B00CCC(&System_Convert_TypeInfo, method);
    sub_1B00CCC(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v3);
    sub_1B00CCC(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v4);
    sub_1B00CCC(&Method_System_Collections_Generic_List_object__get_Count__, v5);
    sub_1B00CCC(&Method_System_Collections_Generic_List_object__get_Item__, v6);
    sub_1B00CCC(&System_Collections_Generic_List_object__TypeInfo, v7);
    sub_1B00CCC(&ServantScriptEntity_TypeInfo, v8);
    byte_48E2F80 = 1;
  }
  if ( !byte_48E2FA7 )
  {
    sub_1B00CCC(&UnityEngine_Vector2Int_TypeInfo, method);
    byte_48E2FA7 = 1;
  }
  extendData = this->fields.extendData;
  s_Zero = (unsigned __int64)UnityEngine_Vector2Int_TypeInfo->static_fields->s_Zero;
  if ( extendData )
  {
    v11 = ServantScriptEntity_TypeInfo;
    if ( !ServantScriptEntity_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantScriptEntity_TypeInfo);
      v11 = ServantScriptEntity_TypeInfo;
    }
    if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
           (System_Collections_Generic_Dictionary_object__object__o *)extendData,
           (Il2CppObject *)v11->static_fields->FACE_SIZE_KEY,
           (const MethodInfo_308DC3C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    {
      v13 = ServantScriptEntity_TypeInfo;
      v14 = this->fields.extendData;
      if ( !ServantScriptEntity_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantScriptEntity_TypeInfo);
      if ( !v14 )
        sub_1B00F28(v13, v12);
      Item = (System_Collections_Generic_List_object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                            (System_Collections_Generic_Dictionary_object__object__o *)v14,
                                                            (Il2CppObject *)ServantScriptEntity_TypeInfo->static_fields->FACE_SIZE_KEY,
                                                            (const MethodInfo_308D9C8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
      v16 = Item;
      if ( Item
        && (methodPtr_low = LOBYTE(System_Collections_Generic_List_object__TypeInfo->vtable._0_Equals.methodPtr),
            LOBYTE(Item->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low)
        && (System_Collections_Generic_List_object__c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == System_Collections_Generic_List_object__TypeInfo )
      {
        size = Item->fields._size;
        if ( size != 1 )
        {
          if ( size >= 2 )
          {
            s_Zero = (unsigned __int64)System_Collections_Generic_List_object___get_Item(
                                         Item,
                                         0,
                                         (const MethodInfo_33C1700 *)Method_System_Collections_Generic_List_object__get_Item__);
            if ( !System_Convert_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
            LODWORD(s_Zero) = System_Convert__ToInt32((Il2CppObject *)s_Zero, 0LL);
            v23 = System_Collections_Generic_List_object___get_Item(
                    v16,
                    1,
                    (const MethodInfo_33C1700 *)Method_System_Collections_Generic_List_object__get_Item__);
            LODWORD(v19) = System_Convert__ToInt32(v23, 0LL);
          }
          else
          {
            v19 = HIDWORD(s_Zero);
          }
          return (UnityEngine_Vector2Int_o)((unsigned int)s_Zero | ((unsigned __int64)(unsigned int)v19 << 32));
        }
        v22 = System_Collections_Generic_List_object___get_Item(
                Item,
                0,
                (const MethodInfo_33C1700 *)Method_System_Collections_Generic_List_object__get_Item__);
        if ( !System_Convert_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
        v18 = v22;
      }
      else
      {
        if ( !System_Convert_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
        v18 = (Il2CppObject *)v16;
      }
      LODWORD(v19) = System_Convert__ToInt32(v18, 0LL);
      LODWORD(s_Zero) = v19;
      return (UnityEngine_Vector2Int_o)((unsigned int)s_Zero | ((unsigned __int64)(unsigned int)v19 << 32));
    }
  }
  return (UnityEngine_Vector2Int_o)s_Zero;
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
  __int64 v11; // x2
  __int64 v12; // x3
  ServantScriptEntity_o *v14; // x0
  const MethodInfo *v15; // x1

  if ( (byte_48E2F81 & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, method);
    sub_1B00CCC(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v3);
    sub_1B00CCC(&long_TypeInfo, v4);
    sub_1B00CCC(&ServantScriptEntity_TypeInfo, v5);
    byte_48E2F81 = 1;
  }
  extendData = this->fields.extendData;
  if ( !extendData )
    return 0;
  v7 = ServantScriptEntity_TypeInfo;
  if ( !ServantScriptEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantScriptEntity_TypeInfo);
    v7 = ServantScriptEntity_TypeInfo;
  }
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)extendData,
          (Il2CppObject *)v7->static_fields->MYROOM_FORM_KEY,
          (const MethodInfo_308DC3C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return 0;
  Item = ServantScriptEntity_TypeInfo;
  v10 = this->fields.extendData;
  if ( !ServantScriptEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantScriptEntity_TypeInfo);
  if ( !v10
    || (Item = System_Collections_Generic_Dictionary_object__object___get_Item(
                 (System_Collections_Generic_Dictionary_object__object__o *)v10,
                 (Il2CppObject *)ServantScriptEntity_TypeInfo->static_fields->MYROOM_FORM_KEY,
                 (const MethodInfo_308D9C8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
    sub_1B00F28(Item, v8);
  }
  if ( *(Il2CppClass **)(*(_QWORD *)Item + 64LL) == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(Item, long_TypeInfo, v11, v12);
  sub_1B011E8(Item);
  return ServantScriptEntity__isMultipleForm(v14, v15);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Vector2_o __fastcall ServantScriptEntity__getOffset(
        ServantScriptEntity_o *this,
        int32_t offsetKind,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  System_Int32_array *TerminalOffset; // x0
  __int64 v8; // x1
  __int64 v9; // x10
  __int64 v10; // x8
  int32_t offsetX; // w8
  int32_t offsetY; // w9
  float v13; // s0
  float v14; // s1
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  if ( (byte_48E2F7F & 1) == 0 )
  {
    sub_1B00CCC(&Method_DataManager_GetMaster_ServantScriptAddMaster___, *(_QWORD *)&offsetKind);
    sub_1B00CCC(&DataManager_TypeInfo, v5);
    sub_1B00CCC(&Method_DataMasterBase_ServantScriptAddMaster__ServantScriptAddEntity__int__TryGetEntity__, v6);
    byte_48E2F7F = 1;
  }
  entity = 0LL;
  if ( (unsigned int)(offsetKind - 3) > 1 )
  {
    switch ( offsetKind )
    {
      case 1:
      case 2:
      case 5:
        goto LABEL_16;
      case 6:
        TerminalOffset = ServantScriptEntity__GetTerminalOffset(this, *(const MethodInfo **)&offsetKind);
        if ( TerminalOffset )
          goto LABEL_19;
        goto LABEL_23;
      case 7:
        TerminalOffset = ServantScriptEntity__GetBattleBondOffset(this, *(const MethodInfo **)&offsetKind);
        if ( !TerminalOffset )
          goto LABEL_23;
LABEL_19:
        if ( TerminalOffset->max_length < 2 )
          sub_1B00F30(TerminalOffset, v8);
        offsetX = TerminalOffset->m_Items[1] + this->fields.offsetXMyroom;
        offsetY = TerminalOffset->m_Items[2] + this->fields.offsetYMyroom;
        break;
      default:
        offsetX = this->fields.offsetX;
        offsetY = this->fields.offsetY;
        break;
    }
  }
  else
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    TerminalOffset = (System_Int32_array *)DataManager__GetMaster_object_((const MethodInfo_2D62BBC *)Method_DataManager_GetMaster_ServantScriptAddMaster___);
    if ( !TerminalOffset )
      goto LABEL_23;
    TerminalOffset = (System_Int32_array *)DataMasterBase_object__object__int___TryGetEntity(
                                             (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalOffset,
                                             &entity,
                                             this->fields.id,
                                             (const MethodInfo_2FE6AA0 *)Method_DataMasterBase_ServantScriptAddMaster__ServantScriptAddEntity__int__TryGetEntity__);
    if ( ((unsigned __int8)TerminalOffset & 1) == 0 )
    {
LABEL_16:
      offsetX = this->fields.offsetXMyroom;
      offsetY = this->fields.offsetYMyroom;
      goto LABEL_21;
    }
    if ( !entity )
LABEL_23:
      sub_1B00F28(TerminalOffset, v8);
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
LABEL_21:
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

  if ( (byte_48E2F82 & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, method);
    sub_1B00CCC(&ServantScriptEntity_TypeInfo, v3);
    byte_48E2F82 = 1;
  }
  extendData = this->fields.extendData;
  if ( !extendData )
    return 0;
  v5 = ServantScriptEntity_TypeInfo;
  if ( !ServantScriptEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantScriptEntity_TypeInfo);
    v5 = ServantScriptEntity_TypeInfo;
  }
  return System_Collections_Generic_Dictionary_object__object___ContainsKey(
           (System_Collections_Generic_Dictionary_object__object__o *)extendData,
           (Il2CppObject *)v5->static_fields->COMBINE_RESULT_FORM_KEY,
           (const MethodInfo_308DC3C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
}