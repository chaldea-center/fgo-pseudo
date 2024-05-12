void __fastcall UserEventAlloutBattleMaster___ctor(UserEventAlloutBattleMaster_o *this, const MethodInfo *method)
{
  if ( (byte_438CB31 & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_UserEventAlloutBattleMaster__UserEventAlloutBattleEntity__string___ctor__);
    byte_438CB31 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    406,
    (const MethodInfo_21FBC48 *)Method_DataMasterBase_UserEventAlloutBattleMaster__UserEventAlloutBattleEntity__string___ctor__);
}


System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtInfo__o *__fastcall UserEventAlloutBattleMaster__ConvertClearSvtInfo(
        UserEventAlloutBattleMaster_o *this,
        System_Collections_Generic_List_object__o *deckList,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1
  Il2CppObject *current; // x22
  __int64 v8; // x9
  __int64 v9; // x20
  UserEventAlloutBattleMaster_o *v10; // x0
  const MethodInfo *v11; // x3
  UserEventAlloutBattleMaster_o *DicToInt; // x0
  __int64 v13; // x1
  const MethodInfo *v14; // x3
  UserEventAlloutBattleMaster_o *v15; // x0
  const MethodInfo *v16; // x3
  UserEventAlloutBattleMaster_o *v17; // x0
  const MethodInfo *v18; // x3
  UserEventAlloutBattleMaster_o *v19; // x0
  const MethodInfo *v20; // x3
  UserEventAlloutBattleMaster_o *v21; // x0
  const MethodInfo *v22; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v23; // x23
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o **v24; // x21
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  __int64 v31; // x0
  __int64 v32; // x1
  __int64 v33; // x0
  __int64 v34; // x1
  __int64 v35; // x11
  __int64 v36; // x11
  System_Xml_Schema_XmlSchemaObject_o *v37; // x0
  Il2CppObject *v38; // x22
  __int64 v39; // x9
  UserEventAlloutBattleMaster_ClearSvtEquipInfo_o *v40; // x23
  UserEventAlloutBattleMaster_o *v41; // x0
  const MethodInfo *v42; // x3
  UserEventAlloutBattleMaster_o *v43; // x0
  __int64 v44; // x1
  const MethodInfo *v45; // x3
  __int64 v46; // x1
  int v47; // w19
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v49; // [xsp+8h] [xbp-C8h]
  int v50; // [xsp+10h] [xbp-C0h]
  int v51; // [xsp+14h] [xbp-BCh]
  _BYTE v52[32]; // [xsp+18h] [xbp-B8h] BYREF
  int v53; // [xsp+38h] [xbp-98h]
  System_Collections_Generic_List_Enumerator_T__o v54; // [xsp+40h] [xbp-90h] BYREF
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+58h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v56; // [xsp+60h] [xbp-70h] BYREF

  if ( (byte_438CB36 & 1) == 0 )
  {
    sub_B775C4(&UserEventAlloutBattleMaster_ClearSvtEquipInfo_TypeInfo);
    sub_B775C4(&UserEventAlloutBattleMaster_ClearSvtInfo_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_B775C4(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_object__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_object__get_Current__);
    sub_B775C4(&Method_System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtEquipInfo__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtInfo__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_object__GetEnumerator__);
    sub_B775C4(&Method_System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtEquipInfo___ctor__);
    sub_B775C4(&Method_System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtInfo___ctor__);
    sub_B775C4(&System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtEquipInfo__TypeInfo);
    sub_B775C4(&System_Collections_Generic_List_object__TypeInfo);
    sub_B775C4(&System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtInfo__TypeInfo);
    sub_B775C4(&StringLiteral_20611/*"lc"*/);
    sub_B775C4(&StringLiteral_18510/*"ec"*/);
    sub_B775C4(&StringLiteral_22941/*"svtEqs"*/);
    sub_B775C4(&StringLiteral_22944/*"svtId"*/);
    sub_B775C4(&StringLiteral_19774/*"id"*/);
    sub_B775C4(&StringLiteral_19805/*"ilc"*/);
    sub_B775C4(&StringLiteral_20748/*"lv"*/);
    byte_438CB36 = 1;
  }
  memset(&v56, 0, sizeof(v56));
  value = 0LL;
  memset(&v54, 0, sizeof(v54));
  v53 = 0;
  v4 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtInfo__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v4,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtInfo___ctor__);
  if ( !deckList )
    sub_B7769C(v5, v6);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)v52,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)deckList,
    (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_object__GetEnumerator__);
  v50 = 0;
  v56 = *(System_Collections_Generic_List_Enumerator_T__o *)v52;
  v49 = v4;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v56,
            (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_object__MoveNext__) )
  {
    current = v56.fields.current;
    if ( v56.fields.current )
    {
      v8 = *(&System_Collections_Generic_Dictionary_string__object__TypeInfo->_2.bitflags2 + 1);
      if ( *(&v56.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v8
        || (System_Collections_Generic_Dictionary_string__object__c *)v56.fields.current->klass->_2.typeHierarchy[v8 - 1] != System_Collections_Generic_Dictionary_string__object__TypeInfo )
      {
        v31 = sub_B77990(v56.fields.current);
LABEL_45:
        sub_B7769C(v31, v32);
      }
    }
    v9 = sub_B77694(UserEventAlloutBattleMaster_ClearSvtInfo_TypeInfo);
    UserEventAlloutBattleMaster_ClearSvtInfo___ctor((UserEventAlloutBattleMaster_ClearSvtInfo_o *)v9, 0LL);
    DicToInt = (UserEventAlloutBattleMaster_o *)UserEventAlloutBattleMaster__GetDicToInt(
                                                  v10,
                                                  (System_Collections_Generic_Dictionary_string__object__o *)current,
                                                  (System_String_o *)StringLiteral_19774/*"id"*/,
                                                  v11);
    if ( !v9 )
      sub_B7769C(DicToInt, v13);
    *(_DWORD *)(v9 + 16) = (_DWORD)DicToInt;
    v15 = (UserEventAlloutBattleMaster_o *)UserEventAlloutBattleMaster__GetDicToInt(
                                             DicToInt,
                                             (System_Collections_Generic_Dictionary_string__object__o *)current,
                                             (System_String_o *)StringLiteral_22944/*"svtId"*/,
                                             v14);
    *(_DWORD *)(v9 + 20) = (_DWORD)v15;
    v17 = (UserEventAlloutBattleMaster_o *)UserEventAlloutBattleMaster__GetDicToInt(
                                             v15,
                                             (System_Collections_Generic_Dictionary_string__object__o *)current,
                                             (System_String_o *)StringLiteral_20748/*"lv"*/,
                                             v16);
    *(_DWORD *)(v9 + 24) = (_DWORD)v17;
    v19 = (UserEventAlloutBattleMaster_o *)UserEventAlloutBattleMaster__GetDicToInt(
                                             v17,
                                             (System_Collections_Generic_Dictionary_string__object__o *)current,
                                             (System_String_o *)StringLiteral_20611/*"lc"*/,
                                             v18);
    *(_DWORD *)(v9 + 28) = (_DWORD)v19;
    v21 = (UserEventAlloutBattleMaster_o *)UserEventAlloutBattleMaster__GetDicToInt(
                                             v19,
                                             (System_Collections_Generic_Dictionary_string__object__o *)current,
                                             (System_String_o *)StringLiteral_19805/*"ilc"*/,
                                             v20);
    *(_DWORD *)(v9 + 32) = (_DWORD)v21;
    *(_DWORD *)(v9 + 36) = UserEventAlloutBattleMaster__GetDicToInt(
                             v21,
                             (System_Collections_Generic_Dictionary_string__object__o *)current,
                             (System_String_o *)StringLiteral_18510/*"ec"*/,
                             v22);
    v23 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtEquipInfo__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v23,
      (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtEquipInfo___ctor__);
    *(_QWORD *)(v9 + 40) = v23;
    v24 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o **)(v9 + 40);
    sub_B77560((BattleServantConfConponent_o *)(v9 + 40), (System_Int32_array **)v23, v25, v26, v27, v28, v29, v30);
    if ( !current )
      goto LABEL_45;
    v33 = System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
            (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)current,
            (System_Xml_XmlQualifiedName_o *)StringLiteral_22941/*"svtEqs"*/,
            &value,
            (const MethodInfo_2F7F3F8 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    if ( (v33 & 1) == 0 )
      goto LABEL_33;
    if ( !value
      || (v35 = *(&System_Collections_Generic_List_object__TypeInfo->_2.bitflags2 + 1),
          *(&value->klass->_2.bitflags2 + 1) < (unsigned int)v35)
      || (System_Collections_Generic_List_object__c *)value->klass->_2.typeHierarchy[v35 - 1] != System_Collections_Generic_List_object__TypeInfo )
    {
LABEL_43:
      sub_B7769C(v33, v34);
    }
    v36 = *(&System_Collections_Generic_List_object__TypeInfo->_2.bitflags2 + 1);
    if ( *(&value->klass->_2.bitflags2 + 1) >= (unsigned int)v36 )
    {
      if ( (System_Collections_Generic_List_object__c *)value->klass->_2.typeHierarchy[v36 - 1] == System_Collections_Generic_List_object__TypeInfo )
        v37 = value;
      else
        v37 = 0LL;
    }
    else
    {
      v37 = 0LL;
    }
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)v52,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v37,
      (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_object__GetEnumerator__);
    v54 = *(System_Collections_Generic_List_Enumerator_T__o *)v52;
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v54,
              (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_object__MoveNext__) )
    {
      v38 = v54.fields.current;
      if ( v54.fields.current )
      {
        v39 = *(&System_Collections_Generic_Dictionary_string__object__TypeInfo->_2.bitflags2 + 1);
        if ( *(&v54.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v39
          || (System_Collections_Generic_Dictionary_string__object__c *)v54.fields.current->klass->_2.typeHierarchy[v39 - 1] != System_Collections_Generic_Dictionary_string__object__TypeInfo )
        {
          v33 = sub_B77990(v54.fields.current);
          goto LABEL_43;
        }
      }
      v40 = (UserEventAlloutBattleMaster_ClearSvtEquipInfo_o *)sub_B77694(UserEventAlloutBattleMaster_ClearSvtEquipInfo_TypeInfo);
      UserEventAlloutBattleMaster_ClearSvtEquipInfo___ctor(v40, 0LL);
      v43 = (UserEventAlloutBattleMaster_o *)UserEventAlloutBattleMaster__GetDicToInt(
                                               v41,
                                               (System_Collections_Generic_Dictionary_string__object__o *)v38,
                                               (System_String_o *)StringLiteral_22944/*"svtId"*/,
                                               v42);
      if ( !v40 )
        sub_B7769C(v43, v44);
      v40->fields.svtId = (int)v43;
      v40->fields.lc = UserEventAlloutBattleMaster__GetDicToInt(
                         v43,
                         (System_Collections_Generic_Dictionary_string__object__o *)v38,
                         (System_String_o *)StringLiteral_20611/*"lc"*/,
                         v45);
      if ( !*v24 )
        sub_B7769C(0LL, v46);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        *v24,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v40,
        (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtEquipInfo__Add__);
    }
    *(_DWORD *)&v52[4 * v50 + 24] = 286;
    v51 = ++v53;
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v54,
      (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
    if ( !v51 )
    {
      v50 = 0;
LABEL_33:
      v4 = v49;
      goto LABEL_34;
    }
    v4 = v49;
    v50 = v51;
    if ( *(_DWORD *)&v52[4 * v51 + 20] == 286 )
    {
      v53 = v51 - 1;
      v50 = v51 - 1;
      if ( !v49 )
        goto LABEL_47;
      goto LABEL_35;
    }
LABEL_34:
    if ( !v4 )
LABEL_47:
      sub_B7769C(v33, v34);
LABEL_35:
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v4,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v9,
      (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtInfo__Add__);
  }
  *(_DWORD *)&v52[4 * v50 + 24] = 321;
  v47 = ++v53;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v56,
    (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
  if ( v47 && *(_DWORD *)&v52[4 * v47 + 20] == 321 )
    v53 = v47 - 1;
  return (System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtInfo__o *)v4;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtInfo__o *__fastcall UserEventAlloutBattleMaster__GetClearDeckInfo(
        UserEventAlloutBattleMaster_o *this,
        int32_t questId,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x0
  UserEventAlloutBattleEntity_c *v7; // x1
  const MethodInfo_2F7DBD4 **v8; // x22
  System_Collections_Generic_IEnumerator_T__o *v9; // x20
  int v10; // w23
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v12; // x10
  int *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v15; // x8
  unsigned __int64 v16; // x10
  int *v17; // x11
  __int64 v18; // x0
  _QWORD *v19; // x0
  __int64 v20; // x1
  __int64 v21; // x9
  Il2CppObject *value; // x19
  UserEventAlloutBattleMaster_o *v23; // x0
  const MethodInfo *v24; // x2
  __int64 v25; // x10
  System_Collections_Generic_List_object__o *v26; // x1
  System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtInfo__o *v27; // x0
  int v28; // w8
  const MethodInfo_2F7DBD4 **v29; // x27
  int v30; // w19
  int v31; // w27
  int v32; // w8
  System_Collections_Generic_IEnumerator_T__c *v33; // x8
  unsigned __int64 v34; // x10
  int *v35; // x11
  __int64 v36; // x0
  int v37; // w9
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v38; // x19
  System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtInfo__o *v40; // [xsp+8h] [xbp-C8h]
  int v41; // [xsp+14h] [xbp-BCh]
  _WORD v42[26]; // [xsp+18h] [xbp-B8h] BYREF
  int v43; // [xsp+4Ch] [xbp-84h]
  System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl__o v44; // [xsp+50h] [xbp-80h] BYREF

  if ( (byte_438CB35 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__get_Current__);
    sub_B775C4(&System_IDisposable_TypeInfo);
    sub_B775C4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_B775C4(&System_Collections_IEnumerator_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Key__);
    sub_B775C4(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Value__);
    sub_B775C4(&Method_System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtInfo___ctor__);
    sub_B775C4(&System_Collections_Generic_List_object__TypeInfo);
    sub_B775C4(&System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtInfo__TypeInfo);
    sub_B775C4(&UserEventAlloutBattleEntity_TypeInfo);
    byte_438CB35 = 1;
  }
  memset(&v44, 0, sizeof(v44));
  v43 = 0;
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_59;
  if ( System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
         list,
         (const MethodInfo_2CC5044 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) <= 0 )
    goto LABEL_54;
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
LABEL_59:
    sub_B7769C(list, *(_QWORD *)&questId);
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2CC56C8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  v40 = 0LL;
  v8 = (const MethodInfo_2F7DBD4 **)&Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__;
  v9 = Enumerator;
  v10 = 0;
  do
  {
LABEL_7:
    if ( !v9 )
      goto LABEL_57;
    while ( 1 )
    {
      klass = v9->klass;
      if ( *(_WORD *)&v9->klass->_2.bitflags1 )
      {
        v12 = 0LL;
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          ++v12;
          p_offset += 4;
          if ( v12 >= *(unsigned __int16 *)&v9->klass->_2.bitflags1 )
            goto LABEL_12;
        }
        p_method = (__int64)&klass->vtable[*p_offset].method;
      }
      else
      {
LABEL_12:
        p_method = sub_B0F4C0(v9, System_Collections_IEnumerator_TypeInfo, 0LL);
      }
      if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
              v9,
              *(_QWORD *)(p_method + 8)) & 1) == 0 )
      {
        *(_DWORD *)&v42[2 * v10 + 20] = 166;
        v31 = ++v43;
        goto LABEL_43;
      }
      v15 = v9->klass;
      if ( *(_WORD *)&v9->klass->_2.bitflags1 )
      {
        v16 = 0LL;
        v17 = &v15->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v17 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
        {
          ++v16;
          v17 += 4;
          if ( v16 >= *(unsigned __int16 *)&v9->klass->_2.bitflags1 )
            goto LABEL_19;
        }
        v18 = (__int64)&v15->vtable[*v17].method;
      }
      else
      {
LABEL_19:
        v18 = sub_B0F4C0(v9, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
      }
      v19 = (_QWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v18)(
                        v9,
                        *(_QWORD *)(v18 + 8));
      if ( !v19 )
        sub_B7769C(0LL, v20);
      v7 = UserEventAlloutBattleEntity_TypeInfo;
      v21 = *(&UserEventAlloutBattleEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*v19 + 300LL) < (unsigned int)v21
        || *(UserEventAlloutBattleEntity_c **)(*(_QWORD *)(*v19 + 200LL) + 8 * v21 - 8) != UserEventAlloutBattleEntity_TypeInfo )
      {
        Enumerator = (System_Collections_Generic_IEnumerator_T__o *)sub_B77990(v19);
LABEL_57:
        sub_B7769C(Enumerator, v7);
      }
      Enumerator = (System_Collections_Generic_IEnumerator_T__o *)v19[4];
      if ( !Enumerator )
        goto LABEL_7;
      System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaElementDecl___GetEnumerator(
        (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)v42,
        (System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaElementDecl__o *)Enumerator,
        *v8);
      v44 = *(System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl__o *)v42;
      while ( System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl___MoveNext(
                &v44,
                (const MethodInfo_27E37AC *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__) )
      {
        value = v44.fields.current.fields.value;
        v23 = (UserEventAlloutBattleMaster_o *)System_Int32__Parse(
                                                 (System_String_o *)v44.fields.current.fields.key,
                                                 0LL);
        if ( (_DWORD)v23 == questId )
        {
          if ( value
            && (v25 = *(&System_Collections_Generic_List_object__TypeInfo->_2.bitflags2 + 1),
                *(&value->klass->_2.bitflags2 + 1) >= (unsigned int)v25) )
          {
            v26 = (System_Collections_Generic_List_object__c *)value->klass->_2.typeHierarchy[v25 - 1] == System_Collections_Generic_List_object__TypeInfo
                ? (System_Collections_Generic_List_object__o *)value
                : 0LL;
          }
          else
          {
            v26 = 0LL;
          }
          v27 = UserEventAlloutBattleMaster__ConvertClearSvtInfo(v23, v26, v24);
          if ( v27 )
          {
            *(_DWORD *)&v42[2 * v10 + 20] = 172;
            v28 = v43;
            v29 = v8;
            v40 = v27;
            goto LABEL_37;
          }
        }
      }
      *(_DWORD *)&v42[2 * v10 + 20] = 146;
      v28 = v43;
      v29 = v8;
LABEL_37:
      v30 = v28 + 1;
      v43 = v28 + 1;
      v41 = v28 + 1;
      System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl___Dispose(
        &v44,
        (const MethodInfo_27E3914 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__);
      v8 = v29;
      v31 = v41;
      v10 = 0;
      if ( !v30 )
        goto LABEL_7;
      v10 = v30 - 1;
      v32 = *(_DWORD *)&v42[2 * v30 + 18];
      if ( v32 != 146 )
        break;
      v43 = v30 - 1;
    }
    v10 = v30;
  }
  while ( v32 != 172 );
LABEL_43:
  v33 = v9->klass;
  if ( *(_WORD *)&v9->klass->_2.bitflags1 )
  {
    v34 = 0LL;
    v35 = &v33->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v35 - 1) != System_IDisposable_TypeInfo )
    {
      ++v34;
      v35 += 4;
      if ( v34 >= *(unsigned __int16 *)&v9->klass->_2.bitflags1 )
        goto LABEL_47;
    }
    v36 = (__int64)&v33->vtable[*v35].method;
  }
  else
  {
LABEL_47:
    v36 = sub_B0F4C0(v9, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v36)(v9, *(_QWORD *)(v36 + 8));
  if ( !v31 )
    goto LABEL_54;
  v37 = *(_DWORD *)&v42[2 * v31 + 18];
  if ( v37 == 166 )
  {
    v43 = v31 - 1;
    goto LABEL_54;
  }
  if ( v37 != 172 )
  {
LABEL_54:
    v38 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtInfo__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v38,
      (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtInfo___ctor__);
    return (System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtInfo__o *)v38;
  }
  v38 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v40;
  v43 = v31 - 1;
  return (System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtInfo__o *)v38;
}


int32_t __fastcall UserEventAlloutBattleMaster__GetDicToInt(
        UserEventAlloutBattleMaster_o *this,
        System_Collections_Generic_Dictionary_string__object__o *dic,
        System_String_o *key,
        const MethodInfo *method)
{
  System_String_o *v6; // x0
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_438CB37 & 1) == 0 )
  {
    this = (UserEventAlloutBattleMaster_o *)sub_B775C4(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    byte_438CB37 = 1;
  }
  value = 0LL;
  if ( !dic )
    goto LABEL_8;
  if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
         (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)dic,
         (System_Xml_XmlQualifiedName_o *)key,
         &value,
         (const MethodInfo_2F7F3F8 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
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
    sub_B7769C(this, dic);
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

  if ( (byte_438CB32 & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_UserEventAlloutBattleMaster__UserEventAlloutBattleEntity__string__GetEntity__);
    byte_438CB32 = 1;
  }
  PK = UserEventAlloutBattleEntity__CreatePK(userId, eventId, alloutBattleId, *(const MethodInfo **)&alloutBattleId);
  return (UserEventAlloutBattleEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                            (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                            PK,
                                            (const MethodInfo_21FBCE4 *)Method_DataMasterBase_UserEventAlloutBattleMaster__UserEventAlloutBattleEntity__string__GetEntity__);
}


bool __fastcall UserEventAlloutBattleMaster__IsAlreadyUsedServant(
        UserEventAlloutBattleMaster_o *this,
        int32_t svtId,
        int32_t eventId,
        int32_t alloutBattleId,
        const MethodInfo *method)
{
  int64_t UserId; // x0
  const MethodInfo *v10; // x4
  UserEventAlloutBattleEntity_o *Entity; // x0
  __int64 v12; // x1
  System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaElementDecl__o *clearDeckInfoDic; // x0
  int v14; // w22
  __int64 v15; // x0
  __int64 v16; // x1
  __int64 v17; // x11
  __int64 v18; // x11
  Il2CppObject *value; // x0
  _BOOL8 v20; // x0
  const MethodInfo *v21; // x3
  __int64 v22; // x10
  int v23; // w23
  int v24; // w8
  int v25; // w9
  bool v26; // w9
  char v28; // [xsp+4h] [xbp-DCh]
  _WORD v29[26]; // [xsp+8h] [xbp-D8h] BYREF
  int v30; // [xsp+3Ch] [xbp-A4h]
  System_Collections_Generic_List_Enumerator_T__o v31; // [xsp+40h] [xbp-A0h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl__o v32; // [xsp+60h] [xbp-80h] BYREF

  if ( (byte_438CB34 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__);
    sub_B775C4(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_object__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__get_Current__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_object__get_Current__);
    sub_B775C4(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Value__);
    sub_B775C4(&Method_System_Collections_Generic_List_object__GetEnumerator__);
    sub_B775C4(&System_Collections_Generic_List_object__TypeInfo);
    sub_B775C4(&NetworkManager_TypeInfo);
    sub_B775C4(&StringLiteral_22944/*"svtId"*/);
    byte_438CB34 = 1;
  }
  memset(&v32, 0, sizeof(v32));
  memset(&v31, 0, sizeof(v31));
  v30 = 0;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  Entity = UserEventAlloutBattleMaster__GetEntity(this, UserId, eventId, alloutBattleId, v10);
  if ( Entity )
  {
    clearDeckInfoDic = (System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaElementDecl__o *)Entity->fields.clearDeckInfoDic;
    if ( !clearDeckInfoDic )
      sub_B7769C(0LL, v12);
    System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaElementDecl___GetEnumerator(
      (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)v29,
      clearDeckInfoDic,
      (const MethodInfo_2F7DBD4 *)Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__);
    v28 = 0;
    v32 = *(System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl__o *)v29;
    v14 = 0;
    while ( 1 )
    {
      v15 = System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl___MoveNext(
              &v32,
              (const MethodInfo_27E37AC *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__);
      if ( (v15 & 1) == 0 )
        break;
      if ( !v32.fields.current.fields.value
        || (v17 = *(&System_Collections_Generic_List_object__TypeInfo->_2.bitflags2 + 1),
            *(&v32.fields.current.fields.value->klass->_2.bitflags2 + 1) < (unsigned int)v17)
        || (System_Collections_Generic_List_object__c *)v32.fields.current.fields.value->klass->_2.typeHierarchy[v17 - 1] != System_Collections_Generic_List_object__TypeInfo )
      {
LABEL_41:
        sub_B7769C(v15, v16);
      }
      v18 = *(&System_Collections_Generic_List_object__TypeInfo->_2.bitflags2 + 1);
      if ( *(&v32.fields.current.fields.value->klass->_2.bitflags2 + 1) >= (unsigned int)v18 )
      {
        if ( (System_Collections_Generic_List_object__c *)v32.fields.current.fields.value->klass->_2.typeHierarchy[v18 - 1] == System_Collections_Generic_List_object__TypeInfo )
          value = v32.fields.current.fields.value;
        else
          value = 0LL;
      }
      else
      {
        value = 0LL;
      }
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)v29,
        (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)value,
        (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_object__GetEnumerator__);
      v31 = *(System_Collections_Generic_List_Enumerator_T__o *)v29;
      while ( 1 )
      {
        v20 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v31,
                (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_object__MoveNext__);
        if ( !v20 )
          break;
        if ( v31.fields.current )
        {
          v22 = *(&System_Collections_Generic_Dictionary_string__object__TypeInfo->_2.bitflags2 + 1);
          if ( *(&v31.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v22
            || (System_Collections_Generic_Dictionary_string__object__c *)v31.fields.current->klass->_2.typeHierarchy[v22 - 1] != System_Collections_Generic_Dictionary_string__object__TypeInfo )
          {
            v15 = sub_B77990(v31.fields.current);
            goto LABEL_41;
          }
        }
        if ( UserEventAlloutBattleMaster__GetDicToInt(
               (UserEventAlloutBattleMaster_o *)v20,
               (System_Collections_Generic_Dictionary_string__object__o *)v31.fields.current,
               (System_String_o *)StringLiteral_22944/*"svtId"*/,
               v21) == svtId )
        {
          *(_DWORD *)&v29[2 * v14 + 20] = 148;
          v23 = ++v30;
          v28 = 1;
          goto LABEL_26;
        }
      }
      *(_DWORD *)&v29[2 * v14 + 20] = 121;
      v23 = ++v30;
LABEL_26:
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v31,
        (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
      v14 = 0;
      if ( v23 )
      {
        v14 = v23 - 1;
        v24 = *(_DWORD *)&v29[2 * v23 + 18];
        if ( v24 == 121 )
        {
          v30 = v23 - 1;
        }
        else
        {
          v14 = v23;
          if ( v24 == 148 )
            goto LABEL_33;
        }
      }
    }
    *(_DWORD *)&v29[2 * v14 + 20] = 146;
    v23 = ++v30;
LABEL_33:
    System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl___Dispose(
      &v32,
      (const MethodInfo_27E3914 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__);
    if ( v23 )
    {
      v25 = *(_DWORD *)&v29[2 * v23 + 18];
      if ( v25 == 146 )
      {
        v26 = 0;
        goto LABEL_39;
      }
      if ( v25 == 148 )
      {
        v26 = v28;
LABEL_39:
        v30 = v23 - 1;
        return v26;
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

  if ( (byte_438CB33 & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_UserEventAlloutBattleMaster__UserEventAlloutBattleEntity__string__TryGetEntity__);
    byte_438CB33 = 1;
  }
  PK = UserEventAlloutBattleEntity__CreatePK(userId, eventId, alloutBattleId, *(const MethodInfo **)&eventId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_21FBD3C *)Method_DataMasterBase_UserEventAlloutBattleMaster__UserEventAlloutBattleEntity__string__TryGetEntity__);
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