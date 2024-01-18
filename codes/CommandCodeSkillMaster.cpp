void __fastcall CommandCodeSkillMaster___ctor(CommandCodeSkillMaster_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v5; // x20
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_4188110 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_CommandCodeSkillMaster__CommandCodeSkillEntity__string___ctor__, method);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__CommandCodeSkillEntity_____ctor__, v3);
    sub_B2C35C(&System_Collections_Generic_Dictionary_string__CommandCodeSkillEntity____TypeInfo, v4);
    byte_4188110 = 1;
  }
  v5 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)sub_B2C42C(System_Collections_Generic_Dictionary_string__CommandCodeSkillEntity____TypeInfo);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject____ctor(
    v5,
    (const MethodInfo_2DB1110 *)Method_System_Collections_Generic_Dictionary_string__CommandCodeSkillEntity_____ctor__);
  this->fields.listCache = (struct System_Collections_Generic_Dictionary_string__CommandCodeSkillEntity____o *)v5;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.listCache,
    (System_Int32_array **)v5,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    253,
    (const MethodInfo_24E4484 *)Method_DataMasterBase_CommandCodeSkillMaster__CommandCodeSkillEntity__string___ctor__);
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

  if ( (byte_418810E & 1) == 0 )
  {
    sub_B2C35C(
      &Method_DataMasterBase_CommandCodeSkillMaster__CommandCodeSkillEntity__string__GetEntity__,
      *(_QWORD *)&commandCodeId);
    byte_418810E = 1;
  }
  PK = CommandCodeSkillEntity__CreatePK(commandCodeId, num, priority, *(const MethodInfo **)&priority);
  return (CommandCodeSkillEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                       (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                       PK,
                                       (const MethodInfo_24E4520 *)Method_DataMasterBase_CommandCodeSkillMaster__CommandCodeSkillEntity__string__GetEntity__);
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

  if ( (byte_418810F & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_CommandCodeSkillMaster__CommandCodeSkillEntity__string__TryGetEntity__, entity);
    byte_418810F = 1;
  }
  PK = CommandCodeSkillEntity__CreatePK(commandCodeId, num, priority, *(const MethodInfo **)&num);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_24E4578 *)Method_DataMasterBase_CommandCodeSkillMaster__CommandCodeSkillEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
CommandCodeSkillEntity_array *__fastcall CommandCodeSkillMaster__getCommandCodeActiveSkillList(
        CommandCodeSkillMaster_o *this,
        int32_t commandCodeId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v9; // x21
  __int64 v10; // x1
  const MethodInfo *v11; // x3
  int v12; // w22
  _QWORD *p_image; // x0
  __int64 v14; // x8
  __int64 v15; // x10
  unsigned int v16; // w9
  int v17; // w12
  __int64 v18; // x13
  int v19; // w13
  __int64 v21; // x0

  if ( (byte_4188117 & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, *(_QWORD *)&commandCodeId);
    sub_B2C35C(&Method_System_Collections_Generic_List_CommandCodeSkillEntity__Add__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_CommandCodeSkillEntity__ToArray__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_CommandCodeSkillEntity___ctor__, v7);
    sub_B2C35C(&System_Collections_Generic_List_CommandCodeSkillEntity__TypeInfo, v8);
    byte_4188117 = 1;
  }
  v9 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_CommandCodeSkillEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v9,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_CommandCodeSkillEntity___ctor__);
  v12 = 0;
  while ( 1 )
  {
    p_image = &BalanceConfig_TypeInfo->_1.image;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      p_image = &BalanceConfig_TypeInfo->_1.image;
    }
    if ( v12 >= *(_DWORD *)(p_image[23] + 36LL) )
      break;
    p_image = CommandCodeSkillMaster__getEntityListFromIdNum(this, commandCodeId, ++v12, v11);
    if ( p_image )
    {
      v14 = p_image[3];
      if ( v14 )
      {
        if ( (int)v14 >= 1 )
        {
          v15 = 0LL;
          v16 = 0;
          v17 = 1;
          while ( 1 )
          {
            v18 = p_image[v15 + 4];
            if ( !v18 )
              break;
            v19 = *(_DWORD *)(v18 + 24);
            if ( v19 > v17 )
              v16 = v15;
            ++v15;
            if ( v19 > v17 )
              v17 = v19;
            if ( (int)v15 >= (int)v14 )
              goto LABEL_16;
          }
LABEL_25:
          sub_B2C434(p_image, v10);
        }
        v16 = 0;
LABEL_16:
        if ( v16 >= (unsigned int)v14 )
        {
          v21 = sub_B2C460(p_image);
          sub_B2C400(v21, 0LL);
        }
        if ( !v9 )
          goto LABEL_25;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v9,
          (EventMissionProgressRequest_Argument_ProgressData_o *)p_image[(int)v16 + 4],
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_CommandCodeSkillEntity__Add__);
      }
    }
  }
  if ( !v9 )
    goto LABEL_25;
  return (CommandCodeSkillEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                           (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v9,
                                           (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_CommandCodeSkillEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
CommandCodeSkillEntity_array *__fastcall CommandCodeSkillMaster__getCommandCodeSkillList(
        CommandCodeSkillMaster_o *this,
        int32_t commandCodeId,
        const MethodInfo *method)
{
  int32_t v3; // w19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w21
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v13; // x22
  int32_t v14; // w23
  __int64 v15; // x10

  v3 = commandCodeId;
  if ( (byte_4188113 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&commandCodeId);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_B2C35C(&CommandCodeSkillEntity_TypeInfo, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_CommandCodeSkillEntity__Add__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_CommandCodeSkillEntity__ToArray__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_CommandCodeSkillEntity___ctor__, v9);
    sub_B2C35C(&System_Collections_Generic_List_CommandCodeSkillEntity__TypeInfo, v10);
    byte_4188113 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_16;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v13 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_CommandCodeSkillEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v13,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_CommandCodeSkillEntity___ctor__);
  if ( Count >= 1 )
  {
    v14 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                           list,
                                                                                           v14,
                                                                                           (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        *(_QWORD *)&commandCodeId = list;
        v15 = *(&CommandCodeSkillEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&list->klass->_2.bitflags2 + 1) >= (unsigned int)v15
          && (CommandCodeSkillEntity_c *)list->klass->_2.typeHierarchy[v15 - 1] == CommandCodeSkillEntity_TypeInfo
          && LODWORD(list->fields.items) == v3 )
        {
          if ( !v13 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v13,
            (EventMissionProgressRequest_Argument_ProgressData_o *)list,
            (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_CommandCodeSkillEntity__Add__);
        }
      }
      if ( ++v14 >= Count )
        goto LABEL_14;
    }
LABEL_16:
    sub_B2C434(list, *(_QWORD *)&commandCodeId);
  }
LABEL_14:
  if ( !v13 )
    goto LABEL_16;
  return (CommandCodeSkillEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                           (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v13,
                                           (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_CommandCodeSkillEntity__ToArray__);
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
  __int64 v8; // x1
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+8h] [xbp-28h] BYREF

  v6 = this;
  if ( (byte_4188114 & 1) == 0 )
  {
    this = (CommandCodeSkillMaster_o *)sub_B2C35C(
                                         &Method_System_Collections_Generic_Dictionary_string__CommandCodeSkillEntity____TryGetValue__,
                                         *(_QWORD *)&commandCodeId);
    byte_4188114 = 1;
  }
  value = 0LL;
  PriorityKey = CommandCodeSkillMaster__getPriorityKey(this, commandCodeId, num, method);
  if ( !v6->fields.listCache )
    sub_B2C434(PriorityKey, v8);
  if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
         (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v6->fields.listCache,
         (System_Xml_XmlQualifiedName_o *)PriorityKey,
         &value,
         (const MethodInfo_2DB3AC0 *)Method_System_Collections_Generic_Dictionary_string__CommandCodeSkillEntity____TryGetValue__) )
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
  if ( (byte_4188111 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_1225/*":"*/, *(_QWORD *)&commandCodeId);
    byte_4188111 = 1;
  }
  v4 = System_Int32__ToString((int32_t)&v8, 0LL);
  v5 = System_Int32__ToString((int32_t)&v7, 0LL);
  return System_String__Concat_44307816(v4, (System_String_o *)StringLiteral_1225/*":"*/, v5, 0LL);
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
  System_String_array *v23; // x0
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  System_String_array *v30; // x0
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  BattleServantConfConponent_o *v37; // x19
  int64_t v38; // x2
  const MethodInfo *v39; // x4
  __int64 v40; // x1
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  MethodInfo *v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  CommandCodeSkillEntity_array *UseEntityList; // x22
  unsigned __int64 v48; // x26
  unsigned int v49; // w24
  __int64 i; // x28
  CommandCodeSkillEntity_o *v51; // x0
  System_Int32_array *v52; // x8
  BattleServantConfConponent_c *klass; // x8
  System_String_array *v54; // x10
  System_Int32_array *v55; // x8
  System_String_array *v56; // x8
  __int64 v57; // x10
  int v58; // w9
  unsigned int *v59; // x19
  unsigned __int64 v60; // x8
  unsigned int *v61; // x9
  System_Int32_array **v62; // x23
  unsigned int *v63; // x0
  System_String_array **v64; // x2
  System_String_array **v65; // x3
  System_Boolean_array **v66; // x4
  System_Int32_array **v67; // x5
  System_Int32_array *v68; // x6
  System_Int32_array *v69; // x7
  System_String_array *v70; // x19
  unsigned __int64 max_length; // x8
  Il2CppClass **v72; // x9
  System_Int32_array **v73; // x23
  Il2CppClass **v74; // x0
  System_Int32_array *v75; // x8
  System_String_array **v76; // x2
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
  __int64 v95; // x0
  __int64 v96; // x0

  if ( (byte_4188116 & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, idList);
    sub_B2C35C(&int___TypeInfo, v13);
    sub_B2C35C(&string___TypeInfo, v14);
    byte_4188116 = 1;
  }
  v15 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v15 = BalanceConfig_TypeInfo;
  }
  v16 = (System_Int32_array *)sub_B2C374(int___TypeInfo, (unsigned int)v15->static_fields->SvtPassiveSkillListMax);
  *idList = v16;
  sub_B2C2F8((BattleServantConfConponent_o *)idList, (System_Int32_array **)v16, v17, v18, v19, v20, v21, v22);
  v23 = (System_String_array *)sub_B2C374(
                                 string___TypeInfo,
                                 (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtPassiveSkillListMax);
  *titleList = v23;
  sub_B2C2F8((BattleServantConfConponent_o *)titleList, (System_Int32_array **)v23, v24, v25, v26, v27, v28, v29);
  v30 = (System_String_array *)sub_B2C374(
                                 string___TypeInfo,
                                 (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtPassiveSkillListMax);
  *explanationList = v30;
  sub_B2C2F8((BattleServantConfConponent_o *)explanationList, (System_Int32_array **)v30, v31, v32, v33, v34, v35, v36);
  v37 = (BattleServantConfConponent_o *)titleList;
  UseEntityList = CommandCodeSkillMaster__getUseEntityList(this, commandCodeId, v38, beforeClearQuestId, v39);
  v48 = 0LL;
  v49 = 0;
  for ( i = 32LL; ; i += 8LL )
  {
    v51 = (CommandCodeSkillEntity_o *)BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v51 = (CommandCodeSkillEntity_o *)BalanceConfig_TypeInfo;
    }
    if ( (__int64)v48 >= *(int *)(v51[3].fields.endedAt + 36) )
      break;
    if ( !UseEntityList )
      goto LABEL_54;
    if ( v48 >= UseEntityList->max_length )
      goto LABEL_53;
    v51 = UseEntityList->m_Items[v48];
    v52 = *idList;
    if ( v51 )
    {
      if ( !v52 )
        goto LABEL_54;
      if ( v49 >= v52->max_length )
        goto LABEL_53;
      v52->m_Items[v49 + 1] = v51->fields.skillId;
      klass = v37->klass;
      if ( !v37->klass )
        goto LABEL_54;
      v54 = *explanationList;
      if ( !*explanationList )
        goto LABEL_54;
      if ( v49 >= LODWORD(klass->_1.namespaze) || v49 >= v54->max_length )
        goto LABEL_53;
      CommandCodeSkillEntity__getEffectExplanation(
        v51,
        (System_String_o **)&klass->_1.byval_arg.data + (int)v49,
        &v54->m_Items[v49],
        0,
        v43);
      if ( v48 != v49 )
      {
        v55 = *idList;
        if ( !*idList )
          goto LABEL_54;
        if ( v48 >= v55->max_length )
          goto LABEL_53;
        v55->m_Items[v48 + 1] = 0;
        v56 = (System_String_array *)v37->klass;
        if ( !v37->klass )
          goto LABEL_54;
LABEL_41:
        if ( v48 >= v56->max_length )
          goto LABEL_53;
        v56->m_Items[v48] = 0LL;
        sub_B2C2F8(
          (BattleServantConfConponent_o *)((char *)v56 + i),
          0LL,
          v41,
          v42,
          (System_Boolean_array **)v43,
          v44,
          v45,
          v46);
        v82 = *explanationList;
        if ( !*explanationList )
LABEL_54:
          sub_B2C434(v51, v40);
        if ( v48 >= v82->max_length )
          goto LABEL_53;
        v82->m_Items[v48] = 0LL;
        sub_B2C2F8((BattleServantConfConponent_o *)((char *)v82 + i), 0LL, v76, v77, v78, v79, v80, v81);
      }
      goto LABEL_45;
    }
    if ( !v52 )
      goto LABEL_54;
    v57 = *(_QWORD *)&v52->max_length;
    if ( v48 >= (unsigned int)v57 )
      goto LABEL_53;
    v58 = v52->m_Items[v48 + 1];
    if ( v58 >= 1 )
    {
      if ( v48 != v49 )
      {
        if ( v49 >= (unsigned int)v57 )
          goto LABEL_53;
        v52->m_Items[v49 + 1] = v58;
        v59 = (unsigned int *)v37->klass;
        if ( !v59 )
          goto LABEL_54;
        v60 = v59[6];
        if ( v48 >= v60 )
          goto LABEL_53;
        v61 = &v59[2 * v48];
        v62 = (System_Int32_array **)*((_QWORD *)v61 + 4);
        if ( v62 )
        {
          v51 = (CommandCodeSkillEntity_o *)sub_B2C41C(*((_QWORD *)v61 + 4), *(_QWORD *)(*(_QWORD *)v59 + 64LL));
          if ( !v51 )
            goto LABEL_55;
          v60 = *((_QWORD *)v59 + 3);
        }
        if ( v49 >= (unsigned int)v60 )
          goto LABEL_53;
        v63 = &v59[2 * v49];
        *((_QWORD *)v63 + 4) = v62;
        sub_B2C2F8(
          (BattleServantConfConponent_o *)(v63 + 8),
          v62,
          v41,
          v42,
          (System_Boolean_array **)v43,
          v44,
          v45,
          v46);
        v70 = *explanationList;
        if ( !*explanationList )
          goto LABEL_54;
        max_length = v70->max_length;
        if ( v48 >= max_length )
          goto LABEL_53;
        v72 = &v70->obj.klass + v48;
        v73 = (System_Int32_array **)v72[4];
        if ( v73 )
        {
          v51 = (CommandCodeSkillEntity_o *)sub_B2C41C(v72[4], v70->obj.klass->_1.element_class);
          if ( !v51 )
          {
LABEL_55:
            v96 = sub_B2C454(v51);
            sub_B2C400(v96, 0LL);
          }
          max_length = *(_QWORD *)&v70->max_length;
        }
        if ( v49 >= (unsigned int)max_length )
          goto LABEL_53;
        v74 = &v70->obj.klass + (int)v49;
        v74[4] = (Il2CppClass *)v73;
        sub_B2C2F8((BattleServantConfConponent_o *)(v74 + 4), v73, v64, v65, v66, v67, v68, v69);
        v75 = *idList;
        if ( !*idList )
          goto LABEL_54;
        v37 = (BattleServantConfConponent_o *)titleList;
        if ( v48 >= v75->max_length )
        {
LABEL_53:
          v95 = sub_B2C460(v51);
          sub_B2C400(v95, 0LL);
        }
        v75->m_Items[v48 + 1] = 0;
        v56 = *titleList;
        if ( !*titleList )
          goto LABEL_54;
        goto LABEL_41;
      }
LABEL_45:
      ++v49;
    }
    ++v48;
  }
  if ( !v49 )
  {
    *idList = 0LL;
    sub_B2C2F8((BattleServantConfConponent_o *)idList, 0LL, v41, v42, (System_Boolean_array **)v43, v44, v45, v46);
    v37->klass = 0LL;
    sub_B2C2F8(v37, 0LL, v83, v84, v85, v86, v87, v88);
    *explanationList = 0LL;
    sub_B2C2F8((BattleServantConfConponent_o *)explanationList, 0LL, v89, v90, v91, v92, v93, v94);
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
  const MethodInfo *v9; // x3
  CommandCodeSkillEntity_array *v10; // x20
  int i; // w22
  Il2CppClass **v12; // x8
  CommandCodeSkillEntity_o *v13; // x21
  __int64 v15; // x0

  EntityListFromIdNum = CommandCodeSkillMaster__getEntityListFromIdNum(
                          this,
                          commandCodeId,
                          num,
                          (const MethodInfo *)userId);
  if ( EntityListFromIdNum )
  {
    v10 = EntityListFromIdNum;
    for ( i = EntityListFromIdNum->max_length - 1; (i & 0x80000000) == 0; --i )
    {
      if ( i >= v10->max_length )
      {
        v15 = sub_B2C460(EntityListFromIdNum);
        sub_B2C400(v15, 0LL);
      }
      v12 = &v10->obj.klass + i;
      v13 = (CommandCodeSkillEntity_o *)v12[4];
      if ( !v13 )
        sub_B2C434(EntityListFromIdNum, v8);
      EntityListFromIdNum = (CommandCodeSkillEntity_array *)CommandCodeSkillEntity__isUse(
                                                              (CommandCodeSkillEntity_o *)v12[4],
                                                              v8,
                                                              beforeClearQuestId,
                                                              v9);
      if ( ((unsigned __int8)EntityListFromIdNum & 1) != 0 )
        return v13;
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
  __int64 v28; // x0
  __int64 v29; // x0

  if ( (byte_4188115 & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, *(_QWORD *)&commandCodeId);
    sub_B2C35C(&CommandCodeSkillEntity___TypeInfo, v8);
    byte_4188115 = 1;
  }
  v9 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v9 = BalanceConfig_TypeInfo;
  }
  v12 = (CommandCodeSkillEntity_array *)sub_B2C374(
                                          CommandCodeSkillEntity___TypeInfo,
                                          (unsigned int)v9->static_fields->SvtPassiveSkillListMax);
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
      sub_B2C434(UseEntity, v17);
    v24 = (System_Int32_array **)UseEntity;
    if ( UseEntity )
    {
      UseEntity = (CommandCodeSkillEntity_o *)sub_B2C41C(UseEntity, v12->obj.klass->_1.element_class);
      if ( !UseEntity )
      {
        v29 = sub_B2C454(0LL);
        sub_B2C400(v29, 0LL);
      }
    }
    v25 = v15 - 1;
    if ( v25 >= v12->max_length )
    {
      v28 = sub_B2C460(UseEntity);
      sub_B2C400(v28, 0LL);
    }
    i->klass = (BattleServantConfConponent_c *)v24;
    sub_B2C2F8(i, v24, v18, v19, v20, v21, v22, v23);
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
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *listCache; // x0
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v31; // x20
  __int64 v32; // x1
  __int64 v33; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x21
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v36; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v39; // x3
  System_Collections_Generic_IEnumerator_T__c *v40; // x8
  unsigned __int64 v41; // x10
  int32_t *v42; // x11
  __int64 v43; // x0
  __int64 v44; // x0
  __int64 v45; // x1
  const MethodInfo *v46; // x3
  EventMissionProgressRequest_Argument_ProgressData_o *v47; // x22
  __int64 v48; // x9
  System_String_o *PriorityKey; // x0
  __int64 v50; // x1
  System_Xml_XmlQualifiedName_o *v51; // x23
  __int64 v52; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v53; // x24
  System_Xml_Schema_XmlSchemaObject_o *v54; // x2
  System_Collections_Generic_IEnumerator_T__c *v55; // x8
  unsigned __int64 v56; // x10
  int32_t *v57; // x11
  __int64 v58; // x0
  __int64 v59; // x1
  CommandCodeSkillMaster___c_c *v60; // x0
  Il2CppObject *v61; // x21
  Il2CppObject *key; // x22
  struct CommandCodeSkillMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__5_0; // x23
  Il2CppObject *v65; // x24
  struct CommandCodeSkillMaster___c_StaticFields *v66; // x0
  System_String_array **v67; // x2
  System_String_array **v68; // x3
  System_Boolean_array **v69; // x4
  System_Int32_array **v70; // x5
  System_Int32_array *v71; // x6
  System_Int32_array *v72; // x7
  struct System_Collections_Generic_Dictionary_string__CommandCodeSkillEntity____o *v73; // x23
  System_Xml_Schema_XmlSchemaObject_o *v74; // x0
  __int64 v75; // x1
  int v76; // w21
  CommandCodeSkillMaster_o *v78; // [xsp+10h] [xbp-C0h]
  System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl__o v79; // [xsp+18h] [xbp-B8h] BYREF
  int v80[2]; // [xsp+40h] [xbp-90h]
  int v81; // [xsp+48h] [xbp-88h]
  System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl__o v82; // [xsp+50h] [xbp-80h] BYREF
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+78h] [xbp-58h] BYREF

  if ( (byte_4188112 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, method);
    sub_B2C35C(&CommandCodeSkillEntity_TypeInfo, v3);
    sub_B2C35C(&Method_System_Comparison_CommandCodeSkillEntity___ctor__, v4);
    sub_B2C35C(&System_Comparison_CommandCodeSkillEntity__TypeInfo, v5);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__List_CommandCodeSkillEntity___Clear__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__CommandCodeSkillEntity____Clear__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__List_CommandCodeSkillEntity___GetEnumerator__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__List_CommandCodeSkillEntity___TryGetValue__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__List_CommandCodeSkillEntity____ctor__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__List_CommandCodeSkillEntity___set_Item__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__CommandCodeSkillEntity____set_Item__, v12);
    sub_B2C35C(&System_Collections_Generic_Dictionary_string__List_CommandCodeSkillEntity___TypeInfo, v13);
    sub_B2C35C(
      &Method_System_Collections_Generic_Dictionary_Enumerator_string__List_CommandCodeSkillEntity___Dispose__,
      v14);
    sub_B2C35C(
      &Method_System_Collections_Generic_Dictionary_Enumerator_string__List_CommandCodeSkillEntity___MoveNext__,
      v15);
    sub_B2C35C(
      &Method_System_Collections_Generic_Dictionary_Enumerator_string__List_CommandCodeSkillEntity___get_Current__,
      v16);
    sub_B2C35C(&System_IDisposable_TypeInfo, v17);
    sub_B2C35C(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v18);
    sub_B2C35C(&System_Collections_IEnumerator_TypeInfo, v19);
    sub_B2C35C(&Method_System_Collections_Generic_KeyValuePair_string__List_CommandCodeSkillEntity___get_Key__, v20);
    sub_B2C35C(&Method_System_Collections_Generic_KeyValuePair_string__List_CommandCodeSkillEntity___get_Value__, v21);
    sub_B2C35C(&Method_System_Collections_Generic_List_CommandCodeSkillEntity__Add__, v22);
    sub_B2C35C(&Method_System_Collections_Generic_List_CommandCodeSkillEntity__Clear__, v23);
    sub_B2C35C(&Method_System_Collections_Generic_List_CommandCodeSkillEntity__Sort__, v24);
    sub_B2C35C(&Method_System_Collections_Generic_List_CommandCodeSkillEntity__ToArray__, v25);
    sub_B2C35C(&Method_System_Collections_Generic_List_CommandCodeSkillEntity___ctor__, v26);
    sub_B2C35C(&System_Collections_Generic_List_CommandCodeSkillEntity__TypeInfo, v27);
    sub_B2C35C(&Method_CommandCodeSkillMaster___c__preProcess_b__5_0__, v28);
    sub_B2C35C(&CommandCodeSkillMaster___c_TypeInfo, v29);
    byte_4188112 = 1;
  }
  value = 0LL;
  memset(&v82, 0, sizeof(v82));
  v81 = 0;
  listCache = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.listCache;
  if ( !listCache )
    goto LABEL_57;
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Clear(
    listCache,
    (const MethodInfo_2DB1E9C *)Method_System_Collections_Generic_Dictionary_string__CommandCodeSkillEntity____Clear__);
  v31 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)sub_B2C42C(System_Collections_Generic_Dictionary_string__List_CommandCodeSkillEntity___TypeInfo);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject____ctor(
    v31,
    (const MethodInfo_2DB1110 *)Method_System_Collections_Generic_Dictionary_string__List_CommandCodeSkillEntity____ctor__);
  listCache = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.list;
  if ( !listCache )
    goto LABEL_57;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)listCache,
                 (const MethodInfo_2A0E96C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  v78 = this;
  if ( !Enumerator )
    sub_B2C434(0LL, v32);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v36 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v36;
        p_offset += 4;
        if ( v36 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_AC5258(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v33);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v40 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v41 = 0LL;
      v42 = &v40->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v42 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v41;
        v42 += 4;
        if ( v41 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_17;
      }
      v43 = (__int64)&v40->vtable[*v42].method;
    }
    else
    {
LABEL_17:
      v43 = sub_AC5258(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v39);
    }
    v44 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v43)(
            Enumerator,
            *(_QWORD *)(v43 + 8));
    v47 = (EventMissionProgressRequest_Argument_ProgressData_o *)v44;
    if ( !v44 )
      sub_B2C434(0LL, v45);
    v48 = *(&CommandCodeSkillEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*(_QWORD *)v44 + 300LL) < (unsigned int)v48
      || *(CommandCodeSkillEntity_c **)(*(_QWORD *)(*(_QWORD *)v44 + 200LL) + 8 * v48 - 8) != CommandCodeSkillEntity_TypeInfo )
    {
      v60 = (CommandCodeSkillMaster___c_c *)sub_B2C728(v44);
LABEL_52:
      sub_B2C434(v60, v59);
    }
    PriorityKey = CommandCodeSkillMaster__getPriorityKey(
                    (CommandCodeSkillMaster_o *)v44,
                    *(_DWORD *)(v44 + 16),
                    *(_DWORD *)(v44 + 20),
                    v46);
    if ( !v31 )
      sub_B2C434(PriorityKey, v50);
    v51 = (System_Xml_XmlQualifiedName_o *)PriorityKey;
    if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
            v31,
            (System_Xml_XmlQualifiedName_o *)PriorityKey,
            &value,
            (const MethodInfo_2DB3AC0 *)Method_System_Collections_Generic_Dictionary_string__List_CommandCodeSkillEntity___TryGetValue__) )
    {
      v53 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_CommandCodeSkillEntity__TypeInfo);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
        v53,
        (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_CommandCodeSkillEntity___ctor__);
      value = (System_Xml_Schema_XmlSchemaObject_o *)v53;
      v54 = (System_Xml_Schema_XmlSchemaObject_o *)v53;
      this = v78;
      System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
        v31,
        v51,
        v54,
        (const MethodInfo_2DB1C98 *)Method_System_Collections_Generic_Dictionary_string__List_CommandCodeSkillEntity___set_Item__);
    }
    if ( !value )
      sub_B2C434(0LL, v52);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)value,
      v47,
      (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_CommandCodeSkillEntity__Add__);
  }
  v80[0] = 117;
  v81 = 1;
  v55 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v56 = 0LL;
    v57 = &v55->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v57 - 1) != System_IDisposable_TypeInfo )
    {
      ++v56;
      v57 += 4;
      if ( v56 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_31;
    }
    v58 = (__int64)&v55->vtable[*v57].method;
  }
  else
  {
LABEL_31:
    v58 = sub_AC5258(Enumerator, System_IDisposable_TypeInfo, 0LL, v39);
  }
  listCache = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v58)(
                                                                                              Enumerator,
                                                                                              *(_QWORD *)(v58 + 8));
  v81 = 0;
  if ( !v31 )
LABEL_57:
    sub_B2C434(listCache, method);
  System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaElementDecl___GetEnumerator(
    (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&v79,
    (System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaElementDecl__o *)v31,
    (const MethodInfo_2DB229C *)Method_System_Collections_Generic_Dictionary_string__List_CommandCodeSkillEntity___GetEnumerator__);
  v82 = v79;
  while ( System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl___MoveNext(
            &v82,
            (const MethodInfo_278B9EC *)Method_System_Collections_Generic_Dictionary_Enumerator_string__List_CommandCodeSkillEntity___MoveNext__) )
  {
    v60 = CommandCodeSkillMaster___c_TypeInfo;
    key = v82.fields.current.fields.key;
    v61 = v82.fields.current.fields.value;
    if ( (BYTE3(CommandCodeSkillMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CommandCodeSkillMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CommandCodeSkillMaster___c_TypeInfo);
      v60 = CommandCodeSkillMaster___c_TypeInfo;
    }
    static_fields = v60->static_fields;
    _9__5_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__5_0;
    if ( !_9__5_0 )
    {
      if ( (BYTE3(v60->vtable._0_Equals.methodPtr) & 4) != 0 && !v60->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v60);
        static_fields = CommandCodeSkillMaster___c_TypeInfo->static_fields;
      }
      v65 = (Il2CppObject *)static_fields->__9;
      _9__5_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B2C42C(System_Comparison_CommandCodeSkillEntity__TypeInfo);
      System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
        _9__5_0,
        v65,
        Method_CommandCodeSkillMaster___c__preProcess_b__5_0__,
        (const MethodInfo_25D8DF8 *)Method_System_Comparison_CommandCodeSkillEntity___ctor__);
      v66 = CommandCodeSkillMaster___c_TypeInfo->static_fields;
      v66->__9__5_0 = (struct System_Comparison_CommandCodeSkillEntity__o *)_9__5_0;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&v66->__9__5_0,
        (System_Int32_array **)_9__5_0,
        v67,
        v68,
        v69,
        v70,
        v71,
        v72);
      this = v78;
    }
    if ( !v61 )
      goto LABEL_52;
    System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
      (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v61,
      (System_Comparison_T__o *)_9__5_0,
      (const MethodInfo_2EF653C *)Method_System_Collections_Generic_List_CommandCodeSkillEntity__Sort__);
    v73 = this->fields.listCache;
    v74 = (System_Xml_Schema_XmlSchemaObject_o *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                   (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v61,
                                                   (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_CommandCodeSkillEntity__ToArray__);
    if ( !v73 )
      sub_B2C434(v74, v75);
    System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
      (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v73,
      (System_Xml_XmlQualifiedName_o *)key,
      v74,
      (const MethodInfo_2DB1C98 *)Method_System_Collections_Generic_Dictionary_string__CommandCodeSkillEntity____set_Item__);
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      (System_Collections_Generic_List_XWeaponTrail_Element__o *)v61,
      (const MethodInfo_2EF4868 *)Method_System_Collections_Generic_List_CommandCodeSkillEntity__Clear__);
  }
  v80[0] = 240;
  v76 = ++v81;
  System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl___Dispose(
    &v82,
    (const MethodInfo_278BB54 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__List_CommandCodeSkillEntity___Dispose__);
  if ( v76 && v80[v76 - 1] == 240 )
    v81 = v76 - 1;
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Clear(
    v31,
    (const MethodInfo_2DB1E9C *)Method_System_Collections_Generic_Dictionary_string__List_CommandCodeSkillEntity___Clear__);
  return 1;
}


void __fastcall CommandCodeSkillMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  struct CommandCodeSkillMaster___c_StaticFields *static_fields; // x0

  if ( (byte_4184F44 & 1) == 0 )
  {
    sub_B2C35C(&CommandCodeSkillMaster___c_TypeInfo, v1);
    byte_4184F44 = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(CommandCodeSkillMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = CommandCodeSkillMaster___c_TypeInfo->static_fields;
  static_fields->__9 = (struct CommandCodeSkillMaster___c_o *)v2;
  sub_B2C2F8(static_fields, v2);
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
    sub_B2C434(this, a);
  return a->fields.priority - b->fields.priority;
}