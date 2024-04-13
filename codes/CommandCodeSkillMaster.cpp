void __fastcall CommandCodeSkillMaster___ctor(CommandCodeSkillMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v11; // x20
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7

  if ( (byte_42E8BFE & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_CommandCodeSkillMaster__CommandCodeSkillEntity__string___ctor__,
      (_DWORD)method,
      v2,
      v3);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__CommandCodeSkillEntity_____ctor__, v5, v6, v7);
    sub_B5D5C4(&System_Collections_Generic_Dictionary_string__CommandCodeSkillEntity____TypeInfo, v8, v9, v10);
    byte_42E8BFE = 1;
  }
  v11 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)sub_B5D694(System_Collections_Generic_Dictionary_string__CommandCodeSkillEntity____TypeInfo);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject____ctor(
    v11,
    (const MethodInfo_2F2600C *)Method_System_Collections_Generic_Dictionary_string__CommandCodeSkillEntity_____ctor__);
  this->fields.listCache = (struct System_Collections_Generic_Dictionary_string__CommandCodeSkillEntity____o *)v11;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.listCache,
    (System_Int32_array **)v11,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    254,
    (const MethodInfo_23FB1C4 *)Method_DataMasterBase_CommandCodeSkillMaster__CommandCodeSkillEntity__string___ctor__);
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

  if ( (byte_42E8BFC & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_CommandCodeSkillMaster__CommandCodeSkillEntity__string__GetEntity__,
      commandCodeId,
      num,
      *(_QWORD *)&priority);
    byte_42E8BFC = 1;
  }
  PK = CommandCodeSkillEntity__CreatePK(commandCodeId, num, priority, *(const MethodInfo **)&priority);
  return (CommandCodeSkillEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                       (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                       PK,
                                       (const MethodInfo_23FB260 *)Method_DataMasterBase_CommandCodeSkillMaster__CommandCodeSkillEntity__string__GetEntity__);
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

  if ( (byte_42E8BFD & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_CommandCodeSkillMaster__CommandCodeSkillEntity__string__TryGetEntity__,
      (_DWORD)entity,
      commandCodeId,
      *(_QWORD *)&num);
    byte_42E8BFD = 1;
  }
  PK = CommandCodeSkillEntity__CreatePK(commandCodeId, num, priority, *(const MethodInfo **)&num);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23FB2B8 *)Method_DataMasterBase_CommandCodeSkillMaster__CommandCodeSkillEntity__string__TryGetEntity__);
}


CommandCodeSkillEntity_array *__fastcall CommandCodeSkillMaster__getCommandCodeActiveSkillList(
        CommandCodeSkillMaster_o *this,
        int32_t commandCodeId,
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v18; // x21
  __int64 v19; // x1
  const MethodInfo *v20; // x3
  int v21; // w22
  _QWORD *p_image; // x0
  __int64 v23; // x8
  __int64 v24; // x10
  unsigned int v25; // w9
  int v26; // w12
  __int64 v27; // x13
  int v28; // w13
  __int64 v30; // x0

  if ( (byte_42E8C05 & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, commandCodeId, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_CommandCodeSkillEntity__Add__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_CommandCodeSkillEntity__ToArray__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_CommandCodeSkillEntity___ctor__, v12, v13, v14);
    sub_B5D5C4(&System_Collections_Generic_List_CommandCodeSkillEntity__TypeInfo, v15, v16, v17);
    byte_42E8C05 = 1;
  }
  v18 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_CommandCodeSkillEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v18,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_CommandCodeSkillEntity___ctor__);
  v21 = 0;
  while ( 1 )
  {
    p_image = &BalanceConfig_TypeInfo->_1.image;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      p_image = &BalanceConfig_TypeInfo->_1.image;
    }
    if ( v21 >= *(_DWORD *)(p_image[23] + 36LL) )
      break;
    p_image = CommandCodeSkillMaster__getEntityListFromIdNum(this, commandCodeId, ++v21, v20);
    if ( p_image )
    {
      v23 = p_image[3];
      if ( v23 )
      {
        if ( (int)v23 >= 1 )
        {
          v24 = 0LL;
          v25 = 0;
          v26 = 1;
          while ( 1 )
          {
            v27 = p_image[v24 + 4];
            if ( !v27 )
              break;
            v28 = *(_DWORD *)(v27 + 24);
            if ( v28 > v26 )
              v25 = v24;
            ++v24;
            if ( v28 > v26 )
              v26 = v28;
            if ( (int)v24 >= (int)v23 )
              goto LABEL_16;
          }
LABEL_25:
          sub_B5D69C(p_image, v19);
        }
        v25 = 0;
LABEL_16:
        if ( v25 >= (unsigned int)v23 )
        {
          v30 = sub_B5D6C8(p_image);
          sub_B5D668(v30, 0LL);
        }
        if ( !v18 )
          goto LABEL_25;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v18,
          (EventMissionProgressRequest_Argument_ProgressData_o *)p_image[(int)v25 + 4],
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_CommandCodeSkillEntity__Add__);
      }
    }
  }
  if ( !v18 )
    goto LABEL_25;
  return (CommandCodeSkillEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                           (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v18,
                                           (const MethodInfo_305910C *)Method_System_Collections_Generic_List_CommandCodeSkillEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
CommandCodeSkillEntity_array *__fastcall CommandCodeSkillMaster__getCommandCodeSkillList(
        CommandCodeSkillMaster_o *this,
        int32_t commandCodeId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int32_t v4; // w19
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
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w21
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v26; // x22
  int32_t v27; // w23
  __int64 v28; // x10

  v4 = commandCodeId;
  if ( (byte_42E8C01 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      commandCodeId,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6, v7, v8);
    sub_B5D5C4(&CommandCodeSkillEntity_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_CommandCodeSkillEntity__Add__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_CommandCodeSkillEntity__ToArray__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_CommandCodeSkillEntity___ctor__, v18, v19, v20);
    sub_B5D5C4(&System_Collections_Generic_List_CommandCodeSkillEntity__TypeInfo, v21, v22, v23);
    byte_42E8C01 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_16;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v26 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_CommandCodeSkillEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v26,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_CommandCodeSkillEntity___ctor__);
  if ( Count >= 1 )
  {
    v27 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                           list,
                                                                                           v27,
                                                                                           (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        *(_QWORD *)&commandCodeId = list;
        v28 = *(&CommandCodeSkillEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&list->klass->_2.bitflags2 + 1) >= (unsigned int)v28
          && (CommandCodeSkillEntity_c *)list->klass->_2.typeHierarchy[v28 - 1] == CommandCodeSkillEntity_TypeInfo
          && LODWORD(list->fields.items) == v4 )
        {
          if ( !v26 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v26,
            (EventMissionProgressRequest_Argument_ProgressData_o *)list,
            (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_CommandCodeSkillEntity__Add__);
        }
      }
      if ( ++v27 >= Count )
        goto LABEL_14;
    }
LABEL_16:
    sub_B5D69C(list, *(_QWORD *)&commandCodeId);
  }
LABEL_14:
  if ( !v26 )
    goto LABEL_16;
  return (CommandCodeSkillEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                           (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v26,
                                           (const MethodInfo_305910C *)Method_System_Collections_Generic_List_CommandCodeSkillEntity__ToArray__);
}


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
  if ( (byte_42E8C02 & 1) == 0 )
  {
    this = (CommandCodeSkillMaster_o *)sub_B5D5C4(
                                         &Method_System_Collections_Generic_Dictionary_string__CommandCodeSkillEntity____TryGetValue__,
                                         commandCodeId,
                                         num,
                                         method);
    byte_42E8C02 = 1;
  }
  value = 0LL;
  PriorityKey = CommandCodeSkillMaster__getPriorityKey(this, commandCodeId, num, method);
  if ( !v6->fields.listCache )
    sub_B5D69C(PriorityKey, v8);
  if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
         (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v6->fields.listCache,
         (System_Xml_XmlQualifiedName_o *)PriorityKey,
         &value,
         (const MethodInfo_2F289BC *)Method_System_Collections_Generic_Dictionary_string__CommandCodeSkillEntity____TryGetValue__) )
  {
    return (CommandCodeSkillEntity_array *)value;
  }
  else
  {
    return 0LL;
  }
}


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
  if ( (byte_42E8BFF & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_1245/*":"*/, commandCodeId, num, method);
    byte_42E8BFF = 1;
  }
  v4 = System_Int32__ToString((int32_t)&v8, 0LL);
  v5 = System_Int32__ToString((int32_t)&v7, 0LL);
  return System_String__Concat_44580072(v4, (System_String_o *)StringLiteral_1245/*":"*/, v5, 0LL);
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
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  BalanceConfig_c *v19; // x0
  System_Int32_array *v20; // x0
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  System_String_array *v27; // x0
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  System_String_array *v34; // x0
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  BattleServantConfConponent_o *v41; // x19
  int64_t v42; // x2
  const MethodInfo *v43; // x4
  __int64 v44; // x1
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  MethodInfo *v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  CommandCodeSkillEntity_array *UseEntityList; // x22
  unsigned __int64 v52; // x26
  unsigned int v53; // w24
  __int64 i; // x28
  CommandCodeSkillEntity_o *v55; // x0
  System_Int32_array *v56; // x8
  BattleServantConfConponent_c *klass; // x8
  System_String_array *v58; // x10
  System_Int32_array *v59; // x8
  System_String_array *v60; // x8
  __int64 v61; // x10
  int v62; // w9
  unsigned int *v63; // x19
  unsigned __int64 v64; // x8
  unsigned int *v65; // x9
  System_Int32_array **v66; // x23
  unsigned int *v67; // x0
  System_String_array **v68; // x2
  System_String_array **v69; // x3
  System_Boolean_array **v70; // x4
  System_Int32_array **v71; // x5
  System_Int32_array *v72; // x6
  System_Int32_array *v73; // x7
  System_String_array *v74; // x19
  unsigned __int64 max_length; // x8
  Il2CppClass **v76; // x9
  System_Int32_array **v77; // x23
  Il2CppClass **v78; // x0
  System_Int32_array *v79; // x8
  System_String_array **v80; // x2
  System_String_array **v81; // x3
  System_Boolean_array **v82; // x4
  System_Int32_array **v83; // x5
  System_Int32_array *v84; // x6
  System_Int32_array *v85; // x7
  System_String_array *v86; // x8
  System_String_array **v87; // x2
  System_String_array **v88; // x3
  System_Boolean_array **v89; // x4
  System_Int32_array **v90; // x5
  System_Int32_array *v91; // x6
  System_Int32_array *v92; // x7
  System_String_array **v93; // x2
  System_String_array **v94; // x3
  System_Boolean_array **v95; // x4
  System_Int32_array **v96; // x5
  System_Int32_array *v97; // x6
  System_Int32_array *v98; // x7
  __int64 v99; // x0
  __int64 v100; // x0

  if ( (byte_42E8C04 & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)idList, (_DWORD)titleList, explanationList);
    sub_B5D5C4(&int___TypeInfo, v13, v14, v15);
    sub_B5D5C4(&string___TypeInfo, v16, v17, v18);
    byte_42E8C04 = 1;
  }
  v19 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v19 = BalanceConfig_TypeInfo;
  }
  v20 = (System_Int32_array *)sub_B5D5DC(int___TypeInfo, (unsigned int)v19->static_fields->SvtPassiveSkillListMax);
  *idList = v20;
  sub_B5D560((BattleServantConfConponent_o *)idList, (System_Int32_array **)v20, v21, v22, v23, v24, v25, v26);
  v27 = (System_String_array *)sub_B5D5DC(
                                 string___TypeInfo,
                                 (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtPassiveSkillListMax);
  *titleList = v27;
  sub_B5D560((BattleServantConfConponent_o *)titleList, (System_Int32_array **)v27, v28, v29, v30, v31, v32, v33);
  v34 = (System_String_array *)sub_B5D5DC(
                                 string___TypeInfo,
                                 (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtPassiveSkillListMax);
  *explanationList = v34;
  sub_B5D560((BattleServantConfConponent_o *)explanationList, (System_Int32_array **)v34, v35, v36, v37, v38, v39, v40);
  v41 = (BattleServantConfConponent_o *)titleList;
  UseEntityList = CommandCodeSkillMaster__getUseEntityList(this, commandCodeId, v42, beforeClearQuestId, v43);
  v52 = 0LL;
  v53 = 0;
  for ( i = 32LL; ; i += 8LL )
  {
    v55 = (CommandCodeSkillEntity_o *)BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v55 = (CommandCodeSkillEntity_o *)BalanceConfig_TypeInfo;
    }
    if ( (__int64)v52 >= *(int *)(v55[3].fields.endedAt + 36) )
      break;
    if ( !UseEntityList )
      goto LABEL_54;
    if ( v52 >= UseEntityList->max_length )
      goto LABEL_53;
    v55 = UseEntityList->m_Items[v52];
    v56 = *idList;
    if ( v55 )
    {
      if ( !v56 )
        goto LABEL_54;
      if ( v53 >= v56->max_length )
        goto LABEL_53;
      v56->m_Items[v53 + 1] = v55->fields.skillId;
      klass = v41->klass;
      if ( !v41->klass )
        goto LABEL_54;
      v58 = *explanationList;
      if ( !*explanationList )
        goto LABEL_54;
      if ( v53 >= LODWORD(klass->_1.namespaze) || v53 >= v58->max_length )
        goto LABEL_53;
      CommandCodeSkillEntity__getEffectExplanation(
        v55,
        (System_String_o **)&klass->_1.byval_arg.data + (int)v53,
        &v58->m_Items[v53],
        0,
        v47);
      if ( v52 != v53 )
      {
        v59 = *idList;
        if ( !*idList )
          goto LABEL_54;
        if ( v52 >= v59->max_length )
          goto LABEL_53;
        v59->m_Items[v52 + 1] = 0;
        v60 = (System_String_array *)v41->klass;
        if ( !v41->klass )
          goto LABEL_54;
LABEL_41:
        if ( v52 >= v60->max_length )
          goto LABEL_53;
        v60->m_Items[v52] = 0LL;
        sub_B5D560(
          (BattleServantConfConponent_o *)((char *)v60 + i),
          0LL,
          v45,
          v46,
          (System_Boolean_array **)v47,
          v48,
          v49,
          v50);
        v86 = *explanationList;
        if ( !*explanationList )
LABEL_54:
          sub_B5D69C(v55, v44);
        if ( v52 >= v86->max_length )
          goto LABEL_53;
        v86->m_Items[v52] = 0LL;
        sub_B5D560((BattleServantConfConponent_o *)((char *)v86 + i), 0LL, v80, v81, v82, v83, v84, v85);
      }
      goto LABEL_45;
    }
    if ( !v56 )
      goto LABEL_54;
    v61 = *(_QWORD *)&v56->max_length;
    if ( v52 >= (unsigned int)v61 )
      goto LABEL_53;
    v62 = v56->m_Items[v52 + 1];
    if ( v62 >= 1 )
    {
      if ( v52 != v53 )
      {
        if ( v53 >= (unsigned int)v61 )
          goto LABEL_53;
        v56->m_Items[v53 + 1] = v62;
        v63 = (unsigned int *)v41->klass;
        if ( !v63 )
          goto LABEL_54;
        v64 = v63[6];
        if ( v52 >= v64 )
          goto LABEL_53;
        v65 = &v63[2 * v52];
        v66 = (System_Int32_array **)*((_QWORD *)v65 + 4);
        if ( v66 )
        {
          v55 = (CommandCodeSkillEntity_o *)sub_B5D684(*((_QWORD *)v65 + 4), *(_QWORD *)(*(_QWORD *)v63 + 64LL));
          if ( !v55 )
            goto LABEL_55;
          v64 = *((_QWORD *)v63 + 3);
        }
        if ( v53 >= (unsigned int)v64 )
          goto LABEL_53;
        v67 = &v63[2 * v53];
        *((_QWORD *)v67 + 4) = v66;
        sub_B5D560(
          (BattleServantConfConponent_o *)(v67 + 8),
          v66,
          v45,
          v46,
          (System_Boolean_array **)v47,
          v48,
          v49,
          v50);
        v74 = *explanationList;
        if ( !*explanationList )
          goto LABEL_54;
        max_length = v74->max_length;
        if ( v52 >= max_length )
          goto LABEL_53;
        v76 = &v74->obj.klass + v52;
        v77 = (System_Int32_array **)v76[4];
        if ( v77 )
        {
          v55 = (CommandCodeSkillEntity_o *)sub_B5D684(v76[4], v74->obj.klass->_1.element_class);
          if ( !v55 )
          {
LABEL_55:
            v100 = sub_B5D6BC(v55);
            sub_B5D668(v100, 0LL);
          }
          max_length = *(_QWORD *)&v74->max_length;
        }
        if ( v53 >= (unsigned int)max_length )
          goto LABEL_53;
        v78 = &v74->obj.klass + (int)v53;
        v78[4] = (Il2CppClass *)v77;
        sub_B5D560((BattleServantConfConponent_o *)(v78 + 4), v77, v68, v69, v70, v71, v72, v73);
        v79 = *idList;
        if ( !*idList )
          goto LABEL_54;
        v41 = (BattleServantConfConponent_o *)titleList;
        if ( v52 >= v79->max_length )
        {
LABEL_53:
          v99 = sub_B5D6C8(v55);
          sub_B5D668(v99, 0LL);
        }
        v79->m_Items[v52 + 1] = 0;
        v60 = *titleList;
        if ( !*titleList )
          goto LABEL_54;
        goto LABEL_41;
      }
LABEL_45:
      ++v53;
    }
    ++v52;
  }
  if ( !v53 )
  {
    *idList = 0LL;
    sub_B5D560((BattleServantConfConponent_o *)idList, 0LL, v45, v46, (System_Boolean_array **)v47, v48, v49, v50);
    v41->klass = 0LL;
    sub_B5D560(v41, 0LL, v87, v88, v89, v90, v91, v92);
    *explanationList = 0LL;
    sub_B5D560((BattleServantConfConponent_o *)explanationList, 0LL, v93, v94, v95, v96, v97, v98);
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
        v15 = sub_B5D6C8(EntityListFromIdNum);
        sub_B5D668(v15, 0LL);
      }
      v12 = &v10->obj.klass + i;
      v13 = (CommandCodeSkillEntity_o *)v12[4];
      if ( !v13 )
        sub_B5D69C(EntityListFromIdNum, v8);
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
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  BalanceConfig_c *v11; // x0
  int64_t v12; // x3
  const MethodInfo *v13; // x5
  CommandCodeSkillEntity_array *v14; // x22
  signed __int64 v15; // x24
  BattleServantConfConponent_o *i; // x23
  signed __int64 v17; // x25
  CommandCodeSkillEntity_o *UseEntity; // x0
  __int64 v19; // x1
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  System_Int32_array **v26; // x24
  unsigned __int64 v27; // x25
  BalanceConfig_c *v28; // x0
  __int64 v30; // x0
  __int64 v31; // x0

  if ( (byte_42E8C03 & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, commandCodeId, userId, *(_QWORD *)&beforeClearQuestId);
    sub_B5D5C4(&CommandCodeSkillEntity___TypeInfo, v8, v9, v10);
    byte_42E8C03 = 1;
  }
  v11 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v11 = BalanceConfig_TypeInfo;
  }
  v14 = (CommandCodeSkillEntity_array *)sub_B5D5DC(
                                          CommandCodeSkillEntity___TypeInfo,
                                          (unsigned int)v11->static_fields->SvtPassiveSkillListMax);
  v15 = 0LL;
  for ( i = (BattleServantConfConponent_o *)v14->m_Items; ; i = (BattleServantConfConponent_o *)((char *)i + 8) )
  {
    v28 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v28 = BalanceConfig_TypeInfo;
    }
    if ( v15 >= v28->static_fields->SvtPassiveSkillListMax )
      break;
    v17 = v15 + 1;
    UseEntity = CommandCodeSkillMaster__getUseEntity(this, commandCodeId, (int)v15 + 1, v12, beforeClearQuestId, v13);
    if ( !v14 )
      sub_B5D69C(UseEntity, v19);
    v26 = (System_Int32_array **)UseEntity;
    if ( UseEntity )
    {
      UseEntity = (CommandCodeSkillEntity_o *)sub_B5D684(UseEntity, v14->obj.klass->_1.element_class);
      if ( !UseEntity )
      {
        v31 = sub_B5D6BC(0LL);
        sub_B5D668(v31, 0LL);
      }
    }
    v27 = v17 - 1;
    if ( v27 >= v14->max_length )
    {
      v30 = sub_B5D6C8(UseEntity);
      sub_B5D668(v30, 0LL);
    }
    i->klass = (BattleServantConfConponent_c *)v26;
    sub_B5D560(i, v26, v20, v21, v22, v23, v24, v25);
    v15 = v27 + 1;
  }
  return v14;
}


bool __fastcall CommandCodeSkillMaster__preProcess(CommandCodeSkillMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
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
  int v68; // w1
  int v69; // w2
  __int64 v70; // x3
  int v71; // w1
  int v72; // w2
  __int64 v73; // x3
  int v74; // w1
  int v75; // w2
  __int64 v76; // x3
  int v77; // w1
  int v78; // w2
  __int64 v79; // x3
  int v80; // w1
  int v81; // w2
  __int64 v82; // x3
  int v83; // w1
  int v84; // w2
  __int64 v85; // x3
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *listCache; // x0
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v87; // x20
  __int64 v88; // x1
  __int64 v89; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x21
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v92; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v95; // x3
  System_Collections_Generic_IEnumerator_T__c *v96; // x8
  unsigned __int64 v97; // x10
  int32_t *v98; // x11
  __int64 v99; // x0
  __int64 v100; // x0
  __int64 v101; // x1
  const MethodInfo *v102; // x3
  EventMissionProgressRequest_Argument_ProgressData_o *v103; // x22
  __int64 v104; // x9
  System_String_o *PriorityKey; // x0
  __int64 v106; // x1
  System_Xml_XmlQualifiedName_o *v107; // x23
  __int64 v108; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v109; // x24
  System_Xml_Schema_XmlSchemaObject_o *v110; // x2
  System_Collections_Generic_IEnumerator_T__c *v111; // x8
  unsigned __int64 v112; // x10
  int32_t *v113; // x11
  __int64 v114; // x0
  __int64 v115; // x1
  CommandCodeSkillMaster___c_c *v116; // x0
  Il2CppObject *v117; // x21
  Il2CppObject *key; // x22
  struct CommandCodeSkillMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__5_0; // x23
  Il2CppObject *v121; // x24
  struct CommandCodeSkillMaster___c_StaticFields *v122; // x0
  System_String_array **v123; // x2
  System_String_array **v124; // x3
  System_Boolean_array **v125; // x4
  System_Int32_array **v126; // x5
  System_Int32_array *v127; // x6
  System_Int32_array *v128; // x7
  struct System_Collections_Generic_Dictionary_string__CommandCodeSkillEntity____o *v129; // x23
  System_Xml_Schema_XmlSchemaObject_o *v130; // x0
  __int64 v131; // x1
  int v132; // w21
  CommandCodeSkillMaster_o *v134; // [xsp+10h] [xbp-C0h]
  System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl__o v135; // [xsp+18h] [xbp-B8h] BYREF
  int v136[2]; // [xsp+40h] [xbp-90h]
  int v137; // [xsp+48h] [xbp-88h]
  System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl__o v138; // [xsp+50h] [xbp-80h] BYREF
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+78h] [xbp-58h] BYREF

  if ( (byte_42E8C00 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__,
      (_DWORD)method,
      v2,
      v3);
    sub_B5D5C4(&CommandCodeSkillEntity_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_System_Comparison_CommandCodeSkillEntity___ctor__, v8, v9, v10);
    sub_B5D5C4(&System_Comparison_CommandCodeSkillEntity__TypeInfo, v11, v12, v13);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_string__List_CommandCodeSkillEntity___Clear__,
      v14,
      v15,
      v16);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__CommandCodeSkillEntity____Clear__, v17, v18, v19);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_string__List_CommandCodeSkillEntity___GetEnumerator__,
      v20,
      v21,
      v22);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_string__List_CommandCodeSkillEntity___TryGetValue__,
      v23,
      v24,
      v25);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_string__List_CommandCodeSkillEntity____ctor__,
      v26,
      v27,
      v28);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_string__List_CommandCodeSkillEntity___set_Item__,
      v29,
      v30,
      v31);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_string__CommandCodeSkillEntity____set_Item__,
      v32,
      v33,
      v34);
    sub_B5D5C4(&System_Collections_Generic_Dictionary_string__List_CommandCodeSkillEntity___TypeInfo, v35, v36, v37);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_Enumerator_string__List_CommandCodeSkillEntity___Dispose__,
      v38,
      v39,
      v40);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_Enumerator_string__List_CommandCodeSkillEntity___MoveNext__,
      v41,
      v42,
      v43);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_Enumerator_string__List_CommandCodeSkillEntity___get_Current__,
      v44,
      v45,
      v46);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v47, v48, v49);
    sub_B5D5C4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v50, v51, v52);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v53, v54, v55);
    sub_B5D5C4(
      &Method_System_Collections_Generic_KeyValuePair_string__List_CommandCodeSkillEntity___get_Key__,
      v56,
      v57,
      v58);
    sub_B5D5C4(
      &Method_System_Collections_Generic_KeyValuePair_string__List_CommandCodeSkillEntity___get_Value__,
      v59,
      v60,
      v61);
    sub_B5D5C4(&Method_System_Collections_Generic_List_CommandCodeSkillEntity__Add__, v62, v63, v64);
    sub_B5D5C4(&Method_System_Collections_Generic_List_CommandCodeSkillEntity__Clear__, v65, v66, v67);
    sub_B5D5C4(&Method_System_Collections_Generic_List_CommandCodeSkillEntity__Sort__, v68, v69, v70);
    sub_B5D5C4(&Method_System_Collections_Generic_List_CommandCodeSkillEntity__ToArray__, v71, v72, v73);
    sub_B5D5C4(&Method_System_Collections_Generic_List_CommandCodeSkillEntity___ctor__, v74, v75, v76);
    sub_B5D5C4(&System_Collections_Generic_List_CommandCodeSkillEntity__TypeInfo, v77, v78, v79);
    sub_B5D5C4(&Method_CommandCodeSkillMaster___c__preProcess_b__5_0__, v80, v81, v82);
    sub_B5D5C4(&CommandCodeSkillMaster___c_TypeInfo, v83, v84, v85);
    byte_42E8C00 = 1;
  }
  value = 0LL;
  memset(&v138, 0, sizeof(v138));
  v137 = 0;
  listCache = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.listCache;
  if ( !listCache )
    goto LABEL_57;
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Clear(
    listCache,
    (const MethodInfo_2F26D98 *)Method_System_Collections_Generic_Dictionary_string__CommandCodeSkillEntity____Clear__);
  v87 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)sub_B5D694(System_Collections_Generic_Dictionary_string__List_CommandCodeSkillEntity___TypeInfo);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject____ctor(
    v87,
    (const MethodInfo_2F2600C *)Method_System_Collections_Generic_Dictionary_string__List_CommandCodeSkillEntity____ctor__);
  listCache = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.list;
  if ( !listCache )
    goto LABEL_57;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)listCache,
                 (const MethodInfo_2BB8C48 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  v134 = this;
  if ( !Enumerator )
    sub_B5D69C(0LL, v88);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v92 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v92;
        p_offset += 4;
        if ( v92 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_AF54C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v89);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v96 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v97 = 0LL;
      v98 = &v96->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v98 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v97;
        v98 += 4;
        if ( v97 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_17;
      }
      v99 = (__int64)&v96->vtable[*v98].method;
    }
    else
    {
LABEL_17:
      v99 = sub_AF54C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v95);
    }
    v100 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v99)(
             Enumerator,
             *(_QWORD *)(v99 + 8));
    v103 = (EventMissionProgressRequest_Argument_ProgressData_o *)v100;
    if ( !v100 )
      sub_B5D69C(0LL, v101);
    v104 = *(&CommandCodeSkillEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*(_QWORD *)v100 + 300LL) < (unsigned int)v104
      || *(CommandCodeSkillEntity_c **)(*(_QWORD *)(*(_QWORD *)v100 + 200LL) + 8 * v104 - 8) != CommandCodeSkillEntity_TypeInfo )
    {
      v116 = (CommandCodeSkillMaster___c_c *)sub_B5D990(v100);
LABEL_52:
      sub_B5D69C(v116, v115);
    }
    PriorityKey = CommandCodeSkillMaster__getPriorityKey(
                    (CommandCodeSkillMaster_o *)v100,
                    *(_DWORD *)(v100 + 16),
                    *(_DWORD *)(v100 + 20),
                    v102);
    if ( !v87 )
      sub_B5D69C(PriorityKey, v106);
    v107 = (System_Xml_XmlQualifiedName_o *)PriorityKey;
    if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
            v87,
            (System_Xml_XmlQualifiedName_o *)PriorityKey,
            &value,
            (const MethodInfo_2F289BC *)Method_System_Collections_Generic_Dictionary_string__List_CommandCodeSkillEntity___TryGetValue__) )
    {
      v109 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_CommandCodeSkillEntity__TypeInfo);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
        v109,
        (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_CommandCodeSkillEntity___ctor__);
      value = (System_Xml_Schema_XmlSchemaObject_o *)v109;
      v110 = (System_Xml_Schema_XmlSchemaObject_o *)v109;
      this = v134;
      System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
        v87,
        v107,
        v110,
        (const MethodInfo_2F26B94 *)Method_System_Collections_Generic_Dictionary_string__List_CommandCodeSkillEntity___set_Item__);
    }
    if ( !value )
      sub_B5D69C(0LL, v108);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)value,
      v103,
      (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_CommandCodeSkillEntity__Add__);
  }
  v136[0] = 117;
  v137 = 1;
  v111 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v112 = 0LL;
    v113 = &v111->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v113 - 1) != System_IDisposable_TypeInfo )
    {
      ++v112;
      v113 += 4;
      if ( v112 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_31;
    }
    v114 = (__int64)&v111->vtable[*v113].method;
  }
  else
  {
LABEL_31:
    v114 = sub_AF54C0(Enumerator, System_IDisposable_TypeInfo, 0LL, v95);
  }
  listCache = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v114)(
                                                                                              Enumerator,
                                                                                              *(_QWORD *)(v114 + 8));
  v137 = 0;
  if ( !v87 )
LABEL_57:
    sub_B5D69C(listCache, method);
  System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaElementDecl___GetEnumerator(
    (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&v135,
    (System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaElementDecl__o *)v87,
    (const MethodInfo_2F27198 *)Method_System_Collections_Generic_Dictionary_string__List_CommandCodeSkillEntity___GetEnumerator__);
  v138 = v135;
  while ( System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl___MoveNext(
            &v138,
            (const MethodInfo_2767D00 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__List_CommandCodeSkillEntity___MoveNext__) )
  {
    v116 = CommandCodeSkillMaster___c_TypeInfo;
    key = v138.fields.current.fields.key;
    v117 = v138.fields.current.fields.value;
    if ( (BYTE3(CommandCodeSkillMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CommandCodeSkillMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CommandCodeSkillMaster___c_TypeInfo);
      v116 = CommandCodeSkillMaster___c_TypeInfo;
    }
    static_fields = v116->static_fields;
    _9__5_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__5_0;
    if ( !_9__5_0 )
    {
      if ( (BYTE3(v116->vtable._0_Equals.methodPtr) & 4) != 0 && !v116->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v116);
        static_fields = CommandCodeSkillMaster___c_TypeInfo->static_fields;
      }
      v121 = (Il2CppObject *)static_fields->__9;
      _9__5_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B5D694(System_Comparison_CommandCodeSkillEntity__TypeInfo);
      System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
        _9__5_0,
        v121,
        Method_CommandCodeSkillMaster___c__preProcess_b__5_0__,
        (const MethodInfo_249B1FC *)Method_System_Comparison_CommandCodeSkillEntity___ctor__);
      v122 = CommandCodeSkillMaster___c_TypeInfo->static_fields;
      v122->__9__5_0 = (struct System_Comparison_CommandCodeSkillEntity__o *)_9__5_0;
      sub_B5D560(
        (BattleServantConfConponent_o *)&v122->__9__5_0,
        (System_Int32_array **)_9__5_0,
        v123,
        v124,
        v125,
        v126,
        v127,
        v128);
      this = v134;
    }
    if ( !v117 )
      goto LABEL_52;
    System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
      (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v117,
      (System_Comparison_T__o *)_9__5_0,
      (const MethodInfo_305909C *)Method_System_Collections_Generic_List_CommandCodeSkillEntity__Sort__);
    v129 = this->fields.listCache;
    v130 = (System_Xml_Schema_XmlSchemaObject_o *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v117,
                                                    (const MethodInfo_305910C *)Method_System_Collections_Generic_List_CommandCodeSkillEntity__ToArray__);
    if ( !v129 )
      sub_B5D69C(v130, v131);
    System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
      (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v129,
      (System_Xml_XmlQualifiedName_o *)key,
      v130,
      (const MethodInfo_2F26B94 *)Method_System_Collections_Generic_Dictionary_string__CommandCodeSkillEntity____set_Item__);
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      (System_Collections_Generic_List_XWeaponTrail_Element__o *)v117,
      (const MethodInfo_30573C8 *)Method_System_Collections_Generic_List_CommandCodeSkillEntity__Clear__);
  }
  v136[0] = 240;
  v132 = ++v137;
  System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl___Dispose(
    &v138,
    (const MethodInfo_2767E68 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__List_CommandCodeSkillEntity___Dispose__);
  if ( v132 && v136[v132 - 1] == 240 )
    v137 = v132 - 1;
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Clear(
    v87,
    (const MethodInfo_2F26D98 *)Method_System_Collections_Generic_Dictionary_string__List_CommandCodeSkillEntity___Clear__);
  return 1;
}


void __fastcall CommandCodeSkillMaster___c___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_42E6CF3 & 1) == 0 )
  {
    sub_B5D5C4(&CommandCodeSkillMaster___c_TypeInfo, v1, v2, v3);
    byte_42E6CF3 = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(CommandCodeSkillMaster___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = (BattleServantConfConponent_o *)CommandCodeSkillMaster___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v4;
  sub_B5D560(static_fields, (System_Int32_array **)v4, v6, v7, v8, v9, v10, v11);
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
    sub_B5D69C(this, a);
  return a->fields.priority - b->fields.priority;
}