void ServantScriptEntity___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  const MethodInfo *v2; // x3
  int32_t v3; // w1
  struct ServantScriptEntity_StaticFields *static_fields; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  int32_t v7; // w1
  struct ServantScriptEntity_StaticFields *v8; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  int32_t v11; // w1
  struct ServantScriptEntity_StaticFields *v12; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  int32_t v15; // w1
  struct ServantScriptEntity_StaticFields *v16; // x0
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  int32_t v19; // w1
  struct ServantScriptEntity_StaticFields *v20; // x0
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  int32_t v23; // w1
  struct ServantScriptEntity_StaticFields *v24; // x0
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  int32_t v27; // w1
  struct ServantScriptEntity_StaticFields *v28; // x0
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  int32_t v31; // w1
  struct ServantScriptEntity_StaticFields *v32; // x0
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  struct ServantScriptEntity_StaticFields *v35; // x0
  int32_t v36; // w1
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  struct ServantScriptEntity_StaticFields *v39; // x0
  int32_t v40; // w1
  int32_t v41; // w2
  const MethodInfo *v42; // x3
  struct ServantScriptEntity_StaticFields *v43; // x0
  int32_t v44; // w1
  int32_t v45; // w2
  const MethodInfo *v46; // x3
  struct ServantScriptEntity_StaticFields *v47; // x0
  int32_t v48; // w1
  int32_t v49; // w2
  const MethodInfo *v50; // x3
  struct ServantScriptEntity_StaticFields *v51; // x0
  int32_t v52; // w1
  int32_t v53; // w2
  const MethodInfo *v54; // x3

  if ( (byte_4C383EB & 1) == 0 )
  {
    sub_1C32C20(&ServantScriptEntity_TypeInfo);
    sub_1C32C20(&StringLiteral_22683/*"photoSvtScale"*/);
    sub_1C32C20(&StringLiteral_22681/*"photoSvtPositionLeft"*/);
    sub_1C32C20(&StringLiteral_22682/*"photoSvtPositionRight"*/);
    sub_1C32C20(&StringLiteral_3109/*"BattleBondOffset"*/);
    sub_1C32C20(&StringLiteral_24629/*"value"*/);
    sub_1C32C20(&StringLiteral_22680/*"photoSvtPosition"*/);
    sub_1C32C20(&StringLiteral_22144/*"myroomForm"*/);
    sub_1C32C20(&StringLiteral_22684/*"photoSvtScaleLeft"*/);
    sub_1C32C20(&StringLiteral_18208/*"conds"*/);
    sub_1C32C20(&StringLiteral_22685/*"photoSvtScaleRight"*/);
    sub_1C32C20(&StringLiteral_18121/*"combineResultMultipleForm"*/);
    sub_1C32C20(&StringLiteral_19372/*"faceSize"*/);
    sub_1C32C20(&StringLiteral_13705/*"TerminalOffset"*/);
    sub_1C32C20(&StringLiteral_18207/*"condType"*/);
    byte_4C383EB = 1;
  }
  ServantScriptEntity_TypeInfo->static_fields->FACE_SIZE_KEY = (struct System_String_o *)StringLiteral_19372/*"faceSize"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)ServantScriptEntity_TypeInfo->static_fields, StringLiteral_19372/*"faceSize"*/, v1, v2);
  v3 = StringLiteral_22144/*"myroomForm"*/;
  static_fields = ServantScriptEntity_TypeInfo->static_fields;
  static_fields->MYROOM_FORM_KEY = (struct System_String_o *)StringLiteral_22144/*"myroomForm"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->MYROOM_FORM_KEY, v3, v5, v6);
  v7 = StringLiteral_18121/*"combineResultMultipleForm"*/;
  v8 = ServantScriptEntity_TypeInfo->static_fields;
  v8->COMBINE_RESULT_FORM_KEY = (struct System_String_o *)StringLiteral_18121/*"combineResultMultipleForm"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&v8->COMBINE_RESULT_FORM_KEY, v7, v9, v10);
  v11 = StringLiteral_18208/*"conds"*/;
  v12 = ServantScriptEntity_TypeInfo->static_fields;
  v12->COND_KEY = (struct System_String_o *)StringLiteral_18208/*"conds"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&v12->COND_KEY, v11, v13, v14);
  v15 = StringLiteral_18207/*"condType"*/;
  v16 = ServantScriptEntity_TypeInfo->static_fields;
  v16->COND_TYPE_KEY = (struct System_String_o *)StringLiteral_18207/*"condType"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&v16->COND_TYPE_KEY, v15, v17, v18);
  v19 = StringLiteral_24629/*"value"*/;
  v20 = ServantScriptEntity_TypeInfo->static_fields;
  v20->COND_VALUE_KEY = (struct System_String_o *)StringLiteral_24629/*"value"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&v20->COND_VALUE_KEY, v19, v21, v22);
  v23 = StringLiteral_13705/*"TerminalOffset"*/;
  v24 = ServantScriptEntity_TypeInfo->static_fields;
  v24->TERMINAL_OFFSET_KEY = (struct System_String_o *)StringLiteral_13705/*"TerminalOffset"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&v24->TERMINAL_OFFSET_KEY, v23, v25, v26);
  v27 = StringLiteral_3109/*"BattleBondOffset"*/;
  v28 = ServantScriptEntity_TypeInfo->static_fields;
  v28->BATTLE_BOND_OFFSET_KEY = (struct System_String_o *)StringLiteral_3109/*"BattleBondOffset"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&v28->BATTLE_BOND_OFFSET_KEY, v27, v29, v30);
  v31 = StringLiteral_22680/*"photoSvtPosition"*/;
  v32 = ServantScriptEntity_TypeInfo->static_fields;
  v32->PHOT_SVT_POSITION_KEY = (struct System_String_o *)StringLiteral_22680/*"photoSvtPosition"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&v32->PHOT_SVT_POSITION_KEY, v31, v33, v34);
  v35 = ServantScriptEntity_TypeInfo->static_fields;
  v36 = StringLiteral_22682/*"photoSvtPositionRight"*/;
  v35->PHOT_SVT_POSITION_RIGHT_KEY = (struct System_String_o *)StringLiteral_22682/*"photoSvtPositionRight"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&v35->PHOT_SVT_POSITION_RIGHT_KEY, v36, v37, v38);
  v39 = ServantScriptEntity_TypeInfo->static_fields;
  v40 = StringLiteral_22681/*"photoSvtPositionLeft"*/;
  v39->PHOT_SVT_POSITION_LEFT_KEY = (struct System_String_o *)StringLiteral_22681/*"photoSvtPositionLeft"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&v39->PHOT_SVT_POSITION_LEFT_KEY, v40, v41, v42);
  v43 = ServantScriptEntity_TypeInfo->static_fields;
  v44 = StringLiteral_22683/*"photoSvtScale"*/;
  v43->PHOT_SVT_SCALE_KEY = (struct System_String_o *)StringLiteral_22683/*"photoSvtScale"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&v43->PHOT_SVT_SCALE_KEY, v44, v45, v46);
  v47 = ServantScriptEntity_TypeInfo->static_fields;
  v48 = StringLiteral_22685/*"photoSvtScaleRight"*/;
  v47->PHOT_SVT_SCALE_RIGHT_KEY = (struct System_String_o *)StringLiteral_22685/*"photoSvtScaleRight"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&v47->PHOT_SVT_SCALE_RIGHT_KEY, v48, v49, v50);
  v51 = ServantScriptEntity_TypeInfo->static_fields;
  v52 = StringLiteral_22684/*"photoSvtScaleLeft"*/;
  v51->PHOT_SVT_SCALE_LEFT_KEY = (struct System_String_o *)StringLiteral_22684/*"photoSvtScaleLeft"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&v51->PHOT_SVT_SCALE_LEFT_KEY, v52, v53, v54);
}


void ServantScriptEntity___ctor(ServantScriptEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x0
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  int v6; // w8

  if ( (byte_4C383EA & 1) == 0 )
  {
    sub_1C32C20(&Method_DataEntityBase_string___ctor__);
    sub_1C32C20(&int___TypeInfo);
    byte_4C383EA = 1;
  }
  v3 = sub_1C32CC8(int___TypeInfo, 2);
  if ( !v3 )
    sub_1C32E7C(0);
  v6 = *(_DWORD *)(v3 + 24);
  if ( !v6 || (*(_DWORD *)(v3 + 32) = 300, v6 == 1) )
    sub_1C32E84(v3);
  *(_DWORD *)(v3 + 36) = 5;
  this->fields.grandSelectOffset = (struct System_Int32_array *)v3;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.grandSelectOffset, v3, v4, v5);
  this->fields.GrandBoardAddOffsetX = -25;
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_33943CC *)Method_DataEntityBase_string___ctor__);
}


System_String_o *ServantScriptEntity__CreatePK(int32_t id, int32_t form, const MethodInfo *method)
{
  if ( (byte_4C383DB & 1) == 0 )
  {
    sub_1C32C20(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_4C383DB = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           id,
           form,
           (const MethodInfo_30DB578 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *ServantScriptEntity__CreatePrimaryKey(ServantScriptEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  int32_t form; // w19
  int32_t id; // w20

  if ( (byte_4C383DA & 1) == 0 )
  {
    sub_1C32C20(&ServantScriptEntity_TypeInfo);
    byte_4C383DA = 1;
  }
  id = this->fields.id;
  form = this->fields.form;
  if ( !ServantScriptEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantScriptEntity_TypeInfo);
  return ServantScriptEntity__CreatePK(id, form, v2);
}


System_Int32_array *ServantScriptEntity__GetBattleBondOffset(ServantScriptEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  ServantScriptEntity_c *v4; // x0

  if ( (byte_4C383E2 & 1) == 0 )
  {
    sub_1C32C20(&ServantScriptEntity_TypeInfo);
    byte_4C383E2 = 1;
  }
  v4 = ServantScriptEntity_TypeInfo;
  if ( !ServantScriptEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantScriptEntity_TypeInfo);
    v4 = ServantScriptEntity_TypeInfo;
  }
  return ServantScriptEntity__GetExtendOffset(this, v4->static_fields->BATTLE_BOND_OFFSET_KEY, 0, v2);
}


System_Int32_array *ServantScriptEntity__GetExtendOffset(
        ServantScriptEntity_o *this,
        System_String_o *key,
        System_Int32_array *defaultValue,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *extendData; // x0
  System_Collections_Generic_Dictionary_object__object__o *Item; // x0
  __int64 naturalAligment; // x10
  System_Collections_Generic_List_object__c *v10; // x9
  System_Collections_Generic_List_object__o *v11; // x20
  unsigned __int64 v12; // x21
  char v13; // w8
  char v14; // w25
  Il2CppObject *v15; // x22
  char *v16; // x9

  if ( (byte_4C383E3 & 1) == 0 )
  {
    sub_1C32C20(&System_Convert_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C32C20(&int___TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_object__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_object__get_Item__);
    sub_1C32C20(&System_Collections_Generic_List_object__TypeInfo);
    byte_4C383E3 = 1;
  }
  if ( !defaultValue )
    defaultValue = (System_Int32_array *)sub_1C32CC8(int___TypeInfo, 2);
  extendData = this->fields.extendData;
  if ( extendData
    && System_Collections_Generic_Dictionary_object__object___ContainsKey(
         (System_Collections_Generic_Dictionary_object__object__o *)extendData,
         (Il2CppObject *)key,
         (const MethodInfo_3458FBC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    Item = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.extendData;
    if ( !Item )
      goto LABEL_25;
    Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                        Item,
                                                                        (Il2CppObject *)key,
                                                                        (const MethodInfo_3458D48 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( Item )
    {
      naturalAligment = System_Collections_Generic_List_object__TypeInfo->_2.naturalAligment;
      if ( Item->klass->_2.naturalAligment >= (unsigned int)naturalAligment )
      {
        v10 = (System_Collections_Generic_List_object__c *)Item->klass->_2.typeHierarchy[naturalAligment - 1];
        v11 = v10 == System_Collections_Generic_List_object__TypeInfo
            ? (System_Collections_Generic_List_object__o *)Item
            : 0LL;
        if ( v10 == System_Collections_Generic_List_object__TypeInfo )
        {
          if ( v11 )
          {
            v12 = 0;
            v13 = 1;
            while ( 1 )
            {
              v14 = v13;
              if ( (__int64)v12 >= v11->fields._size )
              {
                Item = 0;
              }
              else
              {
                v15 = System_Collections_Generic_List_object___get_Item(
                        v11,
                        v12,
                        (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_object__get_Item__);
                if ( !System_Convert_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
                Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Convert__ToInt32(v15, 0);
              }
              if ( !defaultValue )
                break;
              if ( v12 >= LODWORD(defaultValue->max_length) )
                sub_1C32E84(Item);
              v13 = 0;
              v16 = (char *)defaultValue + 4 * v12;
              v12 = 1;
              *((_DWORD *)v16 + 8) = (_DWORD)Item;
              if ( (v14 & 1) == 0 )
                return defaultValue;
            }
          }
LABEL_25:
          sub_1C32E7C(Item);
        }
      }
    }
  }
  return defaultValue;
}


System_Int32_array *ServantScriptEntity__GetPhotoSvtPosition(
        ServantScriptEntity_o *this,
        System_Int32_array *defaultValue,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  ServantScriptEntity_c *v6; // x0

  if ( (byte_4C383E4 & 1) == 0 )
  {
    sub_1C32C20(&ServantScriptEntity_TypeInfo);
    byte_4C383E4 = 1;
  }
  v6 = ServantScriptEntity_TypeInfo;
  if ( !ServantScriptEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantScriptEntity_TypeInfo);
    v6 = ServantScriptEntity_TypeInfo;
  }
  return ServantScriptEntity__GetExtendOffset(this, v6->static_fields->PHOT_SVT_POSITION_KEY, defaultValue, v3);
}


System_Int32_array *ServantScriptEntity__GetPhotoSvtPositionLeft(
        ServantScriptEntity_o *this,
        System_Int32_array *defaultValue,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  ServantScriptEntity_c *v6; // x0

  if ( (byte_4C383E6 & 1) == 0 )
  {
    sub_1C32C20(&ServantScriptEntity_TypeInfo);
    byte_4C383E6 = 1;
  }
  v6 = ServantScriptEntity_TypeInfo;
  if ( !ServantScriptEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantScriptEntity_TypeInfo);
    v6 = ServantScriptEntity_TypeInfo;
  }
  return ServantScriptEntity__GetExtendOffset(this, v6->static_fields->PHOT_SVT_POSITION_LEFT_KEY, defaultValue, v3);
}


System_Int32_array *ServantScriptEntity__GetPhotoSvtPositionRight(
        ServantScriptEntity_o *this,
        System_Int32_array *defaultValue,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  ServantScriptEntity_c *v6; // x0

  if ( (byte_4C383E5 & 1) == 0 )
  {
    sub_1C32C20(&ServantScriptEntity_TypeInfo);
    byte_4C383E5 = 1;
  }
  v6 = ServantScriptEntity_TypeInfo;
  if ( !ServantScriptEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantScriptEntity_TypeInfo);
    v6 = ServantScriptEntity_TypeInfo;
  }
  return ServantScriptEntity__GetExtendOffset(this, v6->static_fields->PHOT_SVT_POSITION_RIGHT_KEY, defaultValue, v3);
}


float ServantScriptEntity__GetPhotoSvtScale(ServantScriptEntity_o *this, float defaultValue, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *extendData; // x20
  ServantScriptEntity_c *v6; // x0
  ServantScriptEntity_c *v7; // x0
  struct System_Collections_Generic_Dictionary_string__object__o *v8; // x19
  Il2CppObject *Item; // x19

  if ( (byte_4C383E7 & 1) == 0 )
  {
    sub_1C32C20(&System_Convert_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C32C20(&ServantScriptEntity_TypeInfo);
    byte_4C383E7 = 1;
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
          (const MethodInfo_3458FBC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return defaultValue;
  v7 = ServantScriptEntity_TypeInfo;
  v8 = this->fields.extendData;
  if ( !ServantScriptEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantScriptEntity_TypeInfo);
  if ( !v8 )
    sub_1C32E7C(v7);
  Item = System_Collections_Generic_Dictionary_object__object___get_Item(
           (System_Collections_Generic_Dictionary_object__object__o *)v8,
           (Il2CppObject *)ServantScriptEntity_TypeInfo->static_fields->PHOT_SVT_SCALE_KEY,
           (const MethodInfo_3458D48 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !System_Convert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  return System_Convert__ToSingle(Item, 0);
}


float ServantScriptEntity__GetPhotoSvtScaleLeft(
        ServantScriptEntity_o *this,
        float defaultValue,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *extendData; // x20
  ServantScriptEntity_c *v6; // x0
  ServantScriptEntity_c *v7; // x0
  struct System_Collections_Generic_Dictionary_string__object__o *v8; // x19
  Il2CppObject *Item; // x19

  if ( (byte_4C383E9 & 1) == 0 )
  {
    sub_1C32C20(&System_Convert_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C32C20(&ServantScriptEntity_TypeInfo);
    byte_4C383E9 = 1;
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
          (const MethodInfo_3458FBC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return defaultValue;
  v7 = ServantScriptEntity_TypeInfo;
  v8 = this->fields.extendData;
  if ( !ServantScriptEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantScriptEntity_TypeInfo);
  if ( !v8 )
    sub_1C32E7C(v7);
  Item = System_Collections_Generic_Dictionary_object__object___get_Item(
           (System_Collections_Generic_Dictionary_object__object__o *)v8,
           (Il2CppObject *)ServantScriptEntity_TypeInfo->static_fields->PHOT_SVT_SCALE_LEFT_KEY,
           (const MethodInfo_3458D48 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !System_Convert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  return System_Convert__ToSingle(Item, 0);
}


float ServantScriptEntity__GetPhotoSvtScaleRight(
        ServantScriptEntity_o *this,
        float defaultValue,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *extendData; // x20
  ServantScriptEntity_c *v6; // x0
  ServantScriptEntity_c *v7; // x0
  struct System_Collections_Generic_Dictionary_string__object__o *v8; // x19
  Il2CppObject *Item; // x19

  if ( (byte_4C383E8 & 1) == 0 )
  {
    sub_1C32C20(&System_Convert_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C32C20(&ServantScriptEntity_TypeInfo);
    byte_4C383E8 = 1;
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
          (const MethodInfo_3458FBC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return defaultValue;
  v7 = ServantScriptEntity_TypeInfo;
  v8 = this->fields.extendData;
  if ( !ServantScriptEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantScriptEntity_TypeInfo);
  if ( !v8 )
    sub_1C32E7C(v7);
  Item = System_Collections_Generic_Dictionary_object__object___get_Item(
           (System_Collections_Generic_Dictionary_object__object__o *)v8,
           (Il2CppObject *)ServantScriptEntity_TypeInfo->static_fields->PHOT_SVT_SCALE_RIGHT_KEY,
           (const MethodInfo_3458D48 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !System_Convert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  return System_Convert__ToSingle(Item, 0);
}


System_Int32_array *ServantScriptEntity__GetTerminalOffset(ServantScriptEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  ServantScriptEntity_c *v4; // x0

  if ( (byte_4C383E1 & 1) == 0 )
  {
    sub_1C32C20(&ServantScriptEntity_TypeInfo);
    byte_4C383E1 = 1;
  }
  v4 = ServantScriptEntity_TypeInfo;
  if ( !ServantScriptEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantScriptEntity_TypeInfo);
    v4 = ServantScriptEntity_TypeInfo;
  }
  return ServantScriptEntity__GetExtendOffset(this, v4->static_fields->TERMINAL_OFFSET_KEY, 0, v2);
}


bool ServantScriptEntity__IsCondEnable(ServantScriptEntity_o *this, int32_t friendship, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *extendData; // x21
  ServantScriptEntity_c *v6; // x0
  int *Item; // x0
  struct System_Collections_Generic_Dictionary_string__object__o *v8; // x21
  __int64 naturalAligment; // x9
  Il2CppObject *v10; // x0
  __int64 v11; // x9
  ServantScriptEntity_c *v12; // x0
  ServantScriptEntity_c *v13; // x0
  __int64 v14; // x2
  __int64 v15; // x3
  int32_t v16; // w22
  __int64 v17; // x2
  __int64 v18; // x3
  int64_t v19; // x21
  System_String_o *v20; // x0
  int32_t v21; // w19
  ServantScriptEntity_o *v22; // x0
  System_String_o *v23; // x1
  System_Int32_array *v24; // x2
  const MethodInfo *v25; // x3

  if ( (byte_4C383E0 & 1) == 0 )
  {
    sub_1C32C20(&CondType_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C32C20(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_1C32C20(&long_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_object__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_object__get_Item__);
    sub_1C32C20(&System_Collections_Generic_List_object__TypeInfo);
    sub_1C32C20(&ServantScriptEntity_TypeInfo);
    byte_4C383E0 = 1;
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
          (const MethodInfo_3458FBC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    goto LABEL_34;
  Item = (int *)ServantScriptEntity_TypeInfo;
  v8 = this->fields.extendData;
  if ( !ServantScriptEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantScriptEntity_TypeInfo);
  if ( !v8 )
    goto LABEL_41;
  Item = (int *)System_Collections_Generic_Dictionary_object__object___get_Item(
                  (System_Collections_Generic_Dictionary_object__object__o *)v8,
                  (Il2CppObject *)ServantScriptEntity_TypeInfo->static_fields->COND_KEY,
                  (const MethodInfo_3458D48 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !Item )
    return (char)Item;
  naturalAligment = System_Collections_Generic_List_object__TypeInfo->_2.naturalAligment;
  if ( *(unsigned __int8 *)(*(_QWORD *)Item + 304LL) < (unsigned int)naturalAligment
    || *(System_Collections_Generic_List_object__c **)(*(_QWORD *)(*(_QWORD *)Item + 200LL) + 8 * naturalAligment - 8) != System_Collections_Generic_List_object__TypeInfo )
  {
    goto LABEL_42;
  }
  if ( Item[6] < 1 )
    goto LABEL_34;
  v10 = System_Collections_Generic_List_object___get_Item(
          (System_Collections_Generic_List_object__o *)Item,
          0,
          (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_object__get_Item__);
  v8 = (struct System_Collections_Generic_Dictionary_string__object__o *)v10;
  if ( v10 )
  {
    v11 = System_Collections_Generic_Dictionary_string__object__TypeInfo->_2.naturalAligment;
    if ( v10->klass->_2.naturalAligment < (unsigned int)v11
      || (System_Collections_Generic_Dictionary_string__object__c *)v10->klass->_2.typeHierarchy[v11 - 1] != System_Collections_Generic_Dictionary_string__object__TypeInfo )
    {
LABEL_43:
      sub_1C3313C(v8);
      LOBYTE(Item) = (unsigned __int8)ServantScriptEntity__GetExtendOffset(v22, v23, v24, v25);
      return (char)Item;
    }
  }
  Item = (int *)ServantScriptEntity_TypeInfo;
  if ( !ServantScriptEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantScriptEntity_TypeInfo);
  if ( !v8 )
    goto LABEL_41;
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)v8,
          (Il2CppObject *)ServantScriptEntity_TypeInfo->static_fields->COND_TYPE_KEY,
          (const MethodInfo_3458FBC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    goto LABEL_34;
  v12 = ServantScriptEntity_TypeInfo;
  if ( !ServantScriptEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantScriptEntity_TypeInfo);
    v12 = ServantScriptEntity_TypeInfo;
  }
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)v8,
          (Il2CppObject *)v12->static_fields->COND_VALUE_KEY,
          (const MethodInfo_3458FBC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    goto LABEL_34;
  v13 = ServantScriptEntity_TypeInfo;
  if ( !ServantScriptEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantScriptEntity_TypeInfo);
    v13 = ServantScriptEntity_TypeInfo;
  }
  Item = (int *)System_Collections_Generic_Dictionary_object__object___get_Item(
                  (System_Collections_Generic_Dictionary_object__object__o *)v8,
                  (Il2CppObject *)v13->static_fields->COND_TYPE_KEY,
                  (const MethodInfo_3458D48 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !Item )
    goto LABEL_41;
  if ( *(Il2CppClass **)(*(_QWORD *)Item + 64LL) != long_TypeInfo->_1.element_class )
    goto LABEL_42;
  v16 = *(_DWORD *)j_il2cpp_object_unbox_0(Item, long_TypeInfo, v14, v15);
  Item = (int *)System_Collections_Generic_Dictionary_object__object___get_Item(
                  (System_Collections_Generic_Dictionary_object__object__o *)v8,
                  (Il2CppObject *)ServantScriptEntity_TypeInfo->static_fields->COND_VALUE_KEY,
                  (const MethodInfo_3458D48 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !Item )
    goto LABEL_41;
  if ( *(Il2CppClass **)(*(_QWORD *)Item + 64LL) != long_TypeInfo->_1.element_class )
  {
LABEL_42:
    sub_1C3313C(Item);
    goto LABEL_43;
  }
  v19 = *(_QWORD *)j_il2cpp_object_unbox_0(Item, long_TypeInfo, v17, v18);
  if ( (friendship & 0x80000000) == 0 )
  {
    if ( v16 == 99 )
    {
      LOBYTE(Item) = v19 >= (unsigned int)friendship;
      return (char)Item;
    }
    if ( v16 == 98 )
    {
      LOBYTE(Item) = v19 <= (unsigned int)friendship;
      return (char)Item;
    }
LABEL_34:
    LOBYTE(Item) = 0;
    return (char)Item;
  }
  Item = (int *)System_Int32__ToString((int)this + 16, 0);
  if ( !Item )
LABEL_41:
    sub_1C32E7C(Item);
  v20 = System_String__Substring_63564468((System_String_o *)Item, 0, Item[4] - 1, 0);
  v21 = System_Int32__Parse(v20, 0);
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  LOBYTE(Item) = CondType__IsOpen(v16, v21, v19, 0, 0, 0);
  return (char)Item;
}


UnityEngine_Vector2Int_o ServantScriptEntity__getFaceSize(ServantScriptEntity_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *extendData; // x21
  unsigned __int64 s_Zero; // x19
  ServantScriptEntity_c *v5; // x0
  ServantScriptEntity_c *v6; // x0
  struct System_Collections_Generic_Dictionary_string__object__o *v7; // x20
  System_Collections_Generic_List_object__o *Item; // x0
  System_Collections_Generic_List_object__o *v9; // x20
  __int64 naturalAligment; // x10
  Il2CppObject *v11; // x0
  unsigned __int64 v12; // x0
  int size; // w8
  Il2CppObject *v15; // x19
  Il2CppObject *v16; // x0

  if ( (byte_4C383DD & 1) == 0 )
  {
    sub_1C32C20(&System_Convert_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C32C20(&Method_System_Collections_Generic_List_object__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_object__get_Item__);
    sub_1C32C20(&System_Collections_Generic_List_object__TypeInfo);
    sub_1C32C20(&ServantScriptEntity_TypeInfo);
    byte_4C383DD = 1;
  }
  if ( !byte_4C384F6 )
  {
    sub_1C32C20(&UnityEngine_Vector2Int_TypeInfo);
    byte_4C384F6 = 1;
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
           (const MethodInfo_3458FBC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    {
      v6 = ServantScriptEntity_TypeInfo;
      v7 = this->fields.extendData;
      if ( !ServantScriptEntity_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantScriptEntity_TypeInfo);
      if ( !v7 )
        sub_1C32E7C(v6);
      Item = (System_Collections_Generic_List_object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                            (System_Collections_Generic_Dictionary_object__object__o *)v7,
                                                            (Il2CppObject *)ServantScriptEntity_TypeInfo->static_fields->FACE_SIZE_KEY,
                                                            (const MethodInfo_3458D48 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
      v9 = Item;
      if ( Item
        && (naturalAligment = System_Collections_Generic_List_object__TypeInfo->_2.naturalAligment,
            Item->klass->_2.naturalAligment >= (unsigned int)naturalAligment)
        && (System_Collections_Generic_List_object__c *)Item->klass->_2.typeHierarchy[naturalAligment - 1] == System_Collections_Generic_List_object__TypeInfo )
      {
        size = Item->fields._size;
        if ( size != 1 )
        {
          if ( size >= 2 )
          {
            s_Zero = (unsigned __int64)System_Collections_Generic_List_object___get_Item(
                                         Item,
                                         0,
                                         (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_object__get_Item__);
            if ( !System_Convert_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
            LODWORD(s_Zero) = System_Convert__ToInt32((Il2CppObject *)s_Zero, 0);
            v16 = System_Collections_Generic_List_object___get_Item(
                    v9,
                    1,
                    (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_object__get_Item__);
            LODWORD(v12) = System_Convert__ToInt32(v16, 0);
          }
          else
          {
            v12 = HIDWORD(s_Zero);
          }
          return (UnityEngine_Vector2Int_o)((unsigned int)s_Zero | ((unsigned __int64)(unsigned int)v12 << 32));
        }
        v15 = System_Collections_Generic_List_object___get_Item(
                Item,
                0,
                (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_object__get_Item__);
        if ( !System_Convert_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
        v11 = v15;
      }
      else
      {
        if ( !System_Convert_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
        v11 = (Il2CppObject *)v9;
      }
      LODWORD(v12) = System_Convert__ToInt32(v11, 0);
      LODWORD(s_Zero) = v12;
      return (UnityEngine_Vector2Int_o)((unsigned int)s_Zero | ((unsigned __int64)(unsigned int)v12 << 32));
    }
  }
  return (UnityEngine_Vector2Int_o)s_Zero;
}


int32_t ServantScriptEntity__getMyRoomForm(ServantScriptEntity_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *extendData; // x20
  ServantScriptEntity_c *v4; // x0
  void *Item; // x0
  struct System_Collections_Generic_Dictionary_string__object__o *v6; // x19
  __int64 v7; // x2
  __int64 v8; // x3
  ServantScriptEntity_o *v10; // x0
  const MethodInfo *v11; // x1

  if ( (byte_4C383DE & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C32C20(&long_TypeInfo);
    sub_1C32C20(&ServantScriptEntity_TypeInfo);
    byte_4C383DE = 1;
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
          (const MethodInfo_3458FBC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return 0;
  Item = ServantScriptEntity_TypeInfo;
  v6 = this->fields.extendData;
  if ( !ServantScriptEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantScriptEntity_TypeInfo);
  if ( !v6
    || (Item = System_Collections_Generic_Dictionary_object__object___get_Item(
                 (System_Collections_Generic_Dictionary_object__object__o *)v6,
                 (Il2CppObject *)ServantScriptEntity_TypeInfo->static_fields->MYROOM_FORM_KEY,
                 (const MethodInfo_3458D48 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0 )
  {
    sub_1C32E7C(Item);
  }
  if ( *(Il2CppClass **)(*(_QWORD *)Item + 64LL) == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(Item, long_TypeInfo, v7, v8);
  sub_1C3313C(Item);
  return ServantScriptEntity__isMultipleForm(v10, v11);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Vector2_o ServantScriptEntity__getOffset(
        ServantScriptEntity_o *this,
        int32_t offsetKind,
        const MethodInfo *method)
{
  System_Int32_array *Master_object; // x0
  __int64 v6; // x10
  __int64 v7; // x8
  int32_t offsetXMyroom; // w8
  int32_t offsetYMyroom; // w9
  struct System_Int32_array *grandSelectOffset; // x8
  int32_t v11; // w12
  float v12; // s0
  float v13; // s1
  Il2CppObject *v14; // [xsp+8h] [xbp-38h] BYREF
  Il2CppObject *v15; // [xsp+10h] [xbp-30h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-28h] BYREF
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  if ( (byte_4C383DC & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMaster_ServantScriptAddMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Method_DataMasterBase_ServantScriptAddMaster__ServantScriptAddEntity__long__TryGetEntity__);
    byte_4C383DC = 1;
  }
  v15 = 0;
  entity = 0;
  v14 = 0;
  switch ( offsetKind )
  {
    case 1:
    case 2:
    case 5:
      goto LABEL_13;
    case 3:
    case 4:
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = (System_Int32_array *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_ServantScriptAddMaster___);
      if ( !Master_object )
        goto LABEL_37;
      Master_object = (System_Int32_array *)DataMasterBase_object__object__long___TryGetEntity(
                                              (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                              &entity,
                                              this->fields.id,
                                              (const MethodInfo_3398DE0 *)Method_DataMasterBase_ServantScriptAddMaster__ServantScriptAddEntity__long__TryGetEntity__);
      if ( ((unsigned __int8)Master_object & 1) == 0 )
      {
LABEL_13:
        offsetXMyroom = this->fields.offsetXMyroom;
        offsetYMyroom = this->fields.offsetYMyroom;
        goto LABEL_36;
      }
      if ( !entity )
        goto LABEL_37;
      v6 = 36;
      if ( offsetKind == 4 )
      {
        v7 = 32;
      }
      else
      {
        v6 = 28;
        v7 = 24;
      }
      offsetXMyroom = *(_DWORD *)((char *)&entity->klass + v7);
      offsetYMyroom = *(_DWORD *)((char *)&entity->klass + v6);
      goto LABEL_36;
    case 6:
      Master_object = ServantScriptEntity__GetTerminalOffset(this, *(const MethodInfo **)&offsetKind);
      if ( !Master_object )
        goto LABEL_37;
      goto LABEL_18;
    case 7:
      Master_object = ServantScriptEntity__GetBattleBondOffset(this, *(const MethodInfo **)&offsetKind);
      if ( !Master_object )
        goto LABEL_37;
LABEL_18:
      if ( LODWORD(Master_object->max_length) < 2 )
        goto LABEL_38;
      offsetXMyroom = Master_object->m_Items[0] + this->fields.offsetXMyroom;
      offsetYMyroom = Master_object->m_Items[1] + this->fields.offsetYMyroom;
      goto LABEL_36;
    case 8:
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = (System_Int32_array *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_ServantScriptAddMaster___);
      if ( !Master_object )
        goto LABEL_37;
      Master_object = (System_Int32_array *)DataMasterBase_object__object__long___TryGetEntity(
                                              (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                              &v14,
                                              this->fields.id,
                                              (const MethodInfo_3398DE0 *)Method_DataMasterBase_ServantScriptAddMaster__ServantScriptAddEntity__long__TryGetEntity__);
      if ( ((unsigned __int8)Master_object & 1) != 0 )
      {
        if ( v14 )
        {
          offsetXMyroom = (int32_t)v14[2].monitor;
          offsetYMyroom = HIDWORD(v14[2].monitor);
          goto LABEL_36;
        }
LABEL_37:
        sub_1C32E7C(Master_object);
      }
      grandSelectOffset = this->fields.grandSelectOffset;
      if ( !grandSelectOffset )
        goto LABEL_37;
      if ( LODWORD(grandSelectOffset->max_length) < 2 )
LABEL_38:
        sub_1C32E84(Master_object);
      v11 = grandSelectOffset->m_Items[1];
      offsetXMyroom = grandSelectOffset->m_Items[0] + this->fields.offsetX;
      offsetYMyroom = v11 + this->fields.offsetY;
LABEL_36:
      v12 = (float)offsetXMyroom;
      v13 = (float)offsetYMyroom;
      result.fields.y = v13;
      result.fields.x = v12;
      return result;
    case 9:
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = (System_Int32_array *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_ServantScriptAddMaster___);
      if ( !Master_object )
        goto LABEL_37;
      Master_object = (System_Int32_array *)DataMasterBase_object__object__long___TryGetEntity(
                                              (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                              &v15,
                                              this->fields.id,
                                              (const MethodInfo_3398DE0 *)Method_DataMasterBase_ServantScriptAddMaster__ServantScriptAddEntity__long__TryGetEntity__);
      if ( ((unsigned __int8)Master_object & 1) == 0 )
      {
        offsetYMyroom = this->fields.offsetYMyroom;
        offsetXMyroom = this->fields.GrandBoardAddOffsetX + this->fields.offsetXMyroom;
        goto LABEL_36;
      }
      if ( !v15 )
        goto LABEL_37;
      offsetXMyroom = (int32_t)v15[3].klass;
      offsetYMyroom = HIDWORD(v15[3].klass);
      goto LABEL_36;
    default:
      offsetXMyroom = this->fields.offsetX;
      offsetYMyroom = this->fields.offsetY;
      goto LABEL_36;
  }
}


bool ServantScriptEntity__isMultipleForm(ServantScriptEntity_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *extendData; // x19
  ServantScriptEntity_c *v4; // x0

  if ( (byte_4C383DF & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C32C20(&ServantScriptEntity_TypeInfo);
    byte_4C383DF = 1;
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
           (const MethodInfo_3458FBC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
}