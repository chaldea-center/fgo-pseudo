void __fastcall ServantScriptEntity___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x1
  __int64 v35; // x2
  int64_t v36; // x1
  struct ServantScriptEntity_StaticFields *static_fields; // x0
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  int64_t v44; // x1
  struct ServantScriptEntity_StaticFields *v45; // x0
  int64_t v46; // x2
  int32_t v47; // w3
  System_String_o *v48; // x4
  BattleSetupInfo_o *v49; // x5
  FollowerInfo_o *v50; // x6
  PartyListViewItem_o *v51; // x7
  int64_t v52; // x1
  struct ServantScriptEntity_StaticFields *v53; // x0
  int64_t v54; // x2
  int32_t v55; // w3
  System_String_o *v56; // x4
  BattleSetupInfo_o *v57; // x5
  FollowerInfo_o *v58; // x6
  PartyListViewItem_o *v59; // x7
  int64_t v60; // x1
  struct ServantScriptEntity_StaticFields *v61; // x0
  int64_t v62; // x2
  int32_t v63; // w3
  System_String_o *v64; // x4
  BattleSetupInfo_o *v65; // x5
  FollowerInfo_o *v66; // x6
  PartyListViewItem_o *v67; // x7
  int64_t v68; // x1
  struct ServantScriptEntity_StaticFields *v69; // x0
  int64_t v70; // x2
  int32_t v71; // w3
  System_String_o *v72; // x4
  BattleSetupInfo_o *v73; // x5
  FollowerInfo_o *v74; // x6
  PartyListViewItem_o *v75; // x7
  int64_t v76; // x1
  struct ServantScriptEntity_StaticFields *v77; // x0
  int64_t v78; // x2
  int32_t v79; // w3
  System_String_o *v80; // x4
  BattleSetupInfo_o *v81; // x5
  FollowerInfo_o *v82; // x6
  PartyListViewItem_o *v83; // x7
  int64_t v84; // x1
  struct ServantScriptEntity_StaticFields *v85; // x0
  int64_t v86; // x2
  int32_t v87; // w3
  System_String_o *v88; // x4
  BattleSetupInfo_o *v89; // x5
  FollowerInfo_o *v90; // x6
  PartyListViewItem_o *v91; // x7
  int64_t v92; // x1
  struct ServantScriptEntity_StaticFields *v93; // x0
  int64_t v94; // x2
  int32_t v95; // w3
  System_String_o *v96; // x4
  BattleSetupInfo_o *v97; // x5
  FollowerInfo_o *v98; // x6
  PartyListViewItem_o *v99; // x7
  struct ServantScriptEntity_StaticFields *v100; // x0
  int64_t v101; // x1
  int64_t v102; // x2
  int32_t v103; // w3
  System_String_o *v104; // x4
  BattleSetupInfo_o *v105; // x5
  FollowerInfo_o *v106; // x6
  PartyListViewItem_o *v107; // x7
  struct ServantScriptEntity_StaticFields *v108; // x0
  int64_t v109; // x1
  int64_t v110; // x2
  int32_t v111; // w3
  System_String_o *v112; // x4
  BattleSetupInfo_o *v113; // x5
  FollowerInfo_o *v114; // x6
  PartyListViewItem_o *v115; // x7
  struct ServantScriptEntity_StaticFields *v116; // x0
  int64_t v117; // x1
  int64_t v118; // x2
  int32_t v119; // w3
  System_String_o *v120; // x4
  BattleSetupInfo_o *v121; // x5
  FollowerInfo_o *v122; // x6
  PartyListViewItem_o *v123; // x7
  struct ServantScriptEntity_StaticFields *v124; // x0
  int64_t v125; // x1
  int64_t v126; // x2
  int32_t v127; // w3
  System_String_o *v128; // x4
  BattleSetupInfo_o *v129; // x5
  FollowerInfo_o *v130; // x6
  PartyListViewItem_o *v131; // x7
  struct ServantScriptEntity_StaticFields *v132; // x0
  int64_t v133; // x1
  int64_t v134; // x2
  int32_t v135; // w3
  System_String_o *v136; // x4
  BattleSetupInfo_o *v137; // x5
  FollowerInfo_o *v138; // x6
  PartyListViewItem_o *v139; // x7

  if ( (byte_4B16AE9 & 1) == 0 )
  {
    sub_1BCA7E0(&ServantScriptEntity_TypeInfo, v1, v2);
    sub_1BCA7E0(&StringLiteral_22762/*"photoSvtScale"*/, v8, v9);
    sub_1BCA7E0(&StringLiteral_22760/*"photoSvtPositionLeft"*/, v10, v11);
    sub_1BCA7E0(&StringLiteral_22761/*"photoSvtPositionRight"*/, v12, v13);
    sub_1BCA7E0(&StringLiteral_3253/*"BattleBondOffset"*/, v14, v15);
    sub_1BCA7E0(&StringLiteral_24755/*"value"*/, v16, v17);
    sub_1BCA7E0(&StringLiteral_22759/*"photoSvtPosition"*/, v18, v19);
    sub_1BCA7E0(&StringLiteral_22215/*"myroomForm"*/, v20, v21);
    sub_1BCA7E0(&StringLiteral_22763/*"photoSvtScaleLeft"*/, v22, v23);
    sub_1BCA7E0(&StringLiteral_18387/*"conds"*/, v24, v25);
    sub_1BCA7E0(&StringLiteral_22764/*"photoSvtScaleRight"*/, v26, v27);
    sub_1BCA7E0(&StringLiteral_18303/*"combineResultMultipleForm"*/, v28, v29);
    sub_1BCA7E0(&StringLiteral_19557/*"faceSize"*/, v30, v31);
    sub_1BCA7E0(&StringLiteral_13773/*"TerminalOffset"*/, v32, v33);
    sub_1BCA7E0(&StringLiteral_18386/*"condType"*/, v34, v35);
    byte_4B16AE9 = 1;
  }
  ServantScriptEntity_TypeInfo->static_fields->FACE_SIZE_KEY = (struct System_String_o *)StringLiteral_19557/*"faceSize"*/;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)ServantScriptEntity_TypeInfo->static_fields,
    StringLiteral_19557/*"faceSize"*/,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  v36 = StringLiteral_22215/*"myroomForm"*/;
  static_fields = ServantScriptEntity_TypeInfo->static_fields;
  static_fields->MYROOM_FORM_KEY = (struct System_String_o *)StringLiteral_22215/*"myroomForm"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->MYROOM_FORM_KEY, v36, v38, v39, v40, v41, v42, v43);
  v44 = StringLiteral_18303/*"combineResultMultipleForm"*/;
  v45 = ServantScriptEntity_TypeInfo->static_fields;
  v45->COMBINE_RESULT_FORM_KEY = (struct System_String_o *)StringLiteral_18303/*"combineResultMultipleForm"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&v45->COMBINE_RESULT_FORM_KEY, v44, v46, v47, v48, v49, v50, v51);
  v52 = StringLiteral_18387/*"conds"*/;
  v53 = ServantScriptEntity_TypeInfo->static_fields;
  v53->COND_KEY = (struct System_String_o *)StringLiteral_18387/*"conds"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&v53->COND_KEY, v52, v54, v55, v56, v57, v58, v59);
  v60 = StringLiteral_18386/*"condType"*/;
  v61 = ServantScriptEntity_TypeInfo->static_fields;
  v61->COND_TYPE_KEY = (struct System_String_o *)StringLiteral_18386/*"condType"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&v61->COND_TYPE_KEY, v60, v62, v63, v64, v65, v66, v67);
  v68 = StringLiteral_24755/*"value"*/;
  v69 = ServantScriptEntity_TypeInfo->static_fields;
  v69->COND_VALUE_KEY = (struct System_String_o *)StringLiteral_24755/*"value"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&v69->COND_VALUE_KEY, v68, v70, v71, v72, v73, v74, v75);
  v76 = StringLiteral_13773/*"TerminalOffset"*/;
  v77 = ServantScriptEntity_TypeInfo->static_fields;
  v77->TERMINAL_OFFSET_KEY = (struct System_String_o *)StringLiteral_13773/*"TerminalOffset"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&v77->TERMINAL_OFFSET_KEY, v76, v78, v79, v80, v81, v82, v83);
  v84 = StringLiteral_3253/*"BattleBondOffset"*/;
  v85 = ServantScriptEntity_TypeInfo->static_fields;
  v85->BATTLE_BOND_OFFSET_KEY = (struct System_String_o *)StringLiteral_3253/*"BattleBondOffset"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&v85->BATTLE_BOND_OFFSET_KEY, v84, v86, v87, v88, v89, v90, v91);
  v92 = StringLiteral_22759/*"photoSvtPosition"*/;
  v93 = ServantScriptEntity_TypeInfo->static_fields;
  v93->PHOT_SVT_POSITION_KEY = (struct System_String_o *)StringLiteral_22759/*"photoSvtPosition"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&v93->PHOT_SVT_POSITION_KEY, v92, v94, v95, v96, v97, v98, v99);
  v100 = ServantScriptEntity_TypeInfo->static_fields;
  v101 = StringLiteral_22761/*"photoSvtPositionRight"*/;
  v100->PHOT_SVT_POSITION_RIGHT_KEY = (struct System_String_o *)StringLiteral_22761/*"photoSvtPositionRight"*/;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v100->PHOT_SVT_POSITION_RIGHT_KEY,
    v101,
    v102,
    v103,
    v104,
    v105,
    v106,
    v107);
  v108 = ServantScriptEntity_TypeInfo->static_fields;
  v109 = StringLiteral_22760/*"photoSvtPositionLeft"*/;
  v108->PHOT_SVT_POSITION_LEFT_KEY = (struct System_String_o *)StringLiteral_22760/*"photoSvtPositionLeft"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&v108->PHOT_SVT_POSITION_LEFT_KEY, v109, v110, v111, v112, v113, v114, v115);
  v116 = ServantScriptEntity_TypeInfo->static_fields;
  v117 = StringLiteral_22762/*"photoSvtScale"*/;
  v116->PHOT_SVT_SCALE_KEY = (struct System_String_o *)StringLiteral_22762/*"photoSvtScale"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&v116->PHOT_SVT_SCALE_KEY, v117, v118, v119, v120, v121, v122, v123);
  v124 = ServantScriptEntity_TypeInfo->static_fields;
  v125 = StringLiteral_22764/*"photoSvtScaleRight"*/;
  v124->PHOT_SVT_SCALE_RIGHT_KEY = (struct System_String_o *)StringLiteral_22764/*"photoSvtScaleRight"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&v124->PHOT_SVT_SCALE_RIGHT_KEY, v125, v126, v127, v128, v129, v130, v131);
  v132 = ServantScriptEntity_TypeInfo->static_fields;
  v133 = StringLiteral_22763/*"photoSvtScaleLeft"*/;
  v132->PHOT_SVT_SCALE_LEFT_KEY = (struct System_String_o *)StringLiteral_22763/*"photoSvtScaleLeft"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&v132->PHOT_SVT_SCALE_LEFT_KEY, v133, v134, v135, v136, v137, v138, v139);
}


void __fastcall ServantScriptEntity___ctor(ServantScriptEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B16AE8 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataEntityBase_string___ctor__, method, v2);
    byte_4B16AE8 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_31B2CB8 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall ServantScriptEntity__CreatePK(int32_t id, int32_t form, const MethodInfo *method)
{
  if ( (byte_4B16AD9 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&form, method);
    byte_4B16AD9 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           id,
           form,
           (const MethodInfo_2F10EB4 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall ServantScriptEntity__CreatePrimaryKey(
        ServantScriptEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  int32_t form; // w19
  int32_t id; // w20

  if ( (byte_4B16AD8 & 1) == 0 )
  {
    sub_1BCA7E0(&ServantScriptEntity_TypeInfo, method, v2);
    byte_4B16AD8 = 1;
  }
  id = this->fields.id;
  form = this->fields.form;
  if ( !ServantScriptEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantScriptEntity_TypeInfo, method);
  return ServantScriptEntity__CreatePK(id, form, v2);
}


System_Int32_array *__fastcall ServantScriptEntity__GetBattleBondOffset(
        ServantScriptEntity_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3
  ServantScriptEntity_c *v5; // x0

  if ( (byte_4B16AE0 & 1) == 0 )
  {
    sub_1BCA7E0(&ServantScriptEntity_TypeInfo, method, v2);
    byte_4B16AE0 = 1;
  }
  v5 = ServantScriptEntity_TypeInfo;
  if ( !ServantScriptEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantScriptEntity_TypeInfo, method);
    v5 = ServantScriptEntity_TypeInfo;
  }
  return ServantScriptEntity__GetExtendOffset(this, v5->static_fields->BATTLE_BOND_OFFSET_KEY, 0LL, v3);
}


System_Int32_array *__fastcall ServantScriptEntity__GetExtendOffset(
        ServantScriptEntity_o *this,
        System_String_o *key,
        System_Int32_array *defaultValue,
        const MethodInfo *method)
{
  System_Int32_array *v4; // x19
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  struct System_Collections_Generic_Dictionary_string__object__o *extendData; // x0
  __int64 v20; // x1
  System_Collections_Generic_Dictionary_object__object__o *Item; // x0
  __int64 methodPtr_low; // x10
  System_Collections_Generic_List_object__c *v23; // x9
  System_Collections_Generic_List_object__o *v24; // x20
  unsigned __int64 v25; // x21
  char v26; // w8
  char v27; // w25
  __int64 v28; // x1
  Il2CppObject *v29; // x22
  char *v30; // x9

  v4 = defaultValue;
  if ( (byte_4B16AE1 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Convert_TypeInfo, key, defaultValue);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v9, v10);
    sub_1BCA7E0(&int___TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_object__get_Count__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_object__get_Item__, v15, v16);
    sub_1BCA7E0(&System_Collections_Generic_List_object__TypeInfo, v17, v18);
    byte_4B16AE1 = 1;
  }
  if ( !v4 )
    v4 = (System_Int32_array *)sub_1BCA888(int___TypeInfo, 2LL);
  extendData = this->fields.extendData;
  if ( extendData
    && System_Collections_Generic_Dictionary_object__object___ContainsKey(
         (System_Collections_Generic_Dictionary_object__object__o *)extendData,
         (Il2CppObject *)key,
         (const MethodInfo_3265454 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    Item = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.extendData;
    if ( !Item )
      goto LABEL_25;
    Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                        Item,
                                                                        (Il2CppObject *)key,
                                                                        (const MethodInfo_32651E0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( Item )
    {
      methodPtr_low = LOBYTE(System_Collections_Generic_List_object__TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(Item->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low )
      {
        v23 = (System_Collections_Generic_List_object__c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1];
        v24 = v23 == System_Collections_Generic_List_object__TypeInfo
            ? (System_Collections_Generic_List_object__o *)Item
            : 0LL;
        if ( v23 == System_Collections_Generic_List_object__TypeInfo )
        {
          if ( v24 )
          {
            v25 = 0LL;
            v26 = 1;
            while ( 1 )
            {
              v27 = v26;
              if ( (__int64)v25 >= v24->fields._size )
              {
                Item = 0LL;
              }
              else
              {
                v29 = System_Collections_Generic_List_object___get_Item(
                        v24,
                        v25,
                        (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_object__get_Item__);
                if ( !System_Convert_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo, v28);
                Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Convert__ToInt32(v29, 0LL);
              }
              if ( !v4 )
                break;
              if ( v25 >= v4->max_length )
                sub_1BCAA44(Item, v20);
              v26 = 0;
              v30 = (char *)v4 + 4 * v25;
              v25 = 1LL;
              *((_DWORD *)v30 + 8) = (_DWORD)Item;
              if ( (v27 & 1) == 0 )
                return v4;
            }
          }
LABEL_25:
          sub_1BCAA3C(Item, v20);
        }
      }
    }
  }
  return v4;
}


System_Int32_array *__fastcall ServantScriptEntity__GetPhotoSvtPosition(
        ServantScriptEntity_o *this,
        System_Int32_array *defaultValue,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  ServantScriptEntity_c *v6; // x0

  if ( (byte_4B16AE2 & 1) == 0 )
  {
    sub_1BCA7E0(&ServantScriptEntity_TypeInfo, defaultValue, method);
    byte_4B16AE2 = 1;
  }
  v6 = ServantScriptEntity_TypeInfo;
  if ( !ServantScriptEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantScriptEntity_TypeInfo, defaultValue);
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

  if ( (byte_4B16AE4 & 1) == 0 )
  {
    sub_1BCA7E0(&ServantScriptEntity_TypeInfo, defaultValue, method);
    byte_4B16AE4 = 1;
  }
  v6 = ServantScriptEntity_TypeInfo;
  if ( !ServantScriptEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantScriptEntity_TypeInfo, defaultValue);
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

  if ( (byte_4B16AE3 & 1) == 0 )
  {
    sub_1BCA7E0(&ServantScriptEntity_TypeInfo, defaultValue, method);
    byte_4B16AE3 = 1;
  }
  v6 = ServantScriptEntity_TypeInfo;
  if ( !ServantScriptEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantScriptEntity_TypeInfo, defaultValue);
    v6 = ServantScriptEntity_TypeInfo;
  }
  return ServantScriptEntity__GetExtendOffset(this, v6->static_fields->PHOT_SVT_POSITION_RIGHT_KEY, defaultValue, v3);
}


float __fastcall ServantScriptEntity__GetPhotoSvtScale(
        ServantScriptEntity_o *this,
        float defaultValue,
        const MethodInfo *method)
{
  __int64 v3; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  struct System_Collections_Generic_Dictionary_string__object__o *extendData; // x20
  ServantScriptEntity_c *v13; // x0
  __int64 v14; // x1
  ServantScriptEntity_c *v15; // x0
  struct System_Collections_Generic_Dictionary_string__object__o *v16; // x19
  __int64 v17; // x1
  Il2CppObject *Item; // x19

  if ( (byte_4B16AE5 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Convert_TypeInfo, method, v3);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v8, v9);
    sub_1BCA7E0(&ServantScriptEntity_TypeInfo, v10, v11);
    byte_4B16AE5 = 1;
  }
  extendData = this->fields.extendData;
  if ( !extendData )
    return defaultValue;
  v13 = ServantScriptEntity_TypeInfo;
  if ( !ServantScriptEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantScriptEntity_TypeInfo, method);
    v13 = ServantScriptEntity_TypeInfo;
  }
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)extendData,
          (Il2CppObject *)v13->static_fields->PHOT_SVT_SCALE_KEY,
          (const MethodInfo_3265454 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return defaultValue;
  v15 = ServantScriptEntity_TypeInfo;
  v16 = this->fields.extendData;
  if ( !ServantScriptEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantScriptEntity_TypeInfo, v14);
  if ( !v16 )
    sub_1BCAA3C(v15, v14);
  Item = System_Collections_Generic_Dictionary_object__object___get_Item(
           (System_Collections_Generic_Dictionary_object__object__o *)v16,
           (Il2CppObject *)ServantScriptEntity_TypeInfo->static_fields->PHOT_SVT_SCALE_KEY,
           (const MethodInfo_32651E0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !System_Convert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo, v17);
  return System_Convert__ToSingle(Item, 0LL);
}


float __fastcall ServantScriptEntity__GetPhotoSvtScaleLeft(
        ServantScriptEntity_o *this,
        float defaultValue,
        const MethodInfo *method)
{
  __int64 v3; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  struct System_Collections_Generic_Dictionary_string__object__o *extendData; // x20
  ServantScriptEntity_c *v13; // x0
  __int64 v14; // x1
  ServantScriptEntity_c *v15; // x0
  struct System_Collections_Generic_Dictionary_string__object__o *v16; // x19
  __int64 v17; // x1
  Il2CppObject *Item; // x19

  if ( (byte_4B16AE7 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Convert_TypeInfo, method, v3);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v8, v9);
    sub_1BCA7E0(&ServantScriptEntity_TypeInfo, v10, v11);
    byte_4B16AE7 = 1;
  }
  extendData = this->fields.extendData;
  if ( !extendData )
    return defaultValue;
  v13 = ServantScriptEntity_TypeInfo;
  if ( !ServantScriptEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantScriptEntity_TypeInfo, method);
    v13 = ServantScriptEntity_TypeInfo;
  }
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)extendData,
          (Il2CppObject *)v13->static_fields->PHOT_SVT_SCALE_LEFT_KEY,
          (const MethodInfo_3265454 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return defaultValue;
  v15 = ServantScriptEntity_TypeInfo;
  v16 = this->fields.extendData;
  if ( !ServantScriptEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantScriptEntity_TypeInfo, v14);
  if ( !v16 )
    sub_1BCAA3C(v15, v14);
  Item = System_Collections_Generic_Dictionary_object__object___get_Item(
           (System_Collections_Generic_Dictionary_object__object__o *)v16,
           (Il2CppObject *)ServantScriptEntity_TypeInfo->static_fields->PHOT_SVT_SCALE_LEFT_KEY,
           (const MethodInfo_32651E0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !System_Convert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo, v17);
  return System_Convert__ToSingle(Item, 0LL);
}


float __fastcall ServantScriptEntity__GetPhotoSvtScaleRight(
        ServantScriptEntity_o *this,
        float defaultValue,
        const MethodInfo *method)
{
  __int64 v3; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  struct System_Collections_Generic_Dictionary_string__object__o *extendData; // x20
  ServantScriptEntity_c *v13; // x0
  __int64 v14; // x1
  ServantScriptEntity_c *v15; // x0
  struct System_Collections_Generic_Dictionary_string__object__o *v16; // x19
  __int64 v17; // x1
  Il2CppObject *Item; // x19

  if ( (byte_4B16AE6 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Convert_TypeInfo, method, v3);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v8, v9);
    sub_1BCA7E0(&ServantScriptEntity_TypeInfo, v10, v11);
    byte_4B16AE6 = 1;
  }
  extendData = this->fields.extendData;
  if ( !extendData )
    return defaultValue;
  v13 = ServantScriptEntity_TypeInfo;
  if ( !ServantScriptEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantScriptEntity_TypeInfo, method);
    v13 = ServantScriptEntity_TypeInfo;
  }
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)extendData,
          (Il2CppObject *)v13->static_fields->PHOT_SVT_SCALE_RIGHT_KEY,
          (const MethodInfo_3265454 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return defaultValue;
  v15 = ServantScriptEntity_TypeInfo;
  v16 = this->fields.extendData;
  if ( !ServantScriptEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantScriptEntity_TypeInfo, v14);
  if ( !v16 )
    sub_1BCAA3C(v15, v14);
  Item = System_Collections_Generic_Dictionary_object__object___get_Item(
           (System_Collections_Generic_Dictionary_object__object__o *)v16,
           (Il2CppObject *)ServantScriptEntity_TypeInfo->static_fields->PHOT_SVT_SCALE_RIGHT_KEY,
           (const MethodInfo_32651E0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !System_Convert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo, v17);
  return System_Convert__ToSingle(Item, 0LL);
}


System_Int32_array *__fastcall ServantScriptEntity__GetTerminalOffset(
        ServantScriptEntity_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3
  ServantScriptEntity_c *v5; // x0

  if ( (byte_4B16ADF & 1) == 0 )
  {
    sub_1BCA7E0(&ServantScriptEntity_TypeInfo, method, v2);
    byte_4B16ADF = 1;
  }
  v5 = ServantScriptEntity_TypeInfo;
  if ( !ServantScriptEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantScriptEntity_TypeInfo, method);
    v5 = ServantScriptEntity_TypeInfo;
  }
  return ServantScriptEntity__GetExtendOffset(this, v5->static_fields->TERMINAL_OFFSET_KEY, 0LL, v3);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantScriptEntity__IsCondEnable(
        ServantScriptEntity_o *this,
        int32_t friendship,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  struct System_Collections_Generic_Dictionary_string__object__o *extendData; // x21
  ServantScriptEntity_c *v22; // x0
  System_Collections_Generic_Dictionary_string__object__c *v23; // x1
  int *Item; // x0
  struct System_Collections_Generic_Dictionary_string__object__o *v25; // x21
  __int64 methodPtr_low; // x9
  Il2CppObject *v27; // x0
  __int64 v28; // x9
  __int64 v29; // x1
  ServantScriptEntity_c *v30; // x0
  __int64 v31; // x1
  ServantScriptEntity_c *v32; // x0
  __int64 v33; // x2
  __int64 v34; // x3
  int32_t v35; // w22
  __int64 v36; // x2
  __int64 v37; // x3
  int64_t v38; // x21
  System_String_o *v39; // x0
  __int64 v40; // x1
  int32_t v41; // w19
  ServantScriptEntity_o *v42; // x0
  System_String_o *v43; // x1
  System_Int32_array *v44; // x2
  const MethodInfo *v45; // x3

  if ( (byte_4B16ADE & 1) == 0 )
  {
    sub_1BCA7E0(&CondType_TypeInfo, *(_QWORD *)&friendship, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v7, v8);
    sub_1BCA7E0(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v9, v10);
    sub_1BCA7E0(&long_TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_object__get_Count__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_object__get_Item__, v15, v16);
    sub_1BCA7E0(&System_Collections_Generic_List_object__TypeInfo, v17, v18);
    sub_1BCA7E0(&ServantScriptEntity_TypeInfo, v19, v20);
    byte_4B16ADE = 1;
  }
  extendData = this->fields.extendData;
  if ( !extendData )
    goto LABEL_34;
  v22 = ServantScriptEntity_TypeInfo;
  if ( !ServantScriptEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantScriptEntity_TypeInfo, *(_QWORD *)&friendship);
    v22 = ServantScriptEntity_TypeInfo;
  }
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)extendData,
          (Il2CppObject *)v22->static_fields->COND_KEY,
          (const MethodInfo_3265454 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    goto LABEL_34;
  Item = (int *)ServantScriptEntity_TypeInfo;
  v25 = this->fields.extendData;
  if ( !ServantScriptEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantScriptEntity_TypeInfo, v23);
  if ( !v25 )
    goto LABEL_41;
  Item = (int *)System_Collections_Generic_Dictionary_object__object___get_Item(
                  (System_Collections_Generic_Dictionary_object__object__o *)v25,
                  (Il2CppObject *)ServantScriptEntity_TypeInfo->static_fields->COND_KEY,
                  (const MethodInfo_32651E0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
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
  v27 = System_Collections_Generic_List_object___get_Item(
          (System_Collections_Generic_List_object__o *)Item,
          0,
          (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_object__get_Item__);
  v25 = (struct System_Collections_Generic_Dictionary_string__object__o *)v27;
  if ( v27 )
  {
    v23 = System_Collections_Generic_Dictionary_string__object__TypeInfo;
    v28 = LOBYTE(System_Collections_Generic_Dictionary_string__object__TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v27->klass->vtable[0].methodPtr) < (unsigned int)v28
      || (System_Collections_Generic_Dictionary_string__object__c *)v27->klass->_2.typeHierarchy[v28 - 1] != System_Collections_Generic_Dictionary_string__object__TypeInfo )
    {
LABEL_43:
      sub_1BCACFC(v25);
      LOBYTE(Item) = (unsigned __int8)ServantScriptEntity__GetExtendOffset(v42, v43, v44, v45);
      return (char)Item;
    }
  }
  Item = (int *)ServantScriptEntity_TypeInfo;
  if ( !ServantScriptEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantScriptEntity_TypeInfo, v23);
  if ( !v25 )
    goto LABEL_41;
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)v25,
          (Il2CppObject *)ServantScriptEntity_TypeInfo->static_fields->COND_TYPE_KEY,
          (const MethodInfo_3265454 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    goto LABEL_34;
  v30 = ServantScriptEntity_TypeInfo;
  if ( !ServantScriptEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantScriptEntity_TypeInfo, v29);
    v30 = ServantScriptEntity_TypeInfo;
  }
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)v25,
          (Il2CppObject *)v30->static_fields->COND_VALUE_KEY,
          (const MethodInfo_3265454 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    goto LABEL_34;
  v32 = ServantScriptEntity_TypeInfo;
  if ( !ServantScriptEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantScriptEntity_TypeInfo, v31);
    v32 = ServantScriptEntity_TypeInfo;
  }
  Item = (int *)System_Collections_Generic_Dictionary_object__object___get_Item(
                  (System_Collections_Generic_Dictionary_object__object__o *)v25,
                  (Il2CppObject *)v32->static_fields->COND_TYPE_KEY,
                  (const MethodInfo_32651E0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !Item )
    goto LABEL_41;
  if ( *(Il2CppClass **)(*(_QWORD *)Item + 64LL) != long_TypeInfo->_1.element_class )
    goto LABEL_42;
  v35 = *(_DWORD *)j_il2cpp_object_unbox_0(Item, long_TypeInfo, v33, v34);
  Item = (int *)System_Collections_Generic_Dictionary_object__object___get_Item(
                  (System_Collections_Generic_Dictionary_object__object__o *)v25,
                  (Il2CppObject *)ServantScriptEntity_TypeInfo->static_fields->COND_VALUE_KEY,
                  (const MethodInfo_32651E0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !Item )
    goto LABEL_41;
  if ( *(Il2CppClass **)(*(_QWORD *)Item + 64LL) != long_TypeInfo->_1.element_class )
  {
LABEL_42:
    sub_1BCACFC(Item);
    goto LABEL_43;
  }
  v38 = *(_QWORD *)j_il2cpp_object_unbox_0(Item, long_TypeInfo, v36, v37);
  if ( (friendship & 0x80000000) == 0 )
  {
    if ( v35 == 99 )
    {
      LOBYTE(Item) = v38 >= (unsigned int)friendship;
      return (char)Item;
    }
    if ( v35 == 98 )
    {
      LOBYTE(Item) = v38 <= (unsigned int)friendship;
      return (char)Item;
    }
LABEL_34:
    LOBYTE(Item) = 0;
    return (char)Item;
  }
  Item = (int *)System_Int32__ToString((int)this + 16, 0LL);
  if ( !Item )
LABEL_41:
    sub_1BCAA3C(Item, v23);
  v39 = System_String__Substring_62420224((System_String_o *)Item, 0, Item[4] - 1, 0LL);
  v41 = System_Int32__Parse(v39, 0LL);
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v40);
  LOBYTE(Item) = CondType__IsOpen(v35, v41, v38, 0, 0LL, 0LL);
  return (char)Item;
}


UnityEngine_Vector2Int_o __fastcall ServantScriptEntity__getFaceSize(
        ServantScriptEntity_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  struct System_Collections_Generic_Dictionary_string__object__o *extendData; // x21
  unsigned __int64 s_Zero; // x19
  ServantScriptEntity_c *v18; // x0
  __int64 v19; // x1
  ServantScriptEntity_c *v20; // x0
  struct System_Collections_Generic_Dictionary_string__object__o *v21; // x20
  System_Collections_Generic_List_object__o *Item; // x0
  __int64 v23; // x1
  System_Collections_Generic_List_object__o *v24; // x20
  __int64 methodPtr_low; // x10
  Il2CppObject *v26; // x0
  unsigned __int64 v27; // x0
  int size; // w8
  __int64 v30; // x1
  Il2CppObject *v31; // x19
  __int64 v32; // x1
  Il2CppObject *v33; // x0

  if ( (byte_4B16ADB & 1) == 0 )
  {
    sub_1BCA7E0(&System_Convert_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_object__get_Count__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_object__get_Item__, v10, v11);
    sub_1BCA7E0(&System_Collections_Generic_List_object__TypeInfo, v12, v13);
    sub_1BCA7E0(&ServantScriptEntity_TypeInfo, v14, v15);
    byte_4B16ADB = 1;
  }
  if ( !byte_4B16BDD )
  {
    sub_1BCA7E0(&UnityEngine_Vector2Int_TypeInfo, method, v2);
    byte_4B16BDD = 1;
  }
  extendData = this->fields.extendData;
  s_Zero = (unsigned __int64)UnityEngine_Vector2Int_TypeInfo->static_fields->s_Zero;
  if ( extendData )
  {
    v18 = ServantScriptEntity_TypeInfo;
    if ( !ServantScriptEntity_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantScriptEntity_TypeInfo, method);
      v18 = ServantScriptEntity_TypeInfo;
    }
    if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
           (System_Collections_Generic_Dictionary_object__object__o *)extendData,
           (Il2CppObject *)v18->static_fields->FACE_SIZE_KEY,
           (const MethodInfo_3265454 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    {
      v20 = ServantScriptEntity_TypeInfo;
      v21 = this->fields.extendData;
      if ( !ServantScriptEntity_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantScriptEntity_TypeInfo, v19);
      if ( !v21 )
        sub_1BCAA3C(v20, v19);
      Item = (System_Collections_Generic_List_object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                            (System_Collections_Generic_Dictionary_object__object__o *)v21,
                                                            (Il2CppObject *)ServantScriptEntity_TypeInfo->static_fields->FACE_SIZE_KEY,
                                                            (const MethodInfo_32651E0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
      v24 = Item;
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
                                         (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_object__get_Item__);
            if ( !System_Convert_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo, v32);
            LODWORD(s_Zero) = System_Convert__ToInt32((Il2CppObject *)s_Zero, 0LL);
            v33 = System_Collections_Generic_List_object___get_Item(
                    v24,
                    1,
                    (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_object__get_Item__);
            LODWORD(v27) = System_Convert__ToInt32(v33, 0LL);
          }
          else
          {
            v27 = HIDWORD(s_Zero);
          }
          return (UnityEngine_Vector2Int_o)((unsigned int)s_Zero | ((unsigned __int64)(unsigned int)v27 << 32));
        }
        v31 = System_Collections_Generic_List_object___get_Item(
                Item,
                0,
                (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_object__get_Item__);
        if ( !System_Convert_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo, v30);
        v26 = v31;
      }
      else
      {
        if ( !System_Convert_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo, v23);
        v26 = (Il2CppObject *)v24;
      }
      LODWORD(v27) = System_Convert__ToInt32(v26, 0LL);
      LODWORD(s_Zero) = v27;
      return (UnityEngine_Vector2Int_o)((unsigned int)s_Zero | ((unsigned __int64)(unsigned int)v27 << 32));
    }
  }
  return (UnityEngine_Vector2Int_o)s_Zero;
}


int32_t __fastcall ServantScriptEntity__getMyRoomForm(ServantScriptEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  struct System_Collections_Generic_Dictionary_string__object__o *extendData; // x20
  ServantScriptEntity_c *v11; // x0
  __int64 v12; // x1
  void *Item; // x0
  struct System_Collections_Generic_Dictionary_string__object__o *v14; // x19
  __int64 v15; // x2
  __int64 v16; // x3
  ServantScriptEntity_o *v18; // x0
  const MethodInfo *v19; // x1

  if ( (byte_4B16ADC & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v4, v5);
    sub_1BCA7E0(&long_TypeInfo, v6, v7);
    sub_1BCA7E0(&ServantScriptEntity_TypeInfo, v8, v9);
    byte_4B16ADC = 1;
  }
  extendData = this->fields.extendData;
  if ( !extendData )
    return 0;
  v11 = ServantScriptEntity_TypeInfo;
  if ( !ServantScriptEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantScriptEntity_TypeInfo, method);
    v11 = ServantScriptEntity_TypeInfo;
  }
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)extendData,
          (Il2CppObject *)v11->static_fields->MYROOM_FORM_KEY,
          (const MethodInfo_3265454 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return 0;
  Item = ServantScriptEntity_TypeInfo;
  v14 = this->fields.extendData;
  if ( !ServantScriptEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantScriptEntity_TypeInfo, v12);
  if ( !v14
    || (Item = System_Collections_Generic_Dictionary_object__object___get_Item(
                 (System_Collections_Generic_Dictionary_object__object__o *)v14,
                 (Il2CppObject *)ServantScriptEntity_TypeInfo->static_fields->MYROOM_FORM_KEY,
                 (const MethodInfo_32651E0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
    sub_1BCAA3C(Item, v12);
  }
  if ( *(Il2CppClass **)(*(_QWORD *)Item + 64LL) == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(Item, long_TypeInfo, v15, v16);
  sub_1BCACFC(Item);
  return ServantScriptEntity__isMultipleForm(v18, v19);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Vector2_o __fastcall ServantScriptEntity__getOffset(
        ServantScriptEntity_o *this,
        int32_t offsetKind,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  System_Int32_array *TerminalOffset; // x0
  __int64 v10; // x1
  __int64 v11; // x10
  __int64 v12; // x8
  int32_t offsetX; // w8
  int32_t offsetY; // w9
  float v15; // s0
  float v16; // s1
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  if ( (byte_4B16ADA & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_ServantScriptAddMaster___, *(_QWORD *)&offsetKind, method);
    sub_1BCA7E0(&DataManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_DataMasterBase_ServantScriptAddMaster__ServantScriptAddEntity__int__TryGetEntity__, v7, v8);
    byte_4B16ADA = 1;
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
          sub_1BCAA44(TerminalOffset, v10);
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
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&offsetKind);
    TerminalOffset = (System_Int32_array *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ServantScriptAddMaster___);
    if ( !TerminalOffset )
      goto LABEL_23;
    TerminalOffset = (System_Int32_array *)DataMasterBase_object__object__int___TryGetEntity(
                                             (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalOffset,
                                             &entity,
                                             this->fields.id,
                                             (const MethodInfo_31B2E94 *)Method_DataMasterBase_ServantScriptAddMaster__ServantScriptAddEntity__int__TryGetEntity__);
    if ( ((unsigned __int8)TerminalOffset & 1) == 0 )
    {
LABEL_16:
      offsetX = this->fields.offsetXMyroom;
      offsetY = this->fields.offsetYMyroom;
      goto LABEL_21;
    }
    if ( !entity )
LABEL_23:
      sub_1BCAA3C(TerminalOffset, v10);
    v11 = 36LL;
    if ( offsetKind != 4 )
      v11 = 28LL;
    if ( offsetKind == 4 )
      v12 = 32LL;
    else
      v12 = 24LL;
    offsetX = *(_DWORD *)((char *)&entity->klass + v12);
    offsetY = *(_DWORD *)((char *)&entity->klass + v11);
  }
LABEL_21:
  v15 = (float)offsetX;
  v16 = (float)offsetY;
  result.fields.y = v16;
  result.fields.x = v15;
  return result;
}


bool __fastcall ServantScriptEntity__isMultipleForm(ServantScriptEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  struct System_Collections_Generic_Dictionary_string__object__o *extendData; // x19
  ServantScriptEntity_c *v7; // x0

  if ( (byte_4B16ADD & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, method, v2);
    sub_1BCA7E0(&ServantScriptEntity_TypeInfo, v4, v5);
    byte_4B16ADD = 1;
  }
  extendData = this->fields.extendData;
  if ( !extendData )
    return 0;
  v7 = ServantScriptEntity_TypeInfo;
  if ( !ServantScriptEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantScriptEntity_TypeInfo, method);
    v7 = ServantScriptEntity_TypeInfo;
  }
  return System_Collections_Generic_Dictionary_object__object___ContainsKey(
           (System_Collections_Generic_Dictionary_object__object__o *)extendData,
           (Il2CppObject *)v7->static_fields->COMBINE_RESULT_FORM_KEY,
           (const MethodInfo_3265454 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
}