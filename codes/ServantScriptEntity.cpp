void ServantScriptEntity___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3
  System_String_o *v3; // x4
  int32_t v4; // w5
  int64_t v5; // x6
  System_String_o *v6; // x7
  int32_t v7; // w1
  struct ServantScriptEntity_StaticFields *static_fields; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  int32_t v15; // w1
  struct ServantScriptEntity_StaticFields *v16; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  int32_t v23; // w1
  struct ServantScriptEntity_StaticFields *v24; // x0
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7
  int32_t v31; // w1
  struct ServantScriptEntity_StaticFields *v32; // x0
  int32_t v33; // w2
  int32_t v34; // w3
  System_String_o *v35; // x4
  int32_t v36; // w5
  int64_t v37; // x6
  System_String_o *v38; // x7
  int32_t v39; // w1
  struct ServantScriptEntity_StaticFields *v40; // x0
  int32_t v41; // w2
  int32_t v42; // w3
  System_String_o *v43; // x4
  int32_t v44; // w5
  int64_t v45; // x6
  System_String_o *v46; // x7
  int32_t v47; // w1
  struct ServantScriptEntity_StaticFields *v48; // x0
  int32_t v49; // w2
  int32_t v50; // w3
  System_String_o *v51; // x4
  int32_t v52; // w5
  int64_t v53; // x6
  System_String_o *v54; // x7
  int32_t v55; // w1
  struct ServantScriptEntity_StaticFields *v56; // x0
  int32_t v57; // w2
  int32_t v58; // w3
  System_String_o *v59; // x4
  int32_t v60; // w5
  int64_t v61; // x6
  System_String_o *v62; // x7
  int32_t v63; // w1
  struct ServantScriptEntity_StaticFields *v64; // x0
  int32_t v65; // w2
  int32_t v66; // w3
  System_String_o *v67; // x4
  int32_t v68; // w5
  int64_t v69; // x6
  System_String_o *v70; // x7
  struct ServantScriptEntity_StaticFields *v71; // x0
  int32_t v72; // w1
  int32_t v73; // w2
  int32_t v74; // w3
  System_String_o *v75; // x4
  int32_t v76; // w5
  int64_t v77; // x6
  System_String_o *v78; // x7
  struct ServantScriptEntity_StaticFields *v79; // x0
  int32_t v80; // w1
  int32_t v81; // w2
  int32_t v82; // w3
  System_String_o *v83; // x4
  int32_t v84; // w5
  int64_t v85; // x6
  System_String_o *v86; // x7
  struct ServantScriptEntity_StaticFields *v87; // x0
  int32_t v88; // w1
  int32_t v89; // w2
  int32_t v90; // w3
  System_String_o *v91; // x4
  int32_t v92; // w5
  int64_t v93; // x6
  System_String_o *v94; // x7
  struct ServantScriptEntity_StaticFields *v95; // x0
  int32_t v96; // w1
  int32_t v97; // w2
  int32_t v98; // w3
  System_String_o *v99; // x4
  int32_t v100; // w5
  int64_t v101; // x6
  System_String_o *v102; // x7
  struct ServantScriptEntity_StaticFields *v103; // x0
  int32_t v104; // w1
  int32_t v105; // w2
  int32_t v106; // w3
  System_String_o *v107; // x4
  int32_t v108; // w5
  int64_t v109; // x6
  System_String_o *v110; // x7

  if ( (byte_4D31416 & 1) == 0 )
  {
    sub_1C93AD4(&ServantScriptEntity_TypeInfo);
    sub_1C93AD4(&StringLiteral_22964/*"photoSvtScale"*/);
    sub_1C93AD4(&StringLiteral_22962/*"photoSvtPositionLeft"*/);
    sub_1C93AD4(&StringLiteral_22963/*"photoSvtPositionRight"*/);
    sub_1C93AD4(&StringLiteral_3124/*"BattleBondOffset"*/);
    sub_1C93AD4(&StringLiteral_24949/*"value"*/);
    sub_1C93AD4(&StringLiteral_22961/*"photoSvtPosition"*/);
    sub_1C93AD4(&StringLiteral_22415/*"myroomForm"*/);
    sub_1C93AD4(&StringLiteral_22965/*"photoSvtScaleLeft"*/);
    sub_1C93AD4(&StringLiteral_18360/*"conds"*/);
    sub_1C93AD4(&StringLiteral_22966/*"photoSvtScaleRight"*/);
    sub_1C93AD4(&StringLiteral_18271/*"combineResultMultipleForm"*/);
    sub_1C93AD4(&StringLiteral_19582/*"faceSize"*/);
    sub_1C93AD4(&StringLiteral_13805/*"TerminalOffset"*/);
    sub_1C93AD4(&StringLiteral_18359/*"condType"*/);
    byte_4D31416 = 1;
  }
  ServantScriptEntity_TypeInfo->static_fields->FACE_SIZE_KEY = (struct System_String_o *)StringLiteral_19582/*"faceSize"*/;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)ServantScriptEntity_TypeInfo->static_fields,
    StringLiteral_19582/*"faceSize"*/,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
  v7 = StringLiteral_22415/*"myroomForm"*/;
  static_fields = ServantScriptEntity_TypeInfo->static_fields;
  static_fields->MYROOM_FORM_KEY = (struct System_String_o *)StringLiteral_22415/*"myroomForm"*/;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&static_fields->MYROOM_FORM_KEY, v7, v9, v10, v11, v12, v13, v14);
  v15 = StringLiteral_18271/*"combineResultMultipleForm"*/;
  v16 = ServantScriptEntity_TypeInfo->static_fields;
  v16->COMBINE_RESULT_FORM_KEY = (struct System_String_o *)StringLiteral_18271/*"combineResultMultipleForm"*/;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v16->COMBINE_RESULT_FORM_KEY, v15, v17, v18, v19, v20, v21, v22);
  v23 = StringLiteral_18360/*"conds"*/;
  v24 = ServantScriptEntity_TypeInfo->static_fields;
  v24->COND_KEY = (struct System_String_o *)StringLiteral_18360/*"conds"*/;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v24->COND_KEY, v23, v25, v26, v27, v28, v29, v30);
  v31 = StringLiteral_18359/*"condType"*/;
  v32 = ServantScriptEntity_TypeInfo->static_fields;
  v32->COND_TYPE_KEY = (struct System_String_o *)StringLiteral_18359/*"condType"*/;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v32->COND_TYPE_KEY, v31, v33, v34, v35, v36, v37, v38);
  v39 = StringLiteral_24949/*"value"*/;
  v40 = ServantScriptEntity_TypeInfo->static_fields;
  v40->COND_VALUE_KEY = (struct System_String_o *)StringLiteral_24949/*"value"*/;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v40->COND_VALUE_KEY, v39, v41, v42, v43, v44, v45, v46);
  v47 = StringLiteral_13805/*"TerminalOffset"*/;
  v48 = ServantScriptEntity_TypeInfo->static_fields;
  v48->TERMINAL_OFFSET_KEY = (struct System_String_o *)StringLiteral_13805/*"TerminalOffset"*/;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v48->TERMINAL_OFFSET_KEY, v47, v49, v50, v51, v52, v53, v54);
  v55 = StringLiteral_3124/*"BattleBondOffset"*/;
  v56 = ServantScriptEntity_TypeInfo->static_fields;
  v56->BATTLE_BOND_OFFSET_KEY = (struct System_String_o *)StringLiteral_3124/*"BattleBondOffset"*/;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v56->BATTLE_BOND_OFFSET_KEY, v55, v57, v58, v59, v60, v61, v62);
  v63 = StringLiteral_22961/*"photoSvtPosition"*/;
  v64 = ServantScriptEntity_TypeInfo->static_fields;
  v64->PHOT_SVT_POSITION_KEY = (struct System_String_o *)StringLiteral_22961/*"photoSvtPosition"*/;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v64->PHOT_SVT_POSITION_KEY, v63, v65, v66, v67, v68, v69, v70);
  v71 = ServantScriptEntity_TypeInfo->static_fields;
  v72 = StringLiteral_22963/*"photoSvtPositionRight"*/;
  v71->PHOT_SVT_POSITION_RIGHT_KEY = (struct System_String_o *)StringLiteral_22963/*"photoSvtPositionRight"*/;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v71->PHOT_SVT_POSITION_RIGHT_KEY, v72, v73, v74, v75, v76, v77, v78);
  v79 = ServantScriptEntity_TypeInfo->static_fields;
  v80 = StringLiteral_22962/*"photoSvtPositionLeft"*/;
  v79->PHOT_SVT_POSITION_LEFT_KEY = (struct System_String_o *)StringLiteral_22962/*"photoSvtPositionLeft"*/;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v79->PHOT_SVT_POSITION_LEFT_KEY, v80, v81, v82, v83, v84, v85, v86);
  v87 = ServantScriptEntity_TypeInfo->static_fields;
  v88 = StringLiteral_22964/*"photoSvtScale"*/;
  v87->PHOT_SVT_SCALE_KEY = (struct System_String_o *)StringLiteral_22964/*"photoSvtScale"*/;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v87->PHOT_SVT_SCALE_KEY, v88, v89, v90, v91, v92, v93, v94);
  v95 = ServantScriptEntity_TypeInfo->static_fields;
  v96 = StringLiteral_22966/*"photoSvtScaleRight"*/;
  v95->PHOT_SVT_SCALE_RIGHT_KEY = (struct System_String_o *)StringLiteral_22966/*"photoSvtScaleRight"*/;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v95->PHOT_SVT_SCALE_RIGHT_KEY, v96, v97, v98, v99, v100, v101, v102);
  v103 = ServantScriptEntity_TypeInfo->static_fields;
  v104 = StringLiteral_22965/*"photoSvtScaleLeft"*/;
  v103->PHOT_SVT_SCALE_LEFT_KEY = (struct System_String_o *)StringLiteral_22965/*"photoSvtScaleLeft"*/;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v103->PHOT_SVT_SCALE_LEFT_KEY, v104, v105, v106, v107, v108, v109, v110);
}


void ServantScriptEntity___ctor(ServantScriptEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x0
  __int64 v4; // x1
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7
  int v11; // w8

  if ( (byte_4D31415 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataEntityBase_string___ctor__);
    sub_1C93AD4(&int___TypeInfo);
    byte_4D31415 = 1;
  }
  v3 = sub_1C93B7C(int___TypeInfo, 2);
  if ( !v3 )
    sub_1C93D2C(0, v4);
  v11 = *(_DWORD *)(v3 + 24);
  if ( !v11 || (*(_DWORD *)(v3 + 32) = 300, v11 == 1) )
    sub_1C93D34(v3);
  *(_DWORD *)(v3 + 36) = 5;
  this->fields.grandSelectOffset = (struct System_Int32_array *)v3;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.grandSelectOffset, v3, v5, v6, v7, v8, v9, v10);
  this->fields.GrandBoardAddOffsetX = -25;
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3460BB4 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *ServantScriptEntity__CreatePK(int32_t id, int32_t form, const MethodInfo *method)
{
  if ( (byte_4D31406 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_4D31406 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           id,
           form,
           (const MethodInfo_31A2BC4 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *ServantScriptEntity__CreatePrimaryKey(ServantScriptEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  int32_t form; // w19
  int32_t id; // w20

  if ( (byte_4D31405 & 1) == 0 )
  {
    sub_1C93AD4(&ServantScriptEntity_TypeInfo);
    byte_4D31405 = 1;
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

  if ( (byte_4D3140D & 1) == 0 )
  {
    sub_1C93AD4(&ServantScriptEntity_TypeInfo);
    byte_4D3140D = 1;
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
  __int64 v8; // x1
  System_Collections_Generic_Dictionary_object__object__o *Item; // x0
  __int64 naturalAligment; // x10
  System_Collections_Generic_List_object__c *v11; // x9
  System_Collections_Generic_List_object__o *v12; // x20
  unsigned __int64 v13; // x21
  char v14; // w8
  char v15; // w25
  Il2CppObject *v16; // x22
  char *v17; // x9

  if ( (byte_4D3140E & 1) == 0 )
  {
    sub_1C93AD4(&System_Convert_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C93AD4(&int___TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_object__get_Count__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_object__get_Item__);
    sub_1C93AD4(&System_Collections_Generic_List_object__TypeInfo);
    byte_4D3140E = 1;
  }
  if ( !defaultValue )
    defaultValue = (System_Int32_array *)sub_1C93B7C(int___TypeInfo, 2);
  extendData = this->fields.extendData;
  if ( extendData
    && System_Collections_Generic_Dictionary_object__object___ContainsKey(
         (System_Collections_Generic_Dictionary_object__object__o *)extendData,
         (Il2CppObject *)key,
         (const MethodInfo_352ED9C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    Item = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.extendData;
    if ( !Item )
      goto LABEL_25;
    Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                        Item,
                                                                        (Il2CppObject *)key,
                                                                        (const MethodInfo_352EB28 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( Item )
    {
      naturalAligment = System_Collections_Generic_List_object__TypeInfo->_2.naturalAligment;
      if ( Item->klass->_2.naturalAligment >= (unsigned int)naturalAligment )
      {
        v11 = (System_Collections_Generic_List_object__c *)Item->klass->_2.typeHierarchy[naturalAligment - 1];
        v12 = v11 == System_Collections_Generic_List_object__TypeInfo
            ? (System_Collections_Generic_List_object__o *)Item
            : 0LL;
        if ( v11 == System_Collections_Generic_List_object__TypeInfo )
        {
          if ( v12 )
          {
            v13 = 0;
            v14 = 1;
            while ( 1 )
            {
              v15 = v14;
              if ( (__int64)v13 >= v12->fields._size )
              {
                Item = 0;
              }
              else
              {
                v16 = System_Collections_Generic_List_object___get_Item(
                        v12,
                        v13,
                        (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_object__get_Item__);
                if ( !System_Convert_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
                Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Convert__ToInt32(v16, 0);
              }
              if ( !defaultValue )
                break;
              if ( v13 >= LODWORD(defaultValue->max_length) )
                sub_1C93D34(Item);
              v14 = 0;
              v17 = (char *)defaultValue + 4 * v13;
              v13 = 1;
              *((_DWORD *)v17 + 8) = (_DWORD)Item;
              if ( (v15 & 1) == 0 )
                return defaultValue;
            }
          }
LABEL_25:
          sub_1C93D2C(Item, v8);
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

  if ( (byte_4D3140F & 1) == 0 )
  {
    sub_1C93AD4(&ServantScriptEntity_TypeInfo);
    byte_4D3140F = 1;
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

  if ( (byte_4D31411 & 1) == 0 )
  {
    sub_1C93AD4(&ServantScriptEntity_TypeInfo);
    byte_4D31411 = 1;
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

  if ( (byte_4D31410 & 1) == 0 )
  {
    sub_1C93AD4(&ServantScriptEntity_TypeInfo);
    byte_4D31410 = 1;
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
  __int64 v7; // x1
  ServantScriptEntity_c *v8; // x0
  struct System_Collections_Generic_Dictionary_string__object__o *v9; // x19
  Il2CppObject *Item; // x19

  if ( (byte_4D31412 & 1) == 0 )
  {
    sub_1C93AD4(&System_Convert_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C93AD4(&ServantScriptEntity_TypeInfo);
    byte_4D31412 = 1;
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
          (const MethodInfo_352ED9C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return defaultValue;
  v8 = ServantScriptEntity_TypeInfo;
  v9 = this->fields.extendData;
  if ( !ServantScriptEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantScriptEntity_TypeInfo);
  if ( !v9 )
    sub_1C93D2C(v8, v7);
  Item = System_Collections_Generic_Dictionary_object__object___get_Item(
           (System_Collections_Generic_Dictionary_object__object__o *)v9,
           (Il2CppObject *)ServantScriptEntity_TypeInfo->static_fields->PHOT_SVT_SCALE_KEY,
           (const MethodInfo_352EB28 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
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
  __int64 v7; // x1
  ServantScriptEntity_c *v8; // x0
  struct System_Collections_Generic_Dictionary_string__object__o *v9; // x19
  Il2CppObject *Item; // x19

  if ( (byte_4D31414 & 1) == 0 )
  {
    sub_1C93AD4(&System_Convert_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C93AD4(&ServantScriptEntity_TypeInfo);
    byte_4D31414 = 1;
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
          (const MethodInfo_352ED9C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return defaultValue;
  v8 = ServantScriptEntity_TypeInfo;
  v9 = this->fields.extendData;
  if ( !ServantScriptEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantScriptEntity_TypeInfo);
  if ( !v9 )
    sub_1C93D2C(v8, v7);
  Item = System_Collections_Generic_Dictionary_object__object___get_Item(
           (System_Collections_Generic_Dictionary_object__object__o *)v9,
           (Il2CppObject *)ServantScriptEntity_TypeInfo->static_fields->PHOT_SVT_SCALE_LEFT_KEY,
           (const MethodInfo_352EB28 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
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
  __int64 v7; // x1
  ServantScriptEntity_c *v8; // x0
  struct System_Collections_Generic_Dictionary_string__object__o *v9; // x19
  Il2CppObject *Item; // x19

  if ( (byte_4D31413 & 1) == 0 )
  {
    sub_1C93AD4(&System_Convert_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C93AD4(&ServantScriptEntity_TypeInfo);
    byte_4D31413 = 1;
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
          (const MethodInfo_352ED9C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return defaultValue;
  v8 = ServantScriptEntity_TypeInfo;
  v9 = this->fields.extendData;
  if ( !ServantScriptEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantScriptEntity_TypeInfo);
  if ( !v9 )
    sub_1C93D2C(v8, v7);
  Item = System_Collections_Generic_Dictionary_object__object___get_Item(
           (System_Collections_Generic_Dictionary_object__object__o *)v9,
           (Il2CppObject *)ServantScriptEntity_TypeInfo->static_fields->PHOT_SVT_SCALE_RIGHT_KEY,
           (const MethodInfo_352EB28 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !System_Convert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  return System_Convert__ToSingle(Item, 0);
}


System_Int32_array *ServantScriptEntity__GetTerminalOffset(ServantScriptEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  ServantScriptEntity_c *v4; // x0

  if ( (byte_4D3140C & 1) == 0 )
  {
    sub_1C93AD4(&ServantScriptEntity_TypeInfo);
    byte_4D3140C = 1;
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
  System_Collections_Generic_Dictionary_string__object__c *v7; // x1
  int *Item; // x0
  struct System_Collections_Generic_Dictionary_string__object__o *v9; // x21
  __int64 naturalAligment; // x9
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

  if ( (byte_4D3140B & 1) == 0 )
  {
    sub_1C93AD4(&CondType_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C93AD4(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_1C93AD4(&long_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_object__get_Count__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_object__get_Item__);
    sub_1C93AD4(&System_Collections_Generic_List_object__TypeInfo);
    sub_1C93AD4(&ServantScriptEntity_TypeInfo);
    byte_4D3140B = 1;
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
          (const MethodInfo_352ED9C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
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
                  (const MethodInfo_352EB28 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
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
  v11 = System_Collections_Generic_List_object___get_Item(
          (System_Collections_Generic_List_object__o *)Item,
          0,
          (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_object__get_Item__);
  v9 = (struct System_Collections_Generic_Dictionary_string__object__o *)v11;
  if ( v11 )
  {
    v7 = System_Collections_Generic_Dictionary_string__object__TypeInfo;
    v12 = System_Collections_Generic_Dictionary_string__object__TypeInfo->_2.naturalAligment;
    if ( v11->klass->_2.naturalAligment < (unsigned int)v12
      || (System_Collections_Generic_Dictionary_string__object__c *)v11->klass->_2.typeHierarchy[v12 - 1] != System_Collections_Generic_Dictionary_string__object__TypeInfo )
    {
LABEL_43:
      sub_1C940C8(v9);
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
          (const MethodInfo_352ED9C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
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
          (const MethodInfo_352ED9C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
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
                  (const MethodInfo_352EB28 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !Item )
    goto LABEL_41;
  if ( *(Il2CppClass **)(*(_QWORD *)Item + 64LL) != long_TypeInfo->_1.element_class )
    goto LABEL_42;
  v17 = *(_DWORD *)j_il2cpp_object_unbox_0(Item, long_TypeInfo, v15, v16);
  Item = (int *)System_Collections_Generic_Dictionary_object__object___get_Item(
                  (System_Collections_Generic_Dictionary_object__object__o *)v9,
                  (Il2CppObject *)ServantScriptEntity_TypeInfo->static_fields->COND_VALUE_KEY,
                  (const MethodInfo_352EB28 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !Item )
    goto LABEL_41;
  if ( *(Il2CppClass **)(*(_QWORD *)Item + 64LL) != long_TypeInfo->_1.element_class )
  {
LABEL_42:
    sub_1C940C8(Item);
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
  Item = (int *)System_Int32__ToString((int)this + 16, 0);
  if ( !Item )
LABEL_41:
    sub_1C93D2C(Item, v7);
  v21 = System_String__Substring_64471664((System_String_o *)Item, 0, Item[4] - 1, 0);
  v22 = System_Int32__Parse(v21, 0);
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  LOBYTE(Item) = CondType__IsOpen(v17, v22, v20, 0, 0, 0);
  return (char)Item;
}


UnityEngine_Vector2Int_o ServantScriptEntity__getFaceSize(ServantScriptEntity_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *extendData; // x21
  UnityEngine_Vector2Int_o s_Zero; // x19
  ServantScriptEntity_c *v5; // x0
  __int64 v6; // x1
  ServantScriptEntity_c *v7; // x0
  struct System_Collections_Generic_Dictionary_string__object__o *v8; // x20
  System_Collections_Generic_List_object__o *Item; // x0
  System_Collections_Generic_List_object__o *v10; // x20
  __int64 naturalAligment; // x10
  Il2CppObject *v12; // x0
  unsigned __int64 v13; // x0
  int size; // w8
  Il2CppObject *v15; // x19
  Il2CppObject *v16; // x0

  if ( (byte_4D31408 & 1) == 0 )
  {
    sub_1C93AD4(&System_Convert_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_object__get_Count__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_object__get_Item__);
    sub_1C93AD4(&System_Collections_Generic_List_object__TypeInfo);
    sub_1C93AD4(&ServantScriptEntity_TypeInfo);
    byte_4D31408 = 1;
  }
  if ( !byte_4D3151A )
  {
    sub_1C93AD4(&UnityEngine_Vector2Int_TypeInfo);
    byte_4D3151A = 1;
  }
  extendData = this->fields.extendData;
  s_Zero = UnityEngine_Vector2Int_TypeInfo->static_fields->s_Zero;
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
           (const MethodInfo_352ED9C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    {
      v7 = ServantScriptEntity_TypeInfo;
      v8 = this->fields.extendData;
      if ( !ServantScriptEntity_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantScriptEntity_TypeInfo);
      if ( !v8 )
        sub_1C93D2C(v7, v6);
      Item = (System_Collections_Generic_List_object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                            (System_Collections_Generic_Dictionary_object__object__o *)v8,
                                                            (Il2CppObject *)ServantScriptEntity_TypeInfo->static_fields->FACE_SIZE_KEY,
                                                            (const MethodInfo_352EB28 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
      v10 = Item;
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
            s_Zero = (UnityEngine_Vector2Int_o)System_Collections_Generic_List_object___get_Item(
                                                 Item,
                                                 0,
                                                 (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_object__get_Item__);
            if ( !System_Convert_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
            s_Zero.fields.m_X = System_Convert__ToInt32(*(Il2CppObject **)&s_Zero, 0);
            v16 = System_Collections_Generic_List_object___get_Item(
                    v10,
                    1,
                    (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_object__get_Item__);
            LODWORD(v13) = System_Convert__ToInt32(v16, 0);
          }
          else
          {
            v13 = HIDWORD(*(unsigned __int64 *)&s_Zero);
          }
          return (UnityEngine_Vector2Int_o)((unsigned int)s_Zero.fields.m_X | ((unsigned __int64)(unsigned int)v13 << 32));
        }
        v15 = System_Collections_Generic_List_object___get_Item(
                Item,
                0,
                (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_object__get_Item__);
        if ( !System_Convert_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
        v12 = v15;
      }
      else
      {
        if ( !System_Convert_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
        v12 = (Il2CppObject *)v10;
      }
      LODWORD(v13) = System_Convert__ToInt32(v12, 0);
      s_Zero.fields.m_X = v13;
      return (UnityEngine_Vector2Int_o)((unsigned int)s_Zero.fields.m_X | ((unsigned __int64)(unsigned int)v13 << 32));
    }
  }
  return s_Zero;
}


int32_t ServantScriptEntity__getMyRoomForm(ServantScriptEntity_o *this, const MethodInfo *method)
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

  if ( (byte_4D31409 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C93AD4(&long_TypeInfo);
    sub_1C93AD4(&ServantScriptEntity_TypeInfo);
    byte_4D31409 = 1;
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
          (const MethodInfo_352ED9C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return 0;
  Item = ServantScriptEntity_TypeInfo;
  v7 = this->fields.extendData;
  if ( !ServantScriptEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantScriptEntity_TypeInfo);
  if ( !v7
    || (Item = System_Collections_Generic_Dictionary_object__object___get_Item(
                 (System_Collections_Generic_Dictionary_object__object__o *)v7,
                 (Il2CppObject *)ServantScriptEntity_TypeInfo->static_fields->MYROOM_FORM_KEY,
                 (const MethodInfo_352EB28 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0 )
  {
    sub_1C93D2C(Item, v5);
  }
  if ( *(Il2CppClass **)(*(_QWORD *)Item + 64LL) == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(Item, long_TypeInfo, v8, v9);
  sub_1C940C8(Item);
  return ServantScriptEntity__isMultipleForm(v11, v12);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Vector2_o ServantScriptEntity__getOffset(
        ServantScriptEntity_o *this,
        int32_t offsetKind,
        const MethodInfo *method)
{
  System_Int32_array *Master_object; // x0
  __int64 v6; // x1
  __int64 v7; // x10
  __int64 v8; // x8
  int32_t offsetXMyroom; // w8
  int32_t offsetYMyroom; // w9
  struct System_Int32_array *grandSelectOffset; // x8
  int32_t v12; // w12
  Il2CppObject *v15; // [xsp+8h] [xbp-38h] BYREF
  Il2CppObject *v16; // [xsp+10h] [xbp-30h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-28h] BYREF
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  if ( (byte_4D31407 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMaster_ServantScriptAddMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&Method_DataMasterBase_ServantScriptAddMaster__ServantScriptAddEntity__long__TryGetEntity__);
    byte_4D31407 = 1;
  }
  v16 = 0;
  entity = 0;
  v15 = 0;
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
      Master_object = (System_Int32_array *)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_ServantScriptAddMaster___);
      if ( !Master_object )
        goto LABEL_37;
      Master_object = (System_Int32_array *)DataMasterBase_object__object__long___TryGetEntity(
                                              (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                              &entity,
                                              this->fields.id,
                                              (const MethodInfo_3465A70 *)Method_DataMasterBase_ServantScriptAddMaster__ServantScriptAddEntity__long__TryGetEntity__);
      if ( ((unsigned __int8)Master_object & 1) == 0 )
      {
LABEL_13:
        offsetXMyroom = this->fields.offsetXMyroom;
        offsetYMyroom = this->fields.offsetYMyroom;
        goto LABEL_36;
      }
      if ( !entity )
        goto LABEL_37;
      v7 = 36;
      if ( offsetKind == 4 )
      {
        v8 = 32;
      }
      else
      {
        v7 = 28;
        v8 = 24;
      }
      offsetXMyroom = *(_DWORD *)((char *)&entity->klass + v8);
      offsetYMyroom = *(_DWORD *)((char *)&entity->klass + v7);
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
      Master_object = (System_Int32_array *)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_ServantScriptAddMaster___);
      if ( !Master_object )
        goto LABEL_37;
      Master_object = (System_Int32_array *)DataMasterBase_object__object__long___TryGetEntity(
                                              (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                              &v15,
                                              this->fields.id,
                                              (const MethodInfo_3465A70 *)Method_DataMasterBase_ServantScriptAddMaster__ServantScriptAddEntity__long__TryGetEntity__);
      if ( ((unsigned __int8)Master_object & 1) != 0 )
      {
        if ( v15 )
        {
          offsetXMyroom = (int32_t)v15[2].monitor;
          offsetYMyroom = HIDWORD(v15[2].monitor);
          goto LABEL_36;
        }
LABEL_37:
        sub_1C93D2C(Master_object, v6);
      }
      grandSelectOffset = this->fields.grandSelectOffset;
      if ( !grandSelectOffset )
        goto LABEL_37;
      if ( LODWORD(grandSelectOffset->max_length) < 2 )
LABEL_38:
        sub_1C93D34(Master_object);
      v12 = grandSelectOffset->m_Items[1];
      offsetXMyroom = grandSelectOffset->m_Items[0] + this->fields.offsetX;
      offsetYMyroom = v12 + this->fields.offsetY;
LABEL_36:
      result.fields.x = (float)offsetXMyroom;
      result.fields.y = (float)offsetYMyroom;
      return result;
    case 9:
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = (System_Int32_array *)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_ServantScriptAddMaster___);
      if ( !Master_object )
        goto LABEL_37;
      Master_object = (System_Int32_array *)DataMasterBase_object__object__long___TryGetEntity(
                                              (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                              &v16,
                                              this->fields.id,
                                              (const MethodInfo_3465A70 *)Method_DataMasterBase_ServantScriptAddMaster__ServantScriptAddEntity__long__TryGetEntity__);
      if ( ((unsigned __int8)Master_object & 1) == 0 )
      {
        offsetYMyroom = this->fields.offsetYMyroom;
        offsetXMyroom = this->fields.GrandBoardAddOffsetX + this->fields.offsetXMyroom;
        goto LABEL_36;
      }
      if ( !v16 )
        goto LABEL_37;
      offsetXMyroom = (int32_t)v16[3].klass;
      offsetYMyroom = HIDWORD(v16[3].klass);
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

  if ( (byte_4D3140A & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C93AD4(&ServantScriptEntity_TypeInfo);
    byte_4D3140A = 1;
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
           (const MethodInfo_352ED9C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
}