void __fastcall CommandCodeSkillMaster___ctor(CommandCodeSkillMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v6; // x20
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_4214855 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataMasterBase_CommandCodeSkillMaster__CommandCodeSkillEntity__string___ctor__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__CommandCodeSkillEntity_____ctor__, v4);
    sub_B0D8A4(&System_Collections_Generic_Dictionary_string__CommandCodeSkillEntity____TypeInfo, v5);
    byte_4214855 = 1;
  }
  v6 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)sub_B0D974(
                                                                                       System_Collections_Generic_Dictionary_string__CommandCodeSkillEntity____TypeInfo,
                                                                                       method,
                                                                                       v2);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject____ctor(
    v6,
    (const MethodInfo_2E4A0B8 *)Method_System_Collections_Generic_Dictionary_string__CommandCodeSkillEntity_____ctor__);
  this->fields.listCache = (struct System_Collections_Generic_Dictionary_string__CommandCodeSkillEntity____o *)v6;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.listCache,
    (System_Int32_array **)v6,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    253,
    (const MethodInfo_2669F88 *)Method_DataMasterBase_CommandCodeSkillMaster__CommandCodeSkillEntity__string___ctor__);
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

  if ( (byte_4214853 & 1) == 0 )
  {
    sub_B0D8A4(
      &Method_DataMasterBase_CommandCodeSkillMaster__CommandCodeSkillEntity__string__GetEntity__,
      *(_QWORD *)&commandCodeId);
    byte_4214853 = 1;
  }
  PK = CommandCodeSkillEntity__CreatePK(commandCodeId, num, priority, *(const MethodInfo **)&priority);
  return (CommandCodeSkillEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                       (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                       PK,
                                       (const MethodInfo_266A024 *)Method_DataMasterBase_CommandCodeSkillMaster__CommandCodeSkillEntity__string__GetEntity__);
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

  if ( (byte_4214854 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataMasterBase_CommandCodeSkillMaster__CommandCodeSkillEntity__string__TryGetEntity__, entity);
    byte_4214854 = 1;
  }
  PK = CommandCodeSkillEntity__CreatePK(commandCodeId, num, priority, *(const MethodInfo **)&num);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_266A07C *)Method_DataMasterBase_CommandCodeSkillMaster__CommandCodeSkillEntity__string__TryGetEntity__);
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
  const MethodInfo *v10; // x3
  int v11; // w22
  _QWORD *p_image; // x0
  __int64 v13; // x8
  __int64 v14; // x10
  unsigned int v15; // w9
  int v16; // w12
  __int64 v17; // x13
  int v18; // w13
  __int64 v20; // x0

  if ( (byte_421485C & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, *(_QWORD *)&commandCodeId);
    sub_B0D8A4(&Method_System_Collections_Generic_List_CommandCodeSkillEntity__Add__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_CommandCodeSkillEntity__ToArray__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_CommandCodeSkillEntity___ctor__, v7);
    sub_B0D8A4(&System_Collections_Generic_List_CommandCodeSkillEntity__TypeInfo, v8);
    byte_421485C = 1;
  }
  v9 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                 System_Collections_Generic_List_CommandCodeSkillEntity__TypeInfo,
                                                                                                 *(_QWORD *)&commandCodeId,
                                                                                                 method);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v9,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_CommandCodeSkillEntity___ctor__);
  v11 = 0;
  while ( 1 )
  {
    p_image = &BalanceConfig_TypeInfo->_1.image;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      p_image = &BalanceConfig_TypeInfo->_1.image;
    }
    if ( v11 >= *(_DWORD *)(p_image[23] + 36LL) )
      break;
    p_image = CommandCodeSkillMaster__getEntityListFromIdNum(this, commandCodeId, ++v11, v10);
    if ( p_image )
    {
      v13 = p_image[3];
      if ( v13 )
      {
        if ( (int)v13 >= 1 )
        {
          v14 = 0LL;
          v15 = 0;
          v16 = 1;
          while ( 1 )
          {
            v17 = p_image[v14 + 4];
            if ( !v17 )
              break;
            v18 = *(_DWORD *)(v17 + 24);
            if ( v18 > v16 )
              v15 = v14;
            ++v14;
            if ( v18 > v16 )
              v16 = v18;
            if ( (int)v14 >= (int)v13 )
              goto LABEL_16;
          }
LABEL_25:
          sub_B0D97C(p_image);
        }
        v15 = 0;
LABEL_16:
        if ( v15 >= (unsigned int)v13 )
        {
          v20 = sub_B0D9A8(p_image);
          sub_B0D948(v20, 0LL);
        }
        if ( !v9 )
          goto LABEL_25;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v9,
          (EventMissionProgressRequest_Argument_ProgressData_o *)p_image[(int)v15 + 4],
          (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_CommandCodeSkillEntity__Add__);
      }
    }
  }
  if ( !v9 )
    goto LABEL_25;
  return (CommandCodeSkillEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                           (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v9,
                                           (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_CommandCodeSkillEntity__ToArray__);
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v15; // x22
  int32_t v16; // w23
  __int64 v17; // x10

  if ( (byte_4214858 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&commandCodeId);
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_B0D8A4(&CommandCodeSkillEntity_TypeInfo, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_CommandCodeSkillEntity__Add__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_CommandCodeSkillEntity__ToArray__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_CommandCodeSkillEntity___ctor__, v9);
    sub_B0D8A4(&System_Collections_Generic_List_CommandCodeSkillEntity__TypeInfo, v10);
    byte_4214858 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_16;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2AB5718 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v15 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_CommandCodeSkillEntity__TypeInfo,
                                                                                                  v13,
                                                                                                  v14);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v15,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_CommandCodeSkillEntity___ctor__);
  if ( Count >= 1 )
  {
    v16 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                           list,
                                                                                           v16,
                                                                                           (const MethodInfo_2AB57BC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v17 = *(&CommandCodeSkillEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&list->klass->_2.bitflags2 + 1) >= (unsigned int)v17
          && (CommandCodeSkillEntity_c *)list->klass->_2.typeHierarchy[v17 - 1] == CommandCodeSkillEntity_TypeInfo
          && LODWORD(list->fields.items) == commandCodeId )
        {
          if ( !v15 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v15,
            (EventMissionProgressRequest_Argument_ProgressData_o *)list,
            (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_CommandCodeSkillEntity__Add__);
        }
      }
      if ( ++v16 >= Count )
        goto LABEL_14;
    }
LABEL_16:
    sub_B0D97C(list);
  }
LABEL_14:
  if ( !v15 )
    goto LABEL_16;
  return (CommandCodeSkillEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                           (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v15,
                                           (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_CommandCodeSkillEntity__ToArray__);
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
  if ( (byte_4214859 & 1) == 0 )
  {
    this = (CommandCodeSkillMaster_o *)sub_B0D8A4(
                                         &Method_System_Collections_Generic_Dictionary_string__CommandCodeSkillEntity____TryGetValue__,
                                         *(_QWORD *)&commandCodeId);
    byte_4214859 = 1;
  }
  value = 0LL;
  PriorityKey = CommandCodeSkillMaster__getPriorityKey(this, commandCodeId, num, method);
  if ( !v6->fields.listCache )
    sub_B0D97C(PriorityKey);
  if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
         (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v6->fields.listCache,
         (System_Xml_XmlQualifiedName_o *)PriorityKey,
         &value,
         (const MethodInfo_2E4CA68 *)Method_System_Collections_Generic_Dictionary_string__CommandCodeSkillEntity____TryGetValue__) )
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
  if ( (byte_4214856 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_1232/*":"*/, *(_QWORD *)&commandCodeId);
    byte_4214856 = 1;
  }
  v4 = System_Int32__ToString((int32_t)&v8, 0LL);
  v5 = System_Int32__ToString((int32_t)&v7, 0LL);
  return System_String__Concat_43852188(v4, (System_String_o *)StringLiteral_1232/*":"*/, v5, 0LL);
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
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  MethodInfo *v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  CommandCodeSkillEntity_array *UseEntityList; // x22
  unsigned __int64 v47; // x26
  unsigned int v48; // w24
  __int64 i; // x28
  CommandCodeSkillEntity_o *v50; // x0
  System_Int32_array *v51; // x8
  BattleServantConfConponent_c *klass; // x8
  System_String_array *v53; // x10
  System_Int32_array *v54; // x8
  System_String_array *v55; // x8
  __int64 v56; // x10
  int v57; // w9
  unsigned int *v58; // x19
  unsigned __int64 v59; // x8
  unsigned int *v60; // x9
  System_Int32_array **v61; // x23
  unsigned int *v62; // x0
  System_String_array **v63; // x2
  System_String_array **v64; // x3
  System_Boolean_array **v65; // x4
  System_Int32_array **v66; // x5
  System_Int32_array *v67; // x6
  System_Int32_array *v68; // x7
  System_String_array *v69; // x19
  unsigned __int64 max_length; // x8
  Il2CppClass **v71; // x9
  System_Int32_array **v72; // x23
  Il2CppClass **v73; // x0
  System_Int32_array *v74; // x8
  System_String_array **v75; // x2
  System_String_array **v76; // x3
  System_Boolean_array **v77; // x4
  System_Int32_array **v78; // x5
  System_Int32_array *v79; // x6
  System_Int32_array *v80; // x7
  System_String_array *v81; // x8
  System_String_array **v82; // x2
  System_String_array **v83; // x3
  System_Boolean_array **v84; // x4
  System_Int32_array **v85; // x5
  System_Int32_array *v86; // x6
  System_Int32_array *v87; // x7
  System_String_array **v88; // x2
  System_String_array **v89; // x3
  System_Boolean_array **v90; // x4
  System_Int32_array **v91; // x5
  System_Int32_array *v92; // x6
  System_Int32_array *v93; // x7
  __int64 v94; // x0
  __int64 v95; // x0

  if ( (byte_421485B & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, idList);
    sub_B0D8A4(&int___TypeInfo, v13);
    sub_B0D8A4(&string___TypeInfo, v14);
    byte_421485B = 1;
  }
  v15 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v15 = BalanceConfig_TypeInfo;
  }
  v16 = (System_Int32_array *)sub_B0D8BC(int___TypeInfo, (unsigned int)v15->static_fields->SvtPassiveSkillListMax);
  *idList = v16;
  sub_B0D840((BattleServantConfConponent_o *)idList, (System_Int32_array **)v16, v17, v18, v19, v20, v21, v22);
  v23 = (System_String_array *)sub_B0D8BC(
                                 string___TypeInfo,
                                 (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtPassiveSkillListMax);
  *titleList = v23;
  sub_B0D840((BattleServantConfConponent_o *)titleList, (System_Int32_array **)v23, v24, v25, v26, v27, v28, v29);
  v30 = (System_String_array *)sub_B0D8BC(
                                 string___TypeInfo,
                                 (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtPassiveSkillListMax);
  *explanationList = v30;
  sub_B0D840((BattleServantConfConponent_o *)explanationList, (System_Int32_array **)v30, v31, v32, v33, v34, v35, v36);
  v37 = (BattleServantConfConponent_o *)titleList;
  UseEntityList = CommandCodeSkillMaster__getUseEntityList(this, commandCodeId, v38, beforeClearQuestId, v39);
  v47 = 0LL;
  v48 = 0;
  for ( i = 32LL; ; i += 8LL )
  {
    v50 = (CommandCodeSkillEntity_o *)BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v50 = (CommandCodeSkillEntity_o *)BalanceConfig_TypeInfo;
    }
    if ( (__int64)v47 >= *(int *)(v50[3].fields.endedAt + 36) )
      break;
    if ( !UseEntityList )
      goto LABEL_54;
    if ( v47 >= UseEntityList->max_length )
      goto LABEL_53;
    v50 = UseEntityList->m_Items[v47];
    v51 = *idList;
    if ( v50 )
    {
      if ( !v51 )
        goto LABEL_54;
      if ( v48 >= v51->max_length )
        goto LABEL_53;
      v51->m_Items[v48 + 1] = v50->fields.skillId;
      klass = v37->klass;
      if ( !v37->klass )
        goto LABEL_54;
      v53 = *explanationList;
      if ( !*explanationList )
        goto LABEL_54;
      if ( v48 >= LODWORD(klass->_1.namespaze) || v48 >= v53->max_length )
        goto LABEL_53;
      CommandCodeSkillEntity__getEffectExplanation(
        v50,
        (System_String_o **)&klass->_1.byval_arg.data + (int)v48,
        &v53->m_Items[v48],
        0,
        v42);
      if ( v47 != v48 )
      {
        v54 = *idList;
        if ( !*idList )
          goto LABEL_54;
        if ( v47 >= v54->max_length )
          goto LABEL_53;
        v54->m_Items[v47 + 1] = 0;
        v55 = (System_String_array *)v37->klass;
        if ( !v37->klass )
          goto LABEL_54;
LABEL_41:
        if ( v47 >= v55->max_length )
          goto LABEL_53;
        v55->m_Items[v47] = 0LL;
        sub_B0D840(
          (BattleServantConfConponent_o *)((char *)v55 + i),
          0LL,
          v40,
          v41,
          (System_Boolean_array **)v42,
          v43,
          v44,
          v45);
        v81 = *explanationList;
        if ( !*explanationList )
LABEL_54:
          sub_B0D97C(v50);
        if ( v47 >= v81->max_length )
          goto LABEL_53;
        v81->m_Items[v47] = 0LL;
        sub_B0D840((BattleServantConfConponent_o *)((char *)v81 + i), 0LL, v75, v76, v77, v78, v79, v80);
      }
      goto LABEL_45;
    }
    if ( !v51 )
      goto LABEL_54;
    v56 = *(_QWORD *)&v51->max_length;
    if ( v47 >= (unsigned int)v56 )
      goto LABEL_53;
    v57 = v51->m_Items[v47 + 1];
    if ( v57 >= 1 )
    {
      if ( v47 != v48 )
      {
        if ( v48 >= (unsigned int)v56 )
          goto LABEL_53;
        v51->m_Items[v48 + 1] = v57;
        v58 = (unsigned int *)v37->klass;
        if ( !v58 )
          goto LABEL_54;
        v59 = v58[6];
        if ( v47 >= v59 )
          goto LABEL_53;
        v60 = &v58[2 * v47];
        v61 = (System_Int32_array **)*((_QWORD *)v60 + 4);
        if ( v61 )
        {
          v50 = (CommandCodeSkillEntity_o *)sub_B0D964(*((_QWORD *)v60 + 4), *(_QWORD *)(*(_QWORD *)v58 + 64LL));
          if ( !v50 )
            goto LABEL_55;
          v59 = *((_QWORD *)v58 + 3);
        }
        if ( v48 >= (unsigned int)v59 )
          goto LABEL_53;
        v62 = &v58[2 * v48];
        *((_QWORD *)v62 + 4) = v61;
        sub_B0D840(
          (BattleServantConfConponent_o *)(v62 + 8),
          v61,
          v40,
          v41,
          (System_Boolean_array **)v42,
          v43,
          v44,
          v45);
        v69 = *explanationList;
        if ( !*explanationList )
          goto LABEL_54;
        max_length = v69->max_length;
        if ( v47 >= max_length )
          goto LABEL_53;
        v71 = &v69->obj.klass + v47;
        v72 = (System_Int32_array **)v71[4];
        if ( v72 )
        {
          v50 = (CommandCodeSkillEntity_o *)sub_B0D964(v71[4], v69->obj.klass->_1.element_class);
          if ( !v50 )
          {
LABEL_55:
            v95 = sub_B0D99C(v50);
            sub_B0D948(v95, 0LL);
          }
          max_length = *(_QWORD *)&v69->max_length;
        }
        if ( v48 >= (unsigned int)max_length )
          goto LABEL_53;
        v73 = &v69->obj.klass + (int)v48;
        v73[4] = (Il2CppClass *)v72;
        sub_B0D840((BattleServantConfConponent_o *)(v73 + 4), v72, v63, v64, v65, v66, v67, v68);
        v74 = *idList;
        if ( !*idList )
          goto LABEL_54;
        v37 = (BattleServantConfConponent_o *)titleList;
        if ( v47 >= v74->max_length )
        {
LABEL_53:
          v94 = sub_B0D9A8(v50);
          sub_B0D948(v94, 0LL);
        }
        v74->m_Items[v47 + 1] = 0;
        v55 = *titleList;
        if ( !*titleList )
          goto LABEL_54;
        goto LABEL_41;
      }
LABEL_45:
      ++v48;
    }
    ++v47;
  }
  if ( !v48 )
  {
    *idList = 0LL;
    sub_B0D840((BattleServantConfConponent_o *)idList, 0LL, v40, v41, (System_Boolean_array **)v42, v43, v44, v45);
    v37->klass = 0LL;
    sub_B0D840(v37, 0LL, v82, v83, v84, v85, v86, v87);
    *explanationList = 0LL;
    sub_B0D840((BattleServantConfConponent_o *)explanationList, 0LL, v88, v89, v90, v91, v92, v93);
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
        v15 = sub_B0D9A8(EntityListFromIdNum);
        sub_B0D948(v15, 0LL);
      }
      v12 = &v10->obj.klass + i;
      v13 = (CommandCodeSkillEntity_o *)v12[4];
      if ( !v13 )
        sub_B0D97C(EntityListFromIdNum);
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
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  System_Int32_array **v23; // x24
  unsigned __int64 v24; // x25
  BalanceConfig_c *v25; // x0
  __int64 v27; // x0
  __int64 v28; // x0

  if ( (byte_421485A & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, *(_QWORD *)&commandCodeId);
    sub_B0D8A4(&CommandCodeSkillEntity___TypeInfo, v8);
    byte_421485A = 1;
  }
  v9 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v9 = BalanceConfig_TypeInfo;
  }
  v12 = (CommandCodeSkillEntity_array *)sub_B0D8BC(
                                          CommandCodeSkillEntity___TypeInfo,
                                          (unsigned int)v9->static_fields->SvtPassiveSkillListMax);
  v13 = 0LL;
  for ( i = (BattleServantConfConponent_o *)v12->m_Items; ; i = (BattleServantConfConponent_o *)((char *)i + 8) )
  {
    v25 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v25 = BalanceConfig_TypeInfo;
    }
    if ( v13 >= v25->static_fields->SvtPassiveSkillListMax )
      break;
    v15 = v13 + 1;
    UseEntity = CommandCodeSkillMaster__getUseEntity(this, commandCodeId, (int)v13 + 1, v10, beforeClearQuestId, v11);
    if ( !v12 )
      sub_B0D97C(UseEntity);
    v23 = (System_Int32_array **)UseEntity;
    if ( UseEntity )
    {
      UseEntity = (CommandCodeSkillEntity_o *)sub_B0D964(UseEntity, v12->obj.klass->_1.element_class);
      if ( !UseEntity )
      {
        v28 = sub_B0D99C(0LL);
        sub_B0D948(v28, 0LL);
      }
    }
    v24 = v15 - 1;
    if ( v24 >= v12->max_length )
    {
      v27 = sub_B0D9A8(UseEntity);
      sub_B0D948(v27, 0LL);
    }
    i->klass = (BattleServantConfConponent_c *)v23;
    sub_B0D840(i, v23, v17, v18, v19, v20, v21, v22);
    v13 = v24 + 1;
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
  __int64 v31; // x1
  __int64 v32; // x2
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v33; // x20
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x21
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v36; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v39; // x8
  unsigned __int64 v40; // x10
  int32_t *v41; // x11
  __int64 v42; // x0
  __int64 v43; // x0
  const MethodInfo *v44; // x3
  EventMissionProgressRequest_Argument_ProgressData_o *v45; // x22
  __int64 v46; // x9
  System_String_o *PriorityKey; // x0
  System_Xml_XmlQualifiedName_o *v48; // x23
  __int64 v49; // x1
  __int64 v50; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v51; // x24
  System_Xml_Schema_XmlSchemaObject_o *v52; // x2
  System_Collections_Generic_IEnumerator_T__c *v53; // x8
  unsigned __int64 v54; // x10
  int32_t *v55; // x11
  __int64 v56; // x0
  __int64 v57; // x1
  __int64 v58; // x2
  CommandCodeSkillMaster___c_c *v59; // x0
  Il2CppObject *v60; // x21
  Il2CppObject *key; // x22
  struct CommandCodeSkillMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__5_0; // x23
  Il2CppObject *v64; // x24
  struct CommandCodeSkillMaster___c_StaticFields *v65; // x0
  System_String_array **v66; // x2
  System_String_array **v67; // x3
  System_Boolean_array **v68; // x4
  System_Int32_array **v69; // x5
  System_Int32_array *v70; // x6
  System_Int32_array *v71; // x7
  struct System_Collections_Generic_Dictionary_string__CommandCodeSkillEntity____o *v72; // x23
  System_Xml_Schema_XmlSchemaObject_o *v73; // x0
  int v74; // w21
  CommandCodeSkillMaster_o *v76; // [xsp+10h] [xbp-C0h]
  System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl__o v77; // [xsp+18h] [xbp-B8h] BYREF
  int v78[2]; // [xsp+40h] [xbp-90h]
  int v79; // [xsp+48h] [xbp-88h]
  System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl__o v80; // [xsp+50h] [xbp-80h] BYREF
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+78h] [xbp-58h] BYREF

  if ( (byte_4214857 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, method);
    sub_B0D8A4(&CommandCodeSkillEntity_TypeInfo, v3);
    sub_B0D8A4(&Method_System_Comparison_CommandCodeSkillEntity___ctor__, v4);
    sub_B0D8A4(&System_Comparison_CommandCodeSkillEntity__TypeInfo, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__List_CommandCodeSkillEntity___Clear__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__CommandCodeSkillEntity____Clear__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__List_CommandCodeSkillEntity___GetEnumerator__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__List_CommandCodeSkillEntity___TryGetValue__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__List_CommandCodeSkillEntity____ctor__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__List_CommandCodeSkillEntity___set_Item__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__CommandCodeSkillEntity____set_Item__, v12);
    sub_B0D8A4(&System_Collections_Generic_Dictionary_string__List_CommandCodeSkillEntity___TypeInfo, v13);
    sub_B0D8A4(
      &Method_System_Collections_Generic_Dictionary_Enumerator_string__List_CommandCodeSkillEntity___Dispose__,
      v14);
    sub_B0D8A4(
      &Method_System_Collections_Generic_Dictionary_Enumerator_string__List_CommandCodeSkillEntity___MoveNext__,
      v15);
    sub_B0D8A4(
      &Method_System_Collections_Generic_Dictionary_Enumerator_string__List_CommandCodeSkillEntity___get_Current__,
      v16);
    sub_B0D8A4(&System_IDisposable_TypeInfo, v17);
    sub_B0D8A4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v18);
    sub_B0D8A4(&System_Collections_IEnumerator_TypeInfo, v19);
    sub_B0D8A4(&Method_System_Collections_Generic_KeyValuePair_string__List_CommandCodeSkillEntity___get_Key__, v20);
    sub_B0D8A4(&Method_System_Collections_Generic_KeyValuePair_string__List_CommandCodeSkillEntity___get_Value__, v21);
    sub_B0D8A4(&Method_System_Collections_Generic_List_CommandCodeSkillEntity__Add__, v22);
    sub_B0D8A4(&Method_System_Collections_Generic_List_CommandCodeSkillEntity__Clear__, v23);
    sub_B0D8A4(&Method_System_Collections_Generic_List_CommandCodeSkillEntity__Sort__, v24);
    sub_B0D8A4(&Method_System_Collections_Generic_List_CommandCodeSkillEntity__ToArray__, v25);
    sub_B0D8A4(&Method_System_Collections_Generic_List_CommandCodeSkillEntity___ctor__, v26);
    sub_B0D8A4(&System_Collections_Generic_List_CommandCodeSkillEntity__TypeInfo, v27);
    sub_B0D8A4(&Method_CommandCodeSkillMaster___c__preProcess_b__5_0__, v28);
    sub_B0D8A4(&CommandCodeSkillMaster___c_TypeInfo, v29);
    byte_4214857 = 1;
  }
  value = 0LL;
  memset(&v80, 0, sizeof(v80));
  v79 = 0;
  listCache = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.listCache;
  if ( !listCache )
    goto LABEL_57;
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Clear(
    listCache,
    (const MethodInfo_2E4AE44 *)Method_System_Collections_Generic_Dictionary_string__CommandCodeSkillEntity____Clear__);
  v33 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)sub_B0D974(
                                                                                        System_Collections_Generic_Dictionary_string__List_CommandCodeSkillEntity___TypeInfo,
                                                                                        v31,
                                                                                        v32);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject____ctor(
    v33,
    (const MethodInfo_2E4A0B8 *)Method_System_Collections_Generic_Dictionary_string__List_CommandCodeSkillEntity____ctor__);
  listCache = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.list;
  if ( !listCache )
    goto LABEL_57;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)listCache,
                 (const MethodInfo_2AB5D9C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  v76 = this;
  if ( !Enumerator )
    sub_B0D97C(0LL);
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
      p_method = sub_AA67A0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v39 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v40 = 0LL;
      v41 = &v39->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v41 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v40;
        v41 += 4;
        if ( v40 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_17;
      }
      v42 = (__int64)&v39->vtable[*v41].method;
    }
    else
    {
LABEL_17:
      v42 = sub_AA67A0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v43 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v42)(
            Enumerator,
            *(_QWORD *)(v42 + 8));
    v45 = (EventMissionProgressRequest_Argument_ProgressData_o *)v43;
    if ( !v43 )
      sub_B0D97C(0LL);
    v46 = *(&CommandCodeSkillEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*(_QWORD *)v43 + 300LL) < (unsigned int)v46
      || *(CommandCodeSkillEntity_c **)(*(_QWORD *)(*(_QWORD *)v43 + 200LL) + 8 * v46 - 8) != CommandCodeSkillEntity_TypeInfo )
    {
      v59 = (CommandCodeSkillMaster___c_c *)sub_B0DC70(v43);
LABEL_52:
      sub_B0D97C(v59);
    }
    PriorityKey = CommandCodeSkillMaster__getPriorityKey(
                    (CommandCodeSkillMaster_o *)v43,
                    *(_DWORD *)(v43 + 16),
                    *(_DWORD *)(v43 + 20),
                    v44);
    if ( !v33 )
      sub_B0D97C(PriorityKey);
    v48 = (System_Xml_XmlQualifiedName_o *)PriorityKey;
    if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
            v33,
            (System_Xml_XmlQualifiedName_o *)PriorityKey,
            &value,
            (const MethodInfo_2E4CA68 *)Method_System_Collections_Generic_Dictionary_string__List_CommandCodeSkillEntity___TryGetValue__) )
    {
      v51 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(System_Collections_Generic_List_CommandCodeSkillEntity__TypeInfo, v49, v50);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
        v51,
        (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_CommandCodeSkillEntity___ctor__);
      value = (System_Xml_Schema_XmlSchemaObject_o *)v51;
      v52 = (System_Xml_Schema_XmlSchemaObject_o *)v51;
      this = v76;
      System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
        v33,
        v48,
        v52,
        (const MethodInfo_2E4AC40 *)Method_System_Collections_Generic_Dictionary_string__List_CommandCodeSkillEntity___set_Item__);
    }
    if ( !value )
      sub_B0D97C(0LL);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)value,
      v45,
      (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_CommandCodeSkillEntity__Add__);
  }
  v78[0] = 117;
  v79 = 1;
  v53 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v54 = 0LL;
    v55 = &v53->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v55 - 1) != System_IDisposable_TypeInfo )
    {
      ++v54;
      v55 += 4;
      if ( v54 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_31;
    }
    v56 = (__int64)&v53->vtable[*v55].method;
  }
  else
  {
LABEL_31:
    v56 = sub_AA67A0(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  listCache = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v56)(
                                                                                              Enumerator,
                                                                                              *(_QWORD *)(v56 + 8));
  v79 = 0;
  if ( !v33 )
LABEL_57:
    sub_B0D97C(listCache);
  System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaElementDecl___GetEnumerator(
    (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&v77,
    (System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaElementDecl__o *)v33,
    (const MethodInfo_2E4B244 *)Method_System_Collections_Generic_Dictionary_string__List_CommandCodeSkillEntity___GetEnumerator__);
  v80 = v77;
  while ( System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl___MoveNext(
            &v80,
            (const MethodInfo_26C9288 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__List_CommandCodeSkillEntity___MoveNext__) )
  {
    v59 = CommandCodeSkillMaster___c_TypeInfo;
    key = v80.fields.current.fields.key;
    v60 = v80.fields.current.fields.value;
    if ( (BYTE3(CommandCodeSkillMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CommandCodeSkillMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CommandCodeSkillMaster___c_TypeInfo);
      v59 = CommandCodeSkillMaster___c_TypeInfo;
    }
    static_fields = v59->static_fields;
    _9__5_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__5_0;
    if ( !_9__5_0 )
    {
      if ( (BYTE3(v59->vtable._0_Equals.methodPtr) & 4) != 0 && !v59->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v59);
        static_fields = CommandCodeSkillMaster___c_TypeInfo->static_fields;
      }
      v64 = (Il2CppObject *)static_fields->__9;
      _9__5_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B0D974(
                                                                            System_Comparison_CommandCodeSkillEntity__TypeInfo,
                                                                            v57,
                                                                            v58);
      System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
        _9__5_0,
        v64,
        Method_CommandCodeSkillMaster___c__preProcess_b__5_0__,
        (const MethodInfo_2412E90 *)Method_System_Comparison_CommandCodeSkillEntity___ctor__);
      v65 = CommandCodeSkillMaster___c_TypeInfo->static_fields;
      v65->__9__5_0 = (struct System_Comparison_CommandCodeSkillEntity__o *)_9__5_0;
      sub_B0D840(
        (BattleServantConfConponent_o *)&v65->__9__5_0,
        (System_Int32_array **)_9__5_0,
        v66,
        v67,
        v68,
        v69,
        v70,
        v71);
      this = v76;
    }
    if ( !v60 )
      goto LABEL_52;
    System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
      (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v60,
      (System_Comparison_T__o *)_9__5_0,
      (const MethodInfo_2FC77C4 *)Method_System_Collections_Generic_List_CommandCodeSkillEntity__Sort__);
    v72 = this->fields.listCache;
    v73 = (System_Xml_Schema_XmlSchemaObject_o *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                   (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v60,
                                                   (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_CommandCodeSkillEntity__ToArray__);
    if ( !v72 )
      sub_B0D97C(v73);
    System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
      (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v72,
      (System_Xml_XmlQualifiedName_o *)key,
      v73,
      (const MethodInfo_2E4AC40 *)Method_System_Collections_Generic_Dictionary_string__CommandCodeSkillEntity____set_Item__);
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      (System_Collections_Generic_List_XWeaponTrail_Element__o *)v60,
      (const MethodInfo_2FC5AF0 *)Method_System_Collections_Generic_List_CommandCodeSkillEntity__Clear__);
  }
  v78[0] = 240;
  v74 = ++v79;
  System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl___Dispose(
    &v80,
    (const MethodInfo_26C93F0 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__List_CommandCodeSkillEntity___Dispose__);
  if ( v74 && v78[v74 - 1] == 240 )
    v79 = v74 - 1;
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Clear(
    v33,
    (const MethodInfo_2E4AE44 *)Method_System_Collections_Generic_Dictionary_string__List_CommandCodeSkillEntity___Clear__);
  return 1;
}


void __fastcall CommandCodeSkillMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  struct CommandCodeSkillMaster___c_StaticFields *static_fields; // x0

  if ( (byte_4211E81 & 1) == 0 )
  {
    sub_B0D8A4(&CommandCodeSkillMaster___c_TypeInfo, v1);
    byte_4211E81 = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(CommandCodeSkillMaster___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = CommandCodeSkillMaster___c_TypeInfo->static_fields;
  static_fields->__9 = (struct CommandCodeSkillMaster___c_o *)v3;
  sub_B0D840(static_fields, v3);
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
    sub_B0D97C(this);
  return a->fields.priority - b->fields.priority;
}