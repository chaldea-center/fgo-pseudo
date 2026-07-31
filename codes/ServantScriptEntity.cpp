void ServantScriptEntity___cctor(const MethodInfo *method)
{
  System_String_o *v1; // x2
  System_String_o *v2; // x3
  int32_t v3; // w4
  int32_t v4; // w5
  bool v5; // w6
  bool v6; // w7
  int32_t v7; // w1
  int32_t v8; // w1
  struct ServantScriptEntity_StaticFields *static_fields; // x0
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  int32_t v16; // w1
  struct ServantScriptEntity_StaticFields *v17; // x0
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  int32_t v24; // w1
  struct ServantScriptEntity_StaticFields *v25; // x0
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  int32_t v32; // w1
  struct ServantScriptEntity_StaticFields *v33; // x0
  System_String_o *v34; // x2
  System_String_o *v35; // x3
  int32_t v36; // w4
  int32_t v37; // w5
  bool v38; // w6
  bool v39; // w7
  int32_t v40; // w1
  struct ServantScriptEntity_StaticFields *v41; // x0
  System_String_o *v42; // x2
  System_String_o *v43; // x3
  int32_t v44; // w4
  int32_t v45; // w5
  bool v46; // w6
  bool v47; // w7
  int32_t v48; // w1
  struct ServantScriptEntity_StaticFields *v49; // x0
  System_String_o *v50; // x2
  System_String_o *v51; // x3
  int32_t v52; // w4
  int32_t v53; // w5
  bool v54; // w6
  bool v55; // w7
  int32_t v56; // w1
  struct ServantScriptEntity_StaticFields *v57; // x0
  System_String_o *v58; // x2
  System_String_o *v59; // x3
  int32_t v60; // w4
  int32_t v61; // w5
  bool v62; // w6
  bool v63; // w7
  int32_t v64; // w1
  struct ServantScriptEntity_StaticFields *v65; // x0
  System_String_o *v66; // x2
  System_String_o *v67; // x3
  int32_t v68; // w4
  int32_t v69; // w5
  bool v70; // w6
  bool v71; // w7
  struct ServantScriptEntity_StaticFields *v72; // x0
  int32_t v73; // w1
  System_String_o *v74; // x2
  System_String_o *v75; // x3
  int32_t v76; // w4
  int32_t v77; // w5
  bool v78; // w6
  bool v79; // w7
  struct ServantScriptEntity_StaticFields *v80; // x0
  int32_t v81; // w1
  System_String_o *v82; // x2
  System_String_o *v83; // x3
  int32_t v84; // w4
  int32_t v85; // w5
  bool v86; // w6
  bool v87; // w7
  struct ServantScriptEntity_StaticFields *v88; // x0
  int32_t v89; // w1
  System_String_o *v90; // x2
  System_String_o *v91; // x3
  int32_t v92; // w4
  int32_t v93; // w5
  bool v94; // w6
  bool v95; // w7
  struct ServantScriptEntity_StaticFields *v96; // x0
  int32_t v97; // w1
  System_String_o *v98; // x2
  System_String_o *v99; // x3
  int32_t v100; // w4
  int32_t v101; // w5
  bool v102; // w6
  bool v103; // w7
  struct ServantScriptEntity_StaticFields *v104; // x0
  int32_t v105; // w1
  System_String_o *v106; // x2
  System_String_o *v107; // x3
  int32_t v108; // w4
  int32_t v109; // w5
  bool v110; // w6
  bool v111; // w7

  if ( (byte_593911C & 1) == 0 )
  {
    sub_21FFC50(&ServantScriptEntity_TypeInfo);
    sub_21FFC50(&StringLiteral_23806/*"photoSvtScale"*/);
    sub_21FFC50(&StringLiteral_23804/*"photoSvtPositionLeft"*/);
    sub_21FFC50(&StringLiteral_23805/*"photoSvtPositionRight"*/);
    sub_21FFC50(&StringLiteral_3228/*"BattleBondOffset"*/);
    sub_21FFC50(&StringLiteral_25940/*"value"*/);
    sub_21FFC50(&StringLiteral_23803/*"photoSvtPosition"*/);
    sub_21FFC50(&StringLiteral_23217/*"myroomForm"*/);
    sub_21FFC50(&StringLiteral_23807/*"photoSvtScaleLeft"*/);
    sub_21FFC50(&StringLiteral_18985/*"conds"*/);
    sub_21FFC50(&StringLiteral_23808/*"photoSvtScaleRight"*/);
    sub_21FFC50(&StringLiteral_18894/*"combineResultMultipleForm"*/);
    sub_21FFC50(&StringLiteral_20240/*"faceSize"*/);
    sub_21FFC50(&StringLiteral_14246/*"TerminalOffset"*/);
    sub_21FFC50(&StringLiteral_18984/*"condType"*/);
    byte_593911C = 1;
  }
  v7 = StringLiteral_20240/*"faceSize"*/;
  ServantScriptEntity_TypeInfo->static_fields->FACE_SIZE_KEY = (struct System_String_o *)StringLiteral_20240/*"faceSize"*/;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)ServantScriptEntity_TypeInfo->static_fields,
    v7,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
  v8 = StringLiteral_23217/*"myroomForm"*/;
  static_fields = ServantScriptEntity_TypeInfo->static_fields;
  static_fields->MYROOM_FORM_KEY = (struct System_String_o *)StringLiteral_23217/*"myroomForm"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&static_fields->MYROOM_FORM_KEY, v8, v10, v11, v12, v13, v14, v15);
  v16 = StringLiteral_18894/*"combineResultMultipleForm"*/;
  v17 = ServantScriptEntity_TypeInfo->static_fields;
  v17->COMBINE_RESULT_FORM_KEY = (struct System_String_o *)StringLiteral_18894/*"combineResultMultipleForm"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v17->COMBINE_RESULT_FORM_KEY, v16, v18, v19, v20, v21, v22, v23);
  v24 = StringLiteral_18985/*"conds"*/;
  v25 = ServantScriptEntity_TypeInfo->static_fields;
  v25->COND_KEY = (struct System_String_o *)StringLiteral_18985/*"conds"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v25->COND_KEY, v24, v26, v27, v28, v29, v30, v31);
  v32 = StringLiteral_18984/*"condType"*/;
  v33 = ServantScriptEntity_TypeInfo->static_fields;
  v33->COND_TYPE_KEY = (struct System_String_o *)StringLiteral_18984/*"condType"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v33->COND_TYPE_KEY, v32, v34, v35, v36, v37, v38, v39);
  v40 = StringLiteral_25940/*"value"*/;
  v41 = ServantScriptEntity_TypeInfo->static_fields;
  v41->COND_VALUE_KEY = (struct System_String_o *)StringLiteral_25940/*"value"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v41->COND_VALUE_KEY, v40, v42, v43, v44, v45, v46, v47);
  v48 = StringLiteral_14246/*"TerminalOffset"*/;
  v49 = ServantScriptEntity_TypeInfo->static_fields;
  v49->TERMINAL_OFFSET_KEY = (struct System_String_o *)StringLiteral_14246/*"TerminalOffset"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v49->TERMINAL_OFFSET_KEY, v48, v50, v51, v52, v53, v54, v55);
  v56 = StringLiteral_3228/*"BattleBondOffset"*/;
  v57 = ServantScriptEntity_TypeInfo->static_fields;
  v57->BATTLE_BOND_OFFSET_KEY = (struct System_String_o *)StringLiteral_3228/*"BattleBondOffset"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v57->BATTLE_BOND_OFFSET_KEY, v56, v58, v59, v60, v61, v62, v63);
  v64 = StringLiteral_23803/*"photoSvtPosition"*/;
  v65 = ServantScriptEntity_TypeInfo->static_fields;
  v65->PHOT_SVT_POSITION_KEY = (struct System_String_o *)StringLiteral_23803/*"photoSvtPosition"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v65->PHOT_SVT_POSITION_KEY, v64, v66, v67, v68, v69, v70, v71);
  v72 = ServantScriptEntity_TypeInfo->static_fields;
  v73 = StringLiteral_23805/*"photoSvtPositionRight"*/;
  v72->PHOT_SVT_POSITION_RIGHT_KEY = (struct System_String_o *)StringLiteral_23805/*"photoSvtPositionRight"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v72->PHOT_SVT_POSITION_RIGHT_KEY, v73, v74, v75, v76, v77, v78, v79);
  v80 = ServantScriptEntity_TypeInfo->static_fields;
  v81 = StringLiteral_23804/*"photoSvtPositionLeft"*/;
  v80->PHOT_SVT_POSITION_LEFT_KEY = (struct System_String_o *)StringLiteral_23804/*"photoSvtPositionLeft"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v80->PHOT_SVT_POSITION_LEFT_KEY, v81, v82, v83, v84, v85, v86, v87);
  v88 = ServantScriptEntity_TypeInfo->static_fields;
  v89 = StringLiteral_23806/*"photoSvtScale"*/;
  v88->PHOT_SVT_SCALE_KEY = (struct System_String_o *)StringLiteral_23806/*"photoSvtScale"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v88->PHOT_SVT_SCALE_KEY, v89, v90, v91, v92, v93, v94, v95);
  v96 = ServantScriptEntity_TypeInfo->static_fields;
  v97 = StringLiteral_23808/*"photoSvtScaleRight"*/;
  v96->PHOT_SVT_SCALE_RIGHT_KEY = (struct System_String_o *)StringLiteral_23808/*"photoSvtScaleRight"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v96->PHOT_SVT_SCALE_RIGHT_KEY, v97, v98, v99, v100, v101, v102, v103);
  v104 = ServantScriptEntity_TypeInfo->static_fields;
  v105 = StringLiteral_23807/*"photoSvtScaleLeft"*/;
  v104->PHOT_SVT_SCALE_LEFT_KEY = (struct System_String_o *)StringLiteral_23807/*"photoSvtScaleLeft"*/;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v104->PHOT_SVT_SCALE_LEFT_KEY,
    v105,
    v106,
    v107,
    v108,
    v109,
    v110,
    v111);
}


void ServantScriptEntity___ctor(ServantScriptEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x0
  __int64 v4; // x1
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  int v11; // w8
  const MethodInfo_3EDADE8 *v12; // x1

  if ( (byte_593911B & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_string___ctor__);
    sub_21FFC50(&int___TypeInfo);
    byte_593911B = 1;
  }
  v3 = sub_21FFD10(int___TypeInfo, 2);
  if ( !v3 )
    sub_21FFECC(0, v4);
  v11 = *(_DWORD *)(v3 + 24);
  if ( !v11 || (*(_DWORD *)(v3 + 32) = 300, v11 == 1) )
    sub_21FFED4(v3);
  *(_DWORD *)(v3 + 36) = 5;
  this->fields.grandSelectOffset = (struct System_Int32_array *)v3;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.grandSelectOffset, v3, v5, v6, v7, v8, v9, v10);
  v12 = (const MethodInfo_3EDADE8 *)Method_DataEntityBase_string___ctor__;
  this->fields.GrandBoardAddOffsetX = -25;
  DataEntityBase_object____ctor((DataEntityBase_PKType__o *)this, v12);
}


System_String_o *ServantScriptEntity__CreatePK(int32_t id, int32_t form, const MethodInfo *method)
{
  if ( (byte_593910C & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_593910C = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           id,
           form,
           (const MethodInfo_3820F68 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *ServantScriptEntity__CreatePrimaryKey(ServantScriptEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  int32_t form; // w19
  int32_t id; // w20

  if ( (byte_593910B & 1) == 0 )
  {
    sub_21FFC50(&ServantScriptEntity_TypeInfo);
    byte_593910B = 1;
  }
  id = this->fields.id;
  form = this->fields.form;
  if ( !*(&ServantScriptEntity_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ServantScriptEntity_TypeInfo, method);
  return ServantScriptEntity__CreatePK(id, form, v2);
}


System_Int32_array *ServantScriptEntity__GetBattleBondOffset(ServantScriptEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  ServantScriptEntity_c *v4; // x0

  if ( (byte_5939113 & 1) == 0 )
  {
    sub_21FFC50(&ServantScriptEntity_TypeInfo);
    byte_5939113 = 1;
  }
  v4 = ServantScriptEntity_TypeInfo;
  if ( !*(&ServantScriptEntity_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ServantScriptEntity_TypeInfo, method);
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
  struct System_Collections_Generic_Dictionary_string__object__o *v9; // x0
  Il2CppObject *Item; // x0
  Il2CppObject *v11; // x20
  __int64 naturalAligment; // x10
  System_Collections_Generic_List_object__c *v13; // x9
  System_Collections_Generic_List_object__o *v14; // x21
  unsigned __int64 v15; // x22
  char v16; // w8
  char v17; // w26
  __int64 v18; // x1
  Il2CppObject *v19; // x23
  char *v20; // x9

  if ( (byte_5939114 & 1) == 0 )
  {
    sub_21FFC50(&System_Convert_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_21FFC50(&int___TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_object__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_object__get_Item__);
    sub_21FFC50(&System_Collections_Generic_List_object__TypeInfo);
    byte_5939114 = 1;
  }
  if ( !defaultValue )
    defaultValue = (System_Int32_array *)sub_21FFD10(int___TypeInfo, 2);
  extendData = this->fields.extendData;
  if ( extendData
    && System_Collections_Generic_Dictionary_object__object___ContainsKey(
         (System_Collections_Generic_Dictionary_object__object__o *)extendData,
         (Il2CppObject *)key,
         (const MethodInfo_3FCA65C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    v9 = this->fields.extendData;
    if ( !v9 )
      goto LABEL_24;
    Item = System_Collections_Generic_Dictionary_object__object___get_Item(
             (System_Collections_Generic_Dictionary_object__object__o *)v9,
             (Il2CppObject *)key,
             (const MethodInfo_3FCA3E8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( Item )
    {
      v11 = Item;
      naturalAligment = System_Collections_Generic_List_object__TypeInfo->_2.naturalAligment;
      if ( Item->klass->_2.naturalAligment >= (unsigned int)naturalAligment )
      {
        v13 = (System_Collections_Generic_List_object__c *)Item->klass->_2.typeHierarchy[naturalAligment - 1];
        v14 = v13 == System_Collections_Generic_List_object__TypeInfo
            ? (System_Collections_Generic_List_object__o *)Item
            : 0LL;
        if ( v13 == System_Collections_Generic_List_object__TypeInfo )
        {
          v15 = 0;
          v16 = 1;
          while ( 1 )
          {
            v17 = v16;
            if ( (__int64)v15 >= SLODWORD(v11[1].monitor) )
            {
              v9 = 0;
            }
            else
            {
              v19 = System_Collections_Generic_List_object___get_Item(
                      v14,
                      v15,
                      (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_object__get_Item__);
              if ( !*(&System_Convert_TypeInfo->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo, v18);
              v9 = (struct System_Collections_Generic_Dictionary_string__object__o *)System_Convert__ToInt32(v19, 0);
            }
            if ( !defaultValue )
              break;
            if ( v15 >= LODWORD(defaultValue->max_length) )
              sub_21FFED4(v9);
            v20 = (char *)defaultValue + 4 * v15;
            v16 = 0;
            v15 = 1;
            *((_DWORD *)v20 + 8) = (_DWORD)v9;
            if ( (v17 & 1) == 0 )
              return defaultValue;
          }
LABEL_24:
          sub_21FFECC(v9, v8);
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

  if ( (byte_5939115 & 1) == 0 )
  {
    sub_21FFC50(&ServantScriptEntity_TypeInfo);
    byte_5939115 = 1;
  }
  v6 = ServantScriptEntity_TypeInfo;
  if ( !*(&ServantScriptEntity_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ServantScriptEntity_TypeInfo, defaultValue);
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

  if ( (byte_5939117 & 1) == 0 )
  {
    sub_21FFC50(&ServantScriptEntity_TypeInfo);
    byte_5939117 = 1;
  }
  v6 = ServantScriptEntity_TypeInfo;
  if ( !*(&ServantScriptEntity_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ServantScriptEntity_TypeInfo, defaultValue);
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

  if ( (byte_5939116 & 1) == 0 )
  {
    sub_21FFC50(&ServantScriptEntity_TypeInfo);
    byte_5939116 = 1;
  }
  v6 = ServantScriptEntity_TypeInfo;
  if ( !*(&ServantScriptEntity_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ServantScriptEntity_TypeInfo, defaultValue);
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
  __int64 v10; // x1
  Il2CppObject *Item; // x19

  if ( (byte_5939118 & 1) == 0 )
  {
    sub_21FFC50(&System_Convert_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_21FFC50(&ServantScriptEntity_TypeInfo);
    byte_5939118 = 1;
  }
  extendData = this->fields.extendData;
  if ( !extendData )
    return defaultValue;
  v6 = ServantScriptEntity_TypeInfo;
  if ( !*(&ServantScriptEntity_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ServantScriptEntity_TypeInfo, method);
    v6 = ServantScriptEntity_TypeInfo;
  }
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)extendData,
          (Il2CppObject *)v6->static_fields->PHOT_SVT_SCALE_KEY,
          (const MethodInfo_3FCA65C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return defaultValue;
  v8 = ServantScriptEntity_TypeInfo;
  v9 = this->fields.extendData;
  if ( !*(&ServantScriptEntity_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ServantScriptEntity_TypeInfo, v7);
  if ( !v9 )
    sub_21FFECC(v8, v7);
  Item = System_Collections_Generic_Dictionary_object__object___get_Item(
           (System_Collections_Generic_Dictionary_object__object__o *)v9,
           (Il2CppObject *)ServantScriptEntity_TypeInfo->static_fields->PHOT_SVT_SCALE_KEY,
           (const MethodInfo_3FCA3E8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !*(&System_Convert_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo, v10);
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
  __int64 v10; // x1
  Il2CppObject *Item; // x19

  if ( (byte_593911A & 1) == 0 )
  {
    sub_21FFC50(&System_Convert_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_21FFC50(&ServantScriptEntity_TypeInfo);
    byte_593911A = 1;
  }
  extendData = this->fields.extendData;
  if ( !extendData )
    return defaultValue;
  v6 = ServantScriptEntity_TypeInfo;
  if ( !*(&ServantScriptEntity_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ServantScriptEntity_TypeInfo, method);
    v6 = ServantScriptEntity_TypeInfo;
  }
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)extendData,
          (Il2CppObject *)v6->static_fields->PHOT_SVT_SCALE_LEFT_KEY,
          (const MethodInfo_3FCA65C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return defaultValue;
  v8 = ServantScriptEntity_TypeInfo;
  v9 = this->fields.extendData;
  if ( !*(&ServantScriptEntity_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ServantScriptEntity_TypeInfo, v7);
  if ( !v9 )
    sub_21FFECC(v8, v7);
  Item = System_Collections_Generic_Dictionary_object__object___get_Item(
           (System_Collections_Generic_Dictionary_object__object__o *)v9,
           (Il2CppObject *)ServantScriptEntity_TypeInfo->static_fields->PHOT_SVT_SCALE_LEFT_KEY,
           (const MethodInfo_3FCA3E8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !*(&System_Convert_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo, v10);
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
  __int64 v10; // x1
  Il2CppObject *Item; // x19

  if ( (byte_5939119 & 1) == 0 )
  {
    sub_21FFC50(&System_Convert_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_21FFC50(&ServantScriptEntity_TypeInfo);
    byte_5939119 = 1;
  }
  extendData = this->fields.extendData;
  if ( !extendData )
    return defaultValue;
  v6 = ServantScriptEntity_TypeInfo;
  if ( !*(&ServantScriptEntity_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ServantScriptEntity_TypeInfo, method);
    v6 = ServantScriptEntity_TypeInfo;
  }
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)extendData,
          (Il2CppObject *)v6->static_fields->PHOT_SVT_SCALE_RIGHT_KEY,
          (const MethodInfo_3FCA65C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return defaultValue;
  v8 = ServantScriptEntity_TypeInfo;
  v9 = this->fields.extendData;
  if ( !*(&ServantScriptEntity_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ServantScriptEntity_TypeInfo, v7);
  if ( !v9 )
    sub_21FFECC(v8, v7);
  Item = System_Collections_Generic_Dictionary_object__object___get_Item(
           (System_Collections_Generic_Dictionary_object__object__o *)v9,
           (Il2CppObject *)ServantScriptEntity_TypeInfo->static_fields->PHOT_SVT_SCALE_RIGHT_KEY,
           (const MethodInfo_3FCA3E8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !*(&System_Convert_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo, v10);
  return System_Convert__ToSingle(Item, 0);
}


System_Int32_array *ServantScriptEntity__GetTerminalOffset(ServantScriptEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  ServantScriptEntity_c *v4; // x0

  if ( (byte_5939112 & 1) == 0 )
  {
    sub_21FFC50(&ServantScriptEntity_TypeInfo);
    byte_5939112 = 1;
  }
  v4 = ServantScriptEntity_TypeInfo;
  if ( !*(&ServantScriptEntity_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ServantScriptEntity_TypeInfo, method);
    v4 = ServantScriptEntity_TypeInfo;
  }
  return ServantScriptEntity__GetExtendOffset(this, v4->static_fields->TERMINAL_OFFSET_KEY, 0, v2);
}


// local variable allocation has failed, the output may be wrong!
bool ServantScriptEntity__IsCondEnable(ServantScriptEntity_o *this, int32_t friendship, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *extendData; // x21
  ServantScriptEntity_c *v6; // x0
  System_Collections_Generic_Dictionary_string__object__c *v7; // x1
  System_String_o *v8; // x0
  struct System_Collections_Generic_Dictionary_string__object__o *v9; // x21
  System_Collections_Generic_List_object__o *Item; // x0
  __int64 v11; // x2
  __int64 naturalAligment; // x9
  Il2CppObject *v13; // x0
  __int64 v14; // x2
  __int64 v15; // x9
  __int64 v16; // x1
  ServantScriptEntity_c *v17; // x0
  __int64 v18; // x1
  ServantScriptEntity_c *v19; // x0
  Il2CppObject *v20; // x0
  int32_t v21; // w22
  Il2CppObject *v22; // x0
  int64_t v23; // x21
  System_String_o *v24; // x0
  __int64 v25; // x1
  int32_t v26; // w19
  ServantScriptEntity_o *v27; // x0
  System_String_o *v28; // x1
  System_Int32_array *v29; // x2
  const MethodInfo *v30; // x3

  if ( (byte_5939111 & 1) == 0 )
  {
    sub_21FFC50(&CondType_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_21FFC50(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_object__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_object__get_Item__);
    sub_21FFC50(&System_Collections_Generic_List_object__TypeInfo);
    sub_21FFC50(&ServantScriptEntity_TypeInfo);
    byte_5939111 = 1;
  }
  extendData = this->fields.extendData;
  if ( !extendData )
    goto LABEL_30;
  v6 = ServantScriptEntity_TypeInfo;
  if ( !*(&ServantScriptEntity_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ServantScriptEntity_TypeInfo, *(_QWORD *)&friendship);
    v6 = ServantScriptEntity_TypeInfo;
  }
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)extendData,
          (Il2CppObject *)v6->static_fields->COND_KEY,
          (const MethodInfo_3FCA65C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    goto LABEL_30;
  v8 = (System_String_o *)ServantScriptEntity_TypeInfo;
  v9 = this->fields.extendData;
  if ( !*(&ServantScriptEntity_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ServantScriptEntity_TypeInfo, v7);
  if ( !v9 )
    goto LABEL_37;
  Item = (System_Collections_Generic_List_object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                        (System_Collections_Generic_Dictionary_object__object__o *)v9,
                                                        (Il2CppObject *)ServantScriptEntity_TypeInfo->static_fields->COND_KEY,
                                                        (const MethodInfo_3FCA3E8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !Item )
    return (char)Item;
  naturalAligment = System_Collections_Generic_List_object__TypeInfo->_2.naturalAligment;
  if ( Item->klass->_2.naturalAligment < (unsigned int)naturalAligment
    || (System_Collections_Generic_List_object__c *)Item->klass->_2.typeHierarchy[naturalAligment - 1] != System_Collections_Generic_List_object__TypeInfo )
  {
    sub_220024C(Item, System_Collections_Generic_List_object__TypeInfo, v11);
    goto LABEL_39;
  }
  if ( Item->fields._size < 1 )
    goto LABEL_30;
  v13 = System_Collections_Generic_List_object___get_Item(
          Item,
          0,
          (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_object__get_Item__);
  v9 = (struct System_Collections_Generic_Dictionary_string__object__o *)v13;
  if ( v13 )
  {
    v7 = System_Collections_Generic_Dictionary_string__object__TypeInfo;
    v15 = System_Collections_Generic_Dictionary_string__object__TypeInfo->_2.naturalAligment;
    if ( v13->klass->_2.naturalAligment < (unsigned int)v15
      || (System_Collections_Generic_Dictionary_string__object__c *)v13->klass->_2.typeHierarchy[v15 - 1] != System_Collections_Generic_Dictionary_string__object__TypeInfo )
    {
LABEL_39:
      sub_220024C(v9, v7, v14);
      LOBYTE(Item) = (unsigned __int8)ServantScriptEntity__GetExtendOffset(v27, v28, v29, v30);
      return (char)Item;
    }
  }
  v8 = (System_String_o *)ServantScriptEntity_TypeInfo;
  if ( !*(&ServantScriptEntity_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ServantScriptEntity_TypeInfo, v7);
  if ( !v9 )
    goto LABEL_37;
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)v9,
          (Il2CppObject *)ServantScriptEntity_TypeInfo->static_fields->COND_TYPE_KEY,
          (const MethodInfo_3FCA65C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    goto LABEL_30;
  v17 = ServantScriptEntity_TypeInfo;
  if ( !*(&ServantScriptEntity_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ServantScriptEntity_TypeInfo, v16);
    v17 = ServantScriptEntity_TypeInfo;
  }
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)v9,
          (Il2CppObject *)v17->static_fields->COND_VALUE_KEY,
          (const MethodInfo_3FCA65C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    goto LABEL_30;
  v19 = ServantScriptEntity_TypeInfo;
  if ( !*(&ServantScriptEntity_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ServantScriptEntity_TypeInfo, v18);
    v19 = ServantScriptEntity_TypeInfo;
  }
  v20 = System_Collections_Generic_Dictionary_object__object___get_Item(
          (System_Collections_Generic_Dictionary_object__object__o *)v9,
          (Il2CppObject *)v19->static_fields->COND_TYPE_KEY,
          (const MethodInfo_3FCA3E8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  v21 = *(_DWORD *)sub_1FEB248(v20, qword_594C090);
  v22 = System_Collections_Generic_Dictionary_object__object___get_Item(
          (System_Collections_Generic_Dictionary_object__object__o *)v9,
          (Il2CppObject *)ServantScriptEntity_TypeInfo->static_fields->COND_VALUE_KEY,
          (const MethodInfo_3FCA3E8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  v23 = *(_QWORD *)sub_1FEB248(v22, qword_594C090);
  if ( (friendship & 0x80000000) == 0 )
  {
    if ( v21 == 99 )
    {
      LOBYTE(Item) = v23 >= (unsigned int)friendship;
      return (char)Item;
    }
    if ( v21 == 98 )
    {
      LOBYTE(Item) = v23 <= (unsigned int)friendship;
      return (char)Item;
    }
LABEL_30:
    LOBYTE(Item) = 0;
    return (char)Item;
  }
  v8 = System_Int32__ToString((int)this + 16, 0);
  if ( !v8 )
LABEL_37:
    sub_21FFECC(v8, v7);
  v24 = System_String__Substring_75489544(v8, 0, v8->fields._stringLength - 1, 0);
  v26 = System_Int32__Parse(v24, 0);
  if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v25);
  LOBYTE(Item) = CondType__IsOpen(v21, v26, v23, 0, 0, 0);
  return (char)Item;
}


UnityEngine_Vector2Int_o ServantScriptEntity__getFaceSize(ServantScriptEntity_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *extendData; // x21
  unsigned __int64 s_Zero; // x19
  ServantScriptEntity_c *v5; // x0
  __int64 v6; // x1
  ServantScriptEntity_c *v7; // x0
  struct System_Collections_Generic_Dictionary_string__object__o *v8; // x20
  System_Collections_Generic_List_object__o *Item; // x0
  __int64 v10; // x1
  System_Collections_Generic_List_object__o *v11; // x20
  __int64 naturalAligment; // x10
  Il2CppObject *v13; // x0
  unsigned __int64 v14; // x0
  int size; // w8
  __int64 v17; // x1
  Il2CppObject *v18; // x19
  __int64 v19; // x1
  Il2CppObject *v20; // x0

  if ( (byte_593910E & 1) == 0 )
  {
    sub_21FFC50(&System_Convert_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_21FFC50(&Method_System_Collections_Generic_List_object__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_object__get_Item__);
    sub_21FFC50(&System_Collections_Generic_List_object__TypeInfo);
    sub_21FFC50(&ServantScriptEntity_TypeInfo);
    byte_593910E = 1;
  }
  if ( !byte_59391BC )
  {
    sub_21FFC50(&UnityEngine_Vector2Int_TypeInfo);
    byte_59391BC = 1;
  }
  extendData = this->fields.extendData;
  s_Zero = (unsigned __int64)UnityEngine_Vector2Int_TypeInfo->static_fields->s_Zero;
  if ( extendData )
  {
    v5 = ServantScriptEntity_TypeInfo;
    if ( !*(&ServantScriptEntity_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(ServantScriptEntity_TypeInfo, method);
      v5 = ServantScriptEntity_TypeInfo;
    }
    if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
           (System_Collections_Generic_Dictionary_object__object__o *)extendData,
           (Il2CppObject *)v5->static_fields->FACE_SIZE_KEY,
           (const MethodInfo_3FCA65C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    {
      v7 = ServantScriptEntity_TypeInfo;
      v8 = this->fields.extendData;
      if ( !*(&ServantScriptEntity_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(ServantScriptEntity_TypeInfo, v6);
      if ( !v8 )
        sub_21FFECC(v7, v6);
      Item = (System_Collections_Generic_List_object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                            (System_Collections_Generic_Dictionary_object__object__o *)v8,
                                                            (Il2CppObject *)ServantScriptEntity_TypeInfo->static_fields->FACE_SIZE_KEY,
                                                            (const MethodInfo_3FCA3E8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
      v11 = Item;
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
                                         (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_object__get_Item__);
            if ( !*(&System_Convert_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo, v19);
            LODWORD(s_Zero) = System_Convert__ToInt32((Il2CppObject *)s_Zero, 0);
            v20 = System_Collections_Generic_List_object___get_Item(
                    v11,
                    1,
                    (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_object__get_Item__);
            v14 = System_Convert__ToInt32(v20, 0);
          }
          else
          {
            v14 = HIDWORD(s_Zero);
          }
          return (UnityEngine_Vector2Int_o)((unsigned int)s_Zero | (v14 << 32));
        }
        v18 = System_Collections_Generic_List_object___get_Item(
                Item,
                0,
                (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_object__get_Item__);
        if ( !*(&System_Convert_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo, v17);
        v13 = v18;
      }
      else
      {
        if ( !*(&System_Convert_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo, v10);
        v13 = (Il2CppObject *)v11;
      }
      v14 = System_Convert__ToInt32(v13, 0);
      LODWORD(s_Zero) = v14;
      return (UnityEngine_Vector2Int_o)((unsigned int)s_Zero | (v14 << 32));
    }
  }
  return (UnityEngine_Vector2Int_o)s_Zero;
}


int32_t ServantScriptEntity__getMyRoomForm(ServantScriptEntity_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *extendData; // x20
  ServantScriptEntity_c *v4; // x0
  __int64 v5; // x1
  void *Item; // x0
  struct System_Collections_Generic_Dictionary_string__object__o *v7; // x19
  __int64 v8; // x2
  ServantScriptEntity_o *v10; // x0
  const MethodInfo *v11; // x1

  if ( (byte_593910F & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_21FFC50(&ServantScriptEntity_TypeInfo);
    byte_593910F = 1;
  }
  extendData = this->fields.extendData;
  if ( !extendData )
    return 0;
  v4 = ServantScriptEntity_TypeInfo;
  if ( !*(&ServantScriptEntity_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ServantScriptEntity_TypeInfo, method);
    v4 = ServantScriptEntity_TypeInfo;
  }
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)extendData,
          (Il2CppObject *)v4->static_fields->MYROOM_FORM_KEY,
          (const MethodInfo_3FCA65C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return 0;
  Item = ServantScriptEntity_TypeInfo;
  v7 = this->fields.extendData;
  if ( !*(&ServantScriptEntity_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ServantScriptEntity_TypeInfo, v5);
  if ( !v7
    || (Item = System_Collections_Generic_Dictionary_object__object___get_Item(
                 (System_Collections_Generic_Dictionary_object__object__o *)v7,
                 (Il2CppObject *)ServantScriptEntity_TypeInfo->static_fields->MYROOM_FORM_KEY,
                 (const MethodInfo_3FCA3E8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0 )
  {
    sub_21FFECC(Item, v5);
  }
  if ( *(_QWORD *)(*(_QWORD *)Item + 64LL) == *(_QWORD *)(qword_594C090 + 64) )
    return *(_DWORD *)j_il2cpp_object_unbox_0(Item, qword_594C090, v8);
  sub_220024C(Item, qword_594C090, v8);
  return ServantScriptEntity__isMultipleForm(v10, v11);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Vector2_o ServantScriptEntity__getOffset(
        ServantScriptEntity_o *this,
        int32_t offsetKind,
        const MethodInfo *method)
{
  System_Int32_array *Master_object; // x0
  __int64 v6; // x1
  int32_t klass; // w8
  int32_t offsetYMyroom; // w9
  __int64 v9; // x10
  __int64 v10; // x8
  struct System_Int32_array *grandSelectOffset; // x8
  int32_t v12; // w12
  float v13; // s0
  float v14; // s1
  Il2CppObject *v15; // [xsp+8h] [xbp-38h] BYREF
  Il2CppObject *entity; // [xsp+10h] [xbp-30h] BYREF
  Il2CppObject *v17; // [xsp+18h] [xbp-28h] BYREF
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  if ( (byte_593910D & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_ServantScriptAddMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_DataMasterBase_ServantScriptAddMaster__ServantScriptAddEntity__long__TryGetEntity__);
    byte_593910D = 1;
  }
  entity = 0;
  v17 = 0;
  v15 = 0;
  if ( offsetKind > 4 )
  {
    if ( offsetKind > 6 )
    {
      if ( offsetKind != 7 )
      {
        if ( offsetKind != 8 )
        {
          if ( offsetKind == 9 )
          {
            if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&offsetKind);
            Master_object = (System_Int32_array *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_ServantScriptAddMaster___);
            if ( Master_object )
            {
              Master_object = (System_Int32_array *)DataMasterBase_object__object__long___TryGetEntity(
                                                      (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                                      &entity,
                                                      this->fields.id,
                                                      (const MethodInfo_3EDFA34 *)Method_DataMasterBase_ServantScriptAddMaster__ServantScriptAddEntity__long__TryGetEntity__);
              if ( ((unsigned __int8)Master_object & 1) == 0 )
              {
                offsetYMyroom = this->fields.offsetYMyroom;
                klass = this->fields.GrandBoardAddOffsetX + this->fields.offsetXMyroom;
                goto LABEL_43;
              }
              if ( entity )
              {
                klass = (int32_t)entity[3].klass;
                offsetYMyroom = HIDWORD(entity[3].klass);
                goto LABEL_43;
              }
            }
LABEL_44:
            sub_21FFECC(Master_object, v6);
          }
LABEL_38:
          klass = this->fields.offsetX;
          offsetYMyroom = this->fields.offsetY;
          goto LABEL_43;
        }
        if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&offsetKind);
        Master_object = (System_Int32_array *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_ServantScriptAddMaster___);
        if ( !Master_object )
          goto LABEL_44;
        Master_object = (System_Int32_array *)DataMasterBase_object__object__long___TryGetEntity(
                                                (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                                &v15,
                                                this->fields.id,
                                                (const MethodInfo_3EDFA34 *)Method_DataMasterBase_ServantScriptAddMaster__ServantScriptAddEntity__long__TryGetEntity__);
        if ( ((unsigned __int8)Master_object & 1) != 0 )
        {
          if ( v15 )
          {
            klass = (int32_t)v15[2].monitor;
            offsetYMyroom = HIDWORD(v15[2].monitor);
            goto LABEL_43;
          }
          goto LABEL_44;
        }
        grandSelectOffset = this->fields.grandSelectOffset;
        if ( !grandSelectOffset )
          goto LABEL_44;
        if ( LODWORD(grandSelectOffset->max_length) >= 2 )
        {
          v12 = grandSelectOffset->m_Items[1];
          klass = grandSelectOffset->m_Items[0] + this->fields.offsetX;
          offsetYMyroom = v12 + this->fields.offsetY;
          goto LABEL_43;
        }
LABEL_45:
        sub_21FFED4(Master_object);
      }
      Master_object = ServantScriptEntity__GetBattleBondOffset(this, *(const MethodInfo **)&offsetKind);
      if ( !Master_object )
        goto LABEL_44;
LABEL_30:
      if ( LODWORD(Master_object->max_length) >= 2 )
      {
        klass = Master_object->m_Items[0] + this->fields.offsetXMyroom;
        offsetYMyroom = Master_object->m_Items[1] + this->fields.offsetYMyroom;
        goto LABEL_43;
      }
      goto LABEL_45;
    }
    if ( offsetKind != 5 )
    {
      Master_object = ServantScriptEntity__GetTerminalOffset(this, *(const MethodInfo **)&offsetKind);
      if ( !Master_object )
        goto LABEL_44;
      goto LABEL_30;
    }
LABEL_28:
    klass = this->fields.offsetXMyroom;
    offsetYMyroom = this->fields.offsetYMyroom;
    goto LABEL_43;
  }
  if ( (unsigned int)(offsetKind - 1) < 2 )
    goto LABEL_28;
  if ( (unsigned int)(offsetKind - 3) >= 2 )
    goto LABEL_38;
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&offsetKind);
  Master_object = (System_Int32_array *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_ServantScriptAddMaster___);
  if ( !Master_object )
    goto LABEL_44;
  Master_object = (System_Int32_array *)DataMasterBase_object__object__long___TryGetEntity(
                                          (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                          &v17,
                                          this->fields.id,
                                          (const MethodInfo_3EDFA34 *)Method_DataMasterBase_ServantScriptAddMaster__ServantScriptAddEntity__long__TryGetEntity__);
  if ( ((unsigned __int8)Master_object & 1) == 0 )
    goto LABEL_28;
  if ( !v17 )
    goto LABEL_44;
  v9 = 36;
  if ( offsetKind == 4 )
  {
    v10 = 32;
  }
  else
  {
    v9 = 28;
    v10 = 24;
  }
  klass = *(_DWORD *)((char *)&v17->klass + v10);
  offsetYMyroom = *(_DWORD *)((char *)&v17->klass + v9);
LABEL_43:
  v13 = (float)klass;
  v14 = (float)offsetYMyroom;
  result.fields.y = v14;
  result.fields.x = v13;
  return result;
}


bool ServantScriptEntity__isMultipleForm(ServantScriptEntity_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *extendData; // x19
  ServantScriptEntity_c *v4; // x0

  if ( (byte_5939110 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_21FFC50(&ServantScriptEntity_TypeInfo);
    byte_5939110 = 1;
  }
  extendData = this->fields.extendData;
  if ( !extendData )
    return 0;
  v4 = ServantScriptEntity_TypeInfo;
  if ( !*(&ServantScriptEntity_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ServantScriptEntity_TypeInfo, method);
    v4 = ServantScriptEntity_TypeInfo;
  }
  return System_Collections_Generic_Dictionary_object__object___ContainsKey(
           (System_Collections_Generic_Dictionary_object__object__o *)extendData,
           (Il2CppObject *)v4->static_fields->COMBINE_RESULT_FORM_KEY,
           (const MethodInfo_3FCA65C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
}