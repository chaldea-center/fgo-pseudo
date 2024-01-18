void __fastcall UserEventAlloutBattleMaster___ctor(UserEventAlloutBattleMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4188B17 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_UserEventAlloutBattleMaster__UserEventAlloutBattleEntity__string___ctor__, method);
    byte_4188B17 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    405,
    (const MethodInfo_24E4484 *)Method_DataMasterBase_UserEventAlloutBattleMaster__UserEventAlloutBattleEntity__string___ctor__);
}


System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtInfo__o *__fastcall UserEventAlloutBattleMaster__ConvertClearSvtInfo(
        UserEventAlloutBattleMaster_o *this,
        System_Collections_Generic_List_object__o *deckList,
        const MethodInfo *method)
{
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
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v25; // x21
  __int64 v26; // x0
  __int64 v27; // x1
  Il2CppObject *current; // x22
  __int64 v29; // x9
  __int64 v30; // x20
  UserEventAlloutBattleMaster_o *v31; // x0
  const MethodInfo *v32; // x3
  UserEventAlloutBattleMaster_o *DicToInt; // x0
  __int64 v34; // x1
  const MethodInfo *v35; // x3
  UserEventAlloutBattleMaster_o *v36; // x0
  const MethodInfo *v37; // x3
  UserEventAlloutBattleMaster_o *v38; // x0
  const MethodInfo *v39; // x3
  UserEventAlloutBattleMaster_o *v40; // x0
  const MethodInfo *v41; // x3
  UserEventAlloutBattleMaster_o *v42; // x0
  const MethodInfo *v43; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v44; // x23
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o **v45; // x21
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  __int64 v52; // x0
  __int64 v53; // x1
  __int64 v54; // x0
  __int64 v55; // x1
  __int64 v56; // x11
  __int64 v57; // x11
  System_Xml_Schema_XmlSchemaObject_o *v58; // x0
  Il2CppObject *v59; // x22
  __int64 v60; // x9
  UserEventAlloutBattleMaster_ClearSvtEquipInfo_o *v61; // x23
  UserEventAlloutBattleMaster_o *v62; // x0
  const MethodInfo *v63; // x3
  UserEventAlloutBattleMaster_o *v64; // x0
  __int64 v65; // x1
  const MethodInfo *v66; // x3
  __int64 v67; // x1
  int v68; // w19
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v70; // [xsp+8h] [xbp-C8h]
  int v71; // [xsp+10h] [xbp-C0h]
  int v72; // [xsp+14h] [xbp-BCh]
  _BYTE v73[32]; // [xsp+18h] [xbp-B8h] BYREF
  int v74; // [xsp+38h] [xbp-98h]
  System_Collections_Generic_List_Enumerator_T__o v75; // [xsp+40h] [xbp-90h] BYREF
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+58h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v77; // [xsp+60h] [xbp-70h] BYREF

  if ( (byte_4188B1C & 1) == 0 )
  {
    sub_B2C35C(&UserEventAlloutBattleMaster_ClearSvtEquipInfo_TypeInfo, deckList);
    sub_B2C35C(&UserEventAlloutBattleMaster_ClearSvtInfo_TypeInfo, v4);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, v5);
    sub_B2C35C(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_object__Dispose__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_object__MoveNext__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_object__get_Current__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtEquipInfo__Add__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtInfo__Add__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_object__GetEnumerator__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtEquipInfo___ctor__, v13);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtInfo___ctor__, v14);
    sub_B2C35C(&System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtEquipInfo__TypeInfo, v15);
    sub_B2C35C(&System_Collections_Generic_List_object__TypeInfo, v16);
    sub_B2C35C(&System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtInfo__TypeInfo, v17);
    sub_B2C35C(&StringLiteral_20200/*"lc"*/, v18);
    sub_B2C35C(&StringLiteral_18148/*"ec"*/, v19);
    sub_B2C35C(&StringLiteral_22465/*"svtEqs"*/, v20);
    sub_B2C35C(&StringLiteral_22468/*"svtId"*/, v21);
    sub_B2C35C(&StringLiteral_19381/*"id"*/, v22);
    sub_B2C35C(&StringLiteral_19411/*"ilc"*/, v23);
    sub_B2C35C(&StringLiteral_20333/*"lv"*/, v24);
    byte_4188B1C = 1;
  }
  memset(&v77, 0, sizeof(v77));
  value = 0LL;
  memset(&v75, 0, sizeof(v75));
  v74 = 0;
  v25 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtInfo__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v25,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtInfo___ctor__);
  if ( !deckList )
    sub_B2C434(v26, v27);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)v73,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)deckList,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_object__GetEnumerator__);
  v71 = 0;
  v77 = *(System_Collections_Generic_List_Enumerator_T__o *)v73;
  v70 = v25;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v77,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_object__MoveNext__) )
  {
    current = v77.fields.current;
    if ( v77.fields.current )
    {
      v29 = *(&System_Collections_Generic_Dictionary_string__object__TypeInfo->_2.bitflags2 + 1);
      if ( *(&v77.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v29
        || (System_Collections_Generic_Dictionary_string__object__c *)v77.fields.current->klass->_2.typeHierarchy[v29 - 1] != System_Collections_Generic_Dictionary_string__object__TypeInfo )
      {
        v52 = sub_B2C728(v77.fields.current);
LABEL_45:
        sub_B2C434(v52, v53);
      }
    }
    v30 = sub_B2C42C(UserEventAlloutBattleMaster_ClearSvtInfo_TypeInfo);
    UserEventAlloutBattleMaster_ClearSvtInfo___ctor((UserEventAlloutBattleMaster_ClearSvtInfo_o *)v30, 0LL);
    DicToInt = (UserEventAlloutBattleMaster_o *)UserEventAlloutBattleMaster__GetDicToInt(
                                                  v31,
                                                  (System_Collections_Generic_Dictionary_string__object__o *)current,
                                                  (System_String_o *)StringLiteral_19381/*"id"*/,
                                                  v32);
    if ( !v30 )
      sub_B2C434(DicToInt, v34);
    *(_DWORD *)(v30 + 16) = (_DWORD)DicToInt;
    v36 = (UserEventAlloutBattleMaster_o *)UserEventAlloutBattleMaster__GetDicToInt(
                                             DicToInt,
                                             (System_Collections_Generic_Dictionary_string__object__o *)current,
                                             (System_String_o *)StringLiteral_22468/*"svtId"*/,
                                             v35);
    *(_DWORD *)(v30 + 20) = (_DWORD)v36;
    v38 = (UserEventAlloutBattleMaster_o *)UserEventAlloutBattleMaster__GetDicToInt(
                                             v36,
                                             (System_Collections_Generic_Dictionary_string__object__o *)current,
                                             (System_String_o *)StringLiteral_20333/*"lv"*/,
                                             v37);
    *(_DWORD *)(v30 + 24) = (_DWORD)v38;
    v40 = (UserEventAlloutBattleMaster_o *)UserEventAlloutBattleMaster__GetDicToInt(
                                             v38,
                                             (System_Collections_Generic_Dictionary_string__object__o *)current,
                                             (System_String_o *)StringLiteral_20200/*"lc"*/,
                                             v39);
    *(_DWORD *)(v30 + 28) = (_DWORD)v40;
    v42 = (UserEventAlloutBattleMaster_o *)UserEventAlloutBattleMaster__GetDicToInt(
                                             v40,
                                             (System_Collections_Generic_Dictionary_string__object__o *)current,
                                             (System_String_o *)StringLiteral_19411/*"ilc"*/,
                                             v41);
    *(_DWORD *)(v30 + 32) = (_DWORD)v42;
    *(_DWORD *)(v30 + 36) = UserEventAlloutBattleMaster__GetDicToInt(
                              v42,
                              (System_Collections_Generic_Dictionary_string__object__o *)current,
                              (System_String_o *)StringLiteral_18148/*"ec"*/,
                              v43);
    v44 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtEquipInfo__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v44,
      (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtEquipInfo___ctor__);
    *(_QWORD *)(v30 + 40) = v44;
    v45 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o **)(v30 + 40);
    sub_B2C2F8((BattleServantConfConponent_o *)(v30 + 40), (System_Int32_array **)v44, v46, v47, v48, v49, v50, v51);
    if ( !current )
      goto LABEL_45;
    v54 = System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
            (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)current,
            (System_Xml_XmlQualifiedName_o *)StringLiteral_22465/*"svtEqs"*/,
            &value,
            (const MethodInfo_2DB3AC0 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    if ( (v54 & 1) == 0 )
      goto LABEL_33;
    if ( !value
      || (v56 = *(&System_Collections_Generic_List_object__TypeInfo->_2.bitflags2 + 1),
          *(&value->klass->_2.bitflags2 + 1) < (unsigned int)v56)
      || (System_Collections_Generic_List_object__c *)value->klass->_2.typeHierarchy[v56 - 1] != System_Collections_Generic_List_object__TypeInfo )
    {
LABEL_43:
      sub_B2C434(v54, v55);
    }
    v57 = *(&System_Collections_Generic_List_object__TypeInfo->_2.bitflags2 + 1);
    if ( *(&value->klass->_2.bitflags2 + 1) >= (unsigned int)v57 )
    {
      if ( (System_Collections_Generic_List_object__c *)value->klass->_2.typeHierarchy[v57 - 1] == System_Collections_Generic_List_object__TypeInfo )
        v58 = value;
      else
        v58 = 0LL;
    }
    else
    {
      v58 = 0LL;
    }
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)v73,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v58,
      (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_object__GetEnumerator__);
    v75 = *(System_Collections_Generic_List_Enumerator_T__o *)v73;
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v75,
              (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_object__MoveNext__) )
    {
      v59 = v75.fields.current;
      if ( v75.fields.current )
      {
        v60 = *(&System_Collections_Generic_Dictionary_string__object__TypeInfo->_2.bitflags2 + 1);
        if ( *(&v75.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v60
          || (System_Collections_Generic_Dictionary_string__object__c *)v75.fields.current->klass->_2.typeHierarchy[v60 - 1] != System_Collections_Generic_Dictionary_string__object__TypeInfo )
        {
          v54 = sub_B2C728(v75.fields.current);
          goto LABEL_43;
        }
      }
      v61 = (UserEventAlloutBattleMaster_ClearSvtEquipInfo_o *)sub_B2C42C(UserEventAlloutBattleMaster_ClearSvtEquipInfo_TypeInfo);
      UserEventAlloutBattleMaster_ClearSvtEquipInfo___ctor(v61, 0LL);
      v64 = (UserEventAlloutBattleMaster_o *)UserEventAlloutBattleMaster__GetDicToInt(
                                               v62,
                                               (System_Collections_Generic_Dictionary_string__object__o *)v59,
                                               (System_String_o *)StringLiteral_22468/*"svtId"*/,
                                               v63);
      if ( !v61 )
        sub_B2C434(v64, v65);
      v61->fields.svtId = (int)v64;
      v61->fields.lc = UserEventAlloutBattleMaster__GetDicToInt(
                         v64,
                         (System_Collections_Generic_Dictionary_string__object__o *)v59,
                         (System_String_o *)StringLiteral_20200/*"lc"*/,
                         v66);
      if ( !*v45 )
        sub_B2C434(0LL, v67);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        *v45,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v61,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtEquipInfo__Add__);
    }
    *(_DWORD *)&v73[4 * v71 + 24] = 286;
    v72 = ++v74;
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v75,
      (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
    if ( !v72 )
    {
      v71 = 0;
LABEL_33:
      v25 = v70;
      goto LABEL_34;
    }
    v25 = v70;
    v71 = v72;
    if ( *(_DWORD *)&v73[4 * v72 + 20] == 286 )
    {
      v74 = v72 - 1;
      v71 = v72 - 1;
      if ( !v70 )
        goto LABEL_47;
      goto LABEL_35;
    }
LABEL_34:
    if ( !v25 )
LABEL_47:
      sub_B2C434(v54, v55);
LABEL_35:
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v25,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v30,
      (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtInfo__Add__);
  }
  *(_DWORD *)&v73[4 * v71 + 24] = 321;
  v68 = ++v74;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v77,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
  if ( v68 && *(_DWORD *)&v73[4 * v68 + 20] == 321 )
    v74 = v68 - 1;
  return (System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtInfo__o *)v25;
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
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x0
  UserEventAlloutBattleEntity_c *v21; // x1
  __int64 v22; // x3
  const MethodInfo_2DB229C **v23; // x22
  System_Collections_Generic_IEnumerator_T__o *v24; // x20
  int v25; // w23
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v27; // x10
  int *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v30; // x8
  unsigned __int64 v31; // x10
  int *v32; // x11
  __int64 v33; // x0
  _QWORD *v34; // x0
  __int64 v35; // x1
  __int64 v36; // x9
  Il2CppObject *value; // x19
  UserEventAlloutBattleMaster_o *v38; // x0
  const MethodInfo *v39; // x2
  __int64 v40; // x10
  System_Collections_Generic_List_object__o *v41; // x1
  System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtInfo__o *v42; // x0
  int v43; // w8
  const MethodInfo_2DB229C **v44; // x27
  int v45; // w19
  int v46; // w27
  int v47; // w8
  System_Collections_Generic_IEnumerator_T__c *v48; // x8
  unsigned __int64 v49; // x10
  int *v50; // x11
  __int64 v51; // x0
  int v52; // w9
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v53; // x19
  System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtInfo__o *v55; // [xsp+8h] [xbp-C8h]
  int v56; // [xsp+14h] [xbp-BCh]
  _WORD v57[26]; // [xsp+18h] [xbp-B8h] BYREF
  int v58; // [xsp+4Ch] [xbp-84h]
  System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl__o v59; // [xsp+50h] [xbp-80h] BYREF

  if ( (byte_4188B1B & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, *(_QWORD *)&questId);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__get_Current__, v9);
    sub_B2C35C(&System_IDisposable_TypeInfo, v10);
    sub_B2C35C(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v11);
    sub_B2C35C(&System_Collections_IEnumerator_TypeInfo, v12);
    sub_B2C35C(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Key__, v13);
    sub_B2C35C(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Value__, v14);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtInfo___ctor__, v15);
    sub_B2C35C(&System_Collections_Generic_List_object__TypeInfo, v16);
    sub_B2C35C(&System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtInfo__TypeInfo, v17);
    sub_B2C35C(&UserEventAlloutBattleEntity_TypeInfo, v18);
    byte_4188B1B = 1;
  }
  memset(&v59, 0, sizeof(v59));
  v58 = 0;
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_59;
  if ( System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
         list,
         (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) <= 0 )
    goto LABEL_54;
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
LABEL_59:
    sub_B2C434(list, *(_QWORD *)&questId);
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2A0E96C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  v55 = 0LL;
  v23 = (const MethodInfo_2DB229C **)&Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__;
  v24 = Enumerator;
  v25 = 0;
  do
  {
LABEL_7:
    if ( !v24 )
      goto LABEL_57;
    while ( 1 )
    {
      klass = v24->klass;
      if ( *(_WORD *)&v24->klass->_2.bitflags1 )
      {
        v27 = 0LL;
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          ++v27;
          p_offset += 4;
          if ( v27 >= *(unsigned __int16 *)&v24->klass->_2.bitflags1 )
            goto LABEL_12;
        }
        p_method = (__int64)&klass->vtable[*p_offset].method;
      }
      else
      {
LABEL_12:
        p_method = sub_AC5258(v24, System_Collections_IEnumerator_TypeInfo, 0LL, v22);
      }
      if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
              v24,
              *(_QWORD *)(p_method + 8)) & 1) == 0 )
      {
        *(_DWORD *)&v57[2 * v25 + 20] = 166;
        v46 = ++v58;
        goto LABEL_43;
      }
      v30 = v24->klass;
      if ( *(_WORD *)&v24->klass->_2.bitflags1 )
      {
        v31 = 0LL;
        v32 = &v30->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v32 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
        {
          ++v31;
          v32 += 4;
          if ( v31 >= *(unsigned __int16 *)&v24->klass->_2.bitflags1 )
            goto LABEL_19;
        }
        v33 = (__int64)&v30->vtable[*v32].method;
      }
      else
      {
LABEL_19:
        v33 = sub_AC5258(v24, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v22);
      }
      v34 = (_QWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v33)(
                        v24,
                        *(_QWORD *)(v33 + 8));
      if ( !v34 )
        sub_B2C434(0LL, v35);
      v21 = UserEventAlloutBattleEntity_TypeInfo;
      v36 = *(&UserEventAlloutBattleEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*v34 + 300LL) < (unsigned int)v36
        || *(UserEventAlloutBattleEntity_c **)(*(_QWORD *)(*v34 + 200LL) + 8 * v36 - 8) != UserEventAlloutBattleEntity_TypeInfo )
      {
        Enumerator = (System_Collections_Generic_IEnumerator_T__o *)sub_B2C728(v34);
LABEL_57:
        sub_B2C434(Enumerator, v21);
      }
      Enumerator = (System_Collections_Generic_IEnumerator_T__o *)v34[4];
      if ( !Enumerator )
        goto LABEL_7;
      System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaElementDecl___GetEnumerator(
        (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)v57,
        (System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaElementDecl__o *)Enumerator,
        *v23);
      v59 = *(System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl__o *)v57;
      while ( System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl___MoveNext(
                &v59,
                (const MethodInfo_278B9EC *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__) )
      {
        value = v59.fields.current.fields.value;
        v38 = (UserEventAlloutBattleMaster_o *)System_Int32__Parse(
                                                 (System_String_o *)v59.fields.current.fields.key,
                                                 0LL);
        if ( (_DWORD)v38 == questId )
        {
          if ( value
            && (v40 = *(&System_Collections_Generic_List_object__TypeInfo->_2.bitflags2 + 1),
                *(&value->klass->_2.bitflags2 + 1) >= (unsigned int)v40) )
          {
            v41 = (System_Collections_Generic_List_object__c *)value->klass->_2.typeHierarchy[v40 - 1] == System_Collections_Generic_List_object__TypeInfo
                ? (System_Collections_Generic_List_object__o *)value
                : 0LL;
          }
          else
          {
            v41 = 0LL;
          }
          v42 = UserEventAlloutBattleMaster__ConvertClearSvtInfo(v38, v41, v39);
          if ( v42 )
          {
            *(_DWORD *)&v57[2 * v25 + 20] = 172;
            v43 = v58;
            v44 = v23;
            v55 = v42;
            goto LABEL_37;
          }
        }
      }
      *(_DWORD *)&v57[2 * v25 + 20] = 146;
      v43 = v58;
      v44 = v23;
LABEL_37:
      v45 = v43 + 1;
      v58 = v43 + 1;
      v56 = v43 + 1;
      System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl___Dispose(
        &v59,
        (const MethodInfo_278BB54 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__);
      v23 = v44;
      v46 = v56;
      v25 = 0;
      if ( !v45 )
        goto LABEL_7;
      v25 = v45 - 1;
      v47 = *(_DWORD *)&v57[2 * v45 + 18];
      if ( v47 != 146 )
        break;
      v58 = v45 - 1;
    }
    v25 = v45;
  }
  while ( v47 != 172 );
LABEL_43:
  v48 = v24->klass;
  if ( *(_WORD *)&v24->klass->_2.bitflags1 )
  {
    v49 = 0LL;
    v50 = &v48->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v50 - 1) != System_IDisposable_TypeInfo )
    {
      ++v49;
      v50 += 4;
      if ( v49 >= *(unsigned __int16 *)&v24->klass->_2.bitflags1 )
        goto LABEL_47;
    }
    v51 = (__int64)&v48->vtable[*v50].method;
  }
  else
  {
LABEL_47:
    v51 = sub_AC5258(v24, System_IDisposable_TypeInfo, 0LL, v22);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v51)(v24, *(_QWORD *)(v51 + 8));
  if ( !v46 )
    goto LABEL_54;
  v52 = *(_DWORD *)&v57[2 * v46 + 18];
  if ( v52 == 166 )
  {
    v58 = v46 - 1;
    goto LABEL_54;
  }
  if ( v52 != 172 )
  {
LABEL_54:
    v53 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtInfo__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v53,
      (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtInfo___ctor__);
    return (System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtInfo__o *)v53;
  }
  v53 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v55;
  v58 = v46 - 1;
  return (System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtInfo__o *)v53;
}


int32_t __fastcall UserEventAlloutBattleMaster__GetDicToInt(
        UserEventAlloutBattleMaster_o *this,
        System_Collections_Generic_Dictionary_string__object__o *dic,
        System_String_o *key,
        const MethodInfo *method)
{
  System_String_o *v6; // x0
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4188B1D & 1) == 0 )
  {
    this = (UserEventAlloutBattleMaster_o *)sub_B2C35C(
                                              &Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__,
                                              dic);
    byte_4188B1D = 1;
  }
  value = 0LL;
  if ( !dic )
    goto LABEL_8;
  if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
         (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)dic,
         (System_Xml_XmlQualifiedName_o *)key,
         &value,
         (const MethodInfo_2DB3AC0 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
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
    sub_B2C434(this, dic);
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

  if ( (byte_4188B18 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_DataMasterBase_UserEventAlloutBattleMaster__UserEventAlloutBattleEntity__string__GetEntity__,
      userId);
    byte_4188B18 = 1;
  }
  PK = UserEventAlloutBattleEntity__CreatePK(userId, eventId, alloutBattleId, *(const MethodInfo **)&alloutBattleId);
  return (UserEventAlloutBattleEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                            (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                            PK,
                                            (const MethodInfo_24E4520 *)Method_DataMasterBase_UserEventAlloutBattleMaster__UserEventAlloutBattleEntity__string__GetEntity__);
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
  __int64 v24; // x1
  System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaElementDecl__o *clearDeckInfoDic; // x0
  int v26; // w22
  __int64 v27; // x0
  __int64 v28; // x1
  __int64 v29; // x11
  __int64 v30; // x11
  Il2CppObject *value; // x0
  _BOOL8 v32; // x0
  const MethodInfo *v33; // x3
  __int64 v34; // x10
  int v35; // w23
  int v36; // w8
  int v37; // w9
  bool v38; // w9
  char v40; // [xsp+4h] [xbp-DCh]
  _WORD v41[26]; // [xsp+8h] [xbp-D8h] BYREF
  int v42; // [xsp+3Ch] [xbp-A4h]
  System_Collections_Generic_List_Enumerator_T__o v43; // [xsp+40h] [xbp-A0h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl__o v44; // [xsp+60h] [xbp-80h] BYREF

  if ( (byte_4188B1A & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__, *(_QWORD *)&svtId);
    sub_B2C35C(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v9);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_object__Dispose__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_object__MoveNext__, v13);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__get_Current__, v14);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_object__get_Current__, v15);
    sub_B2C35C(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Value__, v16);
    sub_B2C35C(&Method_System_Collections_Generic_List_object__GetEnumerator__, v17);
    sub_B2C35C(&System_Collections_Generic_List_object__TypeInfo, v18);
    sub_B2C35C(&NetworkManager_TypeInfo, v19);
    sub_B2C35C(&StringLiteral_22468/*"svtId"*/, v20);
    byte_4188B1A = 1;
  }
  memset(&v44, 0, sizeof(v44));
  memset(&v43, 0, sizeof(v43));
  v42 = 0;
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
      sub_B2C434(0LL, v24);
    System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaElementDecl___GetEnumerator(
      (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)v41,
      clearDeckInfoDic,
      (const MethodInfo_2DB229C *)Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__);
    v40 = 0;
    v44 = *(System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl__o *)v41;
    v26 = 0;
    while ( 1 )
    {
      v27 = System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl___MoveNext(
              &v44,
              (const MethodInfo_278B9EC *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__);
      if ( (v27 & 1) == 0 )
        break;
      if ( !v44.fields.current.fields.value
        || (v29 = *(&System_Collections_Generic_List_object__TypeInfo->_2.bitflags2 + 1),
            *(&v44.fields.current.fields.value->klass->_2.bitflags2 + 1) < (unsigned int)v29)
        || (System_Collections_Generic_List_object__c *)v44.fields.current.fields.value->klass->_2.typeHierarchy[v29 - 1] != System_Collections_Generic_List_object__TypeInfo )
      {
LABEL_41:
        sub_B2C434(v27, v28);
      }
      v30 = *(&System_Collections_Generic_List_object__TypeInfo->_2.bitflags2 + 1);
      if ( *(&v44.fields.current.fields.value->klass->_2.bitflags2 + 1) >= (unsigned int)v30 )
      {
        if ( (System_Collections_Generic_List_object__c *)v44.fields.current.fields.value->klass->_2.typeHierarchy[v30 - 1] == System_Collections_Generic_List_object__TypeInfo )
          value = v44.fields.current.fields.value;
        else
          value = 0LL;
      }
      else
      {
        value = 0LL;
      }
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)v41,
        (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)value,
        (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_object__GetEnumerator__);
      v43 = *(System_Collections_Generic_List_Enumerator_T__o *)v41;
      while ( 1 )
      {
        v32 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v43,
                (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_object__MoveNext__);
        if ( !v32 )
          break;
        if ( v43.fields.current )
        {
          v34 = *(&System_Collections_Generic_Dictionary_string__object__TypeInfo->_2.bitflags2 + 1);
          if ( *(&v43.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v34
            || (System_Collections_Generic_Dictionary_string__object__c *)v43.fields.current->klass->_2.typeHierarchy[v34 - 1] != System_Collections_Generic_Dictionary_string__object__TypeInfo )
          {
            v27 = sub_B2C728(v43.fields.current);
            goto LABEL_41;
          }
        }
        if ( UserEventAlloutBattleMaster__GetDicToInt(
               (UserEventAlloutBattleMaster_o *)v32,
               (System_Collections_Generic_Dictionary_string__object__o *)v43.fields.current,
               (System_String_o *)StringLiteral_22468/*"svtId"*/,
               v33) == svtId )
        {
          *(_DWORD *)&v41[2 * v26 + 20] = 148;
          v35 = ++v42;
          v40 = 1;
          goto LABEL_26;
        }
      }
      *(_DWORD *)&v41[2 * v26 + 20] = 121;
      v35 = ++v42;
LABEL_26:
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v43,
        (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
      v26 = 0;
      if ( v35 )
      {
        v26 = v35 - 1;
        v36 = *(_DWORD *)&v41[2 * v35 + 18];
        if ( v36 == 121 )
        {
          v42 = v35 - 1;
        }
        else
        {
          v26 = v35;
          if ( v36 == 148 )
            goto LABEL_33;
        }
      }
    }
    *(_DWORD *)&v41[2 * v26 + 20] = 146;
    v35 = ++v42;
LABEL_33:
    System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl___Dispose(
      &v44,
      (const MethodInfo_278BB54 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__);
    if ( v35 )
    {
      v37 = *(_DWORD *)&v41[2 * v35 + 18];
      if ( v37 == 146 )
      {
        v38 = 0;
        goto LABEL_39;
      }
      if ( v37 == 148 )
      {
        v38 = v40;
LABEL_39:
        v42 = v35 - 1;
        return v38;
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

  if ( (byte_4188B19 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_DataMasterBase_UserEventAlloutBattleMaster__UserEventAlloutBattleEntity__string__TryGetEntity__,
      entity);
    byte_4188B19 = 1;
  }
  PK = UserEventAlloutBattleEntity__CreatePK(userId, eventId, alloutBattleId, *(const MethodInfo **)&eventId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_24E4578 *)Method_DataMasterBase_UserEventAlloutBattleMaster__UserEventAlloutBattleEntity__string__TryGetEntity__);
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