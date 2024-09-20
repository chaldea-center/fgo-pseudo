void __fastcall ServantScriptEntity___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3
  int32_t v3; // w1
  struct ServantScriptEntity_StaticFields *static_fields; // x0
  int32_t v5; // w2
  int32_t v6; // w3
  int32_t v7; // w1
  struct ServantScriptEntity_StaticFields *v8; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  int32_t v11; // w1
  struct ServantScriptEntity_StaticFields *v12; // x0
  int32_t v13; // w2
  int32_t v14; // w3
  int32_t v15; // w1
  struct ServantScriptEntity_StaticFields *v16; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  int32_t v19; // w1
  struct ServantScriptEntity_StaticFields *v20; // x0
  int32_t v21; // w2
  int32_t v22; // w3
  int32_t v23; // w1
  struct ServantScriptEntity_StaticFields *v24; // x0
  int32_t v25; // w2
  int32_t v26; // w3
  int32_t v27; // w1
  struct ServantScriptEntity_StaticFields *v28; // x0
  int32_t v29; // w2
  int32_t v30; // w3
  int32_t v31; // w1
  struct ServantScriptEntity_StaticFields *v32; // x0
  int32_t v33; // w2
  int32_t v34; // w3
  struct ServantScriptEntity_StaticFields *v35; // x0
  int32_t v36; // w1
  int32_t v37; // w2
  int32_t v38; // w3
  struct ServantScriptEntity_StaticFields *v39; // x0
  int32_t v40; // w1
  int32_t v41; // w2
  int32_t v42; // w3
  struct ServantScriptEntity_StaticFields *v43; // x0
  int32_t v44; // w1
  int32_t v45; // w2
  int32_t v46; // w3
  struct ServantScriptEntity_StaticFields *v47; // x0
  int32_t v48; // w1
  int32_t v49; // w2
  int32_t v50; // w3
  struct ServantScriptEntity_StaticFields *v51; // x0
  int32_t v52; // w1
  int32_t v53; // w2
  int32_t v54; // w3

  if ( (byte_4A5B95C & 1) == 0 )
  {
    sub_1B885B0(&ServantScriptEntity_TypeInfo);
    sub_1B885B0(&StringLiteral_22520/*"photoSvtScale"*/);
    sub_1B885B0(&StringLiteral_22518/*"photoSvtPositionLeft"*/);
    sub_1B885B0(&StringLiteral_22519/*"photoSvtPositionRight"*/);
    sub_1B885B0(&StringLiteral_3229/*"BattleBondOffset"*/);
    sub_1B885B0(&StringLiteral_24501/*"value"*/);
    sub_1B885B0(&StringLiteral_22517/*"photoSvtPosition"*/);
    sub_1B885B0(&StringLiteral_21978/*"myroomForm"*/);
    sub_1B885B0(&StringLiteral_22521/*"photoSvtScaleLeft"*/);
    sub_1B885B0(&StringLiteral_18203/*"conds"*/);
    sub_1B885B0(&StringLiteral_22522/*"photoSvtScaleRight"*/);
    sub_1B885B0(&StringLiteral_18119/*"combineResultMultipleForm"*/);
    sub_1B885B0(&StringLiteral_19355/*"faceSize"*/);
    sub_1B885B0(&StringLiteral_13609/*"TerminalOffset"*/);
    sub_1B885B0(&StringLiteral_18202/*"condType"*/);
    byte_4A5B95C = 1;
  }
  ServantScriptEntity_TypeInfo->static_fields->FACE_SIZE_KEY = (struct System_String_o *)StringLiteral_19355/*"faceSize"*/;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)ServantScriptEntity_TypeInfo->static_fields,
    StringLiteral_19355/*"faceSize"*/,
    v1,
    v2);
  v3 = StringLiteral_21978/*"myroomForm"*/;
  static_fields = ServantScriptEntity_TypeInfo->static_fields;
  static_fields->MYROOM_FORM_KEY = (struct System_String_o *)StringLiteral_21978/*"myroomForm"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->MYROOM_FORM_KEY, v3, v5, v6);
  v7 = StringLiteral_18119/*"combineResultMultipleForm"*/;
  v8 = ServantScriptEntity_TypeInfo->static_fields;
  v8->COMBINE_RESULT_FORM_KEY = (struct System_String_o *)StringLiteral_18119/*"combineResultMultipleForm"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v8->COMBINE_RESULT_FORM_KEY, v7, v9, v10);
  v11 = StringLiteral_18203/*"conds"*/;
  v12 = ServantScriptEntity_TypeInfo->static_fields;
  v12->COND_KEY = (struct System_String_o *)StringLiteral_18203/*"conds"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v12->COND_KEY, v11, v13, v14);
  v15 = StringLiteral_18202/*"condType"*/;
  v16 = ServantScriptEntity_TypeInfo->static_fields;
  v16->COND_TYPE_KEY = (struct System_String_o *)StringLiteral_18202/*"condType"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v16->COND_TYPE_KEY, v15, v17, v18);
  v19 = StringLiteral_24501/*"value"*/;
  v20 = ServantScriptEntity_TypeInfo->static_fields;
  v20->COND_VALUE_KEY = (struct System_String_o *)StringLiteral_24501/*"value"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v20->COND_VALUE_KEY, v19, v21, v22);
  v23 = StringLiteral_13609/*"TerminalOffset"*/;
  v24 = ServantScriptEntity_TypeInfo->static_fields;
  v24->TERMINAL_OFFSET_KEY = (struct System_String_o *)StringLiteral_13609/*"TerminalOffset"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v24->TERMINAL_OFFSET_KEY, v23, v25, v26);
  v27 = StringLiteral_3229/*"BattleBondOffset"*/;
  v28 = ServantScriptEntity_TypeInfo->static_fields;
  v28->BATTLE_BOND_OFFSET_KEY = (struct System_String_o *)StringLiteral_3229/*"BattleBondOffset"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v28->BATTLE_BOND_OFFSET_KEY, v27, v29, v30);
  v31 = StringLiteral_22517/*"photoSvtPosition"*/;
  v32 = ServantScriptEntity_TypeInfo->static_fields;
  v32->PHOT_SVT_POSITION_KEY = (struct System_String_o *)StringLiteral_22517/*"photoSvtPosition"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v32->PHOT_SVT_POSITION_KEY, v31, v33, v34);
  v35 = ServantScriptEntity_TypeInfo->static_fields;
  v36 = StringLiteral_22519/*"photoSvtPositionRight"*/;
  v35->PHOT_SVT_POSITION_RIGHT_KEY = (struct System_String_o *)StringLiteral_22519/*"photoSvtPositionRight"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v35->PHOT_SVT_POSITION_RIGHT_KEY, v36, v37, v38);
  v39 = ServantScriptEntity_TypeInfo->static_fields;
  v40 = StringLiteral_22518/*"photoSvtPositionLeft"*/;
  v39->PHOT_SVT_POSITION_LEFT_KEY = (struct System_String_o *)StringLiteral_22518/*"photoSvtPositionLeft"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v39->PHOT_SVT_POSITION_LEFT_KEY, v40, v41, v42);
  v43 = ServantScriptEntity_TypeInfo->static_fields;
  v44 = StringLiteral_22520/*"photoSvtScale"*/;
  v43->PHOT_SVT_SCALE_KEY = (struct System_String_o *)StringLiteral_22520/*"photoSvtScale"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v43->PHOT_SVT_SCALE_KEY, v44, v45, v46);
  v47 = ServantScriptEntity_TypeInfo->static_fields;
  v48 = StringLiteral_22522/*"photoSvtScaleRight"*/;
  v47->PHOT_SVT_SCALE_RIGHT_KEY = (struct System_String_o *)StringLiteral_22522/*"photoSvtScaleRight"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v47->PHOT_SVT_SCALE_RIGHT_KEY, v48, v49, v50);
  v51 = ServantScriptEntity_TypeInfo->static_fields;
  v52 = StringLiteral_22521/*"photoSvtScaleLeft"*/;
  v51->PHOT_SVT_SCALE_LEFT_KEY = (struct System_String_o *)StringLiteral_22521/*"photoSvtScaleLeft"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v51->PHOT_SVT_SCALE_LEFT_KEY, v52, v53, v54);
}


void __fastcall ServantScriptEntity___ctor(ServantScriptEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4A5B95B & 1) == 0 )
  {
    sub_1B885B0(&Method_DataEntityBase_string___ctor__);
    byte_4A5B95B = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_311D7AC *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall ServantScriptEntity__CreatePK(int32_t id, int32_t form, const MethodInfo *method)
{
  if ( (byte_4A5B94C & 1) == 0 )
  {
    sub_1B885B0(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_4A5B94C = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           id,
           form,
           (const MethodInfo_2E7DB2C *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall ServantScriptEntity__CreatePrimaryKey(
        ServantScriptEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  int32_t form; // w19
  int32_t id; // w20

  if ( (byte_4A5B94B & 1) == 0 )
  {
    sub_1B885B0(&ServantScriptEntity_TypeInfo);
    byte_4A5B94B = 1;
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

  if ( (byte_4A5B953 & 1) == 0 )
  {
    sub_1B885B0(&ServantScriptEntity_TypeInfo);
    byte_4A5B953 = 1;
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
  struct System_Collections_Generic_Dictionary_string__object__o *extendData; // x0
  __int64 v8; // x1
  System_Collections_Generic_Dictionary_object__object__o *Item; // x0
  __int64 methodPtr_low; // x10
  System_Collections_Generic_List_object__c *v11; // x9
  System_Collections_Generic_List_object__o *v12; // x20
  unsigned __int64 v13; // x21
  char v14; // w8
  char v15; // w25
  Il2CppObject *v16; // x22
  char *v17; // x9

  if ( (byte_4A5B954 & 1) == 0 )
  {
    sub_1B885B0(&System_Convert_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1B885B0(&int___TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_object__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_object__get_Item__);
    sub_1B885B0(&System_Collections_Generic_List_object__TypeInfo);
    byte_4A5B954 = 1;
  }
  if ( !defaultValue )
    defaultValue = (System_Int32_array *)sub_1B88658(int___TypeInfo, 2LL);
  extendData = this->fields.extendData;
  if ( extendData
    && System_Collections_Generic_Dictionary_object__object___ContainsKey(
         (System_Collections_Generic_Dictionary_object__object__o *)extendData,
         (Il2CppObject *)key,
         (const MethodInfo_31C73BC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    Item = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.extendData;
    if ( !Item )
      goto LABEL_25;
    Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                        Item,
                                                                        (Il2CppObject *)key,
                                                                        (const MethodInfo_31C7148 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( Item )
    {
      methodPtr_low = LOBYTE(System_Collections_Generic_List_object__TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(Item->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low )
      {
        v11 = (System_Collections_Generic_List_object__c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1];
        v12 = v11 == System_Collections_Generic_List_object__TypeInfo
            ? (System_Collections_Generic_List_object__o *)Item
            : 0LL;
        if ( v11 == System_Collections_Generic_List_object__TypeInfo )
        {
          if ( v12 )
          {
            v13 = 0LL;
            v14 = 1;
            while ( 1 )
            {
              v15 = v14;
              if ( (__int64)v13 >= v12->fields._size )
              {
                Item = 0LL;
              }
              else
              {
                v16 = System_Collections_Generic_List_object___get_Item(
                        v12,
                        v13,
                        (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_object__get_Item__);
                if ( !System_Convert_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
                Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Convert__ToInt32(v16, 0LL);
              }
              if ( !defaultValue )
                break;
              if ( v13 >= defaultValue->max_length )
                sub_1B88814(Item, v8);
              v14 = 0;
              v17 = (char *)defaultValue + 4 * v13;
              v13 = 1LL;
              *((_DWORD *)v17 + 8) = (_DWORD)Item;
              if ( (v15 & 1) == 0 )
                return defaultValue;
            }
          }
LABEL_25:
          sub_1B8880C(Item, v8);
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

  if ( (byte_4A5B955 & 1) == 0 )
  {
    sub_1B885B0(&ServantScriptEntity_TypeInfo);
    byte_4A5B955 = 1;
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

  if ( (byte_4A5B957 & 1) == 0 )
  {
    sub_1B885B0(&ServantScriptEntity_TypeInfo);
    byte_4A5B957 = 1;
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

  if ( (byte_4A5B956 & 1) == 0 )
  {
    sub_1B885B0(&ServantScriptEntity_TypeInfo);
    byte_4A5B956 = 1;
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
  struct System_Collections_Generic_Dictionary_string__object__o *extendData; // x20
  ServantScriptEntity_c *v6; // x0
  __int64 v7; // x1
  ServantScriptEntity_c *v8; // x0
  struct System_Collections_Generic_Dictionary_string__object__o *v9; // x19
  Il2CppObject *Item; // x19

  if ( (byte_4A5B958 & 1) == 0 )
  {
    sub_1B885B0(&System_Convert_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1B885B0(&ServantScriptEntity_TypeInfo);
    byte_4A5B958 = 1;
  }
  extendData = this->fields.extendData;
  if ( !extendData )
    return defaultValue;
  v6 = ServantScriptEntity_TypeInfo;
  if ( !ServantScriptEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantScriptEntity_TypeInfo);
    v6 = ServantScriptEntity_TypeInfo;
  }
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)extendData,
          (Il2CppObject *)v6->static_fields->PHOT_SVT_SCALE_KEY,
          (const MethodInfo_31C73BC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return defaultValue;
  v8 = ServantScriptEntity_TypeInfo;
  v9 = this->fields.extendData;
  if ( !ServantScriptEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantScriptEntity_TypeInfo);
  if ( !v9 )
    sub_1B8880C(v8, v7);
  Item = System_Collections_Generic_Dictionary_object__object___get_Item(
           (System_Collections_Generic_Dictionary_object__object__o *)v9,
           (Il2CppObject *)ServantScriptEntity_TypeInfo->static_fields->PHOT_SVT_SCALE_KEY,
           (const MethodInfo_31C7148 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !System_Convert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  return System_Convert__ToSingle(Item, 0LL);
}


float __fastcall ServantScriptEntity__GetPhotoSvtScaleLeft(
        ServantScriptEntity_o *this,
        float defaultValue,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *extendData; // x20
  ServantScriptEntity_c *v6; // x0
  __int64 v7; // x1
  ServantScriptEntity_c *v8; // x0
  struct System_Collections_Generic_Dictionary_string__object__o *v9; // x19
  Il2CppObject *Item; // x19

  if ( (byte_4A5B95A & 1) == 0 )
  {
    sub_1B885B0(&System_Convert_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1B885B0(&ServantScriptEntity_TypeInfo);
    byte_4A5B95A = 1;
  }
  extendData = this->fields.extendData;
  if ( !extendData )
    return defaultValue;
  v6 = ServantScriptEntity_TypeInfo;
  if ( !ServantScriptEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantScriptEntity_TypeInfo);
    v6 = ServantScriptEntity_TypeInfo;
  }
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)extendData,
          (Il2CppObject *)v6->static_fields->PHOT_SVT_SCALE_LEFT_KEY,
          (const MethodInfo_31C73BC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return defaultValue;
  v8 = ServantScriptEntity_TypeInfo;
  v9 = this->fields.extendData;
  if ( !ServantScriptEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantScriptEntity_TypeInfo);
  if ( !v9 )
    sub_1B8880C(v8, v7);
  Item = System_Collections_Generic_Dictionary_object__object___get_Item(
           (System_Collections_Generic_Dictionary_object__object__o *)v9,
           (Il2CppObject *)ServantScriptEntity_TypeInfo->static_fields->PHOT_SVT_SCALE_LEFT_KEY,
           (const MethodInfo_31C7148 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !System_Convert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  return System_Convert__ToSingle(Item, 0LL);
}


float __fastcall ServantScriptEntity__GetPhotoSvtScaleRight(
        ServantScriptEntity_o *this,
        float defaultValue,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *extendData; // x20
  ServantScriptEntity_c *v6; // x0
  __int64 v7; // x1
  ServantScriptEntity_c *v8; // x0
  struct System_Collections_Generic_Dictionary_string__object__o *v9; // x19
  Il2CppObject *Item; // x19

  if ( (byte_4A5B959 & 1) == 0 )
  {
    sub_1B885B0(&System_Convert_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1B885B0(&ServantScriptEntity_TypeInfo);
    byte_4A5B959 = 1;
  }
  extendData = this->fields.extendData;
  if ( !extendData )
    return defaultValue;
  v6 = ServantScriptEntity_TypeInfo;
  if ( !ServantScriptEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantScriptEntity_TypeInfo);
    v6 = ServantScriptEntity_TypeInfo;
  }
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)extendData,
          (Il2CppObject *)v6->static_fields->PHOT_SVT_SCALE_RIGHT_KEY,
          (const MethodInfo_31C73BC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return defaultValue;
  v8 = ServantScriptEntity_TypeInfo;
  v9 = this->fields.extendData;
  if ( !ServantScriptEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantScriptEntity_TypeInfo);
  if ( !v9 )
    sub_1B8880C(v8, v7);
  Item = System_Collections_Generic_Dictionary_object__object___get_Item(
           (System_Collections_Generic_Dictionary_object__object__o *)v9,
           (Il2CppObject *)ServantScriptEntity_TypeInfo->static_fields->PHOT_SVT_SCALE_RIGHT_KEY,
           (const MethodInfo_31C7148 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
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

  if ( (byte_4A5B952 & 1) == 0 )
  {
    sub_1B885B0(&ServantScriptEntity_TypeInfo);
    byte_4A5B952 = 1;
  }
  v4 = ServantScriptEntity_TypeInfo;
  if ( !ServantScriptEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantScriptEntity_TypeInfo);
    v4 = ServantScriptEntity_TypeInfo;
  }
  return ServantScriptEntity__GetExtendOffset(this, v4->static_fields->TERMINAL_OFFSET_KEY, 0LL, v2);
}


bool __fastcall ServantScriptEntity__IsCondEnable(
        ServantScriptEntity_o *this,
        int32_t friendship,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *extendData; // x21
  ServantScriptEntity_c *v6; // x0
  System_Collections_Generic_Dictionary_string__object__c *v7; // x1
  int *Item; // x0
  struct System_Collections_Generic_Dictionary_string__object__o *v9; // x21
  __int64 methodPtr_low; // x9
  Il2CppObject *v11; // x0
  __int64 v12; // x9
  ServantScriptEntity_c *v13; // x0
  ServantScriptEntity_c *v14; // x0
  __int64 v15; // x2
  __int64 v16; // x3
  int32_t v17; // w22
  __int64 v18; // x2
  __int64 v19; // x3
  int64_t v20; // x21
  System_String_o *v21; // x0
  int32_t v22; // w19
  ServantScriptEntity_o *v23; // x0
  System_String_o *v24; // x1
  System_Int32_array *v25; // x2
  const MethodInfo *v26; // x3

  if ( (byte_4A5B951 & 1) == 0 )
  {
    sub_1B885B0(&CondType_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1B885B0(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_1B885B0(&long_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_object__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_object__get_Item__);
    sub_1B885B0(&System_Collections_Generic_List_object__TypeInfo);
    sub_1B885B0(&ServantScriptEntity_TypeInfo);
    byte_4A5B951 = 1;
  }
  extendData = this->fields.extendData;
  if ( !extendData )
    goto LABEL_34;
  v6 = ServantScriptEntity_TypeInfo;
  if ( !ServantScriptEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantScriptEntity_TypeInfo);
    v6 = ServantScriptEntity_TypeInfo;
  }
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)extendData,
          (Il2CppObject *)v6->static_fields->COND_KEY,
          (const MethodInfo_31C73BC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    goto LABEL_34;
  Item = (int *)ServantScriptEntity_TypeInfo;
  v9 = this->fields.extendData;
  if ( !ServantScriptEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantScriptEntity_TypeInfo);
  if ( !v9 )
    goto LABEL_41;
  Item = (int *)System_Collections_Generic_Dictionary_object__object___get_Item(
                  (System_Collections_Generic_Dictionary_object__object__o *)v9,
                  (Il2CppObject *)ServantScriptEntity_TypeInfo->static_fields->COND_KEY,
                  (const MethodInfo_31C7148 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
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
  v11 = System_Collections_Generic_List_object___get_Item(
          (System_Collections_Generic_List_object__o *)Item,
          0,
          (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_object__get_Item__);
  v9 = (struct System_Collections_Generic_Dictionary_string__object__o *)v11;
  if ( v11 )
  {
    v7 = System_Collections_Generic_Dictionary_string__object__TypeInfo;
    v12 = LOBYTE(System_Collections_Generic_Dictionary_string__object__TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v11->klass->vtable[0].methodPtr) < (unsigned int)v12
      || (System_Collections_Generic_Dictionary_string__object__c *)v11->klass->_2.typeHierarchy[v12 - 1] != System_Collections_Generic_Dictionary_string__object__TypeInfo )
    {
LABEL_43:
      sub_1B88ACC(v9);
      LOBYTE(Item) = (unsigned __int8)ServantScriptEntity__GetExtendOffset(v23, v24, v25, v26);
      return (char)Item;
    }
  }
  Item = (int *)ServantScriptEntity_TypeInfo;
  if ( !ServantScriptEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantScriptEntity_TypeInfo);
  if ( !v9 )
    goto LABEL_41;
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)v9,
          (Il2CppObject *)ServantScriptEntity_TypeInfo->static_fields->COND_TYPE_KEY,
          (const MethodInfo_31C73BC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    goto LABEL_34;
  v13 = ServantScriptEntity_TypeInfo;
  if ( !ServantScriptEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantScriptEntity_TypeInfo);
    v13 = ServantScriptEntity_TypeInfo;
  }
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)v9,
          (Il2CppObject *)v13->static_fields->COND_VALUE_KEY,
          (const MethodInfo_31C73BC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    goto LABEL_34;
  v14 = ServantScriptEntity_TypeInfo;
  if ( !ServantScriptEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantScriptEntity_TypeInfo);
    v14 = ServantScriptEntity_TypeInfo;
  }
  Item = (int *)System_Collections_Generic_Dictionary_object__object___get_Item(
                  (System_Collections_Generic_Dictionary_object__object__o *)v9,
                  (Il2CppObject *)v14->static_fields->COND_TYPE_KEY,
                  (const MethodInfo_31C7148 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !Item )
    goto LABEL_41;
  if ( *(Il2CppClass **)(*(_QWORD *)Item + 64LL) != long_TypeInfo->_1.element_class )
    goto LABEL_42;
  v17 = *(_DWORD *)j_il2cpp_object_unbox_0(Item, long_TypeInfo, v15, v16);
  Item = (int *)System_Collections_Generic_Dictionary_object__object___get_Item(
                  (System_Collections_Generic_Dictionary_object__object__o *)v9,
                  (Il2CppObject *)ServantScriptEntity_TypeInfo->static_fields->COND_VALUE_KEY,
                  (const MethodInfo_31C7148 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !Item )
    goto LABEL_41;
  if ( *(Il2CppClass **)(*(_QWORD *)Item + 64LL) != long_TypeInfo->_1.element_class )
  {
LABEL_42:
    sub_1B88ACC(Item);
    goto LABEL_43;
  }
  v20 = *(_QWORD *)j_il2cpp_object_unbox_0(Item, long_TypeInfo, v18, v19);
  if ( (friendship & 0x80000000) == 0 )
  {
    if ( v17 == 99 )
    {
      LOBYTE(Item) = v20 >= (unsigned int)friendship;
      return (char)Item;
    }
    if ( v17 == 98 )
    {
      LOBYTE(Item) = v20 <= (unsigned int)friendship;
      return (char)Item;
    }
LABEL_34:
    LOBYTE(Item) = 0;
    return (char)Item;
  }
  Item = (int *)System_Int32__ToString((int)this + 16, 0LL);
  if ( !Item )
LABEL_41:
    sub_1B8880C(Item, v7);
  v21 = System_String__Substring_61726036((System_String_o *)Item, 0, Item[4] - 1, 0LL);
  v22 = System_Int32__Parse(v21, 0LL);
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  LOBYTE(Item) = CondType__IsOpen(v17, v22, v20, 0, 0LL, 0LL);
  return (char)Item;
}


UnityEngine_Vector2Int_o __fastcall ServantScriptEntity__getFaceSize(
        ServantScriptEntity_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *extendData; // x21
  unsigned __int64 s_Zero; // x19
  ServantScriptEntity_c *v5; // x0
  __int64 v6; // x1
  ServantScriptEntity_c *v7; // x0
  struct System_Collections_Generic_Dictionary_string__object__o *v8; // x20
  System_Collections_Generic_List_object__o *Item; // x0
  System_Collections_Generic_List_object__o *v10; // x20
  __int64 methodPtr_low; // x10
  Il2CppObject *v12; // x0
  unsigned __int64 v13; // x0
  int size; // w8
  Il2CppObject *v16; // x19
  Il2CppObject *v17; // x0

  if ( (byte_4A5B94E & 1) == 0 )
  {
    sub_1B885B0(&System_Convert_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1B885B0(&Method_System_Collections_Generic_List_object__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_object__get_Item__);
    sub_1B885B0(&System_Collections_Generic_List_object__TypeInfo);
    sub_1B885B0(&ServantScriptEntity_TypeInfo);
    byte_4A5B94E = 1;
  }
  if ( !byte_4A5BA58 )
  {
    sub_1B885B0(&UnityEngine_Vector2Int_TypeInfo);
    byte_4A5BA58 = 1;
  }
  extendData = this->fields.extendData;
  s_Zero = (unsigned __int64)UnityEngine_Vector2Int_TypeInfo->static_fields->s_Zero;
  if ( extendData )
  {
    v5 = ServantScriptEntity_TypeInfo;
    if ( !ServantScriptEntity_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantScriptEntity_TypeInfo);
      v5 = ServantScriptEntity_TypeInfo;
    }
    if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
           (System_Collections_Generic_Dictionary_object__object__o *)extendData,
           (Il2CppObject *)v5->static_fields->FACE_SIZE_KEY,
           (const MethodInfo_31C73BC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    {
      v7 = ServantScriptEntity_TypeInfo;
      v8 = this->fields.extendData;
      if ( !ServantScriptEntity_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantScriptEntity_TypeInfo);
      if ( !v8 )
        sub_1B8880C(v7, v6);
      Item = (System_Collections_Generic_List_object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                            (System_Collections_Generic_Dictionary_object__object__o *)v8,
                                                            (Il2CppObject *)ServantScriptEntity_TypeInfo->static_fields->FACE_SIZE_KEY,
                                                            (const MethodInfo_31C7148 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
      v10 = Item;
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
                                         (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_object__get_Item__);
            if ( !System_Convert_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
            LODWORD(s_Zero) = System_Convert__ToInt32((Il2CppObject *)s_Zero, 0LL);
            v17 = System_Collections_Generic_List_object___get_Item(
                    v10,
                    1,
                    (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_object__get_Item__);
            LODWORD(v13) = System_Convert__ToInt32(v17, 0LL);
          }
          else
          {
            v13 = HIDWORD(s_Zero);
          }
          return (UnityEngine_Vector2Int_o)((unsigned int)s_Zero | ((unsigned __int64)(unsigned int)v13 << 32));
        }
        v16 = System_Collections_Generic_List_object___get_Item(
                Item,
                0,
                (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_object__get_Item__);
        if ( !System_Convert_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
        v12 = v16;
      }
      else
      {
        if ( !System_Convert_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
        v12 = (Il2CppObject *)v10;
      }
      LODWORD(v13) = System_Convert__ToInt32(v12, 0LL);
      LODWORD(s_Zero) = v13;
      return (UnityEngine_Vector2Int_o)((unsigned int)s_Zero | ((unsigned __int64)(unsigned int)v13 << 32));
    }
  }
  return (UnityEngine_Vector2Int_o)s_Zero;
}


int32_t __fastcall ServantScriptEntity__getMyRoomForm(ServantScriptEntity_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *extendData; // x20
  ServantScriptEntity_c *v4; // x0
  __int64 v5; // x1
  void *Item; // x0
  struct System_Collections_Generic_Dictionary_string__object__o *v7; // x19
  __int64 v8; // x2
  __int64 v9; // x3
  ServantScriptEntity_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_4A5B94F & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1B885B0(&long_TypeInfo);
    sub_1B885B0(&ServantScriptEntity_TypeInfo);
    byte_4A5B94F = 1;
  }
  extendData = this->fields.extendData;
  if ( !extendData )
    return 0;
  v4 = ServantScriptEntity_TypeInfo;
  if ( !ServantScriptEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantScriptEntity_TypeInfo);
    v4 = ServantScriptEntity_TypeInfo;
  }
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)extendData,
          (Il2CppObject *)v4->static_fields->MYROOM_FORM_KEY,
          (const MethodInfo_31C73BC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return 0;
  Item = ServantScriptEntity_TypeInfo;
  v7 = this->fields.extendData;
  if ( !ServantScriptEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantScriptEntity_TypeInfo);
  if ( !v7
    || (Item = System_Collections_Generic_Dictionary_object__object___get_Item(
                 (System_Collections_Generic_Dictionary_object__object__o *)v7,
                 (Il2CppObject *)ServantScriptEntity_TypeInfo->static_fields->MYROOM_FORM_KEY,
                 (const MethodInfo_31C7148 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
    sub_1B8880C(Item, v5);
  }
  if ( *(Il2CppClass **)(*(_QWORD *)Item + 64LL) == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(Item, long_TypeInfo, v8, v9);
  sub_1B88ACC(Item);
  return ServantScriptEntity__isMultipleForm(v11, v12);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Vector2_o __fastcall ServantScriptEntity__getOffset(
        ServantScriptEntity_o *this,
        int32_t offsetKind,
        const MethodInfo *method)
{
  System_Int32_array *TerminalOffset; // x0
  __int64 v6; // x1
  __int64 v7; // x10
  __int64 v8; // x8
  int32_t offsetX; // w8
  int32_t offsetY; // w9
  float v11; // s0
  float v12; // s1
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  if ( (byte_4A5B94D & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_ServantScriptAddMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_ServantScriptAddMaster__ServantScriptAddEntity__int__TryGetEntity__);
    byte_4A5B94D = 1;
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
          sub_1B88814(TerminalOffset, v6);
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
    TerminalOffset = (System_Int32_array *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ServantScriptAddMaster___);
    if ( !TerminalOffset )
      goto LABEL_23;
    TerminalOffset = (System_Int32_array *)DataMasterBase_object__object__int___TryGetEntity(
                                             (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalOffset,
                                             &entity,
                                             this->fields.id,
                                             (const MethodInfo_311D988 *)Method_DataMasterBase_ServantScriptAddMaster__ServantScriptAddEntity__int__TryGetEntity__);
    if ( ((unsigned __int8)TerminalOffset & 1) == 0 )
    {
LABEL_16:
      offsetX = this->fields.offsetXMyroom;
      offsetY = this->fields.offsetYMyroom;
      goto LABEL_21;
    }
    if ( !entity )
LABEL_23:
      sub_1B8880C(TerminalOffset, v6);
    v7 = 36LL;
    if ( offsetKind != 4 )
      v7 = 28LL;
    if ( offsetKind == 4 )
      v8 = 32LL;
    else
      v8 = 24LL;
    offsetX = *(_DWORD *)((char *)&entity->klass + v8);
    offsetY = *(_DWORD *)((char *)&entity->klass + v7);
  }
LABEL_21:
  v11 = (float)offsetX;
  v12 = (float)offsetY;
  result.fields.y = v12;
  result.fields.x = v11;
  return result;
}


bool __fastcall ServantScriptEntity__isMultipleForm(ServantScriptEntity_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *extendData; // x19
  ServantScriptEntity_c *v4; // x0

  if ( (byte_4A5B950 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1B885B0(&ServantScriptEntity_TypeInfo);
    byte_4A5B950 = 1;
  }
  extendData = this->fields.extendData;
  if ( !extendData )
    return 0;
  v4 = ServantScriptEntity_TypeInfo;
  if ( !ServantScriptEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantScriptEntity_TypeInfo);
    v4 = ServantScriptEntity_TypeInfo;
  }
  return System_Collections_Generic_Dictionary_object__object___ContainsKey(
           (System_Collections_Generic_Dictionary_object__object__o *)extendData,
           (Il2CppObject *)v4->static_fields->COMBINE_RESULT_FORM_KEY,
           (const MethodInfo_31C73BC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
}