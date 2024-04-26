void __fastcall CommandCodeSkillMaster___ctor(CommandCodeSkillMaster_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v3; // x20
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7

  if ( (byte_43546A5 & 1) == 0 )
  {
    sub_B70694(&Method_DataMasterBase_CommandCodeSkillMaster__CommandCodeSkillEntity__string___ctor__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__CommandCodeSkillEntity_____ctor__);
    sub_B70694(&System_Collections_Generic_Dictionary_string__CommandCodeSkillEntity____TypeInfo);
    byte_43546A5 = 1;
  }
  v3 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)sub_B70764(System_Collections_Generic_Dictionary_string__CommandCodeSkillEntity____TypeInfo);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject____ctor(
    v3,
    (const MethodInfo_2F4EE38 *)Method_System_Collections_Generic_Dictionary_string__CommandCodeSkillEntity_____ctor__);
  this->fields.listCache = (struct System_Collections_Generic_Dictionary_string__CommandCodeSkillEntity____o *)v3;
  sub_B70630((BattleServantConfConponent_o *)&this->fields.listCache, (System_Int32_array **)v3, v4, v5, v6, v7, v8, v9);
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    254,
    (const MethodInfo_21C07F4 *)Method_DataMasterBase_CommandCodeSkillMaster__CommandCodeSkillEntity__string___ctor__);
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

  if ( (byte_43546A3 & 1) == 0 )
  {
    sub_B70694(&Method_DataMasterBase_CommandCodeSkillMaster__CommandCodeSkillEntity__string__GetEntity__);
    byte_43546A3 = 1;
  }
  PK = CommandCodeSkillEntity__CreatePK(commandCodeId, num, priority, *(const MethodInfo **)&priority);
  return (CommandCodeSkillEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                       (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                       PK,
                                       (const MethodInfo_21C0890 *)Method_DataMasterBase_CommandCodeSkillMaster__CommandCodeSkillEntity__string__GetEntity__);
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

  if ( (byte_43546A4 & 1) == 0 )
  {
    sub_B70694(&Method_DataMasterBase_CommandCodeSkillMaster__CommandCodeSkillEntity__string__TryGetEntity__);
    byte_43546A4 = 1;
  }
  PK = CommandCodeSkillEntity__CreatePK(commandCodeId, num, priority, *(const MethodInfo **)&num);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_21C08E8 *)Method_DataMasterBase_CommandCodeSkillMaster__CommandCodeSkillEntity__string__TryGetEntity__);
}


CommandCodeSkillEntity_array *__fastcall CommandCodeSkillMaster__getCommandCodeActiveSkillList(
        CommandCodeSkillMaster_o *this,
        int32_t commandCodeId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v5; // x21
  __int64 v6; // x1
  const MethodInfo *v7; // x3
  int v8; // w22
  _QWORD *p_image; // x0
  __int64 v10; // x8
  __int64 v11; // x10
  unsigned int v12; // w9
  int v13; // w12
  __int64 v14; // x13
  int v15; // w13
  __int64 v17; // x0

  if ( (byte_43546AC & 1) == 0 )
  {
    sub_B70694(&BalanceConfig_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_CommandCodeSkillEntity__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_CommandCodeSkillEntity__ToArray__);
    sub_B70694(&Method_System_Collections_Generic_List_CommandCodeSkillEntity___ctor__);
    sub_B70694(&System_Collections_Generic_List_CommandCodeSkillEntity__TypeInfo);
    byte_43546AC = 1;
  }
  v5 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_CommandCodeSkillEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v5,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_CommandCodeSkillEntity___ctor__);
  v8 = 0;
  while ( 1 )
  {
    p_image = &BalanceConfig_TypeInfo->_1.image;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      p_image = &BalanceConfig_TypeInfo->_1.image;
    }
    if ( v8 >= *(_DWORD *)(p_image[23] + 36LL) )
      break;
    p_image = CommandCodeSkillMaster__getEntityListFromIdNum(this, commandCodeId, ++v8, v7);
    if ( p_image )
    {
      v10 = p_image[3];
      if ( v10 )
      {
        if ( (int)v10 >= 1 )
        {
          v11 = 0LL;
          v12 = 0;
          v13 = 1;
          while ( 1 )
          {
            v14 = p_image[v11 + 4];
            if ( !v14 )
              break;
            v15 = *(_DWORD *)(v14 + 24);
            if ( v15 > v13 )
              v12 = v11;
            ++v11;
            if ( v15 > v13 )
              v13 = v15;
            if ( (int)v11 >= (int)v10 )
              goto LABEL_16;
          }
LABEL_25:
          sub_B7076C(p_image, v6);
        }
        v12 = 0;
LABEL_16:
        if ( v12 >= (unsigned int)v10 )
        {
          v17 = sub_B70798(p_image);
          sub_B70738(v17, 0LL);
        }
        if ( !v5 )
          goto LABEL_25;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v5,
          (EventMissionProgressRequest_Argument_ProgressData_o *)p_image[(int)v12 + 4],
          (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_CommandCodeSkillEntity__Add__);
      }
    }
  }
  if ( !v5 )
    goto LABEL_25;
  return (CommandCodeSkillEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                           (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v5,
                                           (const MethodInfo_30277D4 *)Method_System_Collections_Generic_List_CommandCodeSkillEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
CommandCodeSkillEntity_array *__fastcall CommandCodeSkillMaster__getCommandCodeSkillList(
        CommandCodeSkillMaster_o *this,
        int32_t commandCodeId,
        const MethodInfo *method)
{
  int32_t v3; // w19
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w21
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v7; // x22
  int32_t v8; // w23
  __int64 v9; // x10

  v3 = commandCodeId;
  if ( (byte_43546A8 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B70694(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B70694(&CommandCodeSkillEntity_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_CommandCodeSkillEntity__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_CommandCodeSkillEntity__ToArray__);
    sub_B70694(&Method_System_Collections_Generic_List_CommandCodeSkillEntity___ctor__);
    sub_B70694(&System_Collections_Generic_List_CommandCodeSkillEntity__TypeInfo);
    byte_43546A8 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_16;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2C85F70 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v7 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_CommandCodeSkillEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v7,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_CommandCodeSkillEntity___ctor__);
  if ( Count >= 1 )
  {
    v8 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                           list,
                                                                                           v8,
                                                                                           (const MethodInfo_2C86014 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        *(_QWORD *)&commandCodeId = list;
        v9 = *(&CommandCodeSkillEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&list->klass->_2.bitflags2 + 1) >= (unsigned int)v9
          && (CommandCodeSkillEntity_c *)list->klass->_2.typeHierarchy[v9 - 1] == CommandCodeSkillEntity_TypeInfo
          && LODWORD(list->fields.items) == v3 )
        {
          if ( !v7 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v7,
            (EventMissionProgressRequest_Argument_ProgressData_o *)list,
            (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_CommandCodeSkillEntity__Add__);
        }
      }
      if ( ++v8 >= Count )
        goto LABEL_14;
    }
LABEL_16:
    sub_B7076C(list, *(_QWORD *)&commandCodeId);
  }
LABEL_14:
  if ( !v7 )
    goto LABEL_16;
  return (CommandCodeSkillEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                           (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v7,
                                           (const MethodInfo_30277D4 *)Method_System_Collections_Generic_List_CommandCodeSkillEntity__ToArray__);
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
  if ( (byte_43546A9 & 1) == 0 )
  {
    this = (CommandCodeSkillMaster_o *)sub_B70694(&Method_System_Collections_Generic_Dictionary_string__CommandCodeSkillEntity____TryGetValue__);
    byte_43546A9 = 1;
  }
  value = 0LL;
  PriorityKey = CommandCodeSkillMaster__getPriorityKey(this, commandCodeId, num, method);
  if ( !v6->fields.listCache )
    sub_B7076C(PriorityKey, v8);
  if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
         (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v6->fields.listCache,
         (System_Xml_XmlQualifiedName_o *)PriorityKey,
         &value,
         (const MethodInfo_2F517E8 *)Method_System_Collections_Generic_Dictionary_string__CommandCodeSkillEntity____TryGetValue__) )
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
  if ( (byte_43546A6 & 1) == 0 )
  {
    sub_B70694(&StringLiteral_1250/*":"*/);
    byte_43546A6 = 1;
  }
  v4 = System_Int32__ToString((int32_t)&v8, 0LL);
  v5 = System_Int32__ToString((int32_t)&v7, 0LL);
  return System_String__Concat_44760452(v4, (System_String_o *)StringLiteral_1250/*":"*/, v5, 0LL);
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
  BalanceConfig_c *v13; // x0
  System_Int32_array *v14; // x0
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  System_String_array *v21; // x0
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  System_String_array *v28; // x0
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  BattleServantConfConponent_o *v35; // x19
  int64_t v36; // x2
  const MethodInfo *v37; // x4
  __int64 v38; // x1
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  MethodInfo *v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  CommandCodeSkillEntity_array *UseEntityList; // x22
  unsigned __int64 v46; // x26
  unsigned int v47; // w24
  __int64 i; // x28
  CommandCodeSkillEntity_o *v49; // x0
  System_Int32_array *v50; // x8
  BattleServantConfConponent_c *klass; // x8
  System_String_array *v52; // x10
  System_Int32_array *v53; // x8
  System_String_array *v54; // x8
  __int64 v55; // x10
  int v56; // w9
  unsigned int *v57; // x19
  unsigned __int64 v58; // x8
  unsigned int *v59; // x9
  System_Int32_array **v60; // x23
  unsigned int *v61; // x0
  System_String_array **v62; // x2
  System_String_array **v63; // x3
  System_Boolean_array **v64; // x4
  System_Int32_array **v65; // x5
  System_Int32_array *v66; // x6
  System_Int32_array *v67; // x7
  System_String_array *v68; // x19
  unsigned __int64 max_length; // x8
  Il2CppClass **v70; // x9
  System_Int32_array **v71; // x23
  Il2CppClass **v72; // x0
  System_Int32_array *v73; // x8
  System_String_array **v74; // x2
  System_String_array **v75; // x3
  System_Boolean_array **v76; // x4
  System_Int32_array **v77; // x5
  System_Int32_array *v78; // x6
  System_Int32_array *v79; // x7
  System_String_array *v80; // x8
  System_String_array **v81; // x2
  System_String_array **v82; // x3
  System_Boolean_array **v83; // x4
  System_Int32_array **v84; // x5
  System_Int32_array *v85; // x6
  System_Int32_array *v86; // x7
  System_String_array **v87; // x2
  System_String_array **v88; // x3
  System_Boolean_array **v89; // x4
  System_Int32_array **v90; // x5
  System_Int32_array *v91; // x6
  System_Int32_array *v92; // x7
  __int64 v93; // x0
  __int64 v94; // x0

  if ( (byte_43546AB & 1) == 0 )
  {
    sub_B70694(&BalanceConfig_TypeInfo);
    sub_B70694(&int___TypeInfo);
    sub_B70694(&string___TypeInfo);
    byte_43546AB = 1;
  }
  v13 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v13 = BalanceConfig_TypeInfo;
  }
  v14 = (System_Int32_array *)sub_B706AC(int___TypeInfo, (unsigned int)v13->static_fields->SvtPassiveSkillListMax);
  *idList = v14;
  sub_B70630((BattleServantConfConponent_o *)idList, (System_Int32_array **)v14, v15, v16, v17, v18, v19, v20);
  v21 = (System_String_array *)sub_B706AC(
                                 string___TypeInfo,
                                 (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtPassiveSkillListMax);
  *titleList = v21;
  sub_B70630((BattleServantConfConponent_o *)titleList, (System_Int32_array **)v21, v22, v23, v24, v25, v26, v27);
  v28 = (System_String_array *)sub_B706AC(
                                 string___TypeInfo,
                                 (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtPassiveSkillListMax);
  *explanationList = v28;
  sub_B70630((BattleServantConfConponent_o *)explanationList, (System_Int32_array **)v28, v29, v30, v31, v32, v33, v34);
  v35 = (BattleServantConfConponent_o *)titleList;
  UseEntityList = CommandCodeSkillMaster__getUseEntityList(this, commandCodeId, v36, beforeClearQuestId, v37);
  v46 = 0LL;
  v47 = 0;
  for ( i = 32LL; ; i += 8LL )
  {
    v49 = (CommandCodeSkillEntity_o *)BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v49 = (CommandCodeSkillEntity_o *)BalanceConfig_TypeInfo;
    }
    if ( (__int64)v46 >= *(int *)(v49[3].fields.endedAt + 36) )
      break;
    if ( !UseEntityList )
      goto LABEL_54;
    if ( v46 >= UseEntityList->max_length )
      goto LABEL_53;
    v49 = UseEntityList->m_Items[v46];
    v50 = *idList;
    if ( v49 )
    {
      if ( !v50 )
        goto LABEL_54;
      if ( v47 >= v50->max_length )
        goto LABEL_53;
      v50->m_Items[v47 + 1] = v49->fields.skillId;
      klass = v35->klass;
      if ( !v35->klass )
        goto LABEL_54;
      v52 = *explanationList;
      if ( !*explanationList )
        goto LABEL_54;
      if ( v47 >= LODWORD(klass->_1.namespaze) || v47 >= v52->max_length )
        goto LABEL_53;
      CommandCodeSkillEntity__getEffectExplanation(
        v49,
        (System_String_o **)&klass->_1.byval_arg.data + (int)v47,
        &v52->m_Items[v47],
        0,
        v41);
      if ( v46 != v47 )
      {
        v53 = *idList;
        if ( !*idList )
          goto LABEL_54;
        if ( v46 >= v53->max_length )
          goto LABEL_53;
        v53->m_Items[v46 + 1] = 0;
        v54 = (System_String_array *)v35->klass;
        if ( !v35->klass )
          goto LABEL_54;
LABEL_41:
        if ( v46 >= v54->max_length )
          goto LABEL_53;
        v54->m_Items[v46] = 0LL;
        sub_B70630(
          (BattleServantConfConponent_o *)((char *)v54 + i),
          0LL,
          v39,
          v40,
          (System_Boolean_array **)v41,
          v42,
          v43,
          v44);
        v80 = *explanationList;
        if ( !*explanationList )
LABEL_54:
          sub_B7076C(v49, v38);
        if ( v46 >= v80->max_length )
          goto LABEL_53;
        v80->m_Items[v46] = 0LL;
        sub_B70630((BattleServantConfConponent_o *)((char *)v80 + i), 0LL, v74, v75, v76, v77, v78, v79);
      }
      goto LABEL_45;
    }
    if ( !v50 )
      goto LABEL_54;
    v55 = *(_QWORD *)&v50->max_length;
    if ( v46 >= (unsigned int)v55 )
      goto LABEL_53;
    v56 = v50->m_Items[v46 + 1];
    if ( v56 >= 1 )
    {
      if ( v46 != v47 )
      {
        if ( v47 >= (unsigned int)v55 )
          goto LABEL_53;
        v50->m_Items[v47 + 1] = v56;
        v57 = (unsigned int *)v35->klass;
        if ( !v57 )
          goto LABEL_54;
        v58 = v57[6];
        if ( v46 >= v58 )
          goto LABEL_53;
        v59 = &v57[2 * v46];
        v60 = (System_Int32_array **)*((_QWORD *)v59 + 4);
        if ( v60 )
        {
          v49 = (CommandCodeSkillEntity_o *)sub_B70754(*((_QWORD *)v59 + 4), *(_QWORD *)(*(_QWORD *)v57 + 64LL));
          if ( !v49 )
            goto LABEL_55;
          v58 = *((_QWORD *)v57 + 3);
        }
        if ( v47 >= (unsigned int)v58 )
          goto LABEL_53;
        v61 = &v57[2 * v47];
        *((_QWORD *)v61 + 4) = v60;
        sub_B70630(
          (BattleServantConfConponent_o *)(v61 + 8),
          v60,
          v39,
          v40,
          (System_Boolean_array **)v41,
          v42,
          v43,
          v44);
        v68 = *explanationList;
        if ( !*explanationList )
          goto LABEL_54;
        max_length = v68->max_length;
        if ( v46 >= max_length )
          goto LABEL_53;
        v70 = &v68->obj.klass + v46;
        v71 = (System_Int32_array **)v70[4];
        if ( v71 )
        {
          v49 = (CommandCodeSkillEntity_o *)sub_B70754(v70[4], v68->obj.klass->_1.element_class);
          if ( !v49 )
          {
LABEL_55:
            v94 = sub_B7078C(v49);
            sub_B70738(v94, 0LL);
          }
          max_length = *(_QWORD *)&v68->max_length;
        }
        if ( v47 >= (unsigned int)max_length )
          goto LABEL_53;
        v72 = &v68->obj.klass + (int)v47;
        v72[4] = (Il2CppClass *)v71;
        sub_B70630((BattleServantConfConponent_o *)(v72 + 4), v71, v62, v63, v64, v65, v66, v67);
        v73 = *idList;
        if ( !*idList )
          goto LABEL_54;
        v35 = (BattleServantConfConponent_o *)titleList;
        if ( v46 >= v73->max_length )
        {
LABEL_53:
          v93 = sub_B70798(v49);
          sub_B70738(v93, 0LL);
        }
        v73->m_Items[v46 + 1] = 0;
        v54 = *titleList;
        if ( !*titleList )
          goto LABEL_54;
        goto LABEL_41;
      }
LABEL_45:
      ++v47;
    }
    ++v46;
  }
  if ( !v47 )
  {
    *idList = 0LL;
    sub_B70630((BattleServantConfConponent_o *)idList, 0LL, v39, v40, (System_Boolean_array **)v41, v42, v43, v44);
    v35->klass = 0LL;
    sub_B70630(v35, 0LL, v81, v82, v83, v84, v85, v86);
    *explanationList = 0LL;
    sub_B70630((BattleServantConfConponent_o *)explanationList, 0LL, v87, v88, v89, v90, v91, v92);
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
        v15 = sub_B70798(EntityListFromIdNum);
        sub_B70738(v15, 0LL);
      }
      v12 = &v10->obj.klass + i;
      v13 = (CommandCodeSkillEntity_o *)v12[4];
      if ( !v13 )
        sub_B7076C(EntityListFromIdNum, v8);
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


CommandCodeSkillEntity_array *__fastcall CommandCodeSkillMaster__getUseEntityList(
        CommandCodeSkillMaster_o *this,
        int32_t commandCodeId,
        int64_t userId,
        int32_t beforeClearQuestId,
        const MethodInfo *method)
{
  BalanceConfig_c *v8; // x0
  int64_t v9; // x3
  const MethodInfo *v10; // x5
  CommandCodeSkillEntity_array *v11; // x22
  signed __int64 v12; // x24
  BattleServantConfConponent_o *i; // x23
  signed __int64 v14; // x25
  CommandCodeSkillEntity_o *UseEntity; // x0
  __int64 v16; // x1
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

  if ( (byte_43546AA & 1) == 0 )
  {
    sub_B70694(&BalanceConfig_TypeInfo);
    sub_B70694(&CommandCodeSkillEntity___TypeInfo);
    byte_43546AA = 1;
  }
  v8 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v8 = BalanceConfig_TypeInfo;
  }
  v11 = (CommandCodeSkillEntity_array *)sub_B706AC(
                                          CommandCodeSkillEntity___TypeInfo,
                                          (unsigned int)v8->static_fields->SvtPassiveSkillListMax);
  v12 = 0LL;
  for ( i = (BattleServantConfConponent_o *)v11->m_Items; ; i = (BattleServantConfConponent_o *)((char *)i + 8) )
  {
    v25 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v25 = BalanceConfig_TypeInfo;
    }
    if ( v12 >= v25->static_fields->SvtPassiveSkillListMax )
      break;
    v14 = v12 + 1;
    UseEntity = CommandCodeSkillMaster__getUseEntity(this, commandCodeId, (int)v12 + 1, v9, beforeClearQuestId, v10);
    if ( !v11 )
      sub_B7076C(UseEntity, v16);
    v23 = (System_Int32_array **)UseEntity;
    if ( UseEntity )
    {
      UseEntity = (CommandCodeSkillEntity_o *)sub_B70754(UseEntity, v11->obj.klass->_1.element_class);
      if ( !UseEntity )
      {
        v28 = sub_B7078C(0LL);
        sub_B70738(v28, 0LL);
      }
    }
    v24 = v14 - 1;
    if ( v24 >= v11->max_length )
    {
      v27 = sub_B70798(UseEntity);
      sub_B70738(v27, 0LL);
    }
    i->klass = (BattleServantConfConponent_c *)v23;
    sub_B70630(i, v23, v17, v18, v19, v20, v21, v22);
    v12 = v24 + 1;
  }
  return v11;
}


bool __fastcall CommandCodeSkillMaster__preProcess(CommandCodeSkillMaster_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *listCache; // x0
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v4; // x20
  __int64 v5; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x21
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v8; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v11; // x8
  unsigned __int64 v12; // x10
  int32_t *v13; // x11
  __int64 v14; // x0
  __int64 v15; // x0
  __int64 v16; // x1
  const MethodInfo *v17; // x3
  EventMissionProgressRequest_Argument_ProgressData_o *v18; // x22
  __int64 v19; // x9
  System_String_o *PriorityKey; // x0
  __int64 v21; // x1
  System_Xml_XmlQualifiedName_o *v22; // x23
  __int64 v23; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v24; // x24
  System_Xml_Schema_XmlSchemaObject_o *v25; // x2
  System_Collections_Generic_IEnumerator_T__c *v26; // x8
  unsigned __int64 v27; // x10
  int32_t *v28; // x11
  __int64 v29; // x0
  __int64 v30; // x1
  CommandCodeSkillMaster___c_c *v31; // x0
  Il2CppObject *v32; // x21
  Il2CppObject *key; // x22
  struct CommandCodeSkillMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__5_0; // x23
  Il2CppObject *v36; // x24
  struct CommandCodeSkillMaster___c_StaticFields *v37; // x0
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  struct System_Collections_Generic_Dictionary_string__CommandCodeSkillEntity____o *v44; // x23
  System_Xml_Schema_XmlSchemaObject_o *v45; // x0
  __int64 v46; // x1
  int v47; // w21
  CommandCodeSkillMaster_o *v49; // [xsp+10h] [xbp-C0h]
  System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl__o v50; // [xsp+18h] [xbp-B8h] BYREF
  int v51[2]; // [xsp+40h] [xbp-90h]
  int v52; // [xsp+48h] [xbp-88h]
  System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl__o v53; // [xsp+50h] [xbp-80h] BYREF
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+78h] [xbp-58h] BYREF

  if ( (byte_43546A7 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_B70694(&CommandCodeSkillEntity_TypeInfo);
    sub_B70694(&Method_System_Comparison_CommandCodeSkillEntity___ctor__);
    sub_B70694(&System_Comparison_CommandCodeSkillEntity__TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__List_CommandCodeSkillEntity___Clear__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__CommandCodeSkillEntity____Clear__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__List_CommandCodeSkillEntity___GetEnumerator__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__List_CommandCodeSkillEntity___TryGetValue__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__List_CommandCodeSkillEntity____ctor__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__List_CommandCodeSkillEntity___set_Item__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__CommandCodeSkillEntity____set_Item__);
    sub_B70694(&System_Collections_Generic_Dictionary_string__List_CommandCodeSkillEntity___TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_Enumerator_string__List_CommandCodeSkillEntity___Dispose__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_Enumerator_string__List_CommandCodeSkillEntity___MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_Enumerator_string__List_CommandCodeSkillEntity___get_Current__);
    sub_B70694(&System_IDisposable_TypeInfo);
    sub_B70694(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_B70694(&System_Collections_IEnumerator_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_KeyValuePair_string__List_CommandCodeSkillEntity___get_Key__);
    sub_B70694(&Method_System_Collections_Generic_KeyValuePair_string__List_CommandCodeSkillEntity___get_Value__);
    sub_B70694(&Method_System_Collections_Generic_List_CommandCodeSkillEntity__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_CommandCodeSkillEntity__Clear__);
    sub_B70694(&Method_System_Collections_Generic_List_CommandCodeSkillEntity__Sort__);
    sub_B70694(&Method_System_Collections_Generic_List_CommandCodeSkillEntity__ToArray__);
    sub_B70694(&Method_System_Collections_Generic_List_CommandCodeSkillEntity___ctor__);
    sub_B70694(&System_Collections_Generic_List_CommandCodeSkillEntity__TypeInfo);
    sub_B70694(&Method_CommandCodeSkillMaster___c__preProcess_b__5_0__);
    sub_B70694(&CommandCodeSkillMaster___c_TypeInfo);
    byte_43546A7 = 1;
  }
  value = 0LL;
  memset(&v53, 0, sizeof(v53));
  v52 = 0;
  listCache = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.listCache;
  if ( !listCache )
    goto LABEL_57;
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Clear(
    listCache,
    (const MethodInfo_2F4FBC4 *)Method_System_Collections_Generic_Dictionary_string__CommandCodeSkillEntity____Clear__);
  v4 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)sub_B70764(System_Collections_Generic_Dictionary_string__List_CommandCodeSkillEntity___TypeInfo);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject____ctor(
    v4,
    (const MethodInfo_2F4EE38 *)Method_System_Collections_Generic_Dictionary_string__List_CommandCodeSkillEntity____ctor__);
  listCache = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.list;
  if ( !listCache )
    goto LABEL_57;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)listCache,
                 (const MethodInfo_2C865F4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  v49 = this;
  if ( !Enumerator )
    sub_B7076C(0LL, v5);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v8 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v8;
        p_offset += 4;
        if ( v8 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_B08590(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v11 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v12 = 0LL;
      v13 = &v11->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v13 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v12;
        v13 += 4;
        if ( v12 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_17;
      }
      v14 = (__int64)&v11->vtable[*v13].method;
    }
    else
    {
LABEL_17:
      v14 = sub_B08590(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v15 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v14)(
            Enumerator,
            *(_QWORD *)(v14 + 8));
    v18 = (EventMissionProgressRequest_Argument_ProgressData_o *)v15;
    if ( !v15 )
      sub_B7076C(0LL, v16);
    v19 = *(&CommandCodeSkillEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*(_QWORD *)v15 + 300LL) < (unsigned int)v19
      || *(CommandCodeSkillEntity_c **)(*(_QWORD *)(*(_QWORD *)v15 + 200LL) + 8 * v19 - 8) != CommandCodeSkillEntity_TypeInfo )
    {
      sub_B70A60(v15);
LABEL_52:
      sub_B7076C(v31, v30);
    }
    PriorityKey = CommandCodeSkillMaster__getPriorityKey(
                    (CommandCodeSkillMaster_o *)v15,
                    *(_DWORD *)(v15 + 16),
                    *(_DWORD *)(v15 + 20),
                    v17);
    if ( !v4 )
      sub_B7076C(PriorityKey, v21);
    v22 = (System_Xml_XmlQualifiedName_o *)PriorityKey;
    if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
            v4,
            (System_Xml_XmlQualifiedName_o *)PriorityKey,
            &value,
            (const MethodInfo_2F517E8 *)Method_System_Collections_Generic_Dictionary_string__List_CommandCodeSkillEntity___TryGetValue__) )
    {
      v24 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_CommandCodeSkillEntity__TypeInfo);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
        v24,
        (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_CommandCodeSkillEntity___ctor__);
      value = (System_Xml_Schema_XmlSchemaObject_o *)v24;
      v25 = (System_Xml_Schema_XmlSchemaObject_o *)v24;
      this = v49;
      System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
        v4,
        v22,
        v25,
        (const MethodInfo_2F4F9C0 *)Method_System_Collections_Generic_Dictionary_string__List_CommandCodeSkillEntity___set_Item__);
    }
    if ( !value )
      sub_B7076C(0LL, v23);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)value,
      v18,
      (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_CommandCodeSkillEntity__Add__);
  }
  v51[0] = 117;
  v52 = 1;
  v26 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v27 = 0LL;
    v28 = &v26->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v28 - 1) != System_IDisposable_TypeInfo )
    {
      ++v27;
      v28 += 4;
      if ( v27 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_31;
    }
    v29 = (__int64)&v26->vtable[*v28].method;
  }
  else
  {
LABEL_31:
    v29 = sub_B08590(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  listCache = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v29)(
                                                                                              Enumerator,
                                                                                              *(_QWORD *)(v29 + 8));
  v52 = 0;
  if ( !v4 )
LABEL_57:
    sub_B7076C(listCache, method);
  System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaElementDecl___GetEnumerator(
    (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&v50,
    (System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaElementDecl__o *)v4,
    (const MethodInfo_2F4FFC4 *)Method_System_Collections_Generic_Dictionary_string__List_CommandCodeSkillEntity___GetEnumerator__);
  v53 = v50;
  while ( System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl___MoveNext(
            &v53,
            (const MethodInfo_277B4A0 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__List_CommandCodeSkillEntity___MoveNext__) )
  {
    v31 = CommandCodeSkillMaster___c_TypeInfo;
    key = v53.fields.current.fields.key;
    v32 = v53.fields.current.fields.value;
    if ( (BYTE3(CommandCodeSkillMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CommandCodeSkillMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CommandCodeSkillMaster___c_TypeInfo);
      v31 = CommandCodeSkillMaster___c_TypeInfo;
    }
    static_fields = v31->static_fields;
    _9__5_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__5_0;
    if ( !_9__5_0 )
    {
      if ( (BYTE3(v31->vtable._0_Equals.methodPtr) & 4) != 0 && !v31->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v31);
        static_fields = CommandCodeSkillMaster___c_TypeInfo->static_fields;
      }
      v36 = (Il2CppObject *)static_fields->__9;
      _9__5_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B70764(System_Comparison_CommandCodeSkillEntity__TypeInfo);
      System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
        _9__5_0,
        v36,
        Method_CommandCodeSkillMaster___c__preProcess_b__5_0__,
        (const MethodInfo_2B05B38 *)Method_System_Comparison_CommandCodeSkillEntity___ctor__);
      v37 = CommandCodeSkillMaster___c_TypeInfo->static_fields;
      v37->__9__5_0 = (struct System_Comparison_CommandCodeSkillEntity__o *)_9__5_0;
      sub_B70630(
        (BattleServantConfConponent_o *)&v37->__9__5_0,
        (System_Int32_array **)_9__5_0,
        v38,
        v39,
        v40,
        v41,
        v42,
        v43);
      this = v49;
    }
    if ( !v32 )
      goto LABEL_52;
    System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
      (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v32,
      (System_Comparison_T__o *)_9__5_0,
      (const MethodInfo_3027764 *)Method_System_Collections_Generic_List_CommandCodeSkillEntity__Sort__);
    v44 = this->fields.listCache;
    v45 = (System_Xml_Schema_XmlSchemaObject_o *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                   (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v32,
                                                   (const MethodInfo_30277D4 *)Method_System_Collections_Generic_List_CommandCodeSkillEntity__ToArray__);
    if ( !v44 )
      sub_B7076C(v45, v46);
    System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
      (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v44,
      (System_Xml_XmlQualifiedName_o *)key,
      v45,
      (const MethodInfo_2F4F9C0 *)Method_System_Collections_Generic_Dictionary_string__CommandCodeSkillEntity____set_Item__);
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      (System_Collections_Generic_List_XWeaponTrail_Element__o *)v32,
      (const MethodInfo_3025A90 *)Method_System_Collections_Generic_List_CommandCodeSkillEntity__Clear__);
  }
  v51[0] = 240;
  v47 = ++v52;
  System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl___Dispose(
    &v53,
    (const MethodInfo_277B608 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__List_CommandCodeSkillEntity___Dispose__);
  if ( v47 && v51[v47 - 1] == 240 )
    v52 = v47 - 1;
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Clear(
    v4,
    (const MethodInfo_2F4FBC4 *)Method_System_Collections_Generic_Dictionary_string__List_CommandCodeSkillEntity___Clear__);
  return 1;
}


void __fastcall CommandCodeSkillMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7

  if ( (byte_434FAA5 & 1) == 0 )
  {
    sub_B70694(&CommandCodeSkillMaster___c_TypeInfo);
    byte_434FAA5 = 1;
  }
  v1 = (Il2CppObject *)sub_B70764(CommandCodeSkillMaster___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = (BattleServantConfConponent_o *)CommandCodeSkillMaster___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v1;
  sub_B70630(static_fields, (System_Int32_array **)v1, v3, v4, v5, v6, v7, v8);
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
    sub_B7076C(this, a);
  return a->fields.priority - b->fields.priority;
}