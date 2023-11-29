void __fastcall UserEventAlloutBattleMaster___ctor(UserEventAlloutBattleMaster_o *this, const MethodInfo *method)
{
  if ( (byte_40FAB39 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_UserEventAlloutBattleMaster__UserEventAlloutBattleEntity__string___ctor__, method);
    byte_40FAB39 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    405,
    (const MethodInfo_266F73C *)Method_DataMasterBase_UserEventAlloutBattleMaster__UserEventAlloutBattleEntity__string___ctor__);
}


System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtInfo__o *__fastcall UserEventAlloutBattleMaster__ConvertClearSvtInfo(
        UserEventAlloutBattleMaster_o *this,
        System_Collections_Generic_List_object__o *deckList,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
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
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v27; // x21
  System_Collections_Generic_Dictionary_string__object__c *v28; // x1
  __int64 v29; // x2
  __int64 v30; // x3
  __int64 v31; // x4
  Il2CppObject *current; // x22
  __int64 v33; // x9
  __int64 v34; // x20
  UserEventAlloutBattleMaster_o *v35; // x0
  const MethodInfo *v36; // x3
  UserEventAlloutBattleMaster_o *DicToInt; // x0
  const MethodInfo *v38; // x3
  UserEventAlloutBattleMaster_o *v39; // x0
  const MethodInfo *v40; // x3
  UserEventAlloutBattleMaster_o *v41; // x0
  const MethodInfo *v42; // x3
  UserEventAlloutBattleMaster_o *v43; // x0
  const MethodInfo *v44; // x3
  UserEventAlloutBattleMaster_o *v45; // x0
  const MethodInfo *v46; // x3
  __int64 v47; // x1
  __int64 v48; // x2
  __int64 v49; // x3
  __int64 v50; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v51; // x23
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o **v52; // x21
  System_String_array **v53; // x2
  System_String_array **v54; // x3
  System_Boolean_array **v55; // x4
  System_Int32_array **v56; // x5
  System_Int32_array *v57; // x6
  System_Int32_array *v58; // x7
  __int64 v59; // x11
  __int64 v60; // x11
  System_Xml_Schema_XmlSchemaObject_o *v61; // x0
  System_Collections_Generic_Dictionary_string__object__c *v62; // x1
  __int64 v63; // x2
  __int64 v64; // x3
  __int64 v65; // x4
  Il2CppObject *v66; // x22
  __int64 v67; // x9
  UserEventAlloutBattleMaster_ClearSvtEquipInfo_o *v68; // x23
  UserEventAlloutBattleMaster_o *v69; // x0
  const MethodInfo *v70; // x3
  UserEventAlloutBattleMaster_o *v71; // x0
  const MethodInfo *v72; // x3
  int v73; // w19
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v75; // [xsp+8h] [xbp-C8h]
  int v76; // [xsp+10h] [xbp-C0h]
  int v77; // [xsp+14h] [xbp-BCh]
  _BYTE v78[32]; // [xsp+18h] [xbp-B8h] BYREF
  int v79; // [xsp+38h] [xbp-98h]
  System_Collections_Generic_List_Enumerator_T__o v80; // [xsp+40h] [xbp-90h] BYREF
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+58h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v82; // [xsp+60h] [xbp-70h] BYREF

  if ( (byte_40FAB3E & 1) == 0 )
  {
    sub_B16FFC(&UserEventAlloutBattleMaster_ClearSvtEquipInfo_TypeInfo, deckList);
    sub_B16FFC(&UserEventAlloutBattleMaster_ClearSvtInfo_TypeInfo, v6);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, v7);
    sub_B16FFC(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_object__Dispose__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_object__MoveNext__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_object__get_Current__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtEquipInfo__Add__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtInfo__Add__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_object__GetEnumerator__, v14);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtEquipInfo___ctor__, v15);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtInfo___ctor__, v16);
    sub_B16FFC(&System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtEquipInfo__TypeInfo, v17);
    sub_B16FFC(&System_Collections_Generic_List_object__TypeInfo, v18);
    sub_B16FFC(&System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtInfo__TypeInfo, v19);
    sub_B16FFC(&StringLiteral_20117, v20);
    sub_B16FFC(&StringLiteral_18080, v21);
    sub_B16FFC(&StringLiteral_22373, v22);
    sub_B16FFC(&StringLiteral_22376, v23);
    sub_B16FFC(&StringLiteral_19307, v24);
    sub_B16FFC(&StringLiteral_19337, v25);
    sub_B16FFC(&StringLiteral_20250, v26);
    byte_40FAB3E = 1;
  }
  memset(&v82, 0, sizeof(v82));
  value = 0LL;
  memset(&v80, 0, sizeof(v80));
  v79 = 0;
  v27 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtInfo__TypeInfo,
                                                                                                  deckList,
                                                                                                  method,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v27,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtInfo___ctor__);
  if ( !deckList )
    sub_B170D4();
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)v78,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)deckList,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_object__GetEnumerator__);
  v76 = 0;
  v82 = *(System_Collections_Generic_List_Enumerator_T__o *)v78;
  v75 = v27;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v82,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_object__MoveNext__) )
  {
    current = v82.fields.current;
    if ( v82.fields.current )
    {
      v28 = System_Collections_Generic_Dictionary_string__object__TypeInfo;
      v33 = *(&System_Collections_Generic_Dictionary_string__object__TypeInfo->_2.bitflags2 + 1);
      if ( *(&v82.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v33
        || (System_Collections_Generic_Dictionary_string__object__c *)v82.fields.current->klass->_2.typeHierarchy[v33 - 1] != System_Collections_Generic_Dictionary_string__object__TypeInfo )
      {
        sub_B173C8(v82.fields.current);
LABEL_45:
        sub_B170D4();
      }
    }
    v34 = sub_B170CC(UserEventAlloutBattleMaster_ClearSvtInfo_TypeInfo, v28, v29, v30, v31);
    UserEventAlloutBattleMaster_ClearSvtInfo___ctor((UserEventAlloutBattleMaster_ClearSvtInfo_o *)v34, 0LL);
    DicToInt = (UserEventAlloutBattleMaster_o *)UserEventAlloutBattleMaster__GetDicToInt(
                                                  v35,
                                                  (System_Collections_Generic_Dictionary_string__object__o *)current,
                                                  (System_String_o *)StringLiteral_19307,
                                                  v36);
    if ( !v34 )
      sub_B170D4();
    *(_DWORD *)(v34 + 16) = (_DWORD)DicToInt;
    v39 = (UserEventAlloutBattleMaster_o *)UserEventAlloutBattleMaster__GetDicToInt(
                                             DicToInt,
                                             (System_Collections_Generic_Dictionary_string__object__o *)current,
                                             (System_String_o *)StringLiteral_22376,
                                             v38);
    *(_DWORD *)(v34 + 20) = (_DWORD)v39;
    v41 = (UserEventAlloutBattleMaster_o *)UserEventAlloutBattleMaster__GetDicToInt(
                                             v39,
                                             (System_Collections_Generic_Dictionary_string__object__o *)current,
                                             (System_String_o *)StringLiteral_20250,
                                             v40);
    *(_DWORD *)(v34 + 24) = (_DWORD)v41;
    v43 = (UserEventAlloutBattleMaster_o *)UserEventAlloutBattleMaster__GetDicToInt(
                                             v41,
                                             (System_Collections_Generic_Dictionary_string__object__o *)current,
                                             (System_String_o *)StringLiteral_20117,
                                             v42);
    *(_DWORD *)(v34 + 28) = (_DWORD)v43;
    v45 = (UserEventAlloutBattleMaster_o *)UserEventAlloutBattleMaster__GetDicToInt(
                                             v43,
                                             (System_Collections_Generic_Dictionary_string__object__o *)current,
                                             (System_String_o *)StringLiteral_19337,
                                             v44);
    *(_DWORD *)(v34 + 32) = (_DWORD)v45;
    *(_DWORD *)(v34 + 36) = UserEventAlloutBattleMaster__GetDicToInt(
                              v45,
                              (System_Collections_Generic_Dictionary_string__object__o *)current,
                              (System_String_o *)StringLiteral_18080,
                              v46);
    v51 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                    System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtEquipInfo__TypeInfo,
                                                                                                    v47,
                                                                                                    v48,
                                                                                                    v49,
                                                                                                    v50);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v51,
      (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtEquipInfo___ctor__);
    *(_QWORD *)(v34 + 40) = v51;
    v52 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o **)(v34 + 40);
    sub_B16F98((BattleServantConfConponent_o *)(v34 + 40), (System_Int32_array **)v51, v53, v54, v55, v56, v57, v58);
    if ( !current )
      goto LABEL_45;
    if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
            (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)current,
            (System_Xml_XmlQualifiedName_o *)StringLiteral_22373,
            &value,
            (const MethodInfo_2DA5A18 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
      goto LABEL_33;
    if ( !value
      || (v59 = *(&System_Collections_Generic_List_object__TypeInfo->_2.bitflags2 + 1),
          *(&value->klass->_2.bitflags2 + 1) < (unsigned int)v59)
      || (System_Collections_Generic_List_object__c *)value->klass->_2.typeHierarchy[v59 - 1] != System_Collections_Generic_List_object__TypeInfo )
    {
LABEL_43:
      sub_B170D4();
    }
    v60 = *(&System_Collections_Generic_List_object__TypeInfo->_2.bitflags2 + 1);
    if ( *(&value->klass->_2.bitflags2 + 1) >= (unsigned int)v60 )
    {
      if ( (System_Collections_Generic_List_object__c *)value->klass->_2.typeHierarchy[v60 - 1] == System_Collections_Generic_List_object__TypeInfo )
        v61 = value;
      else
        v61 = 0LL;
    }
    else
    {
      v61 = 0LL;
    }
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)v78,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v61,
      (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_object__GetEnumerator__);
    v80 = *(System_Collections_Generic_List_Enumerator_T__o *)v78;
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v80,
              (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_object__MoveNext__) )
    {
      v66 = v80.fields.current;
      if ( v80.fields.current )
      {
        v62 = System_Collections_Generic_Dictionary_string__object__TypeInfo;
        v67 = *(&System_Collections_Generic_Dictionary_string__object__TypeInfo->_2.bitflags2 + 1);
        if ( *(&v80.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v67
          || (System_Collections_Generic_Dictionary_string__object__c *)v80.fields.current->klass->_2.typeHierarchy[v67 - 1] != System_Collections_Generic_Dictionary_string__object__TypeInfo )
        {
          sub_B173C8(v80.fields.current);
          goto LABEL_43;
        }
      }
      v68 = (UserEventAlloutBattleMaster_ClearSvtEquipInfo_o *)sub_B170CC(
                                                                 UserEventAlloutBattleMaster_ClearSvtEquipInfo_TypeInfo,
                                                                 v62,
                                                                 v63,
                                                                 v64,
                                                                 v65);
      UserEventAlloutBattleMaster_ClearSvtEquipInfo___ctor(v68, 0LL);
      v71 = (UserEventAlloutBattleMaster_o *)UserEventAlloutBattleMaster__GetDicToInt(
                                               v69,
                                               (System_Collections_Generic_Dictionary_string__object__o *)v66,
                                               (System_String_o *)StringLiteral_22376,
                                               v70);
      if ( !v68 )
        sub_B170D4();
      v68->fields.svtId = (int)v71;
      v68->fields.lc = UserEventAlloutBattleMaster__GetDicToInt(
                         v71,
                         (System_Collections_Generic_Dictionary_string__object__o *)v66,
                         (System_String_o *)StringLiteral_20117,
                         v72);
      if ( !*v52 )
        sub_B170D4();
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        *v52,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v68,
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtEquipInfo__Add__);
    }
    *(_DWORD *)&v78[4 * v76 + 24] = 286;
    v77 = ++v79;
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v80,
      (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
    if ( !v77 )
    {
      v76 = 0;
LABEL_33:
      v27 = v75;
      goto LABEL_34;
    }
    v27 = v75;
    v76 = v77;
    if ( *(_DWORD *)&v78[4 * v77 + 20] == 286 )
    {
      v79 = v77 - 1;
      v76 = v77 - 1;
      if ( !v75 )
        goto LABEL_47;
      goto LABEL_35;
    }
LABEL_34:
    if ( !v27 )
LABEL_47:
      sub_B170D4();
LABEL_35:
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v27,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v34,
      (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtInfo__Add__);
  }
  *(_DWORD *)&v78[4 * v76 + 24] = 321;
  v73 = ++v79;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v82,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
  if ( v73 && *(_DWORD *)&v78[4 * v73 + 20] == 321 )
    v79 = v73 - 1;
  return (System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtInfo__o *)v27;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtInfo__o *__fastcall UserEventAlloutBattleMaster__GetClearDeckInfo(
        UserEventAlloutBattleMaster_o *this,
        int32_t questId,
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
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  __int64 v23; // x4
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v24; // x0
  const MethodInfo_2DA41F4 **v25; // x22
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  int v27; // w23
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v29; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v32; // x8
  unsigned __int64 v33; // x10
  int32_t *v34; // x11
  __int64 v35; // x0
  _QWORD *v36; // x0
  __int64 v37; // x9
  System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaElementDecl__o *v38; // x0
  Il2CppObject *value; // x19
  UserEventAlloutBattleMaster_o *v40; // x0
  const MethodInfo *v41; // x2
  __int64 v42; // x10
  System_Collections_Generic_List_object__o *v43; // x1
  System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtInfo__o *v44; // x0
  int v45; // w8
  const MethodInfo_2DA41F4 **v46; // x27
  int v47; // w19
  int v48; // w27
  int v49; // w8
  System_Collections_Generic_IEnumerator_T__c *v50; // x8
  unsigned __int64 v51; // x10
  int32_t *v52; // x11
  __int64 v53; // x0
  int v54; // w9
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v55; // x19
  System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtInfo__o *v57; // [xsp+8h] [xbp-C8h]
  int v58; // [xsp+14h] [xbp-BCh]
  _WORD v59[26]; // [xsp+18h] [xbp-B8h] BYREF
  int v60; // [xsp+4Ch] [xbp-84h]
  System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl__o v61; // [xsp+50h] [xbp-80h] BYREF

  if ( (byte_40FAB3D & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, *(_QWORD *)&questId);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__get_Current__, v9);
    sub_B16FFC(&System_IDisposable_TypeInfo, v10);
    sub_B16FFC(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v11);
    sub_B16FFC(&System_Collections_IEnumerator_TypeInfo, v12);
    sub_B16FFC(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Key__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Value__, v14);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtInfo___ctor__, v15);
    sub_B16FFC(&System_Collections_Generic_List_object__TypeInfo, v16);
    sub_B16FFC(&System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtInfo__TypeInfo, v17);
    sub_B16FFC(&UserEventAlloutBattleEntity_TypeInfo, v18);
    byte_40FAB3D = 1;
  }
  memset(&v61, 0, sizeof(v61));
  v60 = 0;
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_59;
  if ( System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
         list,
         (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) <= 0 )
    goto LABEL_54;
  v24 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !v24 )
LABEL_59:
    sub_B170D4();
  v57 = 0LL;
  v25 = (const MethodInfo_2DA41F4 **)&Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 v24,
                 (const MethodInfo_290E508 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  v27 = 0;
  do
  {
LABEL_7:
    if ( !Enumerator )
      goto LABEL_57;
    while ( 1 )
    {
      klass = Enumerator->klass;
      if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
      {
        v29 = 0LL;
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          ++v29;
          p_offset += 4;
          if ( v29 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
            goto LABEL_12;
        }
        p_method = (__int64)&klass->vtable[*p_offset].method;
      }
      else
      {
LABEL_12:
        p_method = sub_AAFEF8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
      }
      if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
              Enumerator,
              *(_QWORD *)(p_method + 8)) & 1) == 0 )
      {
        *(_DWORD *)&v59[2 * v27 + 20] = 166;
        v48 = ++v60;
        goto LABEL_43;
      }
      v32 = Enumerator->klass;
      if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
      {
        v33 = 0LL;
        v34 = &v32->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v34 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
        {
          ++v33;
          v34 += 4;
          if ( v33 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
            goto LABEL_19;
        }
        v35 = (__int64)&v32->vtable[*v34].method;
      }
      else
      {
LABEL_19:
        v35 = sub_AAFEF8(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
      }
      v36 = (_QWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v35)(
                        Enumerator,
                        *(_QWORD *)(v35 + 8));
      if ( !v36 )
        sub_B170D4();
      v37 = *(&UserEventAlloutBattleEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*v36 + 300LL) < (unsigned int)v37
        || *(UserEventAlloutBattleEntity_c **)(*(_QWORD *)(*v36 + 200LL) + 8 * v37 - 8) != UserEventAlloutBattleEntity_TypeInfo )
      {
        sub_B173C8(v36);
LABEL_57:
        sub_B170D4();
      }
      v38 = (System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaElementDecl__o *)v36[4];
      if ( !v38 )
        goto LABEL_7;
      System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaElementDecl___GetEnumerator(
        (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)v59,
        v38,
        *v25);
      v61 = *(System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl__o *)v59;
      while ( System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl___MoveNext(
                &v61,
                (const MethodInfo_26BCF58 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__) )
      {
        value = v61.fields.current.fields.value;
        v40 = (UserEventAlloutBattleMaster_o *)System_Int32__Parse(
                                                 (System_String_o *)v61.fields.current.fields.key,
                                                 0LL);
        if ( (_DWORD)v40 == questId )
        {
          if ( value
            && (v42 = *(&System_Collections_Generic_List_object__TypeInfo->_2.bitflags2 + 1),
                *(&value->klass->_2.bitflags2 + 1) >= (unsigned int)v42) )
          {
            v43 = (System_Collections_Generic_List_object__c *)value->klass->_2.typeHierarchy[v42 - 1] == System_Collections_Generic_List_object__TypeInfo
                ? (System_Collections_Generic_List_object__o *)value
                : 0LL;
          }
          else
          {
            v43 = 0LL;
          }
          v44 = UserEventAlloutBattleMaster__ConvertClearSvtInfo(v40, v43, v41);
          if ( v44 )
          {
            *(_DWORD *)&v59[2 * v27 + 20] = 172;
            v45 = v60;
            v46 = v25;
            v57 = v44;
            goto LABEL_37;
          }
        }
      }
      *(_DWORD *)&v59[2 * v27 + 20] = 146;
      v45 = v60;
      v46 = v25;
LABEL_37:
      v47 = v45 + 1;
      v60 = v45 + 1;
      v58 = v45 + 1;
      System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl___Dispose(
        &v61,
        (const MethodInfo_26BD0C0 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__);
      v25 = v46;
      v48 = v58;
      v27 = 0;
      if ( !v47 )
        goto LABEL_7;
      v27 = v47 - 1;
      v49 = *(_DWORD *)&v59[2 * v47 + 18];
      if ( v49 != 146 )
        break;
      v60 = v47 - 1;
    }
    v27 = v47;
  }
  while ( v49 != 172 );
LABEL_43:
  v50 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v51 = 0LL;
    v52 = &v50->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v52 - 1) != System_IDisposable_TypeInfo )
    {
      ++v51;
      v52 += 4;
      if ( v51 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_47;
    }
    v53 = (__int64)&v50->vtable[*v52].method;
  }
  else
  {
LABEL_47:
    v53 = sub_AAFEF8(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v53)(Enumerator, *(_QWORD *)(v53 + 8));
  if ( !v48 )
    goto LABEL_54;
  v54 = *(_DWORD *)&v59[2 * v48 + 18];
  if ( v54 == 166 )
  {
    v60 = v48 - 1;
    goto LABEL_54;
  }
  if ( v54 != 172 )
  {
LABEL_54:
    v55 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                    System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtInfo__TypeInfo,
                                                                                                    v20,
                                                                                                    v21,
                                                                                                    v22,
                                                                                                    v23);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v55,
      (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtInfo___ctor__);
    return (System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtInfo__o *)v55;
  }
  v55 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v57;
  v60 = v48 - 1;
  return (System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtInfo__o *)v55;
}


int32_t __fastcall UserEventAlloutBattleMaster__GetDicToInt(
        UserEventAlloutBattleMaster_o *this,
        System_Collections_Generic_Dictionary_string__object__o *dic,
        System_String_o *key,
        const MethodInfo *method)
{
  System_String_o *v6; // x0
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_40FAB3F & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, dic);
    byte_40FAB3F = 1;
  }
  value = 0LL;
  if ( !dic )
    goto LABEL_8;
  if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
         (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)dic,
         (System_Xml_XmlQualifiedName_o *)key,
         &value,
         (const MethodInfo_2DA5A18 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
    if ( value )
    {
      v6 = (System_String_o *)((__int64 (__fastcall *)(System_Xml_Schema_XmlSchemaObject_o *, Il2CppMethodPointer))value->klass->vtable._3_ToString.method)(
                                value,
                                value->klass->vtable._4_OnAdd.methodPtr);
      return System_Int32__Parse(v6, 0LL);
    }
LABEL_8:
    sub_B170D4();
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

  if ( (byte_40FAB3A & 1) == 0 )
  {
    sub_B16FFC(
      &Method_DataMasterBase_UserEventAlloutBattleMaster__UserEventAlloutBattleEntity__string__GetEntity__,
      userId);
    byte_40FAB3A = 1;
  }
  PK = UserEventAlloutBattleEntity__CreatePK(userId, eventId, alloutBattleId, *(const MethodInfo **)&alloutBattleId);
  return (UserEventAlloutBattleEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                            (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                            PK,
                                            (const MethodInfo_266F7D8 *)Method_DataMasterBase_UserEventAlloutBattleMaster__UserEventAlloutBattleEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall UserEventAlloutBattleMaster__IsAlreadyUsedServant(
        UserEventAlloutBattleMaster_o *this,
        int32_t svtId,
        int32_t eventId,
        int32_t alloutBattleId,
        const MethodInfo *method)
{
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
  int64_t UserId; // x0
  const MethodInfo *v22; // x4
  UserEventAlloutBattleEntity_o *Entity; // x0
  System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaElementDecl__o *clearDeckInfoDic; // x0
  int v25; // w22
  __int64 v26; // x11
  __int64 v27; // x11
  Il2CppObject *value; // x0
  _BOOL8 v29; // x0
  const MethodInfo *v30; // x3
  __int64 v31; // x10
  int v32; // w23
  int v33; // w8
  int v34; // w9
  bool v35; // w9
  char v37; // [xsp+4h] [xbp-DCh]
  _WORD v38[26]; // [xsp+8h] [xbp-D8h] BYREF
  int v39; // [xsp+3Ch] [xbp-A4h]
  System_Collections_Generic_List_Enumerator_T__o v40; // [xsp+40h] [xbp-A0h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl__o v41; // [xsp+60h] [xbp-80h] BYREF

  if ( (byte_40FAB3C & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__, *(_QWORD *)&svtId);
    sub_B16FFC(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v9);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_object__Dispose__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_object__MoveNext__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__get_Current__, v14);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_object__get_Current__, v15);
    sub_B16FFC(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Value__, v16);
    sub_B16FFC(&Method_System_Collections_Generic_List_object__GetEnumerator__, v17);
    sub_B16FFC(&System_Collections_Generic_List_object__TypeInfo, v18);
    sub_B16FFC(&NetworkManager_TypeInfo, v19);
    sub_B16FFC(&StringLiteral_22376, v20);
    byte_40FAB3C = 1;
  }
  memset(&v41, 0, sizeof(v41));
  memset(&v40, 0, sizeof(v40));
  v39 = 0;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  Entity = UserEventAlloutBattleMaster__GetEntity(this, UserId, eventId, alloutBattleId, v22);
  if ( Entity )
  {
    clearDeckInfoDic = (System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaElementDecl__o *)Entity->fields.clearDeckInfoDic;
    if ( !clearDeckInfoDic )
      sub_B170D4();
    System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaElementDecl___GetEnumerator(
      (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)v38,
      clearDeckInfoDic,
      (const MethodInfo_2DA41F4 *)Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__);
    v37 = 0;
    v41 = *(System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl__o *)v38;
    v25 = 0;
    while ( System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl___MoveNext(
              &v41,
              (const MethodInfo_26BCF58 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__) )
    {
      if ( !v41.fields.current.fields.value
        || (v26 = *(&System_Collections_Generic_List_object__TypeInfo->_2.bitflags2 + 1),
            *(&v41.fields.current.fields.value->klass->_2.bitflags2 + 1) < (unsigned int)v26)
        || (System_Collections_Generic_List_object__c *)v41.fields.current.fields.value->klass->_2.typeHierarchy[v26 - 1] != System_Collections_Generic_List_object__TypeInfo )
      {
LABEL_41:
        sub_B170D4();
      }
      v27 = *(&System_Collections_Generic_List_object__TypeInfo->_2.bitflags2 + 1);
      if ( *(&v41.fields.current.fields.value->klass->_2.bitflags2 + 1) >= (unsigned int)v27 )
      {
        if ( (System_Collections_Generic_List_object__c *)v41.fields.current.fields.value->klass->_2.typeHierarchy[v27 - 1] == System_Collections_Generic_List_object__TypeInfo )
          value = v41.fields.current.fields.value;
        else
          value = 0LL;
      }
      else
      {
        value = 0LL;
      }
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)v38,
        (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)value,
        (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_object__GetEnumerator__);
      v40 = *(System_Collections_Generic_List_Enumerator_T__o *)v38;
      while ( 1 )
      {
        v29 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v40,
                (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_object__MoveNext__);
        if ( !v29 )
          break;
        if ( v40.fields.current )
        {
          v31 = *(&System_Collections_Generic_Dictionary_string__object__TypeInfo->_2.bitflags2 + 1);
          if ( *(&v40.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v31
            || (System_Collections_Generic_Dictionary_string__object__c *)v40.fields.current->klass->_2.typeHierarchy[v31 - 1] != System_Collections_Generic_Dictionary_string__object__TypeInfo )
          {
            sub_B173C8(v40.fields.current);
            goto LABEL_41;
          }
        }
        if ( UserEventAlloutBattleMaster__GetDicToInt(
               (UserEventAlloutBattleMaster_o *)v29,
               (System_Collections_Generic_Dictionary_string__object__o *)v40.fields.current,
               (System_String_o *)StringLiteral_22376,
               v30) == svtId )
        {
          *(_DWORD *)&v38[2 * v25 + 20] = 148;
          v32 = ++v39;
          v37 = 1;
          goto LABEL_26;
        }
      }
      *(_DWORD *)&v38[2 * v25 + 20] = 121;
      v32 = ++v39;
LABEL_26:
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v40,
        (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
      v25 = 0;
      if ( v32 )
      {
        v25 = v32 - 1;
        v33 = *(_DWORD *)&v38[2 * v32 + 18];
        if ( v33 == 121 )
        {
          v39 = v32 - 1;
        }
        else
        {
          v25 = v32;
          if ( v33 == 148 )
            goto LABEL_33;
        }
      }
    }
    *(_DWORD *)&v38[2 * v25 + 20] = 146;
    v32 = ++v39;
LABEL_33:
    System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl___Dispose(
      &v41,
      (const MethodInfo_26BD0C0 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__);
    if ( v32 )
    {
      v34 = *(_DWORD *)&v38[2 * v32 + 18];
      if ( v34 == 146 )
      {
        v35 = 0;
        goto LABEL_39;
      }
      if ( v34 == 148 )
      {
        v35 = v37;
LABEL_39:
        v39 = v32 - 1;
        return v35;
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

  if ( (byte_40FAB3B & 1) == 0 )
  {
    sub_B16FFC(
      &Method_DataMasterBase_UserEventAlloutBattleMaster__UserEventAlloutBattleEntity__string__TryGetEntity__,
      entity);
    byte_40FAB3B = 1;
  }
  PK = UserEventAlloutBattleEntity__CreatePK(userId, eventId, alloutBattleId, *(const MethodInfo **)&eventId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_266F830 *)Method_DataMasterBase_UserEventAlloutBattleMaster__UserEventAlloutBattleEntity__string__TryGetEntity__);
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