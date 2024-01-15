void __fastcall CommandCodeSkillMaster___ctor(CommandCodeSkillMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v8; // x20
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  if ( (byte_40FA5C6 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_CommandCodeSkillMaster__CommandCodeSkillEntity__string___ctor__, method);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__CommandCodeSkillEntity_____ctor__, v6);
    sub_B16FFC(&System_Collections_Generic_Dictionary_string__CommandCodeSkillEntity____TypeInfo, v7);
    byte_40FA5C6 = 1;
  }
  v8 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)sub_B170CC(
                                                                                       System_Collections_Generic_Dictionary_string__CommandCodeSkillEntity____TypeInfo,
                                                                                       method,
                                                                                       v2,
                                                                                       v3,
                                                                                       v4);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject____ctor(
    v8,
    (const MethodInfo_2DA3068 *)Method_System_Collections_Generic_Dictionary_string__CommandCodeSkillEntity_____ctor__);
  this->fields.listCache = (struct System_Collections_Generic_Dictionary_string__CommandCodeSkillEntity____o *)v8;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.listCache,
    (System_Int32_array **)v8,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    253,
    (const MethodInfo_266F73C *)Method_DataMasterBase_CommandCodeSkillMaster__CommandCodeSkillEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
CommandCodeSkillEntity_o *__fastcall CommandCodeSkillMaster__GetEntity(
        CommandCodeSkillMaster_o *this,
        int32_t commandCodeId,
        int32_t num,
        int32_t priority,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_40FA5C4 & 1) == 0 )
  {
    sub_B16FFC(
      &Method_DataMasterBase_CommandCodeSkillMaster__CommandCodeSkillEntity__string__GetEntity__,
      *(_QWORD *)&commandCodeId);
    byte_40FA5C4 = 1;
  }
  PK = CommandCodeSkillEntity__CreatePK(commandCodeId, num, priority, *(const MethodInfo **)&priority);
  return (CommandCodeSkillEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                       (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                       PK,
                                       (const MethodInfo_266F7D8 *)Method_DataMasterBase_CommandCodeSkillMaster__CommandCodeSkillEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CommandCodeSkillMaster__TryGetEntity(
        CommandCodeSkillMaster_o *this,
        CommandCodeSkillEntity_o **entity,
        int32_t commandCodeId,
        int32_t num,
        int32_t priority,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_40FA5C5 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_CommandCodeSkillMaster__CommandCodeSkillEntity__string__TryGetEntity__, entity);
    byte_40FA5C5 = 1;
  }
  PK = CommandCodeSkillEntity__CreatePK(commandCodeId, num, priority, *(const MethodInfo **)&num);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_266F830 *)Method_DataMasterBase_CommandCodeSkillMaster__CommandCodeSkillEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
CommandCodeSkillEntity_array *__fastcall CommandCodeSkillMaster__getCommandCodeActiveSkillList(
        CommandCodeSkillMaster_o *this,
        int32_t commandCodeId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v11; // x21
  const MethodInfo *v12; // x3
  int32_t v13; // w22
  CommandCodeSkillEntity_array *EntityListFromIdNum; // x0
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x8
  __int64 v18; // x10
  unsigned int v19; // w9
  int v20; // w12
  CommandCodeSkillEntity_o *v21; // x13
  int priority; // w13
  BalanceConfig_c *v23; // x0

  if ( (byte_40FA5CD & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, *(_QWORD *)&commandCodeId);
    sub_B16FFC(&Method_System_Collections_Generic_List_CommandCodeSkillEntity__Add__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_CommandCodeSkillEntity__ToArray__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_CommandCodeSkillEntity___ctor__, v9);
    sub_B16FFC(&System_Collections_Generic_List_CommandCodeSkillEntity__TypeInfo, v10);
    byte_40FA5CD = 1;
  }
  v11 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_CommandCodeSkillEntity__TypeInfo,
                                                                                                  *(_QWORD *)&commandCodeId,
                                                                                                  method,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v11,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_CommandCodeSkillEntity___ctor__);
  v13 = 0;
  while ( 1 )
  {
    v23 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v23 = BalanceConfig_TypeInfo;
    }
    if ( v13 >= v23->static_fields->SvtPassiveSkillListMax )
      break;
    EntityListFromIdNum = CommandCodeSkillMaster__getEntityListFromIdNum(this, commandCodeId, ++v13, v12);
    if ( EntityListFromIdNum )
    {
      v17 = *(_QWORD *)&EntityListFromIdNum->max_length;
      if ( v17 )
      {
        if ( (int)v17 >= 1 )
        {
          v18 = 0LL;
          v19 = 0;
          v20 = 1;
          while ( 1 )
          {
            v21 = EntityListFromIdNum->m_Items[v18];
            if ( !v21 )
              break;
            priority = v21->fields.priority;
            if ( priority > v20 )
              v19 = v18;
            ++v18;
            if ( priority > v20 )
              v20 = priority;
            if ( (int)v18 >= (int)v17 )
              goto LABEL_16;
          }
LABEL_25:
          sub_B170D4();
        }
        v19 = 0;
LABEL_16:
        if ( v19 >= (unsigned int)v17 )
        {
          sub_B17100(EntityListFromIdNum, v15, v16);
          sub_B170A0();
        }
        if ( !v11 )
          goto LABEL_25;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v11,
          (EventMissionProgressRequest_Argument_ProgressData_o *)EntityListFromIdNum->m_Items[v19],
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_CommandCodeSkillEntity__Add__);
      }
    }
  }
  if ( !v11 )
    goto LABEL_25;
  return (CommandCodeSkillEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                           (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v11,
                                           (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_CommandCodeSkillEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
CommandCodeSkillEntity_array *__fastcall CommandCodeSkillMaster__getCommandCodeSkillList(
        CommandCodeSkillMaster_o *this,
        int32_t commandCodeId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w21
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v17; // x22
  int32_t v18; // w23
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v19; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *Item; // x0
  __int64 v21; // x10

  if ( (byte_40FA5C9 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&commandCodeId);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_B16FFC(&CommandCodeSkillEntity_TypeInfo, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_CommandCodeSkillEntity__Add__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_CommandCodeSkillEntity__ToArray__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_CommandCodeSkillEntity___ctor__, v9);
    sub_B16FFC(&System_Collections_Generic_List_CommandCodeSkillEntity__TypeInfo, v10);
    byte_40FA5C9 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_16;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v17 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_CommandCodeSkillEntity__TypeInfo,
                                                                                                  v13,
                                                                                                  v14,
                                                                                                  v15,
                                                                                                  v16);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v17,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_CommandCodeSkillEntity___ctor__);
  if ( Count >= 1 )
  {
    v18 = 0;
    while ( 1 )
    {
      v19 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !v19 )
        break;
      Item = (EventMissionProgressRequest_Argument_ProgressData_o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                      v19,
                                                                      v18,
                                                                      (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v21 = *(&CommandCodeSkillEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v21
          && (CommandCodeSkillEntity_c *)Item->klass->_2.typeHierarchy[v21 - 1] == CommandCodeSkillEntity_TypeInfo
          && Item->fields.missionTargetId == commandCodeId )
        {
          if ( !v17 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v17,
            Item,
            (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_CommandCodeSkillEntity__Add__);
        }
      }
      if ( ++v18 >= Count )
        goto LABEL_14;
    }
LABEL_16:
    sub_B170D4();
  }
LABEL_14:
  if ( !v17 )
    goto LABEL_16;
  return (CommandCodeSkillEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                           (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v17,
                                           (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_CommandCodeSkillEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
CommandCodeSkillEntity_array *__fastcall CommandCodeSkillMaster__getEntityListFromIdNum(
        CommandCodeSkillMaster_o *this,
        int32_t commandCodeId,
        int32_t num,
        const MethodInfo *method)
{
  CommandCodeSkillMaster_o *v6; // x20
  System_String_o *PriorityKey; // x0
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+8h] [xbp-28h] BYREF

  v6 = this;
  if ( (byte_40FA5CA & 1) == 0 )
  {
    this = (CommandCodeSkillMaster_o *)sub_B16FFC(
                                         &Method_System_Collections_Generic_Dictionary_string__CommandCodeSkillEntity____TryGetValue__,
                                         *(_QWORD *)&commandCodeId);
    byte_40FA5CA = 1;
  }
  value = 0LL;
  PriorityKey = CommandCodeSkillMaster__getPriorityKey(this, commandCodeId, num, method);
  if ( !v6->fields.listCache )
    sub_B170D4();
  if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
         (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v6->fields.listCache,
         (System_Xml_XmlQualifiedName_o *)PriorityKey,
         &value,
         (const MethodInfo_2DA5A18 *)Method_System_Collections_Generic_Dictionary_string__CommandCodeSkillEntity____TryGetValue__) )
  {
    return (CommandCodeSkillEntity_array *)value;
  }
  else
  {
    return 0LL;
  }
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall CommandCodeSkillMaster__getPriorityKey(
        CommandCodeSkillMaster_o *this,
        int32_t commandCodeId,
        int32_t num,
        const MethodInfo *method)
{
  System_String_o *v4; // x19
  System_String_o *v5; // x0
  int32_t v7; // [xsp+8h] [xbp-8h] BYREF
  int32_t v8; // [xsp+Ch] [xbp-4h] BYREF

  v8 = commandCodeId;
  v7 = num;
  if ( (byte_40FA5C7 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_1223/*":"*/, *(_QWORD *)&commandCodeId);
    byte_40FA5C7 = 1;
  }
  v4 = System_Int32__ToString((int32_t)&v8, 0LL);
  v5 = System_Int32__ToString((int32_t)&v7, 0LL);
  return System_String__Concat_43746016(v4, (System_String_o *)StringLiteral_1223/*":"*/, v5, 0LL);
}


void __fastcall CommandCodeSkillMaster__getSkillInfo(
        CommandCodeSkillMaster_o *this,
        System_Int32_array **idList,
        System_String_array **titleList,
        System_String_array **explanationList,
        int32_t commandCodeId,
        int64_t userId,
        int32_t beforeClearQuestId,
        const MethodInfo *method)
{
  __int64 v13; // x1
  __int64 v14; // x1
  BalanceConfig_c *v15; // x0
  System_Int32_array *v16; // x0
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  __int64 v23; // x2
  System_String_array *v24; // x0
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  __int64 v31; // x2
  System_String_array *v32; // x0
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  BattleServantConfConponent_o *v39; // x19
  int64_t v40; // x2
  const MethodInfo *v41; // x4
  __int64 v42; // x1
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  MethodInfo *v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  CommandCodeSkillEntity_array *UseEntityList; // x22
  unsigned __int64 v50; // x26
  unsigned int v51; // w24
  __int64 i; // x28
  CommandCodeSkillEntity_o *v53; // x0
  System_Int32_array *v54; // x8
  BattleServantConfConponent_c *klass; // x8
  System_String_array *v56; // x10
  System_Int32_array *v57; // x8
  System_String_array *v58; // x8
  __int64 v59; // x10
  int v60; // w9
  unsigned int *v61; // x19
  unsigned __int64 v62; // x8
  unsigned int *v63; // x9
  System_Int32_array **v64; // x23
  unsigned int *v65; // x0
  System_String_array **v66; // x3
  System_Boolean_array **v67; // x4
  System_Int32_array **v68; // x5
  System_Int32_array *v69; // x6
  System_Int32_array *v70; // x7
  System_String_array *v71; // x19
  unsigned __int64 max_length; // x8
  Il2CppClass **v73; // x9
  System_Int32_array **v74; // x23
  Il2CppClass **v75; // x0
  System_Int32_array *v76; // x8
  System_String_array **v77; // x3
  System_Boolean_array **v78; // x4
  System_Int32_array **v79; // x5
  System_Int32_array *v80; // x6
  System_Int32_array *v81; // x7
  System_String_array *v82; // x8
  System_String_array **v83; // x2
  System_String_array **v84; // x3
  System_Boolean_array **v85; // x4
  System_Int32_array **v86; // x5
  System_Int32_array *v87; // x6
  System_Int32_array *v88; // x7
  System_String_array **v89; // x2
  System_String_array **v90; // x3
  System_Boolean_array **v91; // x4
  System_Int32_array **v92; // x5
  System_Int32_array *v93; // x6
  System_Int32_array *v94; // x7

  if ( (byte_40FA5CC & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, idList);
    sub_B16FFC(&int___TypeInfo, v13);
    sub_B16FFC(&string___TypeInfo, v14);
    byte_40FA5CC = 1;
  }
  v15 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v15 = BalanceConfig_TypeInfo;
  }
  v16 = (System_Int32_array *)sub_B17014(
                                int___TypeInfo,
                                (unsigned int)v15->static_fields->SvtPassiveSkillListMax,
                                titleList);
  *idList = v16;
  sub_B16F98((BattleServantConfConponent_o *)idList, (System_Int32_array **)v16, v17, v18, v19, v20, v21, v22);
  v24 = (System_String_array *)sub_B17014(
                                 string___TypeInfo,
                                 (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtPassiveSkillListMax,
                                 v23);
  *titleList = v24;
  sub_B16F98((BattleServantConfConponent_o *)titleList, (System_Int32_array **)v24, v25, v26, v27, v28, v29, v30);
  v32 = (System_String_array *)sub_B17014(
                                 string___TypeInfo,
                                 (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtPassiveSkillListMax,
                                 v31);
  *explanationList = v32;
  sub_B16F98((BattleServantConfConponent_o *)explanationList, (System_Int32_array **)v32, v33, v34, v35, v36, v37, v38);
  v39 = (BattleServantConfConponent_o *)titleList;
  UseEntityList = CommandCodeSkillMaster__getUseEntityList(this, commandCodeId, v40, beforeClearQuestId, v41);
  v50 = 0LL;
  v51 = 0;
  for ( i = 32LL; ; i += 8LL )
  {
    v53 = (CommandCodeSkillEntity_o *)BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v53 = (CommandCodeSkillEntity_o *)BalanceConfig_TypeInfo;
    }
    if ( (__int64)v50 >= *(int *)(v53[3].fields.endedAt + 36) )
      break;
    if ( !UseEntityList )
      goto LABEL_54;
    if ( v50 >= UseEntityList->max_length )
      goto LABEL_53;
    v53 = UseEntityList->m_Items[v50];
    v54 = *idList;
    if ( v53 )
    {
      if ( !v54 )
        goto LABEL_54;
      if ( v51 >= v54->max_length )
        goto LABEL_53;
      v54->m_Items[v51 + 1] = v53->fields.skillId;
      klass = v39->klass;
      if ( !v39->klass )
        goto LABEL_54;
      v56 = *explanationList;
      if ( !*explanationList )
        goto LABEL_54;
      if ( v51 >= LODWORD(klass->_1.namespaze) || v51 >= v56->max_length )
        goto LABEL_53;
      CommandCodeSkillEntity__getEffectExplanation(
        v53,
        (System_String_o **)&klass->_1.byval_arg.data + (int)v51,
        &v56->m_Items[v51],
        0,
        v45);
      if ( v50 != v51 )
      {
        v57 = *idList;
        if ( !*idList )
          goto LABEL_54;
        if ( v50 >= v57->max_length )
          goto LABEL_53;
        v57->m_Items[v50 + 1] = 0;
        v58 = (System_String_array *)v39->klass;
        if ( !v39->klass )
          goto LABEL_54;
LABEL_41:
        if ( v50 >= v58->max_length )
          goto LABEL_53;
        v58->m_Items[v50] = 0LL;
        sub_B16F98(
          (BattleServantConfConponent_o *)((char *)v58 + i),
          0LL,
          v43,
          v44,
          (System_Boolean_array **)v45,
          v46,
          v47,
          v48);
        v82 = *explanationList;
        if ( !*explanationList )
LABEL_54:
          sub_B170D4();
        if ( v50 >= v82->max_length )
          goto LABEL_53;
        v82->m_Items[v50] = 0LL;
        sub_B16F98((BattleServantConfConponent_o *)((char *)v82 + i), 0LL, v43, v77, v78, v79, v80, v81);
      }
      goto LABEL_45;
    }
    if ( !v54 )
      goto LABEL_54;
    v59 = *(_QWORD *)&v54->max_length;
    if ( v50 >= (unsigned int)v59 )
      goto LABEL_53;
    v60 = v54->m_Items[v50 + 1];
    if ( v60 >= 1 )
    {
      if ( v50 != v51 )
      {
        if ( v51 >= (unsigned int)v59 )
          goto LABEL_53;
        v54->m_Items[v51 + 1] = v60;
        v61 = (unsigned int *)v39->klass;
        if ( !v61 )
          goto LABEL_54;
        v62 = v61[6];
        if ( v50 >= v62 )
          goto LABEL_53;
        v63 = &v61[2 * v50];
        v64 = (System_Int32_array **)*((_QWORD *)v63 + 4);
        if ( v64 )
        {
          v53 = (CommandCodeSkillEntity_o *)sub_B170BC(*((_QWORD *)v63 + 4), *(_QWORD *)(*(_QWORD *)v61 + 64LL));
          if ( !v53 )
            goto LABEL_55;
          v62 = *((_QWORD *)v61 + 3);
        }
        if ( v51 >= (unsigned int)v62 )
          goto LABEL_53;
        v65 = &v61[2 * v51];
        *((_QWORD *)v65 + 4) = v64;
        sub_B16F98(
          (BattleServantConfConponent_o *)(v65 + 8),
          v64,
          v43,
          v44,
          (System_Boolean_array **)v45,
          v46,
          v47,
          v48);
        v71 = *explanationList;
        if ( !*explanationList )
          goto LABEL_54;
        max_length = v71->max_length;
        if ( v50 >= max_length )
          goto LABEL_53;
        v73 = &v71->obj.klass + v50;
        v74 = (System_Int32_array **)v73[4];
        if ( v74 )
        {
          v53 = (CommandCodeSkillEntity_o *)sub_B170BC(v73[4], v71->obj.klass->_1.element_class);
          if ( !v53 )
          {
LABEL_55:
            sub_B170F4(v53);
            sub_B170A0();
          }
          max_length = *(_QWORD *)&v71->max_length;
        }
        if ( v51 >= (unsigned int)max_length )
          goto LABEL_53;
        v75 = &v71->obj.klass + (int)v51;
        v75[4] = (Il2CppClass *)v74;
        sub_B16F98((BattleServantConfConponent_o *)(v75 + 4), v74, v43, v66, v67, v68, v69, v70);
        v76 = *idList;
        if ( !*idList )
          goto LABEL_54;
        v39 = (BattleServantConfConponent_o *)titleList;
        if ( v50 >= v76->max_length )
        {
LABEL_53:
          sub_B17100(v53, v42, v43);
          sub_B170A0();
        }
        v76->m_Items[v50 + 1] = 0;
        v58 = *titleList;
        if ( !*titleList )
          goto LABEL_54;
        goto LABEL_41;
      }
LABEL_45:
      ++v51;
    }
    ++v50;
  }
  if ( !v51 )
  {
    *idList = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)idList, 0LL, v43, v44, (System_Boolean_array **)v45, v46, v47, v48);
    v39->klass = 0LL;
    sub_B16F98(v39, 0LL, v83, v84, v85, v86, v87, v88);
    *explanationList = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)explanationList, 0LL, v89, v90, v91, v92, v93, v94);
  }
}


CommandCodeSkillEntity_o *__fastcall CommandCodeSkillMaster__getUseEntity(
        CommandCodeSkillMaster_o *this,
        int32_t commandCodeId,
        int32_t num,
        int64_t userId,
        int32_t beforeClearQuestId,
        const MethodInfo *method)
{
  CommandCodeSkillEntity_array *EntityListFromIdNum; // x0
  int64_t v8; // x1
  __int64 v9; // x2
  const MethodInfo *v10; // x3
  CommandCodeSkillEntity_array *v11; // x20
  int i; // w22
  Il2CppClass **v13; // x8
  CommandCodeSkillEntity_o *v14; // x21

  EntityListFromIdNum = CommandCodeSkillMaster__getEntityListFromIdNum(
                          this,
                          commandCodeId,
                          num,
                          (const MethodInfo *)userId);
  if ( EntityListFromIdNum )
  {
    v11 = EntityListFromIdNum;
    for ( i = EntityListFromIdNum->max_length - 1; (i & 0x80000000) == 0; --i )
    {
      if ( i >= v11->max_length )
      {
        sub_B17100(EntityListFromIdNum, v8, v9);
        sub_B170A0();
      }
      v13 = &v11->obj.klass + i;
      v14 = (CommandCodeSkillEntity_o *)v13[4];
      if ( !v14 )
        sub_B170D4();
      EntityListFromIdNum = (CommandCodeSkillEntity_array *)CommandCodeSkillEntity__isUse(
                                                              (CommandCodeSkillEntity_o *)v13[4],
                                                              v8,
                                                              beforeClearQuestId,
                                                              v10);
      if ( ((unsigned __int8)EntityListFromIdNum & 1) != 0 )
        return v14;
    }
  }
  return 0LL;
}


// local variable allocation has failed, the output may be wrong!
CommandCodeSkillEntity_array *__fastcall CommandCodeSkillMaster__getUseEntityList(
        CommandCodeSkillMaster_o *this,
        int32_t commandCodeId,
        int64_t userId,
        int32_t beforeClearQuestId,
        const MethodInfo *method)
{
  __int64 v8; // x1
  BalanceConfig_c *v9; // x0
  int64_t v10; // x3
  const MethodInfo *v11; // x5
  CommandCodeSkillEntity_array *v12; // x22
  signed __int64 v13; // x24
  BattleServantConfConponent_o *i; // x23
  signed __int64 v15; // x25
  CommandCodeSkillEntity_o *UseEntity; // x0
  __int64 v17; // x1
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_Int32_array **v24; // x24
  unsigned __int64 v25; // x25
  BalanceConfig_c *v26; // x0

  if ( (byte_40FA5CB & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, *(_QWORD *)&commandCodeId);
    sub_B16FFC(&CommandCodeSkillEntity___TypeInfo, v8);
    byte_40FA5CB = 1;
  }
  v9 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v9 = BalanceConfig_TypeInfo;
  }
  v12 = (CommandCodeSkillEntity_array *)sub_B17014(
                                          CommandCodeSkillEntity___TypeInfo,
                                          (unsigned int)v9->static_fields->SvtPassiveSkillListMax,
                                          userId);
  v13 = 0LL;
  for ( i = (BattleServantConfConponent_o *)v12->m_Items; ; i = (BattleServantConfConponent_o *)((char *)i + 8) )
  {
    v26 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v26 = BalanceConfig_TypeInfo;
    }
    if ( v13 >= v26->static_fields->SvtPassiveSkillListMax )
      break;
    v15 = v13 + 1;
    UseEntity = CommandCodeSkillMaster__getUseEntity(this, commandCodeId, (int)v13 + 1, v10, beforeClearQuestId, v11);
    if ( !v12 )
      sub_B170D4();
    v24 = (System_Int32_array **)UseEntity;
    if ( UseEntity )
    {
      UseEntity = (CommandCodeSkillEntity_o *)sub_B170BC(UseEntity, v12->obj.klass->_1.element_class);
      if ( !UseEntity )
      {
        sub_B170F4(0LL);
        sub_B170A0();
      }
    }
    v25 = v15 - 1;
    if ( v25 >= v12->max_length )
    {
      sub_B17100(UseEntity, v17, v18);
      sub_B170A0();
    }
    i->klass = (BattleServantConfConponent_c *)v24;
    sub_B16F98(i, v24, v18, v19, v20, v21, v22, v23);
    v13 = v25 + 1;
  }
  return v12;
}


bool __fastcall CommandCodeSkillMaster__preProcess(CommandCodeSkillMaster_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
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
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x1
  struct System_Collections_Generic_Dictionary_string__CommandCodeSkillEntity____o *listCache; // x0
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x3
  __int64 v34; // x4
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v35; // x20
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x21
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v39; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v42; // x8
  unsigned __int64 v43; // x10
  int32_t *v44; // x11
  __int64 v45; // x0
  __int64 v46; // x0
  const MethodInfo *v47; // x3
  EventMissionProgressRequest_Argument_ProgressData_o *v48; // x22
  __int64 v49; // x9
  System_String_o *PriorityKey; // x0
  System_Xml_XmlQualifiedName_o *v51; // x23
  __int64 v52; // x1
  __int64 v53; // x2
  __int64 v54; // x3
  __int64 v55; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v56; // x24
  System_Xml_Schema_XmlSchemaObject_o *v57; // x2
  System_Collections_Generic_IEnumerator_T__c *v58; // x8
  unsigned __int64 v59; // x10
  int32_t *v60; // x11
  __int64 v61; // x0
  __int64 v62; // x1
  __int64 v63; // x2
  __int64 v64; // x3
  __int64 v65; // x4
  CommandCodeSkillMaster___c_c *v66; // x0
  Il2CppObject *v67; // x21
  Il2CppObject *key; // x22
  struct CommandCodeSkillMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__5_0; // x23
  Il2CppObject *v71; // x24
  struct CommandCodeSkillMaster___c_StaticFields *v72; // x0
  System_String_array **v73; // x2
  System_String_array **v74; // x3
  System_Boolean_array **v75; // x4
  System_Int32_array **v76; // x5
  System_Int32_array *v77; // x6
  System_Int32_array *v78; // x7
  struct System_Collections_Generic_Dictionary_string__CommandCodeSkillEntity____o *v79; // x23
  System_Xml_Schema_XmlSchemaObject_o *v80; // x0
  int v81; // w21
  CommandCodeSkillMaster_o *v83; // [xsp+10h] [xbp-C0h]
  System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl__o v84; // [xsp+18h] [xbp-B8h] BYREF
  int v85[2]; // [xsp+40h] [xbp-90h]
  int v86; // [xsp+48h] [xbp-88h]
  System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl__o v87; // [xsp+50h] [xbp-80h] BYREF
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+78h] [xbp-58h] BYREF

  if ( (byte_40FA5C8 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, method);
    sub_B16FFC(&CommandCodeSkillEntity_TypeInfo, v3);
    sub_B16FFC(&Method_System_Comparison_CommandCodeSkillEntity___ctor__, v4);
    sub_B16FFC(&System_Comparison_CommandCodeSkillEntity__TypeInfo, v5);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__List_CommandCodeSkillEntity___Clear__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__CommandCodeSkillEntity____Clear__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__List_CommandCodeSkillEntity___GetEnumerator__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__List_CommandCodeSkillEntity___TryGetValue__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__List_CommandCodeSkillEntity____ctor__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__List_CommandCodeSkillEntity___set_Item__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__CommandCodeSkillEntity____set_Item__, v12);
    sub_B16FFC(&System_Collections_Generic_Dictionary_string__List_CommandCodeSkillEntity___TypeInfo, v13);
    sub_B16FFC(
      &Method_System_Collections_Generic_Dictionary_Enumerator_string__List_CommandCodeSkillEntity___Dispose__,
      v14);
    sub_B16FFC(
      &Method_System_Collections_Generic_Dictionary_Enumerator_string__List_CommandCodeSkillEntity___MoveNext__,
      v15);
    sub_B16FFC(
      &Method_System_Collections_Generic_Dictionary_Enumerator_string__List_CommandCodeSkillEntity___get_Current__,
      v16);
    sub_B16FFC(&System_IDisposable_TypeInfo, v17);
    sub_B16FFC(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v18);
    sub_B16FFC(&System_Collections_IEnumerator_TypeInfo, v19);
    sub_B16FFC(&Method_System_Collections_Generic_KeyValuePair_string__List_CommandCodeSkillEntity___get_Key__, v20);
    sub_B16FFC(&Method_System_Collections_Generic_KeyValuePair_string__List_CommandCodeSkillEntity___get_Value__, v21);
    sub_B16FFC(&Method_System_Collections_Generic_List_CommandCodeSkillEntity__Add__, v22);
    sub_B16FFC(&Method_System_Collections_Generic_List_CommandCodeSkillEntity__Clear__, v23);
    sub_B16FFC(&Method_System_Collections_Generic_List_CommandCodeSkillEntity__Sort__, v24);
    sub_B16FFC(&Method_System_Collections_Generic_List_CommandCodeSkillEntity__ToArray__, v25);
    sub_B16FFC(&Method_System_Collections_Generic_List_CommandCodeSkillEntity___ctor__, v26);
    sub_B16FFC(&System_Collections_Generic_List_CommandCodeSkillEntity__TypeInfo, v27);
    sub_B16FFC(&Method_CommandCodeSkillMaster___c__preProcess_b__5_0__, v28);
    sub_B16FFC(&CommandCodeSkillMaster___c_TypeInfo, v29);
    byte_40FA5C8 = 1;
  }
  value = 0LL;
  memset(&v87, 0, sizeof(v87));
  v86 = 0;
  listCache = this->fields.listCache;
  if ( !listCache )
    goto LABEL_57;
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Clear(
    (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)listCache,
    (const MethodInfo_2DA3DF4 *)Method_System_Collections_Generic_Dictionary_string__CommandCodeSkillEntity____Clear__);
  v35 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)sub_B170CC(
                                                                                        System_Collections_Generic_Dictionary_string__List_CommandCodeSkillEntity___TypeInfo,
                                                                                        v31,
                                                                                        v32,
                                                                                        v33,
                                                                                        v34);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject____ctor(
    v35,
    (const MethodInfo_2DA3068 *)Method_System_Collections_Generic_Dictionary_string__List_CommandCodeSkillEntity____ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_57;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_290E508 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  v83 = this;
  if ( !Enumerator )
    sub_B170D4();
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v39 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v39;
        p_offset += 4;
        if ( v39 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_AAFEF8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v42 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v43 = 0LL;
      v44 = &v42->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v44 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v43;
        v44 += 4;
        if ( v43 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_17;
      }
      v45 = (__int64)&v42->vtable[*v44].method;
    }
    else
    {
LABEL_17:
      v45 = sub_AAFEF8(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v46 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v45)(
            Enumerator,
            *(_QWORD *)(v45 + 8));
    v48 = (EventMissionProgressRequest_Argument_ProgressData_o *)v46;
    if ( !v46 )
      sub_B170D4();
    v49 = *(&CommandCodeSkillEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*(_QWORD *)v46 + 300LL) < (unsigned int)v49
      || *(CommandCodeSkillEntity_c **)(*(_QWORD *)(*(_QWORD *)v46 + 200LL) + 8 * v49 - 8) != CommandCodeSkillEntity_TypeInfo )
    {
      sub_B173C8(v46);
LABEL_52:
      sub_B170D4();
    }
    PriorityKey = CommandCodeSkillMaster__getPriorityKey(
                    (CommandCodeSkillMaster_o *)v46,
                    *(_DWORD *)(v46 + 16),
                    *(_DWORD *)(v46 + 20),
                    v47);
    if ( !v35 )
      sub_B170D4();
    v51 = (System_Xml_XmlQualifiedName_o *)PriorityKey;
    if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
            v35,
            (System_Xml_XmlQualifiedName_o *)PriorityKey,
            &value,
            (const MethodInfo_2DA5A18 *)Method_System_Collections_Generic_Dictionary_string__List_CommandCodeSkillEntity___TryGetValue__) )
    {
      v56 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(System_Collections_Generic_List_CommandCodeSkillEntity__TypeInfo, v52, v53, v54, v55);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
        v56,
        (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_CommandCodeSkillEntity___ctor__);
      value = (System_Xml_Schema_XmlSchemaObject_o *)v56;
      v57 = (System_Xml_Schema_XmlSchemaObject_o *)v56;
      this = v83;
      System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
        v35,
        v51,
        v57,
        (const MethodInfo_2DA3BF0 *)Method_System_Collections_Generic_Dictionary_string__List_CommandCodeSkillEntity___set_Item__);
    }
    if ( !value )
      sub_B170D4();
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)value,
      v48,
      (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_CommandCodeSkillEntity__Add__);
  }
  v85[0] = 117;
  v86 = 1;
  v58 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v59 = 0LL;
    v60 = &v58->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v60 - 1) != System_IDisposable_TypeInfo )
    {
      ++v59;
      v60 += 4;
      if ( v59 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_31;
    }
    v61 = (__int64)&v58->vtable[*v60].method;
  }
  else
  {
LABEL_31:
    v61 = sub_AAFEF8(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v61)(Enumerator, *(_QWORD *)(v61 + 8));
  v86 = 0;
  if ( !v35 )
LABEL_57:
    sub_B170D4();
  System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaElementDecl___GetEnumerator(
    (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&v84,
    (System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaElementDecl__o *)v35,
    (const MethodInfo_2DA41F4 *)Method_System_Collections_Generic_Dictionary_string__List_CommandCodeSkillEntity___GetEnumerator__);
  v87 = v84;
  while ( System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl___MoveNext(
            &v87,
            (const MethodInfo_26BCF58 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__List_CommandCodeSkillEntity___MoveNext__) )
  {
    v66 = CommandCodeSkillMaster___c_TypeInfo;
    key = v87.fields.current.fields.key;
    v67 = v87.fields.current.fields.value;
    if ( (BYTE3(CommandCodeSkillMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CommandCodeSkillMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CommandCodeSkillMaster___c_TypeInfo);
      v66 = CommandCodeSkillMaster___c_TypeInfo;
    }
    static_fields = v66->static_fields;
    _9__5_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__5_0;
    if ( !_9__5_0 )
    {
      if ( (BYTE3(v66->vtable._0_Equals.methodPtr) & 4) != 0 && !v66->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v66);
        static_fields = CommandCodeSkillMaster___c_TypeInfo->static_fields;
      }
      v71 = (Il2CppObject *)static_fields->__9;
      _9__5_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B170CC(
                                                                            System_Comparison_CommandCodeSkillEntity__TypeInfo,
                                                                            v62,
                                                                            v63,
                                                                            v64,
                                                                            v65);
      System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
        _9__5_0,
        v71,
        Method_CommandCodeSkillMaster___c__preProcess_b__5_0__,
        (const MethodInfo_25BFD48 *)Method_System_Comparison_CommandCodeSkillEntity___ctor__);
      v72 = CommandCodeSkillMaster___c_TypeInfo->static_fields;
      v72->__9__5_0 = (struct System_Comparison_CommandCodeSkillEntity__o *)_9__5_0;
      sub_B16F98(
        (BattleServantConfConponent_o *)&v72->__9__5_0,
        (System_Int32_array **)_9__5_0,
        v73,
        v74,
        v75,
        v76,
        v77,
        v78);
      this = v83;
    }
    if ( !v67 )
      goto LABEL_52;
    System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
      (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v67,
      (System_Comparison_T__o *)_9__5_0,
      (const MethodInfo_2F27DB4 *)Method_System_Collections_Generic_List_CommandCodeSkillEntity__Sort__);
    v79 = this->fields.listCache;
    v80 = (System_Xml_Schema_XmlSchemaObject_o *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                   (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v67,
                                                   (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_CommandCodeSkillEntity__ToArray__);
    if ( !v79 )
      sub_B170D4();
    System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
      (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v79,
      (System_Xml_XmlQualifiedName_o *)key,
      v80,
      (const MethodInfo_2DA3BF0 *)Method_System_Collections_Generic_Dictionary_string__CommandCodeSkillEntity____set_Item__);
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      (System_Collections_Generic_List_XWeaponTrail_Element__o *)v67,
      (const MethodInfo_2F260E0 *)Method_System_Collections_Generic_List_CommandCodeSkillEntity__Clear__);
  }
  v85[0] = 240;
  v81 = ++v86;
  System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl___Dispose(
    &v87,
    (const MethodInfo_26BD0C0 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__List_CommandCodeSkillEntity___Dispose__);
  if ( v81 && v85[v81 - 1] == 240 )
    v86 = v81 - 1;
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Clear(
    v35,
    (const MethodInfo_2DA3DF4 *)Method_System_Collections_Generic_Dictionary_string__List_CommandCodeSkillEntity___Clear__);
  return 1;
}


void __fastcall CommandCodeSkillMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v5; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40F713B & 1) == 0 )
  {
    sub_B16FFC(&CommandCodeSkillMaster___c_TypeInfo, v1);
    byte_40F713B = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(CommandCodeSkillMaster___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)CommandCodeSkillMaster___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
}


void __fastcall CommandCodeSkillMaster___c___ctor(CommandCodeSkillMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall CommandCodeSkillMaster___c___preProcess_b__5_0(
        CommandCodeSkillMaster___c_o *this,
        CommandCodeSkillEntity_o *a,
        CommandCodeSkillEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_B170D4();
  return a->fields.priority - b->fields.priority;
}