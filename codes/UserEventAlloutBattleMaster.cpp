void __fastcall UserEventAlloutBattleMaster___ctor(UserEventAlloutBattleMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EA1DF & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_UserEventAlloutBattleMaster__UserEventAlloutBattleEntity__string___ctor__,
      (_DWORD)method,
      v2,
      v3);
    byte_42EA1DF = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    406,
    (const MethodInfo_23FB1C4 *)Method_DataMasterBase_UserEventAlloutBattleMaster__UserEventAlloutBattleEntity__string___ctor__);
}


System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtInfo__o *__fastcall UserEventAlloutBattleMaster__ConvertClearSvtInfo(
        UserEventAlloutBattleMaster_o *this,
        System_Collections_Generic_List_object__o *deckList,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  int v44; // w1
  int v45; // w2
  __int64 v46; // x3
  int v47; // w1
  int v48; // w2
  __int64 v49; // x3
  int v50; // w1
  int v51; // w2
  __int64 v52; // x3
  int v53; // w1
  int v54; // w2
  __int64 v55; // x3
  int v56; // w1
  int v57; // w2
  __int64 v58; // x3
  int v59; // w1
  int v60; // w2
  __int64 v61; // x3
  int v62; // w1
  int v63; // w2
  __int64 v64; // x3
  int v65; // w1
  int v66; // w2
  __int64 v67; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v68; // x21
  __int64 v69; // x0
  __int64 v70; // x1
  Il2CppObject *current; // x22
  __int64 v72; // x9
  __int64 v73; // x20
  UserEventAlloutBattleMaster_o *v74; // x0
  const MethodInfo *v75; // x3
  UserEventAlloutBattleMaster_o *DicToInt; // x0
  __int64 v77; // x1
  const MethodInfo *v78; // x3
  UserEventAlloutBattleMaster_o *v79; // x0
  const MethodInfo *v80; // x3
  UserEventAlloutBattleMaster_o *v81; // x0
  const MethodInfo *v82; // x3
  UserEventAlloutBattleMaster_o *v83; // x0
  const MethodInfo *v84; // x3
  UserEventAlloutBattleMaster_o *v85; // x0
  const MethodInfo *v86; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v87; // x23
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o **v88; // x21
  System_String_array **v89; // x2
  System_String_array **v90; // x3
  System_Boolean_array **v91; // x4
  System_Int32_array **v92; // x5
  System_Int32_array *v93; // x6
  System_Int32_array *v94; // x7
  __int64 v95; // x0
  __int64 v96; // x1
  __int64 v97; // x0
  __int64 v98; // x1
  __int64 v99; // x11
  __int64 v100; // x11
  System_Xml_Schema_XmlSchemaObject_o *v101; // x0
  Il2CppObject *v102; // x22
  __int64 v103; // x9
  UserEventAlloutBattleMaster_ClearSvtEquipInfo_o *v104; // x23
  UserEventAlloutBattleMaster_o *v105; // x0
  const MethodInfo *v106; // x3
  UserEventAlloutBattleMaster_o *v107; // x0
  __int64 v108; // x1
  const MethodInfo *v109; // x3
  __int64 v110; // x1
  int v111; // w19
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v113; // [xsp+8h] [xbp-C8h]
  int v114; // [xsp+10h] [xbp-C0h]
  int v115; // [xsp+14h] [xbp-BCh]
  _BYTE v116[32]; // [xsp+18h] [xbp-B8h] BYREF
  int v117; // [xsp+38h] [xbp-98h]
  System_Collections_Generic_List_Enumerator_T__o v118; // [xsp+40h] [xbp-90h] BYREF
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+58h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v120; // [xsp+60h] [xbp-70h] BYREF

  if ( (byte_42EA1E4 & 1) == 0 )
  {
    sub_B5D5C4(&UserEventAlloutBattleMaster_ClearSvtEquipInfo_TypeInfo, (_DWORD)deckList, (_DWORD)method, v3);
    sub_B5D5C4(&UserEventAlloutBattleMaster_ClearSvtInfo_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, v8, v9, v10);
    sub_B5D5C4(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_object__Dispose__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_object__MoveNext__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_object__get_Current__, v20, v21, v22);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtEquipInfo__Add__,
      v23,
      v24,
      v25);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtInfo__Add__, v26, v27, v28);
    sub_B5D5C4(&Method_System_Collections_Generic_List_object__GetEnumerator__, v29, v30, v31);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtEquipInfo___ctor__,
      v32,
      v33,
      v34);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtInfo___ctor__, v35, v36, v37);
    sub_B5D5C4(&System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtEquipInfo__TypeInfo, v38, v39, v40);
    sub_B5D5C4(&System_Collections_Generic_List_object__TypeInfo, v41, v42, v43);
    sub_B5D5C4(&System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtInfo__TypeInfo, v44, v45, v46);
    sub_B5D5C4(&StringLiteral_20456/*"lc"*/, v47, v48, v49);
    sub_B5D5C4(&StringLiteral_18375/*"ec"*/, v50, v51, v52);
    sub_B5D5C4(&StringLiteral_22769/*"svtEqs"*/, v53, v54, v55);
    sub_B5D5C4(&StringLiteral_22772/*"svtId"*/, v56, v57, v58);
    sub_B5D5C4(&StringLiteral_19625/*"id"*/, v59, v60, v61);
    sub_B5D5C4(&StringLiteral_19656/*"ilc"*/, v62, v63, v64);
    sub_B5D5C4(&StringLiteral_20592/*"lv"*/, v65, v66, v67);
    byte_42EA1E4 = 1;
  }
  memset(&v120, 0, sizeof(v120));
  value = 0LL;
  memset(&v118, 0, sizeof(v118));
  v117 = 0;
  v68 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtInfo__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v68,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtInfo___ctor__);
  if ( !deckList )
    sub_B5D69C(v69, v70);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)v116,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)deckList,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_object__GetEnumerator__);
  v114 = 0;
  v120 = *(System_Collections_Generic_List_Enumerator_T__o *)v116;
  v113 = v68;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v120,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_object__MoveNext__) )
  {
    current = v120.fields.current;
    if ( v120.fields.current )
    {
      v72 = *(&System_Collections_Generic_Dictionary_string__object__TypeInfo->_2.bitflags2 + 1);
      if ( *(&v120.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v72
        || (System_Collections_Generic_Dictionary_string__object__c *)v120.fields.current->klass->_2.typeHierarchy[v72 - 1] != System_Collections_Generic_Dictionary_string__object__TypeInfo )
      {
        v95 = sub_B5D990(v120.fields.current);
LABEL_45:
        sub_B5D69C(v95, v96);
      }
    }
    v73 = sub_B5D694(UserEventAlloutBattleMaster_ClearSvtInfo_TypeInfo);
    UserEventAlloutBattleMaster_ClearSvtInfo___ctor((UserEventAlloutBattleMaster_ClearSvtInfo_o *)v73, 0LL);
    DicToInt = (UserEventAlloutBattleMaster_o *)UserEventAlloutBattleMaster__GetDicToInt(
                                                  v74,
                                                  (System_Collections_Generic_Dictionary_string__object__o *)current,
                                                  (System_String_o *)StringLiteral_19625/*"id"*/,
                                                  v75);
    if ( !v73 )
      sub_B5D69C(DicToInt, v77);
    *(_DWORD *)(v73 + 16) = (_DWORD)DicToInt;
    v79 = (UserEventAlloutBattleMaster_o *)UserEventAlloutBattleMaster__GetDicToInt(
                                             DicToInt,
                                             (System_Collections_Generic_Dictionary_string__object__o *)current,
                                             (System_String_o *)StringLiteral_22772/*"svtId"*/,
                                             v78);
    *(_DWORD *)(v73 + 20) = (_DWORD)v79;
    v81 = (UserEventAlloutBattleMaster_o *)UserEventAlloutBattleMaster__GetDicToInt(
                                             v79,
                                             (System_Collections_Generic_Dictionary_string__object__o *)current,
                                             (System_String_o *)StringLiteral_20592/*"lv"*/,
                                             v80);
    *(_DWORD *)(v73 + 24) = (_DWORD)v81;
    v83 = (UserEventAlloutBattleMaster_o *)UserEventAlloutBattleMaster__GetDicToInt(
                                             v81,
                                             (System_Collections_Generic_Dictionary_string__object__o *)current,
                                             (System_String_o *)StringLiteral_20456/*"lc"*/,
                                             v82);
    *(_DWORD *)(v73 + 28) = (_DWORD)v83;
    v85 = (UserEventAlloutBattleMaster_o *)UserEventAlloutBattleMaster__GetDicToInt(
                                             v83,
                                             (System_Collections_Generic_Dictionary_string__object__o *)current,
                                             (System_String_o *)StringLiteral_19656/*"ilc"*/,
                                             v84);
    *(_DWORD *)(v73 + 32) = (_DWORD)v85;
    *(_DWORD *)(v73 + 36) = UserEventAlloutBattleMaster__GetDicToInt(
                              v85,
                              (System_Collections_Generic_Dictionary_string__object__o *)current,
                              (System_String_o *)StringLiteral_18375/*"ec"*/,
                              v86);
    v87 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtEquipInfo__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v87,
      (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtEquipInfo___ctor__);
    *(_QWORD *)(v73 + 40) = v87;
    v88 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o **)(v73 + 40);
    sub_B5D560((BattleServantConfConponent_o *)(v73 + 40), (System_Int32_array **)v87, v89, v90, v91, v92, v93, v94);
    if ( !current )
      goto LABEL_45;
    v97 = System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
            (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)current,
            (System_Xml_XmlQualifiedName_o *)StringLiteral_22769/*"svtEqs"*/,
            &value,
            (const MethodInfo_2F289BC *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    if ( (v97 & 1) == 0 )
      goto LABEL_33;
    if ( !value
      || (v99 = *(&System_Collections_Generic_List_object__TypeInfo->_2.bitflags2 + 1),
          *(&value->klass->_2.bitflags2 + 1) < (unsigned int)v99)
      || (System_Collections_Generic_List_object__c *)value->klass->_2.typeHierarchy[v99 - 1] != System_Collections_Generic_List_object__TypeInfo )
    {
LABEL_43:
      sub_B5D69C(v97, v98);
    }
    v100 = *(&System_Collections_Generic_List_object__TypeInfo->_2.bitflags2 + 1);
    if ( *(&value->klass->_2.bitflags2 + 1) >= (unsigned int)v100 )
    {
      if ( (System_Collections_Generic_List_object__c *)value->klass->_2.typeHierarchy[v100 - 1] == System_Collections_Generic_List_object__TypeInfo )
        v101 = value;
      else
        v101 = 0LL;
    }
    else
    {
      v101 = 0LL;
    }
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)v116,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v101,
      (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_object__GetEnumerator__);
    v118 = *(System_Collections_Generic_List_Enumerator_T__o *)v116;
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v118,
              (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_object__MoveNext__) )
    {
      v102 = v118.fields.current;
      if ( v118.fields.current )
      {
        v103 = *(&System_Collections_Generic_Dictionary_string__object__TypeInfo->_2.bitflags2 + 1);
        if ( *(&v118.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v103
          || (System_Collections_Generic_Dictionary_string__object__c *)v118.fields.current->klass->_2.typeHierarchy[v103 - 1] != System_Collections_Generic_Dictionary_string__object__TypeInfo )
        {
          v97 = sub_B5D990(v118.fields.current);
          goto LABEL_43;
        }
      }
      v104 = (UserEventAlloutBattleMaster_ClearSvtEquipInfo_o *)sub_B5D694(UserEventAlloutBattleMaster_ClearSvtEquipInfo_TypeInfo);
      UserEventAlloutBattleMaster_ClearSvtEquipInfo___ctor(v104, 0LL);
      v107 = (UserEventAlloutBattleMaster_o *)UserEventAlloutBattleMaster__GetDicToInt(
                                                v105,
                                                (System_Collections_Generic_Dictionary_string__object__o *)v102,
                                                (System_String_o *)StringLiteral_22772/*"svtId"*/,
                                                v106);
      if ( !v104 )
        sub_B5D69C(v107, v108);
      v104->fields.svtId = (int)v107;
      v104->fields.lc = UserEventAlloutBattleMaster__GetDicToInt(
                          v107,
                          (System_Collections_Generic_Dictionary_string__object__o *)v102,
                          (System_String_o *)StringLiteral_20456/*"lc"*/,
                          v109);
      if ( !*v88 )
        sub_B5D69C(0LL, v110);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        *v88,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v104,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtEquipInfo__Add__);
    }
    *(_DWORD *)&v116[4 * v114 + 24] = 286;
    v115 = ++v117;
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v118,
      (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
    if ( !v115 )
    {
      v114 = 0;
LABEL_33:
      v68 = v113;
      goto LABEL_34;
    }
    v68 = v113;
    v114 = v115;
    if ( *(_DWORD *)&v116[4 * v115 + 20] == 286 )
    {
      v117 = v115 - 1;
      v114 = v115 - 1;
      if ( !v113 )
        goto LABEL_47;
      goto LABEL_35;
    }
LABEL_34:
    if ( !v68 )
LABEL_47:
      sub_B5D69C(v97, v98);
LABEL_35:
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v68,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v73,
      (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtInfo__Add__);
  }
  *(_DWORD *)&v116[4 * v114 + 24] = 321;
  v111 = ++v117;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v120,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
  if ( v111 && *(_DWORD *)&v116[4 * v111 + 20] == 321 )
    v117 = v111 - 1;
  return (System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtInfo__o *)v68;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtInfo__o *__fastcall UserEventAlloutBattleMaster__GetClearDeckInfo(
        UserEventAlloutBattleMaster_o *this,
        int32_t questId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  int v45; // w1
  int v46; // w2
  __int64 v47; // x3
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x0
  UserEventAlloutBattleEntity_c *v50; // x1
  __int64 v51; // x3
  const MethodInfo_2F27198 **v52; // x22
  System_Collections_Generic_IEnumerator_T__o *v53; // x20
  int v54; // w23
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v56; // x10
  int *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v59; // x8
  unsigned __int64 v60; // x10
  int *v61; // x11
  __int64 v62; // x0
  _QWORD *v63; // x0
  __int64 v64; // x1
  __int64 v65; // x9
  Il2CppObject *value; // x19
  UserEventAlloutBattleMaster_o *v67; // x0
  const MethodInfo *v68; // x2
  __int64 v69; // x10
  System_Collections_Generic_List_object__o *v70; // x1
  System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtInfo__o *v71; // x0
  int v72; // w8
  const MethodInfo_2F27198 **v73; // x27
  int v74; // w19
  int v75; // w27
  int v76; // w8
  System_Collections_Generic_IEnumerator_T__c *v77; // x8
  unsigned __int64 v78; // x10
  int *v79; // x11
  __int64 v80; // x0
  int v81; // w9
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v82; // x19
  System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtInfo__o *v84; // [xsp+8h] [xbp-C8h]
  int v85; // [xsp+14h] [xbp-BCh]
  _WORD v86[26]; // [xsp+18h] [xbp-B8h] BYREF
  int v87; // [xsp+4Ch] [xbp-84h]
  System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl__o v88; // [xsp+50h] [xbp-80h] BYREF

  if ( (byte_42EA1E3 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__,
      questId,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__get_Current__, v18, v19, v20);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v21, v22, v23);
    sub_B5D5C4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v24, v25, v26);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v27, v28, v29);
    sub_B5D5C4(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Key__, v30, v31, v32);
    sub_B5D5C4(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Value__, v33, v34, v35);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtInfo___ctor__, v36, v37, v38);
    sub_B5D5C4(&System_Collections_Generic_List_object__TypeInfo, v39, v40, v41);
    sub_B5D5C4(&System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtInfo__TypeInfo, v42, v43, v44);
    sub_B5D5C4(&UserEventAlloutBattleEntity_TypeInfo, v45, v46, v47);
    byte_42EA1E3 = 1;
  }
  memset(&v88, 0, sizeof(v88));
  v87 = 0;
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_59;
  if ( System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
         list,
         (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) <= 0 )
    goto LABEL_54;
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
LABEL_59:
    sub_B5D69C(list, *(_QWORD *)&questId);
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2BB8C48 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  v84 = 0LL;
  v52 = (const MethodInfo_2F27198 **)&Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__;
  v53 = Enumerator;
  v54 = 0;
  do
  {
LABEL_7:
    if ( !v53 )
      goto LABEL_57;
    while ( 1 )
    {
      klass = v53->klass;
      if ( *(_WORD *)&v53->klass->_2.bitflags1 )
      {
        v56 = 0LL;
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          ++v56;
          p_offset += 4;
          if ( v56 >= *(unsigned __int16 *)&v53->klass->_2.bitflags1 )
            goto LABEL_12;
        }
        p_method = (__int64)&klass->vtable[*p_offset].method;
      }
      else
      {
LABEL_12:
        p_method = sub_AF54C0(v53, System_Collections_IEnumerator_TypeInfo, 0LL, v51);
      }
      if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
              v53,
              *(_QWORD *)(p_method + 8)) & 1) == 0 )
      {
        *(_DWORD *)&v86[2 * v54 + 20] = 166;
        v75 = ++v87;
        goto LABEL_43;
      }
      v59 = v53->klass;
      if ( *(_WORD *)&v53->klass->_2.bitflags1 )
      {
        v60 = 0LL;
        v61 = &v59->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v61 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
        {
          ++v60;
          v61 += 4;
          if ( v60 >= *(unsigned __int16 *)&v53->klass->_2.bitflags1 )
            goto LABEL_19;
        }
        v62 = (__int64)&v59->vtable[*v61].method;
      }
      else
      {
LABEL_19:
        v62 = sub_AF54C0(v53, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v51);
      }
      v63 = (_QWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v62)(
                        v53,
                        *(_QWORD *)(v62 + 8));
      if ( !v63 )
        sub_B5D69C(0LL, v64);
      v50 = UserEventAlloutBattleEntity_TypeInfo;
      v65 = *(&UserEventAlloutBattleEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*v63 + 300LL) < (unsigned int)v65
        || *(UserEventAlloutBattleEntity_c **)(*(_QWORD *)(*v63 + 200LL) + 8 * v65 - 8) != UserEventAlloutBattleEntity_TypeInfo )
      {
        Enumerator = (System_Collections_Generic_IEnumerator_T__o *)sub_B5D990(v63);
LABEL_57:
        sub_B5D69C(Enumerator, v50);
      }
      Enumerator = (System_Collections_Generic_IEnumerator_T__o *)v63[4];
      if ( !Enumerator )
        goto LABEL_7;
      System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaElementDecl___GetEnumerator(
        (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)v86,
        (System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaElementDecl__o *)Enumerator,
        *v52);
      v88 = *(System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl__o *)v86;
      while ( System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl___MoveNext(
                &v88,
                (const MethodInfo_2767D00 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__) )
      {
        value = v88.fields.current.fields.value;
        v67 = (UserEventAlloutBattleMaster_o *)System_Int32__Parse(
                                                 (System_String_o *)v88.fields.current.fields.key,
                                                 0LL);
        if ( (_DWORD)v67 == questId )
        {
          if ( value
            && (v69 = *(&System_Collections_Generic_List_object__TypeInfo->_2.bitflags2 + 1),
                *(&value->klass->_2.bitflags2 + 1) >= (unsigned int)v69) )
          {
            v70 = (System_Collections_Generic_List_object__c *)value->klass->_2.typeHierarchy[v69 - 1] == System_Collections_Generic_List_object__TypeInfo
                ? (System_Collections_Generic_List_object__o *)value
                : 0LL;
          }
          else
          {
            v70 = 0LL;
          }
          v71 = UserEventAlloutBattleMaster__ConvertClearSvtInfo(v67, v70, v68);
          if ( v71 )
          {
            *(_DWORD *)&v86[2 * v54 + 20] = 172;
            v72 = v87;
            v73 = v52;
            v84 = v71;
            goto LABEL_37;
          }
        }
      }
      *(_DWORD *)&v86[2 * v54 + 20] = 146;
      v72 = v87;
      v73 = v52;
LABEL_37:
      v74 = v72 + 1;
      v87 = v72 + 1;
      v85 = v72 + 1;
      System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl___Dispose(
        &v88,
        (const MethodInfo_2767E68 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__);
      v52 = v73;
      v75 = v85;
      v54 = 0;
      if ( !v74 )
        goto LABEL_7;
      v54 = v74 - 1;
      v76 = *(_DWORD *)&v86[2 * v74 + 18];
      if ( v76 != 146 )
        break;
      v87 = v74 - 1;
    }
    v54 = v74;
  }
  while ( v76 != 172 );
LABEL_43:
  v77 = v53->klass;
  if ( *(_WORD *)&v53->klass->_2.bitflags1 )
  {
    v78 = 0LL;
    v79 = &v77->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v79 - 1) != System_IDisposable_TypeInfo )
    {
      ++v78;
      v79 += 4;
      if ( v78 >= *(unsigned __int16 *)&v53->klass->_2.bitflags1 )
        goto LABEL_47;
    }
    v80 = (__int64)&v77->vtable[*v79].method;
  }
  else
  {
LABEL_47:
    v80 = sub_AF54C0(v53, System_IDisposable_TypeInfo, 0LL, v51);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v80)(v53, *(_QWORD *)(v80 + 8));
  if ( !v75 )
    goto LABEL_54;
  v81 = *(_DWORD *)&v86[2 * v75 + 18];
  if ( v81 == 166 )
  {
    v87 = v75 - 1;
    goto LABEL_54;
  }
  if ( v81 != 172 )
  {
LABEL_54:
    v82 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtInfo__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v82,
      (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtInfo___ctor__);
    return (System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtInfo__o *)v82;
  }
  v82 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v84;
  v87 = v75 - 1;
  return (System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtInfo__o *)v82;
}


int32_t __fastcall UserEventAlloutBattleMaster__GetDicToInt(
        UserEventAlloutBattleMaster_o *this,
        System_Collections_Generic_Dictionary_string__object__o *dic,
        System_String_o *key,
        const MethodInfo *method)
{
  System_String_o *v6; // x0
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42EA1E5 & 1) == 0 )
  {
    this = (UserEventAlloutBattleMaster_o *)sub_B5D5C4(
                                              &Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__,
                                              (_DWORD)dic,
                                              (_DWORD)key,
                                              method);
    byte_42EA1E5 = 1;
  }
  value = 0LL;
  if ( !dic )
    goto LABEL_8;
  if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
         (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)dic,
         (System_Xml_XmlQualifiedName_o *)key,
         &value,
         (const MethodInfo_2F289BC *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
    this = (UserEventAlloutBattleMaster_o *)value;
    if ( value )
    {
      v6 = (System_String_o *)((__int64 (__fastcall *)(System_Xml_Schema_XmlSchemaObject_o *, Il2CppMethodPointer))value->klass->vtable._3_ToString.method)(
                                value,
                                value->klass->vtable._4_OnAdd.methodPtr);
      return System_Int32__Parse(v6, 0LL);
    }
LABEL_8:
    sub_B5D69C(this, dic);
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
UserEventAlloutBattleEntity_o *__fastcall UserEventAlloutBattleMaster__GetEntity(
        UserEventAlloutBattleMaster_o *this,
        int64_t userId,
        int32_t eventId,
        int32_t alloutBattleId,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_42EA1E0 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_UserEventAlloutBattleMaster__UserEventAlloutBattleEntity__string__GetEntity__,
      userId,
      eventId,
      *(_QWORD *)&alloutBattleId);
    byte_42EA1E0 = 1;
  }
  PK = UserEventAlloutBattleEntity__CreatePK(userId, eventId, alloutBattleId, *(const MethodInfo **)&alloutBattleId);
  return (UserEventAlloutBattleEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                            (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                            PK,
                                            (const MethodInfo_23FB260 *)Method_DataMasterBase_UserEventAlloutBattleMaster__UserEventAlloutBattleEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall UserEventAlloutBattleMaster__IsAlreadyUsedServant(
        UserEventAlloutBattleMaster_o *this,
        int32_t svtId,
        int32_t eventId,
        int32_t alloutBattleId,
        const MethodInfo *method)
{
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  int64_t UserId; // x0
  const MethodInfo *v46; // x4
  UserEventAlloutBattleEntity_o *Entity; // x0
  __int64 v48; // x1
  System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaElementDecl__o *clearDeckInfoDic; // x0
  int v50; // w22
  __int64 v51; // x0
  __int64 v52; // x1
  __int64 v53; // x11
  __int64 v54; // x11
  Il2CppObject *value; // x0
  _BOOL8 v56; // x0
  const MethodInfo *v57; // x3
  __int64 v58; // x10
  int v59; // w23
  int v60; // w8
  int v61; // w9
  bool v62; // w9
  char v64; // [xsp+4h] [xbp-DCh]
  _WORD v65[26]; // [xsp+8h] [xbp-D8h] BYREF
  int v66; // [xsp+3Ch] [xbp-A4h]
  System_Collections_Generic_List_Enumerator_T__o v67; // [xsp+40h] [xbp-A0h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl__o v68; // [xsp+60h] [xbp-80h] BYREF

  if ( (byte_42EA1E2 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__,
      svtId,
      eventId,
      *(_QWORD *)&alloutBattleId);
    sub_B5D5C4(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_object__Dispose__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_object__MoveNext__, v21, v22, v23);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__get_Current__, v24, v25, v26);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_object__get_Current__, v27, v28, v29);
    sub_B5D5C4(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Value__, v30, v31, v32);
    sub_B5D5C4(&Method_System_Collections_Generic_List_object__GetEnumerator__, v33, v34, v35);
    sub_B5D5C4(&System_Collections_Generic_List_object__TypeInfo, v36, v37, v38);
    sub_B5D5C4(&NetworkManager_TypeInfo, v39, v40, v41);
    sub_B5D5C4(&StringLiteral_22772/*"svtId"*/, v42, v43, v44);
    byte_42EA1E2 = 1;
  }
  memset(&v68, 0, sizeof(v68));
  memset(&v67, 0, sizeof(v67));
  v66 = 0;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  Entity = UserEventAlloutBattleMaster__GetEntity(this, UserId, eventId, alloutBattleId, v46);
  if ( Entity )
  {
    clearDeckInfoDic = (System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaElementDecl__o *)Entity->fields.clearDeckInfoDic;
    if ( !clearDeckInfoDic )
      sub_B5D69C(0LL, v48);
    System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaElementDecl___GetEnumerator(
      (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)v65,
      clearDeckInfoDic,
      (const MethodInfo_2F27198 *)Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__);
    v64 = 0;
    v68 = *(System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl__o *)v65;
    v50 = 0;
    while ( 1 )
    {
      v51 = System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl___MoveNext(
              &v68,
              (const MethodInfo_2767D00 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__);
      if ( (v51 & 1) == 0 )
        break;
      if ( !v68.fields.current.fields.value
        || (v53 = *(&System_Collections_Generic_List_object__TypeInfo->_2.bitflags2 + 1),
            *(&v68.fields.current.fields.value->klass->_2.bitflags2 + 1) < (unsigned int)v53)
        || (System_Collections_Generic_List_object__c *)v68.fields.current.fields.value->klass->_2.typeHierarchy[v53 - 1] != System_Collections_Generic_List_object__TypeInfo )
      {
LABEL_41:
        sub_B5D69C(v51, v52);
      }
      v54 = *(&System_Collections_Generic_List_object__TypeInfo->_2.bitflags2 + 1);
      if ( *(&v68.fields.current.fields.value->klass->_2.bitflags2 + 1) >= (unsigned int)v54 )
      {
        if ( (System_Collections_Generic_List_object__c *)v68.fields.current.fields.value->klass->_2.typeHierarchy[v54 - 1] == System_Collections_Generic_List_object__TypeInfo )
          value = v68.fields.current.fields.value;
        else
          value = 0LL;
      }
      else
      {
        value = 0LL;
      }
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)v65,
        (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)value,
        (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_object__GetEnumerator__);
      v67 = *(System_Collections_Generic_List_Enumerator_T__o *)v65;
      while ( 1 )
      {
        v56 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v67,
                (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_object__MoveNext__);
        if ( !v56 )
          break;
        if ( v67.fields.current )
        {
          v58 = *(&System_Collections_Generic_Dictionary_string__object__TypeInfo->_2.bitflags2 + 1);
          if ( *(&v67.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v58
            || (System_Collections_Generic_Dictionary_string__object__c *)v67.fields.current->klass->_2.typeHierarchy[v58 - 1] != System_Collections_Generic_Dictionary_string__object__TypeInfo )
          {
            v51 = sub_B5D990(v67.fields.current);
            goto LABEL_41;
          }
        }
        if ( UserEventAlloutBattleMaster__GetDicToInt(
               (UserEventAlloutBattleMaster_o *)v56,
               (System_Collections_Generic_Dictionary_string__object__o *)v67.fields.current,
               (System_String_o *)StringLiteral_22772/*"svtId"*/,
               v57) == svtId )
        {
          *(_DWORD *)&v65[2 * v50 + 20] = 148;
          v59 = ++v66;
          v64 = 1;
          goto LABEL_26;
        }
      }
      *(_DWORD *)&v65[2 * v50 + 20] = 121;
      v59 = ++v66;
LABEL_26:
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v67,
        (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
      v50 = 0;
      if ( v59 )
      {
        v50 = v59 - 1;
        v60 = *(_DWORD *)&v65[2 * v59 + 18];
        if ( v60 == 121 )
        {
          v66 = v59 - 1;
        }
        else
        {
          v50 = v59;
          if ( v60 == 148 )
            goto LABEL_33;
        }
      }
    }
    *(_DWORD *)&v65[2 * v50 + 20] = 146;
    v59 = ++v66;
LABEL_33:
    System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl___Dispose(
      &v68,
      (const MethodInfo_2767E68 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__);
    if ( v59 )
    {
      v61 = *(_DWORD *)&v65[2 * v59 + 18];
      if ( v61 == 146 )
      {
        v62 = 0;
        goto LABEL_39;
      }
      if ( v61 == 148 )
      {
        v62 = v64;
LABEL_39:
        v66 = v59 - 1;
        return v62;
      }
    }
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall UserEventAlloutBattleMaster__TryGetEntity(
        UserEventAlloutBattleMaster_o *this,
        UserEventAlloutBattleEntity_o **entity,
        int64_t userId,
        int32_t eventId,
        int32_t alloutBattleId,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_42EA1E1 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_UserEventAlloutBattleMaster__UserEventAlloutBattleEntity__string__TryGetEntity__,
      (_DWORD)entity,
      userId,
      *(_QWORD *)&eventId);
    byte_42EA1E1 = 1;
  }
  PK = UserEventAlloutBattleEntity__CreatePK(userId, eventId, alloutBattleId, *(const MethodInfo **)&eventId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23FB2B8 *)Method_DataMasterBase_UserEventAlloutBattleMaster__UserEventAlloutBattleEntity__string__TryGetEntity__);
}


void __fastcall UserEventAlloutBattleMaster_ClearSvtEquipInfo___ctor(
        UserEventAlloutBattleMaster_ClearSvtEquipInfo_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall UserEventAlloutBattleMaster_ClearSvtInfo___ctor(
        UserEventAlloutBattleMaster_ClearSvtInfo_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}