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
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  int64_t v22; // x1
  struct ServantScriptEntity_StaticFields *static_fields; // x0
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  int64_t v30; // x1
  struct ServantScriptEntity_StaticFields *v31; // x0
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  int64_t v38; // x1
  struct ServantScriptEntity_StaticFields *v39; // x0
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7
  int64_t v46; // x1
  struct ServantScriptEntity_StaticFields *v47; // x0
  int64_t v48; // x2
  int32_t v49; // w3
  System_String_o *v50; // x4
  BattleSetupInfo_o *v51; // x5
  FollowerInfo_o *v52; // x6
  PartyListViewItem_o *v53; // x7
  int64_t v54; // x1
  struct ServantScriptEntity_StaticFields *v55; // x0
  int64_t v56; // x2
  int32_t v57; // w3
  System_String_o *v58; // x4
  BattleSetupInfo_o *v59; // x5
  FollowerInfo_o *v60; // x6
  PartyListViewItem_o *v61; // x7
  int64_t v62; // x1
  struct ServantScriptEntity_StaticFields *v63; // x0
  int64_t v64; // x2
  int32_t v65; // w3
  System_String_o *v66; // x4
  BattleSetupInfo_o *v67; // x5
  FollowerInfo_o *v68; // x6
  PartyListViewItem_o *v69; // x7
  int64_t v70; // x1
  struct ServantScriptEntity_StaticFields *v71; // x0
  int64_t v72; // x2
  int32_t v73; // w3
  System_String_o *v74; // x4
  BattleSetupInfo_o *v75; // x5
  FollowerInfo_o *v76; // x6
  PartyListViewItem_o *v77; // x7
  int64_t v78; // x1
  struct ServantScriptEntity_StaticFields *v79; // x0
  int64_t v80; // x2
  int32_t v81; // w3
  System_String_o *v82; // x4
  BattleSetupInfo_o *v83; // x5
  FollowerInfo_o *v84; // x6
  PartyListViewItem_o *v85; // x7
  struct ServantScriptEntity_StaticFields *v86; // x0
  int64_t v87; // x1
  int64_t v88; // x2
  int32_t v89; // w3
  System_String_o *v90; // x4
  BattleSetupInfo_o *v91; // x5
  FollowerInfo_o *v92; // x6
  PartyListViewItem_o *v93; // x7
  struct ServantScriptEntity_StaticFields *v94; // x0
  int64_t v95; // x1
  int64_t v96; // x2
  int32_t v97; // w3
  System_String_o *v98; // x4
  BattleSetupInfo_o *v99; // x5
  FollowerInfo_o *v100; // x6
  PartyListViewItem_o *v101; // x7
  struct ServantScriptEntity_StaticFields *v102; // x0
  int64_t v103; // x1
  int64_t v104; // x2
  int32_t v105; // w3
  System_String_o *v106; // x4
  BattleSetupInfo_o *v107; // x5
  FollowerInfo_o *v108; // x6
  PartyListViewItem_o *v109; // x7
  struct ServantScriptEntity_StaticFields *v110; // x0
  int64_t v111; // x1
  int64_t v112; // x2
  int32_t v113; // w3
  System_String_o *v114; // x4
  BattleSetupInfo_o *v115; // x5
  FollowerInfo_o *v116; // x6
  PartyListViewItem_o *v117; // x7
  struct ServantScriptEntity_StaticFields *v118; // x0
  int64_t v119; // x1
  int64_t v120; // x2
  int32_t v121; // w3
  System_String_o *v122; // x4
  BattleSetupInfo_o *v123; // x5
  FollowerInfo_o *v124; // x6
  PartyListViewItem_o *v125; // x7

  if ( (byte_4BB5002 & 1) == 0 )
  {
    sub_1C13D24(&ServantScriptEntity_TypeInfo, v1);
    sub_1C13D24(&StringLiteral_22894/*"perDomainCapacity"*/, v8);
    sub_1C13D24(&StringLiteral_22892/*"pen"*/, v9);
    sub_1C13D24(&StringLiteral_22893/*"pending_purchase_error"*/, v10);
    sub_1C13D24(&StringLiteral_3264/*"Battle2D"*/, v11);
    sub_1C13D24(&StringLiteral_24899/*"utf-16BE"*/, v12);
    sub_1C13D24(&StringLiteral_22891/*"peachpuff"*/, v13);
    sub_1C13D24(&StringLiteral_22344/*"mstns"*/, v14);
    sub_1C13D24(&StringLiteral_22895/*"perMonthAmount"*/, v15);
    sub_1C13D24(&StringLiteral_18484/*"componentHash"*/, v16);
    sub_1C13D24(&StringLiteral_22896/*"performance"*/, v17);
    sub_1C13D24(&StringLiteral_18400/*"com.unity.purchasing.amazon.AmazonPurchasing"*/, v18);
    sub_1C13D24(&StringLiteral_19660/*"f5"*/, v19);
    sub_1C13D24(&StringLiteral_13844/*"Terminal/QuestMap/Capter{0:D4}_{1:D4}"*/, v20);
    sub_1C13D24(&StringLiteral_18483/*"componentClass"*/, v21);
    byte_4BB5002 = 1;
  }
  ServantScriptEntity_TypeInfo->static_fields->FACE_SIZE_KEY = (struct System_String_o *)StringLiteral_19660/*"f5"*/;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)ServantScriptEntity_TypeInfo->static_fields,
    StringLiteral_19660/*"f5"*/,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  v22 = StringLiteral_22344/*"mstns"*/;
  static_fields = ServantScriptEntity_TypeInfo->static_fields;
  static_fields->MYROOM_FORM_KEY = (struct System_String_o *)StringLiteral_22344/*"mstns"*/;
  sub_1C13CC8((PartyOrganizationUtility_o *)&static_fields->MYROOM_FORM_KEY, v22, v24, v25, v26, v27, v28, v29);
  v30 = StringLiteral_18400/*"com.unity.purchasing.amazon.AmazonPurchasing"*/;
  v31 = ServantScriptEntity_TypeInfo->static_fields;
  v31->COMBINE_RESULT_FORM_KEY = (struct System_String_o *)StringLiteral_18400/*"com.unity.purchasing.amazon.AmazonPurchasing"*/;
  sub_1C13CC8((PartyOrganizationUtility_o *)&v31->COMBINE_RESULT_FORM_KEY, v30, v32, v33, v34, v35, v36, v37);
  v38 = StringLiteral_18484/*"componentHash"*/;
  v39 = ServantScriptEntity_TypeInfo->static_fields;
  v39->COND_KEY = (struct System_String_o *)StringLiteral_18484/*"componentHash"*/;
  sub_1C13CC8((PartyOrganizationUtility_o *)&v39->COND_KEY, v38, v40, v41, v42, v43, v44, v45);
  v46 = StringLiteral_18483/*"componentClass"*/;
  v47 = ServantScriptEntity_TypeInfo->static_fields;
  v47->COND_TYPE_KEY = (struct System_String_o *)StringLiteral_18483/*"componentClass"*/;
  sub_1C13CC8((PartyOrganizationUtility_o *)&v47->COND_TYPE_KEY, v46, v48, v49, v50, v51, v52, v53);
  v54 = StringLiteral_24899/*"utf-16BE"*/;
  v55 = ServantScriptEntity_TypeInfo->static_fields;
  v55->COND_VALUE_KEY = (struct System_String_o *)StringLiteral_24899/*"utf-16BE"*/;
  sub_1C13CC8((PartyOrganizationUtility_o *)&v55->COND_VALUE_KEY, v54, v56, v57, v58, v59, v60, v61);
  v62 = StringLiteral_13844/*"Terminal/QuestMap/Capter{0:D4}_{1:D4}"*/;
  v63 = ServantScriptEntity_TypeInfo->static_fields;
  v63->TERMINAL_OFFSET_KEY = (struct System_String_o *)StringLiteral_13844/*"Terminal/QuestMap/Capter{0:D4}_{1:D4}"*/;
  sub_1C13CC8((PartyOrganizationUtility_o *)&v63->TERMINAL_OFFSET_KEY, v62, v64, v65, v66, v67, v68, v69);
  v70 = StringLiteral_3264/*"Battle2D"*/;
  v71 = ServantScriptEntity_TypeInfo->static_fields;
  v71->BATTLE_BOND_OFFSET_KEY = (struct System_String_o *)StringLiteral_3264/*"Battle2D"*/;
  sub_1C13CC8((PartyOrganizationUtility_o *)&v71->BATTLE_BOND_OFFSET_KEY, v70, v72, v73, v74, v75, v76, v77);
  v78 = StringLiteral_22891/*"peachpuff"*/;
  v79 = ServantScriptEntity_TypeInfo->static_fields;
  v79->PHOT_SVT_POSITION_KEY = (struct System_String_o *)StringLiteral_22891/*"peachpuff"*/;
  sub_1C13CC8((PartyOrganizationUtility_o *)&v79->PHOT_SVT_POSITION_KEY, v78, v80, v81, v82, v83, v84, v85);
  v86 = ServantScriptEntity_TypeInfo->static_fields;
  v87 = StringLiteral_22893/*"pending_purchase_error"*/;
  v86->PHOT_SVT_POSITION_RIGHT_KEY = (struct System_String_o *)StringLiteral_22893/*"pending_purchase_error"*/;
  sub_1C13CC8((PartyOrganizationUtility_o *)&v86->PHOT_SVT_POSITION_RIGHT_KEY, v87, v88, v89, v90, v91, v92, v93);
  v94 = ServantScriptEntity_TypeInfo->static_fields;
  v95 = StringLiteral_22892/*"pen"*/;
  v94->PHOT_SVT_POSITION_LEFT_KEY = (struct System_String_o *)StringLiteral_22892/*"pen"*/;
  sub_1C13CC8((PartyOrganizationUtility_o *)&v94->PHOT_SVT_POSITION_LEFT_KEY, v95, v96, v97, v98, v99, v100, v101);
  v102 = ServantScriptEntity_TypeInfo->static_fields;
  v103 = StringLiteral_22894/*"perDomainCapacity"*/;
  v102->PHOT_SVT_SCALE_KEY = (struct System_String_o *)StringLiteral_22894/*"perDomainCapacity"*/;
  sub_1C13CC8((PartyOrganizationUtility_o *)&v102->PHOT_SVT_SCALE_KEY, v103, v104, v105, v106, v107, v108, v109);
  v110 = ServantScriptEntity_TypeInfo->static_fields;
  v111 = StringLiteral_22896/*"performance"*/;
  v110->PHOT_SVT_SCALE_RIGHT_KEY = (struct System_String_o *)StringLiteral_22896/*"performance"*/;
  sub_1C13CC8((PartyOrganizationUtility_o *)&v110->PHOT_SVT_SCALE_RIGHT_KEY, v111, v112, v113, v114, v115, v116, v117);
  v118 = ServantScriptEntity_TypeInfo->static_fields;
  v119 = StringLiteral_22895/*"perMonthAmount"*/;
  v118->PHOT_SVT_SCALE_LEFT_KEY = (struct System_String_o *)StringLiteral_22895/*"perMonthAmount"*/;
  sub_1C13CC8((PartyOrganizationUtility_o *)&v118->PHOT_SVT_SCALE_LEFT_KEY, v119, v120, v121, v122, v123, v124, v125);
}


void __fastcall ServantScriptEntity___ctor(ServantScriptEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4BB5001 & 1) == 0 )
  {
    sub_1C13D24(&Method_DataEntityBase_string___ctor__, method);
    byte_4BB5001 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_32361B8 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall ServantScriptEntity__CreatePK(int32_t id, int32_t form, const MethodInfo *method)
{
  if ( (byte_4BB4FF2 & 1) == 0 )
  {
    sub_1C13D24(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&form);
    byte_4BB4FF2 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           id,
           form,
           (const MethodInfo_2F8D690 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall ServantScriptEntity__CreatePrimaryKey(
        ServantScriptEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  int32_t form; // w19
  int32_t id; // w20

  if ( (byte_4BB4FF1 & 1) == 0 )
  {
    sub_1C13D24(&ServantScriptEntity_TypeInfo, method);
    byte_4BB4FF1 = 1;
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

  if ( (byte_4BB4FF9 & 1) == 0 )
  {
    sub_1C13D24(&ServantScriptEntity_TypeInfo, method);
    byte_4BB4FF9 = 1;
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

  if ( (byte_4BB4FFA & 1) == 0 )
  {
    sub_1C13D24(&System_Convert_TypeInfo, key);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v7);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v8);
    sub_1C13D24(&int___TypeInfo, v9);
    sub_1C13D24(&Method_System_Collections_Generic_List_object__get_Count__, v10);
    sub_1C13D24(&Method_System_Collections_Generic_List_object__get_Item__, v11);
    sub_1C13D24(&System_Collections_Generic_List_object__TypeInfo, v12);
    byte_4BB4FFA = 1;
  }
  if ( !defaultValue )
    defaultValue = (System_Int32_array *)sub_1C13DCC(int___TypeInfo, 2LL);
  extendData = this->fields.extendData;
  if ( extendData
    && System_Collections_Generic_Dictionary_object__object___ContainsKey(
         (System_Collections_Generic_Dictionary_object__object__o *)extendData,
         (Il2CppObject *)key,
         (const MethodInfo_32F2BA4 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    Item = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.extendData;
    if ( !Item )
      goto LABEL_25;
    Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                        Item,
                                                                        (Il2CppObject *)key,
                                                                        (const MethodInfo_32F2930 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
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
                        (const MethodInfo_362CEFC *)Method_System_Collections_Generic_List_object__get_Item__);
                if ( !System_Convert_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
                Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Convert__ToInt32(v22, 0LL);
              }
              if ( !defaultValue )
                break;
              if ( v19 >= defaultValue->max_length )
                sub_1C13F88(Item, v14);
              v20 = 0;
              v23 = (char *)defaultValue + 4 * v19;
              v19 = 1LL;
              *((_DWORD *)v23 + 8) = (_DWORD)Item;
              if ( (v21 & 1) == 0 )
                return defaultValue;
            }
          }
LABEL_25:
          sub_1C13F80(Item, v14);
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

  if ( (byte_4BB4FFB & 1) == 0 )
  {
    sub_1C13D24(&ServantScriptEntity_TypeInfo, defaultValue);
    byte_4BB4FFB = 1;
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

  if ( (byte_4BB4FFD & 1) == 0 )
  {
    sub_1C13D24(&ServantScriptEntity_TypeInfo, defaultValue);
    byte_4BB4FFD = 1;
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

  if ( (byte_4BB4FFC & 1) == 0 )
  {
    sub_1C13D24(&ServantScriptEntity_TypeInfo, defaultValue);
    byte_4BB4FFC = 1;
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

  if ( (byte_4BB4FFE & 1) == 0 )
  {
    sub_1C13D24(&System_Convert_TypeInfo, method);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v5);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v6);
    sub_1C13D24(&ServantScriptEntity_TypeInfo, v7);
    byte_4BB4FFE = 1;
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
          (const MethodInfo_32F2BA4 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return defaultValue;
  v11 = ServantScriptEntity_TypeInfo;
  v12 = this->fields.extendData;
  if ( !ServantScriptEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantScriptEntity_TypeInfo);
  if ( !v12 )
    sub_1C13F80(v11, v10);
  Item = System_Collections_Generic_Dictionary_object__object___get_Item(
           (System_Collections_Generic_Dictionary_object__object__o *)v12,
           (Il2CppObject *)ServantScriptEntity_TypeInfo->static_fields->PHOT_SVT_SCALE_KEY,
           (const MethodInfo_32F2930 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
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

  if ( (byte_4BB5000 & 1) == 0 )
  {
    sub_1C13D24(&System_Convert_TypeInfo, method);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v5);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v6);
    sub_1C13D24(&ServantScriptEntity_TypeInfo, v7);
    byte_4BB5000 = 1;
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
          (const MethodInfo_32F2BA4 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return defaultValue;
  v11 = ServantScriptEntity_TypeInfo;
  v12 = this->fields.extendData;
  if ( !ServantScriptEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantScriptEntity_TypeInfo);
  if ( !v12 )
    sub_1C13F80(v11, v10);
  Item = System_Collections_Generic_Dictionary_object__object___get_Item(
           (System_Collections_Generic_Dictionary_object__object__o *)v12,
           (Il2CppObject *)ServantScriptEntity_TypeInfo->static_fields->PHOT_SVT_SCALE_LEFT_KEY,
           (const MethodInfo_32F2930 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
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

  if ( (byte_4BB4FFF & 1) == 0 )
  {
    sub_1C13D24(&System_Convert_TypeInfo, method);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v5);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v6);
    sub_1C13D24(&ServantScriptEntity_TypeInfo, v7);
    byte_4BB4FFF = 1;
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
          (const MethodInfo_32F2BA4 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return defaultValue;
  v11 = ServantScriptEntity_TypeInfo;
  v12 = this->fields.extendData;
  if ( !ServantScriptEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantScriptEntity_TypeInfo);
  if ( !v12 )
    sub_1C13F80(v11, v10);
  Item = System_Collections_Generic_Dictionary_object__object___get_Item(
           (System_Collections_Generic_Dictionary_object__object__o *)v12,
           (Il2CppObject *)ServantScriptEntity_TypeInfo->static_fields->PHOT_SVT_SCALE_RIGHT_KEY,
           (const MethodInfo_32F2930 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
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

  if ( (byte_4BB4FF8 & 1) == 0 )
  {
    sub_1C13D24(&ServantScriptEntity_TypeInfo, method);
    byte_4BB4FF8 = 1;
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

  if ( (byte_4BB4FF7 & 1) == 0 )
  {
    sub_1C13D24(&CondType_TypeInfo, *(_QWORD *)&friendship);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v5);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v6);
    sub_1C13D24(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v7);
    sub_1C13D24(&long_TypeInfo, v8);
    sub_1C13D24(&Method_System_Collections_Generic_List_object__get_Count__, v9);
    sub_1C13D24(&Method_System_Collections_Generic_List_object__get_Item__, v10);
    sub_1C13D24(&System_Collections_Generic_List_object__TypeInfo, v11);
    sub_1C13D24(&ServantScriptEntity_TypeInfo, v12);
    byte_4BB4FF7 = 1;
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
          (const MethodInfo_32F2BA4 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
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
                  (const MethodInfo_32F2930 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
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
          (const MethodInfo_362CEFC *)Method_System_Collections_Generic_List_object__get_Item__);
  v17 = (struct System_Collections_Generic_Dictionary_string__object__o *)v19;
  if ( v19 )
  {
    v15 = System_Collections_Generic_Dictionary_string__object__TypeInfo;
    v20 = LOBYTE(System_Collections_Generic_Dictionary_string__object__TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v19->klass->vtable[0].methodPtr) < (unsigned int)v20
      || (System_Collections_Generic_Dictionary_string__object__c *)v19->klass->_2.typeHierarchy[v20 - 1] != System_Collections_Generic_Dictionary_string__object__TypeInfo )
    {
LABEL_43:
      sub_1C14240(v17);
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
          (const MethodInfo_32F2BA4 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
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
          (const MethodInfo_32F2BA4 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
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
                  (const MethodInfo_32F2930 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !Item )
    goto LABEL_41;
  if ( *(Il2CppClass **)(*(_QWORD *)Item + 64LL) != long_TypeInfo->_1.element_class )
    goto LABEL_42;
  v25 = *(_DWORD *)j_il2cpp_object_unbox_0(Item, long_TypeInfo, v23, v24);
  Item = (int *)System_Collections_Generic_Dictionary_object__object___get_Item(
                  (System_Collections_Generic_Dictionary_object__object__o *)v17,
                  (Il2CppObject *)ServantScriptEntity_TypeInfo->static_fields->COND_VALUE_KEY,
                  (const MethodInfo_32F2930 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !Item )
    goto LABEL_41;
  if ( *(Il2CppClass **)(*(_QWORD *)Item + 64LL) != long_TypeInfo->_1.element_class )
  {
LABEL_42:
    sub_1C14240(Item);
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
    sub_1C13F80(Item, v15);
  v29 = System_String__Substring_62986948((System_String_o *)Item, 0, Item[4] - 1, 0LL);
  v30 = System_Int32__Parse(v29, 0LL);
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  LOBYTE(Item) = CondType__IsOpen(v25, v30, v28, 0, 0LL, 0LL);
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

  if ( (byte_4BB4FF4 & 1) == 0 )
  {
    sub_1C13D24(&System_Convert_TypeInfo, method);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v3);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v4);
    sub_1C13D24(&Method_System_Collections_Generic_List_object__get_Count__, v5);
    sub_1C13D24(&Method_System_Collections_Generic_List_object__get_Item__, v6);
    sub_1C13D24(&System_Collections_Generic_List_object__TypeInfo, v7);
    sub_1C13D24(&ServantScriptEntity_TypeInfo, v8);
    byte_4BB4FF4 = 1;
  }
  if ( !byte_4BB50F8 )
  {
    sub_1C13D24(&UnityEngine_Vector2Int_TypeInfo, method);
    byte_4BB50F8 = 1;
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
           (const MethodInfo_32F2BA4 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    {
      v13 = ServantScriptEntity_TypeInfo;
      v14 = this->fields.extendData;
      if ( !ServantScriptEntity_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantScriptEntity_TypeInfo);
      if ( !v14 )
        sub_1C13F80(v13, v12);
      Item = (System_Collections_Generic_List_object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                            (System_Collections_Generic_Dictionary_object__object__o *)v14,
                                                            (Il2CppObject *)ServantScriptEntity_TypeInfo->static_fields->FACE_SIZE_KEY,
                                                            (const MethodInfo_32F2930 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
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
                                         (const MethodInfo_362CEFC *)Method_System_Collections_Generic_List_object__get_Item__);
            if ( !System_Convert_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
            LODWORD(s_Zero) = System_Convert__ToInt32((Il2CppObject *)s_Zero, 0LL);
            v23 = System_Collections_Generic_List_object___get_Item(
                    v16,
                    1,
                    (const MethodInfo_362CEFC *)Method_System_Collections_Generic_List_object__get_Item__);
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
                (const MethodInfo_362CEFC *)Method_System_Collections_Generic_List_object__get_Item__);
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

  if ( (byte_4BB4FF5 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, method);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v3);
    sub_1C13D24(&long_TypeInfo, v4);
    sub_1C13D24(&ServantScriptEntity_TypeInfo, v5);
    byte_4BB4FF5 = 1;
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
          (const MethodInfo_32F2BA4 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return 0;
  Item = ServantScriptEntity_TypeInfo;
  v10 = this->fields.extendData;
  if ( !ServantScriptEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantScriptEntity_TypeInfo);
  if ( !v10
    || (Item = System_Collections_Generic_Dictionary_object__object___get_Item(
                 (System_Collections_Generic_Dictionary_object__object__o *)v10,
                 (Il2CppObject *)ServantScriptEntity_TypeInfo->static_fields->MYROOM_FORM_KEY,
                 (const MethodInfo_32F2930 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
    sub_1C13F80(Item, v8);
  }
  if ( *(Il2CppClass **)(*(_QWORD *)Item + 64LL) == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(Item, long_TypeInfo, v11, v12);
  sub_1C14240(Item);
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

  if ( (byte_4BB4FF3 & 1) == 0 )
  {
    sub_1C13D24(&Method_DataManager_GetMaster_ServantScriptAddMaster___, *(_QWORD *)&offsetKind);
    sub_1C13D24(&DataManager_TypeInfo, v5);
    sub_1C13D24(&Method_DataMasterBase_ServantScriptAddMaster__ServantScriptAddEntity__int__TryGetEntity__, v6);
    byte_4BB4FF3 = 1;
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
          sub_1C13F88(TerminalOffset, v8);
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
    TerminalOffset = (System_Int32_array *)DataManager__GetMaster_object_((const MethodInfo_2F8F418 *)Method_DataManager_GetMaster_ServantScriptAddMaster___);
    if ( !TerminalOffset )
      goto LABEL_23;
    TerminalOffset = (System_Int32_array *)DataMasterBase_object__object__int___TryGetEntity(
                                             (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalOffset,
                                             &entity,
                                             this->fields.id,
                                             (const MethodInfo_3238670 *)Method_DataMasterBase_ServantScriptAddMaster__ServantScriptAddEntity__int__TryGetEntity__);
    if ( ((unsigned __int8)TerminalOffset & 1) == 0 )
    {
LABEL_16:
      offsetX = this->fields.offsetXMyroom;
      offsetY = this->fields.offsetYMyroom;
      goto LABEL_21;
    }
    if ( !entity )
LABEL_23:
      sub_1C13F80(TerminalOffset, v8);
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

  if ( (byte_4BB4FF6 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, method);
    sub_1C13D24(&ServantScriptEntity_TypeInfo, v3);
    byte_4BB4FF6 = 1;
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
           (const MethodInfo_32F2BA4 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
}