void QuestAfterAction___cctor(const MethodInfo *method)
{
  if ( (byte_4CC3F43 & 1) == 0 )
  {
    sub_1C713B0(&QuestAfterAction_TypeInfo);
    byte_4CC3F43 = 1;
  }
  LODWORD(QuestAfterAction_TypeInfo->static_fields->EventAnimationAfterBgmResetTime) = (struct QuestAfterAction_StaticFields)1056964608;
}


void QuestAfterAction___ctor(QuestAfterAction_o *this, const MethodInfo *method)
{
  Il2CppObject *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7
  BlankEarthQuestAfterAction_o *v10; // x20
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  System_Collections_Generic_Dictionary_TKey__TValue__o *v17; // x20
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  System_Collections_Generic_Dictionary_int__object__o *v24; // x20
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7

  if ( (byte_4CC3F42 & 1) == 0 )
  {
    sub_1C713B0(&BlankEarthQuestAfterAction_TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo___ctor__);
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int____ctor__);
    sub_1C713B0(&System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___TypeInfo);
    sub_1C713B0(&System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_QuestAfterAction___ctor__);
    sub_1C713B0(&QuestAfterAction_TitleInfoControlCallback_TypeInfo);
    byte_4CC3F42 = 1;
  }
  v3 = (Il2CppObject *)sub_1C715FC(QuestAfterAction_TitleInfoControlCallback_TypeInfo);
  System_Object___ctor(v3, 0);
  this->fields._TitleInfoCtrlCallback_k__BackingField = (struct QuestAfterAction_TitleInfoControlCallback_o *)v3;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields._TitleInfoCtrlCallback_k__BackingField,
    (int32_t)v3,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  v10 = (BlankEarthQuestAfterAction_o *)sub_1C715FC(BlankEarthQuestAfterAction_TypeInfo);
  BlankEarthQuestAfterAction___ctor(v10, 0);
  this->fields._BlankEarthQuestAfterAction_k__BackingField = v10;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields._BlankEarthQuestAfterAction_k__BackingField,
    (int32_t)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  v17 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1C715FC(System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___TypeInfo);
  System_Collections_Generic_Dictionary_Int32Enum__object____ctor(
    v17,
    (const MethodInfo_3494CFC *)Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int____ctor__);
  this->fields.commandTypeIds = (struct System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___o *)v17;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.commandTypeIds, (int32_t)v17, v18, v19, v20, v21, v22, v23);
  v24 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C715FC(System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v24,
    (const MethodInfo_34618C0 *)Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo___ctor__);
  this->fields.svtVoices = (struct System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__o *)v24;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.svtVoices, (int32_t)v24, v25, v26, v27, v28, v29, v30);
  this->fields.MapMoveBeforeFocusSpotId = -1;
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_3A5F640 *)Method_SingletonMonoBehaviour_QuestAfterAction___ctor__);
}


void QuestAfterAction__CallEndAct(QuestAfterAction_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  GrandQuestFolderBoardItem_o *p_endAct; // x0
  System_Action_o *endAct; // t1

  endAct = this->fields.endAct;
  p_endAct = (GrandQuestFolderBoardItem_o *)&this->fields.endAct;
  p_endAct->klass = 0;
  sub_1C71354(p_endAct, 0, v2, v3, v4, v5, v6, v7);
  ActionExtensions__Call(endAct, 0);
}


bool QuestAfterAction__CheckChangeBlankEarth(QuestAfterAction_o *this, const MethodInfo *method)
{
  bool result; // w0
  __int64 v4; // x1
  Il2CppObject *Instance; // x19
  __int64 v6; // x0
  Il2CppObject *MasterData_object; // x21
  int32_t v8; // w22
  _QWORD *p_image; // x21
  Il2CppObject *v10; // x21
  int32_t v11; // w22
  TerminalPramsManager_c *v12; // x0
  int32_t v13; // w20
  __int64 v14; // x8
  unsigned int *v15; // x19
  __int64 v16; // x23
  unsigned __int64 v17; // x24
  __int64 v18; // x25
  int i; // w26
  __int64 v20; // x20
  int32_t v21; // w2
  int32_t v22; // w3
  System_String_o *v23; // x4
  int32_t v24; // w5
  int64_t v25; // x6
  System_String_o *v26; // x7
  __int64 v27; // x1
  int32_t v28; // w2
  int32_t v29; // w3
  System_String_o *v30; // x4
  int32_t v31; // w5
  int64_t v32; // x6
  System_String_o *v33; // x7
  __int64 v34; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4CC3F25 & 1) == 0 )
  {
    sub_1C713B0(&QuestAfterAction_Command___TypeInfo);
    sub_1C713B0(&QuestAfterAction_Command_TypeInfo);
    sub_1C713B0(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1C713B0(&Method_DataManager_GetMasterData_QuestPhaseDetailAddMaster___);
    sub_1C713B0(&Method_DataManager_GetMasterData_QuestPhaseDetailMaster___);
    sub_1C713B0(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
    sub_1C713B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C713B0(&TerminalPramsManager_TypeInfo);
    sub_1C713B0(&StringLiteral_1165/*"1"*/);
    byte_4CC3F25 = 1;
  }
  entity = 0;
  if ( this->fields.BlankEarthTargetWarId > 0 )
    return 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4CC3F4D )
  {
    sub_1C713B0(&TerminalPramsManager_TypeInfo);
    byte_4CC3F4D = 1;
  }
  v6 = (__int64)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v6 = (__int64)TerminalPramsManager_TypeInfo;
  }
  if ( *(_BYTE *)(*(_QWORD *)(v6 + 184) + 102LL) )
  {
    if ( !Instance )
      goto LABEL_76;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_QuestPhaseDetailAddMaster___);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4CC13B1 )
    {
      sub_1C713B0(&TerminalPramsManager_TypeInfo);
      byte_4CC13B1 = 1;
    }
    v6 = (__int64)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v6 = (__int64)TerminalPramsManager_TypeInfo;
    }
    v8 = *(_DWORD *)(*(_QWORD *)(v6 + 184) + 20LL);
    if ( !byte_4CC13B0 )
    {
      sub_1C713B0(&TerminalPramsManager_TypeInfo);
      v6 = (__int64)TerminalPramsManager_TypeInfo;
      byte_4CC13B0 = 1;
    }
    if ( !*(_DWORD *)(v6 + 224) )
    {
      j_il2cpp_runtime_class_init_0(v6);
      v6 = (__int64)TerminalPramsManager_TypeInfo;
    }
    if ( !MasterData_object )
      goto LABEL_76;
    p_image = QuestPhaseDetailAddMaster__GetAfterAction(
                (QuestPhaseDetailAddMaster_o *)MasterData_object,
                v8,
                *(_DWORD *)(*(_QWORD *)(v6 + 184) + 24LL) + 1,
                0);
    if ( p_image )
      goto LABEL_60;
    v10 = DataManager__GetMasterData_object_(
            (DataManager_o *)Instance,
            (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_QuestPhaseDetailMaster___);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4CC13B1 )
    {
      sub_1C713B0(&TerminalPramsManager_TypeInfo);
      byte_4CC13B1 = 1;
    }
    v6 = (__int64)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v6 = (__int64)TerminalPramsManager_TypeInfo;
    }
    v11 = *(_DWORD *)(*(_QWORD *)(v6 + 184) + 20LL);
    if ( !byte_4CC13B0 )
    {
      sub_1C713B0(&TerminalPramsManager_TypeInfo);
      v6 = (__int64)TerminalPramsManager_TypeInfo;
      byte_4CC13B0 = 1;
    }
    if ( !*(_DWORD *)(v6 + 224) )
    {
      j_il2cpp_runtime_class_init_0(v6);
      v6 = (__int64)TerminalPramsManager_TypeInfo;
    }
    if ( !v10 )
      goto LABEL_76;
    p_image = QuestPhaseDetailMaster__GetAfterAction(
                (QuestPhaseDetailMaster_o *)v10,
                v11,
                *(_DWORD *)(*(_QWORD *)(v6 + 184) + 24LL) + 1,
                0);
    if ( p_image )
      goto LABEL_60;
    v6 = (__int64)TerminalPramsManager_TypeInfo;
  }
  if ( !*(_DWORD *)(v6 + 224) )
    j_il2cpp_runtime_class_init_0(v6);
  if ( !byte_4CC3F50 )
  {
    sub_1C713B0(&TerminalPramsManager_TypeInfo);
    byte_4CC3F50 = 1;
  }
  v12 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v12 = TerminalPramsManager_TypeInfo;
  }
  if ( !v12->static_fields->_IsQuestClear_k__BackingField )
    return 0;
  if ( !v12->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v12);
  if ( TerminalPramsManager__get_Debug_IsQuestReleaseAll(0) )
    return 0;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4CC13B1 )
  {
    sub_1C713B0(&TerminalPramsManager_TypeInfo);
    byte_4CC13B1 = 1;
  }
  v6 = (__int64)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v6 = (__int64)TerminalPramsManager_TypeInfo;
  }
  if ( !Instance
    || (v13 = *(_DWORD *)(*(_QWORD *)(v6 + 184) + 20LL),
        (v6 = (__int64)DataManager__GetMasterData_object_(
                         (DataManager_o *)Instance,
                         (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_QuestMaster___)) == 0) )
  {
LABEL_76:
    sub_1C71608(v6, v4);
  }
  v6 = DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)v6,
         &entity,
         v13,
         (const MethodInfo_3408ECC *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
  if ( (v6 & 1) == 0 )
    return 0;
  if ( !entity )
    goto LABEL_76;
  p_image = &entity[6].klass->_1.image;
  if ( !p_image )
    return 0;
LABEL_60:
  v14 = p_image[3];
  result = 0;
  if ( (int)v14 < 2 || (v14 & 1) != 0 )
    return result;
  v6 = sub_1C71458(QuestAfterAction_Command___TypeInfo, (unsigned int)v14 >> 1);
  if ( !v6 )
    goto LABEL_76;
  v15 = (unsigned int *)v6;
  if ( *(int *)(v6 + 24) < 1 )
    return 0;
  v16 = 0;
  v17 = 0;
  v18 = v6 + 32;
  for ( i = 1; ; i += 2 )
  {
    v20 = sub_1C715FC(QuestAfterAction_Command_TypeInfo);
    System_Object___ctor((Il2CppObject *)v20, 0);
    if ( (unsigned int)(i - 1) >= *((_DWORD *)p_image + 6) )
      goto LABEL_75;
    v6 = System_Int32__Parse((System_String_o *)p_image[i + 3], 0);
    if ( !v20 )
      goto LABEL_76;
    *(_DWORD *)(v20 + 16) = v6;
    if ( (unsigned int)i >= *((_DWORD *)p_image + 6) )
LABEL_75:
      sub_1C71610(v6);
    v27 = p_image[i + 4];
    *(_QWORD *)(v20 + 24) = v27;
    sub_1C71354((GrandQuestFolderBoardItem_o *)(v20 + 24), v27, v21, v22, v23, v24, v25, v26);
    if ( *(_DWORD *)(v20 + 16) == 701
      && System_String__op_Equality(*(System_String_o **)(v20 + 24), (System_String_o *)StringLiteral_1165/*"1"*/, 0) )
    {
      break;
    }
    v6 = sub_1C714EC(v20, *(_QWORD *)(*(_QWORD *)v15 + 64LL));
    if ( !v6 )
    {
      v34 = sub_1C7162C();
      sub_1C714D8(v34, 0);
    }
    if ( v17 >= v15[6] )
      goto LABEL_75;
    *(_QWORD *)(v18 + 8 * v17) = v20;
    sub_1C71354((GrandQuestFolderBoardItem_o *)(v18 + v16), v20, v28, v29, v30, v31, v32, v33);
    ++v17;
    v16 += 8;
    if ( (__int64)v17 >= (int)v15[6] )
      return 0;
  }
  return 1;
}


void QuestAfterAction__Clear(QuestAfterAction_o *this, const MethodInfo *method)
{
  QuestAfterAction_c *v3; // x0
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7

  if ( (byte_4CC3F3E & 1) == 0 )
  {
    sub_1C713B0(&QuestAfterAction_TypeInfo);
    byte_4CC3F3E = 1;
  }
  v3 = QuestAfterAction_TypeInfo;
  if ( !QuestAfterAction_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(QuestAfterAction_TypeInfo);
  QuestAfterAction__DeleteContinueData((const MethodInfo *)v3);
  this->fields.commandBuf = 0;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.commandBuf, 0, v4, v5, v6, v7, v8, v9);
}


QuestAfterAction_Command_array *QuestAfterAction__ConvertValsToCommand(
        QuestAfterAction_o *this,
        System_String_array *actionVals,
        const MethodInfo *method)
{
  if ( (byte_4CC3F33 & 1) == 0 )
  {
    sub_1C713B0(&QuestAfterAction_TypeInfo);
    byte_4CC3F33 = 1;
  }
  if ( !QuestAfterAction_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(QuestAfterAction_TypeInfo);
  return QuestAfterAction__GenerateCommandBuf(actionVals, (const MethodInfo *)actionVals);
}


// local variable allocation has failed, the output may be wrong!
void QuestAfterAction__CreateCommandBuf(QuestAfterAction_o *this, bool isBeforeAction, const MethodInfo *method)
{
  QuestAfterAction_o *v4; // x20
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x2
  TerminalPramsManager_c *v7; // x0
  int32_t QuestId_k__BackingField; // w22
  int32_t PhaseCnt_k__BackingField; // w19
  System_String_array *afterActionVals; // x23
  __int64 v11; // x1
  Il2CppObject *Instance; // x22
  DataMasterBase_TMaster__TEntity__PKType__o *MasterData_object; // x0
  System_Collections_ObjectModel_ObservableCollection_TEntity__c *klass; // x8
  System_Collections_ObjectModel_ObservableCollection_TEntity__c *v15; // x8
  const MethodInfo *v16; // x8
  int32_t invoker_method_high; // w24
  System_Collections_ObjectModel_ObservableCollection_TEntity__c *v18; // x8
  const MethodInfo *v19; // x8
  int32_t invoker_method; // w25
  System_Collections_ObjectModel_ObservableCollection_TEntity__c *v21; // x8
  const MethodInfo *v22; // x8
  int32_t MasterName_k__BackingField_high; // w24
  System_Collections_ObjectModel_ObservableCollection_TEntity__c *v24; // x8
  const MethodInfo *v25; // x8
  int32_t MasterKind_k__BackingField; // w19
  TerminalPramsManager_c *v27; // x0
  TerminalSceneComponent_c *v28; // x0
  TerminalPramsManager_c *v29; // x0
  DataMasterBase_TMaster__TEntity__PKType__o *v30; // x23
  int32_t v31; // w24
  int32_t v32; // w24
  System_String_o *lookup; // x24
  bool v34; // w24
  bool v35; // w23
  Il2CppObject *v36; // x23
  WarEntity_o *QuestId; // x0
  WarEntity_o *v38; // x23
  BalanceConfig_c *v39; // x0
  bool v40; // w0
  uint32_t cctor_finished; // w9
  TerminalPramsManager_c *v42; // x0
  TerminalPramsManager_c *v43; // x0
  int32_t id; // w19
  bool v45; // w23
  TerminalPramsManager_c *v46; // x0
  Il2CppObject *Master_object; // x23
  WarReleaseEntity_o *OpenEntity; // x24
  Il2CppObject *v49; // x23
  bool QuestEntity; // w0
  TerminalPramsManager_c *v51; // x0
  Il2CppObject *v52; // x23
  int32_t items_high; // w24
  Il2CppObject *v54; // x22
  int32_t v55; // w23
  TerminalPramsManager_c *v56; // x0
  Il2CppObject *v57; // x22
  int32_t v58; // w24
  bool IsOverwriteCommandNone; // w0
  il2cpp_array_size_t max_length; // x8
  __int64 v61; // x0
  unsigned int **p_commandBuf; // x21
  int32_t v63; // w2
  int32_t v64; // w3
  System_String_o *v65; // x4
  int32_t v66; // w5
  int64_t v67; // x6
  System_String_o *v68; // x7
  int *commandBuf; // x8
  unsigned __int64 v70; // x22
  unsigned int v71; // w29
  char *v72; // x28
  __int64 v73; // x24
  int32_t v74; // w2
  int32_t v75; // w3
  System_String_o *v76; // x4
  int32_t v77; // w5
  int64_t v78; // x6
  System_String_o *v79; // x7
  __int64 v80; // x8
  System_String_o *v81; // x1
  System_String_o **v82; // x25
  const MethodInfo *v83; // x2
  int v84; // w8
  bool v85; // w8
  System_String_array *v86; // x19
  char *v87; // x23
  System_Collections_Generic_Dictionary_int__object__o *svtVoices; // x26
  int32_t v89; // w21
  DataMasterBase_TMaster__TEntity__PKType__o *v90; // x28
  __int64 v91; // x27
  int32_t v92; // w2
  int32_t v93; // w3
  System_String_o *v94; // x4
  int32_t v95; // w5
  int64_t v96; // x6
  System_String_o *v97; // x7
  System_String_c *MasterName_k__BackingField; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v99; // x26
  int32_t v100; // w26
  TerminalPramsManager_c *v101; // x0
  BalanceConfig_c *v102; // x8
  int32_t WarId_k__BackingField; // w27
  TerminalPramsManager_c *v104; // x0
  int32_t v105; // w27
  int v106; // w8
  unsigned int v107; // w8
  const MethodInfo *v108; // x1
  System_Collections_Generic_List_int__o *Item; // x26
  struct System_Int32_array *items; // x8
  _QWORD *v111; // x9
  __int64 size; // x10
  QuestAfterAction_o *v113; // x0
  const MethodInfo *v114; // x2
  System_String_c *v115; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v116; // x25
  unsigned __int64 v117; // x26
  System_String_Fields v118; // x8
  _QWORD *v119; // x9
  __int64 MasterName_k__BackingField_low; // x10
  unsigned int *v121; // x25
  int32_t v122; // w2
  int32_t v123; // w3
  System_String_o *v124; // x4
  int32_t v125; // w5
  int64_t v126; // x6
  System_String_o *v127; // x7
  unsigned int *v128; // x0
  TerminalPramsManager_c *v129; // x0
  TerminalPramsManager_c *v130; // x0
  int32_t BeforeQuestStartWarId_k__BackingField; // w19
  TerminalSceneComponent_c *v132; // x0
  Il2CppObject *v133; // x21
  TerminalPramsManager_c *v134; // x0
  TerminalPramsManager_c *v135; // x0
  Il2CppObject *v136; // x20
  TerminalPramsManager_c *v137; // x0
  BalanceConfig_c *v138; // x8
  int32_t v139; // w19
  int32_t v140; // w19
  TerminalPramsManager_c *v141; // x0
  TerminalPramsManager_c *v142; // x0
  TerminalPramsManager_c *v143; // x0
  BalanceConfig_c *v144; // x8
  int32_t v145; // w20
  TerminalPramsManager_c *v146; // x0
  __int64 v147; // x0
  char v148; // [xsp+4h] [xbp-9Ch]
  OpeningMovieEntity_o *ent; // [xsp+10h] [xbp-90h] BYREF
  int32_t svtId; // [xsp+1Ch] [xbp-84h] BYREF
  Il2CppObject *v151; // [xsp+20h] [xbp-80h] BYREF
  QuestEntity_o *entity; // [xsp+28h] [xbp-78h] BYREF
  Il2CppObject *v153; // [xsp+30h] [xbp-70h] BYREF
  QuestEntity_o *v154; // [xsp+38h] [xbp-68h] BYREF

  v4 = this;
  if ( (byte_4CC3F24 & 1) == 0 )
  {
    sub_1C713B0(&BalanceConfig_TypeInfo);
    sub_1C713B0(&bool_TypeInfo);
    sub_1C713B0(&QuestAfterAction_Command___TypeInfo);
    sub_1C713B0(&QuestAfterAction_Command_TypeInfo);
    sub_1C713B0(&Method_DataManager_GetMasterData_EventMissionMaster___);
    sub_1C713B0(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1C713B0(&Method_DataManager_GetMasterData_QuestPhaseDetailAddMaster___);
    sub_1C713B0(&Method_DataManager_GetMasterData_QuestPhaseDetailMaster___);
    sub_1C713B0(&Method_DataManager_GetMasterData_WarMaster___);
    sub_1C713B0(&Method_DataManager_GetMaster_BlankEarthSpotMaster___);
    sub_1C713B0(&Method_DataManager_GetMaster_QuestBehaviorMaster___);
    sub_1C713B0(&Method_DataManager_GetMaster_QuestMaster___);
    sub_1C713B0(&Method_DataManager_GetMaster_ShopMaster___);
    sub_1C713B0(&Method_DataManager_GetMaster_WarMaster___);
    sub_1C713B0(&Method_DataManager_GetMaster_WarReleaseMaster___);
    sub_1C713B0(&DataManager_TypeInfo);
    sub_1C713B0(&Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__);
    sub_1C713B0(&Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__GetEntity__);
    sub_1C713B0(&Method_DataMasterBase_BlankEarthSpotMaster__BlankEarthSpotEntity__int__TryGetEntity__);
    sub_1C713B0(&Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___get_Item__);
    sub_1C713B0(&Method_System_Linq_Enumerable_Any_KeyValuePair_int__QuestAfterAction_VoiceInfo____);
    sub_1C713B0(&Method_System_Linq_Enumerable_Contains_int___);
    sub_1C713B0(&GrandQuestViewSwitcher_TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C713B0(&QuestAfterAction_TypeInfo);
    sub_1C713B0(&ScrTerminalListTop_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C713B0(&TerminalPramsManager_TypeInfo);
    sub_1C713B0(&TerminalSceneComponent_TypeInfo);
    sub_1C713B0(&QuestAfterAction_VoiceInfo_TypeInfo);
    sub_1C713B0(&StringLiteral_16731/*"afterActionBk"*/);
    this = (QuestAfterAction_o *)sub_1C713B0(&StringLiteral_808/*","*/);
    byte_4CC3F24 = 1;
  }
  v153 = 0;
  v154 = 0;
  v151 = 0;
  entity = 0;
  svtId = 0;
  ent = 0;
  *(_WORD *)&v4->fields.isLoadedVoice = 0;
  *(_QWORD *)&v4->fields.ActionMapTargetType = -1;
  if ( isBeforeAction )
  {
    if ( System_Linq_Enumerable__Any_KeyValuePair_int__object__(
           (System_Collections_Generic_IEnumerable_TSource__o *)v4->fields.svtVoices,
           (const MethodInfo_3155F8C *)Method_System_Linq_Enumerable_Any_KeyValuePair_int__QuestAfterAction_VoiceInfo____) )
    {
      QuestAfterAction__releaseVoice(v4, v5);
    }
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4CC13B1 )
    {
      sub_1C713B0(&TerminalPramsManager_TypeInfo);
      byte_4CC13B1 = 1;
    }
    v7 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v7 = TerminalPramsManager_TypeInfo;
    }
    QuestId_k__BackingField = v7->static_fields->_QuestId_k__BackingField;
    if ( !byte_4CC13B0 )
    {
      sub_1C713B0(&TerminalPramsManager_TypeInfo);
      v7 = TerminalPramsManager_TypeInfo;
      byte_4CC13B0 = 1;
    }
    if ( !v7->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v7);
      v7 = TerminalPramsManager_TypeInfo;
    }
    PhaseCnt_k__BackingField = v7->static_fields->_PhaseCnt_k__BackingField;
    if ( !QuestAfterAction_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(QuestAfterAction_TypeInfo);
    afterActionVals = QuestAfterAction__GetBeforeAction(QuestId_k__BackingField, PhaseCnt_k__BackingField + 1, v6);
    goto LABEL_234;
  }
  QuestAfterAction__LoadTerminalTransitionInfo(this, (const MethodInfo *)isBeforeAction);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4CC12CE )
  {
    sub_1C713B0(&TerminalSceneComponent_TypeInfo);
    byte_4CC12CE = 1;
  }
  MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalSceneComponent_TypeInfo;
  }
  klass = MasterData_object[2].fields.list->klass;
  if ( !klass )
    goto LABEL_356;
  if ( !klass->vtable._9_unknown.method )
    goto LABEL_82;
  if ( !LODWORD(MasterData_object[3].monitor) )
    j_il2cpp_runtime_class_init_0(MasterData_object);
  if ( !byte_4CC12CE )
  {
    sub_1C713B0(&TerminalSceneComponent_TypeInfo);
    byte_4CC12CE = 1;
  }
  MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalSceneComponent_TypeInfo;
  }
  v15 = MasterData_object[2].fields.list->klass;
  if ( !v15 )
    goto LABEL_356;
  v16 = v15->vtable._9_unknown.method;
  if ( !v16 )
    goto LABEL_356;
  invoker_method_high = HIDWORD(v16->invoker_method);
  if ( !byte_4CC12CE )
  {
    sub_1C713B0(&TerminalSceneComponent_TypeInfo);
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalSceneComponent_TypeInfo;
    byte_4CC12CE = 1;
  }
  if ( !LODWORD(MasterData_object[3].monitor) )
  {
    j_il2cpp_runtime_class_init_0(MasterData_object);
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalSceneComponent_TypeInfo;
  }
  v18 = MasterData_object[2].fields.list->klass;
  if ( !v18 )
    goto LABEL_356;
  v19 = v18->vtable._9_unknown.method;
  if ( !v19 )
    goto LABEL_356;
  invoker_method = (int32_t)v19->invoker_method;
  if ( invoker_method >= 1 )
  {
    if ( !LODWORD(MasterData_object[3].monitor) )
      j_il2cpp_runtime_class_init_0(MasterData_object);
    if ( !byte_4CC12CE )
    {
      sub_1C713B0(&TerminalSceneComponent_TypeInfo);
      byte_4CC12CE = 1;
    }
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalSceneComponent_TypeInfo;
    }
    v21 = MasterData_object[2].fields.list->klass;
    if ( !v21 )
      goto LABEL_356;
    v22 = v21->vtable._9_unknown.method;
    if ( !v22 )
      goto LABEL_356;
    if ( !Instance )
      goto LABEL_356;
    afterActionVals = (System_String_array *)v22->klass;
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMasterData_object_(
                                                                        (DataManager_o *)Instance,
                                                                        (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_EventMissionMaster___);
    if ( !MasterData_object )
      goto LABEL_356;
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__int___GetEntity(
                                                                        MasterData_object,
                                                                        invoker_method,
                                                                        (const MethodInfo_3408E80 *)Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__GetEntity__);
    if ( !MasterData_object )
      goto LABEL_356;
    MasterName_k__BackingField_high = HIDWORD(MasterData_object->fields._MasterName_k__BackingField);
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMasterData_object_(
                                                                        (DataManager_o *)Instance,
                                                                        (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_WarMaster___);
    if ( !MasterData_object )
      goto LABEL_356;
    goto LABEL_69;
  }
  if ( invoker_method_high >= 1 )
  {
    if ( !LODWORD(MasterData_object[3].monitor) )
      j_il2cpp_runtime_class_init_0(MasterData_object);
    if ( !byte_4CC12CE )
    {
      sub_1C713B0(&TerminalSceneComponent_TypeInfo);
      byte_4CC12CE = 1;
    }
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalSceneComponent_TypeInfo;
    }
    v24 = MasterData_object[2].fields.list->klass;
    if ( !v24 )
      goto LABEL_356;
    v25 = v24->vtable._9_unknown.method;
    if ( !v25 )
      goto LABEL_356;
    afterActionVals = (System_String_array *)v25->klass;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_ShopMaster___);
    if ( !MasterData_object )
      goto LABEL_356;
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__int___GetEntity(
                                                                        MasterData_object,
                                                                        invoker_method_high,
                                                                        (const MethodInfo_3408E80 *)Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__);
    if ( !MasterData_object )
      goto LABEL_356;
    MasterName_k__BackingField_high = (int32_t)MasterData_object->fields._MasterName_k__BackingField;
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_WarMaster___);
    if ( !MasterData_object )
      goto LABEL_356;
LABEL_69:
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)WarMaster__getByEventId(
                                                                        (WarMaster_o *)MasterData_object,
                                                                        MasterName_k__BackingField_high,
                                                                        0);
    if ( !MasterData_object )
      goto LABEL_356;
    MasterKind_k__BackingField = MasterData_object->fields._MasterKind_k__BackingField;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4CC3C9A )
    {
      sub_1C713B0(&TerminalPramsManager_TypeInfo);
      byte_4CC3C9A = 1;
    }
    v27 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v27 = TerminalPramsManager_TypeInfo;
    }
    v27->static_fields->_WarId_k__BackingField = MasterKind_k__BackingField;
    if ( !byte_4CC12CE )
    {
      sub_1C713B0(&TerminalSceneComponent_TypeInfo);
      byte_4CC12CE = 1;
    }
    v28 = TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      v28 = TerminalSceneComponent_TypeInfo;
    }
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)v28->static_fields->mInstance;
    if ( !MasterData_object )
      goto LABEL_356;
    TerminalSceneComponent__CallQuestInformationCloseAtAll((TerminalSceneComponent_o *)MasterData_object, 0, 0);
    if ( afterActionVals )
      goto LABEL_234;
  }
LABEL_82:
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4CC3F4D )
  {
    sub_1C713B0(&TerminalPramsManager_TypeInfo);
    byte_4CC3F4D = 1;
  }
  v29 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v29 = TerminalPramsManager_TypeInfo;
  }
  if ( !v29->static_fields->_IsPhaseClear_k__BackingField
    && UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_16731/*"afterActionBk"*/, 0) )
  {
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)UnityEngine_PlayerPrefs__GetString_71682912(
                                                                        (System_String_o *)StringLiteral_16731/*"afterActionBk"*/,
                                                                        0);
    if ( !MasterData_object )
      goto LABEL_356;
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)System_String__Split(
                                                                        (System_String_o *)MasterData_object,
                                                                        0x2Cu,
                                                                        0,
                                                                        0);
    if ( !MasterData_object )
      goto LABEL_356;
    v30 = MasterData_object;
    if ( !LODWORD(MasterData_object->fields._MasterName_k__BackingField) )
      goto LABEL_496;
    v31 = System_Int32__Parse(*(System_String_o **)&MasterData_object->fields.revision, 0);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4CC3C94 )
    {
      sub_1C713B0(&TerminalPramsManager_TypeInfo);
      byte_4CC3C94 = 1;
    }
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
    }
    HIDWORD(MasterData_object[2].fields.list->fields.items) = v31;
    if ( LODWORD(v30->fields._MasterName_k__BackingField) <= 1 )
      goto LABEL_496;
    v32 = System_Int32__Parse((System_String_o *)v30->fields.list, 0);
    if ( !byte_4CC3C98 )
    {
      sub_1C713B0(&TerminalPramsManager_TypeInfo);
      byte_4CC3C98 = 1;
    }
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
    }
    LODWORD(MasterData_object[2].fields.list->fields._monitor) = v32;
    if ( LODWORD(v30->fields._MasterName_k__BackingField) <= 2 )
      goto LABEL_496;
    lookup = (System_String_o *)v30->fields._lookup;
    if ( !bool_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(bool_TypeInfo);
    v34 = System_Boolean__Parse(lookup, 0);
    if ( !byte_4CC3F4E )
    {
      sub_1C713B0(&TerminalPramsManager_TypeInfo);
      byte_4CC3F4E = 1;
    }
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
    }
    BYTE5(MasterData_object[2].fields.list[1].fields.CollectionChanged) = v34;
    if ( LODWORD(v30->fields._MasterName_k__BackingField) <= 3 )
      goto LABEL_496;
    v35 = System_Boolean__Parse((System_String_o *)v30->fields.seriazlier, 0);
    if ( !byte_4CC3F4F )
    {
      sub_1C713B0(&TerminalPramsManager_TypeInfo);
      byte_4CC3F4F = 1;
    }
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
    }
    BYTE6(MasterData_object[2].fields.list[1].fields.CollectionChanged) = v35;
    if ( !byte_4CC3F50 )
    {
      sub_1C713B0(&TerminalPramsManager_TypeInfo);
      MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
      byte_4CC3F50 = 1;
    }
    if ( !LODWORD(MasterData_object[3].monitor) )
    {
      j_il2cpp_runtime_class_init_0(MasterData_object);
      MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
    }
    if ( BYTE5(MasterData_object[2].fields.list[1].fields.CollectionChanged) )
    {
      if ( !Instance )
        goto LABEL_356;
      v36 = DataManager__GetMasterData_object_(
              (DataManager_o *)Instance,
              (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_WarMaster___);
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4CC13B1 )
      {
        sub_1C713B0(&TerminalPramsManager_TypeInfo);
        byte_4CC13B1 = 1;
      }
      MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
      }
      if ( !v36 )
        goto LABEL_356;
      QuestId = WarMaster__getByLastQuestId(
                  (WarMaster_o *)v36,
                  HIDWORD(MasterData_object[2].fields.list->fields.items),
                  0);
      if ( QuestId )
      {
        v38 = QuestId;
        v39 = BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v39 = BalanceConfig_TypeInfo;
        }
        v40 = System_Linq_Enumerable__Contains_int_(
                (System_Collections_Generic_IEnumerable_TSource__o *)v39->static_fields->MainInterludeMapReturnWarIds,
                v38->fields.id,
                (const MethodInfo_3168198 *)Method_System_Linq_Enumerable_Contains_int___);
        cctor_finished = TerminalPramsManager_TypeInfo->_2.cctor_finished;
        if ( v40 )
        {
          if ( !cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          if ( !byte_4CC3F51 )
          {
            sub_1C713B0(&TerminalPramsManager_TypeInfo);
            byte_4CC3F51 = 1;
          }
          v42 = TerminalPramsManager_TypeInfo;
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            v42 = TerminalPramsManager_TypeInfo;
          }
          v42->static_fields->_IsWarClear_k__BackingField = 0;
        }
        else
        {
          if ( !cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          if ( !byte_4CC3F51 )
          {
            sub_1C713B0(&TerminalPramsManager_TypeInfo);
            byte_4CC3F51 = 1;
          }
          v43 = TerminalPramsManager_TypeInfo;
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            v43 = TerminalPramsManager_TypeInfo;
          }
          v43->static_fields->_IsWarClear_k__BackingField = 1;
          id = v38->fields.id;
          if ( !byte_4CC3C9A )
          {
            sub_1C713B0(&TerminalPramsManager_TypeInfo);
            v43 = TerminalPramsManager_TypeInfo;
            byte_4CC3C9A = 1;
          }
          if ( !v43->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v43);
            v43 = TerminalPramsManager_TypeInfo;
          }
          v43->static_fields->_WarId_k__BackingField = id;
          v45 = TerminalPramsManager__CheckIsOrdealCallWarClear(v38, 0);
          if ( !byte_4CC3F52 )
          {
            sub_1C713B0(&TerminalPramsManager_TypeInfo);
            byte_4CC3F52 = 1;
          }
          v46 = TerminalPramsManager_TypeInfo;
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            v46 = TerminalPramsManager_TypeInfo;
          }
          v46->static_fields->_IsOrdealCallWarClear_k__BackingField = v45;
        }
      }
    }
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_WarReleaseMaster___);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4CC1762 )
  {
    sub_1C713B0(&TerminalPramsManager_TypeInfo);
    byte_4CC1762 = 1;
  }
  MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
  }
  if ( !Master_object )
    goto LABEL_356;
  OpenEntity = WarReleaseMaster__GetOpenEntity(
                 (WarReleaseMaster_o *)Master_object,
                 HIDWORD(MasterData_object[2].fields.list->klass),
                 0);
  if ( !byte_4CC3F53 )
  {
    sub_1C713B0(&TerminalPramsManager_TypeInfo);
    byte_4CC3F53 = 1;
  }
  MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
  }
  if ( HIBYTE(MasterData_object[2].fields.list[1].fields._blockReentrancyCount) )
  {
    if ( !LODWORD(MasterData_object[3].monitor) )
      j_il2cpp_runtime_class_init_0(MasterData_object);
    if ( !byte_4CC3BDD )
    {
      sub_1C713B0(&TerminalPramsManager_TypeInfo);
      byte_4CC3BDD = 1;
    }
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
    }
    if ( !*((_BYTE *)&MasterData_object[2].fields.list[1].fields._blockReentrancyCount + 4) )
      goto LABEL_233;
  }
  if ( !Instance )
    goto LABEL_356;
  v49 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4CC13B1 )
  {
    sub_1C713B0(&TerminalPramsManager_TypeInfo);
    byte_4CC13B1 = 1;
  }
  MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
  }
  if ( !v49 )
    goto LABEL_356;
  QuestEntity = QuestMaster__TryGetQuestEntity(
                  (QuestMaster_o *)v49,
                  &entity,
                  HIDWORD(MasterData_object[2].fields.list->fields.items),
                  0);
  afterActionVals = 0;
  if ( !QuestEntity )
    goto LABEL_234;
  MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)entity;
  if ( !entity )
    goto LABEL_356;
  if ( QuestEntity__IsOpenByTime(entity, 0, 0) )
  {
LABEL_189:
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4CC3F4D )
    {
      sub_1C713B0(&TerminalPramsManager_TypeInfo);
      byte_4CC3F4D = 1;
    }
    v51 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v51 = TerminalPramsManager_TypeInfo;
    }
    if ( v51->static_fields->_IsPhaseClear_k__BackingField )
    {
      v52 = DataManager__GetMasterData_object_(
              (DataManager_o *)Instance,
              (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_QuestPhaseDetailAddMaster___);
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4CC13B1 )
      {
        sub_1C713B0(&TerminalPramsManager_TypeInfo);
        byte_4CC13B1 = 1;
      }
      MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
      }
      items_high = HIDWORD(MasterData_object[2].fields.list->fields.items);
      if ( !byte_4CC13B0 )
      {
        sub_1C713B0(&TerminalPramsManager_TypeInfo);
        MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
        byte_4CC13B0 = 1;
      }
      if ( !LODWORD(MasterData_object[3].monitor) )
      {
        j_il2cpp_runtime_class_init_0(MasterData_object);
        MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
      }
      if ( !v52 )
        goto LABEL_356;
      afterActionVals = QuestPhaseDetailAddMaster__GetAfterAction(
                          (QuestPhaseDetailAddMaster_o *)v52,
                          items_high,
                          LODWORD(MasterData_object[2].fields.list->fields._monitor) + 1,
                          0);
      if ( afterActionVals )
        goto LABEL_234;
      v54 = DataManager__GetMasterData_object_(
              (DataManager_o *)Instance,
              (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_QuestPhaseDetailMaster___);
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4CC13B1 )
      {
        sub_1C713B0(&TerminalPramsManager_TypeInfo);
        byte_4CC13B1 = 1;
      }
      MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
      }
      v55 = HIDWORD(MasterData_object[2].fields.list->fields.items);
      if ( !byte_4CC13B0 )
      {
        sub_1C713B0(&TerminalPramsManager_TypeInfo);
        MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
        byte_4CC13B0 = 1;
      }
      if ( !LODWORD(MasterData_object[3].monitor) )
      {
        j_il2cpp_runtime_class_init_0(MasterData_object);
        MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
      }
      if ( !v54 )
        goto LABEL_356;
      afterActionVals = QuestPhaseDetailMaster__GetAfterAction(
                          (QuestPhaseDetailMaster_o *)v54,
                          v55,
                          LODWORD(MasterData_object[2].fields.list->fields._monitor) + 1,
                          0);
      if ( afterActionVals )
        goto LABEL_234;
      v51 = TerminalPramsManager_TypeInfo;
    }
    if ( !v51->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v51);
    if ( !byte_4CC3F50 )
    {
      sub_1C713B0(&TerminalPramsManager_TypeInfo);
      byte_4CC3F50 = 1;
    }
    v56 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v56 = TerminalPramsManager_TypeInfo;
    }
    if ( v56->static_fields->_IsQuestClear_k__BackingField )
    {
      if ( !v56->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v56);
      MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager__get_Debug_IsQuestReleaseAll(0);
      afterActionVals = 0;
      if ( ((unsigned __int8)MasterData_object & 1) == 0 )
      {
        if ( !entity )
          goto LABEL_356;
        afterActionVals = entity->fields.afterActionVals;
      }
      goto LABEL_234;
    }
    goto LABEL_233;
  }
  if ( !OpenEntity )
  {
LABEL_233:
    afterActionVals = 0;
    goto LABEL_234;
  }
  afterActionVals = 0;
  if ( WarReleaseEntity__IsOpen(OpenEntity, 0) )
    goto LABEL_189;
LABEL_234:
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v57 = DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_QuestBehaviorMaster___);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4CC13B1 )
  {
    sub_1C713B0(&TerminalPramsManager_TypeInfo);
    byte_4CC13B1 = 1;
  }
  MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
  }
  v58 = HIDWORD(MasterData_object[2].fields.list->fields.items);
  if ( !byte_4CC13B0 )
  {
    sub_1C713B0(&TerminalPramsManager_TypeInfo);
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
    byte_4CC13B0 = 1;
  }
  if ( !LODWORD(MasterData_object[3].monitor) )
  {
    j_il2cpp_runtime_class_init_0(MasterData_object);
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
  }
  if ( !v57 )
    goto LABEL_356;
  if ( QuestBehaviorMaster__IsOpenQuestBehaviorCond(
         (QuestBehaviorMaster_o *)v57,
         v58,
         LODWORD(MasterData_object[2].fields.list->fields._monitor) + 1,
         7,
         0) )
  {
    goto LABEL_500;
  }
  if ( !QuestAfterAction_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(QuestAfterAction_TypeInfo);
  IsOverwriteCommandNone = QuestAfterAction__IsOverwriteCommandNone(afterActionVals, (const MethodInfo *)v11);
  if ( !afterActionVals
    || IsOverwriteCommandNone
    || (max_length = afterActionVals->max_length, (int)max_length < 2)
    || (max_length & 1) != 0 )
  {
LABEL_500:
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4CC3F54 )
    {
      sub_1C713B0(&TerminalPramsManager_TypeInfo);
      byte_4CC3F54 = 1;
    }
    v129 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v129 = TerminalPramsManager_TypeInfo;
    }
    if ( v129->static_fields->_BeforeQuestStartWarId_k__BackingField >= 1 )
    {
      if ( !v129->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v129);
      if ( !byte_4CC1B52 )
      {
        sub_1C713B0(&TerminalPramsManager_TypeInfo);
        byte_4CC1B52 = 1;
      }
      v130 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v130 = TerminalPramsManager_TypeInfo;
      }
      v130->static_fields->_IsAutoResume_k__BackingField = 1;
      if ( !byte_4CC3C96 )
      {
        sub_1C713B0(&TerminalPramsManager_TypeInfo);
        v130 = TerminalPramsManager_TypeInfo;
        byte_4CC3C96 = 1;
      }
      if ( !v130->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v130);
        v130 = TerminalPramsManager_TypeInfo;
      }
      v130->static_fields->_DispState_k__BackingField = 2;
      if ( !byte_4CC3F54 )
      {
        sub_1C713B0(&TerminalPramsManager_TypeInfo);
        v130 = TerminalPramsManager_TypeInfo;
        byte_4CC3F54 = 1;
      }
      if ( !v130->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v130);
        v130 = TerminalPramsManager_TypeInfo;
      }
      BeforeQuestStartWarId_k__BackingField = v130->static_fields->_BeforeQuestStartWarId_k__BackingField;
      if ( !byte_4CC3C9A )
      {
        sub_1C713B0(&TerminalPramsManager_TypeInfo);
        v130 = TerminalPramsManager_TypeInfo;
        byte_4CC3C9A = 1;
      }
      if ( !v130->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v130);
        v130 = TerminalPramsManager_TypeInfo;
      }
      v130->static_fields->_WarId_k__BackingField = BeforeQuestStartWarId_k__BackingField;
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      if ( !byte_4CC12CE )
      {
        sub_1C713B0(&TerminalSceneComponent_TypeInfo);
        byte_4CC12CE = 1;
      }
      v132 = TerminalSceneComponent_TypeInfo;
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        v132 = TerminalSceneComponent_TypeInfo;
      }
      MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)v132->static_fields->mInstance;
      if ( !MasterData_object )
        goto LABEL_356;
      TerminalSceneComponent__CallQuestInformationCloseAtAll((TerminalSceneComponent_o *)MasterData_object, 0, 0);
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      v133 = DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_WarMaster___);
      if ( !byte_4CC1762 )
      {
        sub_1C713B0(&TerminalPramsManager_TypeInfo);
        byte_4CC1762 = 1;
      }
      MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
      }
      if ( !v133 )
        goto LABEL_356;
      if ( DataMasterBase_object__object__int___TryGetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)v133,
             &v151,
             HIDWORD(MasterData_object[2].fields.list->klass),
             (const MethodInfo_3408ECC *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__) )
      {
        MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)v151;
        if ( !v151 )
          goto LABEL_356;
        v4->fields.ActionMapTargetId = WarEntity__GetBaseMap((WarEntity_o *)v151, 0);
      }
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4CC3F55 )
      {
        sub_1C713B0(&TerminalPramsManager_TypeInfo);
        byte_4CC3F55 = 1;
      }
      v134 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v134 = TerminalPramsManager_TypeInfo;
      }
      v134->static_fields->_BeforeQuestStartWarId_k__BackingField = 0;
    }
    UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_16731/*"afterActionBk"*/, 0);
    return;
  }
  v61 = sub_1C71458(QuestAfterAction_Command___TypeInfo, (unsigned int)max_length >> 1);
  v4->fields.commandBuf = (struct QuestAfterAction_Command_array *)v61;
  p_commandBuf = (unsigned int **)&v4->fields.commandBuf;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&v4->fields.commandBuf, v61, v63, v64, v65, v66, v67, v68);
  commandBuf = (int *)v4->fields.commandBuf;
  if ( !commandBuf )
    goto LABEL_356;
  v70 = 0;
  v148 = 0;
  v71 = 0;
  v72 = &byte_4CC1000;
  while ( (__int64)v70 < commandBuf[6] )
  {
    v73 = sub_1C715FC(QuestAfterAction_Command_TypeInfo);
    System_Object___ctor((Il2CppObject *)v73, 0);
    if ( v71 >= LODWORD(afterActionVals->max_length) )
      goto LABEL_496;
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)System_Int32__Parse(
                                                                        afterActionVals->m_Items[v71],
                                                                        0);
    if ( !v73 )
      goto LABEL_356;
    *(_DWORD *)(v73 + 16) = (_DWORD)MasterData_object;
    v80 = (int)v71 | 1LL;
    if ( (unsigned int)v80 >= LODWORD(afterActionVals->max_length) )
      goto LABEL_496;
    v81 = afterActionVals->m_Items[v80];
    *(_QWORD *)(v73 + 24) = v81;
    v82 = (System_String_o **)(v73 + 24);
    sub_1C71354((GrandQuestFolderBoardItem_o *)(v73 + 24), (int32_t)v81, v74, v75, v76, v77, v78, v79);
    if ( !v71 && !v4->fields.isRequestedStopBgm && *(_DWORD *)(v73 + 16) == 850 )
      v4->fields.isRequestedStopBgm = 1;
    if ( v4->fields.MapMoveBeforeFocusSpotId < 0 && *(_DWORD *)(v73 + 16) == 350 )
    {
      MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)*v82;
      if ( !*v82 )
        goto LABEL_356;
      MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)System_String__Split(
                                                                          (System_String_o *)MasterData_object,
                                                                          0x2Cu,
                                                                          0,
                                                                          0);
      if ( !MasterData_object )
        goto LABEL_356;
      if ( SLODWORD(MasterData_object->fields._MasterName_k__BackingField) >= 4 )
      {
        MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)System_Int32__Parse(
                                                                            (System_String_o *)MasterData_object->fields.seriazlier,
                                                                            0);
        v4->fields.MapMoveBeforeFocusSpotId = (int)MasterData_object;
      }
    }
    v84 = *(_DWORD *)(v73 + 16);
    if ( v4->fields.IsMoveToEventRewardShop || v84 != 700 )
    {
      if ( v84 == 703 )
      {
        MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)*v82;
        if ( !*v82 )
          goto LABEL_356;
        MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)System_String__Split_64083632(
                                                                            (System_String_o *)MasterData_object,
                                                                            (System_String_o *)StringLiteral_808/*","*/,
                                                                            0,
                                                                            0);
        if ( !MasterData_object )
          goto LABEL_356;
        if ( SLODWORD(MasterData_object->fields._MasterName_k__BackingField) >= 3 )
        {
          MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)System_Int32__Parse(
                                                                              (System_String_o *)MasterData_object->fields._lookup,
                                                                              0);
          v85 = (int)MasterData_object > 0;
        }
        else
        {
          v85 = 0;
        }
        v4->fields.IsMoveBeforeFadeIn = v85;
        v4->fields.IsMoveToClassScore = 1;
        v84 = *(_DWORD *)(v73 + 16);
      }
      if ( v84 == 800 )
      {
        v86 = afterActionVals;
        v87 = v72;
        MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)QuestAfterAction_Command__GetAvailableRandomVoice(
                                                                            (QuestAfterAction_Command_o *)v73,
                                                                            &svtId,
                                                                            v83);
        if ( MasterData_object )
        {
          svtVoices = (System_Collections_Generic_Dictionary_int__object__o *)v4->fields.svtVoices;
          v89 = svtId;
          v90 = MasterData_object;
          v91 = sub_1C715FC(QuestAfterAction_VoiceInfo_TypeInfo);
          System_Object___ctor((Il2CppObject *)v91, 0);
          *(_DWORD *)(v91 + 16) = v89;
          *(_QWORD *)(v91 + 24) = v90;
          sub_1C71354((GrandQuestFolderBoardItem_o *)(v91 + 24), (int32_t)v90, v92, v93, v94, v95, v96, v97);
          if ( !svtVoices )
            goto LABEL_356;
          System_Collections_Generic_Dictionary_int__object___Add(
            svtVoices,
            v70,
            (Il2CppObject *)v91,
            (const MethodInfo_3462294 *)Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__Add__);
          p_commandBuf = (unsigned int **)&v4->fields.commandBuf;
        }
        v72 = v87;
        afterActionVals = v86;
        v84 = *(_DWORD *)(v73 + 16);
      }
      if ( v84 == 702 )
      {
        MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)*v82;
        if ( !*v82 )
          goto LABEL_356;
        MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)System_String__Split_64083632(
                                                                            (System_String_o *)MasterData_object,
                                                                            (System_String_o *)StringLiteral_808/*","*/,
                                                                            0,
                                                                            0);
        if ( !MasterData_object )
          goto LABEL_356;
        MasterName_k__BackingField = (System_String_c *)MasterData_object->fields._MasterName_k__BackingField;
        v99 = MasterData_object;
        if ( MasterName_k__BackingField )
        {
          if ( !(_DWORD)MasterName_k__BackingField )
            goto LABEL_496;
          MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)System_Int32__Parse(
                                                                              *(System_String_o **)&MasterData_object->fields.revision,
                                                                              0);
          if ( (int)MasterData_object >= 1 )
          {
            if ( SLODWORD(v99->fields._MasterName_k__BackingField) < 2 )
              v100 = 0;
            else
              v100 = System_Int32__Parse((System_String_o *)v99->fields.list, 0);
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            TerminalPramsManager__SetAutoResumeForFolder(v100, 0);
            if ( !v72[1890] )
            {
              sub_1C713B0(&TerminalPramsManager_TypeInfo);
              v72[1890] = 1;
            }
            v101 = TerminalPramsManager_TypeInfo;
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
              v101 = TerminalPramsManager_TypeInfo;
            }
            v102 = BalanceConfig_TypeInfo;
            WarId_k__BackingField = v101->static_fields->_WarId_k__BackingField;
            if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
              v102 = BalanceConfig_TypeInfo;
            }
            if ( WarId_k__BackingField == v102->static_fields->OrdealCallWarId )
            {
              v4->fields.BlankEarthTargetWarId = v100;
              v148 = 1;
            }
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            if ( !v72[1890] )
            {
              sub_1C713B0(&TerminalPramsManager_TypeInfo);
              v72[1890] = 1;
            }
            v104 = TerminalPramsManager_TypeInfo;
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
              v104 = TerminalPramsManager_TypeInfo;
            }
            p_commandBuf = (unsigned int **)&v4->fields.commandBuf;
            v105 = v104->static_fields->_WarId_k__BackingField;
            if ( !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
            MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)ScrTerminalListTop__IsGrandQuestWarId(
                                                                                v105,
                                                                                0);
            if ( ((unsigned __int8)MasterData_object & 1) != 0 )
            {
              if ( !GrandQuestViewSwitcher_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(GrandQuestViewSwitcher_TypeInfo);
              MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)GrandQuestViewSwitcher__TryGetEnabledOpeningMovieEntity(
                                                                                  v100,
                                                                                  &ent,
                                                                                  1,
                                                                                  0);
              if ( ((unsigned __int8)MasterData_object & 1) != 0 )
                v4->fields.IsWaitFadeInForGrandQuestMovie = 1;
            }
          }
        }
      }
    }
    else
    {
      v4->fields.IsMoveToEventRewardShop = 1;
    }
    v106 = *(_DWORD *)(v73 + 16);
    if ( v106 <= 205 )
    {
      if ( (unsigned int)(v106 - 100) < 0xF && ((0x7C1Fu >> (v106 - 100)) & 1) != 0 )
      {
        v11 = 0;
      }
      else
      {
        if ( (unsigned int)(v106 - 200) > 5 )
          goto LABEL_339;
        v11 = 1;
      }
    }
    else if ( v106 <= 550 )
    {
      if ( (unsigned int)(v106 - 400) < 0xD )
      {
        v11 = 2;
      }
      else
      {
        if ( v106 != 550 )
          goto LABEL_339;
        v11 = 3;
      }
    }
    else
    {
      v107 = v106 - 1000;
      if ( v107 >= 0xD || ((0x1C07u >> v107) & 1) == 0 )
        goto LABEL_339;
      v11 = 4;
    }
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)v4->fields.commandTypeIds;
    if ( !MasterData_object )
      goto LABEL_356;
    Item = (System_Collections_Generic_List_int__o *)System_Collections_Generic_Dictionary_Int32Enum__object___get_Item(
                                                       (System_Collections_Generic_Dictionary_TKey__TValue__o *)MasterData_object,
                                                       v11,
                                                       (const MethodInfo_3495630 *)Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___get_Item__);
    if ( !QuestAfterAction_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(QuestAfterAction_TypeInfo);
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)QuestAfterAction__ExtractCommandTargetId(
                                                                        (QuestAfterAction_Command_o *)v73,
                                                                        v108);
    if ( !Item )
      goto LABEL_356;
    items = Item->fields._items;
    v111 = Method_System_Collections_Generic_List_int__Add__;
    ++Item->fields._version;
    if ( !items )
      goto LABEL_356;
    size = Item->fields._size;
    v11 = (unsigned int)MasterData_object;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_int___AddWithResize(
        Item,
        (int32_t)MasterData_object,
        *(const MethodInfo_37F36F4 **)(*(_QWORD *)(v111[4] + 192LL) + 112LL));
    }
    else
    {
      Item->fields._size = size + 1;
      items->m_Items[size] = (int)MasterData_object;
    }
LABEL_339:
    if ( v4->fields.ActionMapTargetId <= 0 )
      QuestAfterAction__SetActionMap(v4, (QuestAfterAction_Command_o *)v73, v83);
    if ( *(_DWORD *)(v73 + 16) == 102 )
    {
      v113 = (QuestAfterAction_o *)System_Int32__Parse(*v82, 0);
      MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)QuestAfterAction__GetMapGimmickId(
                                                                          v113,
                                                                          (int32_t)v113,
                                                                          v114);
      if ( !MasterData_object )
        goto LABEL_356;
      v115 = (System_String_c *)MasterData_object->fields._MasterName_k__BackingField;
      v116 = MasterData_object;
      if ( (int)v115 >= 1 )
      {
        v117 = 0;
        while ( v117 < (unsigned int)v115 )
        {
          MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)v4->fields.invalidMapGimmickIdList;
          if ( !MasterData_object )
            goto LABEL_356;
          v11 = *((unsigned int *)&v116->fields.revision + v117);
          v118 = *(System_String_Fields *)&MasterData_object->fields._MasterKind_k__BackingField;
          v119 = Method_System_Collections_Generic_List_int__Add__;
          ++HIDWORD(MasterData_object->fields._MasterName_k__BackingField);
          if ( !*(_QWORD *)&v118 )
            goto LABEL_356;
          MasterName_k__BackingField_low = SLODWORD(MasterData_object->fields._MasterName_k__BackingField);
          if ( (unsigned int)MasterName_k__BackingField_low >= *(_DWORD *)(*(_QWORD *)&v118 + 24LL) )
          {
            System_Collections_Generic_List_int___AddWithResize(
              (System_Collections_Generic_List_int__o *)MasterData_object,
              v11,
              *(const MethodInfo_37F36F4 **)(*(_QWORD *)(v119[4] + 192LL) + 112LL));
          }
          else
          {
            LODWORD(MasterData_object->fields._MasterName_k__BackingField) = MasterName_k__BackingField_low + 1;
            *(_DWORD *)(*(_QWORD *)&v118 + 4 * MasterName_k__BackingField_low + 32) = v11;
          }
          LODWORD(v115) = v116->fields._MasterName_k__BackingField;
          if ( (__int64)++v117 >= (int)v115 )
            goto LABEL_352;
        }
LABEL_496:
        sub_1C71610(MasterData_object);
      }
    }
LABEL_352:
    v121 = *p_commandBuf;
    if ( !*p_commandBuf )
      goto LABEL_356;
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)sub_1C714EC(
                                                                        v73,
                                                                        *(_QWORD *)(*(_QWORD *)v121 + 64LL));
    if ( !MasterData_object )
    {
      v147 = sub_1C7162C();
      sub_1C714D8(v147, 0);
    }
    if ( v70 >= v121[6] )
      goto LABEL_496;
    v128 = &v121[2 * v70];
    *((_QWORD *)v128 + 4) = v73;
    sub_1C71354((GrandQuestFolderBoardItem_o *)(v128 + 8), v73, v122, v123, v124, v125, v126, v127);
    commandBuf = (int *)*p_commandBuf;
    v71 += 2;
    ++v70;
    if ( !*p_commandBuf )
      goto LABEL_356;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4CC3F4D )
  {
    sub_1C713B0(&TerminalPramsManager_TypeInfo);
    byte_4CC3F4D = 1;
  }
  v135 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v135 = TerminalPramsManager_TypeInfo;
  }
  if ( v135->static_fields->_IsPhaseClear_k__BackingField )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v136 = DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_QuestMaster___);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4CC13B1 )
    {
      sub_1C713B0(&TerminalPramsManager_TypeInfo);
      byte_4CC13B1 = 1;
    }
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
    }
    if ( !v136 )
      goto LABEL_356;
    if ( QuestMaster__TryGetQuestEntity(
           (QuestMaster_o *)v136,
           &v154,
           HIDWORD(MasterData_object[2].fields.list->fields.items),
           0) )
    {
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !v72[1890] )
      {
        sub_1C713B0(&TerminalPramsManager_TypeInfo);
        v72[1890] = 1;
      }
      v137 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v137 = TerminalPramsManager_TypeInfo;
      }
      v138 = BalanceConfig_TypeInfo;
      v139 = v137->static_fields->_WarId_k__BackingField;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v138 = BalanceConfig_TypeInfo;
      }
      if ( v139 == v138->static_fields->OrdealCallWarId )
      {
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_BlankEarthSpotMaster___);
        if ( v154 && MasterData_object )
        {
          MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__int___TryGetEntity(
                                                                              MasterData_object,
                                                                              &v153,
                                                                              v154->fields.spotId,
                                                                              (const MethodInfo_3408ECC *)Method_DataMasterBase_BlankEarthSpotMaster__BlankEarthSpotEntity__int__TryGetEntity__);
          if ( ((unsigned __int8)MasterData_object & 1) == 0 )
            goto LABEL_446;
          if ( v153 )
          {
            v140 = (int32_t)v153[1].klass;
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            if ( !byte_4CC3F56 )
            {
              sub_1C713B0(&TerminalPramsManager_TypeInfo);
              byte_4CC3F56 = 1;
            }
            v141 = TerminalPramsManager_TypeInfo;
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
              v141 = TerminalPramsManager_TypeInfo;
            }
            v141->static_fields->_BlankEarthAfterActionFocusSpotId_k__BackingField = v140;
            goto LABEL_446;
          }
        }
LABEL_356:
        sub_1C71608(MasterData_object, v11);
      }
    }
  }
LABEL_446:
  v142 = TerminalPramsManager_TypeInfo;
  if ( (v148 & 1) == 0 )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4CC1B52 )
    {
      sub_1C713B0(&TerminalPramsManager_TypeInfo);
      byte_4CC1B52 = 1;
    }
    v143 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v143 = TerminalPramsManager_TypeInfo;
    }
    v143->static_fields->_IsAutoResume_k__BackingField = 1;
    if ( !byte_4CC3C96 )
    {
      sub_1C713B0(&TerminalPramsManager_TypeInfo);
      v143 = TerminalPramsManager_TypeInfo;
      byte_4CC3C96 = 1;
    }
    if ( !v143->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v143);
      v143 = TerminalPramsManager_TypeInfo;
    }
    v143->static_fields->_DispState_k__BackingField = 2;
    if ( !v72[1890] )
    {
      sub_1C713B0(&TerminalPramsManager_TypeInfo);
      v143 = TerminalPramsManager_TypeInfo;
      v72[1890] = 1;
    }
    if ( !v143->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v143);
      v143 = TerminalPramsManager_TypeInfo;
    }
    v144 = BalanceConfig_TypeInfo;
    v145 = v143->static_fields->_WarId_k__BackingField;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v144 = BalanceConfig_TypeInfo;
    }
    v142 = TerminalPramsManager_TypeInfo;
    if ( v145 == v144->static_fields->OrdealCallWarId )
      goto LABEL_501;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4CC3BDD )
    {
      sub_1C713B0(&TerminalPramsManager_TypeInfo);
      byte_4CC3BDD = 1;
    }
    v142 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v142 = TerminalPramsManager_TypeInfo;
    }
    if ( v142->static_fields->_IsOrdealCallWarClear_k__BackingField )
    {
LABEL_501:
      if ( !v142->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v142);
      if ( !byte_4CC3BDE )
      {
        sub_1C713B0(&TerminalPramsManager_TypeInfo);
        byte_4CC3BDE = 1;
      }
      v142 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v142 = TerminalPramsManager_TypeInfo;
      }
      v142->static_fields->_BlankEarthSpotId_k__BackingField = 0;
      if ( !byte_4CC3BDD )
      {
        sub_1C713B0(&TerminalPramsManager_TypeInfo);
        v142 = TerminalPramsManager_TypeInfo;
        byte_4CC3BDD = 1;
      }
      if ( !v142->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v142);
        v142 = TerminalPramsManager_TypeInfo;
      }
      if ( !v142->static_fields->_IsOrdealCallWarClear_k__BackingField )
      {
        if ( !v142->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v142);
        if ( !byte_4CC3C96 )
        {
          sub_1C713B0(&TerminalPramsManager_TypeInfo);
          byte_4CC3C96 = 1;
        }
        v142 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v142 = TerminalPramsManager_TypeInfo;
        }
        v142->static_fields->_DispState_k__BackingField = 3;
      }
    }
  }
  if ( !v142->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v142);
  if ( !byte_4CC3C99 )
  {
    sub_1C713B0(&TerminalPramsManager_TypeInfo);
    byte_4CC3C99 = 1;
  }
  v146 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v146 = TerminalPramsManager_TypeInfo;
  }
  v146->static_fields->_SpotId_k__BackingField = -1;
}


void QuestAfterAction__DeleteContinueData(const MethodInfo *method)
{
  if ( (byte_4CC3F22 & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_16731/*"afterActionBk"*/);
    byte_4CC3F22 = 1;
  }
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_16731/*"afterActionBk"*/, 0);
}


int32_t QuestAfterAction__ExtractCommandTargetId(QuestAfterAction_Command_o *command, const MethodInfo *method)
{
  QuestAfterAction_Command_o *v2; // x19
  QuestAfterAction_Command_c *param; // x8

  v2 = command;
  if ( (byte_4CC3F26 & 1) == 0 )
  {
    command = (QuestAfterAction_Command_o *)sub_1C713B0(&StringLiteral_808/*","*/);
    byte_4CC3F26 = 1;
  }
  if ( !v2 )
    goto LABEL_11;
  command = (QuestAfterAction_Command_o *)v2->fields.param;
  if ( !command )
    goto LABEL_11;
  command = (QuestAfterAction_Command_o *)System_String__Contains(
                                            (System_String_o *)command,
                                            (System_String_o *)StringLiteral_808/*","*/,
                                            0);
  param = (QuestAfterAction_Command_c *)v2->fields.param;
  if ( ((unsigned __int8)command & 1) == 0 )
    return System_Int32__Parse((System_String_o *)param, 0);
  if ( !param || (command = (QuestAfterAction_Command_o *)System_String__Split(v2->fields.param, 0x2Cu, 0, 0)) == 0 )
LABEL_11:
    sub_1C71608(command, method);
  if ( !LODWORD(command->fields.param) )
    sub_1C71610(command);
  param = command[1].klass;
  return System_Int32__Parse((System_String_o *)param, 0);
}


System_Collections_Generic_IEnumerable_QuestAfterAction_Command__o *QuestAfterAction__FilterCommandsMainActionConflictsResolved(
        QuestAfterAction_o *this,
        System_Collections_Generic_IEnumerable_QuestAfterAction_Command__o *commandEnumerable,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7

  if ( (byte_4CC3F34 & 1) == 0 )
  {
    sub_1C713B0(&QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__90_TypeInfo);
    byte_4CC3F34 = 1;
  }
  v5 = sub_1C715FC(QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__90_TypeInfo);
  QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__90___ctor(
    (QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__90_o *)v5,
    -2,
    0);
  if ( !v5 )
    sub_1C71608(v6, v7);
  *(_QWORD *)(v5 + 56) = this;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v5 + 56), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 48) = commandEnumerable;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v5 + 48), (int32_t)commandEnumerable, v14, v15, v16, v17, v18, v19);
  return (System_Collections_Generic_IEnumerable_QuestAfterAction_Command__o *)v5;
}


QuestAfterAction_Command_array *QuestAfterAction__GenerateCommandBuf(
        System_String_array *actionVals,
        const MethodInfo *method)
{
  __int64 IsNullOrEmpty; // x0
  __int64 v4; // x1
  long double inited; // q0
  _QWORD *v6; // x19
  __int64 v7; // x8
  __int64 v8; // x0
  __int64 v9; // x0
  unsigned int *v10; // x20
  __int64 v11; // x22
  unsigned __int64 v12; // x23
  __int64 v13; // x24
  unsigned int v14; // w25
  __int64 v15; // x21
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  System_String_o *v22; // x1
  int32_t v23; // w2
  int32_t v24; // w3
  System_String_o *v25; // x4
  int32_t v26; // w5
  int64_t v27; // x6
  System_String_o *v28; // x7
  __int64 v30; // x0

  if ( (byte_4CC3F27 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Array_Empty_QuestAfterAction_Command___);
    sub_1C713B0(&QuestAfterAction_Command___TypeInfo);
    sub_1C713B0(&QuestAfterAction_Command_TypeInfo);
    byte_4CC3F27 = 1;
  }
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)actionVals, 0);
  if ( (IsNullOrEmpty & 1) != 0 )
  {
    v6 = Method_System_Array_Empty_QuestAfterAction_Command___;
    v7 = *((_QWORD *)Method_System_Array_Empty_QuestAfterAction_Command___ + 7);
    if ( !v7 )
    {
      sub_1C474A0(Method_System_Array_Empty_QuestAfterAction_Command___);
      v7 = v6[7];
    }
    v8 = *(_QWORD *)(v7 + 16);
    if ( (*(_BYTE *)(v8 + 309) & 1) == 0 )
      v8 = sub_1C47444(inited);
    if ( !*(_DWORD *)(v8 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v8);
    v9 = *(_QWORD *)(v6[7] + 16LL);
    if ( (*(_BYTE *)(v9 + 309) & 1) == 0 )
      v9 = sub_1C47444(inited);
    return **(QuestAfterAction_Command_array ***)(v9 + 184);
  }
  else
  {
    if ( !actionVals
      || (IsNullOrEmpty = sub_1C71458(
                            QuestAfterAction_Command___TypeInfo,
                            (unsigned int)(SLODWORD(actionVals->max_length) / 2))) == 0 )
    {
LABEL_25:
      sub_1C71608(IsNullOrEmpty, v4);
    }
    v10 = (unsigned int *)IsNullOrEmpty;
    if ( *(int *)(IsNullOrEmpty + 24) >= 1 )
    {
      v11 = 0;
      v12 = 0;
      v13 = IsNullOrEmpty + 32;
      v14 = 1;
      do
      {
        v15 = sub_1C715FC(QuestAfterAction_Command_TypeInfo);
        System_Object___ctor((Il2CppObject *)v15, 0);
        if ( v14 - 1 >= LODWORD(actionVals->max_length) )
          goto LABEL_24;
        IsNullOrEmpty = System_Int32__Parse(actionVals->m_Items[v14 - 1], 0);
        if ( !v15 )
          goto LABEL_25;
        *(_DWORD *)(v15 + 16) = IsNullOrEmpty;
        if ( v14 >= LODWORD(actionVals->max_length) )
          goto LABEL_24;
        v22 = actionVals->m_Items[v14];
        *(_QWORD *)(v15 + 24) = v22;
        sub_1C71354((GrandQuestFolderBoardItem_o *)(v15 + 24), (int32_t)v22, v16, v17, v18, v19, v20, v21);
        IsNullOrEmpty = sub_1C714EC(v15, *(_QWORD *)(*(_QWORD *)v10 + 64LL));
        if ( !IsNullOrEmpty )
        {
          v30 = sub_1C7162C();
          sub_1C714D8(v30, 0);
        }
        if ( v12 >= v10[6] )
LABEL_24:
          sub_1C71610(IsNullOrEmpty);
        *(_QWORD *)(v13 + 8 * v12) = v15;
        sub_1C71354((GrandQuestFolderBoardItem_o *)(v13 + v11), v15, v23, v24, v25, v26, v27, v28);
        ++v12;
        v14 += 2;
        v11 += 8;
      }
      while ( (__int64)v12 < (int)v10[6] );
    }
  }
  return (QuestAfterAction_Command_array *)v10;
}


System_String_array *QuestAfterAction__GetAfterAction(int32_t questId, int32_t phase, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  Il2CppObject *MasterData_object; // x22
  int32_t v8; // w23
  const MethodInfo *v9; // x1
  System_String_array *v10; // x22
  Il2CppObject *v12; // x19
  Il2CppObject *Entity; // x0
  Il2CppObject *v14; // x19

  if ( (byte_4CC3F40 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1C713B0(&Method_DataManager_GetMasterData_QuestPhaseDetailAddMaster___);
    sub_1C713B0(&Method_DataManager_GetMasterData_QuestPhaseDetailMaster___);
    sub_1C713B0(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    sub_1C713B0(&Method_System_Linq_Enumerable_Any_string___);
    sub_1C713B0(&QuestAfterAction_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C713B0(&TerminalPramsManager_TypeInfo);
    byte_4CC3F40 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_35;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_QuestPhaseDetailAddMaster___);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4CC13B1 )
  {
    sub_1C713B0(&TerminalPramsManager_TypeInfo);
    byte_4CC13B1 = 1;
  }
  Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  }
  v8 = *(_DWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 20LL);
  if ( !byte_4CC13B0 )
  {
    sub_1C713B0(&TerminalPramsManager_TypeInfo);
    Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
    byte_4CC13B0 = 1;
  }
  if ( !LODWORD(Instance[1].fields.saveDataMapList) )
  {
    j_il2cpp_runtime_class_init_0(Instance);
    Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  }
  if ( !MasterData_object )
    goto LABEL_35;
  v10 = QuestPhaseDetailAddMaster__GetAfterAction(
          (QuestPhaseDetailAddMaster_o *)MasterData_object,
          v8,
          *(_DWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 24LL) + 1,
          0);
  if ( !QuestAfterAction_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(QuestAfterAction_TypeInfo);
  if ( !QuestAfterAction__IsOverwriteCommandNone(v10, v9) )
  {
    if ( v10 )
      return v10;
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_QuestPhaseDetailMaster___);
      if ( Instance )
      {
        v10 = QuestPhaseDetailMaster__GetAfterAction((QuestPhaseDetailMaster_o *)Instance, questId, phase, 0);
        if ( v10 )
          return v10;
        Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( Instance )
        {
          v12 = DataManager__GetMasterData_object_(
                  Instance,
                  (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_QuestMaster___);
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          if ( !byte_4CC13B1 )
          {
            sub_1C713B0(&TerminalPramsManager_TypeInfo);
            byte_4CC13B1 = 1;
          }
          Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
          }
          if ( v12 )
          {
            Entity = DataMasterBase_object__object__int___GetEntity(
                       (DataMasterBase_TMaster__TEntity__PKType__o *)v12,
                       *(_DWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 20LL),
                       (const MethodInfo_3408E80 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
            if ( Entity )
            {
              v14 = Entity;
              if ( System_Linq_Enumerable__Any_object_(
                     (System_Collections_Generic_IEnumerable_TSource__o *)Entity[6].klass,
                     (const MethodInfo_3156C84 *)Method_System_Linq_Enumerable_Any_string___) )
              {
                return (System_String_array *)v14[6].klass;
              }
            }
            return 0;
          }
        }
      }
    }
LABEL_35:
    sub_1C71608(Instance, v6);
  }
  return 0;
}


System_String_array *QuestAfterAction__GetBeforeAction(int32_t questId, int32_t phase, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  Il2CppObject *MasterData_object; // x22
  int32_t v8; // w23
  const MethodInfo *v9; // x1
  System_String_array *v10; // x22
  Il2CppObject *v12; // x19
  Il2CppObject *Entity; // x0
  Il2CppObject *v14; // x19

  if ( (byte_4CC3F3F & 1) == 0 )
  {
    sub_1C713B0(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1C713B0(&Method_DataManager_GetMasterData_QuestPhaseDetailAddMaster___);
    sub_1C713B0(&Method_DataManager_GetMasterData_QuestPhaseDetailMaster___);
    sub_1C713B0(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    sub_1C713B0(&Method_System_Linq_Enumerable_Any_string___);
    sub_1C713B0(&QuestAfterAction_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C713B0(&TerminalPramsManager_TypeInfo);
    byte_4CC3F3F = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_35;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_QuestPhaseDetailAddMaster___);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4CC13B1 )
  {
    sub_1C713B0(&TerminalPramsManager_TypeInfo);
    byte_4CC13B1 = 1;
  }
  Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  }
  v8 = *(_DWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 20LL);
  if ( !byte_4CC13B0 )
  {
    sub_1C713B0(&TerminalPramsManager_TypeInfo);
    Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
    byte_4CC13B0 = 1;
  }
  if ( !LODWORD(Instance[1].fields.saveDataMapList) )
  {
    j_il2cpp_runtime_class_init_0(Instance);
    Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  }
  if ( !MasterData_object )
    goto LABEL_35;
  v10 = QuestPhaseDetailAddMaster__GetBeforeAction(
          (QuestPhaseDetailAddMaster_o *)MasterData_object,
          v8,
          *(_DWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 24LL) + 1,
          0);
  if ( !QuestAfterAction_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(QuestAfterAction_TypeInfo);
  if ( !QuestAfterAction__IsOverwriteCommandNone(v10, v9) )
  {
    if ( v10 )
      return v10;
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_QuestPhaseDetailMaster___);
      if ( Instance )
      {
        v10 = QuestPhaseDetailMaster__GetBeforeAction((QuestPhaseDetailMaster_o *)Instance, questId, phase, 0);
        if ( v10 )
          return v10;
        Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( Instance )
        {
          v12 = DataManager__GetMasterData_object_(
                  Instance,
                  (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_QuestMaster___);
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          if ( !byte_4CC13B1 )
          {
            sub_1C713B0(&TerminalPramsManager_TypeInfo);
            byte_4CC13B1 = 1;
          }
          Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
          }
          if ( v12 )
          {
            Entity = DataMasterBase_object__object__int___GetEntity(
                       (DataMasterBase_TMaster__TEntity__PKType__o *)v12,
                       *(_DWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 20LL),
                       (const MethodInfo_3408E80 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
            if ( Entity )
            {
              v14 = Entity;
              if ( System_Linq_Enumerable__Any_object_(
                     (System_Collections_Generic_IEnumerable_TSource__o *)Entity[5].monitor,
                     (const MethodInfo_3156C84 *)Method_System_Linq_Enumerable_Any_string___) )
              {
                return (System_String_array *)v14[5].monitor;
              }
            }
            return 0;
          }
        }
      }
    }
LABEL_35:
    sub_1C71608(Instance, v6);
  }
  return 0;
}


int32_t QuestAfterAction__GetCommandType(QuestAfterAction_o *this, int32_t commandId, const MethodInfo *method)
{
  if ( commandId <= 205 )
  {
    if ( (unsigned int)(commandId - 100) >= 0xF || ((0x7C1Fu >> (commandId - 100)) & 1) == 0 )
    {
      if ( (unsigned int)(commandId - 200) <= 5 )
        return 1;
      return -1;
    }
    return 0;
  }
  else
  {
    if ( commandId > 550 )
    {
      if ( (unsigned int)(commandId - 1000) < 0xD )
        return dword_D22AB4[commandId - 1000];
      return -1;
    }
    if ( (unsigned int)(commandId - 400) >= 0xD )
    {
      if ( commandId == 550 )
        return 3;
      return -1;
    }
    return 2;
  }
}


SrcSpotBasePrefab_o *QuestAfterAction__GetLastDispSpot(QuestAfterAction_o *this, const MethodInfo *method)
{
  return this->fields.lastDispSpot;
}


Il2CppObject *QuestAfterAction__GetMapComponent_object_(
        QuestAfterAction_o *this,
        int32_t comType,
        int32_t id,
        QuestAfterAction_StateMain_o *state,
        const MethodInfo_31E4BE0 *method)
{
  UnityEngine_Object_o *MapGameObject; // x20
  _BOOL8 v11; // x0
  __int64 v12; // x1

  if ( !method->rgctx_data )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    if ( !method->rgctx_data )
      sub_1C474A0();
  }
  MapGameObject = (UnityEngine_Object_o *)QuestAfterAction__GetMapGameObject(this, comType, id, state, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v11 = UnityEngine_Object__op_Equality(MapGameObject, 0, 0);
  if ( v11 )
    return 0;
  if ( !MapGameObject )
    sub_1C71608(v11, v12);
  return UnityEngine_GameObject__GetComponent_object_(
           (UnityEngine_GameObject_o *)MapGameObject,
           (const MethodInfo_31A2ED0 *)method->rgctx_data->_0_UnityEngine_GameObject_GetComponent_T_);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_GameObject_o *QuestAfterAction__GetMapGameObject(
        QuestAfterAction_o *this,
        int32_t comType,
        int32_t id,
        QuestAfterAction_StateMain_o *state,
        const MethodInfo *method)
{
  QuestAfterAction_o *v8; // x22
  UnityEngine_Object_o *v9; // x23
  UnityEngine_Transform_o *transform; // x23
  UnityEngine_Transform_o *v11; // x23
  const MethodInfo *v12; // x1
  const MethodInfo *v13; // x1
  const MethodInfo *v14; // x3

  v8 = this;
  if ( (byte_4CC3F3A & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    this = (QuestAfterAction_o *)sub_1C713B0(&SrcSpotBasePrefab_TypeInfo);
    byte_4CC3F3A = 1;
  }
  if ( comType != 2 )
  {
    if ( comType == 1 )
    {
      if ( !state )
        goto LABEL_45;
      if ( state->fields.IsMapModel )
      {
        this = (QuestAfterAction_o *)v8->fields.subRoadRoot;
        if ( !this )
          goto LABEL_45;
      }
      else
      {
        this = (QuestAfterAction_o *)v8->fields.mRoadRoot;
        if ( !this )
          goto LABEL_45;
      }
      transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
      this = (QuestAfterAction_o *)srcLineSprite__GetGobjName(id, 0);
      if ( !transform )
        goto LABEL_45;
    }
    else
    {
      if ( comType )
      {
        v9 = 0;
        goto LABEL_35;
      }
      if ( !state )
        goto LABEL_45;
      if ( state->fields.IsMapModel )
      {
        this = (QuestAfterAction_o *)v8->fields.subSpotRoot;
        if ( !this )
          goto LABEL_45;
      }
      else
      {
        this = (QuestAfterAction_o *)v8->fields.mSpotRoot;
        if ( !this )
          goto LABEL_45;
      }
      transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
      if ( !SrcSpotBasePrefab_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(SrcSpotBasePrefab_TypeInfo);
      this = (QuestAfterAction_o *)SrcSpotBasePrefab__GetGobjName(id, 0);
      if ( !transform )
LABEL_45:
        sub_1C71608(this, *(_QWORD *)&comType);
    }
    goto LABEL_34;
  }
  if ( !state )
    goto LABEL_45;
  if ( state->fields.IsMapModel )
  {
    this = (QuestAfterAction_o *)QuestAfterAction_StateMain__get_SubGimmickRoot(
                                   (QuestAfterAction_StateMain_o *)this,
                                   *(const MethodInfo **)&comType);
    if ( !this )
      goto LABEL_45;
LABEL_30:
    transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
    this = (QuestAfterAction_o *)MapGimmickComponent__GetGobjName(id, v13);
    if ( !transform )
      goto LABEL_45;
LABEL_34:
    v9 = (UnityEngine_Object_o *)UnityEngine_Transform__Find(transform, (System_String_o *)this, 0);
    goto LABEL_35;
  }
  this = (QuestAfterAction_o *)v8->fields.mGimmickRoot;
  if ( !this )
    goto LABEL_45;
  v11 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
  this = (QuestAfterAction_o *)MapGimmickComponent__GetGobjName(id, v12);
  if ( !v11 )
    goto LABEL_45;
  v9 = (UnityEngine_Object_o *)UnityEngine_Transform__Find(v11, (System_String_o *)this, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(v9, 0, 0) )
  {
    this = (QuestAfterAction_o *)v8->fields.mUIGimmickRoot;
    if ( !this )
      goto LABEL_45;
    goto LABEL_30;
  }
LABEL_35:
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (QuestAfterAction_o *)UnityEngine_Object__op_Equality(v9, 0, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    this = (QuestAfterAction_o *)QuestAfterAction__IsMapChangeable(this, *(const MethodInfo **)&comType);
    if ( !state )
      goto LABEL_45;
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      state->fields.IsAnimDoing = 0;
      QuestAfterAction__RequestMapChange(v8, comType, id, v14);
    }
    else
    {
      ((void (__fastcall *)(QuestAfterAction_StateMain_o *, const MethodInfo *))state->klass->vtable._14_EndAnim.methodPtr)(
        state,
        state->klass->vtable._14_EndAnim.method);
    }
    return 0;
  }
  else
  {
    if ( !v9 )
      goto LABEL_45;
    return UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v9, 0);
  }
}


System_Int32_array *QuestAfterAction__GetMapGimmickId(
        QuestAfterAction_o *this,
        int32_t spotId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v4; // x20
  System_Object_array *Instance; // x0
  __int64 name_low; // x1
  int max_length; // w8
  System_Object_array *v8; // x21
  unsigned int v9; // w23
  Il2CppClass **v10; // x8
  Il2CppClass *v11; // x22
  struct System_Int32_array *items; // x8
  _QWORD *v13; // x9
  __int64 size; // x10

  if ( (byte_4CC3F28 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataManager_GetMasterData_MapGimmickMaster___);
    sub_1C713B0(&Method_DataMasterBase_MapGimmickMaster__MapGimmickEntity__int__getEntitys__);
    sub_1C713B0(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C713B0(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C713B0(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CC3F28 = 1;
  }
  v4 = (System_Collections_Generic_List_int__o *)sub_1C715FC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v4,
    (const MethodInfo_37F2EA0 *)Method_System_Collections_Generic_List_int___ctor__);
  Instance = (System_Object_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  Instance = (System_Object_array *)DataManager__GetMasterData_object_(
                                      (DataManager_o *)Instance,
                                      (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_MapGimmickMaster___);
  if ( !Instance )
    goto LABEL_19;
  Instance = DataMasterBase_object__object__int___getEntitys(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
               (const MethodInfo_3408104 *)Method_DataMasterBase_MapGimmickMaster__MapGimmickEntity__int__getEntitys__);
  if ( !Instance )
    goto LABEL_19;
  max_length = Instance->max_length;
  v8 = Instance;
  if ( max_length >= 1 )
  {
    v9 = 0;
    while ( 1 )
    {
      if ( v9 >= max_length )
        sub_1C71610(Instance);
      v10 = &v8->obj.klass + (int)v9;
      v11 = v10[4];
      if ( !v11 )
        break;
      Instance = (System_Object_array *)MapGimmickEntity__GetRaidDispSpotIdFromScript((MapGimmickEntity_o *)v10[4], 0);
      if ( (_DWORD)Instance == spotId )
      {
        if ( !v4 )
          break;
        name_low = LODWORD(v11->_1.name);
        items = v4->fields._items;
        v13 = Method_System_Collections_Generic_List_int__Add__;
        ++v4->fields._version;
        if ( !items )
          break;
        size = v4->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v4,
            name_low,
            *(const MethodInfo_37F36F4 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
        }
        else
        {
          v4->fields._size = size + 1;
          items->m_Items[size] = name_low;
        }
      }
      max_length = v8->max_length;
      if ( (int)++v9 >= max_length )
        goto LABEL_17;
    }
LABEL_19:
    sub_1C71608(Instance, name_low);
  }
LABEL_17:
  if ( !v4 )
    goto LABEL_19;
  return System_Collections_Generic_List_int___ToArray(
           v4,
           (const MethodInfo_37F51AC *)Method_System_Collections_Generic_List_int__ToArray__);
}


int32_t QuestAfterAction__GetState(QuestAfterAction_o *this, const MethodInfo *method)
{
  struct CStateManager_QuestAfterAction__o *fsm; // x8

  if ( (byte_4CC3F38 & 1) == 0 )
  {
    sub_1C713B0(&Method_CStateManager_QuestAfterAction__getState__);
    byte_4CC3F38 = 1;
  }
  fsm = this->fields.fsm;
  if ( fsm )
    return fsm->fields.m_state;
  else
    return 0;
}


void QuestAfterAction__Init(QuestAfterAction_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  struct CStateManager_QuestAfterAction__o **p_fsm; // x20
  CStateManager_T__o *v5; // x21
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  CStateManager_T__o *fsm; // x21
  Il2CppObject *v13; // x22
  System_Collections_Generic_Dictionary_TKey__TValue__o *commandTypeIds; // x0
  __int64 v15; // x1
  CStateManager_T__o *v16; // x21
  Il2CppObject *v17; // x22
  CStateManager_T__o *v18; // x21
  QuestAfterAction_StateAdditional_o *v19; // x22
  CStateManager_T__o *v20; // x20
  QuestAfterAction_StateInstant_o *v21; // x21
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7
  int32_t v28; // w20
  System_Collections_Generic_Dictionary_TKey__TValue__o *v29; // x21
  int v30; // w8
  System_Collections_Generic_List_int__o *v31; // x22
  Il2CppObject *Component_object; // x0
  int32_t v33; // w2
  int32_t v34; // w3
  System_String_o *v35; // x4
  int32_t v36; // w5
  int64_t v37; // x6
  System_String_o *v38; // x7
  int32_t v39; // w2
  int32_t v40; // w3
  System_String_o *v41; // x4
  int32_t v42; // w5
  int64_t v43; // x6
  System_String_o *v44; // x7
  System_Collections_Generic_List_int__o *v45; // x20
  struct System_Collections_Generic_List_int__o **p_invalidMapGimmickIdList; // x19
  int32_t v47; // w2
  int32_t v48; // w3
  System_String_o *v49; // x4
  int32_t v50; // w5
  int64_t v51; // x6
  System_String_o *v52; // x7

  if ( (byte_4CC3F23 & 1) == 0 )
  {
    sub_1C713B0(&Method_CStateManager_QuestAfterAction___ctor__);
    sub_1C713B0(&Method_CStateManager_QuestAfterAction__add__);
    sub_1C713B0(&CStateManager_QuestAfterAction__TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___ContainsKey__);
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___get_Item__);
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___set_Item__);
    sub_1C713B0(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
    sub_1C713B0(&Method_System_Collections_Generic_List_int__Clear__);
    sub_1C713B0(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C713B0(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C713B0(&QuestAfterAction_StateAdditional_TypeInfo);
    sub_1C713B0(&QuestAfterAction_StateInstant_TypeInfo);
    sub_1C713B0(&QuestAfterAction_StateMain_TypeInfo);
    sub_1C713B0(&QuestAfterAction_StateNone_TypeInfo);
    byte_4CC3F23 = 1;
  }
  p_fsm = &this->fields.fsm;
  if ( !this->fields.fsm )
  {
    v5 = (CStateManager_T__o *)sub_1C715FC(CStateManager_QuestAfterAction__TypeInfo);
    CStateManager_object____ctor(
      v5,
      (Il2CppObject *)this,
      4,
      (const MethodInfo_3394668 *)Method_CStateManager_QuestAfterAction___ctor__);
    this->fields.fsm = (struct CStateManager_QuestAfterAction__o *)v5;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.fsm, (int32_t)v5, v6, v7, v8, v9, v10, v11);
    fsm = (CStateManager_T__o *)this->fields.fsm;
    v13 = (Il2CppObject *)sub_1C715FC(QuestAfterAction_StateNone_TypeInfo);
    System_Object___ctor(v13, 0);
    if ( !fsm )
      goto LABEL_21;
    CStateManager_object___add(
      fsm,
      0,
      (IState_T__o *)v13,
      (const MethodInfo_3394710 *)Method_CStateManager_QuestAfterAction__add__);
    v16 = (CStateManager_T__o *)*p_fsm;
    v17 = (Il2CppObject *)sub_1C715FC(QuestAfterAction_StateMain_TypeInfo);
    System_Object___ctor(v17, 0);
    if ( !v16 )
      goto LABEL_21;
    CStateManager_object___add(
      v16,
      1,
      (IState_T__o *)v17,
      (const MethodInfo_3394710 *)Method_CStateManager_QuestAfterAction__add__);
    v18 = (CStateManager_T__o *)*p_fsm;
    v19 = (QuestAfterAction_StateAdditional_o *)sub_1C715FC(QuestAfterAction_StateAdditional_TypeInfo);
    QuestAfterAction_StateAdditional___ctor(v19, 0);
    if ( !v18 )
      goto LABEL_21;
    CStateManager_object___add(
      v18,
      2,
      (IState_T__o *)v19,
      (const MethodInfo_3394710 *)Method_CStateManager_QuestAfterAction__add__);
    v20 = (CStateManager_T__o *)*p_fsm;
    v21 = (QuestAfterAction_StateInstant_o *)sub_1C715FC(QuestAfterAction_StateInstant_TypeInfo);
    QuestAfterAction_StateInstant___ctor(v21, 0);
    if ( !v20 )
      goto LABEL_21;
    CStateManager_object___add(
      v20,
      3,
      (IState_T__o *)v21,
      (const MethodInfo_3394710 *)Method_CStateManager_QuestAfterAction__add__);
  }
  QuestAfterAction__SetState(this, 0, v2);
  this->fields.commandBuf = 0;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.commandBuf, 0, v22, v23, v24, v25, v26, v27);
  v28 = 0;
  this->fields.commandIdx = 0;
  do
  {
    commandTypeIds = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.commandTypeIds;
    if ( !commandTypeIds )
      goto LABEL_21;
    commandTypeIds = (System_Collections_Generic_Dictionary_TKey__TValue__o *)System_Collections_Generic_Dictionary_Int32Enum__object___ContainsKey(
                                                                                commandTypeIds,
                                                                                v28,
                                                                                (const MethodInfo_34958C4 *)Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___ContainsKey__);
    v29 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.commandTypeIds;
    if ( ((unsigned __int8)commandTypeIds & 1) != 0 )
    {
      if ( !v29 )
        goto LABEL_21;
      commandTypeIds = (System_Collections_Generic_Dictionary_TKey__TValue__o *)System_Collections_Generic_Dictionary_Int32Enum__object___get_Item(
                                                                                  (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.commandTypeIds,
                                                                                  v28,
                                                                                  (const MethodInfo_3495630 *)Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___get_Item__);
      if ( !commandTypeIds )
        goto LABEL_21;
      v30 = HIDWORD(commandTypeIds->fields._entries) + 1;
      LODWORD(commandTypeIds->fields._entries) = 0;
      HIDWORD(commandTypeIds->fields._entries) = v30;
    }
    else
    {
      v31 = (System_Collections_Generic_List_int__o *)sub_1C715FC(System_Collections_Generic_List_int__TypeInfo);
      System_Collections_Generic_List_int____ctor(
        v31,
        (const MethodInfo_37F2EA0 *)Method_System_Collections_Generic_List_int___ctor__);
      if ( !v29 )
        goto LABEL_21;
      System_Collections_Generic_Dictionary_Int32Enum__object___set_Item(
        v29,
        v28,
        (Il2CppObject *)v31,
        (const MethodInfo_34956BC *)Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___set_Item__);
    }
    ++v28;
  }
  while ( v28 != 5 );
  commandTypeIds = (System_Collections_Generic_Dictionary_TKey__TValue__o *)UnityEngine_Component__get_gameObject(
                                                                              (UnityEngine_Component_o *)this,
                                                                              0);
  if ( !commandTypeIds
    || (Component_object = UnityEngine_GameObject__GetComponent_object_(
                             (UnityEngine_GameObject_o *)commandTypeIds,
                             (const MethodInfo_31A2ED0 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___),
        this->fields.screenCollider = (struct UnityEngine_BoxCollider_o *)Component_object,
        sub_1C71354(
          (GrandQuestFolderBoardItem_o *)&this->fields.screenCollider,
          (int32_t)Component_object,
          v33,
          v34,
          v35,
          v36,
          v37,
          v38),
        (commandTypeIds = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.screenCollider) == 0) )
  {
LABEL_21:
    sub_1C71608(commandTypeIds, v15);
  }
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)commandTypeIds, 0, 0);
  this->fields.lastDispSpot = 0;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.lastDispSpot, 0, v39, v40, v41, v42, v43, v44);
  v45 = (System_Collections_Generic_List_int__o *)sub_1C715FC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v45,
    (const MethodInfo_37F2EA0 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.invalidMapGimmickIdList = v45;
  p_invalidMapGimmickIdList = &this->fields.invalidMapGimmickIdList;
  sub_1C71354((GrandQuestFolderBoardItem_o *)p_invalidMapGimmickIdList, (int32_t)v45, v47, v48, v49, v50, v51, v52);
  *((_BYTE *)p_invalidMapGimmickIdList + 160) = 0;
}


bool QuestAfterAction__IsActiveCommand(QuestAfterAction_o *this, const MethodInfo *method)
{
  return this->fields.commandBuf != 0;
}


bool QuestAfterAction__IsBlankEarthActiveCommand(QuestAfterAction_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  bool IsExistTerminalTransition; // w0
  _DWORD *QuestInfo; // x0
  TerminalPramsManager_c *v6; // x0
  __int64 v7; // x1
  Il2CppObject *Instance; // x19
  TerminalPramsManager_c *v9; // x0
  int v10; // w19
  bool isFadeTransition; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4CC3F41 & 1) == 0 )
  {
    sub_1C713B0(&BalanceConfig_TypeInfo);
    sub_1C713B0(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_1C713B0(&TerminalPramsManager_TypeInfo);
    byte_4CC3F41 = 1;
  }
  isFadeTransition = 0;
  if ( this->fields.commandBuf
    && (IsExistTerminalTransition = QuestAfterAction__IsExistTerminalTransition(this, &isFadeTransition, v2),
        !IsExistTerminalTransition || !isFadeTransition) )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4CC3BDD )
    {
      sub_1C713B0(&TerminalPramsManager_TypeInfo);
      byte_4CC3BDD = 1;
    }
    v6 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v6 = TerminalPramsManager_TypeInfo;
    }
    if ( v6->static_fields->_IsOrdealCallWarClear_k__BackingField )
    {
      LOBYTE(QuestInfo) = 1;
    }
    else
    {
      Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3A5F648 *)Method_SingletonTemplate_QuestTree__get_Instance__);
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4CC13B1 )
      {
        sub_1C713B0(&TerminalPramsManager_TypeInfo);
        byte_4CC13B1 = 1;
      }
      v9 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v9 = TerminalPramsManager_TypeInfo;
      }
      if ( !Instance )
        sub_1C71608(v9, v7);
      QuestInfo = QuestTree__GetQuestInfo((QuestTree_o *)Instance, v9->static_fields->_QuestId_k__BackingField, 0);
      if ( QuestInfo )
      {
        v10 = QuestInfo[16];
        QuestInfo = BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          QuestInfo = BalanceConfig_TypeInfo;
        }
        LOBYTE(QuestInfo) = v10 == *(_DWORD *)(*((_QWORD *)QuestInfo + 23) + 860LL);
      }
    }
  }
  else
  {
    LOBYTE(QuestInfo) = 0;
  }
  return (char)QuestInfo;
}


// local variable allocation has failed, the output may be wrong!
bool QuestAfterAction__IsExistCommand(
        QuestAfterAction_o *this,
        int32_t commandType,
        int32_t commandTypeId,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_TKey__TValue__o *commandTypeIds; // x0

  if ( (byte_4CC3F2B & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___ContainsKey__);
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___get_Item__);
    sub_1C713B0(&Method_System_Collections_Generic_List_int__Contains__);
    byte_4CC3F2B = 1;
  }
  commandTypeIds = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.commandTypeIds;
  if ( !commandTypeIds )
    goto LABEL_9;
  if ( System_Collections_Generic_Dictionary_Int32Enum__object___ContainsKey(
         commandTypeIds,
         commandType,
         (const MethodInfo_34958C4 *)Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___ContainsKey__) )
  {
    commandTypeIds = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.commandTypeIds;
    if ( commandTypeIds )
    {
      commandTypeIds = (System_Collections_Generic_Dictionary_TKey__TValue__o *)System_Collections_Generic_Dictionary_Int32Enum__object___get_Item(
                                                                                  commandTypeIds,
                                                                                  commandType,
                                                                                  (const MethodInfo_3495630 *)Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___get_Item__);
      if ( commandTypeIds )
        return System_Collections_Generic_List_int___Contains(
                 (System_Collections_Generic_List_int__o *)commandTypeIds,
                 commandTypeId,
                 (const MethodInfo_37F3A6C *)Method_System_Collections_Generic_List_int__Contains__);
    }
LABEL_9:
    sub_1C71608(commandTypeIds, *(_QWORD *)&commandType);
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
bool QuestAfterAction__IsExistSpotReveal(QuestAfterAction_o *this, int32_t spotId, const MethodInfo *method)
{
  struct QuestAfterAction_Command_array *commandBuf; // x8
  QuestAfterAction_o *v4; // x19
  __int64 v6; // x22
  int max_length; // w9
  bool v8; // w21
  QuestAfterAction_Command_o *v9; // x9
  int32_t id; // w10

  commandBuf = this->fields.commandBuf;
  if ( !commandBuf )
    return 0;
  v4 = this;
  v6 = 0;
  while ( 1 )
  {
    max_length = commandBuf->max_length;
    v8 = (int)v6 < max_length;
    if ( (int)v6 >= max_length )
      break;
    if ( (unsigned int)v6 >= max_length )
      sub_1C71610(this);
    v9 = commandBuf->m_Items[v6];
    if ( v9 )
    {
      id = v9->fields.id;
      if ( id == 112 || id == 102 )
      {
        this = (QuestAfterAction_o *)System_Int32__Parse(v9->fields.param, 0);
        if ( (_DWORD)this == spotId )
          return v8;
        commandBuf = v4->fields.commandBuf;
      }
      ++v6;
      if ( commandBuf )
        continue;
    }
    sub_1C71608(this, *(_QWORD *)&spotId);
  }
  return v8;
}


bool QuestAfterAction__IsExistTerminalTransition(
        QuestAfterAction_o *this,
        bool *isFadeTransition,
        const MethodInfo *method)
{
  struct QuestAfterAction_Command_array *commandBuf; // x10
  int max_length; // w8
  __int64 v6; // x9
  QuestAfterAction_Command_o **m_Items; // x10
  QuestAfterAction_Command_o *v8; // x20
  int32_t id; // w11
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  int32_t result; // [xsp+Ch] [xbp-14h] BYREF

  result = 0;
  *isFadeTransition = 0;
  commandBuf = this->fields.commandBuf;
  if ( !commandBuf )
    return 0;
  max_length = commandBuf->max_length;
  if ( max_length < 1 )
    return 0;
  v6 = 0;
  m_Items = commandBuf->m_Items;
  while ( 1 )
  {
    if ( (unsigned int)v6 >= max_length )
      goto LABEL_19;
    v8 = m_Items[v6];
    if ( !v8 )
      goto LABEL_18;
    id = v8->fields.id;
    if ( id == 701 )
      return 1;
    if ( id == 702 )
      break;
    if ( (int)++v6 >= max_length )
      return 0;
  }
  if ( !System_String__IsNullOrEmpty(v8->fields.param, 0) )
  {
    this = (QuestAfterAction_o *)v8->fields.param;
    if ( !this || (this = (QuestAfterAction_o *)System_String__Split((System_String_o *)this, 0x2Cu, 0, 0)) == 0 )
LABEL_18:
      sub_1C71608(this, isFadeTransition);
    m_CancellationTokenSource = this->fields.m_CancellationTokenSource;
    if ( m_CancellationTokenSource )
    {
      if ( !(_DWORD)m_CancellationTokenSource )
LABEL_19:
        sub_1C71610(this);
      if ( System_Int32__TryParse((System_String_o *)this->fields.invalidMapGimmickIdList, &result, 0) )
        *isFadeTransition = result > 0;
    }
  }
  return 1;
}


bool QuestAfterAction__IsGimmickDispCommand(int32_t cmd, const MethodInfo *method)
{
  return (cmd & 0xFFFFFFFD) == 401;
}


bool QuestAfterAction__IsMapChangeable(QuestAfterAction_o *this, const MethodInfo *method)
{
  ScrTerminalMap_o *v2; // x0
  UnityEngine_GameObject_c *klass; // x8

  if ( (byte_4CC3F3D & 1) == 0 )
  {
    sub_1C713B0(&TerminalSceneComponent_TypeInfo);
    byte_4CC3F3D = 1;
  }
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4CC12CE )
  {
    sub_1C713B0(&TerminalSceneComponent_TypeInfo);
    byte_4CC12CE = 1;
  }
  v2 = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v2 = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
  }
  klass = v2->fields.subRootGimmickP->klass;
  if ( !klass || (v2 = *(ScrTerminalMap_o **)&klass->_2.static_fields_size) == 0 )
    sub_1C71608(v2, method);
  return ScrTerminalMap__IsMapChangeable(v2, 0);
}


bool QuestAfterAction__IsNoWaitCommand(int32_t cmd, const MethodInfo *method)
{
  bool result; // w0

  if ( cmd > 402 )
  {
    result = 1;
    if ( (unsigned int)(cmd - 1010) < 3 || cmd == 403 || cmd == 1200 )
      return result;
    return 0;
  }
  result = 1;
  if ( (unsigned int)(cmd - 110) >= 5 && (unsigned int)(cmd - 203) >= 3 && cmd != 402 )
    return 0;
  return result;
}


bool QuestAfterAction__IsOtherObjChangeDispQuicklyCommand(int32_t cmd, const MethodInfo *method)
{
  return (cmd & 0xFFFFFFFE) == 1010;
}


bool QuestAfterAction__IsOtherObjHideCommand(int32_t cmd, const MethodInfo *method)
{
  return cmd == 1000 || cmd == 1010;
}


bool QuestAfterAction__IsOverwriteCommandNone(System_String_array *actionCommand, const MethodInfo *method)
{
  il2cpp_array_size_t max_length; // x8

  if ( actionCommand )
  {
    max_length = actionCommand->max_length;
    if ( max_length )
    {
      if ( !(_DWORD)max_length )
        sub_1C71610(actionCommand);
      LOBYTE(actionCommand) = System_Int32__Parse(actionCommand->m_Items[0], 0) == 0;
    }
    else
    {
      LOBYTE(actionCommand) = 0;
    }
  }
  return (char)actionCommand;
}


bool QuestAfterAction__IsPlaying(QuestAfterAction_o *this, const MethodInfo *method)
{
  struct CStateManager_QuestAfterAction__o *fsm; // x8

  if ( (byte_4CC3F38 & 1) == 0 )
  {
    sub_1C713B0(&Method_CStateManager_QuestAfterAction__getState__);
    byte_4CC3F38 = 1;
  }
  fsm = this->fields.fsm;
  return fsm && fsm->fields.m_state == 1;
}


bool QuestAfterAction__IsPlayingAction(QuestAfterAction_o *this, const MethodInfo *method)
{
  struct CStateManager_QuestAfterAction__o *fsm; // x8

  if ( (byte_4CC3F38 & 1) == 0 )
  {
    sub_1C713B0(&Method_CStateManager_QuestAfterAction__getState__);
    byte_4CC3F38 = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    return 0;
  if ( fsm->fields.m_state == 1 )
    return 1;
  return fsm->fields.m_state == 2;
}


bool QuestAfterAction__IsRemainFadeCommand(QuestAfterAction_o *this, const MethodInfo *method)
{
  bool result; // w0
  struct QuestAfterAction_Command_array *commandBuf; // x10
  int32_t commandIdx; // w8
  int32_t max_length; // w9
  __int64 v6; // x10
  int v7; // w11

  if ( this->fields.IsMoveBeforeFadeIn )
    return 1;
  commandBuf = this->fields.commandBuf;
  if ( !commandBuf )
    return 0;
  commandIdx = this->fields.commandIdx;
  max_length = commandBuf->max_length;
  if ( commandIdx >= max_length )
    return 0;
  v6 = (__int64)&commandBuf->m_Items[commandIdx];
  result = 1;
  while ( 1 )
  {
    if ( commandIdx >= (unsigned int)max_length )
      sub_1C71610(1);
    if ( !*(_QWORD *)v6 )
      sub_1C71608(1, method);
    v7 = *(_DWORD *)(*(_QWORD *)v6 + 16LL);
    if ( v7 == 405 || v7 == 520 )
      break;
    ++commandIdx;
    v6 += 8;
    if ( commandIdx >= max_length )
      return 0;
  }
  return result;
}


bool QuestAfterAction__IsSpotChangeDispQuicklyCommand(int32_t cmd, const MethodInfo *method)
{
  return (unsigned int)(cmd - 110) < 3;
}


bool QuestAfterAction__IsSpotDispCommand(int32_t cmd, const MethodInfo *method)
{
  return cmd == 102 || cmd == 112;
}


bool QuestAfterAction__IsSpotGrayCommand(int32_t cmd, const MethodInfo *method)
{
  return cmd == 101 || cmd == 111;
}


bool QuestAfterAction__IsSpotHideCommand(int32_t cmd, const MethodInfo *method)
{
  return cmd == 100 || cmd == 110;
}


void QuestAfterAction__LoadTerminalTransitionInfo(QuestAfterAction_o *this, const MethodInfo *method)
{
  TerminalTransitionInfo_o *TerminalTransitionInfoData; // x0
  __int64 v3; // x1
  TerminalTransitionInfo_o *v4; // x20
  char *Master_object; // x0
  TerminalSceneComponent_o *v6; // x19
  DataManager_o *v7; // x22
  EventMissionActionAddEntity_o *EntityFromIdProgressTypeAndActionType; // x0
  EventMissionActionAddEntity_o *v9; // x23
  EventMissionActionInfo_o *v10; // x21
  Il2CppObject *Entity; // x0
  Il2CppObject *v12; // x21
  Il2CppObject *v13; // x0
  _BOOL8 v14; // x0
  __int64 v15; // x1
  Il2CppObject *current; // x21
  TerminalPramsManager_c *v17; // x0
  __int64 v18; // x1
  int32_t v19; // w2
  int32_t v20; // w3
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7
  struct TerminalTransitionInfo_o *TransitionInfo_k__BackingField; // x0
  Il2CppClass *klass; // x1
  __int64 v27; // x0
  __int64 v28; // x1
  struct TerminalTransitionInfo_o *v29; // x8
  EventMissionActionEntity_o *v30; // x0
  EventMissionActionEntity_o *v31; // x23
  Il2CppObject *v32; // x0
  Il2CppObject *v33; // x23
  TerminalPramsManager_c *v34; // x0
  int32_t v35; // w2
  int32_t v36; // w3
  System_String_o *v37; // x4
  int32_t v38; // w5
  int64_t v39; // x6
  System_String_o *v40; // x7
  struct System_String_array *vals; // x1
  struct TerminalTransitionInfo_o *v42; // x8
  System_Collections_Generic_List_Enumerator_object__o v43; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v44; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4CC3F2F & 1) == 0 )
  {
    sub_1C713B0(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1C713B0(&Method_DataManager_GetMasterData_EventMissionActionAddMaster___);
    sub_1C713B0(&Method_DataManager_GetMasterData_EventMissionActionMaster___);
    sub_1C713B0(&Method_DataManager_GetMasterData_EventMissionMaster___);
    sub_1C713B0(&Method_DataManager_GetMaster_EventMaster___);
    sub_1C713B0(&Method_DataManager_GetMaster_ShopActionMaster___);
    sub_1C713B0(&Method_DataManager_GetMaster_ShopMaster___);
    sub_1C713B0(&DataManager_TypeInfo);
    sub_1C713B0(&Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__);
    sub_1C713B0(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
    sub_1C713B0(&Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__GetEntity__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_ShopActionEntity__Dispose__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_ShopActionEntity__MoveNext__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_ShopActionEntity__get_Current__);
    sub_1C713B0(&EventMissionActionInfo_TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_ShopActionEntity__GetEnumerator__);
    sub_1C713B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C713B0(&TerminalPramsManager_TypeInfo);
    sub_1C713B0(&TerminalSceneComponent_TypeInfo);
    byte_4CC3F2F = 1;
  }
  memset(&v44, 0, sizeof(v44));
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  TerminalTransitionInfoData = TerminalPramsManager__Load_TerminalTransitionInfoData(0);
  if ( !TerminalTransitionInfoData )
    return;
  v4 = TerminalTransitionInfoData;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4CC12CE )
  {
    sub_1C713B0(&TerminalSceneComponent_TypeInfo);
    byte_4CC12CE = 1;
  }
  Master_object = (char *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    Master_object = (char *)TerminalSceneComponent_TypeInfo;
  }
  v6 = (TerminalSceneComponent_o *)**((_QWORD **)Master_object + 23);
  if ( !v6 )
    goto LABEL_67;
  if ( v6->fields._TransitionInfo_k__BackingField )
    return;
  if ( v4->fields.missionId < 1 )
  {
    if ( v4->fields.shopId >= 1 )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = (char *)DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_ShopMaster___);
      if ( !Master_object )
        goto LABEL_67;
      Entity = DataMasterBase_object__object__int___GetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                 v4->fields.shopId,
                 (const MethodInfo_3408E80 *)Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__);
      if ( Entity )
      {
        v12 = Entity;
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Master_object = (char *)DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_EventMaster___);
        if ( !Master_object )
          goto LABEL_67;
        v13 = DataMasterBase_object__object__int___GetEntity(
                (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                (int32_t)v12[1].monitor,
                (const MethodInfo_3408E80 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
        if ( !v13 || !EventEntity__IsEventPeriod((EventEntity_o *)v13, 0, 0) )
          goto LABEL_66;
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Master_object = (char *)DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_ShopActionMaster___);
        if ( !Master_object )
          goto LABEL_67;
        Master_object = (char *)ShopActionMaster__GetEntityList(
                                  (ShopActionMaster_o *)Master_object,
                                  (int32_t)v12[1].klass,
                                  0);
        if ( !Master_object )
          goto LABEL_67;
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v43,
          (System_Collections_Generic_List_object__o *)Master_object,
          (const MethodInfo_3811210 *)Method_System_Collections_Generic_List_ShopActionEntity__GetEnumerator__);
        v44 = v43;
        while ( 1 )
        {
          v14 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v44,
                  (const MethodInfo_35962C8 *)Method_System_Collections_Generic_List_Enumerator_ShopActionEntity__MoveNext__);
          if ( !v14 )
            break;
          current = v44.fields._current;
          if ( !v44.fields._current )
            sub_1C71608(v14, v15);
          if ( LODWORD(v44.fields._current[1].monitor) == 4 )
          {
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            if ( !byte_4CC3F57 )
            {
              sub_1C713B0(&TerminalPramsManager_TypeInfo);
              byte_4CC3F57 = 1;
            }
            v17 = TerminalPramsManager_TypeInfo;
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
              v17 = TerminalPramsManager_TypeInfo;
            }
            v17->static_fields->meSceneStatus = 2;
            TerminalSceneComponent__CreateTransitionInfo(v6, v4, 0);
            TransitionInfo_k__BackingField = v6->fields._TransitionInfo_k__BackingField;
            if ( !TransitionInfo_k__BackingField )
              sub_1C71608(0, v18);
            klass = current[2].klass;
            TransitionInfo_k__BackingField->fields.afterActionVals = (struct System_String_array *)klass;
            sub_1C71354(
              (GrandQuestFolderBoardItem_o *)&TransitionInfo_k__BackingField->fields.afterActionVals,
              (int32_t)klass,
              v19,
              v20,
              v21,
              v22,
              v23,
              v24);
            v29 = v6->fields._TransitionInfo_k__BackingField;
            if ( !v29 )
              sub_1C71608(v27, v28);
            v29->fields.optionId = (int32_t)current[2].monitor;
            break;
          }
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v44,
          (const MethodInfo_35962C4 *)Method_System_Collections_Generic_List_Enumerator_ShopActionEntity__Dispose__);
      }
    }
  }
  else
  {
    Master_object = (char *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Master_object )
      goto LABEL_67;
    v7 = (DataManager_o *)Master_object;
    Master_object = (char *)DataManager__GetMasterData_object_(
                              (DataManager_o *)Master_object,
                              (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_EventMissionActionAddMaster___);
    if ( !Master_object )
      goto LABEL_67;
    EntityFromIdProgressTypeAndActionType = EventMissionActionAddMaster__GetEntityFromIdProgressTypeAndActionType(
                                              (EventMissionActionAddMaster_o *)Master_object,
                                              v4->fields.missionId,
                                              5,
                                              4,
                                              0);
    if ( EntityFromIdProgressTypeAndActionType )
    {
      v9 = EntityFromIdProgressTypeAndActionType;
      v10 = (EventMissionActionInfo_o *)sub_1C715FC(EventMissionActionInfo_TypeInfo);
      EventMissionActionInfo___ctor_45048740(v10, v9, 0);
    }
    else
    {
      Master_object = (char *)DataManager__GetMasterData_object_(
                                v7,
                                (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_EventMissionActionMaster___);
      if ( !Master_object )
        goto LABEL_67;
      v30 = EventMissionActionMaster__getEntityFromIdProgressTypeAndActionType(
              (EventMissionActionMaster_o *)Master_object,
              v4->fields.missionId,
              5,
              4,
              0);
      if ( !v30 )
        return;
      v31 = v30;
      v10 = (EventMissionActionInfo_o *)sub_1C715FC(EventMissionActionInfo_TypeInfo);
      EventMissionActionInfo___ctor(v10, v31, 0);
    }
    Master_object = (char *)DataManager__GetMasterData_object_(
                              v7,
                              (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_EventMissionMaster___);
    if ( !Master_object )
      goto LABEL_67;
    v32 = DataMasterBase_object__object__int___GetEntity(
            (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
            v4->fields.missionId,
            (const MethodInfo_3408E80 *)Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__GetEntity__);
    if ( v32 )
    {
      v33 = v32;
      Master_object = (char *)DataManager__GetMasterData_object_(
                                v7,
                                (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_EventMaster___);
      if ( !Master_object )
        goto LABEL_67;
      Master_object = (char *)DataMasterBase_object__object__int___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                HIDWORD(v33[1].monitor),
                                (const MethodInfo_3408E80 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
      if ( !Master_object )
        goto LABEL_67;
      if ( EventEntity__IsEventPeriod((EventEntity_o *)Master_object, 0, 0) )
      {
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_4CC3F57 )
        {
          sub_1C713B0(&TerminalPramsManager_TypeInfo);
          byte_4CC3F57 = 1;
        }
        v34 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v34 = TerminalPramsManager_TypeInfo;
        }
        v34->static_fields->meSceneStatus = 2;
        TerminalSceneComponent__CreateTransitionInfo(v6, v4, 0);
        if ( v10 )
        {
          Master_object = (char *)v6->fields._TransitionInfo_k__BackingField;
          if ( Master_object )
          {
            vals = v10->fields.vals;
            *((_QWORD *)Master_object + 4) = vals;
            sub_1C71354(
              (GrandQuestFolderBoardItem_o *)(Master_object + 32),
              (int32_t)vals,
              v35,
              v36,
              v37,
              v38,
              v39,
              v40);
            v42 = v6->fields._TransitionInfo_k__BackingField;
            if ( v42 )
            {
              v42->fields.optionId = v10->fields.optionId;
              return;
            }
          }
        }
LABEL_67:
        sub_1C71608(Master_object, v3);
      }
LABEL_66:
      TerminalSceneComponent__ClearTransitionInfo(v6, 0);
    }
  }
}


void QuestAfterAction__LoadVoice(QuestAfterAction_o *this, System_Action_o *endAct, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__o *svtVoices; // x0
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *Values; // x21
  System_Collections_Generic_List_object__o *v7; // x22
  const MethodInfo *v8; // x3

  if ( (byte_4CC3F2C & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__get_Values__);
    sub_1C713B0(&Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo___ctor__);
    sub_1C713B0(&System_Collections_Generic_List_QuestAfterAction_VoiceInfo__TypeInfo);
    byte_4CC3F2C = 1;
  }
  if ( this->fields.isLoadedVoice )
  {
    ActionExtensions__Call(endAct, 0);
  }
  else
  {
    svtVoices = this->fields.svtVoices;
    this->fields.isLoadedVoice = 1;
    if ( !svtVoices )
      sub_1C71608(0, endAct);
    Values = System_Collections_Generic_Dictionary_int__object___get_Values(
               (System_Collections_Generic_Dictionary_int__object__o *)svtVoices,
               (const MethodInfo_34620A4 *)Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__get_Values__);
    v7 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_QuestAfterAction_VoiceInfo__TypeInfo);
    System_Collections_Generic_List_object____ctor_58785804(
      v7,
      (System_Collections_Generic_IEnumerable_T__o *)Values,
      (const MethodInfo_381000C *)Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo___ctor__);
    QuestAfterAction__LoadVoice_36501864(
      this,
      (System_Collections_Generic_List_QuestAfterAction_VoiceInfo__o *)v7,
      endAct,
      v8);
  }
}


void QuestAfterAction__LoadVoice_36501864(
        QuestAfterAction_o *this,
        System_Collections_Generic_List_QuestAfterAction_VoiceInfo__o *svtVInfos,
        System_Action_o *endAct,
        const MethodInfo *method)
{
  __int64 v7; // x21
  System_Collections_Generic_List_QuestAfterAction_VoiceInfo__o *Instance; // x0
  __int64 v9; // x1
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  System_Collections_Generic_List_QuestAfterAction_VoiceInfo__o **v16; // x28
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  System_Action_o **v23; // x19
  int32_t v24; // w2
  int32_t v25; // w3
  System_String_o *v26; // x4
  int32_t v27; // w5
  int64_t v28; // x6
  System_String_o *v29; // x7
  System_String_o *VoiceAssetName_43081620; // x19
  Il2CppObject *v31; // x20
  System_Action_o *v32; // x22

  while ( 1 )
  {
    if ( (byte_4CC3F2D & 1) == 0 )
    {
      sub_1C713B0(&System_Action_TypeInfo);
      sub_1C713B0(&Method_System_Linq_Enumerable_Any_QuestAfterAction_VoiceInfo___);
      sub_1C713B0(&Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo__RemoveAt__);
      sub_1C713B0(&Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo__get_Item__);
      sub_1C713B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      sub_1C713B0(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
      sub_1C713B0(&Method_QuestAfterAction___c__DisplayClass83_0__LoadVoice_b__0__);
      sub_1C713B0(&QuestAfterAction___c__DisplayClass83_0_TypeInfo);
      byte_4CC3F2D = 1;
    }
    v7 = sub_1C715FC(QuestAfterAction___c__DisplayClass83_0_TypeInfo);
    QuestAfterAction___c__DisplayClass83_0___ctor((QuestAfterAction___c__DisplayClass83_0_o *)v7, 0);
    if ( !v7 )
      goto LABEL_17;
    *(_QWORD *)(v7 + 16) = svtVInfos;
    v16 = (System_Collections_Generic_List_QuestAfterAction_VoiceInfo__o **)(v7 + 16);
    sub_1C71354((GrandQuestFolderBoardItem_o *)(v7 + 16), (int32_t)svtVInfos, v10, v11, v12, v13, v14, v15);
    *(_QWORD *)(v7 + 24) = this;
    sub_1C71354((GrandQuestFolderBoardItem_o *)(v7 + 24), (int32_t)this, v17, v18, v19, v20, v21, v22);
    *(_QWORD *)(v7 + 32) = endAct;
    v23 = (System_Action_o **)(v7 + 32);
    sub_1C71354((GrandQuestFolderBoardItem_o *)(v7 + 32), (int32_t)endAct, v24, v25, v26, v27, v28, v29);
    if ( !System_Linq_Enumerable__Any_object_(
            *(System_Collections_Generic_IEnumerable_TSource__o **)(v7 + 16),
            (const MethodInfo_3156C84 *)Method_System_Linq_Enumerable_Any_QuestAfterAction_VoiceInfo___) )
    {
      Instance = (System_Collections_Generic_List_QuestAfterAction_VoiceInfo__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( Instance )
      {
        CommonUI__SetLoadMode((CommonUI_o *)Instance, 0, 0);
        ActionExtensions__Call(*v23, 0);
        return;
      }
LABEL_17:
      sub_1C71608(Instance, v9);
    }
    Instance = *v16;
    if ( !*v16 )
      goto LABEL_17;
    Instance = (System_Collections_Generic_List_QuestAfterAction_VoiceInfo__o *)System_Collections_Generic_List_object___get_Item(
                                                                                  (System_Collections_Generic_List_object__o *)Instance,
                                                                                  0,
                                                                                  (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo__get_Item__);
    if ( !Instance )
      goto LABEL_17;
    if ( LODWORD(Instance->fields._items) )
      break;
    Instance = *v16;
    if ( !*v16 )
      goto LABEL_17;
    System_Collections_Generic_List_object___RemoveAt(
      (System_Collections_Generic_List_object__o *)Instance,
      0,
      (const MethodInfo_3811EEC *)Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo__RemoveAt__);
    svtVInfos = *v16;
    endAct = *v23;
  }
  Instance = (System_Collections_Generic_List_QuestAfterAction_VoiceInfo__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  CommonUI__SetLoadMode((CommonUI_o *)Instance, 1, 0);
  Instance = *v16;
  if ( !*v16 )
    goto LABEL_17;
  Instance = (System_Collections_Generic_List_QuestAfterAction_VoiceInfo__o *)System_Collections_Generic_List_object___get_Item(
                                                                                (System_Collections_Generic_List_object__o *)Instance,
                                                                                0,
                                                                                (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo__get_Item__);
  if ( !Instance )
    goto LABEL_17;
  VoiceAssetName_43081620 = ServantVoiceEntity__getVoiceAssetName_43081620((int32_t)Instance->fields._items, 0);
  v31 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
  v32 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
  System_Action___ctor(v32, (Il2CppObject *)v7, Method_QuestAfterAction___c__DisplayClass83_0__LoadVoice_b__0__, 0);
  if ( !v31 )
    goto LABEL_17;
  SoundManager__LoadAudioAssetStorage((SoundManager_o *)v31, VoiceAssetName_43081620, v32, 1, 0);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *QuestAfterAction__MapObjName(
        QuestAfterAction_o *this,
        int32_t comType,
        int32_t id,
        const MethodInfo *method)
{
  if ( (byte_4CC3F3C & 1) == 0 )
  {
    sub_1C713B0(&SrcSpotBasePrefab_TypeInfo);
    sub_1C713B0(&StringLiteral_1/*""*/);
    byte_4CC3F3C = 1;
  }
  if ( comType )
  {
    if ( comType == 1 )
    {
      return srcLineSprite__GetGobjName(id, 0);
    }
    else if ( comType == 2 )
    {
      return MapGimmickComponent__GetGobjName(id, *(const MethodInfo **)&comType);
    }
    else
    {
      return (System_String_o *)StringLiteral_1/*""*/;
    }
  }
  else
  {
    if ( !SrcSpotBasePrefab_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SrcSpotBasePrefab_TypeInfo);
    return SrcSpotBasePrefab__GetGobjName(id, 0);
  }
}


void QuestAfterAction__OnEnd(QuestAfterAction_o *this, const MethodInfo *method)
{
  System_Action_o *endAct; // x0
  const MethodInfo *v4; // x1
  UnityEngine_Collider_o *screenCollider; // x0
  struct System_Collections_Generic_List_int__o *invalidMapGimmickIdList; // x8
  int v7; // w9

  if ( (byte_4CC3F36 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_int__Clear__);
    byte_4CC3F36 = 1;
  }
  endAct = this->fields.endAct;
  this->fields.isKeepingMainStateButFinished = 1;
  *(_QWORD *)&this->fields.ActionMapTargetType = -1;
  ActionExtensions__Call(endAct, 0);
  screenCollider = (UnityEngine_Collider_o *)this->fields.screenCollider;
  if ( !screenCollider
    || (UnityEngine_Collider__set_enabled(screenCollider, 0, 0),
        (invalidMapGimmickIdList = this->fields.invalidMapGimmickIdList) == 0) )
  {
    sub_1C71608(screenCollider, v4);
  }
  v7 = invalidMapGimmickIdList->fields._version + 1;
  invalidMapGimmickIdList->fields._size = 0;
  invalidMapGimmickIdList->fields._version = v7;
  QuestAfterAction__Init(this, v4);
  this->fields.isKeepingMainStateButFinished = 0;
}


void QuestAfterAction__Play(QuestAfterAction_o *this, System_Action_o *endAct, const MethodInfo *method)
{
  __int64 v5; // x21
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  System_Action_o *v14; // x22
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  const MethodInfo *v21; // x2

  if ( (byte_4CC3F31 & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_1C713B0(&Method_QuestAfterAction___c__DisplayClass87_0__Play_b__0__);
    sub_1C713B0(&QuestAfterAction___c__DisplayClass87_0_TypeInfo);
    byte_4CC3F31 = 1;
  }
  v5 = sub_1C715FC(QuestAfterAction___c__DisplayClass87_0_TypeInfo);
  QuestAfterAction___c__DisplayClass87_0___ctor((QuestAfterAction___c__DisplayClass87_0_o *)v5, 0);
  if ( !v5
    || (*(_QWORD *)(v5 + 16) = endAct,
        sub_1C71354((GrandQuestFolderBoardItem_o *)(v5 + 16), (int32_t)endAct, v8, v9, v10, v11, v12, v13),
        (Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3A5F648 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__)) == 0) )
  {
    sub_1C71608(Instance, v7);
  }
  MissionNotifyManager__StartPause((MissionNotifyManager_o *)Instance, 0);
  v14 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
  System_Action___ctor(v14, (Il2CppObject *)v5, Method_QuestAfterAction___c__DisplayClass87_0__Play_b__0__, 0);
  this->fields.endAct = v14;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.endAct, (int32_t)v14, v15, v16, v17, v18, v19, v20);
  if ( this->fields.commandBuf )
    QuestAfterAction__SetState(this, 1, v21);
  else
    ActionExtensions__Call(this->fields.endAct, 0);
}


void QuestAfterAction__PlaySpecifiedAction(
        QuestAfterAction_o *this,
        System_String_array *actionVals,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  __int64 v7; // x20
  Il2CppObject *Instance; // x0
  __int64 v9; // x1
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  const MethodInfo *v22; // x1
  struct QuestAfterAction_Command_array *CommandBuf; // x0
  int32_t v24; // w2
  int32_t v25; // w3
  System_String_o *v26; // x4
  int32_t v27; // w5
  int64_t v28; // x6
  System_String_o *v29; // x7
  System_Action_o *v30; // x21
  int32_t v31; // w2
  int32_t v32; // w3
  System_String_o *v33; // x4
  int32_t v34; // w5
  int64_t v35; // x6
  System_String_o *v36; // x7
  System_Action_o *v37; // x21
  const MethodInfo *v38; // x2
  System_Collections_IEnumerator_o *v39; // x1

  if ( (byte_4CC3F32 & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&QuestAfterAction_TypeInfo);
    sub_1C713B0(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_1C713B0(&Method_QuestAfterAction___c__DisplayClass88_0__PlaySpecifiedAction_b__0__);
    sub_1C713B0(&Method_QuestAfterAction___c__DisplayClass88_0__PlaySpecifiedAction_b__1__);
    sub_1C713B0(&QuestAfterAction___c__DisplayClass88_0_TypeInfo);
    byte_4CC3F32 = 1;
  }
  v7 = sub_1C715FC(QuestAfterAction___c__DisplayClass88_0_TypeInfo);
  QuestAfterAction___c__DisplayClass88_0___ctor((QuestAfterAction___c__DisplayClass88_0_o *)v7, 0);
  if ( !v7 )
    goto LABEL_10;
  *(_QWORD *)(v7 + 16) = this;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v7 + 16), (int32_t)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 24) = finishCallback;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v7 + 24), (int32_t)finishCallback, v16, v17, v18, v19, v20, v21);
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)actionVals, 0) )
  {
    ActionExtensions__Call(*(System_Action_o **)(v7 + 24), 0);
    return;
  }
  if ( !QuestAfterAction_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(QuestAfterAction_TypeInfo);
  CommandBuf = QuestAfterAction__GenerateCommandBuf(actionVals, v22);
  this->fields.temporaryCommandBuf = CommandBuf;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.temporaryCommandBuf,
    (int32_t)CommandBuf,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3A5F648 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
LABEL_10:
    sub_1C71608(Instance, v9);
  MissionNotifyManager__StartPause((MissionNotifyManager_o *)Instance, 0);
  v30 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
  System_Action___ctor(
    v30,
    (Il2CppObject *)v7,
    Method_QuestAfterAction___c__DisplayClass88_0__PlaySpecifiedAction_b__0__,
    0);
  this->fields.endAct = v30;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.endAct, (int32_t)v30, v31, v32, v33, v34, v35, v36);
  v37 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
  System_Action___ctor(
    v37,
    (Il2CppObject *)v7,
    Method_QuestAfterAction___c__DisplayClass88_0__PlaySpecifiedAction_b__1__,
    0);
  v39 = QuestAfterAction__WaitWhileMainStateFinished(this, v37, v38);
  UnityEngine_MonoBehaviour__StartCoroutine_71709800((UnityEngine_MonoBehaviour_o *)this, v39, 0);
}


void QuestAfterAction__PlaySpecifiedActionInstantly(
        QuestAfterAction_o *this,
        QuestAfterAction_Command_array *commandArray,
        const MethodInfo *method)
{
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7
  System_Action_o *v11; // x20
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  const MethodInfo *v18; // x2

  if ( (byte_4CC3F35 & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&Method_QuestAfterAction__PlaySpecifiedActionInstantly_b__91_0__);
    byte_4CC3F35 = 1;
  }
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)commandArray, 0) )
  {
    this->fields.temporaryCommandBuf = commandArray;
    sub_1C71354(
      (GrandQuestFolderBoardItem_o *)&this->fields.temporaryCommandBuf,
      (int32_t)commandArray,
      v5,
      v6,
      v7,
      v8,
      v9,
      v10);
    v11 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
    System_Action___ctor(v11, (Il2CppObject *)this, Method_QuestAfterAction__PlaySpecifiedActionInstantly_b__91_0__, 0);
    this->fields.endAct = v11;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.endAct, (int32_t)v11, v12, v13, v14, v15, v16, v17);
    QuestAfterAction__SetState(this, 3, v18);
  }
}


// local variable allocation has failed, the output may be wrong!
void QuestAfterAction__RequestMapChange(
        QuestAfterAction_o *this,
        int32_t cType,
        int32_t cTarget,
        const MethodInfo *method)
{
  __int64 v7; // x1
  TerminalPramsManager_c *v8; // x0
  ScrTerminalMap_o *v9; // x0
  UnityEngine_GameObject_c *klass; // x8

  if ( (byte_4CC3F3B & 1) == 0 )
  {
    sub_1C713B0(&TerminalPramsManager_TypeInfo);
    sub_1C713B0(&TerminalSceneComponent_TypeInfo);
    byte_4CC3F3B = 1;
  }
  this->fields.ActionMapTargetType = cType;
  this->fields.ActionMapTargetId = cTarget;
  QuestAfterAction__SetState(this, 0, *(const MethodInfo **)&cTarget);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4CC1B52 )
  {
    sub_1C713B0(&TerminalPramsManager_TypeInfo);
    byte_4CC1B52 = 1;
  }
  v8 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v8 = TerminalPramsManager_TypeInfo;
  }
  v8->static_fields->_IsAutoResume_k__BackingField = 1;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4CC12CE )
  {
    sub_1C713B0(&TerminalSceneComponent_TypeInfo);
    byte_4CC12CE = 1;
  }
  v9 = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v9 = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
  }
  klass = v9->fields.subRootGimmickP->klass;
  if ( !klass || (v9 = *(ScrTerminalMap_o **)&klass->_2.static_fields_size) == 0 )
    sub_1C71608(v9, v7);
  ScrTerminalMap__RequestMapChange(v9, 0, -1, -1, 0);
}


void QuestAfterAction__SetActionMap(
        QuestAfterAction_o *this,
        QuestAfterAction_Command_o *com,
        const MethodInfo *method)
{
  QuestAfterAction_o *v4; // x19
  int32_t id; // w8
  int v6; // w8
  unsigned int v7; // w8
  unsigned int v8; // w8
  int m_CancellationTokenSource; // w8
  System_String_o *TitleInfoCtrlCallback_k__BackingField; // x0
  int32_t SpotId; // w0
  Il2CppObject *MasterData_object; // x0
  System_String_o *param; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v14; // x20

  v4 = this;
  if ( (byte_4CC3F2A & 1) == 0 )
  {
    sub_1C713B0(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1C713B0(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    this = (QuestAfterAction_o *)sub_1C713B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CC3F2A = 1;
  }
  if ( v4->fields.ActionMapTargetType == -1 )
  {
    if ( !com )
      goto LABEL_42;
    id = com->fields.id;
    if ( id > 307 )
    {
      if ( id > 500 )
      {
        if ( id == 510 )
        {
          v4->fields.ActionMapTargetType = 0;
          this = (QuestAfterAction_o *)com->fields.param;
          if ( this )
          {
            this = (QuestAfterAction_o *)System_String__Split((System_String_o *)this, 0x2Cu, 0, 0);
            if ( this )
            {
              m_CancellationTokenSource = (int)this->fields.m_CancellationTokenSource;
              if ( m_CancellationTokenSource >= 2 )
              {
                TitleInfoCtrlCallback_k__BackingField = (System_String_o *)this->fields._TitleInfoCtrlCallback_k__BackingField;
LABEL_29:
                SpotId = System_Int32__Parse(TitleInfoCtrlCallback_k__BackingField, 0);
LABEL_30:
                v4->fields.ActionMapTargetId = SpotId;
                return;
              }
LABEL_27:
              if ( !m_CancellationTokenSource )
                sub_1C71610(this);
              TitleInfoCtrlCallback_k__BackingField = (System_String_o *)this->fields.invalidMapGimmickIdList;
              goto LABEL_29;
            }
          }
LABEL_42:
          sub_1C71608(this, com);
        }
        if ( id == 550 )
        {
          v6 = 3;
LABEL_23:
          v4->fields.ActionMapTargetType = v6;
          goto LABEL_24;
        }
LABEL_41:
        SpotId = -1;
        v4->fields.ActionMapTargetType = -1;
        goto LABEL_30;
      }
      if ( (unsigned int)(id - 400) > 0xC )
      {
        if ( id == 500 )
        {
          v4->fields.ActionMapTargetType = 0;
          this = (QuestAfterAction_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( this )
          {
            MasterData_object = DataManager__GetMasterData_object_(
                                  (DataManager_o *)this,
                                  (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_QuestMaster___);
            param = com->fields.param;
            v14 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
            this = (QuestAfterAction_o *)System_Int32__Parse(param, 0);
            if ( v14 )
            {
              this = (QuestAfterAction_o *)DataMasterBase_object__object__int___GetEntity(
                                             v14,
                                             (int32_t)this,
                                             (const MethodInfo_3408E80 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
              if ( this )
              {
                SpotId = QuestEntity__getSpotId((QuestEntity_o *)this, 0);
                goto LABEL_30;
              }
            }
          }
          goto LABEL_42;
        }
        goto LABEL_41;
      }
LABEL_18:
      v6 = 2;
      goto LABEL_23;
    }
    if ( id <= 113 )
    {
      v8 = id - 100;
      if ( v8 > 0xD || ((1 << v8) & 0x3C1F) == 0 )
        goto LABEL_41;
    }
    else
    {
      if ( (unsigned int)(id - 200) < 6 )
        goto LABEL_22;
      v7 = id - 300;
      if ( v7 > 7 )
        goto LABEL_41;
      if ( ((1 << v7) & 0x21) == 0 )
      {
        if ( ((1 << v7) & 0x42) == 0 )
        {
          if ( ((1 << v7) & 0x84) == 0 )
            goto LABEL_41;
          goto LABEL_18;
        }
LABEL_22:
        v6 = 1;
        goto LABEL_23;
      }
    }
    v4->fields.ActionMapTargetType = 0;
LABEL_24:
    this = (QuestAfterAction_o *)com->fields.param;
    if ( this )
    {
      this = (QuestAfterAction_o *)System_String__Split((System_String_o *)this, 0x2Cu, 0, 0);
      if ( this )
      {
        m_CancellationTokenSource = (int)this->fields.m_CancellationTokenSource;
        goto LABEL_27;
      }
    }
    goto LABEL_42;
  }
}


// local variable allocation has failed, the output may be wrong!
void QuestAfterAction__SetState(QuestAfterAction_o *this, int32_t state, const MethodInfo *method)
{
  CStateManager_T__o *fsm; // x0

  if ( (byte_4CC3F39 & 1) == 0 )
  {
    sub_1C713B0(&Method_CStateManager_QuestAfterAction__setState__);
    byte_4CC3F39 = 1;
  }
  fsm = (CStateManager_T__o *)this->fields.fsm;
  if ( !fsm )
    sub_1C71608(0, *(_QWORD *)&state);
  CStateManager_object___setState(
    fsm,
    state,
    (const MethodInfo_339479C *)Method_CStateManager_QuestAfterAction__setState__);
}


void QuestAfterAction__SkipToNextAction(QuestAfterAction_o *this, const MethodInfo *method)
{
  this->fields.isSkippedNext = 1;
}


void QuestAfterAction__Update(QuestAfterAction_o *this, const MethodInfo *method)
{
  CStateManager_T__o *fsm; // x0

  if ( (byte_4CC3F30 & 1) == 0 )
  {
    sub_1C713B0(&Method_CStateManager_QuestAfterAction__update__);
    byte_4CC3F30 = 1;
  }
  fsm = (CStateManager_T__o *)this->fields.fsm;
  if ( fsm )
    CStateManager_object___update(fsm, (const MethodInfo_3394778 *)Method_CStateManager_QuestAfterAction__update__);
}


System_Collections_IEnumerator_o *QuestAfterAction__WaitWhileMainStateFinished(
        QuestAfterAction_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7

  if ( (byte_4CC3F37 & 1) == 0 )
  {
    sub_1C713B0(&QuestAfterAction__WaitWhileMainStateFinished_d__94_TypeInfo);
    byte_4CC3F37 = 1;
  }
  v5 = sub_1C715FC(QuestAfterAction__WaitWhileMainStateFinished_d__94_TypeInfo);
  QuestAfterAction__WaitWhileMainStateFinished_d__94___ctor(
    (QuestAfterAction__WaitWhileMainStateFinished_d__94_o *)v5,
    0,
    0);
  if ( !v5 )
    sub_1C71608(v6, v7);
  *(_QWORD *)(v5 + 32) = this;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v5 + 32), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 40) = action;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v5 + 40), (int32_t)action, v14, v15, v16, v17, v18, v19);
  return (System_Collections_IEnumerator_o *)v5;
}


void QuestAfterAction___PlaySpecifiedActionInstantly_b__91_0(QuestAfterAction_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  const MethodInfo *v15; // x2

  this->fields.endAct = 0;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.endAct, 0, v2, v3, v4, v5, v6, v7);
  this->fields.temporaryCommandBuf = 0;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.temporaryCommandBuf, 0, v9, v10, v11, v12, v13, v14);
  QuestAfterAction__SetState(this, 0, v15);
}


System_Int32_array *QuestAfterAction__getMapGmkOffIdList(QuestAfterAction_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *invalidMapGimmickIdList; // x0

  if ( (byte_4CC3F29 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_int__ToArray__);
    byte_4CC3F29 = 1;
  }
  invalidMapGimmickIdList = this->fields.invalidMapGimmickIdList;
  if ( !invalidMapGimmickIdList )
    sub_1C71608(0, method);
  return System_Collections_Generic_List_int___ToArray(
           invalidMapGimmickIdList,
           (const MethodInfo_37F51AC *)Method_System_Collections_Generic_List_int__ToArray__);
}


BlankEarthQuestAfterAction_o *QuestAfterAction__get_BlankEarthQuestAfterAction(
        QuestAfterAction_o *this,
        const MethodInfo *method)
{
  return this->fields._BlankEarthQuestAfterAction_k__BackingField;
}


bool QuestAfterAction__get_IsMoveToAnyScene(QuestAfterAction_o *this, const MethodInfo *method)
{
  return this->fields.IsMoveToEventRewardShop || this->fields.IsMoveToClassScore;
}


bool QuestAfterAction__get_IsRequestedStopBgm(QuestAfterAction_o *this, const MethodInfo *method)
{
  return this->fields.isRequestedStopBgm;
}


QuestAfterAction_TitleInfoControlCallback_o *QuestAfterAction__get_TitleInfoCtrlCallback(
        QuestAfterAction_o *this,
        const MethodInfo *method)
{
  return this->fields._TitleInfoCtrlCallback_k__BackingField;
}


void QuestAfterAction__releaseVoice(QuestAfterAction_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__o *svtVoices; // x0
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *Values; // x21
  System_Collections_Generic_List_object__o *v5; // x20
  _BOOL8 v6; // x0
  __int64 v7; // x1
  System_String_o *VoiceAssetName_43081620; // x20
  System_Collections_Generic_List_Enumerator_object__o v9; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4CC3F2E & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__Clear__);
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__get_Values__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_QuestAfterAction_VoiceInfo__Dispose__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_QuestAfterAction_VoiceInfo__MoveNext__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_QuestAfterAction_VoiceInfo__get_Current__);
    sub_1C713B0(&Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo__GetEnumerator__);
    sub_1C713B0(&Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo___ctor__);
    sub_1C713B0(&System_Collections_Generic_List_QuestAfterAction_VoiceInfo__TypeInfo);
    sub_1C713B0(&SoundManager_TypeInfo);
    byte_4CC3F2E = 1;
  }
  memset(&v9, 0, sizeof(v9));
  svtVoices = this->fields.svtVoices;
  if ( !svtVoices )
    goto LABEL_14;
  Values = System_Collections_Generic_Dictionary_int__object___get_Values(
             (System_Collections_Generic_Dictionary_int__object__o *)svtVoices,
             (const MethodInfo_34620A4 *)Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__get_Values__);
  v5 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_QuestAfterAction_VoiceInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor_58785804(
    v5,
    (System_Collections_Generic_IEnumerable_T__o *)Values,
    (const MethodInfo_381000C *)Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo___ctor__);
  if ( !v5 )
    goto LABEL_14;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v9,
    v5,
    (const MethodInfo_3811210 *)Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo__GetEnumerator__);
  while ( 1 )
  {
    v6 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v9,
           (const MethodInfo_35962C8 *)Method_System_Collections_Generic_List_Enumerator_QuestAfterAction_VoiceInfo__MoveNext__);
    if ( !v6 )
      break;
    if ( !v9.fields._current )
      sub_1C71608(v6, v7);
    VoiceAssetName_43081620 = ServantVoiceEntity__getVoiceAssetName_43081620(
                                *(_DWORD *)((char *)&v9.fields._current->klass + (unsigned __int64)&word_10),
                                0);
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    SoundManager__releaseAudioAssetStorage(VoiceAssetName_43081620, 0);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v9,
    (const MethodInfo_35962C4 *)Method_System_Collections_Generic_List_Enumerator_QuestAfterAction_VoiceInfo__Dispose__);
  svtVoices = this->fields.svtVoices;
  if ( !svtVoices )
LABEL_14:
    sub_1C71608(svtVoices, method);
  System_Collections_Generic_Dictionary_int__object___Clear(
    (System_Collections_Generic_Dictionary_int__object__o *)svtVoices,
    (const MethodInfo_346241C *)Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__Clear__);
  this->fields.isLoadedVoice = 0;
}


void QuestAfterAction__set_IsRequestedStopBgm(QuestAfterAction_o *this, bool value, const MethodInfo *method)
{
  this->fields.isRequestedStopBgm = value;
}


void QuestAfterAction_Command___ctor(QuestAfterAction_Command_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


System_String_o *QuestAfterAction_Command__GetAvailableRandomVoice(
        QuestAfterAction_Command_o *this,
        int32_t *svtId,
        const MethodInfo *method)
{
  void *param; // x0
  System_Collections_Generic_IEnumerable_T__o *v6; // x22
  Il2CppObject *MasterData_object; // x20
  System_Collections_Generic_List_object__o *v8; // x21
  System_Random_o *v9; // x22
  __int64 size; // x1
  int32_t v11; // w24
  int v12; // w8
  void *v13; // x25
  Il2CppObject *Item; // x25
  __int64 v15; // x8
  __int64 v16; // x8
  int32_t v17; // w1
  _BOOL8 v18; // x0
  int v19; // w8
  void *v20; // x21
  int32_t result; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_4CC3F44 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataManager_GetMasterData_VoicePlayCondMaster___);
    sub_1C713B0(&Method_System_Collections_Generic_List_string__RemoveAt__);
    sub_1C713B0(&Method_System_Collections_Generic_List_string___ctor___78599176);
    sub_1C713B0(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_1C713B0(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_1C713B0(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C713B0(&System_Random_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C713B0(&TerminalSceneComponent_TypeInfo);
    sub_1C713B0(&StringLiteral_16109/*"_"*/);
    byte_4CC3F44 = 1;
  }
  *svtId = 0;
  if ( this->fields.id != 800 )
    return 0;
  param = this->fields.param;
  if ( !param )
    goto LABEL_41;
  param = System_String__Split((System_String_o *)param, 0x2Cu, 0, 0);
  if ( !param )
    goto LABEL_41;
  v6 = (System_Collections_Generic_IEnumerable_T__o *)param;
  if ( *((int *)param + 6) > 1 )
  {
    param = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( param )
    {
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)param,
                            (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_VoicePlayCondMaster___);
      v8 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_string__TypeInfo);
      System_Collections_Generic_List_object____ctor_58785804(
        v8,
        v6,
        (const MethodInfo_381000C *)Method_System_Collections_Generic_List_string___ctor___78599176);
      result = 0;
      v9 = (System_Random_o *)sub_1C715FC(System_Random_TypeInfo);
      System_Random___ctor(v9, 0);
      if ( v8 )
      {
        if ( v9 )
        {
          size = (unsigned int)v8->fields._size;
          while ( 1 )
          {
            v11 = ((__int64 (__fastcall *)(System_Random_o *, __int64, const MethodInfo *))v9->klass->vtable._7_Next.methodPtr)(
                    v9,
                    size,
                    v9->klass->vtable._7_Next.method);
            result = 0;
            param = System_Collections_Generic_List_object___get_Item(
                      v8,
                      v11,
                      (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_string__get_Item__);
            if ( !param )
              break;
            param = System_String__Split((System_String_o *)param, 0x5Fu, 0, 0);
            if ( !param )
              break;
            v12 = *((_DWORD *)param + 6);
            v13 = param;
            if ( v12 == 3 )
            {
              v18 = System_Int32__TryParse(*((System_String_o **)param + 4), &result, 0);
              if ( *((_DWORD *)v13 + 6) <= 2u )
                goto LABEL_42;
              param = System_String__Concat_64069988(
                        *((System_String_o **)v13 + 5),
                        (System_String_o *)StringLiteral_16109/*"_"*/,
                        *((System_String_o **)v13 + 6),
                        0);
              if ( !MasterData_object )
                break;
              v17 = result;
              Item = (Il2CppObject *)param;
            }
            else
            {
              if ( v12 != 2 )
                goto LABEL_29;
              result = 0;
              Item = System_Collections_Generic_List_object___get_Item(
                       v8,
                       v11,
                       (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_string__get_Item__);
              if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
              if ( !byte_4CC12CE )
              {
                sub_1C713B0(&TerminalSceneComponent_TypeInfo);
                byte_4CC12CE = 1;
              }
              param = TerminalSceneComponent_TypeInfo;
              if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
                param = TerminalSceneComponent_TypeInfo;
              }
              v15 = **((_QWORD **)param + 23);
              if ( !v15 )
                break;
              v16 = *(_QWORD *)(v15 + 464);
              if ( !v16 )
                break;
              param = (void *)ServantVoiceEntity__getSvtIdfromVoiceAssetName(*(System_String_o **)(v16 + 40), 0);
              if ( !MasterData_object )
                break;
              v17 = (int)param;
            }
            if ( VoicePlayCondMaster__isVoicePlay(
                   (VoicePlayCondMaster_o *)MasterData_object,
                   v17,
                   (System_String_o *)Item,
                   0,
                   -1,
                   -1,
                   0,
                   0) )
            {
              *svtId = result;
              return (System_String_o *)Item;
            }
LABEL_29:
            System_Collections_Generic_List_object___RemoveAt(
              v8,
              v11,
              (const MethodInfo_3811EEC *)Method_System_Collections_Generic_List_string__RemoveAt__);
            size = (unsigned int)v8->fields._size;
            if ( !(_DWORD)size )
            {
              Item = 0;
              *svtId = 0;
              return (System_String_o *)Item;
            }
          }
        }
      }
    }
LABEL_41:
    sub_1C71608(param, svtId);
  }
  param = this->fields.param;
  if ( !param )
    goto LABEL_41;
  param = System_String__Split((System_String_o *)param, 0x5Fu, 0, 0);
  if ( !param )
    goto LABEL_41;
  v19 = *((_DWORD *)param + 6);
  v20 = param;
  if ( v19 != 3 )
  {
    if ( v19 == 2 )
      return this->fields.param;
    return 0;
  }
  v18 = System_Int32__TryParse(*((System_String_o **)param + 4), svtId, 0);
  if ( *((_DWORD *)v20 + 6) <= 2u )
LABEL_42:
    sub_1C71610(v18);
  return System_String__Concat_64069988(
           *((System_String_o **)v20 + 5),
           (System_String_o *)StringLiteral_16109/*"_"*/,
           *((System_String_o **)v20 + 6),
           0);
}


System_String_o *QuestAfterAction_Command__GetBgmName(QuestAfterAction_Command_o *this, const MethodInfo *method)
{
  System_String_o *v3; // x0
  bool v4; // w8
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF
  int32_t result; // [xsp+1Ch] [xbp-14h] BYREF

  if ( (byte_4CC3F46 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataManager_GetMasterData_BgmMaster___);
    sub_1C713B0(&Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__);
    sub_1C713B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CC3F46 = 1;
  }
  result = 0;
  entity = 0;
  v3 = 0;
  if ( this->fields.id == 851 )
  {
    v4 = System_Int32__TryParse(this->fields.param, &result, 0);
    v3 = 0;
    if ( v4 )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_12;
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_BgmMaster___);
      if ( !Instance )
        goto LABEL_12;
      Instance = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                   (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                   &entity,
                                   result,
                                   (const MethodInfo_3408ECC *)Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( entity )
          return (System_String_o *)entity[1].monitor;
LABEL_12:
        sub_1C71608(Instance, v6);
      }
      return 0;
    }
  }
  return v3;
}


int32_t QuestAfterAction_Command__GetSvtId(
        QuestAfterAction_Command_o *this,
        System_String_o *str,
        const MethodInfo *method)
{
  System_String_o **v3; // x0
  int32_t result; // [xsp+Ch] [xbp-4h] BYREF

  if ( this->fields.id != 800 )
    return 0;
  v3 = (System_String_o **)str;
  if ( !str || (v3 = (System_String_o **)System_String__Split(str, 0x5Fu, 0, 0)) == 0 )
    sub_1C71608(v3, str);
  if ( *((_DWORD *)v3 + 6) != 3 )
    return 0;
  result = 0;
  if ( System_Int32__TryParse(v3[4], &result, 0) )
    return result;
  else
    return 0;
}


System_String_o *QuestAfterAction_Command__GetVoiceId(
        QuestAfterAction_Command_o *this,
        System_String_o *str,
        const MethodInfo *method)
{
  System_String_o *v3; // x19
  QuestAfterAction_Command_o *v4; // x20
  int param; // w8

  v3 = str;
  v4 = this;
  if ( (byte_4CC3F45 & 1) == 0 )
  {
    this = (QuestAfterAction_Command_o *)sub_1C713B0(&StringLiteral_16109/*"_"*/);
    byte_4CC3F45 = 1;
  }
  if ( v4->fields.id == 800 )
  {
    if ( !v3 || (this = (QuestAfterAction_Command_o *)System_String__Split(v3, 0x5Fu, 0, 0)) == 0 )
      sub_1C71608(this, str);
    param = (int)this->fields.param;
    if ( param == 2 )
      return v3;
    if ( param == 3 )
      return System_String__Concat_64069988(
               (System_String_o *)this[1].monitor,
               (System_String_o *)StringLiteral_16109/*"_"*/,
               *(System_String_o **)&this[1].fields.id,
               0);
  }
  return 0;
}


void QuestAfterAction_StateAdditional___ctor(QuestAfterAction_StateAdditional_o *this, const MethodInfo *method)
{
  QuestAfterAction_StateMain___ctor((QuestAfterAction_StateMain_o *)this, 0);
}


void QuestAfterAction_StateAdditionalBase___ctor(
        QuestAfterAction_StateAdditionalBase_o *this,
        const MethodInfo *method)
{
  QuestAfterAction_StateMain___ctor((QuestAfterAction_StateMain_o *)this, 0);
}


void QuestAfterAction_StateAdditionalBase__begin(
        QuestAfterAction_StateAdditionalBase_o *this,
        QuestAfterAction_o *that,
        const MethodInfo *method)
{
  QuestAfterAction_StateMain__begin((QuestAfterAction_StateMain_o *)this, that, 0);
  ((void (__fastcall *)(QuestAfterAction_StateAdditionalBase_o *, _QWORD, const MethodInfo *))this->klass->vtable._12_set_CommandIndex.methodPtr)(
    this,
    0,
    this->klass->vtable._12_set_CommandIndex.method);
}


QuestAfterAction_Command_array *QuestAfterAction_StateAdditionalBase__get_CommandBuf(
        QuestAfterAction_StateAdditionalBase_o *this,
        const MethodInfo *method)
{
  struct QuestAfterAction_o *that; // x8

  that = this->fields.that;
  if ( !that )
    sub_1C71608(this, method);
  return that->fields.temporaryCommandBuf;
}


int32_t QuestAfterAction_StateAdditionalBase__get_CommandIndex(
        QuestAfterAction_StateAdditionalBase_o *this,
        const MethodInfo *method)
{
  return this->fields._CommandIndex_k__BackingField;
}


void QuestAfterAction_StateAdditionalBase__onEnd(
        QuestAfterAction_StateAdditionalBase_o *this,
        bool deleteKey,
        const MethodInfo *method)
{
  struct QuestAfterAction_o *screenCollider; // x0
  __int64 v5; // x1
  struct QuestAfterAction_o *that; // x8

  screenCollider = (struct QuestAfterAction_o *)((__int64 (__fastcall *)(QuestAfterAction_StateAdditionalBase_o *, _QWORD, const MethodInfo *))this->klass->vtable._12_set_CommandIndex.methodPtr)(
                                                  this,
                                                  0,
                                                  this->klass->vtable._12_set_CommandIndex.method);
  that = this->fields.that;
  if ( !that
    || (screenCollider = (struct QuestAfterAction_o *)that->fields.screenCollider) == 0
    || (UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)screenCollider, 0, 0),
        (screenCollider = this->fields.that) == 0) )
  {
    sub_1C71608(screenCollider, v5);
  }
  QuestAfterAction__CallEndAct(screenCollider, 0);
}


void QuestAfterAction_StateAdditionalBase__set_CommandIndex(
        QuestAfterAction_StateAdditionalBase_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._CommandIndex_k__BackingField = value;
}


void QuestAfterAction_StateInstant___ctor(QuestAfterAction_StateInstant_o *this, const MethodInfo *method)
{
  QuestAfterAction_StateMain___ctor((QuestAfterAction_StateMain_o *)this, 0);
}


void QuestAfterAction_StateInstant__EndAnim(QuestAfterAction_StateInstant_o *this, const MethodInfo *method)
{
  if ( !this->fields.completed )
  {
    QuestAfterAction_StateMain__EndAnim((QuestAfterAction_StateMain_o *)this, 0);
    ((void (__fastcall *)(QuestAfterAction_StateInstant_o *, struct QuestAfterAction_o *, const MethodInfo *))this->klass->vtable._13_UpdateAnim.methodPtr)(
      this,
      this->fields.that,
      this->klass->vtable._13_UpdateAnim.method);
  }
}


bool QuestAfterAction_StateInstant__IsUsableCommand(
        QuestAfterAction_StateInstant_o *this,
        QuestAfterAction_Command_o *cmd,
        const MethodInfo *method)
{
  int32_t id; // w19

  if ( (byte_4CC4003 & 1) == 0 )
  {
    this = (QuestAfterAction_StateInstant_o *)sub_1C713B0(&QuestAfterAction_TypeInfo);
    byte_4CC4003 = 1;
  }
  if ( !cmd )
    sub_1C71608(this, cmd);
  id = cmd->fields.id;
  if ( !QuestAfterAction_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(QuestAfterAction_TypeInfo);
  return QuestAfterAction__IsNoWaitCommand(id, 0);
}


void QuestAfterAction_StateInstant__UpdateAnim(
        QuestAfterAction_StateInstant_o *this,
        QuestAfterAction_o *that,
        const MethodInfo *method)
{
  if ( !this->fields.completed )
    QuestAfterAction_StateMain__UpdateAnim((QuestAfterAction_StateMain_o *)this, that, 0);
}


void QuestAfterAction_StateInstant__begin(
        QuestAfterAction_StateInstant_o *this,
        QuestAfterAction_o *that,
        const MethodInfo *method)
{
  QuestAfterAction_StateInstant_c *klass; // x8

  QuestAfterAction_StateMain__begin((QuestAfterAction_StateMain_o *)this, that, 0);
  ((void (__fastcall *)(QuestAfterAction_StateInstant_o *, _QWORD, const MethodInfo *))this->klass->vtable._12_set_CommandIndex.methodPtr)(
    this,
    0,
    this->klass->vtable._12_set_CommandIndex.method);
  klass = this->klass;
  this->fields.completed = 0;
  ((void (__fastcall *)(QuestAfterAction_StateInstant_o *, QuestAfterAction_o *, const MethodInfo *))klass->vtable._13_UpdateAnim.methodPtr)(
    this,
    that,
    klass->vtable._13_UpdateAnim.method);
}


void QuestAfterAction_StateInstant__onEnd(
        QuestAfterAction_StateInstant_o *this,
        bool deleteKey,
        const MethodInfo *method)
{
  this->fields.completed = 1;
  QuestAfterAction_StateAdditionalBase__onEnd((QuestAfterAction_StateAdditionalBase_o *)this, 0, method);
}


void QuestAfterAction_StateInstant__update(
        QuestAfterAction_StateInstant_o *this,
        QuestAfterAction_o *that,
        const MethodInfo *method)
{
  ;
}


void QuestAfterAction_StateMain___ctor(QuestAfterAction_StateMain_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void QuestAfterAction_StateMain__EndAnim(QuestAfterAction_StateMain_o *this, const MethodInfo *method)
{
  QuestAfterAction_StateMain_c *klass; // x8
  int v4; // w0
  int v5; // w20
  __int64 v6; // x0
  __int64 v7; // x1

  klass = this->klass;
  this->fields.IsAnimDoing = 0;
  v4 = ((__int64 (__fastcall *)(QuestAfterAction_StateMain_o *, const MethodInfo *))klass->vtable._11_get_CommandIndex.methodPtr)(
         this,
         klass->vtable._11_get_CommandIndex.method);
  ((void (__fastcall *)(QuestAfterAction_StateMain_o *, _QWORD, const MethodInfo *))this->klass->vtable._12_set_CommandIndex.methodPtr)(
    this,
    (unsigned int)(v4 + 1),
    this->klass->vtable._12_set_CommandIndex.method);
  v5 = ((__int64 (__fastcall *)(QuestAfterAction_StateMain_o *, const MethodInfo *))this->klass->vtable._11_get_CommandIndex.methodPtr)(
         this,
         this->klass->vtable._11_get_CommandIndex.method);
  v6 = ((__int64 (__fastcall *)(QuestAfterAction_StateMain_o *, const MethodInfo *))this->klass->vtable._10_get_CommandBuf.methodPtr)(
         this,
         this->klass->vtable._10_get_CommandBuf.method);
  if ( !v6 )
    sub_1C71608(0, v7);
  if ( v5 >= *(_DWORD *)(v6 + 24) )
    ((void (__fastcall *)(QuestAfterAction_StateMain_o *, __int64, const MethodInfo *))this->klass->vtable._15_onEnd.methodPtr)(
      this,
      1,
      this->klass->vtable._15_onEnd.method);
}


void QuestAfterAction_StateMain__ForceEndAnim(
        QuestAfterAction_StateMain_o *this,
        bool deleteKey,
        const MethodInfo *method)
{
  QuestAfterAction_StateMain_c *klass; // x8
  __int64 v6; // x0
  __int64 v7; // x1

  klass = this->klass;
  this->fields.IsAnimDoing = 0;
  v6 = ((__int64 (__fastcall *)(QuestAfterAction_StateMain_o *, const MethodInfo *, const MethodInfo *))klass->vtable._10_get_CommandBuf.methodPtr)(
         this,
         klass->vtable._10_get_CommandBuf.method,
         method);
  if ( !v6 )
    sub_1C71608(0, v7);
  ((void (__fastcall *)(QuestAfterAction_StateMain_o *, _QWORD, const MethodInfo *))this->klass->vtable._12_set_CommandIndex.methodPtr)(
    this,
    *(unsigned int *)(v6 + 24),
    this->klass->vtable._12_set_CommandIndex.method);
  ((void (__fastcall *)(QuestAfterAction_StateMain_o *, bool, const MethodInfo *))this->klass->vtable._15_onEnd.methodPtr)(
    this,
    deleteKey,
    this->klass->vtable._15_onEnd.method);
}


bool QuestAfterAction_StateMain__IsUsableCommand(
        QuestAfterAction_StateMain_o *this,
        QuestAfterAction_Command_o *cmd,
        const MethodInfo *method)
{
  return 1;
}


void QuestAfterAction_StateMain__StartMapGimmick(QuestAfterAction_StateMain_o *this, const MethodInfo *method)
{
  QuestAfterAction_StateMain_o *v2; // x19
  struct QuestAfterAction_o *that; // x8
  __int64 v4; // x8
  QuestAfterAction_StateMain_o *v5; // x20
  unsigned __int64 v6; // x22
  struct QuestAfterAction_o *v7; // x8
  int32_t v8; // w21
  Il2CppObject *MapComponent_object; // x21
  Il2CppClass *klass; // x8
  float AnimTime; // s0
  const MethodInfo *v12; // x3

  v2 = this;
  if ( (byte_4CC3F4B & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_int__Remove__);
    sub_1C713B0(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
    this = (QuestAfterAction_StateMain_o *)sub_1C713B0(&Method_SingletonTemplate_QuestTree__get_Instance__);
    byte_4CC3F4B = 1;
  }
  that = v2->fields.that;
  if ( !that )
    goto LABEL_22;
  this = (QuestAfterAction_StateMain_o *)that->fields.invalidMapGimmickIdList;
  if ( !this )
    goto LABEL_22;
  this = (QuestAfterAction_StateMain_o *)System_Collections_Generic_List_int___ToArray(
                                           (System_Collections_Generic_List_int__o *)this,
                                           (const MethodInfo_37F51AC *)Method_System_Collections_Generic_List_int__ToArray__);
  if ( !this )
    goto LABEL_22;
  v4 = *(_QWORD *)&this->fields.IsAnimDoing;
  v5 = this;
  if ( (int)v4 >= 1 )
  {
    v6 = 0;
    while ( 1 )
    {
      if ( v6 >= (unsigned int)v4 )
        sub_1C71610(this);
      v7 = v2->fields.that;
      if ( !v7 )
        break;
      this = (QuestAfterAction_StateMain_o *)v7->fields.invalidMapGimmickIdList;
      if ( !this )
        break;
      v8 = *((_DWORD *)&v5->fields.waitTime + v6);
      System_Collections_Generic_List_int___Remove(
        (System_Collections_Generic_List_int__o *)this,
        v8,
        (const MethodInfo_37F4BF0 *)Method_System_Collections_Generic_List_int__Remove__);
      this = (QuestAfterAction_StateMain_o *)v2->fields.that;
      if ( !this )
        break;
      MapComponent_object = QuestAfterAction__GetMapComponent_object_(
                              (QuestAfterAction_o *)this,
                              2,
                              v8,
                              v2,
                              (const MethodInfo_31E4BE0 *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (QuestAfterAction_StateMain_o *)UnityEngine_Object__op_Inequality(
                                               (UnityEngine_Object_o *)MapComponent_object,
                                               0,
                                               0);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        this = (QuestAfterAction_StateMain_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3A5F648 *)Method_SingletonTemplate_QuestTree__get_Instance__);
        if ( !MapComponent_object || !this )
          break;
        this = (QuestAfterAction_StateMain_o *)QuestTree__CheckMapGimmickCond_36890900(
                                                 (QuestTree_o *)this,
                                                 (MapControl_MapGimmickInfo_o *)MapComponent_object[7].klass,
                                                 0);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          klass = MapComponent_object[7].klass;
          if ( !klass )
            break;
          LODWORD(klass->_1.name) = 1;
          AnimTime = MapGimmickComponent__GetAnimTime((MapGimmickComponent_o *)MapComponent_object, method);
          MapGimmickComponent__SetDispAnim_36457356((MapGimmickComponent_o *)MapComponent_object, 1, AnimTime, 1, v12);
        }
      }
      LODWORD(v4) = *(_DWORD *)&v5->fields.IsAnimDoing;
      if ( (__int64)++v6 >= (int)v4 )
        return;
    }
LABEL_22:
    sub_1C71608(this, method);
  }
}


// local variable allocation has failed, the output may be wrong!
void QuestAfterAction_StateMain__UpdateAnim(
        QuestAfterAction_StateMain_o *this,
        QuestAfterAction_o *that,
        const MethodInfo *method)
{
  __int64 v5; // x22
  __int64 updated; // x0
  const MethodInfo *v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  QuestAfterAction_o **v14; // x20
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  QuestAfterAction_StateMain_c *klass; // x8
  __int64 v22; // x21
  QuestAfterAction_Command_o *v23; // x21
  QuestAfterAction_o *v24; // x23
  BlankEarthQuestAfterAction_o *BlankEarthQuestAfterAction_k__BackingField; // x24
  System_Action_o *v26; // x25
  int id; // w8
  __int64 v28; // x21
  int v29; // w22
  int32_t v30; // w21
  __int64 v31; // x8
  bool v32; // w2
  bool v33; // w3
  int32_t v34; // w1
  __int64 v35; // x20
  int32_t v36; // w2
  int32_t v37; // w3
  System_String_o *v38; // x4
  int32_t v39; // w5
  int64_t v40; // x6
  System_String_o *v41; // x7
  __int64 v42; // x23
  int32_t v43; // w21
  Il2CppObject *v44; // x0
  __int64 *v45; // x24
  int32_t v46; // w2
  int32_t v47; // w3
  System_String_o *v48; // x4
  int32_t v49; // w5
  int64_t v50; // x6
  System_String_o *v51; // x7
  MapControl_QuestInfo_o *QuestInfo; // x0
  __int64 v53; // x22
  int32_t v54; // w2
  int32_t v55; // w3
  System_String_o *v56; // x4
  int32_t v57; // w5
  int64_t v58; // x6
  System_String_o *v59; // x7
  const MethodInfo *v60; // x2
  int v61; // w21
  __int64 v62; // x8
  NetworkManager_ResultCallbackFunc_o *v63; // x21
  Il2CppObject *Request_object; // x20
  int32_t v65; // w21
  __int64 v66; // x21
  int32_t v67; // w20
  int32_t v68; // w22
  __int64 v69; // x8
  __int64 v70; // x23
  float v71; // s8
  TerminalSceneComponent_c *v72; // x0
  TerminalSceneComponent_o *mInstance; // x22
  __int64 v74; // x20
  int32_t v75; // w2
  int32_t v76; // w3
  System_String_o *v77; // x4
  int32_t v78; // w5
  int64_t v79; // x6
  System_String_o *v80; // x7
  __int64 v81; // x23
  __int64 v82; // x8
  __int64 v83; // x22
  int32_t v84; // w21
  bool v85; // w24
  bool v86; // w25
  __int64 v87; // x8
  __int64 v88; // x22
  _BOOL4 v89; // w23
  __int64 v90; // x20
  int32_t v91; // w2
  int32_t v92; // w3
  System_String_o *v93; // x4
  int32_t v94; // w5
  int64_t v95; // x6
  System_String_o *v96; // x7
  __int64 v97; // x8
  QuestAfterAction_o *v98; // x22
  Il2CppObject *v99; // x0
  int32_t v100; // w2
  int32_t v101; // w3
  System_String_o *v102; // x4
  int32_t v103; // w5
  int64_t v104; // x6
  System_String_o *v105; // x7
  UnityEngine_Object_o *v106; // x19
  SrcSpotBasePrefab_o *v107; // x19
  System_Action_o *v108; // x21
  int32_t v109; // w1
  __int64 v110; // x20
  int32_t v111; // w2
  int32_t v112; // w3
  System_String_o *v113; // x4
  int32_t v114; // w5
  int64_t v115; // x6
  System_String_o *v116; // x7
  __int64 v117; // x8
  QuestAfterAction_o *v118; // x22
  Il2CppObject *v119; // x0
  int32_t v120; // w2
  int32_t v121; // w3
  System_String_o *v122; // x4
  int32_t v123; // w5
  int64_t v124; // x6
  System_String_o *v125; // x7
  UnityEngine_Object_o *v126; // x19
  ModelLineComponent_o *v127; // x19
  System_Action_o *v128; // x21
  const MethodInfo *v129; // x3
  int32_t v130; // w1
  System_String_o *v131; // x19
  System_String_o *v132; // x20
  System_String_o *v133; // x20
  Il2CppObject *Instance; // x21
  System_Action_o *v135; // x23
  float v136; // s0
  __int64 v137; // x19
  int32_t v138; // w2
  int32_t v139; // w3
  System_String_o *v140; // x4
  int32_t v141; // w5
  int64_t v142; // x6
  System_String_o *v143; // x7
  __int64 v144; // x22
  int32_t v145; // w20
  int32_t v146; // w21
  BgmManager_c *v147; // x0
  float v148; // s0
  float masterVolume; // s1
  float v150; // s0
  __int64 v151; // x8
  ScrTerminalListTop_o *v152; // x22
  float v153; // s8
  float v154; // s9
  __int64 v155; // x8
  ScrTerminalListTop_o *v156; // x22
  System_Action_o *v157; // x23
  __int64 v158; // x22
  int v159; // w23
  float v160; // s8
  int32_t v161; // w21
  float DEFAULT_FADE_TIME; // s8
  AvalonSceneManager_c *v163; // x0
  TerminalSceneComponent_c *v164; // x0
  TerminalSceneComponent_o *v165; // x19
  System_Action_o *v166; // x20
  TerminalSceneComponent_o *v167; // x0
  float v168; // s0
  System_Action_o *v169; // x1
  System_String_o *param; // x21
  _QWORD *v171; // x0
  System_Reflection_MethodBase_o *v172; // x0
  __int64 v173; // x23
  int32_t v174; // w21
  int32_t v175; // w22
  int32_t v176; // w23
  __int64 v177; // x8
  PlayMakerFSM_o *v178; // x20
  System_String_o *ActiveStateName; // x0
  __int64 v180; // x8
  __int64 v181; // x8
  QuestBoardListViewManager_o *v182; // x21
  System_Action_o *v183; // x22
  Il2CppObject *v184; // x23
  struct QuestAfterAction_StateMain___c_StaticFields *static_fields; // x0
  int32_t v186; // w2
  int32_t v187; // w3
  System_String_o *v188; // x4
  int32_t v189; // w5
  int64_t v190; // x6
  System_String_o *v191; // x7
  TerminalSceneComponent_c *v192; // x0
  QuestAfterAction_o *v193; // x8
  __int64 v194; // x8
  __int64 v195; // x8
  __int64 v196; // x8
  System_String_o *v197; // x20
  System_String_o *v198; // x21
  SeManager_c *v199; // x0
  float DEFAULT_VOLUME; // s8
  __int64 v201; // x21
  int32_t v202; // w0
  int32_t v203; // w20
  float v204; // s8
  int32_t v205; // w19
  __int64 v206; // x8
  __int64 v207; // x8
  __int64 v208; // x23
  float v209; // s0
  int32_t v210; // w22
  __int64 v211; // x8
  ScrTerminalMap_o *v212; // x24
  float v213; // s0
  float v214; // s9
  float v215; // s0
  const MethodInfo_393D900 *v216; // x2
  int v217; // w8
  float v218; // s10
  float v219; // s9
  float v220; // s11
  MapCamera_o *mMapCamera; // x20
  Il2CppObject *MapComponent_object; // x22
  Il2CppObject *v223; // x20
  __int64 v224; // x8
  ScrTerminalMap_o *v225; // x23
  __int64 v226; // x8
  ScrTerminalMap_o *v227; // x20
  UnityEngine_GameObject_o *gameObject; // x22
  System_Action_o *v229; // x23
  TerminalPramsManager_c *v230; // x0
  __int64 v231; // x8
  const MethodInfo *v232; // x2
  TerminalPramsManager_c *v233; // x0
  __int64 v234; // x21
  const MethodInfo *v235; // x3
  QuestAfterAction_o *v236; // x8
  QuestAfterAction_TitleInfoControlCallback_o *TitleInfoCtrlCallback_k__BackingField; // x22
  System_Action_o *v238; // x20
  const MethodInfo *v239; // x3
  TerminalPramsManager_c *v240; // x0
  TerminalPramsManager_c *v241; // x0
  BalanceConfig_c *v242; // x0
  __int64 v243; // x8
  __int64 v244; // x21
  int32_t v245; // w20
  __int64 v246; // x8
  __int64 v247; // x21
  int32_t v248; // w0
  int32_t v249; // w20
  System_String_o *v250; // x21
  int v251; // w23
  __int64 v252; // x21
  float v253; // s0
  float v254; // s8
  float v255; // s0
  MapCamera_o *v256; // x19
  float v257; // s0
  float v258; // s9
  int32_t v259; // w20
  __int64 v260; // x23
  int32_t v261; // w2
  int32_t v262; // w3
  System_String_o *v263; // x4
  int32_t v264; // w5
  int64_t v265; // x6
  System_String_o *v266; // x7
  System_String_array *v267; // x20
  int32_t v268; // w1
  int v269; // w8
  System_String_o *v270; // x19
  System_String_o *v271; // x20
  System_String_o *v272; // x19
  System_String_o *v273; // x20
  System_String_o *v274; // x20
  Il2CppObject *v275; // x21
  System_Action_o *v276; // x23
  __int64 v277; // x23
  int32_t v278; // w2
  int32_t v279; // w3
  System_String_o *v280; // x4
  int32_t v281; // w5
  int64_t v282; // x6
  System_String_o *v283; // x7
  System_String_array *v284; // x20
  int32_t v285; // w1
  int v286; // w8
  System_String_o *v287; // x19
  System_String_o *v288; // x20
  System_String_o *v289; // x20
  Il2CppObject *v290; // x21
  System_Action_o *v291; // x23
  __int64 v292; // x23
  float v293; // s0
  float v294; // s9
  float v295; // s0
  float v296; // s10
  float v297; // s0
  float v298; // s11
  float v299; // s0
  float v300; // s8
  int32_t v301; // w19
  __int64 v302; // x8
  float v303; // s8
  const MethodInfo_393D900 *v304; // x2
  float v305; // s10
  float v306; // s9
  float v307; // s11
  MapCamera_o *v308; // x20
  System_Action_o *v309; // x21
  MapCamera_o *v310; // x0
  float v311; // s0 OVERLAPPED
  float v312; // s1
  float v313; // s2
  float v314; // s3
  int32_t v315; // w1
  __int64 v316; // x20
  int32_t v317; // w2
  int32_t v318; // w3
  System_String_o *v319; // x4
  int32_t v320; // w5
  int64_t v321; // x6
  System_String_o *v322; // x7
  __int64 v323; // x8
  QuestAfterAction_o *v324; // x22
  Il2CppObject *v325; // x0
  int32_t v326; // w2
  int32_t v327; // w3
  System_String_o *v328; // x4
  int32_t v329; // w5
  int64_t v330; // x6
  System_String_o *v331; // x7
  UnityEngine_Object_o *v332; // x19
  __int64 v333; // x23
  int32_t v334; // w2
  int32_t v335; // w3
  System_String_o *v336; // x4
  int32_t v337; // w5
  int64_t v338; // x6
  System_String_o *v339; // x7
  __int64 v340; // x20
  QuestAfterAction_o *v341; // x22
  Il2CppObject *v342; // x0
  __int64 *v343; // x19
  int32_t v344; // w2
  int32_t v345; // w3
  System_String_o *v346; // x4
  int32_t v347; // w5
  int64_t v348; // x6
  System_String_o *v349; // x7
  UnityEngine_Object_o *v350; // x21
  SrcSpotBasePrefab_o *v351; // x21
  System_Action_o *v352; // x22
  int32_t v353; // w2
  int32_t v354; // w3
  System_String_o *v355; // x4
  int32_t v356; // w5
  int64_t v357; // x6
  System_String_o *v358; // x7
  __int64 v359; // x1
  GrandQuestFolderBoardItem_o *v360; // x0
  __int64 v361; // x22
  QuestAfterAction_o *v362; // x21
  Il2CppObject *v363; // x21
  System_Action_o *v364; // x22
  QuestAfterAction_o *v365; // x22
  UnityEngine_Object_o *v366; // x21
  intptr_t m_CachedPtr; // x8
  SrcSpotBasePrefab_o *v368; // x0
  int32_t v369; // w1
  QuestAfterAction_o *v370; // x22
  UnityEngine_Object_o *v371; // x21
  intptr_t v372; // x8
  QuestAfterAction_o *v373; // x22
  intptr_t v374; // x8
  __int64 v375; // x21
  QuestAfterAction_o *v376; // x22
  Il2CppObject *v377; // x22
  __int64 v378; // x23
  int32_t v379; // w2
  int32_t v380; // w3
  System_String_o *v381; // x4
  int32_t v382; // w5
  int64_t v383; // x6
  System_String_o *v384; // x7
  __int64 v385; // x20
  __int64 v386; // x8
  __int64 v387; // x21
  int32_t v388; // w22
  bool v389; // w25
  bool v390; // w27
  __int64 v391; // x8
  __int64 v392; // x22
  int32_t v393; // w21
  bool v394; // w22
  __int64 v395; // x8
  __int64 v396; // x22
  int32_t v397; // w21
  bool v398; // w22
  __int64 v399; // x21
  float v400; // s0
  QuestAfterAction_o *v401; // x20
  float v402; // s8
  Il2CppObject *v403; // x20
  _BOOL4 v404; // w23
  __int64 v405; // x20
  int32_t v406; // w2
  int32_t v407; // w3
  System_String_o *v408; // x4
  int32_t v409; // w5
  int64_t v410; // x6
  System_String_o *v411; // x7
  __int64 v412; // x8
  QuestAfterAction_o *v413; // x22
  Il2CppObject *v414; // x0
  int32_t v415; // w2
  int32_t v416; // w3
  System_String_o *v417; // x4
  int32_t v418; // w5
  int64_t v419; // x6
  System_String_o *v420; // x7
  UnityEngine_Object_o *v421; // x19
  MapGimmickComponent_o *v422; // x19
  System_Action_o *v423; // x21
  const MethodInfo *v424; // x3
  TerminalSceneComponent_o *v425; // x19
  __int64 v426; // x20
  int32_t v427; // w2
  int32_t v428; // w3
  System_String_o *v429; // x4
  int32_t v430; // w5
  int64_t v431; // x6
  System_String_o *v432; // x7
  System_String_array *v433; // x0
  __int64 *v434; // x21
  int32_t v435; // w2
  int32_t v436; // w3
  System_String_o *v437; // x4
  int32_t v438; // w5
  int64_t v439; // x6
  System_String_o *v440; // x7
  __int64 v441; // x8
  __int64 v442; // x9
  QuestAfterAction_o *v443; // x21
  Il2CppObject *v444; // x0
  int32_t v445; // w2
  int32_t v446; // w3
  System_String_o *v447; // x4
  int32_t v448; // w5
  int64_t v449; // x6
  System_String_o *v450; // x7
  UnityEngine_Object_o *v451; // x19
  MapGimmickComponent_o *v452; // x19
  System_Action_o *v453; // x0
  intptr_t *v454; // x8
  System_Action_o *v455; // x21
  __int64 v456; // x21
  QuestAfterAction_o *v457; // x20
  Il2CppObject *v458; // x20
  UIWidget_o *v459; // x20
  int32_t v460; // w2
  int32_t v461; // w3
  System_String_o *v462; // x4
  int32_t v463; // w5
  int64_t v464; // x6
  System_String_o *v465; // x7
  __int64 v466; // x8
  QuestAfterAction_o *v467; // x22
  Il2CppObject *v468; // x0
  __int64 v469; // x19
  int32_t v470; // w2
  int32_t v471; // w3
  System_String_o *v472; // x4
  int32_t v473; // w5
  int64_t v474; // x6
  System_String_o *v475; // x7
  UnityEngine_Object_o *v476; // x21
  bool v477; // w0
  bool v478; // w22
  const MethodInfo *v479; // x3
  int32_t v480; // w1
  __int64 v481; // x8
  __int64 v482; // x22
  int32_t v483; // w21
  bool v484; // w22
  __int64 v485; // x21
  QuestAfterAction_o *v486; // x22
  Il2CppObject *v487; // x22
  QuestAfterAction_o *v488; // x23
  const MethodInfo *v489; // x4
  int32_t v490; // w2
  QuestAfterAction_o *v491; // x0
  int32_t v492; // w1
  QuestAfterAction_o *v493; // x22
  QuestAfterAction_o *v494; // x23
  const MethodInfo *v495; // x4
  UnityEngine_Object_o *MapGameObject; // x23
  float v497; // s9
  float v498; // s8
  float v499; // s10
  QuestAfterAction_o *v500; // x22
  QuestAfterAction_o *v501; // x23
  UnityEngine_Object_o *v502; // x23
  __int64 v503; // x8
  float v504; // s0
  float v505; // s11
  int32_t v506; // w23
  const MethodInfo *v507; // x3
  int32_t v508; // w21
  TerminalPramsManager_c *v509; // x0
  QuestAfterAction_o *v510; // x20
  Il2CppObject *v511; // x20
  TerminalPramsManager_c *v512; // x0
  __int64 v513; // x8
  __int64 v514; // x8
  __int64 v515; // x20
  int32_t v516; // w2
  int32_t v517; // w3
  System_String_o *v518; // x4
  int32_t v519; // w5
  int64_t v520; // x6
  System_String_o *v521; // x7
  __int64 v522; // x8
  QuestAfterAction_o *v523; // x22
  Il2CppObject *v524; // x0
  int32_t v525; // w2
  int32_t v526; // w3
  System_String_o *v527; // x4
  int32_t v528; // w5
  int64_t v529; // x6
  System_String_o *v530; // x7
  UnityEngine_Object_o *v531; // x19
  __int64 v532; // x20
  int32_t v533; // w2
  int32_t v534; // w3
  System_String_o *v535; // x4
  int32_t v536; // w5
  int64_t v537; // x6
  System_String_o *v538; // x7
  __int64 v539; // x8
  QuestAfterAction_o *v540; // x22
  Il2CppObject *v541; // x0
  int32_t v542; // w2
  int32_t v543; // w3
  System_String_o *v544; // x4
  int32_t v545; // w5
  int64_t v546; // x6
  System_String_o *v547; // x7
  UnityEngine_Object_o *v548; // x19
  _BOOL4 IsMapModel; // w23
  QuestAfterAction_o *v550; // x22
  UnityEngine_Object_o *v551; // x21
  const MethodInfo *v552; // x2
  _DWORD *v553; // x8
  _BOOL4 v554; // w23
  QuestAfterAction_o *v555; // x22
  UnityEngine_Object_o *v556; // x21
  const MethodInfo *v557; // x2
  const MethodInfo *v558; // x2
  _DWORD *v559; // x8
  _BOOL4 v560; // w23
  QuestAfterAction_o *v561; // x22
  UnityEngine_Object_o *v562; // x21
  const MethodInfo *v563; // x2
  const MethodInfo *v564; // x2
  float v565; // s0
  float v566; // s0
  float v567; // s0
  QuestAfterAction_o *v568; // x24
  const MethodInfo *v569; // x4
  UnityEngine_Object_o *v570; // x24
  float v571; // s11
  float v572; // s9
  float v573; // s10
  __int64 v574; // x8
  const MethodInfo_393D900 *v575; // x2
  System_String_o *v576; // x24
  QuestAfterAction_o *v577; // x24
  const MethodInfo *v578; // x4
  UnityEngine_Object_o *v579; // x24
  float v580; // s9
  float v581; // s10
  float v582; // s11
  __int64 v583; // x8
  QuestAfterAction_o *v584; // x24
  const MethodInfo *v585; // x4
  UnityEngine_Object_o *v586; // x24
  __int64 v587; // x8
  int v588; // w8
  QuestAfterAction_o *v589; // x8
  MapCamera_o *v590; // x20
  MapCamera_o *v591; // x0
  float v592; // s0 OVERLAPPED
  float v593; // s1
  float v594; // s2
  int32_t v595; // w1
  Il2CppObject *v596; // x3
  SceneJumpInfo_o *v597; // x21
  TerminalPramsManager_c *v598; // x0
  TerminalPramsManager_c *v599; // x0
  Il2CppObject *v600; // x21
  System_Action_o *v601; // x23
  Il2CppObject *v602; // x21
  const MethodInfo *v603; // x3
  Il2CppObject *v604; // x21
  const MethodInfo *v605; // x3
  Il2CppClass *v606; // x8
  Il2CppObject *v607; // x21
  float AnimTime; // s0
  const MethodInfo *v609; // x3
  Il2CppClass *v610; // x8
  QuestAfterAction_StateMain_c *v611; // x8
  int v612; // w0
  Il2CppObject *v613; // x0
  int32_t v614; // w2
  int32_t v615; // w3
  System_String_o *v616; // x4
  int32_t v617; // w5
  int64_t v618; // x6
  System_String_o *v619; // x7
  UnityEngine_Object_o *v620; // x22
  MapGimmickComponent_o *v621; // x21
  System_Action_o *v622; // x0
  System_Action_o *v623; // x22
  MapGimmickComponent_o *v624; // x0
  System_Action_o *v625; // x2
  Il2CppObject *v626; // x0
  MapGimmickComponent_o **v627; // x22
  int32_t v628; // w2
  int32_t v629; // w3
  System_String_o *v630; // x4
  int32_t v631; // w5
  int64_t v632; // x6
  System_String_o *v633; // x7
  UnityEngine_Object_o *v634; // x24
  MapGimmickComponent_o *v635; // x24
  const MethodInfo *v636; // x3
  System_Action_o *v637; // x0
  System_Action_o *v638; // x21
  __int64 v639; // x20
  int32_t v640; // w2
  int32_t v641; // w3
  System_String_o *v642; // x4
  int32_t v643; // w5
  int64_t v644; // x6
  System_String_o *v645; // x7
  __int64 v646; // x8
  QuestAfterAction_o *v647; // x22
  Il2CppObject *v648; // x0
  int32_t v649; // w2
  int32_t v650; // w3
  System_String_o *v651; // x4
  int32_t v652; // w5
  int64_t v653; // x6
  System_String_o *v654; // x7
  UnityEngine_Object_o *v655; // x19
  srcLineSprite_o *v656; // x19
  System_Action_o *v657; // x21
  int32_t v658; // w1
  __int64 v659; // x20
  int32_t v660; // w2
  int32_t v661; // w3
  System_String_o *v662; // x4
  int32_t v663; // w5
  int64_t v664; // x6
  System_String_o *v665; // x7
  __int64 v666; // x8
  QuestAfterAction_o *v667; // x22
  Il2CppObject *v668; // x0
  int32_t v669; // w2
  int32_t v670; // w3
  System_String_o *v671; // x4
  int32_t v672; // w5
  int64_t v673; // x6
  System_String_o *v674; // x7
  UnityEngine_Object_o *v675; // x19
  __int64 v676; // x20
  int32_t v677; // w2
  int32_t v678; // w3
  System_String_o *v679; // x4
  int32_t v680; // w5
  int64_t v681; // x6
  System_String_o *v682; // x7
  __int64 v683; // x8
  QuestAfterAction_o *v684; // x22
  Il2CppObject *v685; // x0
  int32_t v686; // w2
  int32_t v687; // w3
  System_String_o *v688; // x4
  int32_t v689; // w5
  int64_t v690; // x6
  System_String_o *v691; // x7
  UnityEngine_Object_o *v692; // x19
  UnityEngine_Object_o *v693; // x21
  UnityEngine_Object_o *v694; // x21
  int v695; // w9
  UnityEngine_Object_o *v696; // x21
  float v697; // s11
  float v698; // s10
  float v699; // s9
  System_String_o *v700; // x24
  __int64 v701; // x8
  ScrTerminalMap_o *v702; // x21
  System_Action_o *v703; // x23
  int32_t v704; // w0
  int32_t v705; // w23
  SceneJumpInfo_o *v706; // x22
  System_String_o *monitor; // x20
  MapCamera_o *v708; // x20
  System_Action_o *v709; // x20
  const MethodInfo *v710; // x3
  MapGimmickComponent_o *v711; // x0
  float v712; // s0 OVERLAPPED
  float v713; // s1
  float v714; // s2
  float v715; // s3
  int32_t v716; // w1
  System_Action_o *v717; // x2
  const MethodInfo *v718; // x3
  __int64 v719; // x8
  const MethodInfo *v720; // x3
  int v721; // w8
  MapCamera_o *v722; // x20
  float v723; // s0 OVERLAPPED
  float v724; // s1
  System_Nullable_Vector3__o v725; // x0
  float v726; // s2
  float v727; // s0 OVERLAPPED
  float v728; // s1
  System_Nullable_Vector3__o v729; // x0
  float v730; // s2
  QuestAfterAction_o *v731; // x8
  QuestAfterAction_o *v732; // x8
  __int64 v733; // x8
  ScrTerminalMap_o *v734; // x22
  float v735; // s0
  float v736; // s9
  float v737; // s0
  float x; // s10
  float y; // s9
  float z; // s11
  float v741; // s8
  const MethodInfo *v742; // x3
  int32_t v743; // w21
  System_Action_o *v744; // x22
  System_String_o *v745; // x0
  float v746; // s0
  System_Nullable_float__o p_size; // x0
  System_Nullable_float__o v748; // x3
  System_String_o *v749; // x0
  float v750; // s0
  System_Nullable_float__o v751; // x0
  System_Action_o *v752; // x21
  System_Nullable_Vector3__o v753; // x1 OVERLAPPED
  System_Nullable_float__o v754; // x3
  MapCamera_o *v755; // x0
  float v756; // s0
  int32_t v757; // w4
  MapCamera_o *v758; // x20
  float v759; // s0
  System_Nullable_float__o v760; // x0
  int32_t onClickOkSeKind; // [xsp+10h] [xbp-E0h]
  System_Nullable_float__o size; // [xsp+40h] [xbp-B0h] BYREF
  System_Nullable_Vector3__o v763; // [xsp+48h] [xbp-A8h] BYREF
  Il2CppObject *value; // [xsp+58h] [xbp-98h] BYREF
  Il2CppObject *entity; // [xsp+60h] [xbp-90h] BYREF
  UnityEngine_Color_o color; // [xsp+68h] [xbp-88h] BYREF
  bool isQuickUpdate; // [xsp+7Ch] [xbp-74h] BYREF
  System_Nullable_Vector3__o v768; // 0:x0.16
  System_Nullable_Vector3__o v769; // 0:x0.16
  System_Nullable_Vector3__o v770; // 0:x0.16
  UnityEngine_Vector3_o v771; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v772; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v773; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v775; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v776; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v777; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v778; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v779; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v780; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v781; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o Position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v783; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v784; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v785; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v786; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v787; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v788; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v789; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v790; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v791; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4CC3F49 & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&AvalonSceneManager_TypeInfo);
    sub_1C713B0(&BalanceConfig_TypeInfo);
    sub_1C713B0(&BgmManager_TypeInfo);
    sub_1C713B0(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1C713B0(&Method_DataManager_GetMaster_QuestMaster___);
    sub_1C713B0(&DataManager_TypeInfo);
    sub_1C713B0(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    sub_1C713B0(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__TryGetValue__);
    sub_1C713B0(&FSUtility_TypeInfo);
    sub_1C713B0(&Method_UnityEngine_GameObject_GetComponentInChildren_UISprite___);
    sub_1C713B0(&Method_UnityEngine_GameObject_GetComponent_ModelLineComponent___);
    sub_1C713B0(&LocalizationManager_TypeInfo);
    sub_1C713B0(&Method_NetworkManager_getRequest_BattleSetupScenarioRequest___);
    sub_1C713B0(&NetworkManager_TypeInfo);
    sub_1C713B0(&Method_System_Nullable_Vector3___ctor__);
    sub_1C713B0(&Method_System_Nullable_float___ctor__);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
    sub_1C713B0(&Method_QuestAfterAction_GetMapComponent_ModelLineComponent___);
    sub_1C713B0(&Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
    sub_1C713B0(&Method_QuestAfterAction_GetMapComponent_srcLineSprite___);
    sub_1C713B0(&QuestAfterAction_TypeInfo);
    sub_1C713B0(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1C713B0(&SceneJumpInfo_TypeInfo);
    sub_1C713B0(&SeManager_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C713B0(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    sub_1C713B0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C713B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C713B0(&Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
    sub_1C713B0(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_1C713B0(&SoundManager_TypeInfo);
    sub_1C713B0(&Method_QuestAfterAction_StateMain_UpdateAnim__);
    sub_1C713B0(&string___TypeInfo);
    sub_1C713B0(&TerminalPramsManager_TypeInfo);
    sub_1C713B0(&TerminalSceneComponent_TypeInfo);
    sub_1C713B0(&QuestAfterAction_TitleInfoControlParam_TypeInfo);
    sub_1C713B0(&Method_QuestAfterAction_StateMain___c__UpdateAnim_b__16_22__);
    sub_1C713B0(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__10__);
    sub_1C713B0(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__11__);
    sub_1C713B0(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__12__);
    sub_1C713B0(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__23__);
    sub_1C713B0(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__29__);
    sub_1C713B0(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__30__);
    sub_1C713B0(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__31__);
    sub_1C713B0(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__32__);
    sub_1C713B0(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__33__);
    sub_1C713B0(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__9__);
    sub_1C713B0(&QuestAfterAction_StateMain___c__DisplayClass16_0_TypeInfo);
    sub_1C713B0(&Method_QuestAfterAction_StateMain___c__DisplayClass16_10__UpdateAnim_b__13__);
    sub_1C713B0(&Method_QuestAfterAction_StateMain___c__DisplayClass16_10__UpdateAnim_b__14__);
    sub_1C713B0(&QuestAfterAction_StateMain___c__DisplayClass16_10_TypeInfo);
    sub_1C713B0(&Method_QuestAfterAction_StateMain___c__DisplayClass16_11__UpdateAnim_b__15__);
    sub_1C713B0(&Method_QuestAfterAction_StateMain___c__DisplayClass16_11__UpdateAnim_b__16__);
    sub_1C713B0(&QuestAfterAction_StateMain___c__DisplayClass16_11_TypeInfo);
    sub_1C713B0(&Method_QuestAfterAction_StateMain___c__DisplayClass16_12__UpdateAnim_b__17__);
    sub_1C713B0(&QuestAfterAction_StateMain___c__DisplayClass16_12_TypeInfo);
    sub_1C713B0(&Method_QuestAfterAction_StateMain___c__DisplayClass16_13__UpdateAnim_b__18__);
    sub_1C713B0(&QuestAfterAction_StateMain___c__DisplayClass16_13_TypeInfo);
    sub_1C713B0(&Method_QuestAfterAction_StateMain___c__DisplayClass16_15__UpdateAnim_b__20__);
    sub_1C713B0(&Method_QuestAfterAction_StateMain___c__DisplayClass16_15__UpdateAnim_b__21__);
    sub_1C713B0(&QuestAfterAction_StateMain___c__DisplayClass16_15_TypeInfo);
    sub_1C713B0(&Method_QuestAfterAction_StateMain___c__DisplayClass16_16__UpdateAnim_b__24__);
    sub_1C713B0(&QuestAfterAction_StateMain___c__DisplayClass16_16_TypeInfo);
    sub_1C713B0(&Method_QuestAfterAction_StateMain___c__DisplayClass16_17__UpdateAnim_b__34__);
    sub_1C713B0(&QuestAfterAction_StateMain___c__DisplayClass16_17_TypeInfo);
    sub_1C713B0(&Method_QuestAfterAction_StateMain___c__DisplayClass16_1__UpdateAnim_b__0__);
    sub_1C713B0(&QuestAfterAction_StateMain___c__DisplayClass16_1_TypeInfo);
    sub_1C713B0(&Method_QuestAfterAction_StateMain___c__DisplayClass16_2__UpdateAnim_b__1__);
    sub_1C713B0(&QuestAfterAction_StateMain___c__DisplayClass16_2_TypeInfo);
    sub_1C713B0(&Method_QuestAfterAction_StateMain___c__DisplayClass16_3__UpdateAnim_b__2__);
    sub_1C713B0(&QuestAfterAction_StateMain___c__DisplayClass16_3_TypeInfo);
    sub_1C713B0(&Method_QuestAfterAction_StateMain___c__DisplayClass16_4__UpdateAnim_b__3__);
    sub_1C713B0(&QuestAfterAction_StateMain___c__DisplayClass16_4_TypeInfo);
    sub_1C713B0(&Method_QuestAfterAction_StateMain___c__DisplayClass16_5__UpdateAnim_b__4__);
    sub_1C713B0(&QuestAfterAction_StateMain___c__DisplayClass16_5_TypeInfo);
    sub_1C713B0(&Method_QuestAfterAction_StateMain___c__DisplayClass16_6__UpdateAnim_b__5__);
    sub_1C713B0(&QuestAfterAction_StateMain___c__DisplayClass16_6_TypeInfo);
    sub_1C713B0(&Method_QuestAfterAction_StateMain___c__DisplayClass16_7__UpdateAnim_b__6__);
    sub_1C713B0(&QuestAfterAction_StateMain___c__DisplayClass16_7_TypeInfo);
    sub_1C713B0(&Method_QuestAfterAction_StateMain___c__DisplayClass16_8__UpdateAnim_b__7__);
    sub_1C713B0(&QuestAfterAction_StateMain___c__DisplayClass16_8_TypeInfo);
    sub_1C713B0(&Method_QuestAfterAction_StateMain___c__DisplayClass16_9__UpdateAnim_b__8__);
    sub_1C713B0(&QuestAfterAction_StateMain___c__DisplayClass16_9_TypeInfo);
    sub_1C713B0(&QuestAfterAction_StateMain___c_TypeInfo);
    sub_1C713B0(&StringLiteral_87/*"\r\n"*/);
    sub_1C713B0(&StringLiteral_1374/*"30101"*/);
    sub_1C713B0(&StringLiteral_10825/*"QUEST_AFTER_ACTION_MESSAGE_"*/);
    sub_1C713B0(&StringLiteral_1375/*"30102"*/);
    sub_1C713B0(&StringLiteral_1300/*"10703"*/);
    sub_1C713B0(&StringLiteral_808/*","*/);
    sub_1C713B0(&StringLiteral_3288/*"CAPTER WAIT"*/);
    sub_1C713B0(&StringLiteral_1/*""*/);
    sub_1C713B0(&StringLiteral_19939/*"gevINFOBAR_BACK"*/);
    sub_1C713B0(&StringLiteral_1115/*"0"*/);
    byte_4CC3F49 = 1;
  }
  isQuickUpdate = 0;
  *(_QWORD *)&color.fields.r = 0;
  *(_QWORD *)&color.fields.b = 0;
  value = 0;
  entity = 0;
  v5 = sub_1C715FC(QuestAfterAction_StateMain___c__DisplayClass16_0_TypeInfo);
  QuestAfterAction_StateMain___c__DisplayClass16_0___ctor((QuestAfterAction_StateMain___c__DisplayClass16_0_o *)v5, 0);
  if ( !v5 )
    goto LABEL_1114;
  *(_QWORD *)(v5 + 16) = this;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = that;
  v14 = (QuestAfterAction_o **)(v5 + 24);
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v5 + 24), (int32_t)that, v15, v16, v17, v18, v19, v20);
  if ( this->fields.IsAnimDoing )
    return;
  updated = ((__int64 (__fastcall *)(QuestAfterAction_StateMain_o *, const MethodInfo *))this->klass->vtable._10_get_CommandBuf.methodPtr)(
              this,
              this->klass->vtable._10_get_CommandBuf.method);
  if ( !updated )
    return;
  if ( !*v14 )
    goto LABEL_1114;
  if ( (*v14)->fields.isSkippedNext )
  {
    updated = ((__int64 (__fastcall *)(QuestAfterAction_StateMain_o *, const MethodInfo *))this->klass->vtable._14_EndAnim.methodPtr)(
                this,
                this->klass->vtable._14_EndAnim.method);
    if ( *v14 )
    {
      (*v14)->fields.isSkippedNext = 0;
      return;
    }
LABEL_1114:
    sub_1C71608(updated, v7);
  }
  klass = this->klass;
  this->fields.IsAnimDoing = 1;
  v22 = ((__int64 (__fastcall *)(QuestAfterAction_StateMain_o *, const MethodInfo *))klass->vtable._10_get_CommandBuf.methodPtr)(
          this,
          klass->vtable._10_get_CommandBuf.method);
  updated = ((__int64 (__fastcall *)(QuestAfterAction_StateMain_o *, const MethodInfo *))this->klass->vtable._11_get_CommandIndex.methodPtr)(
              this,
              this->klass->vtable._11_get_CommandIndex.method);
  if ( !v22 )
    goto LABEL_1114;
  if ( (unsigned int)updated >= *(_DWORD *)(v22 + 24) )
    goto LABEL_1115;
  v23 = *(QuestAfterAction_Command_o **)(v22 + 8LL * (int)updated + 32);
  updated = ((__int64 (__fastcall *)(QuestAfterAction_StateMain_o *, QuestAfterAction_Command_o *, const MethodInfo *))this->klass->vtable._9_IsUsableCommand.methodPtr)(
              this,
              v23,
              this->klass->vtable._9_IsUsableCommand.method);
  if ( (updated & 1) == 0 )
    goto LABEL_1009;
  v24 = *v14;
  if ( !*v14 )
    goto LABEL_1114;
  BlankEarthQuestAfterAction_k__BackingField = v24->fields._BlankEarthQuestAfterAction_k__BackingField;
  v26 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
  System_Action___ctor(v26, (Il2CppObject *)this, (intptr_t)this->klass->vtable._14_EndAnim.method, 0);
  if ( !BlankEarthQuestAfterAction_k__BackingField )
    goto LABEL_1114;
  updated = BlankEarthQuestAfterAction__UpdateAnim(
              BlankEarthQuestAfterAction_k__BackingField,
              v24,
              v23,
              v26,
              &isQuickUpdate,
              0);
  if ( (updated & 1) == 0 )
  {
    if ( !v23 )
      goto LABEL_1114;
    id = v23->fields.id;
    if ( id > 530 )
    {
      if ( id > 800 )
      {
        if ( id <= 851 )
        {
          switch ( id )
          {
            case 801:
              param = v23->fields.param;
              v171 = Method_QuestAfterAction_StateMain_UpdateAnim__;
              if ( (*((_BYTE *)Method_QuestAfterAction_StateMain_UpdateAnim__ + 83) & 2) != 0 )
                v171 = (_QWORD *)sub_1C713C8(Method_QuestAfterAction_StateMain_UpdateAnim__);
              v172 = (System_Reflection_MethodBase_o *)sub_1C71394(v171, v171[4]);
              OverwriteAssetSoundName__PlaySe(v172, param, 0, 0);
              goto LABEL_18;
            case 850:
              if ( !SoundManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
              SoundManager__stopBgm(0);
              if ( !*v14 )
                goto LABEL_1114;
              (*v14)->fields.isRequestedStopBgm = 1;
              goto LABEL_18;
            case 851:
              if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
              if ( !byte_4CC12CE )
              {
                sub_1C713B0(&TerminalSceneComponent_TypeInfo);
                byte_4CC12CE = 1;
              }
              v72 = TerminalSceneComponent_TypeInfo;
              if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
                v72 = TerminalSceneComponent_TypeInfo;
              }
              mInstance = v72->static_fields->mInstance;
              updated = (__int64)QuestAfterAction_Command__GetBgmName(v23, v7);
              if ( !mInstance )
                goto LABEL_1114;
              TerminalSceneComponent__playBgm(mInstance, (System_String_o *)updated, 0, 0);
              if ( !*v14 )
                goto LABEL_1114;
              (*v14)->fields.isRequestedStopBgm = 0;
              goto LABEL_18;
          }
          return;
        }
        switch ( id )
        {
          case 900:
            v136 = (float)System_Int32__Parse(v23->fields.param, 0) / 1000.0;
            if ( v136 <= 0.0 )
              goto LABEL_18;
            this->fields.waitTime = v136;
            this->fields.waitStartTime = UnityEngine_Time__get_realtimeSinceStartup(0);
            return;
          case 1100:
            v137 = sub_1C715FC(QuestAfterAction_StateMain___c__DisplayClass16_17_TypeInfo);
            QuestAfterAction_StateMain___c__DisplayClass16_17___ctor(
              (QuestAfterAction_StateMain___c__DisplayClass16_17_o *)v137,
              0);
            if ( !v137 )
              goto LABEL_1114;
            *(_QWORD *)(v137 + 24) = v5;
            sub_1C71354((GrandQuestFolderBoardItem_o *)(v137 + 24), v5, v138, v139, v140, v141, v142, v143);
            updated = (__int64)v23->fields.param;
            if ( !updated )
              goto LABEL_1114;
            updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0);
            if ( !updated )
              goto LABEL_1114;
            v144 = updated;
            if ( *(_DWORD *)(updated + 24) )
            {
              updated = System_Int32__Parse(*(System_String_o **)(updated + 32), 0);
              if ( *(_DWORD *)(v144 + 24) > 1u )
              {
                v145 = updated;
                v146 = System_Int32__Parse(*(System_String_o **)(v144 + 40), 0);
                if ( !BgmManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
                if ( !byte_4CC21CB )
                {
                  sub_1C713B0(&BgmManager_TypeInfo);
                  byte_4CC21CB = 1;
                }
                v147 = BgmManager_TypeInfo;
                if ( !BgmManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
                  v147 = BgmManager_TypeInfo;
                }
                v148 = -1.0;
                masterVolume = v147->static_fields->masterVolume;
                *(float *)(v137 + 20) = masterVolume;
                if ( *(int *)(v144 + 24) >= 3 )
                {
                  v148 = System_Single__Parse(*(System_String_o **)(v144 + 48), 0);
                  masterVolume = *(float *)(v137 + 20);
                }
                v150 = v148 * masterVolume;
                *(float *)(v137 + 16) = v150;
                if ( v150 > -1.0 )
                {
                  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
                  if ( !byte_4CC12CE )
                  {
                    sub_1C713B0(&TerminalSceneComponent_TypeInfo);
                    byte_4CC12CE = 1;
                  }
                  updated = (__int64)TerminalSceneComponent_TypeInfo;
                  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
                    updated = (__int64)TerminalSceneComponent_TypeInfo;
                  }
                  v151 = **(_QWORD **)(updated + 184);
                  if ( !v151 )
                    goto LABEL_1114;
                  v152 = *(ScrTerminalListTop_o **)(v151 + 256);
                  v153 = *(float *)(v137 + 16);
                  v154 = *(float *)(v137 + 20);
                  updated = (__int64)QuestAfterAction_TypeInfo;
                  if ( !QuestAfterAction_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(QuestAfterAction_TypeInfo);
                  if ( !v152 )
                    goto LABEL_1114;
                  ScrTerminalListTop__StartEasingBgmMasterVolume(
                    v152,
                    v154,
                    v153,
                    QuestAfterAction_TypeInfo->static_fields->EventAnimationAfterBgmResetTime,
                    2,
                    0,
                    0);
                }
                if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
                if ( !byte_4CC12CE )
                {
                  sub_1C713B0(&TerminalSceneComponent_TypeInfo);
                  byte_4CC12CE = 1;
                }
                updated = (__int64)TerminalSceneComponent_TypeInfo;
                if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
                  updated = (__int64)TerminalSceneComponent_TypeInfo;
                }
                v155 = **(_QWORD **)(updated + 184);
                if ( !v155 )
                  goto LABEL_1114;
                v156 = *(ScrTerminalListTop_o **)(v155 + 256);
                v157 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
                System_Action___ctor(
                  v157,
                  (Il2CppObject *)v137,
                  Method_QuestAfterAction_StateMain___c__DisplayClass16_17__UpdateAnim_b__34__,
                  0);
                if ( !v156 )
                  goto LABEL_1114;
                ScrTerminalListTop__StartEventEffect(v156, v145, v146, v157, 0, 0);
                return;
              }
            }
            break;
          case 1200:
            updated = (__int64)v23->fields.param;
            if ( !updated )
              goto LABEL_1114;
            updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0);
            if ( !updated )
              goto LABEL_1114;
            v28 = updated;
            if ( *(_DWORD *)(updated + 24) )
            {
              updated = System_Int32__Parse(*(System_String_o **)(updated + 32), 0);
              if ( *(_DWORD *)(v28 + 24) > 1u )
              {
                v29 = updated;
                v30 = System_Int32__Parse(*(System_String_o **)(v28 + 40), 0);
                if ( v29 == 2 )
                {
                  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
                  if ( !byte_4CC12CE )
                  {
                    sub_1C713B0(&TerminalSceneComponent_TypeInfo);
                    byte_4CC12CE = 1;
                  }
                  updated = (__int64)TerminalSceneComponent_TypeInfo;
                  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
                    updated = (__int64)TerminalSceneComponent_TypeInfo;
                  }
                  v513 = **(_QWORD **)(updated + 184);
                  if ( !v513 )
                    goto LABEL_1114;
                  updated = *(_QWORD *)(v513 + 256);
                  if ( !updated )
                    goto LABEL_1114;
                  v32 = 1;
                  v34 = v30;
                }
                else
                {
                  if ( v29 != 1 )
                  {
                    if ( v29 )
                      goto LABEL_18;
                    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
                    if ( !byte_4CC12CE )
                    {
                      sub_1C713B0(&TerminalSceneComponent_TypeInfo);
                      byte_4CC12CE = 1;
                    }
                    updated = (__int64)TerminalSceneComponent_TypeInfo;
                    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
                      updated = (__int64)TerminalSceneComponent_TypeInfo;
                    }
                    v31 = **(_QWORD **)(updated + 184);
                    if ( !v31 )
                      goto LABEL_1114;
                    updated = *(_QWORD *)(v31 + 256);
                    if ( !updated )
                      goto LABEL_1114;
                    v32 = 1;
                    v33 = 1;
                    v34 = v30;
LABEL_743:
                    ScrTerminalListTop__SetQuestStateForEventEffect((ScrTerminalListTop_o *)updated, v34, v32, v33, 0);
                    goto LABEL_18;
                  }
                  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
                  if ( !byte_4CC12CE )
                  {
                    sub_1C713B0(&TerminalSceneComponent_TypeInfo);
                    byte_4CC12CE = 1;
                  }
                  updated = (__int64)TerminalSceneComponent_TypeInfo;
                  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
                    updated = (__int64)TerminalSceneComponent_TypeInfo;
                  }
                  v514 = **(_QWORD **)(updated + 184);
                  if ( !v514 )
                    goto LABEL_1114;
                  updated = *(_QWORD *)(v514 + 256);
                  if ( !updated )
                    goto LABEL_1114;
                  v34 = v30;
                  v32 = 0;
                }
                v33 = 0;
                goto LABEL_743;
              }
            }
            break;
          default:
            return;
        }
        goto LABEL_1115;
      }
      if ( id > 560 )
      {
        switch ( id )
        {
          case 600:
            v131 = (System_String_o *)StringLiteral_1/*""*/;
            v132 = System_String__Concat_64031724((System_String_o *)StringLiteral_10825/*"QUEST_AFTER_ACTION_MESSAGE_"*/, v23->fields.param, 0);
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v133 = LocalizationManager__Get(v132, 0);
            Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            v135 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
            System_Action___ctor(
              v135,
              (Il2CppObject *)v5,
              Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__29__,
              0);
            if ( !Instance )
              goto LABEL_1114;
            CommonUI__OpenNotificationDialog(
              (CommonUI_o *)Instance,
              v131,
              v133,
              v135,
              210,
              0,
              0,
              0,
              1,
              0,
              0,
              0,
              0,
              0.0,
              0,
              0);
            return;
          case 601:
            v260 = StringLiteral_1/*""*/;
            updated = sub_1C71458(string___TypeInfo, 1);
            if ( !updated )
              goto LABEL_1114;
            v267 = (System_String_array *)updated;
            if ( !*(_DWORD *)(updated + 24) )
              goto LABEL_1115;
            v268 = StringLiteral_87/*"\r\n"*/;
            *(_QWORD *)(updated + 32) = StringLiteral_87/*"\r\n"*/;
            sub_1C71354((GrandQuestFolderBoardItem_o *)(updated + 32), v268, v261, v262, v263, v264, v265, v266);
            updated = (__int64)v23->fields.param;
            if ( !updated )
              goto LABEL_1114;
            updated = (__int64)System_String__Split_64084772((System_String_o *)updated, v267, 0, 0);
            if ( !updated )
              goto LABEL_1114;
            v269 = *(_DWORD *)(updated + 24);
            if ( v269 <= 0 )
              goto LABEL_1009;
            v270 = *(System_String_o **)(updated + 32);
            if ( v269 == 1 )
            {
              v271 = *(System_String_o **)(updated + 32);
              v270 = (System_String_o *)v260;
            }
            else
            {
              v271 = *(System_String_o **)(updated + 40);
            }
            v600 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            v601 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
            System_Action___ctor(
              v601,
              (Il2CppObject *)v5,
              Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__30__,
              0);
            if ( !v600 )
              goto LABEL_1114;
            CommonUI__OpenNotificationDialog(
              (CommonUI_o *)v600,
              v270,
              v271,
              v601,
              210,
              0,
              0,
              0,
              1,
              0,
              1,
              0,
              0,
              0.0,
              0,
              0);
            return;
          case 602:
            v272 = (System_String_o *)StringLiteral_1/*""*/;
            v273 = System_String__Concat_64031724((System_String_o *)StringLiteral_10825/*"QUEST_AFTER_ACTION_MESSAGE_"*/, v23->fields.param, 0);
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v274 = LocalizationManager__Get(v273, 0);
            v275 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            v276 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
            System_Action___ctor(
              v276,
              (Il2CppObject *)v5,
              Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__31__,
              0);
            if ( !v275 )
              goto LABEL_1114;
            onClickOkSeKind = 0;
            goto LABEL_886;
          case 603:
            v277 = StringLiteral_1/*""*/;
            updated = sub_1C71458(string___TypeInfo, 1);
            if ( !updated )
              goto LABEL_1114;
            v284 = (System_String_array *)updated;
            if ( !*(_DWORD *)(updated + 24) )
              goto LABEL_1115;
            v285 = StringLiteral_87/*"\r\n"*/;
            *(_QWORD *)(updated + 32) = StringLiteral_87/*"\r\n"*/;
            sub_1C71354((GrandQuestFolderBoardItem_o *)(updated + 32), v285, v278, v279, v280, v281, v282, v283);
            updated = (__int64)v23->fields.param;
            if ( !updated )
              goto LABEL_1114;
            updated = (__int64)System_String__Split_64084772((System_String_o *)updated, v284, 0, 0);
            if ( !updated )
              goto LABEL_1114;
            v286 = *(_DWORD *)(updated + 24);
            if ( v286 <= 0 )
              goto LABEL_1009;
            v272 = *(System_String_o **)(updated + 32);
            if ( v286 == 1 )
            {
              v274 = *(System_String_o **)(updated + 32);
              v272 = (System_String_o *)v277;
            }
            else
            {
              v274 = *(System_String_o **)(updated + 40);
            }
            v275 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            v276 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
            System_Action___ctor(
              v276,
              (Il2CppObject *)v5,
              Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__32__,
              0);
            if ( !v275 )
              goto LABEL_1114;
            onClickOkSeKind = 1;
LABEL_886:
            CommonUI__OpenNotificationDialog_31441608(
              (CommonUI_o *)v275,
              v272,
              v274,
              v276,
              40.0,
              -162.5,
              210,
              0,
              0,
              0,
              1,
              28,
              onClickOkSeKind,
              0,
              1,
              0,
              0);
            return;
          case 604:
            v287 = (System_String_o *)StringLiteral_1/*""*/;
            v288 = System_String__Concat_64031724((System_String_o *)StringLiteral_10825/*"QUEST_AFTER_ACTION_MESSAGE_"*/, v23->fields.param, 0);
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v289 = LocalizationManager__Get(v288, 0);
            v290 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            v291 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
            System_Action___ctor(
              v291,
              (Il2CppObject *)v5,
              Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__33__,
              0);
            if ( !v290 )
              goto LABEL_1114;
            CommonUI__OpenNotificationDialog_31441608(
              (CommonUI_o *)v290,
              v287,
              v289,
              v291,
              30.0,
              -162.5,
              210,
              0,
              0,
              0,
              1,
              30,
              0,
              0,
              1,
              0,
              0);
            return;
          default:
            switch ( id )
            {
              case 700:
                updated = (__int64)v23->fields.param;
                if ( !updated )
                  goto LABEL_1114;
                updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0);
                if ( !updated )
                  goto LABEL_1114;
                v66 = updated;
                if ( !*(_DWORD *)(updated + 24) )
                  goto LABEL_1115;
                v67 = System_Int32__Parse(*(System_String_o **)(updated + 32), 0);
                if ( *(int *)(v66 + 24) >= 2 )
                  v68 = System_Int32__Parse(*(System_String_o **)(v66 + 40), 0) + 1;
                else
                  v68 = 0;
                v597 = (SceneJumpInfo_o *)sub_1C715FC(SceneJumpInfo_TypeInfo);
                SceneJumpInfo___ctor_41756288(v597, (System_String_o *)StringLiteral_1/*""*/, v67, v68, 0);
                updated = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
                if ( !updated )
                  goto LABEL_1114;
                v595 = 72;
                v596 = (Il2CppObject *)v597;
                goto LABEL_1008;
              case 701:
                if ( !System_String__op_Equality(v23->fields.param, (System_String_o *)StringLiteral_1115/*"0"*/, 0) )
                  goto LABEL_18;
                if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                if ( !byte_4CC3F5B )
                {
                  sub_1C713B0(&TerminalPramsManager_TypeInfo);
                  byte_4CC3F5B = 1;
                }
                v240 = TerminalPramsManager_TypeInfo;
                if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                  v240 = TerminalPramsManager_TypeInfo;
                }
                if ( v240->static_fields->_IsTransOrdealCall_k__BackingField )
                  goto LABEL_18;
                if ( !v240->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(v240);
                if ( !byte_4CC3F5C )
                {
                  sub_1C713B0(&TerminalPramsManager_TypeInfo);
                  byte_4CC3F5C = 1;
                }
                v241 = TerminalPramsManager_TypeInfo;
                if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                  v241 = TerminalPramsManager_TypeInfo;
                }
                v241->static_fields->_IsTransOrdealCall_k__BackingField = 1;
                v242 = BalanceConfig_TypeInfo;
                if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                  v242 = BalanceConfig_TypeInfo;
                }
                TerminalPramsManager__SetAutoResumeByWarId(v242->static_fields->OrdealCallWarId, 0);
                updated = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
                if ( !updated )
                  goto LABEL_1114;
                AvalonSceneManager__transitionSceneRefresh((AvalonSceneManager_o *)updated, 34, 1, 0, 0, 0);
                return;
              case 702:
                updated = (__int64)v23->fields.param;
                if ( !updated )
                  goto LABEL_1114;
                updated = (__int64)System_String__Split_64083632(
                                     (System_String_o *)updated,
                                     (System_String_o *)StringLiteral_808/*","*/,
                                     0,
                                     0);
                if ( !updated )
                  goto LABEL_1114;
                v243 = *(_QWORD *)(updated + 24);
                v244 = updated;
                if ( !v243 )
                  goto LABEL_863;
                if ( !(_DWORD)v243 )
                  goto LABEL_1115;
                if ( System_Int32__Parse(*(System_String_o **)(updated + 32), 0) > 0 )
                  goto LABEL_18;
                if ( *(int *)(v244 + 24) < 2 )
LABEL_863:
                  v245 = 0;
                else
                  v245 = System_Int32__Parse(*(System_String_o **)(v244 + 40), 0);
                if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                TerminalPramsManager__SetAutoResumeForFolder(v245, 0);
                if ( !byte_4CC3E98 )
                {
                  sub_1C713B0(&TerminalPramsManager_TypeInfo);
                  byte_4CC3E98 = 1;
                }
                v598 = TerminalPramsManager_TypeInfo;
                if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                  v598 = TerminalPramsManager_TypeInfo;
                }
                if ( v598->static_fields->_DispState_k__BackingField == 3 )
                {
                  if ( !v598->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(v598);
                  if ( !byte_4CC3F5D )
                  {
                    sub_1C713B0(&TerminalPramsManager_TypeInfo);
                    byte_4CC3F5D = 1;
                  }
                  v599 = TerminalPramsManager_TypeInfo;
                  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                    v599 = TerminalPramsManager_TypeInfo;
                  }
                  v599->static_fields->_IsMoveFolderByQuestAfterAction_k__BackingField = 1;
                }
                updated = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
                if ( !updated )
                  goto LABEL_1114;
                AvalonSceneManager__transitionSceneRefresh((AvalonSceneManager_o *)updated, 34, 1, 0, 0, 0);
                goto LABEL_1009;
              case 703:
                updated = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
                if ( !updated )
                  goto LABEL_1114;
                *(_BYTE *)(updated + 195) = 0;
                updated = (__int64)v23->fields.param;
                if ( !updated )
                  goto LABEL_1114;
                updated = (__int64)System_String__Split_64083632(
                                     (System_String_o *)updated,
                                     (System_String_o *)StringLiteral_808/*","*/,
                                     0,
                                     0);
                if ( !updated )
                  goto LABEL_1114;
                v246 = *(_QWORD *)(updated + 24);
                v247 = updated;
                if ( !v246 )
                  goto LABEL_858;
                if ( !(_DWORD)v246 )
                  goto LABEL_1115;
                v248 = System_Int32__Parse(*(System_String_o **)(updated + 32), 0);
                if ( v248 < 1 )
                {
LABEL_858:
                  updated = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
                  if ( !updated )
                    goto LABEL_1114;
                  v595 = 91;
                  v596 = 0;
                  goto LABEL_1008;
                }
                v249 = v248;
                if ( *(int *)(v247 + 24) > 1 )
                {
                  v704 = System_Int32__Parse(*(System_String_o **)(v247 + 40), 0);
                  v250 = (System_String_o *)StringLiteral_1/*""*/;
                  if ( v704 >= 1 )
                  {
                    v705 = 1;
                    goto LABEL_1006;
                  }
                }
                else
                {
                  v250 = (System_String_o *)StringLiteral_1/*""*/;
                }
                v705 = 0;
LABEL_1006:
                v706 = (SceneJumpInfo_o *)sub_1C715FC(SceneJumpInfo_TypeInfo);
                SceneJumpInfo___ctor_41756288(v706, v250, v249, v705, 0);
                updated = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
                if ( !updated )
                  goto LABEL_1114;
                v595 = 91;
                v596 = (Il2CppObject *)v706;
LABEL_1008:
                AvalonSceneManager__transitionScene((AvalonSceneManager_o *)updated, v595, 1, v596, 0);
                goto LABEL_1009;
              default:
                if ( id != 800 )
                  return;
                v193 = *v14;
                if ( !*v14 )
                  goto LABEL_1114;
                updated = (__int64)v193->fields.svtVoices;
                if ( !updated )
                  goto LABEL_1114;
                if ( !System_Collections_Generic_Dictionary_int__object___TryGetValue(
                        (System_Collections_Generic_Dictionary_int__object__o *)updated,
                        v193->fields.commandIdx,
                        &value,
                        (const MethodInfo_3463A20 *)Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__TryGetValue__) )
                  goto LABEL_1009;
                updated = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
                if ( !updated )
                  goto LABEL_1114;
                AutomatedAction__TerminateMissionAction((AutomatedAction_o *)updated, 0);
                if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
                if ( !byte_4CC12CE )
                {
                  sub_1C713B0(&TerminalSceneComponent_TypeInfo);
                  byte_4CC12CE = 1;
                }
                updated = (__int64)TerminalSceneComponent_TypeInfo;
                if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
                  updated = (__int64)TerminalSceneComponent_TypeInfo;
                }
                v194 = **(_QWORD **)(updated + 184);
                if ( !v194 )
                  goto LABEL_1114;
                if ( !*(_QWORD *)(v194 + 464) )
                  goto LABEL_273;
                if ( !*(_DWORD *)(updated + 224) )
                  j_il2cpp_runtime_class_init_0(updated);
                if ( !byte_4CC12CE )
                {
                  sub_1C713B0(&TerminalSceneComponent_TypeInfo);
                  byte_4CC12CE = 1;
                }
                updated = (__int64)TerminalSceneComponent_TypeInfo;
                if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
                  updated = (__int64)TerminalSceneComponent_TypeInfo;
                }
                v195 = **(_QWORD **)(updated + 184);
                if ( !v195 )
                  goto LABEL_1114;
                v196 = *(_QWORD *)(v195 + 464);
                if ( !v196 )
                  goto LABEL_1114;
                updated = *(unsigned int *)(v196 + 48);
                if ( (_DWORD)updated )
                  goto LABEL_275;
LABEL_273:
                if ( !value )
                  goto LABEL_1114;
                updated = LODWORD(value[1].klass);
LABEL_275:
                if ( (int)updated < 1 )
                {
                  if ( !value )
                    goto LABEL_1114;
                  monitor = (System_String_o *)value[1].monitor;
                  if ( !SoundManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
                  SoundManager__playVoice(monitor, 0, 0);
                }
                else
                {
                  updated = (__int64)ServantVoiceEntity__getVoiceAssetName_43081620(updated, 0);
                  if ( !value )
                    goto LABEL_1114;
                  v197 = (System_String_o *)updated;
                  v198 = (System_String_o *)value[1].monitor;
                  v199 = SeManager_TypeInfo;
                  if ( !SeManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
                    v199 = SeManager_TypeInfo;
                  }
                  DEFAULT_VOLUME = v199->static_fields->DEFAULT_VOLUME;
                  if ( !SoundManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
                  SoundManager__playVoice_41795520(v197, v198, DEFAULT_VOLUME, 0, 0, 0);
                }
                break;
            }
            break;
        }
        goto LABEL_1009;
      }
      if ( id != 540 )
      {
        if ( id == 550 )
          goto LABEL_18;
        if ( id != 560 )
          return;
        updated = (__int64)v23->fields.param;
        if ( !updated )
          goto LABEL_1114;
        updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0);
        if ( !updated )
          goto LABEL_1114;
        v87 = *(_QWORD *)(updated + 24);
        v88 = updated;
        if ( v87 )
        {
          if ( !(_DWORD)v87 )
            goto LABEL_1115;
          v89 = System_Int32__Parse(*(System_String_o **)(updated + 32), 0) > 0;
        }
        else
        {
          v89 = 0;
        }
        v234 = sub_1C715FC(QuestAfterAction_TitleInfoControlParam_TypeInfo);
        System_Object___ctor((Il2CppObject *)v234, 0);
        if ( *(int *)(v88 + 24) >= 2 )
        {
          updated = System_Int32__Parse(*(System_String_o **)(v88 + 40), 0);
          if ( (int)updated >= 1 )
          {
            if ( *(_DWORD *)(v88 + 24) <= 1u )
              goto LABEL_1115;
            updated = System_Int32__Parse(*(System_String_o **)(v88 + 40), 0);
            if ( !v234 )
              goto LABEL_1114;
            *(_DWORD *)(v234 + 16) = updated;
          }
        }
        if ( *(int *)(v88 + 24) > 2 )
        {
          updated = System_Int32__Parse(*(System_String_o **)(v88 + 48), 0);
          if ( (int)updated >= 1 )
          {
            if ( *(_DWORD *)(v88 + 24) <= 2u )
              goto LABEL_1115;
            updated = System_Int32__Parse(*(System_String_o **)(v88 + 48), 0);
            if ( !v234 )
              goto LABEL_1114;
            *(_DWORD *)(v234 + 20) = updated;
          }
        }
        v236 = *v14;
        if ( !*v14 )
          goto LABEL_1114;
        TitleInfoCtrlCallback_k__BackingField = v236->fields._TitleInfoCtrlCallback_k__BackingField;
        if ( v89 )
        {
          if ( !TitleInfoCtrlCallback_k__BackingField )
            goto LABEL_1114;
          QuestAfterAction_TitleInfoControlCallback__Start(
            v236->fields._TitleInfoCtrlCallback_k__BackingField,
            (QuestAfterAction_TitleInfoControlParam_o *)v234,
            0,
            v235);
          goto LABEL_18;
        }
        v238 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
        System_Action___ctor(v238, (Il2CppObject *)this, (intptr_t)this->klass->vtable._14_EndAnim.method, 0);
        if ( !TitleInfoCtrlCallback_k__BackingField )
          goto LABEL_1114;
        QuestAfterAction_TitleInfoControlCallback__Start(
          TitleInfoCtrlCallback_k__BackingField,
          (QuestAfterAction_TitleInfoControlParam_o *)v234,
          v238,
          v239);
        return;
      }
      updated = (__int64)v23->fields.param;
      if ( !updated )
        goto LABEL_1114;
      updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0);
      if ( !updated )
        goto LABEL_1114;
      v173 = updated;
      if ( !*(_DWORD *)(updated + 24) )
LABEL_1115:
        sub_1C71610(updated);
      v174 = System_Int32__Parse(*(System_String_o **)(updated + 32), 0);
      if ( *(int *)(v173 + 24) < 2 )
      {
        v175 = -1;
      }
      else
      {
        v175 = System_Int32__Parse(*(System_String_o **)(v173 + 40), 0);
        if ( *(int *)(v173 + 24) >= 3 )
        {
          v176 = System_Int32__Parse(*(System_String_o **)(v173 + 48), 0);
LABEL_363:
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          if ( !byte_4CC1B52 )
          {
            sub_1C713B0(&TerminalPramsManager_TypeInfo);
            byte_4CC1B52 = 1;
          }
          v230 = TerminalPramsManager_TypeInfo;
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            v230 = TerminalPramsManager_TypeInfo;
          }
          v230->static_fields->_IsAutoResume_k__BackingField = 1;
          if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          if ( !byte_4CC12CE )
          {
            sub_1C713B0(&TerminalSceneComponent_TypeInfo);
            byte_4CC12CE = 1;
          }
          updated = (__int64)TerminalSceneComponent_TypeInfo;
          if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            updated = (__int64)TerminalSceneComponent_TypeInfo;
          }
          v231 = **(_QWORD **)(updated + 184);
          if ( !v231 )
            goto LABEL_1114;
          updated = *(_QWORD *)(v231 + 264);
          if ( !updated )
            goto LABEL_1114;
          if ( !ScrTerminalMap__RequestMapChange((ScrTerminalMap_o *)updated, v174, v175, v176, 0) )
          {
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            if ( !byte_4CC1B52 )
            {
              sub_1C713B0(&TerminalPramsManager_TypeInfo);
              byte_4CC1B52 = 1;
            }
            v233 = TerminalPramsManager_TypeInfo;
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
              v233 = TerminalPramsManager_TypeInfo;
            }
            v233->static_fields->_IsAutoResume_k__BackingField = 0;
            goto LABEL_18;
          }
          ((void (__fastcall *)(QuestAfterAction_StateMain_o *, const MethodInfo *))this->klass->vtable._14_EndAnim.methodPtr)(
            this,
            this->klass->vtable._14_EndAnim.method);
          updated = (__int64)*v14;
          if ( !*v14 )
            goto LABEL_1114;
          QuestAfterAction__SetState((QuestAfterAction_o *)updated, 0, v232);
          return;
        }
      }
      v176 = -1;
      goto LABEL_363;
    }
    if ( id > 352 )
    {
      if ( id > 501 )
      {
        if ( id != 510 )
        {
          if ( id == 520 )
          {
            DEFAULT_FADE_TIME = System_Single__Parse(v23->fields.param, 0);
            if ( DEFAULT_FADE_TIME <= 0.0 )
            {
              v163 = AvalonSceneManager_TypeInfo;
              if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
                v163 = AvalonSceneManager_TypeInfo;
              }
              DEFAULT_FADE_TIME = v163->static_fields->DEFAULT_FADE_TIME;
            }
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            if ( !byte_4CC12CE )
            {
              sub_1C713B0(&TerminalSceneComponent_TypeInfo);
              byte_4CC12CE = 1;
            }
            v164 = TerminalSceneComponent_TypeInfo;
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
              v164 = TerminalSceneComponent_TypeInfo;
            }
            v165 = v164->static_fields->mInstance;
            v166 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
            System_Action___ctor(
              v166,
              (Il2CppObject *)v5,
              Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__23__,
              0);
            if ( !v165 )
              goto LABEL_1114;
            v167 = v165;
            v168 = DEFAULT_FADE_TIME;
            v169 = v166;
LABEL_202:
            TerminalSceneComponent__Fadein_MapDisp(v167, v168, v169, 0);
          }
          else if ( id == 530 )
          {
            v35 = sub_1C715FC(QuestAfterAction_StateMain___c__DisplayClass16_16_TypeInfo);
            QuestAfterAction_StateMain___c__DisplayClass16_16___ctor(
              (QuestAfterAction_StateMain___c__DisplayClass16_16_o *)v35,
              0);
            if ( !v35 )
              goto LABEL_1114;
            *(_QWORD *)(v35 + 32) = v5;
            v42 = v35 + 32;
            sub_1C71354((GrandQuestFolderBoardItem_o *)(v35 + 32), v5, v36, v37, v38, v39, v40, v41);
            v43 = System_Int32__Parse(v23->fields.param, 0);
            updated = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( !updated )
              goto LABEL_1114;
            updated = (__int64)DataManager__GetMasterData_object_(
                                 (DataManager_o *)updated,
                                 (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_QuestMaster___);
            if ( !updated )
              goto LABEL_1114;
            v44 = DataMasterBase_object__object__int___GetEntity(
                    (DataMasterBase_TMaster__TEntity__PKType__o *)updated,
                    v43,
                    (const MethodInfo_3408E80 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
            *(_QWORD *)(v35 + 16) = v44;
            v45 = (__int64 *)(v35 + 16);
            sub_1C71354((GrandQuestFolderBoardItem_o *)(v35 + 16), (int32_t)v44, v46, v47, v48, v49, v50, v51);
            updated = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_3A5F648 *)Method_SingletonTemplate_QuestTree__get_Instance__);
            if ( !updated )
              goto LABEL_1114;
            QuestInfo = QuestTree__GetQuestInfo((QuestTree_o *)updated, v43, 0);
            *(_QWORD *)(v35 + 24) = QuestInfo;
            v53 = v35 + 24;
            sub_1C71354((GrandQuestFolderBoardItem_o *)(v35 + 24), (int32_t)QuestInfo, v54, v55, v56, v57, v58, v59);
            if ( !*(_QWORD *)(v35 + 24) )
              goto LABEL_1114;
            if ( *(_DWORD *)(*(_QWORD *)(v35 + 24) + 32LL) == 1 )
            {
              updated = *v45;
              if ( !*v45 )
                goto LABEL_1114;
              if ( QuestEntity__HasFlag((QuestEntity_o *)updated, 2, 0) )
              {
                if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                if ( !byte_4CC3C94 )
                {
                  sub_1C713B0(&TerminalPramsManager_TypeInfo);
                  byte_4CC3C94 = 1;
                }
                updated = (__int64)TerminalPramsManager_TypeInfo;
                if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                  updated = (__int64)TerminalPramsManager_TypeInfo;
                }
                *(_DWORD *)(*(_QWORD *)(updated + 184) + 20LL) = v43;
                if ( !*(_QWORD *)v53 )
                  goto LABEL_1114;
                v61 = *(_DWORD *)(*(_QWORD *)v53 + 44LL);
                if ( !byte_4CC3C98 )
                {
                  sub_1C713B0(&TerminalPramsManager_TypeInfo);
                  updated = (__int64)TerminalPramsManager_TypeInfo;
                  byte_4CC3C98 = 1;
                }
                if ( !*(_DWORD *)(updated + 224) )
                {
                  j_il2cpp_runtime_class_init_0(updated);
                  updated = (__int64)TerminalPramsManager_TypeInfo;
                }
                *(_DWORD *)(*(_QWORD *)(updated + 184) + 24LL) = v61;
                if ( !*(_QWORD *)v42 )
                  goto LABEL_1114;
                v62 = *(_QWORD *)(*(_QWORD *)v42 + 24LL);
                if ( !v62 )
                  goto LABEL_1114;
                *(_BYTE *)(v62 + 197) = 1;
                v63 = (NetworkManager_ResultCallbackFunc_o *)sub_1C715FC(NetworkManager_ResultCallbackFunc_TypeInfo);
                NetworkManager_ResultCallbackFunc___ctor(
                  v63,
                  (Il2CppObject *)v35,
                  Method_QuestAfterAction_StateMain___c__DisplayClass16_16__UpdateAnim_b__24__,
                  0);
                if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                Request_object = NetworkManager__getRequest_object_(
                                   v63,
                                   (const MethodInfo_31D69E8 *)Method_NetworkManager_getRequest_BattleSetupScenarioRequest___);
                if ( !byte_4CC13B1 )
                {
                  sub_1C713B0(&TerminalPramsManager_TypeInfo);
                  byte_4CC13B1 = 1;
                }
                updated = (__int64)TerminalPramsManager_TypeInfo;
                if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                  updated = (__int64)TerminalPramsManager_TypeInfo;
                }
                v65 = *(_DWORD *)(*(_QWORD *)(updated + 184) + 20LL);
                if ( !byte_4CC13B0 )
                {
                  sub_1C713B0(&TerminalPramsManager_TypeInfo);
                  updated = (__int64)TerminalPramsManager_TypeInfo;
                  byte_4CC13B0 = 1;
                }
                if ( !*(_DWORD *)(updated + 224) )
                {
                  j_il2cpp_runtime_class_init_0(updated);
                  updated = (__int64)TerminalPramsManager_TypeInfo;
                }
                if ( !Request_object )
                  goto LABEL_1114;
                BattleSetupScenarioRequest__beginRequest(
                  (BattleSetupScenarioRequest_o *)Request_object,
                  v65,
                  *(_DWORD *)(*(_QWORD *)(updated + 184) + 24LL) + 1,
                  0);
              }
            }
            else
            {
              QuestAfterAction_StateMain__ForceEndAnim(this, 1, v60);
            }
          }
          return;
        }
        updated = (__int64)v23->fields.param;
        if ( !updated )
          goto LABEL_1114;
        updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0);
        if ( !updated )
          goto LABEL_1114;
        v158 = updated;
        if ( *(_DWORD *)(updated + 24) )
        {
          v159 = System_Int32__Parse(*(System_String_o **)(updated + 32), 0);
          v160 = 0.5;
          if ( *(int *)(v158 + 24) >= 2 )
          {
            v161 = System_Int32__Parse(*(System_String_o **)(v158 + 40), 0);
            if ( *(int *)(v158 + 24) >= 3 )
              v160 = System_Single__Parse(*(System_String_o **)(v158 + 48), 0);
          }
          else
          {
            v161 = v159;
            v159 = -1;
          }
          updated = (__int64)*v14;
          if ( !*v14 )
            goto LABEL_1114;
          MapComponent_object = QuestAfterAction__GetMapComponent_object_(
                                  (QuestAfterAction_o *)updated,
                                  0,
                                  v161,
                                  this,
                                  (const MethodInfo_31E4BE0 *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)MapComponent_object, 0, 0) )
          {
            if ( v159 >= 1 )
            {
              updated = (__int64)*v14;
              if ( !*v14 )
                goto LABEL_1114;
              v223 = QuestAfterAction__GetMapComponent_object_(
                       (QuestAfterAction_o *)updated,
                       0,
                       v159,
                       this,
                       (const MethodInfo_31E4BE0 *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v223, 0, 0) )
              {
                if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
                if ( !byte_4CC12CE )
                {
                  sub_1C713B0(&TerminalSceneComponent_TypeInfo);
                  byte_4CC12CE = 1;
                }
                updated = (__int64)TerminalSceneComponent_TypeInfo;
                if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
                  updated = (__int64)TerminalSceneComponent_TypeInfo;
                }
                v224 = **(_QWORD **)(updated + 184);
                if ( !v224 )
                  goto LABEL_1114;
                if ( !v223 )
                  goto LABEL_1114;
                v225 = *(ScrTerminalMap_o **)(v224 + 264);
                updated = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v223, 0);
                if ( !v225 )
                  goto LABEL_1114;
                ScrTerminalMap__SetPlayerIcon(v225, (UnityEngine_GameObject_o *)updated, 0);
              }
            }
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            if ( !byte_4CC12CE )
            {
              sub_1C713B0(&TerminalSceneComponent_TypeInfo);
              byte_4CC12CE = 1;
            }
            updated = (__int64)TerminalSceneComponent_TypeInfo;
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
              updated = (__int64)TerminalSceneComponent_TypeInfo;
            }
            v226 = **(_QWORD **)(updated + 184);
            if ( !v226 )
              goto LABEL_1114;
            if ( !MapComponent_object )
              goto LABEL_1114;
            v227 = *(ScrTerminalMap_o **)(v226 + 264);
            gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)MapComponent_object, 0);
            v229 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
            System_Action___ctor(v229, (Il2CppObject *)this, (intptr_t)this->klass->vtable._14_EndAnim.method, 0);
            if ( !v227 )
              goto LABEL_1114;
            ScrTerminalMap__MovePlayerIcon(v227, gameObject, v161, v229, v160, 0);
          }
          return;
        }
        goto LABEL_1115;
      }
      switch ( id )
      {
        case 400:
          v74 = sub_1C715FC(QuestAfterAction_StateMain___c__DisplayClass16_10_TypeInfo);
          QuestAfterAction_StateMain___c__DisplayClass16_10___ctor(
            (QuestAfterAction_StateMain___c__DisplayClass16_10_o *)v74,
            0);
          if ( !v74 )
            goto LABEL_1114;
          *(_QWORD *)(v74 + 24) = v5;
          v81 = v74 + 24;
          sub_1C71354((GrandQuestFolderBoardItem_o *)(v74 + 24), v5, v75, v76, v77, v78, v79, v80);
          updated = (__int64)v23->fields.param;
          if ( !updated )
            goto LABEL_1114;
          updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0);
          if ( !updated )
            goto LABEL_1114;
          v82 = *(_QWORD *)(updated + 24);
          v83 = updated;
          if ( v82 )
          {
            if ( !(_DWORD)v82 )
              goto LABEL_1115;
            updated = System_Int32__Parse(*(System_String_o **)(updated + 32), 0);
            v84 = updated;
            if ( *(int *)(v83 + 24) >= 2 )
            {
              updated = System_Int32__Parse(*(System_String_o **)(v83 + 40), 0);
              v85 = (int)updated < 1;
              if ( *(int *)(v83 + 24) < 3 )
              {
                v86 = 0;
              }
              else
              {
                updated = System_Int32__Parse(*(System_String_o **)(v83 + 48), 0);
                v86 = (int)updated > 0;
              }
              goto LABEL_916;
            }
          }
          else
          {
            v84 = 0;
          }
          v86 = 0;
          v85 = 1;
LABEL_916:
          if ( !*(_QWORD *)v81 )
            goto LABEL_1114;
          updated = *(_QWORD *)(*(_QWORD *)v81 + 24LL);
          if ( !updated )
            goto LABEL_1114;
          v613 = QuestAfterAction__GetMapComponent_object_(
                   (QuestAfterAction_o *)updated,
                   2,
                   v84,
                   this,
                   (const MethodInfo_31E4BE0 *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
          *(_QWORD *)(v74 + 16) = v613;
          sub_1C71354((GrandQuestFolderBoardItem_o *)(v74 + 16), (int32_t)v613, v614, v615, v616, v617, v618, v619);
          v620 = *(UnityEngine_Object_o **)(v74 + 16);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          updated = UnityEngine_Object__op_Equality(v620, 0, 0);
          if ( (updated & 1) != 0 )
            return;
          v621 = *(MapGimmickComponent_o **)(v74 + 16);
          if ( !v621 )
            goto LABEL_1114;
          v621->fields.isForceNotActive = v86;
          v622 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
          v623 = v622;
          if ( v85 )
          {
            System_Action___ctor(
              v622,
              (Il2CppObject *)v74,
              Method_QuestAfterAction_StateMain___c__DisplayClass16_10__UpdateAnim_b__14__,
              0);
            v480 = 2;
            v624 = v621;
            v625 = v623;
LABEL_1025:
            MapGimmickComponent__SetState(v624, v480, v625, v479);
            return;
          }
          System_Action___ctor(
            v622,
            (Il2CppObject *)v74,
            Method_QuestAfterAction_StateMain___c__DisplayClass16_10__UpdateAnim_b__13__,
            0);
          MapGimmickComponent__SetState(v621, 2, v623, v718);
          updated = ((__int64 (__fastcall *)(QuestAfterAction_StateMain_o *, const MethodInfo *))this->klass->vtable._14_EndAnim.methodPtr)(
                      this,
                      this->klass->vtable._14_EndAnim.method);
          v719 = *(_QWORD *)(v74 + 24);
          if ( !v719 )
            goto LABEL_1114;
          goto LABEL_1030;
        case 401:
          v378 = sub_1C715FC(QuestAfterAction_StateMain___c__DisplayClass16_11_TypeInfo);
          QuestAfterAction_StateMain___c__DisplayClass16_11___ctor(
            (QuestAfterAction_StateMain___c__DisplayClass16_11_o *)v378,
            0);
          if ( !v378 )
            goto LABEL_1114;
          *(_QWORD *)(v378 + 24) = v5;
          v385 = v378 + 24;
          sub_1C71354((GrandQuestFolderBoardItem_o *)(v378 + 24), v5, v379, v380, v381, v382, v383, v384);
          updated = (__int64)v23->fields.param;
          if ( !updated )
            goto LABEL_1114;
          updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0);
          if ( !updated )
            goto LABEL_1114;
          v386 = *(_QWORD *)(updated + 24);
          v387 = updated;
          if ( v386 )
          {
            if ( !(_DWORD)v386 )
              goto LABEL_1115;
            updated = System_Int32__Parse(*(System_String_o **)(updated + 32), 0);
            v388 = updated;
            if ( *(int *)(v387 + 24) >= 2 )
            {
              updated = System_Int32__Parse(*(System_String_o **)(v387 + 40), 0);
              v389 = (int)updated < 1;
              if ( *(int *)(v387 + 24) < 3 )
              {
                v390 = 0;
              }
              else
              {
                updated = System_Int32__Parse(*(System_String_o **)(v387 + 48), 0);
                v390 = (int)updated > 0;
              }
              goto LABEL_926;
            }
          }
          else
          {
            v388 = 0;
          }
          v390 = 0;
          v389 = 1;
LABEL_926:
          if ( !*(_QWORD *)v385 )
            goto LABEL_1114;
          updated = *(_QWORD *)(*(_QWORD *)v385 + 24LL);
          if ( !updated )
            goto LABEL_1114;
          v626 = QuestAfterAction__GetMapComponent_object_(
                   (QuestAfterAction_o *)updated,
                   2,
                   v388,
                   this,
                   (const MethodInfo_31E4BE0 *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
          *(_QWORD *)(v378 + 16) = v626;
          v627 = (MapGimmickComponent_o **)(v378 + 16);
          sub_1C71354((GrandQuestFolderBoardItem_o *)(v378 + 16), (int32_t)v626, v628, v629, v630, v631, v632, v633);
          v634 = *(UnityEngine_Object_o **)(v378 + 16);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          updated = UnityEngine_Object__op_Equality(v634, 0, 0);
          if ( (updated & 1) != 0 )
            return;
          v635 = *v627;
          if ( !*v627 )
            goto LABEL_1114;
          v635->fields.isForceLoop = v390;
          v635->fields.isForceNotActive = 0;
          if ( *(int *)(v387 + 24) >= 4 )
          {
            updated = System_Int32__Parse(*(System_String_o **)(v387 + 56), 0);
            if ( !*v627 )
              goto LABEL_1114;
            MapGimmickComponent__SetUseAnimNum(*v627, updated, 1, v636);
            v635 = *v627;
          }
          v637 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
          v455 = v637;
          if ( v389 )
          {
            System_Action___ctor(
              v637,
              (Il2CppObject *)v378,
              Method_QuestAfterAction_StateMain___c__DisplayClass16_11__UpdateAnim_b__16__,
              0);
            if ( !v635 )
              goto LABEL_1114;
            v480 = 3;
            v624 = v635;
LABEL_1024:
            v625 = v455;
            goto LABEL_1025;
          }
          System_Action___ctor(
            v637,
            (Il2CppObject *)v378,
            Method_QuestAfterAction_StateMain___c__DisplayClass16_11__UpdateAnim_b__15__,
            0);
          if ( !v635 )
            goto LABEL_1114;
          MapGimmickComponent__SetState(v635, 3, v455, v720);
          updated = ((__int64 (__fastcall *)(QuestAfterAction_StateMain_o *, const MethodInfo *))this->klass->vtable._14_EndAnim.methodPtr)(
                      this,
                      this->klass->vtable._14_EndAnim.method);
          v719 = *(_QWORD *)v385;
          if ( !*(_QWORD *)v385 )
            goto LABEL_1114;
LABEL_1030:
          ((void (__fastcall *)(QuestAfterAction_StateMain_o *, _QWORD, const MethodInfo *))this->klass->vtable._13_UpdateAnim.methodPtr)(
            this,
            *(_QWORD *)(v719 + 24),
            this->klass->vtable._13_UpdateAnim.method);
          return;
        case 402:
          updated = (__int64)v23->fields.param;
          if ( !updated )
            goto LABEL_1114;
          updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0);
          if ( !updated )
            goto LABEL_1114;
          v391 = *(_QWORD *)(updated + 24);
          v392 = updated;
          if ( v391 )
          {
            if ( !(_DWORD)v391 )
              goto LABEL_1115;
            v393 = System_Int32__Parse(*(System_String_o **)(updated + 32), 0);
            if ( *(int *)(v392 + 24) >= 2 )
            {
              v394 = System_Int32__Parse(*(System_String_o **)(v392 + 40), 0) > 0;
              goto LABEL_889;
            }
          }
          else
          {
            v393 = 0;
          }
          v394 = 0;
LABEL_889:
          updated = (__int64)*v14;
          if ( !*v14 )
            goto LABEL_1114;
          v602 = QuestAfterAction__GetMapComponent_object_(
                   (QuestAfterAction_o *)updated,
                   2,
                   v393,
                   this,
                   (const MethodInfo_31E4BE0 *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          updated = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v602, 0, 0);
          if ( (updated & 1) == 0 )
          {
            if ( !v602 )
              goto LABEL_1114;
            BYTE1(v602[6].monitor) = v394;
            MapGimmickComponent__SetDispAnim_36457356((MapGimmickComponent_o *)v602, 0, 0.0, 0, v603);
            v553 = v602[7].klass;
            if ( !v553 )
              goto LABEL_1114;
LABEL_971:
            v553[4] = 0;
            goto LABEL_18;
          }
          return;
        case 403:
          updated = (__int64)v23->fields.param;
          if ( !updated )
            goto LABEL_1114;
          updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0);
          if ( !updated )
            goto LABEL_1114;
          v395 = *(_QWORD *)(updated + 24);
          v396 = updated;
          if ( v395 )
          {
            if ( !(_DWORD)v395 )
              goto LABEL_1115;
            v397 = System_Int32__Parse(*(System_String_o **)(updated + 32), 0);
            if ( *(int *)(v396 + 24) >= 2 )
            {
              v398 = System_Int32__Parse(*(System_String_o **)(v396 + 40), 0) > 0;
              goto LABEL_898;
            }
          }
          else
          {
            v397 = 0;
          }
          v398 = 0;
LABEL_898:
          updated = (__int64)*v14;
          if ( !*v14 )
            goto LABEL_1114;
          v604 = QuestAfterAction__GetMapComponent_object_(
                   (QuestAfterAction_o *)updated,
                   2,
                   v397,
                   this,
                   (const MethodInfo_31E4BE0 *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          updated = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v604, 0, 0);
          if ( (updated & 1) == 0 )
          {
            if ( !v604 )
              goto LABEL_1114;
            LOBYTE(v604[6].monitor) = v398;
            BYTE1(v604[6].monitor) = 0;
            MapGimmickComponent__SetDispAnim_36457356((MapGimmickComponent_o *)v604, 1, 0.0, 0, v605);
            v606 = v604[7].klass;
            if ( !v606 )
              goto LABEL_1114;
            LODWORD(v606->_1.name) = 1;
            goto LABEL_18;
          }
          return;
        case 404:
          updated = (__int64)v23->fields.param;
          if ( !updated )
            goto LABEL_1114;
          updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0);
          if ( !updated )
            goto LABEL_1114;
          v399 = updated;
          if ( *(int *)(updated + 24) <= 4 )
            goto LABEL_1009;
          v400 = System_Single__Parse(*(System_String_o **)(updated + 56), 0);
          if ( !*(_DWORD *)(v399 + 24) )
            goto LABEL_1115;
          v401 = *v14;
          v402 = v400;
          updated = System_Int32__Parse(*(System_String_o **)(v399 + 32), 0);
          if ( !v401 )
            goto LABEL_1114;
          v403 = QuestAfterAction__GetMapComponent_object_(
                   v401,
                   2,
                   updated,
                   this,
                   (const MethodInfo_31E4BE0 *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v403, 0, 0) )
            return;
          v404 = *(int *)(v399 + 24) >= 6 && System_Int32__Parse(*(System_String_o **)(v399 + 72), 0) > 0;
          if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          if ( !byte_4CC12CE )
          {
            sub_1C713B0(&TerminalSceneComponent_TypeInfo);
            byte_4CC12CE = 1;
          }
          updated = (__int64)TerminalSceneComponent_TypeInfo;
          if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            updated = (__int64)TerminalSceneComponent_TypeInfo;
          }
          v733 = **(_QWORD **)(updated + 184);
          if ( !v733 )
            goto LABEL_1114;
          if ( *(_DWORD *)(v399 + 24) <= 1u )
            goto LABEL_1115;
          v734 = *(ScrTerminalMap_o **)(v733 + 264);
          v735 = System_Single__Parse(*(System_String_o **)(v399 + 40), 0);
          if ( *(_DWORD *)(v399 + 24) <= 2u )
            goto LABEL_1115;
          v736 = v735;
          v737 = System_Single__Parse(*(System_String_o **)(v399 + 48), 0);
          if ( !v734 )
            goto LABEL_1114;
          v788 = ScrTerminalMap__LocalPosFromCoord(v734, v736, v737, 0.0, 0.0, 0);
          if ( *(_DWORD *)(v399 + 24) <= 4u )
            goto LABEL_1115;
          x = v788.fields.x;
          y = v788.fields.y;
          z = v788.fields.z;
          v741 = v402 * 0.001;
          updated = System_Int32__Parse(*(System_String_o **)(v399 + 64), 0);
          v743 = updated;
          if ( v404 )
          {
            if ( !v403 )
              goto LABEL_1114;
            v789.fields.x = x;
            v789.fields.y = y;
            v789.fields.z = z;
            MapGimmickComponent__SetMoveAnim((MapGimmickComponent_o *)v403, v789, v741, updated, 0, v742);
            goto LABEL_1009;
          }
          v744 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
          System_Action___ctor(v744, (Il2CppObject *)this, (intptr_t)this->klass->vtable._14_EndAnim.method, 0);
          if ( !v403 )
            goto LABEL_1114;
          v711 = (MapGimmickComponent_o *)v403;
          v712 = x;
          v713 = y;
          v714 = z;
          v715 = v741;
          v716 = v743;
          v717 = v744;
LABEL_1090:
          MapGimmickComponent__SetMoveAnim(v711, *(UnityEngine_Vector3_o *)&v712, v715, v716, v717, v710);
          return;
        case 405:
          v405 = sub_1C715FC(QuestAfterAction_StateMain___c__DisplayClass16_12_TypeInfo);
          QuestAfterAction_StateMain___c__DisplayClass16_12___ctor(
            (QuestAfterAction_StateMain___c__DisplayClass16_12_o *)v405,
            0);
          if ( !v405 )
            goto LABEL_1114;
          *(_QWORD *)(v405 + 24) = v5;
          sub_1C71354((GrandQuestFolderBoardItem_o *)(v405 + 24), v5, v406, v407, v408, v409, v410, v411);
          v412 = *(_QWORD *)(v405 + 24);
          if ( !v412 )
            goto LABEL_1114;
          v413 = *(QuestAfterAction_o **)(v412 + 24);
          updated = System_Int32__Parse(v23->fields.param, 0);
          if ( !v413 )
            goto LABEL_1114;
          v414 = QuestAfterAction__GetMapComponent_object_(
                   v413,
                   2,
                   updated,
                   this,
                   (const MethodInfo_31E4BE0 *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
          *(_QWORD *)(v405 + 16) = v414;
          sub_1C71354((GrandQuestFolderBoardItem_o *)(v405 + 16), (int32_t)v414, v415, v416, v417, v418, v419, v420);
          v421 = *(UnityEngine_Object_o **)(v405 + 16);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Equality(v421, 0, 0) )
            return;
          v422 = *(MapGimmickComponent_o **)(v405 + 16);
          v423 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
          System_Action___ctor(
            v423,
            (Il2CppObject *)v405,
            Method_QuestAfterAction_StateMain___c__DisplayClass16_12__UpdateAnim_b__17__,
            0);
          if ( !v422 )
            goto LABEL_1114;
          MapGimmickComponent__SetState(v422, 3, v423, v424);
          if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          if ( !byte_4CC12CE )
          {
            sub_1C713B0(&TerminalSceneComponent_TypeInfo);
            byte_4CC12CE = 1;
          }
          updated = (__int64)TerminalSceneComponent_TypeInfo;
          if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            updated = (__int64)TerminalSceneComponent_TypeInfo;
          }
          v425 = **(TerminalSceneComponent_o ***)(updated + 184);
          if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
          if ( !v425 )
            goto LABEL_1114;
          v167 = v425;
          v169 = 0;
          v168 = AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME;
          goto LABEL_202;
        case 406:
          v426 = sub_1C715FC(QuestAfterAction_StateMain___c__DisplayClass16_13_TypeInfo);
          QuestAfterAction_StateMain___c__DisplayClass16_13___ctor(
            (QuestAfterAction_StateMain___c__DisplayClass16_13_o *)v426,
            0);
          if ( !v426 )
            goto LABEL_1114;
          *(_QWORD *)(v426 + 32) = v5;
          sub_1C71354((GrandQuestFolderBoardItem_o *)(v426 + 32), v5, v427, v428, v429, v430, v431, v432);
          updated = (__int64)v23->fields.param;
          if ( !updated )
            goto LABEL_1114;
          v433 = System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0);
          *(_QWORD *)(v426 + 24) = v433;
          v434 = (__int64 *)(v426 + 24);
          sub_1C71354((GrandQuestFolderBoardItem_o *)(v426 + 24), (int32_t)v433, v435, v436, v437, v438, v439, v440);
          v441 = *(_QWORD *)(v426 + 32);
          if ( !v441 )
            goto LABEL_1114;
          v442 = *v434;
          if ( !*v434 )
            goto LABEL_1114;
          if ( !*(_DWORD *)(v442 + 24) )
            goto LABEL_1115;
          v443 = *(QuestAfterAction_o **)(v441 + 24);
          updated = System_Int32__Parse(*(System_String_o **)(v442 + 32), 0);
          if ( !v443 )
            goto LABEL_1114;
          v444 = QuestAfterAction__GetMapComponent_object_(
                   v443,
                   2,
                   updated,
                   this,
                   (const MethodInfo_31E4BE0 *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
          *(_QWORD *)(v426 + 16) = v444;
          sub_1C71354((GrandQuestFolderBoardItem_o *)(v426 + 16), (int32_t)v444, v445, v446, v447, v448, v449, v450);
          v451 = *(UnityEngine_Object_o **)(v426 + 16);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Equality(v451, 0, 0) )
            return;
          v452 = *(MapGimmickComponent_o **)(v426 + 16);
          v453 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
          v454 = &Method_QuestAfterAction_StateMain___c__DisplayClass16_13__UpdateAnim_b__18__;
          v455 = v453;
          goto LABEL_637;
        case 407:
          updated = (__int64)v23->fields.param;
          if ( !updated )
            goto LABEL_1114;
          updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0);
          if ( !updated )
            goto LABEL_1114;
          v456 = updated;
          if ( !*(_DWORD *)(updated + 24) )
            goto LABEL_1115;
          v457 = *v14;
          updated = System_Int32__Parse(*(System_String_o **)(updated + 32), 0);
          if ( !v457 )
            goto LABEL_1114;
          v458 = QuestAfterAction__GetMapComponent_object_(
                   v457,
                   2,
                   updated,
                   this,
                   (const MethodInfo_31E4BE0 *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          updated = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v458, 0, 0);
          if ( (updated & 1) != 0 )
            return;
          if ( !v458 )
            goto LABEL_1114;
          updated = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v458, 0);
          if ( !updated )
            goto LABEL_1114;
          updated = (__int64)UnityEngine_GameObject__GetComponentInChildren_object_(
                               (UnityEngine_GameObject_o *)updated,
                               (const MethodInfo_31A3134 *)Method_UnityEngine_GameObject_GetComponentInChildren_UISprite___);
          if ( *(_DWORD *)(v456 + 24) <= 1u )
            goto LABEL_1115;
          v459 = (UIWidget_o *)updated;
          updated = UnityEngine_ColorUtility__TryParseHtmlString(*(System_String_o **)(v456 + 40), &color, 0);
          if ( !v459 )
            goto LABEL_1114;
          UIWidget__set_color(v459, color, 0);
          goto LABEL_1009;
        case 408:
          v426 = sub_1C715FC(QuestAfterAction_StateMain___c__DisplayClass16_15_TypeInfo);
          QuestAfterAction_StateMain___c__DisplayClass16_15___ctor(
            (QuestAfterAction_StateMain___c__DisplayClass16_15_o *)v426,
            0);
          if ( !v426 )
            goto LABEL_1114;
          *(_QWORD *)(v426 + 24) = v5;
          sub_1C71354((GrandQuestFolderBoardItem_o *)(v426 + 24), v5, v460, v461, v462, v463, v464, v465);
          v466 = *(_QWORD *)(v426 + 24);
          if ( !v466 )
            goto LABEL_1114;
          v467 = *(QuestAfterAction_o **)(v466 + 24);
          updated = System_Int32__Parse(v23->fields.param, 0);
          if ( !v467 )
            goto LABEL_1114;
          v468 = QuestAfterAction__GetMapComponent_object_(
                   v467,
                   2,
                   updated,
                   this,
                   (const MethodInfo_31E4BE0 *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
          *(_QWORD *)(v426 + 16) = v468;
          v469 = v426 + 16;
          sub_1C71354((GrandQuestFolderBoardItem_o *)(v426 + 16), (int32_t)v468, v470, v471, v472, v473, v474, v475);
          v476 = *(UnityEngine_Object_o **)(v426 + 16);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Equality(v476, 0, 0) )
            return;
          updated = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_3A5F648 *)Method_SingletonTemplate_QuestTree__get_Instance__);
          if ( !*(_QWORD *)v469 || !updated )
            goto LABEL_1114;
          v477 = QuestTree__CheckMapGimmickCond_36890900(
                   (QuestTree_o *)updated,
                   *(MapControl_MapGimmickInfo_o **)(*(_QWORD *)v469 + 112LL),
                   0);
          v452 = *(MapGimmickComponent_o **)v469;
          v478 = v477;
          v453 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
          v455 = v453;
          if ( v478 )
          {
            v454 = &Method_QuestAfterAction_StateMain___c__DisplayClass16_15__UpdateAnim_b__20__;
LABEL_637:
            System_Action___ctor(v453, (Il2CppObject *)v426, *v454, 0);
            if ( !v452 )
              goto LABEL_1114;
            v480 = 3;
          }
          else
          {
            System_Action___ctor(
              v453,
              (Il2CppObject *)v426,
              Method_QuestAfterAction_StateMain___c__DisplayClass16_15__UpdateAnim_b__21__,
              0);
            if ( !v452 )
              goto LABEL_1114;
            v480 = 2;
          }
          v624 = v452;
          goto LABEL_1024;
        case 409:
          updated = (__int64)v23->fields.param;
          if ( !updated )
            goto LABEL_1114;
          updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0);
          if ( !updated )
            goto LABEL_1114;
          v481 = *(_QWORD *)(updated + 24);
          v482 = updated;
          if ( v481 )
          {
            if ( !(_DWORD)v481 )
              goto LABEL_1115;
            v483 = System_Int32__Parse(*(System_String_o **)(updated + 32), 0);
            if ( *(int *)(v482 + 24) >= 2 )
            {
              v484 = System_Int32__Parse(*(System_String_o **)(v482 + 40), 0) > 0;
              goto LABEL_907;
            }
          }
          else
          {
            v483 = 0;
          }
          v484 = 0;
LABEL_907:
          updated = (__int64)*v14;
          if ( !*v14 )
            goto LABEL_1114;
          v607 = QuestAfterAction__GetMapComponent_object_(
                   (QuestAfterAction_o *)updated,
                   2,
                   v483,
                   this,
                   (const MethodInfo_31E4BE0 *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          updated = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v607, 0, 0);
          if ( (updated & 1) == 0 )
          {
            if ( !v607 )
              goto LABEL_1114;
            LOBYTE(v607[6].monitor) = v484;
            BYTE1(v607[6].monitor) = 0;
            AnimTime = MapGimmickComponent__GetAnimTime((MapGimmickComponent_o *)v607, v7);
            MapGimmickComponent__SetDispAnim_36457356((MapGimmickComponent_o *)v607, 1, AnimTime, 1, v609);
            v610 = v607[7].klass;
            if ( !v610 )
              goto LABEL_1114;
            LODWORD(v610->_1.name) = 1;
            v611 = this->klass;
            this->fields.IsAnimDoing = 0;
            v612 = ((__int64 (__fastcall *)(QuestAfterAction_StateMain_o *, const MethodInfo *))v611->vtable._11_get_CommandIndex.methodPtr)(
                     this,
                     v611->vtable._11_get_CommandIndex.method);
            ((void (__fastcall *)(QuestAfterAction_StateMain_o *, _QWORD, const MethodInfo *))this->klass->vtable._12_set_CommandIndex.methodPtr)(
              this,
              (unsigned int)(v612 + 1),
              this->klass->vtable._12_set_CommandIndex.method);
            goto LABEL_19;
          }
          return;
        case 410:
          updated = (__int64)v23->fields.param;
          if ( !updated )
            goto LABEL_1114;
          updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0);
          if ( !updated )
            goto LABEL_1114;
          v485 = updated;
          if ( *(int *)(updated + 24) <= 2 )
            goto LABEL_1009;
          v486 = *v14;
          updated = System_Int32__Parse(*(System_String_o **)(updated + 32), 0);
          if ( !v486 )
            goto LABEL_1114;
          v487 = QuestAfterAction__GetMapComponent_object_(
                   v486,
                   2,
                   updated,
                   this,
                   (const MethodInfo_31E4BE0 *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          updated = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v487, 0, 0);
          if ( (updated & 1) != 0 )
            return;
          if ( *(_DWORD *)(v485 + 24) <= 1u )
            goto LABEL_1115;
          v488 = *v14;
          updated = System_Int32__Parse(*(System_String_o **)(v485 + 40), 0);
          if ( !v488 )
            goto LABEL_1114;
          v490 = updated;
          v491 = v488;
          v492 = 0;
          goto LABEL_679;
        case 411:
          updated = (__int64)v23->fields.param;
          if ( !updated )
            goto LABEL_1114;
          updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0);
          if ( !updated )
            goto LABEL_1114;
          v485 = updated;
          if ( *(int *)(updated + 24) <= 2 )
            goto LABEL_1009;
          v493 = *v14;
          updated = System_Int32__Parse(*(System_String_o **)(updated + 32), 0);
          if ( !v493 )
            goto LABEL_1114;
          v487 = QuestAfterAction__GetMapComponent_object_(
                   v493,
                   2,
                   updated,
                   this,
                   (const MethodInfo_31E4BE0 *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          updated = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v487, 0, 0);
          if ( (updated & 1) != 0 )
            return;
          if ( *(_DWORD *)(v485 + 24) <= 1u )
            goto LABEL_1115;
          v494 = *v14;
          updated = System_Int32__Parse(*(System_String_o **)(v485 + 40), 0);
          if ( !v494 )
            goto LABEL_1114;
          MapGameObject = (UnityEngine_Object_o *)QuestAfterAction__GetMapGameObject(v494, 2, updated, this, v495);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Equality(MapGameObject, 0, 0) )
            return;
          LocalPosition = GameObjectExtensions__GetLocalPosition((UnityEngine_GameObject_o *)MapGameObject, 0);
          if ( *(_DWORD *)(v485 + 24) <= 2u )
            goto LABEL_1115;
          v497 = LocalPosition.fields.x;
          v498 = LocalPosition.fields.y;
          v499 = LocalPosition.fields.z;
          goto LABEL_693;
        case 412:
          updated = (__int64)v23->fields.param;
          if ( !updated )
            goto LABEL_1114;
          updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0);
          if ( !updated )
            goto LABEL_1114;
          v485 = updated;
          if ( *(int *)(updated + 24) <= 2 )
            goto LABEL_1009;
          v500 = *v14;
          updated = System_Int32__Parse(*(System_String_o **)(updated + 32), 0);
          if ( !v500 )
            goto LABEL_1114;
          v487 = QuestAfterAction__GetMapComponent_object_(
                   v500,
                   2,
                   updated,
                   this,
                   (const MethodInfo_31E4BE0 *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          updated = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v487, 0, 0);
          if ( (updated & 1) != 0 )
            return;
          if ( *(_DWORD *)(v485 + 24) <= 1u )
            goto LABEL_1115;
          v501 = *v14;
          updated = System_Int32__Parse(*(System_String_o **)(v485 + 40), 0);
          if ( !v501 )
            goto LABEL_1114;
          v490 = updated;
          v492 = 1;
          v491 = v501;
LABEL_679:
          v502 = (UnityEngine_Object_o *)QuestAfterAction__GetMapGameObject(v491, v492, v490, this, v489);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Equality(v502, 0, 0) )
            return;
          v775 = GameObjectExtensions__GetLocalPosition((UnityEngine_GameObject_o *)v502, 0);
          v497 = v775.fields.x;
          v498 = v775.fields.y;
          v499 = v775.fields.z;
          if ( !this->fields.IsMapModel )
            goto LABEL_692;
          if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          if ( !byte_4CC12CE )
          {
            sub_1C713B0(&TerminalSceneComponent_TypeInfo);
            byte_4CC12CE = 1;
          }
          updated = (__int64)TerminalSceneComponent_TypeInfo;
          if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            updated = (__int64)TerminalSceneComponent_TypeInfo;
          }
          v503 = **(_QWORD **)(updated + 184);
          if ( !v503 )
            goto LABEL_1114;
          updated = *(_QWORD *)(v503 + 264);
          if ( !updated )
            goto LABEL_1114;
          v776.fields.x = v497;
          v776.fields.y = v498;
          v776.fields.z = v499;
          v777 = ScrTerminalMap__ConvertLocalToScreenPosition((ScrTerminalMap_o *)updated, v776, 0);
          v497 = v777.fields.x;
          v498 = v777.fields.y;
          v499 = v777.fields.z;
LABEL_692:
          if ( *(_DWORD *)(v485 + 24) <= 2u )
            goto LABEL_1115;
LABEL_693:
          v504 = System_Single__Parse(*(System_String_o **)(v485 + 48), 0) * 0.001;
          if ( v504 >= 0.0 )
            v505 = v504;
          else
            v505 = 0.5;
          if ( *(_DWORD *)(v485 + 24) <= 3u )
            goto LABEL_1115;
          v506 = System_Int32__Parse(*(System_String_o **)(v485 + 56), 0);
          if ( *(int *)(v485 + 24) >= 5 )
          {
            updated = System_Int32__Parse(*(System_String_o **)(v485 + 64), 0);
            if ( (int)updated >= 1 )
            {
              if ( !v487 )
                goto LABEL_1114;
              v778.fields.x = v497;
              v778.fields.y = v498;
              v778.fields.z = v499;
              MapGimmickComponent__SetMoveAnim((MapGimmickComponent_o *)v487, v778, v505, v506, 0, v507);
              goto LABEL_18;
            }
          }
          v709 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
          System_Action___ctor(v709, (Il2CppObject *)this, (intptr_t)this->klass->vtable._14_EndAnim.method, 0);
          if ( !v487 )
            goto LABEL_1114;
          v711 = (MapGimmickComponent_o *)v487;
          v712 = v497;
          v713 = v498;
          v714 = v499;
          v715 = v505;
          v716 = v506;
          v717 = v709;
          goto LABEL_1090;
        default:
          if ( id == 500 )
          {
            v508 = System_Int32__Parse(v23->fields.param, 0);
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            if ( !byte_4CC3F59 )
            {
              sub_1C713B0(&TerminalPramsManager_TypeInfo);
              byte_4CC3F59 = 1;
            }
            v509 = TerminalPramsManager_TypeInfo;
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
              v509 = TerminalPramsManager_TypeInfo;
            }
            v509->static_fields->_AfterActionFocusQuestId_k__BackingField = v508;
            if ( !DataManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
            updated = (__int64)DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_QuestMaster___);
            if ( !updated )
              goto LABEL_1114;
            if ( DataMasterBase_object__object__int___TryGetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)updated,
                   &entity,
                   v508,
                   (const MethodInfo_3408ECC *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__) )
            {
              updated = (__int64)entity;
              if ( !entity )
                goto LABEL_1114;
              v510 = *v14;
              updated = QuestEntity__getSpotId((QuestEntity_o *)entity, 0);
              if ( !v510 )
                goto LABEL_1114;
              v511 = QuestAfterAction__GetMapComponent_object_(
                       v510,
                       0,
                       updated,
                       this,
                       (const MethodInfo_31E4BE0 *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              updated = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v511, 0, 0);
              if ( (updated & 1) != 0 )
              {
                if ( !v511 )
                  goto LABEL_1114;
                SrcSpotBasePrefab__SelectSpot((SrcSpotBasePrefab_o *)v511, 0, 0);
                if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                if ( !byte_4CC3F5A )
                {
                  sub_1C713B0(&TerminalPramsManager_TypeInfo);
                  byte_4CC3F5A = 1;
                }
                v512 = TerminalPramsManager_TypeInfo;
                if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                  v512 = TerminalPramsManager_TypeInfo;
                }
                v512->static_fields->_IsBackQuestBoardDisable_k__BackingField = 1;
              }
            }
          }
          else
          {
            if ( id != 501 )
              return;
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            if ( !byte_4CC12CE )
            {
              sub_1C713B0(&TerminalSceneComponent_TypeInfo);
              byte_4CC12CE = 1;
            }
            updated = (__int64)TerminalSceneComponent_TypeInfo;
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
              updated = (__int64)TerminalSceneComponent_TypeInfo;
            }
            v177 = **(_QWORD **)(updated + 184);
            if ( !v177 )
              goto LABEL_1114;
            updated = *(_QWORD *)(v177 + 256);
            if ( !updated )
              goto LABEL_1114;
            updated = (__int64)ScrTerminalListTop__mfGetMyFsmP((ScrTerminalListTop_o *)updated, 0);
            if ( !updated )
              goto LABEL_1114;
            v178 = (PlayMakerFSM_o *)updated;
            ActiveStateName = PlayMakerFSM__get_ActiveStateName((PlayMakerFSM_o *)updated, 0);
            if ( System_String__op_Equality(ActiveStateName, (System_String_o *)StringLiteral_3288/*"CAPTER WAIT"*/, 0) )
            {
              if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
              if ( !byte_4CC12CE )
              {
                sub_1C713B0(&TerminalSceneComponent_TypeInfo);
                byte_4CC12CE = 1;
              }
              updated = (__int64)TerminalSceneComponent_TypeInfo;
              if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
                updated = (__int64)TerminalSceneComponent_TypeInfo;
              }
              v180 = **(_QWORD **)(updated + 184);
              if ( !v180 )
                goto LABEL_1114;
              v181 = *(_QWORD *)(v180 + 256);
              if ( !v181 )
                goto LABEL_1114;
              v182 = *(QuestBoardListViewManager_o **)(v181 + 320);
              updated = (__int64)QuestAfterAction_StateMain___c_TypeInfo;
              if ( !QuestAfterAction_StateMain___c_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(QuestAfterAction_StateMain___c_TypeInfo);
                updated = (__int64)QuestAfterAction_StateMain___c_TypeInfo;
              }
              v183 = *(System_Action_o **)(*(_QWORD *)(updated + 184) + 8LL);
              if ( !v183 )
              {
                if ( !*(_DWORD *)(updated + 224) )
                {
                  j_il2cpp_runtime_class_init_0(updated);
                  updated = (__int64)QuestAfterAction_StateMain___c_TypeInfo;
                }
                v184 = **(Il2CppObject ***)(updated + 184);
                v183 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
                System_Action___ctor(v183, v184, Method_QuestAfterAction_StateMain___c__UpdateAnim_b__16_22__, 0);
                static_fields = QuestAfterAction_StateMain___c_TypeInfo->static_fields;
                static_fields->__9__16_22 = v183;
                sub_1C71354(
                  (GrandQuestFolderBoardItem_o *)&static_fields->__9__16_22,
                  (int32_t)v183,
                  v186,
                  v187,
                  v188,
                  v189,
                  v190,
                  v191);
              }
              if ( !v182 )
                goto LABEL_1114;
              QuestBoardListViewManager__SetMode(v182, 4, v183, 0, 0, 0, 0);
              if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
              if ( !byte_4CC12CE )
              {
                sub_1C713B0(&TerminalSceneComponent_TypeInfo);
                byte_4CC12CE = 1;
              }
              v192 = TerminalSceneComponent_TypeInfo;
              if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
                v192 = TerminalSceneComponent_TypeInfo;
              }
              updated = (__int64)v192->static_fields->mInstance;
              if ( !updated )
                goto LABEL_1114;
              TerminalSceneComponent__CallQuestInformationClose((TerminalSceneComponent_o *)updated, 0);
              PlayMakerFSM__SendEvent(v178, (System_String_o *)StringLiteral_19939/*"gevINFOBAR_BACK"*/, 0);
            }
          }
          goto LABEL_1009;
      }
    }
    if ( id <= 205 )
    {
      switch ( id )
      {
        case 'd':
          v90 = sub_1C715FC(QuestAfterAction_StateMain___c__DisplayClass16_1_TypeInfo);
          QuestAfterAction_StateMain___c__DisplayClass16_1___ctor(
            (QuestAfterAction_StateMain___c__DisplayClass16_1_o *)v90,
            0);
          if ( !v90 )
            goto LABEL_1114;
          *(_QWORD *)(v90 + 24) = v5;
          sub_1C71354((GrandQuestFolderBoardItem_o *)(v90 + 24), v5, v91, v92, v93, v94, v95, v96);
          v97 = *(_QWORD *)(v90 + 24);
          if ( !v97 )
            goto LABEL_1114;
          v98 = *(QuestAfterAction_o **)(v97 + 24);
          updated = System_Int32__Parse(v23->fields.param, 0);
          if ( !v98 )
            goto LABEL_1114;
          v99 = QuestAfterAction__GetMapComponent_object_(
                  v98,
                  0,
                  updated,
                  this,
                  (const MethodInfo_31E4BE0 *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
          *(_QWORD *)(v90 + 16) = v99;
          sub_1C71354((GrandQuestFolderBoardItem_o *)(v90 + 16), (int32_t)v99, v100, v101, v102, v103, v104, v105);
          v106 = *(UnityEngine_Object_o **)(v90 + 16);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Equality(v106, 0, 0) )
            return;
          v107 = *(SrcSpotBasePrefab_o **)(v90 + 16);
          v108 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
          System_Action___ctor(
            v108,
            (Il2CppObject *)v90,
            Method_QuestAfterAction_StateMain___c__DisplayClass16_1__UpdateAnim_b__0__,
            0);
          if ( !v107 )
            goto LABEL_1114;
          v109 = 2;
          goto LABEL_502;
        case 'e':
          v316 = sub_1C715FC(QuestAfterAction_StateMain___c__DisplayClass16_2_TypeInfo);
          QuestAfterAction_StateMain___c__DisplayClass16_2___ctor(
            (QuestAfterAction_StateMain___c__DisplayClass16_2_o *)v316,
            0);
          if ( !v316 )
            goto LABEL_1114;
          *(_QWORD *)(v316 + 24) = v5;
          sub_1C71354((GrandQuestFolderBoardItem_o *)(v316 + 24), v5, v317, v318, v319, v320, v321, v322);
          v323 = *(_QWORD *)(v316 + 24);
          if ( !v323 )
            goto LABEL_1114;
          v324 = *(QuestAfterAction_o **)(v323 + 24);
          updated = System_Int32__Parse(v23->fields.param, 0);
          if ( !v324 )
            goto LABEL_1114;
          v325 = QuestAfterAction__GetMapComponent_object_(
                   v324,
                   0,
                   updated,
                   this,
                   (const MethodInfo_31E4BE0 *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
          *(_QWORD *)(v316 + 16) = v325;
          sub_1C71354((GrandQuestFolderBoardItem_o *)(v316 + 16), (int32_t)v325, v326, v327, v328, v329, v330, v331);
          v332 = *(UnityEngine_Object_o **)(v316 + 16);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Equality(v332, 0, 0) )
            return;
          v107 = *(SrcSpotBasePrefab_o **)(v316 + 16);
          v108 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
          System_Action___ctor(
            v108,
            (Il2CppObject *)v316,
            Method_QuestAfterAction_StateMain___c__DisplayClass16_2__UpdateAnim_b__1__,
            0);
          if ( !v107 )
            goto LABEL_1114;
          v109 = 3;
LABEL_502:
          SrcSpotBasePrefab__SetState(v107, v109, v108, 0);
          return;
        case 'f':
          v333 = sub_1C715FC(QuestAfterAction_StateMain___c__DisplayClass16_3_TypeInfo);
          QuestAfterAction_StateMain___c__DisplayClass16_3___ctor(
            (QuestAfterAction_StateMain___c__DisplayClass16_3_o *)v333,
            0);
          if ( !v333 )
            goto LABEL_1114;
          *(_QWORD *)(v333 + 24) = v5;
          v340 = v333 + 24;
          sub_1C71354((GrandQuestFolderBoardItem_o *)(v333 + 24), v5, v334, v335, v336, v337, v338, v339);
          if ( !*(_QWORD *)(v333 + 24) )
            goto LABEL_1114;
          v341 = *(QuestAfterAction_o **)(*(_QWORD *)(v333 + 24) + 24LL);
          updated = System_Int32__Parse(v23->fields.param, 0);
          if ( !v341 )
            goto LABEL_1114;
          v342 = QuestAfterAction__GetMapComponent_object_(
                   v341,
                   0,
                   updated,
                   this,
                   (const MethodInfo_31E4BE0 *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
          *(_QWORD *)(v333 + 16) = v342;
          v343 = (__int64 *)(v333 + 16);
          sub_1C71354((GrandQuestFolderBoardItem_o *)(v333 + 16), (int32_t)v342, v344, v345, v346, v347, v348, v349);
          v350 = *(UnityEngine_Object_o **)(v333 + 16);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Equality(v350, 0, 0) )
            return;
          v351 = *(SrcSpotBasePrefab_o **)(v333 + 16);
          v352 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
          System_Action___ctor(
            v352,
            (Il2CppObject *)v333,
            Method_QuestAfterAction_StateMain___c__DisplayClass16_3__UpdateAnim_b__2__,
            0);
          if ( !v351 )
            goto LABEL_1114;
          SrcSpotBasePrefab__SetState(v351, 4, v352, 0);
          if ( !*(_QWORD *)v340 )
            goto LABEL_1114;
          updated = *(_QWORD *)(*(_QWORD *)v340 + 24LL);
          if ( !updated )
            goto LABEL_1114;
          v359 = *v343;
          *(_QWORD *)(updated + 184) = *v343;
          v360 = (GrandQuestFolderBoardItem_o *)(updated + 184);
          goto LABEL_524;
        case 'g':
          updated = (__int64)v23->fields.param;
          if ( !updated )
            goto LABEL_1114;
          updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0);
          if ( !updated )
            goto LABEL_1114;
          v361 = updated;
          if ( *(int *)(updated + 24) <= 1 )
            goto LABEL_1009;
          v362 = *v14;
          updated = System_Int32__Parse(*(System_String_o **)(updated + 32), 0);
          if ( !v362 )
            goto LABEL_1114;
          v363 = QuestAfterAction__GetMapComponent_object_(
                   v362,
                   0,
                   updated,
                   this,
                   (const MethodInfo_31E4BE0 *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          updated = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v363, 0, 0);
          if ( (updated & 1) != 0 )
            return;
          if ( *(_DWORD *)(v361 + 24) <= 1u )
            goto LABEL_1115;
          updated = System_Int32__Parse(*(System_String_o **)(v361 + 40), 0);
          if ( !v363 )
            goto LABEL_1114;
          LODWORD(v363[14].klass) = updated;
          v364 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
          System_Action___ctor(v364, (Il2CppObject *)this, (intptr_t)this->klass->vtable._14_EndAnim.method, 0);
          SrcSpotBasePrefab__SetState((SrcSpotBasePrefab_o *)v363, 5, v364, 0);
          updated = (__int64)*v14;
          if ( !*v14 )
            goto LABEL_1114;
          *(_QWORD *)(updated + 184) = v363;
          v360 = (GrandQuestFolderBoardItem_o *)(updated + 184);
          LODWORD(v359) = (_DWORD)v363;
LABEL_524:
          sub_1C71354(v360, v359, v353, v354, v355, v356, v357, v358);
          return;
        case 'h':
        case 'i':
        case 'j':
        case 'k':
        case 'l':
        case 'm':
          return;
        case 'n':
          v365 = *v14;
          updated = System_Int32__Parse(v23->fields.param, 0);
          if ( !v365 )
            goto LABEL_1114;
          v366 = (UnityEngine_Object_o *)QuestAfterAction__GetMapComponent_object_(
                                           v365,
                                           0,
                                           updated,
                                           this,
                                           (const MethodInfo_31E4BE0 *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          updated = UnityEngine_Object__op_Equality(v366, 0, 0);
          if ( (updated & 1) != 0 )
            return;
          if ( !v366 )
            goto LABEL_1114;
          SrcSpotBasePrefab__SetQaaScaleAnimQuick((SrcSpotBasePrefab_o *)v366, 0, 0);
          m_CachedPtr = v366[9].fields.m_CachedPtr;
          if ( !m_CachedPtr )
            goto LABEL_1114;
          *(_DWORD *)(m_CachedPtr + 20) = 0;
          v368 = (SrcSpotBasePrefab_o *)v366;
          v369 = 0;
          goto LABEL_547;
        case 'o':
          v370 = *v14;
          updated = System_Int32__Parse(v23->fields.param, 0);
          if ( !v370 )
            goto LABEL_1114;
          v371 = (UnityEngine_Object_o *)QuestAfterAction__GetMapComponent_object_(
                                           v370,
                                           0,
                                           updated,
                                           this,
                                           (const MethodInfo_31E4BE0 *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          updated = UnityEngine_Object__op_Equality(v371, 0, 0);
          if ( (updated & 1) != 0 )
            return;
          if ( !v371 )
            goto LABEL_1114;
          SrcSpotBasePrefab__SetQaaScaleAnimQuick((SrcSpotBasePrefab_o *)v371, 1, 0);
          SrcSpotBasePrefab__SetQaaColorAnimQuick((SrcSpotBasePrefab_o *)v371, 0, 0);
          v372 = v371[9].fields.m_CachedPtr;
          if ( !v372 )
            goto LABEL_1114;
          *(_DWORD *)(v372 + 20) = 2;
          goto LABEL_546;
        case 'p':
          v373 = *v14;
          updated = System_Int32__Parse(v23->fields.param, 0);
          if ( !v373 )
            goto LABEL_1114;
          v371 = (UnityEngine_Object_o *)QuestAfterAction__GetMapComponent_object_(
                                           v373,
                                           0,
                                           updated,
                                           this,
                                           (const MethodInfo_31E4BE0 *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          updated = UnityEngine_Object__op_Equality(v371, 0, 0);
          if ( (updated & 1) != 0 )
            return;
          if ( !v371 )
            goto LABEL_1114;
          SrcSpotBasePrefab__SetQaaScaleAnimQuick((SrcSpotBasePrefab_o *)v371, 1, 0);
          SrcSpotBasePrefab__SetQaaColorAnimQuick((SrcSpotBasePrefab_o *)v371, 1, 0);
          v374 = v371[9].fields.m_CachedPtr;
          if ( !v374 )
            goto LABEL_1114;
          *(_DWORD *)(v374 + 20) = 1;
LABEL_546:
          v369 = 1;
          v368 = (SrcSpotBasePrefab_o *)v371;
LABEL_547:
          SrcSpotBasePrefab__SetTouchType(v368, v369, 0);
          goto LABEL_18;
        case 'q':
          updated = (__int64)v23->fields.param;
          if ( !updated )
            goto LABEL_1114;
          updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0);
          if ( !updated )
            goto LABEL_1114;
          v375 = updated;
          if ( *(int *)(updated + 24) <= 1 )
            goto LABEL_1009;
          v376 = *v14;
          updated = System_Int32__Parse(*(System_String_o **)(updated + 32), 0);
          if ( !v376 )
            goto LABEL_1114;
          v377 = QuestAfterAction__GetMapComponent_object_(
                   v376,
                   0,
                   updated,
                   this,
                   (const MethodInfo_31E4BE0 *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          updated = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v377, 0, 0);
          if ( (updated & 1) != 0 )
            return;
          if ( *(_DWORD *)(v375 + 24) <= 1u )
            goto LABEL_1115;
          updated = System_Int32__Parse(*(System_String_o **)(v375 + 40), 0);
          if ( !v377 )
            goto LABEL_1114;
          LODWORD(v377[14].klass) = updated;
          SrcSpotBasePrefab__UpdateDisp((SrcSpotBasePrefab_o *)v377, 1, 0);
          goto LABEL_18;
        default:
          switch ( id )
          {
            case 200:
              if ( this->fields.IsMapModel )
              {
                v110 = sub_1C715FC(QuestAfterAction_StateMain___c__DisplayClass16_4_TypeInfo);
                QuestAfterAction_StateMain___c__DisplayClass16_4___ctor(
                  (QuestAfterAction_StateMain___c__DisplayClass16_4_o *)v110,
                  0);
                if ( !v110 )
                  goto LABEL_1114;
                *(_QWORD *)(v110 + 24) = v5;
                sub_1C71354((GrandQuestFolderBoardItem_o *)(v110 + 24), v5, v111, v112, v113, v114, v115, v116);
                v117 = *(_QWORD *)(v110 + 24);
                if ( !v117 )
                  goto LABEL_1114;
                v118 = *(QuestAfterAction_o **)(v117 + 24);
                updated = System_Int32__Parse(v23->fields.param, 0);
                if ( !v118 )
                  goto LABEL_1114;
                v119 = QuestAfterAction__GetMapComponent_object_(
                         v118,
                         1,
                         updated,
                         this,
                         (const MethodInfo_31E4BE0 *)Method_QuestAfterAction_GetMapComponent_ModelLineComponent___);
                *(_QWORD *)(v110 + 16) = v119;
                sub_1C71354(
                  (GrandQuestFolderBoardItem_o *)(v110 + 16),
                  (int32_t)v119,
                  v120,
                  v121,
                  v122,
                  v123,
                  v124,
                  v125);
                v126 = *(UnityEngine_Object_o **)(v110 + 16);
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                if ( !UnityEngine_Object__op_Equality(v126, 0, 0) )
                {
                  v127 = *(ModelLineComponent_o **)(v110 + 16);
                  v128 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
                  System_Action___ctor(
                    v128,
                    (Il2CppObject *)v110,
                    Method_QuestAfterAction_StateMain___c__DisplayClass16_4__UpdateAnim_b__3__,
                    0);
                  if ( !v127 )
                    goto LABEL_1114;
                  v130 = 2;
                  goto LABEL_762;
                }
              }
              else
              {
                v639 = sub_1C715FC(QuestAfterAction_StateMain___c__DisplayClass16_5_TypeInfo);
                QuestAfterAction_StateMain___c__DisplayClass16_5___ctor(
                  (QuestAfterAction_StateMain___c__DisplayClass16_5_o *)v639,
                  0);
                if ( !v639 )
                  goto LABEL_1114;
                *(_QWORD *)(v639 + 24) = v5;
                sub_1C71354((GrandQuestFolderBoardItem_o *)(v639 + 24), v5, v640, v641, v642, v643, v644, v645);
                v646 = *(_QWORD *)(v639 + 24);
                if ( !v646 )
                  goto LABEL_1114;
                v647 = *(QuestAfterAction_o **)(v646 + 24);
                updated = System_Int32__Parse(v23->fields.param, 0);
                if ( !v647 )
                  goto LABEL_1114;
                v648 = QuestAfterAction__GetMapComponent_object_(
                         v647,
                         1,
                         updated,
                         this,
                         (const MethodInfo_31E4BE0 *)Method_QuestAfterAction_GetMapComponent_srcLineSprite___);
                *(_QWORD *)(v639 + 16) = v648;
                sub_1C71354(
                  (GrandQuestFolderBoardItem_o *)(v639 + 16),
                  (int32_t)v648,
                  v649,
                  v650,
                  v651,
                  v652,
                  v653,
                  v654);
                v655 = *(UnityEngine_Object_o **)(v639 + 16);
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                if ( !UnityEngine_Object__op_Equality(v655, 0, 0) )
                {
                  v656 = *(srcLineSprite_o **)(v639 + 16);
                  v657 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
                  System_Action___ctor(
                    v657,
                    (Il2CppObject *)v639,
                    Method_QuestAfterAction_StateMain___c__DisplayClass16_5__UpdateAnim_b__4__,
                    0);
                  if ( !v656 )
                    goto LABEL_1114;
                  v658 = 2;
                  goto LABEL_965;
                }
              }
              return;
            case 201:
              if ( this->fields.IsMapModel )
              {
                v515 = sub_1C715FC(QuestAfterAction_StateMain___c__DisplayClass16_6_TypeInfo);
                QuestAfterAction_StateMain___c__DisplayClass16_6___ctor(
                  (QuestAfterAction_StateMain___c__DisplayClass16_6_o *)v515,
                  0);
                if ( !v515 )
                  goto LABEL_1114;
                *(_QWORD *)(v515 + 24) = v5;
                sub_1C71354((GrandQuestFolderBoardItem_o *)(v515 + 24), v5, v516, v517, v518, v519, v520, v521);
                v522 = *(_QWORD *)(v515 + 24);
                if ( !v522 )
                  goto LABEL_1114;
                v523 = *(QuestAfterAction_o **)(v522 + 24);
                updated = System_Int32__Parse(v23->fields.param, 0);
                if ( !v523 )
                  goto LABEL_1114;
                v524 = QuestAfterAction__GetMapComponent_object_(
                         v523,
                         1,
                         updated,
                         this,
                         (const MethodInfo_31E4BE0 *)Method_QuestAfterAction_GetMapComponent_ModelLineComponent___);
                *(_QWORD *)(v515 + 16) = v524;
                sub_1C71354(
                  (GrandQuestFolderBoardItem_o *)(v515 + 16),
                  (int32_t)v524,
                  v525,
                  v526,
                  v527,
                  v528,
                  v529,
                  v530);
                v531 = *(UnityEngine_Object_o **)(v515 + 16);
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                if ( !UnityEngine_Object__op_Equality(v531, 0, 0) )
                {
                  v127 = *(ModelLineComponent_o **)(v515 + 16);
                  v128 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
                  System_Action___ctor(
                    v128,
                    (Il2CppObject *)v515,
                    Method_QuestAfterAction_StateMain___c__DisplayClass16_6__UpdateAnim_b__5__,
                    0);
                  if ( !v127 )
                    goto LABEL_1114;
                  v130 = 3;
                  goto LABEL_762;
                }
              }
              else
              {
                v659 = sub_1C715FC(QuestAfterAction_StateMain___c__DisplayClass16_7_TypeInfo);
                QuestAfterAction_StateMain___c__DisplayClass16_7___ctor(
                  (QuestAfterAction_StateMain___c__DisplayClass16_7_o *)v659,
                  0);
                if ( !v659 )
                  goto LABEL_1114;
                *(_QWORD *)(v659 + 24) = v5;
                sub_1C71354((GrandQuestFolderBoardItem_o *)(v659 + 24), v5, v660, v661, v662, v663, v664, v665);
                v666 = *(_QWORD *)(v659 + 24);
                if ( !v666 )
                  goto LABEL_1114;
                v667 = *(QuestAfterAction_o **)(v666 + 24);
                updated = System_Int32__Parse(v23->fields.param, 0);
                if ( !v667 )
                  goto LABEL_1114;
                v668 = QuestAfterAction__GetMapComponent_object_(
                         v667,
                         1,
                         updated,
                         this,
                         (const MethodInfo_31E4BE0 *)Method_QuestAfterAction_GetMapComponent_srcLineSprite___);
                *(_QWORD *)(v659 + 16) = v668;
                sub_1C71354(
                  (GrandQuestFolderBoardItem_o *)(v659 + 16),
                  (int32_t)v668,
                  v669,
                  v670,
                  v671,
                  v672,
                  v673,
                  v674);
                v675 = *(UnityEngine_Object_o **)(v659 + 16);
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                if ( !UnityEngine_Object__op_Equality(v675, 0, 0) )
                {
                  v656 = *(srcLineSprite_o **)(v659 + 16);
                  v657 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
                  System_Action___ctor(
                    v657,
                    (Il2CppObject *)v659,
                    Method_QuestAfterAction_StateMain___c__DisplayClass16_7__UpdateAnim_b__6__,
                    0);
                  if ( !v656 )
                    goto LABEL_1114;
                  v658 = 3;
                  goto LABEL_965;
                }
              }
              return;
            case 202:
              if ( this->fields.IsMapModel )
              {
                v532 = sub_1C715FC(QuestAfterAction_StateMain___c__DisplayClass16_8_TypeInfo);
                QuestAfterAction_StateMain___c__DisplayClass16_8___ctor(
                  (QuestAfterAction_StateMain___c__DisplayClass16_8_o *)v532,
                  0);
                if ( !v532 )
                  goto LABEL_1114;
                *(_QWORD *)(v532 + 24) = v5;
                sub_1C71354((GrandQuestFolderBoardItem_o *)(v532 + 24), v5, v533, v534, v535, v536, v537, v538);
                v539 = *(_QWORD *)(v532 + 24);
                if ( !v539 )
                  goto LABEL_1114;
                v540 = *(QuestAfterAction_o **)(v539 + 24);
                updated = System_Int32__Parse(v23->fields.param, 0);
                if ( !v540 )
                  goto LABEL_1114;
                v541 = QuestAfterAction__GetMapComponent_object_(
                         v540,
                         1,
                         updated,
                         this,
                         (const MethodInfo_31E4BE0 *)Method_QuestAfterAction_GetMapComponent_ModelLineComponent___);
                *(_QWORD *)(v532 + 16) = v541;
                sub_1C71354(
                  (GrandQuestFolderBoardItem_o *)(v532 + 16),
                  (int32_t)v541,
                  v542,
                  v543,
                  v544,
                  v545,
                  v546,
                  v547);
                v548 = *(UnityEngine_Object_o **)(v532 + 16);
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                if ( !UnityEngine_Object__op_Equality(v548, 0, 0) )
                {
                  v127 = *(ModelLineComponent_o **)(v532 + 16);
                  v128 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
                  System_Action___ctor(
                    v128,
                    (Il2CppObject *)v532,
                    Method_QuestAfterAction_StateMain___c__DisplayClass16_8__UpdateAnim_b__7__,
                    0);
                  if ( !v127 )
                    goto LABEL_1114;
                  v130 = 4;
LABEL_762:
                  ModelLineComponent__SetState(v127, v130, v128, v129);
                }
              }
              else
              {
                v676 = sub_1C715FC(QuestAfterAction_StateMain___c__DisplayClass16_9_TypeInfo);
                QuestAfterAction_StateMain___c__DisplayClass16_9___ctor(
                  (QuestAfterAction_StateMain___c__DisplayClass16_9_o *)v676,
                  0);
                if ( !v676 )
                  goto LABEL_1114;
                *(_QWORD *)(v676 + 24) = v5;
                sub_1C71354((GrandQuestFolderBoardItem_o *)(v676 + 24), v5, v677, v678, v679, v680, v681, v682);
                v683 = *(_QWORD *)(v676 + 24);
                if ( !v683 )
                  goto LABEL_1114;
                v684 = *(QuestAfterAction_o **)(v683 + 24);
                updated = System_Int32__Parse(v23->fields.param, 0);
                if ( !v684 )
                  goto LABEL_1114;
                v685 = QuestAfterAction__GetMapComponent_object_(
                         v684,
                         1,
                         updated,
                         this,
                         (const MethodInfo_31E4BE0 *)Method_QuestAfterAction_GetMapComponent_srcLineSprite___);
                *(_QWORD *)(v676 + 16) = v685;
                sub_1C71354(
                  (GrandQuestFolderBoardItem_o *)(v676 + 16),
                  (int32_t)v685,
                  v686,
                  v687,
                  v688,
                  v689,
                  v690,
                  v691);
                v692 = *(UnityEngine_Object_o **)(v676 + 16);
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                if ( !UnityEngine_Object__op_Equality(v692, 0, 0) )
                {
                  v656 = *(srcLineSprite_o **)(v676 + 16);
                  v657 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
                  System_Action___ctor(
                    v657,
                    (Il2CppObject *)v676,
                    Method_QuestAfterAction_StateMain___c__DisplayClass16_9__UpdateAnim_b__8__,
                    0);
                  if ( !v656 )
                    goto LABEL_1114;
                  v658 = 4;
LABEL_965:
                  srcLineSprite__SetState(v656, v658, v657, 0);
                }
              }
              return;
            case 203:
              IsMapModel = this->fields.IsMapModel;
              v550 = *v14;
              updated = System_Int32__Parse(v23->fields.param, 0);
              if ( !v550 )
                goto LABEL_1114;
              if ( IsMapModel )
              {
                v551 = (UnityEngine_Object_o *)QuestAfterAction__GetMapComponent_object_(
                                                 v550,
                                                 1,
                                                 updated,
                                                 this,
                                                 (const MethodInfo_31E4BE0 *)Method_QuestAfterAction_GetMapComponent_ModelLineComponent___);
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                updated = UnityEngine_Object__op_Equality(v551, 0, 0);
                if ( (updated & 1) != 0 )
                  return;
                if ( !v551 )
                  goto LABEL_1114;
                ModelLineComponent__SetQuestAfterActionScaleAnim_36482068((ModelLineComponent_o *)v551, 0, 0.0, v552);
                v553 = v551[3].klass;
                if ( !v553 )
                  goto LABEL_1114;
              }
              else
              {
                v693 = (UnityEngine_Object_o *)QuestAfterAction__GetMapComponent_object_(
                                                 v550,
                                                 1,
                                                 updated,
                                                 this,
                                                 (const MethodInfo_31E4BE0 *)Method_QuestAfterAction_GetMapComponent_srcLineSprite___);
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                updated = UnityEngine_Object__op_Equality(v693, 0, 0);
                if ( (updated & 1) != 0 )
                  return;
                if ( !v693 )
                  goto LABEL_1114;
                srcLineSprite__SetQaaScaleAnimQuick((srcLineSprite_o *)v693, 0, 0);
                v553 = v693[5].monitor;
                if ( !v553 )
                  goto LABEL_1114;
              }
              goto LABEL_971;
            case 204:
              v554 = this->fields.IsMapModel;
              v555 = *v14;
              updated = System_Int32__Parse(v23->fields.param, 0);
              if ( !v555 )
                goto LABEL_1114;
              if ( v554 )
              {
                v556 = (UnityEngine_Object_o *)QuestAfterAction__GetMapComponent_object_(
                                                 v555,
                                                 1,
                                                 updated,
                                                 this,
                                                 (const MethodInfo_31E4BE0 *)Method_QuestAfterAction_GetMapComponent_ModelLineComponent___);
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                updated = UnityEngine_Object__op_Equality(v556, 0, 0);
                if ( (updated & 1) != 0 )
                  return;
                if ( !v556 )
                  goto LABEL_1114;
                ModelLineComponent__SetQuestAfterActionScaleAnim_36482068((ModelLineComponent_o *)v556, 1, 0.0, v557);
                ModelLineComponent__SetQuestAfterActionColorAnim_36482544((ModelLineComponent_o *)v556, 0, 0.0, v558);
                v559 = v556[3].klass;
                if ( !v559 )
                  goto LABEL_1114;
              }
              else
              {
                v694 = (UnityEngine_Object_o *)QuestAfterAction__GetMapComponent_object_(
                                                 v555,
                                                 1,
                                                 updated,
                                                 this,
                                                 (const MethodInfo_31E4BE0 *)Method_QuestAfterAction_GetMapComponent_srcLineSprite___);
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                updated = UnityEngine_Object__op_Equality(v694, 0, 0);
                if ( (updated & 1) != 0 )
                  return;
                if ( !v694 )
                  goto LABEL_1114;
                srcLineSprite__SetQaaScaleAnimQuick((srcLineSprite_o *)v694, 1, 0);
                srcLineSprite__SetQaaColorAnimQuick((srcLineSprite_o *)v694, 0, 0);
                v559 = v694[5].monitor;
                if ( !v559 )
                  goto LABEL_1114;
              }
              v695 = 2;
              goto LABEL_984;
            case 205:
              v560 = this->fields.IsMapModel;
              v561 = *v14;
              updated = System_Int32__Parse(v23->fields.param, 0);
              if ( !v561 )
                goto LABEL_1114;
              if ( v560 )
              {
                v562 = (UnityEngine_Object_o *)QuestAfterAction__GetMapComponent_object_(
                                                 v561,
                                                 1,
                                                 updated,
                                                 this,
                                                 (const MethodInfo_31E4BE0 *)Method_QuestAfterAction_GetMapComponent_ModelLineComponent___);
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                updated = UnityEngine_Object__op_Equality(v562, 0, 0);
                if ( (updated & 1) != 0 )
                  return;
                if ( !v562 )
                  goto LABEL_1114;
                ModelLineComponent__SetQuestAfterActionScaleAnim_36482068((ModelLineComponent_o *)v562, 1, 0.0, v563);
                ModelLineComponent__SetQuestAfterActionColorAnim_36482544((ModelLineComponent_o *)v562, 1, 0.0, v564);
                v559 = v562[3].klass;
                if ( !v559 )
                  goto LABEL_1114;
              }
              else
              {
                v696 = (UnityEngine_Object_o *)QuestAfterAction__GetMapComponent_object_(
                                                 v561,
                                                 1,
                                                 updated,
                                                 this,
                                                 (const MethodInfo_31E4BE0 *)Method_QuestAfterAction_GetMapComponent_srcLineSprite___);
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                updated = UnityEngine_Object__op_Equality(v696, 0, 0);
                if ( (updated & 1) != 0 )
                  return;
                if ( !v696 )
                  goto LABEL_1114;
                srcLineSprite__SetQaaScaleAnimQuick((srcLineSprite_o *)v696, 1, 0);
                srcLineSprite__SetQaaColorAnimQuick((srcLineSprite_o *)v696, 1, 0);
                v559 = v696[5].monitor;
                if ( !v559 )
                  goto LABEL_1114;
              }
              v695 = 1;
LABEL_984:
              v559[4] = v695;
              goto LABEL_18;
            default:
              if ( id )
                return;
              goto LABEL_18;
          }
      }
    }
    switch ( id )
    {
      case 300:
      case 305:
        updated = (__int64)v23->fields.param;
        if ( !updated )
          goto LABEL_1114;
        updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0);
        if ( !updated )
          goto LABEL_1114;
        v69 = *(_QWORD *)(updated + 24);
        v70 = updated;
        if ( (int)v69 <= 0 )
          break;
        if ( (int)v69 > 2 )
        {
          v565 = System_Single__Parse(*(System_String_o **)(updated + 48), 0);
          v69 = *(_QWORD *)(v70 + 24);
          v71 = v565 * 0.001;
        }
        else
        {
          v71 = 0.5;
        }
        if ( (int)v69 >= 2 )
        {
          updated = System_Int32__Parse(*(System_String_o **)(v70 + 40), 0);
          v69 = *(_QWORD *)(v70 + 24);
          v210 = updated;
        }
        else
        {
          v210 = 15;
        }
        if ( !(_DWORD)v69 )
          goto LABEL_1115;
        v568 = *v14;
        updated = System_Int32__Parse(*(System_String_o **)(v70 + 32), 0);
        if ( !v568 )
          goto LABEL_1114;
        v570 = (UnityEngine_Object_o *)QuestAfterAction__GetMapGameObject(v568, 0, updated, this, v569);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Equality(v570, 0, 0) )
          return;
        v779 = GameObjectExtensions__GetLocalPosition((UnityEngine_GameObject_o *)v570, 0);
        v571 = v779.fields.x;
        v572 = v779.fields.y;
        v573 = v779.fields.z;
        if ( !this->fields.IsMapModel )
          goto LABEL_812;
        if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        if ( !byte_4CC12CE )
        {
          sub_1C713B0(&TerminalSceneComponent_TypeInfo);
          byte_4CC12CE = 1;
        }
        updated = (__int64)TerminalSceneComponent_TypeInfo;
        if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          updated = (__int64)TerminalSceneComponent_TypeInfo;
        }
        v574 = **(_QWORD **)(updated + 184);
        if ( !v574 )
          goto LABEL_1114;
        updated = *(_QWORD *)(v574 + 264);
        if ( !updated )
          goto LABEL_1114;
        v780.fields.x = v571;
        v780.fields.y = v572;
        v780.fields.z = v573;
        v781 = ScrTerminalMap__ConvertLocalToScreenPosition((ScrTerminalMap_o *)updated, v780, 0);
        v571 = v781.fields.x;
        v572 = v781.fields.y;
        v573 = v781.fields.z;
LABEL_812:
        if ( !FSUtility_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
        updated = FSUtility__IsUnderVista(0);
        if ( (updated & 1) != 0 )
          goto LABEL_1033;
        if ( !*(_DWORD *)(v70 + 24) )
          goto LABEL_1115;
        v576 = *(System_String_o **)(v70 + 32);
        updated = System_String__op_Equality(v576, (System_String_o *)StringLiteral_1300/*"10703"*/, 0);
        if ( (updated & 1) != 0 )
        {
          v572 = v572 + -50.0;
        }
        else
        {
          updated = System_String__op_Equality(v576, (System_String_o *)StringLiteral_1374/*"30101"*/, 0);
          if ( (updated & 1) != 0 )
            v572 = v572 + -50.0;
        }
LABEL_1033:
        v588 = *(_DWORD *)(v70 + 24);
        if ( v23->fields.id == 305 )
        {
LABEL_1034:
          if ( v588 < 4 )
            goto LABEL_1035;
          if ( v588 == 4 )
          {
            if ( !*v14 )
              goto LABEL_1114;
            mMapCamera = (*v14)->fields.mMapCamera;
          }
          else
          {
            updated = System_Int32__Parse(*(System_String_o **)(v70 + 64), 0);
            if ( !*v14 )
              goto LABEL_1114;
            mMapCamera = (*v14)->fields.mMapCamera;
            if ( (int)updated >= 1 )
            {
              *(_QWORD *)&v725.fields.hasValue = &v763;
              v723 = v571;
              v724 = v572;
              *(_QWORD *)&v725.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
              v726 = v573;
              *(_QWORD *)&v763.fields.hasValue = 0;
              *(_QWORD *)&v763.fields.value.fields.y = 0;
LABEL_1094:
              System_Nullable_Vector3____ctor(v725, *(UnityEngine_Vector3_o *)&v723, v575);
              if ( *(_DWORD *)(v70 + 24) <= 3u )
                goto LABEL_1115;
              v745 = *(System_String_o **)(v70 + 56);
LABEL_1096:
              v746 = System_Single__Parse(v745, 0);
              p_size = (System_Nullable_float__o)&size;
              size = 0;
              System_Nullable_float____ctor(
                p_size,
                v746,
                (const MethodInfo_393B43C *)Method_System_Nullable_float___ctor__);
              if ( !mMapCamera )
                goto LABEL_1114;
              v748 = size;
              MapCamera__StartAutoWork(mMapCamera, v71, v763, v748, v210, 0, 0);
              break;
            }
          }
          *(_QWORD *)&v729.fields.hasValue = &v763;
          v727 = v571;
          v728 = v572;
          *(_QWORD *)&v729.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
          v730 = v573;
          *(_QWORD *)&v763.fields.hasValue = 0;
          *(_QWORD *)&v763.fields.value.fields.y = 0;
LABEL_1099:
          System_Nullable_Vector3____ctor(v729, *(UnityEngine_Vector3_o *)&v727, v575);
          if ( *(_DWORD *)(v70 + 24) <= 3u )
            goto LABEL_1115;
          v749 = *(System_String_o **)(v70 + 56);
LABEL_1101:
          v750 = System_Single__Parse(v749, 0);
          v751 = (System_Nullable_float__o)&size;
          size = 0;
          System_Nullable_float____ctor(v751, v750, (const MethodInfo_393B43C *)Method_System_Nullable_float___ctor__);
          v752 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
          System_Action___ctor(v752, (Il2CppObject *)this, (intptr_t)this->klass->vtable._14_EndAnim.method, 0);
          if ( !mMapCamera )
            goto LABEL_1114;
          v753 = v763;
          v754 = size;
          v755 = mMapCamera;
          v756 = v71;
          v757 = v210;
          goto LABEL_1103;
        }
LABEL_853:
        if ( v588 < 4 )
        {
LABEL_1035:
          if ( !*v14 )
            goto LABEL_1114;
          v590 = (*v14)->fields.mMapCamera;
          goto LABEL_1037;
        }
        updated = System_Int32__Parse(*(System_String_o **)(v70 + 56), 0);
        v589 = *v14;
        if ( !*v14 )
          goto LABEL_1114;
        v590 = v589->fields.mMapCamera;
        if ( (int)updated < 1 )
        {
LABEL_1037:
          v309 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
          System_Action___ctor(v309, (Il2CppObject *)this, (intptr_t)this->klass->vtable._14_EndAnim.method, 0);
          if ( !v590 )
            goto LABEL_1114;
          v310 = v590;
          v311 = v571;
          v312 = v572;
          v313 = v573;
          goto LABEL_1056;
        }
        if ( !v590 )
          goto LABEL_1114;
        v591 = v589->fields.mMapCamera;
        v592 = v571;
        v593 = v572;
        v594 = v573;
        goto LABEL_1072;
      case 301:
      case 306:
        updated = (__int64)v23->fields.param;
        if ( !updated )
          goto LABEL_1114;
        updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0);
        if ( !updated )
          goto LABEL_1114;
        v206 = *(_QWORD *)(updated + 24);
        v70 = updated;
        if ( (int)v206 <= 0 )
          break;
        if ( (int)v206 > 2 )
        {
          v566 = System_Single__Parse(*(System_String_o **)(updated + 48), 0);
          v206 = *(_QWORD *)(v70 + 24);
          v71 = v566 * 0.001;
        }
        else
        {
          v71 = 0.5;
        }
        if ( (int)v206 >= 2 )
        {
          updated = System_Int32__Parse(*(System_String_o **)(v70 + 40), 0);
          v206 = *(_QWORD *)(v70 + 24);
          v210 = updated;
        }
        else
        {
          v210 = 15;
        }
        if ( !(_DWORD)v206 )
          goto LABEL_1115;
        v577 = *v14;
        updated = System_Int32__Parse(*(System_String_o **)(v70 + 32), 0);
        if ( !v577 )
          goto LABEL_1114;
        v579 = (UnityEngine_Object_o *)QuestAfterAction__GetMapGameObject(v577, 1, updated, this, v578);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        updated = UnityEngine_Object__op_Equality(v579, 0, 0);
        if ( (updated & 1) != 0 )
          return;
        if ( this->fields.IsMapModel )
        {
          if ( !v579 )
            goto LABEL_1114;
          updated = (__int64)UnityEngine_GameObject__GetComponent_object_(
                               (UnityEngine_GameObject_o *)v579,
                               (const MethodInfo_31A2ED0 *)Method_UnityEngine_GameObject_GetComponent_ModelLineComponent___);
          if ( !updated )
            goto LABEL_1114;
          Position = GameObjectExtensions__GetPosition((UnityEngine_GameObject_o *)*(_QWORD *)(updated + 32), 0);
          v580 = Position.fields.x;
          v581 = Position.fields.y;
          v582 = Position.fields.z;
          if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          if ( !byte_4CC12CE )
          {
            sub_1C713B0(&TerminalSceneComponent_TypeInfo);
            byte_4CC12CE = 1;
          }
          updated = (__int64)TerminalSceneComponent_TypeInfo;
          if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            updated = (__int64)TerminalSceneComponent_TypeInfo;
          }
          v583 = **(_QWORD **)(updated + 184);
          if ( !v583 )
            goto LABEL_1114;
          updated = *(_QWORD *)(v583 + 264);
          if ( !updated )
            goto LABEL_1114;
          v783.fields.x = v580;
          v783.fields.y = v581;
          v783.fields.z = v582;
          v784 = ScrTerminalMap__ConvertWorldToScreenPosition((ScrTerminalMap_o *)updated, v783, 0);
        }
        else
        {
          v784 = GameObjectExtensions__GetLocalPosition((UnityEngine_GameObject_o *)v579, 0);
        }
        v697 = v784.fields.x;
        v698 = v784.fields.y;
        v699 = v784.fields.z;
        if ( !FSUtility_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
        updated = FSUtility__IsUnderVista(0);
        if ( (updated & 1) != 0 )
          goto LABEL_1045;
        if ( !*(_DWORD *)(v70 + 24) )
          goto LABEL_1115;
        v700 = *(System_String_o **)(v70 + 32);
        updated = System_String__op_Equality(v700, (System_String_o *)StringLiteral_1300/*"10703"*/, 0);
        if ( (updated & 1) != 0 )
        {
          v698 = v698 + -95.0;
        }
        else
        {
          updated = System_String__op_Equality(v700, (System_String_o *)StringLiteral_1375/*"30102"*/, 0);
          if ( (updated & 1) != 0 )
            v698 = v698 + 45.0;
        }
LABEL_1045:
        v721 = *(_DWORD *)(v70 + 24);
        if ( v23->fields.id == 306 )
        {
          if ( v721 >= 4 )
          {
            if ( v721 == 4 )
            {
              if ( !*v14 )
                goto LABEL_1114;
              mMapCamera = (*v14)->fields.mMapCamera;
            }
            else
            {
              updated = System_Int32__Parse(*(System_String_o **)(v70 + 64), 0);
              if ( !*v14 )
                goto LABEL_1114;
              mMapCamera = (*v14)->fields.mMapCamera;
              if ( (int)updated >= 1 )
              {
                *(_QWORD *)&v763.fields.hasValue = 0;
                *(_QWORD *)&v763.fields.value.fields.y = 0;
                *(_QWORD *)&v725.fields.hasValue = &v763;
                v723 = v697;
                *(_QWORD *)&v725.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
                v724 = v698;
                v726 = v699;
                goto LABEL_1094;
              }
            }
            v763 = (System_Nullable_Vector3__o)0LL;
            *(_QWORD *)&v729.fields.hasValue = &v763;
            v727 = v697;
            *(_QWORD *)&v729.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
            v728 = v698;
            v730 = v699;
            goto LABEL_1099;
          }
          goto LABEL_1052;
        }
        if ( v721 < 4 )
        {
LABEL_1052:
          if ( !*v14 )
            goto LABEL_1114;
          v722 = (*v14)->fields.mMapCamera;
LABEL_1054:
          v309 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
          System_Action___ctor(v309, (Il2CppObject *)this, (intptr_t)this->klass->vtable._14_EndAnim.method, 0);
          if ( !v722 )
            goto LABEL_1114;
          v310 = v722;
          v311 = v697;
          v312 = v698;
          v313 = v699;
          goto LABEL_1056;
        }
        updated = System_Int32__Parse(*(System_String_o **)(v70 + 56), 0);
        v731 = *v14;
        if ( !*v14 )
          goto LABEL_1114;
        v722 = v731->fields.mMapCamera;
        if ( (int)updated < 1 )
          goto LABEL_1054;
        if ( !v722 )
          goto LABEL_1114;
        v591 = v731->fields.mMapCamera;
        v592 = v697;
        v593 = v698;
        v594 = v699;
        goto LABEL_1072;
      case 302:
      case 307:
        updated = (__int64)v23->fields.param;
        if ( !updated )
          goto LABEL_1114;
        updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0);
        if ( !updated )
          goto LABEL_1114;
        v207 = *(_QWORD *)(updated + 24);
        v70 = updated;
        if ( (int)v207 <= 0 )
          break;
        if ( (int)v207 > 2 )
        {
          v567 = System_Single__Parse(*(System_String_o **)(updated + 48), 0);
          v207 = *(_QWORD *)(v70 + 24);
          v71 = v567 * 0.001;
        }
        else
        {
          v71 = 0.5;
        }
        if ( (int)v207 >= 2 )
        {
          updated = System_Int32__Parse(*(System_String_o **)(v70 + 40), 0);
          v207 = *(_QWORD *)(v70 + 24);
          v210 = updated;
        }
        else
        {
          v210 = 15;
        }
        if ( !(_DWORD)v207 )
          goto LABEL_1115;
        v584 = *v14;
        updated = System_Int32__Parse(*(System_String_o **)(v70 + 32), 0);
        if ( !v584 )
          goto LABEL_1114;
        v586 = (UnityEngine_Object_o *)QuestAfterAction__GetMapGameObject(v584, 2, updated, this, v585);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Equality(v586, 0, 0) )
          return;
        v785 = GameObjectExtensions__GetLocalPosition((UnityEngine_GameObject_o *)v586, 0);
        v571 = v785.fields.x;
        v572 = v785.fields.y;
        v573 = v785.fields.z;
        if ( !this->fields.IsMapModel )
          goto LABEL_852;
        if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        if ( !byte_4CC12CE )
        {
          sub_1C713B0(&TerminalSceneComponent_TypeInfo);
          byte_4CC12CE = 1;
        }
        updated = (__int64)TerminalSceneComponent_TypeInfo;
        if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          updated = (__int64)TerminalSceneComponent_TypeInfo;
        }
        v587 = **(_QWORD **)(updated + 184);
        if ( !v587 )
          goto LABEL_1114;
        updated = *(_QWORD *)(v587 + 264);
        if ( !updated )
          goto LABEL_1114;
        v786.fields.x = v571;
        v786.fields.y = v572;
        v786.fields.z = v573;
        v787 = ScrTerminalMap__ConvertLocalToScreenPosition((ScrTerminalMap_o *)updated, v786, 0);
        v571 = v787.fields.x;
        v572 = v787.fields.y;
        v573 = v787.fields.z;
LABEL_852:
        v588 = *(_DWORD *)(v70 + 24);
        if ( v23->fields.id != 307 )
          goto LABEL_853;
        goto LABEL_1034;
      case 303:
      case 308:
        updated = (__int64)v23->fields.param;
        if ( !updated )
          goto LABEL_1114;
        updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0);
        if ( !updated )
          goto LABEL_1114;
        v208 = updated;
        if ( *(int *)(updated + 24) < 4 )
          break;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_4CC3F58 )
        {
          sub_1C713B0(&TerminalPramsManager_TypeInfo);
          byte_4CC3F58 = 1;
        }
        updated = (__int64)TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          updated = (__int64)TerminalPramsManager_TypeInfo;
        }
        if ( *(_BYTE *)(*(_QWORD *)(updated + 184) + 105LL) )
          break;
        if ( *(_DWORD *)(v208 + 24) <= 2u )
          goto LABEL_1115;
        v209 = System_Single__Parse(*(System_String_o **)(v208 + 48), 0) * 0.001;
        v71 = v209 >= 0.0 ? v209 : 0.5;
        if ( *(_DWORD *)(v208 + 24) <= 3u )
          goto LABEL_1115;
        v210 = System_Int32__Parse(*(System_String_o **)(v208 + 56), 0);
        if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        if ( !byte_4CC12CE )
        {
          sub_1C713B0(&TerminalSceneComponent_TypeInfo);
          byte_4CC12CE = 1;
        }
        updated = (__int64)TerminalSceneComponent_TypeInfo;
        if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          updated = (__int64)TerminalSceneComponent_TypeInfo;
        }
        v211 = **(_QWORD **)(updated + 184);
        if ( !v211 )
          goto LABEL_1114;
        if ( !*(_DWORD *)(v208 + 24) )
          goto LABEL_1115;
        v212 = *(ScrTerminalMap_o **)(v211 + 264);
        v213 = System_Single__Parse(*(System_String_o **)(v208 + 32), 0);
        if ( *(_DWORD *)(v208 + 24) <= 1u )
          goto LABEL_1115;
        v214 = v213;
        v215 = System_Single__Parse(*(System_String_o **)(v208 + 40), 0);
        if ( !v212 )
          goto LABEL_1114;
        v771 = ScrTerminalMap__LocalPosFromCoord(v212, v214, v215, 0.0, 0.0, 0);
        v217 = *(_DWORD *)(v208 + 24);
        v218 = v771.fields.x;
        v219 = v771.fields.y;
        v220 = v771.fields.z;
        if ( v23->fields.id == 308 )
        {
          if ( v217 >= 5 )
          {
            if ( v217 == 5 )
            {
              if ( !*v14 )
                goto LABEL_1114;
              mMapCamera = (*v14)->fields.mMapCamera;
            }
            else
            {
              updated = System_Int32__Parse(*(System_String_o **)(v208 + 72), 0);
              if ( !*v14 )
                goto LABEL_1114;
              mMapCamera = (*v14)->fields.mMapCamera;
              if ( (int)updated >= 1 )
              {
                *(_QWORD *)&v769.fields.hasValue = &v763;
                v790.fields.x = v218;
                v790.fields.y = v219;
                *(_QWORD *)&v769.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
                v790.fields.z = v220;
                v763 = (System_Nullable_Vector3__o)0LL;
                System_Nullable_Vector3____ctor(v769, v790, v216);
                if ( *(_DWORD *)(v208 + 24) <= 4u )
                  goto LABEL_1115;
                v745 = *(System_String_o **)(v208 + 64);
                goto LABEL_1096;
              }
            }
            *(_QWORD *)&v770.fields.hasValue = &v763;
            v791.fields.x = v218;
            v791.fields.y = v219;
            *(_QWORD *)&v770.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
            v791.fields.z = v220;
            v763 = (System_Nullable_Vector3__o)0LL;
            System_Nullable_Vector3____ctor(v770, v791, v216);
            if ( *(_DWORD *)(v208 + 24) <= 4u )
              goto LABEL_1115;
            v749 = *(System_String_o **)(v208 + 64);
            goto LABEL_1101;
          }
          goto LABEL_1015;
        }
        if ( v217 < 5 )
        {
LABEL_1015:
          if ( !*v14 )
            goto LABEL_1114;
          v708 = (*v14)->fields.mMapCamera;
LABEL_1017:
          v309 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
          System_Action___ctor(v309, (Il2CppObject *)this, (intptr_t)this->klass->vtable._14_EndAnim.method, 0);
          if ( !v708 )
            goto LABEL_1114;
          v310 = v708;
          v311 = v218;
          v312 = v219;
          v313 = v220;
LABEL_1056:
          v314 = v71;
          v315 = v210;
LABEL_1057:
          MapCamera__StartAutoMove(v310, *(UnityEngine_Vector3_o *)&v311, v314, v315, v309, 0);
          return;
        }
        updated = System_Int32__Parse(*(System_String_o **)(v208 + 64), 0);
        v732 = *v14;
        if ( !*v14 )
          goto LABEL_1114;
        v708 = v732->fields.mMapCamera;
        if ( (int)updated < 1 )
          goto LABEL_1017;
        if ( !v708 )
          goto LABEL_1114;
        v591 = v732->fields.mMapCamera;
        v592 = v218;
        v593 = v219;
        v594 = v220;
LABEL_1072:
        MapCamera__StartAutoMove(v591, *(UnityEngine_Vector3_o *)&v592, v71, v210, 0, 0);
        break;
      case 304:
        updated = (__int64)v23->fields.param;
        if ( !updated )
          goto LABEL_1114;
        updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0);
        if ( !updated )
          goto LABEL_1114;
        v251 = *(_DWORD *)(updated + 24);
        v252 = updated;
        if ( v251 <= 1 )
          break;
        v253 = System_Single__Parse(*(System_String_o **)(updated + 32), 0);
        if ( *(_DWORD *)(v252 + 24) <= 1u )
          goto LABEL_1115;
        v254 = v253;
        v255 = System_Single__Parse(*(System_String_o **)(v252 + 40), 0);
        if ( !*v14 )
          goto LABEL_1114;
        v256 = (*v14)->fields.mMapCamera;
        v257 = v255 * 0.001;
        if ( v257 >= 0.0 )
          v258 = v257;
        else
          v258 = 0.5;
        if ( v251 < 3 )
        {
          v259 = 5;
        }
        else
        {
          if ( *(_DWORD *)(v252 + 24) <= 2u )
            goto LABEL_1115;
          v259 = System_Int32__Parse(*(System_String_o **)(v252 + 48), 0);
        }
        v638 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
        System_Action___ctor(
          v638,
          (Il2CppObject *)v5,
          Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__9__,
          0);
        if ( !v256 )
          goto LABEL_1114;
        MapCamera__StartAutoZoom(v256, v254, v258, v259, v638, 0);
        return;
      default:
        if ( id == 350 )
        {
          updated = (__int64)v23->fields.param;
          if ( !updated )
            goto LABEL_1114;
          updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0);
          if ( !updated )
            goto LABEL_1114;
          v201 = updated;
          if ( *(int *)(updated + 24) > 0 )
          {
            v202 = System_Int32__Parse(*(System_String_o **)(updated + 32), 0);
            if ( v202 >= 1 )
            {
              v203 = v202;
              v204 = 0.5;
              if ( *(int *)(v201 + 24) > 1 )
              {
                v205 = System_Int32__Parse(*(System_String_o **)(v201 + 40), 0);
                if ( *(int *)(v201 + 24) >= 3 )
                  v204 = System_Single__Parse(*(System_String_o **)(v201 + 48), 0) * 0.001;
              }
              else
              {
                v205 = 15;
              }
              if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
              if ( !byte_4CC12CE )
              {
                sub_1C713B0(&TerminalSceneComponent_TypeInfo);
                byte_4CC12CE = 1;
              }
              updated = (__int64)TerminalSceneComponent_TypeInfo;
              if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
                updated = (__int64)TerminalSceneComponent_TypeInfo;
              }
              v701 = **(_QWORD **)(updated + 184);
              if ( !v701 )
                goto LABEL_1114;
              v702 = *(ScrTerminalMap_o **)(v701 + 264);
              v703 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
              System_Action___ctor(
                v703,
                (Il2CppObject *)v5,
                Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__10__,
                0);
              if ( !v702 )
                goto LABEL_1114;
              ScrTerminalMap__RequestMapMove_37370680(v702, v203, v204, v205, v703, 0);
              return;
            }
          }
        }
        else
        {
          if ( (unsigned int)(id - 351) >= 2 )
            return;
          updated = (__int64)v23->fields.param;
          if ( !updated )
            goto LABEL_1114;
          updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0);
          if ( !updated )
            goto LABEL_1114;
          v292 = updated;
          if ( *(int *)(updated + 24) > 4 )
          {
            v293 = System_Single__Parse(*(System_String_o **)(updated + 32), 0);
            if ( *(_DWORD *)(v292 + 24) <= 1u )
              goto LABEL_1115;
            v294 = v293;
            v295 = System_Single__Parse(*(System_String_o **)(v292 + 40), 0);
            if ( *(_DWORD *)(v292 + 24) <= 2u )
              goto LABEL_1115;
            v296 = v295;
            v297 = System_Single__Parse(*(System_String_o **)(v292 + 48), 0);
            if ( *(_DWORD *)(v292 + 24) <= 3u )
              goto LABEL_1115;
            v298 = v297;
            v299 = System_Single__Parse(*(System_String_o **)(v292 + 56), 0);
            if ( *(_DWORD *)(v292 + 24) <= 4u )
              goto LABEL_1115;
            v300 = v299;
            v301 = System_Int32__Parse(*(System_String_o **)(v292 + 64), 0);
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            if ( !byte_4CC12CE )
            {
              sub_1C713B0(&TerminalSceneComponent_TypeInfo);
              byte_4CC12CE = 1;
            }
            updated = (__int64)TerminalSceneComponent_TypeInfo;
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
              updated = (__int64)TerminalSceneComponent_TypeInfo;
            }
            v302 = **(_QWORD **)(updated + 184);
            if ( !v302 )
              goto LABEL_1114;
            updated = *(_QWORD *)(v302 + 264);
            if ( !updated )
              goto LABEL_1114;
            v772.fields.y = v296;
            v772.fields.z = v298;
            v303 = v300 * 0.001;
            v772.fields.x = v294;
            v773 = ScrTerminalMap__ConvertLocalToScreenPosition((ScrTerminalMap_o *)updated, v772, 0);
            v305 = v773.fields.x;
            v306 = v773.fields.y;
            v307 = v773.fields.z;
            if ( v23->fields.id != 352 || *(int *)(v292 + 24) < 6 )
            {
              if ( !*v14 )
                goto LABEL_1114;
              v308 = (*v14)->fields.mMapCamera;
              v309 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
              System_Action___ctor(
                v309,
                (Il2CppObject *)v5,
                Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__12__,
                0);
              if ( !v308 )
                goto LABEL_1114;
              v310 = v308;
              v311 = v305;
              v312 = v306;
              v313 = v307;
              v314 = v303;
              v315 = v301;
              goto LABEL_1057;
            }
            if ( !*v14 )
              goto LABEL_1114;
            v758 = (*v14)->fields.mMapCamera;
            *(_QWORD *)&v768.fields.hasValue = &v763;
            *(_QWORD *)&v768.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
            v763 = (System_Nullable_Vector3__o)0LL;
            System_Nullable_Vector3____ctor(v768, v773, v304);
            if ( *(_DWORD *)(v292 + 24) <= 5u )
              goto LABEL_1115;
            v759 = System_Single__Parse(*(System_String_o **)(v292 + 72), 0);
            v760 = (System_Nullable_float__o)&size;
            size = 0;
            System_Nullable_float____ctor(v760, v759, (const MethodInfo_393B43C *)Method_System_Nullable_float___ctor__);
            v752 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
            System_Action___ctor(
              v752,
              (Il2CppObject *)v5,
              Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__11__,
              0);
            if ( !v758 )
              goto LABEL_1114;
            v753 = v763;
            v754 = size;
            v755 = v758;
            v756 = v303;
            v757 = v301;
LABEL_1103:
            MapCamera__StartAutoWork(v755, v756, v753, v754, v757, v752, 0);
            return;
          }
        }
        break;
    }
LABEL_1009:
    ((void (__fastcall *)(QuestAfterAction_StateMain_o *, const MethodInfo *))this->klass->vtable._14_EndAnim.methodPtr)(
      this,
      this->klass->vtable._14_EndAnim.method);
    return;
  }
  if ( isQuickUpdate )
  {
LABEL_18:
    ((void (__fastcall *)(QuestAfterAction_StateMain_o *, const MethodInfo *))this->klass->vtable._14_EndAnim.methodPtr)(
      this,
      this->klass->vtable._14_EndAnim.method);
LABEL_19:
    ((void (__fastcall *)(QuestAfterAction_StateMain_o *, QuestAfterAction_o *, const MethodInfo *))this->klass->vtable._13_UpdateAnim.methodPtr)(
      this,
      *v14,
      this->klass->vtable._13_UpdateAnim.method);
  }
}


void QuestAfterAction_StateMain__Wait(QuestAfterAction_StateMain_o *this, const MethodInfo *method)
{
  QuestAfterAction_StateMain_c *klass; // x8

  if ( this->fields.waitTime > 0.0
    && (float)(UnityEngine_Time__get_realtimeSinceStartup(0) - this->fields.waitStartTime) >= this->fields.waitTime )
  {
    klass = this->klass;
    this->fields.waitTime = 0.0;
    ((void (__fastcall *)(QuestAfterAction_StateMain_o *, const MethodInfo *))klass->vtable._14_EndAnim.methodPtr)(
      this,
      klass->vtable._14_EndAnim.method);
  }
}


void QuestAfterAction_StateMain__begin(
        QuestAfterAction_StateMain_o *this,
        QuestAfterAction_o *that,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  TerminalSceneComponent_c *screenCollider; // x0
  __int64 v11; // x1
  struct QuestAfterAction_o *v12; // x8
  struct TerminalSceneComponent_o *mInstance; // x8

  if ( (byte_4CC3F48 & 1) == 0 )
  {
    sub_1C713B0(&TerminalSceneComponent_TypeInfo);
    byte_4CC3F48 = 1;
  }
  this->fields.that = that;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields, (int32_t)that, (int32_t)method, v3, v4, v5, v6, v7);
  v12 = this->fields.that;
  if ( !v12 )
    goto LABEL_14;
  screenCollider = (TerminalSceneComponent_c *)v12->fields.screenCollider;
  if ( !screenCollider )
    goto LABEL_14;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)screenCollider, 1, 0);
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4CC12CE )
  {
    sub_1C713B0(&TerminalSceneComponent_TypeInfo);
    byte_4CC12CE = 1;
  }
  screenCollider = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    screenCollider = TerminalSceneComponent_TypeInfo;
  }
  mInstance = screenCollider->static_fields->mInstance;
  if ( !mInstance || (screenCollider = (TerminalSceneComponent_c *)mInstance->fields.mTerminalMap) == 0 )
LABEL_14:
    sub_1C71608(screenCollider, v11);
  this->fields.IsMapModel = ScrTerminalMap__IsMapModel((ScrTerminalMap_o *)screenCollider, 0);
}


void QuestAfterAction_StateMain__end(
        QuestAfterAction_StateMain_o *this,
        QuestAfterAction_o *that,
        const MethodInfo *method)
{
  ;
}


QuestAfterAction_Command_array *QuestAfterAction_StateMain__get_CommandBuf(
        QuestAfterAction_StateMain_o *this,
        const MethodInfo *method)
{
  struct QuestAfterAction_o *that; // x8

  that = this->fields.that;
  if ( !that )
    sub_1C71608(this, method);
  return that->fields.commandBuf;
}


int32_t QuestAfterAction_StateMain__get_CommandIndex(QuestAfterAction_StateMain_o *this, const MethodInfo *method)
{
  struct QuestAfterAction_o *that; // x8

  that = this->fields.that;
  if ( !that )
    sub_1C71608(this, method);
  return that->fields.commandIdx;
}


UnityEngine_GameObject_o *QuestAfterAction_StateMain__get_SubGimmickRoot(
        QuestAfterAction_StateMain_o *this,
        const MethodInfo *method)
{
  TerminalSceneComponent_c *v2; // x0
  struct TerminalSceneComponent_o *mInstance; // x8
  struct ScrTerminalMap_o *mTerminalMap; // x8

  if ( (byte_4CC3F47 & 1) == 0 )
  {
    sub_1C713B0(&TerminalSceneComponent_TypeInfo);
    byte_4CC3F47 = 1;
  }
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4CC12CE )
  {
    sub_1C713B0(&TerminalSceneComponent_TypeInfo);
    byte_4CC12CE = 1;
  }
  v2 = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v2 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = v2->static_fields->mInstance;
  if ( !mInstance || (mTerminalMap = mInstance->fields.mTerminalMap) == 0 )
    sub_1C71608(v2, method);
  return mTerminalMap->fields.subRootGimmickP;
}


// local variable allocation has failed, the output may be wrong!
void QuestAfterAction_StateMain__onEnd(QuestAfterAction_StateMain_o *this, bool deleteKey, const MethodInfo *method)
{
  TerminalSceneComponent_c *v5; // x0
  TerminalSceneComponent_o *mInstance; // x0
  const MethodInfo *v7; // x1
  TerminalPramsManager_c *v8; // x0

  if ( (byte_4CC3F4A & 1) == 0 )
  {
    sub_1C713B0(&TerminalPramsManager_TypeInfo);
    sub_1C713B0(&TerminalSceneComponent_TypeInfo);
    sub_1C713B0(&StringLiteral_16731/*"afterActionBk"*/);
    byte_4CC3F4A = 1;
  }
  if ( deleteKey )
    UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_16731/*"afterActionBk"*/, 0);
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4CC12CE )
  {
    sub_1C713B0(&TerminalSceneComponent_TypeInfo);
    byte_4CC12CE = 1;
  }
  v5 = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v5 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = v5->static_fields->mInstance;
  if ( !mInstance )
    goto LABEL_20;
  TerminalSceneComponent__ClearTransitionInfo(mInstance, 0);
  QuestAfterAction_StateMain__StartMapGimmick(this, v7);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4CC3F5C )
  {
    sub_1C713B0(&TerminalPramsManager_TypeInfo);
    byte_4CC3F5C = 1;
  }
  v8 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v8 = TerminalPramsManager_TypeInfo;
  }
  v8->static_fields->_IsTransOrdealCall_k__BackingField = 0;
  mInstance = (TerminalSceneComponent_o *)this->fields.that;
  if ( !mInstance )
LABEL_20:
    sub_1C71608(mInstance, deleteKey);
  QuestAfterAction__OnEnd((QuestAfterAction_o *)mInstance, (const MethodInfo *)deleteKey);
}


void QuestAfterAction_StateMain__set_CommandIndex(
        QuestAfterAction_StateMain_o *this,
        int32_t value,
        const MethodInfo *method)
{
  struct QuestAfterAction_o *that; // x8

  that = this->fields.that;
  if ( !that )
    sub_1C71608(this, value);
  that->fields.commandIdx = value;
}


void QuestAfterAction_StateMain__update(
        QuestAfterAction_StateMain_o *this,
        QuestAfterAction_o *that,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x1

  ((void (__fastcall *)(QuestAfterAction_StateMain_o *, QuestAfterAction_o *, const MethodInfo *))this->klass->vtable._13_UpdateAnim.methodPtr)(
    this,
    that,
    this->klass->vtable._13_UpdateAnim.method);
  QuestAfterAction_StateMain__Wait(this, v4);
}


void QuestAfterAction_StateMain___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4CC3FFA & 1) == 0 )
  {
    sub_1C713B0(&QuestAfterAction_StateMain___c_TypeInfo);
    byte_4CC3FFA = 1;
  }
  v1 = (Il2CppObject *)sub_1C715FC(QuestAfterAction_StateMain___c_TypeInfo);
  System_Object___ctor(v1, 0);
  QuestAfterAction_StateMain___c_TypeInfo->static_fields->__9 = (struct QuestAfterAction_StateMain___c_o *)v1;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)QuestAfterAction_StateMain___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void QuestAfterAction_StateMain___c___ctor(QuestAfterAction_StateMain___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void QuestAfterAction_StateMain___c___UpdateAnim_b__16_22(
        QuestAfterAction_StateMain___c_o *this,
        const MethodInfo *method)
{
  ;
}


void QuestAfterAction_StateMain___c___UpdateAnim_b__16_26(
        QuestAfterAction_StateMain___c_o *this,
        const MethodInfo *method)
{
  TerminalPramsManager_c *v2; // x0
  int32_t WarId_k__BackingField; // w19
  int32_t QuestId_k__BackingField; // w20
  QuestAfterAction_StateMain___c_c *v5; // x8
  int32_t PhaseCnt_k__BackingField; // w23
  ScriptManager_CallbackFunc_o *_9__16_27; // x21
  Il2CppObject *v8; // x22
  struct QuestAfterAction_StateMain___c_StaticFields *static_fields; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7

  if ( (byte_4CC3FFB & 1) == 0 )
  {
    sub_1C713B0(&ScriptManager_CallbackFunc_TypeInfo);
    sub_1C713B0(&ScriptManager_TypeInfo);
    sub_1C713B0(&TerminalPramsManager_TypeInfo);
    sub_1C713B0(&Method_QuestAfterAction_StateMain___c__UpdateAnim_b__16_27__);
    sub_1C713B0(&QuestAfterAction_StateMain___c_TypeInfo);
    byte_4CC3FFB = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4CC1762 )
  {
    sub_1C713B0(&TerminalPramsManager_TypeInfo);
    byte_4CC1762 = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  WarId_k__BackingField = v2->static_fields->_WarId_k__BackingField;
  if ( !byte_4CC13B1 )
  {
    sub_1C713B0(&TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
    byte_4CC13B1 = 1;
  }
  if ( !v2->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v2);
    v2 = TerminalPramsManager_TypeInfo;
  }
  QuestId_k__BackingField = v2->static_fields->_QuestId_k__BackingField;
  if ( !byte_4CC13B0 )
  {
    sub_1C713B0(&TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
    byte_4CC13B0 = 1;
  }
  if ( !v2->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v2);
    v2 = TerminalPramsManager_TypeInfo;
  }
  v5 = QuestAfterAction_StateMain___c_TypeInfo;
  PhaseCnt_k__BackingField = v2->static_fields->_PhaseCnt_k__BackingField;
  if ( !QuestAfterAction_StateMain___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestAfterAction_StateMain___c_TypeInfo);
    v5 = QuestAfterAction_StateMain___c_TypeInfo;
  }
  _9__16_27 = v5->static_fields->__9__16_27;
  if ( !_9__16_27 )
  {
    if ( !v5->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v5);
      v5 = QuestAfterAction_StateMain___c_TypeInfo;
    }
    v8 = (Il2CppObject *)v5->static_fields->__9;
    _9__16_27 = (ScriptManager_CallbackFunc_o *)sub_1C715FC(ScriptManager_CallbackFunc_TypeInfo);
    ScriptManager_CallbackFunc___ctor(_9__16_27, v8, Method_QuestAfterAction_StateMain___c__UpdateAnim_b__16_27__, 0);
    static_fields = QuestAfterAction_StateMain___c_TypeInfo->static_fields;
    static_fields->__9__16_27 = _9__16_27;
    sub_1C71354(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__16_27,
      (int32_t)_9__16_27,
      v10,
      v11,
      v12,
      v13,
      v14,
      v15);
  }
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  ScriptManager__PlayBattleStart(
    WarId_k__BackingField,
    QuestId_k__BackingField,
    PhaseCnt_k__BackingField + 1,
    _9__16_27,
    0,
    0,
    -1,
    0,
    0,
    0,
    0);
}


void QuestAfterAction_StateMain___c___UpdateAnim_b__16_27(
        QuestAfterAction_StateMain___c_o *this,
        bool isExit,
        const MethodInfo *method)
{
  QuestAfterAction_StateMain___c_c *v3; // x0
  NetworkManager_ResultCallbackFunc_o *_9__16_28; // x19
  Il2CppObject *v5; // x20
  struct QuestAfterAction_StateMain___c_StaticFields *static_fields; // x0
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  Il2CppObject *Request_object; // x19
  TerminalPramsManager_c *v14; // x0
  int32_t QuestId_k__BackingField; // w21
  int32_t PhaseCnt_k__BackingField; // w20
  System_Int32_array *SelectRouteArray; // x0
  __int64 v18; // x1

  if ( (byte_4CC3FFC & 1) == 0 )
  {
    sub_1C713B0(&Method_NetworkManager_getRequest_BattleScenarioRequest___);
    sub_1C713B0(&NetworkManager_TypeInfo);
    sub_1C713B0(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1C713B0(&ScriptManager_TypeInfo);
    sub_1C713B0(&TerminalPramsManager_TypeInfo);
    sub_1C713B0(&Method_QuestAfterAction_StateMain___c__UpdateAnim_b__16_28__);
    sub_1C713B0(&QuestAfterAction_StateMain___c_TypeInfo);
    byte_4CC3FFC = 1;
  }
  v3 = QuestAfterAction_StateMain___c_TypeInfo;
  if ( !QuestAfterAction_StateMain___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestAfterAction_StateMain___c_TypeInfo);
    v3 = QuestAfterAction_StateMain___c_TypeInfo;
  }
  _9__16_28 = v3->static_fields->__9__16_28;
  if ( !_9__16_28 )
  {
    if ( !v3->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v3);
      v3 = QuestAfterAction_StateMain___c_TypeInfo;
    }
    v5 = (Il2CppObject *)v3->static_fields->__9;
    _9__16_28 = (NetworkManager_ResultCallbackFunc_o *)sub_1C715FC(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      _9__16_28,
      v5,
      Method_QuestAfterAction_StateMain___c__UpdateAnim_b__16_28__,
      0);
    static_fields = QuestAfterAction_StateMain___c_TypeInfo->static_fields;
    static_fields->__9__16_28 = _9__16_28;
    sub_1C71354(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__16_28,
      (int32_t)_9__16_28,
      v7,
      v8,
      v9,
      v10,
      v11,
      v12);
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     _9__16_28,
                     (const MethodInfo_31D69E8 *)Method_NetworkManager_getRequest_BattleScenarioRequest___);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4CC13B1 )
  {
    sub_1C713B0(&TerminalPramsManager_TypeInfo);
    byte_4CC13B1 = 1;
  }
  v14 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v14 = TerminalPramsManager_TypeInfo;
  }
  QuestId_k__BackingField = v14->static_fields->_QuestId_k__BackingField;
  if ( !byte_4CC13B0 )
  {
    sub_1C713B0(&TerminalPramsManager_TypeInfo);
    v14 = TerminalPramsManager_TypeInfo;
    byte_4CC13B0 = 1;
  }
  if ( !v14->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v14);
    v14 = TerminalPramsManager_TypeInfo;
  }
  PhaseCnt_k__BackingField = v14->static_fields->_PhaseCnt_k__BackingField;
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  SelectRouteArray = ScriptManager__GetSelectRouteArray(0);
  if ( !Request_object )
    sub_1C71608(SelectRouteArray, v18);
  BattleScenarioRequest__beginRequest(
    (BattleScenarioRequest_o *)Request_object,
    QuestId_k__BackingField,
    PhaseCnt_k__BackingField + 1,
    SelectRouteArray,
    0);
}


void QuestAfterAction_StateMain___c___UpdateAnim_b__16_28(
        QuestAfterAction_StateMain___c_o *this,
        System_String_o *jsonstr,
        const MethodInfo *method)
{
  Il2CppObject *v4; // x19
  System_Object_array *v5; // x19
  TerminalPramsManager_c *v6; // x0
  Il2CppObject *Instance; // x0
  __int64 v8; // x1

  if ( (byte_4CC3FFD & 1) == 0 )
  {
    sub_1C713B0(&Method_JsonManager_DeserializeArray_BattleResultComponent_resultData___);
    sub_1C713B0(&JsonManager_TypeInfo);
    sub_1C713B0(&ScriptManager_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C713B0(&TerminalPramsManager_TypeInfo);
    sub_1C713B0(&StringLiteral_16731/*"afterActionBk"*/);
    sub_1C713B0(&StringLiteral_15808/*"["*/);
    sub_1C713B0(&StringLiteral_16058/*"]"*/);
    sub_1C713B0(&StringLiteral_13726/*"TerminalTransitionInfoMissionId"*/);
    byte_4CC3FFD = 1;
  }
  v4 = (Il2CppObject *)System_String__Concat_64069988(
                         (System_String_o *)StringLiteral_15808/*"["*/,
                         jsonstr,
                         (System_String_o *)StringLiteral_16058/*"]"*/,
                         0);
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v5 = JsonManager__DeserializeArray_object_(
         v4,
         (const MethodInfo_31BADBC *)Method_JsonManager_DeserializeArray_BattleResultComponent_resultData___);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_16731/*"afterActionBk"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13726/*"TerminalTransitionInfoMissionId"*/, 0);
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  ScriptManager__ClearSelectRouteArray(0);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  TerminalPramsManager__ReceiveQuestEndResultInfo((BattleResultComponent_resultData_array *)v5, 1, 0);
  if ( !byte_4CC1B52 )
  {
    sub_1C713B0(&TerminalPramsManager_TypeInfo);
    byte_4CC1B52 = 1;
  }
  v6 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v6 = TerminalPramsManager_TypeInfo;
  }
  v6->static_fields->_IsAutoResume_k__BackingField = 1;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1C71608(0, v8);
  AvalonSceneManager__transitionSceneRefresh((AvalonSceneManager_o *)Instance, 34, 1, 0, 0, 0);
}


void QuestAfterAction_StateMain___c__DisplayClass16_0___ctor(
        QuestAfterAction_StateMain___c__DisplayClass16_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void QuestAfterAction_StateMain___c__DisplayClass16_0___UpdateAnim_b__10(
        QuestAfterAction_StateMain___c__DisplayClass16_0_o *this,
        const MethodInfo *method)
{
  struct QuestAfterAction_StateMain_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C71608(0, method);
  ((void (__fastcall *)(struct QuestAfterAction_StateMain_o *, const MethodInfo *))_4__this->klass->vtable._14_EndAnim.methodPtr)(
    _4__this,
    _4__this->klass->vtable._14_EndAnim.method);
}


void QuestAfterAction_StateMain___c__DisplayClass16_0___UpdateAnim_b__11(
        QuestAfterAction_StateMain___c__DisplayClass16_0_o *this,
        const MethodInfo *method)
{
  struct QuestAfterAction_StateMain_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C71608(0, method);
  ((void (__fastcall *)(struct QuestAfterAction_StateMain_o *, const MethodInfo *))_4__this->klass->vtable._14_EndAnim.methodPtr)(
    _4__this,
    _4__this->klass->vtable._14_EndAnim.method);
}


void QuestAfterAction_StateMain___c__DisplayClass16_0___UpdateAnim_b__12(
        QuestAfterAction_StateMain___c__DisplayClass16_0_o *this,
        const MethodInfo *method)
{
  struct QuestAfterAction_StateMain_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C71608(0, method);
  ((void (__fastcall *)(struct QuestAfterAction_StateMain_o *, const MethodInfo *))_4__this->klass->vtable._14_EndAnim.methodPtr)(
    _4__this,
    _4__this->klass->vtable._14_EndAnim.method);
}


void QuestAfterAction_StateMain___c__DisplayClass16_0___UpdateAnim_b__23(
        QuestAfterAction_StateMain___c__DisplayClass16_0_o *this,
        const MethodInfo *method)
{
  struct QuestAfterAction_StateMain_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (((void (__fastcall *)(struct QuestAfterAction_StateMain_o *, const MethodInfo *))_4__this->klass->vtable._14_EndAnim.methodPtr)(
          _4__this,
          _4__this->klass->vtable._14_EndAnim.method),
        (_4__this = this->fields.__4__this) == 0) )
  {
    sub_1C71608(_4__this, method);
  }
  ((void (__fastcall *)(struct QuestAfterAction_StateMain_o *, struct QuestAfterAction_o *, const MethodInfo *))_4__this->klass->vtable._13_UpdateAnim.methodPtr)(
    _4__this,
    this->fields.that,
    _4__this->klass->vtable._13_UpdateAnim.method);
}


void QuestAfterAction_StateMain___c__DisplayClass16_0___UpdateAnim_b__29(
        QuestAfterAction_StateMain___c__DisplayClass16_0_o *this,
        const MethodInfo *method)
{
  struct QuestAfterAction_StateMain_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C71608(0, method);
  ((void (__fastcall *)(struct QuestAfterAction_StateMain_o *, const MethodInfo *))_4__this->klass->vtable._14_EndAnim.methodPtr)(
    _4__this,
    _4__this->klass->vtable._14_EndAnim.method);
}


void QuestAfterAction_StateMain___c__DisplayClass16_0___UpdateAnim_b__30(
        QuestAfterAction_StateMain___c__DisplayClass16_0_o *this,
        const MethodInfo *method)
{
  struct QuestAfterAction_StateMain_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C71608(0, method);
  ((void (__fastcall *)(struct QuestAfterAction_StateMain_o *, const MethodInfo *))_4__this->klass->vtable._14_EndAnim.methodPtr)(
    _4__this,
    _4__this->klass->vtable._14_EndAnim.method);
}


void QuestAfterAction_StateMain___c__DisplayClass16_0___UpdateAnim_b__31(
        QuestAfterAction_StateMain___c__DisplayClass16_0_o *this,
        const MethodInfo *method)
{
  struct QuestAfterAction_StateMain_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C71608(0, method);
  ((void (__fastcall *)(struct QuestAfterAction_StateMain_o *, const MethodInfo *))_4__this->klass->vtable._14_EndAnim.methodPtr)(
    _4__this,
    _4__this->klass->vtable._14_EndAnim.method);
}


void QuestAfterAction_StateMain___c__DisplayClass16_0___UpdateAnim_b__32(
        QuestAfterAction_StateMain___c__DisplayClass16_0_o *this,
        const MethodInfo *method)
{
  struct QuestAfterAction_StateMain_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C71608(0, method);
  ((void (__fastcall *)(struct QuestAfterAction_StateMain_o *, const MethodInfo *))_4__this->klass->vtable._14_EndAnim.methodPtr)(
    _4__this,
    _4__this->klass->vtable._14_EndAnim.method);
}


void QuestAfterAction_StateMain___c__DisplayClass16_0___UpdateAnim_b__33(
        QuestAfterAction_StateMain___c__DisplayClass16_0_o *this,
        const MethodInfo *method)
{
  struct QuestAfterAction_StateMain_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C71608(0, method);
  ((void (__fastcall *)(struct QuestAfterAction_StateMain_o *, const MethodInfo *))_4__this->klass->vtable._14_EndAnim.methodPtr)(
    _4__this,
    _4__this->klass->vtable._14_EndAnim.method);
}


void QuestAfterAction_StateMain___c__DisplayClass16_0___UpdateAnim_b__9(
        QuestAfterAction_StateMain___c__DisplayClass16_0_o *this,
        const MethodInfo *method)
{
  struct QuestAfterAction_StateMain_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C71608(0, method);
  ((void (__fastcall *)(struct QuestAfterAction_StateMain_o *, const MethodInfo *))_4__this->klass->vtable._14_EndAnim.methodPtr)(
    _4__this,
    _4__this->klass->vtable._14_EndAnim.method);
}


void QuestAfterAction_StateMain___c__DisplayClass16_1___ctor(
        QuestAfterAction_StateMain___c__DisplayClass16_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void QuestAfterAction_StateMain___c__DisplayClass16_1___UpdateAnim_b__0(
        QuestAfterAction_StateMain___c__DisplayClass16_1_o *this,
        const MethodInfo *method)
{
  struct SrcSpotBasePrefab_o *spot; // x0
  struct MapControl_SpotInfo_o *mMapCtrl_SpotInfo; // x8
  struct QuestAfterAction_StateMain___c__DisplayClass16_0_o *CS___8__locals1; // x8

  spot = this->fields.spot;
  if ( !spot
    || (mMapCtrl_SpotInfo = spot->fields.mMapCtrl_SpotInfo) == 0
    || (mMapCtrl_SpotInfo->fields.dispType = 0,
        SrcSpotBasePrefab__SetTouchType(spot, 0, 0),
        (CS___8__locals1 = this->fields.CS___8__locals1) == 0)
    || (spot = (struct SrcSpotBasePrefab_o *)CS___8__locals1->fields.__4__this) == 0 )
  {
    sub_1C71608(spot, method);
  }
  ((void (__fastcall *)(struct SrcSpotBasePrefab_o *, Il2CppClass **))spot->klass[1]._1.nestedTypes)(
    spot,
    spot->klass[1]._1.implementedInterfaces);
}


void QuestAfterAction_StateMain___c__DisplayClass16_10___ctor(
        QuestAfterAction_StateMain___c__DisplayClass16_10_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void QuestAfterAction_StateMain___c__DisplayClass16_10___UpdateAnim_b__13(
        QuestAfterAction_StateMain___c__DisplayClass16_10_o *this,
        const MethodInfo *method)
{
  struct MapGimmickComponent_o *mapGimmick; // x8
  struct MapControl_MapGimmickInfo_o *mMapCtrl_MapGimmickInfo; // x8

  mapGimmick = this->fields.mapGimmick;
  if ( !mapGimmick || (mMapCtrl_MapGimmickInfo = mapGimmick->fields.mMapCtrl_MapGimmickInfo) == 0 )
    sub_1C71608(this, method);
  mMapCtrl_MapGimmickInfo->fields.dispType = 0;
}


void QuestAfterAction_StateMain___c__DisplayClass16_10___UpdateAnim_b__14(
        QuestAfterAction_StateMain___c__DisplayClass16_10_o *this,
        const MethodInfo *method)
{
  struct MapGimmickComponent_o *mapGimmick; // x8
  struct MapControl_MapGimmickInfo_o *mMapCtrl_MapGimmickInfo; // x8
  struct QuestAfterAction_StateMain___c__DisplayClass16_0_o *CS___8__locals10; // x8

  mapGimmick = this->fields.mapGimmick;
  if ( !mapGimmick
    || (mMapCtrl_MapGimmickInfo = mapGimmick->fields.mMapCtrl_MapGimmickInfo) == 0
    || (mMapCtrl_MapGimmickInfo->fields.dispType = 0, (CS___8__locals10 = this->fields.CS___8__locals10) == 0)
    || (this = (QuestAfterAction_StateMain___c__DisplayClass16_10_o *)CS___8__locals10->fields.__4__this) == 0 )
  {
    sub_1C71608(this, method);
  }
  ((void (__fastcall *)(QuestAfterAction_StateMain___c__DisplayClass16_10_o *, Il2CppClass **))this->klass[1]._1.nestedTypes)(
    this,
    this->klass[1]._1.implementedInterfaces);
}


void QuestAfterAction_StateMain___c__DisplayClass16_11___ctor(
        QuestAfterAction_StateMain___c__DisplayClass16_11_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void QuestAfterAction_StateMain___c__DisplayClass16_11___UpdateAnim_b__15(
        QuestAfterAction_StateMain___c__DisplayClass16_11_o *this,
        const MethodInfo *method)
{
  struct MapGimmickComponent_o *mapGimmick; // x8
  struct MapControl_MapGimmickInfo_o *mMapCtrl_MapGimmickInfo; // x8

  mapGimmick = this->fields.mapGimmick;
  if ( !mapGimmick || (mMapCtrl_MapGimmickInfo = mapGimmick->fields.mMapCtrl_MapGimmickInfo) == 0 )
    sub_1C71608(this, method);
  mMapCtrl_MapGimmickInfo->fields.dispType = 1;
}


void QuestAfterAction_StateMain___c__DisplayClass16_11___UpdateAnim_b__16(
        QuestAfterAction_StateMain___c__DisplayClass16_11_o *this,
        const MethodInfo *method)
{
  struct MapGimmickComponent_o *mapGimmick; // x8
  struct MapControl_MapGimmickInfo_o *mMapCtrl_MapGimmickInfo; // x8
  struct QuestAfterAction_StateMain___c__DisplayClass16_0_o *CS___8__locals11; // x8

  mapGimmick = this->fields.mapGimmick;
  if ( !mapGimmick
    || (mMapCtrl_MapGimmickInfo = mapGimmick->fields.mMapCtrl_MapGimmickInfo) == 0
    || (mMapCtrl_MapGimmickInfo->fields.dispType = 1, (CS___8__locals11 = this->fields.CS___8__locals11) == 0)
    || (this = (QuestAfterAction_StateMain___c__DisplayClass16_11_o *)CS___8__locals11->fields.__4__this) == 0 )
  {
    sub_1C71608(this, method);
  }
  ((void (__fastcall *)(QuestAfterAction_StateMain___c__DisplayClass16_11_o *, Il2CppClass **))this->klass[1]._1.nestedTypes)(
    this,
    this->klass[1]._1.implementedInterfaces);
}


void QuestAfterAction_StateMain___c__DisplayClass16_12___ctor(
        QuestAfterAction_StateMain___c__DisplayClass16_12_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void QuestAfterAction_StateMain___c__DisplayClass16_12___UpdateAnim_b__17(
        QuestAfterAction_StateMain___c__DisplayClass16_12_o *this,
        const MethodInfo *method)
{
  struct MapGimmickComponent_o *mapGimmick; // x8
  struct MapControl_MapGimmickInfo_o *mMapCtrl_MapGimmickInfo; // x8
  struct QuestAfterAction_StateMain___c__DisplayClass16_0_o *CS___8__locals12; // x8

  mapGimmick = this->fields.mapGimmick;
  if ( !mapGimmick
    || (mMapCtrl_MapGimmickInfo = mapGimmick->fields.mMapCtrl_MapGimmickInfo) == 0
    || (mMapCtrl_MapGimmickInfo->fields.dispType = 1, (CS___8__locals12 = this->fields.CS___8__locals12) == 0)
    || (this = (QuestAfterAction_StateMain___c__DisplayClass16_12_o *)CS___8__locals12->fields.__4__this) == 0 )
  {
    sub_1C71608(this, method);
  }
  ((void (__fastcall *)(QuestAfterAction_StateMain___c__DisplayClass16_12_o *, Il2CppClass **))this->klass[1]._1.nestedTypes)(
    this,
    this->klass[1]._1.implementedInterfaces);
}


void QuestAfterAction_StateMain___c__DisplayClass16_13___ctor(
        QuestAfterAction_StateMain___c__DisplayClass16_13_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void QuestAfterAction_StateMain___c__DisplayClass16_13___UpdateAnim_b__18(
        QuestAfterAction_StateMain___c__DisplayClass16_13_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x19
  UnityEngine_Component_o *mapGimmick; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  UnityEngine_Component_o *v12; // x22
  Il2CppObject *v13; // x0
  UnityEngine_Color_o **v14; // x21
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  struct System_String_array *paramsStr; // x8
  struct System_String_array *v22; // x8
  UnityEngine_Color_o *v23; // x20
  float v24; // s0
  UITweener_o *v25; // x20
  EventDelegate_Callback_o *v26; // x21
  UnityEngine_Color_o color; // [xsp+10h] [xbp-40h] BYREF

  if ( (byte_4CC3FFE & 1) == 0 )
  {
    sub_1C713B0(&EventDelegate_Callback_TypeInfo);
    sub_1C713B0(&Method_UnityEngine_GameObject_AddComponent_TweenColor___);
    sub_1C713B0(&Method_UnityEngine_GameObject_GetComponentInChildren_UISprite___);
    sub_1C713B0(&Method_QuestAfterAction_StateMain___c__DisplayClass16_14__UpdateAnim_b__19__);
    sub_1C713B0(&QuestAfterAction_StateMain___c__DisplayClass16_14_TypeInfo);
    byte_4CC3FFE = 1;
  }
  *(_QWORD *)&color.fields.r = 0;
  *(_QWORD *)&color.fields.b = 0;
  v3 = sub_1C715FC(QuestAfterAction_StateMain___c__DisplayClass16_14_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !v3 )
    goto LABEL_18;
  *(_QWORD *)(v3 + 24) = this;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v3 + 24), (int32_t)this, v6, v7, v8, v9, v10, v11);
  mapGimmick = (UnityEngine_Component_o *)this->fields.mapGimmick;
  if ( !mapGimmick )
    goto LABEL_18;
  mapGimmick = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mapGimmick, 0);
  if ( !mapGimmick )
    goto LABEL_18;
  mapGimmick = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponentInChildren_object_(
                                            (UnityEngine_GameObject_o *)mapGimmick,
                                            (const MethodInfo_31A3134 *)Method_UnityEngine_GameObject_GetComponentInChildren_UISprite___);
  if ( !mapGimmick )
    goto LABEL_18;
  v12 = mapGimmick;
  mapGimmick = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mapGimmick, 0);
  if ( !mapGimmick )
    goto LABEL_18;
  v13 = UnityEngine_GameObject__AddComponent_object_(
          (UnityEngine_GameObject_o *)mapGimmick,
          (const MethodInfo_31A2DE8 *)Method_UnityEngine_GameObject_AddComponent_TweenColor___);
  *(_QWORD *)(v3 + 16) = v13;
  v14 = (UnityEngine_Color_o **)(v3 + 16);
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v3 + 16), (int32_t)v13, v15, v16, v17, v18, v19, v20);
  paramsStr = this->fields.paramsStr;
  if ( !paramsStr )
    goto LABEL_18;
  if ( LODWORD(paramsStr->max_length) <= 1 )
    goto LABEL_19;
  mapGimmick = (UnityEngine_Component_o *)UnityEngine_ColorUtility__TryParseHtmlString(paramsStr->m_Items[1], &color, 0);
  if ( !*v14
    || ((*v14)[8] = *(UnityEngine_Color_o *)((char *)&v12[6].klass + 4), !*v14)
    || ((*v14)[9] = color, (v22 = this->fields.paramsStr) == 0) )
  {
LABEL_18:
    sub_1C71608(mapGimmick, v5);
  }
  if ( LODWORD(v22->max_length) <= 2 )
LABEL_19:
    sub_1C71610(mapGimmick);
  v23 = *v14;
  v24 = System_Single__Parse(v22->m_Items[2], 0);
  if ( !v23 )
    goto LABEL_18;
  v23[3].fields.b = v24;
  mapGimmick = (UnityEngine_Component_o *)*v14;
  if ( !*v14 )
    goto LABEL_18;
  UITweener__PlayForward((UITweener_o *)mapGimmick, 0);
  v25 = *(UITweener_o **)(v3 + 16);
  v26 = (EventDelegate_Callback_o *)sub_1C715FC(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(
    v26,
    (Il2CppObject *)v3,
    Method_QuestAfterAction_StateMain___c__DisplayClass16_14__UpdateAnim_b__19__,
    0);
  if ( !v25 )
    goto LABEL_18;
  UITweener__SetOnFinished(v25, v26, 0);
}


void QuestAfterAction_StateMain___c__DisplayClass16_14___ctor(
        QuestAfterAction_StateMain___c__DisplayClass16_14_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void QuestAfterAction_StateMain___c__DisplayClass16_14___UpdateAnim_b__19(
        QuestAfterAction_StateMain___c__DisplayClass16_14_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *tween; // x20
  struct QuestAfterAction_StateMain_o *_4__this; // x0
  __int64 v5; // x1
  struct QuestAfterAction_StateMain___c__DisplayClass16_13_o *CS___8__locals14; // x8
  struct QuestAfterAction_StateMain___c__DisplayClass16_0_o *CS___8__locals13; // x8

  if ( (byte_4CC3FFF & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC3FFF = 1;
  }
  tween = (UnityEngine_Object_o *)this->fields.tween;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_71724608(tween, 0);
  CS___8__locals14 = this->fields.CS___8__locals14;
  if ( !CS___8__locals14
    || (CS___8__locals13 = CS___8__locals14->fields.CS___8__locals13) == 0
    || (_4__this = CS___8__locals13->fields.__4__this) == 0 )
  {
    sub_1C71608(_4__this, v5);
  }
  ((void (__fastcall *)(struct QuestAfterAction_StateMain_o *, const MethodInfo *))_4__this->klass->vtable._14_EndAnim.methodPtr)(
    _4__this,
    _4__this->klass->vtable._14_EndAnim.method);
}


void QuestAfterAction_StateMain___c__DisplayClass16_15___ctor(
        QuestAfterAction_StateMain___c__DisplayClass16_15_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void QuestAfterAction_StateMain___c__DisplayClass16_15___UpdateAnim_b__20(
        QuestAfterAction_StateMain___c__DisplayClass16_15_o *this,
        const MethodInfo *method)
{
  struct MapGimmickComponent_o *mapGimmick; // x8
  struct MapControl_MapGimmickInfo_o *mMapCtrl_MapGimmickInfo; // x8
  struct QuestAfterAction_StateMain___c__DisplayClass16_0_o *CS___8__locals15; // x8

  mapGimmick = this->fields.mapGimmick;
  if ( !mapGimmick
    || (mMapCtrl_MapGimmickInfo = mapGimmick->fields.mMapCtrl_MapGimmickInfo) == 0
    || (mMapCtrl_MapGimmickInfo->fields.dispType = 1, (CS___8__locals15 = this->fields.CS___8__locals15) == 0)
    || (this = (QuestAfterAction_StateMain___c__DisplayClass16_15_o *)CS___8__locals15->fields.__4__this) == 0 )
  {
    sub_1C71608(this, method);
  }
  ((void (__fastcall *)(QuestAfterAction_StateMain___c__DisplayClass16_15_o *, Il2CppClass **))this->klass[1]._1.nestedTypes)(
    this,
    this->klass[1]._1.implementedInterfaces);
}


void QuestAfterAction_StateMain___c__DisplayClass16_15___UpdateAnim_b__21(
        QuestAfterAction_StateMain___c__DisplayClass16_15_o *this,
        const MethodInfo *method)
{
  struct MapGimmickComponent_o *mapGimmick; // x8
  struct MapControl_MapGimmickInfo_o *mMapCtrl_MapGimmickInfo; // x8
  struct QuestAfterAction_StateMain___c__DisplayClass16_0_o *CS___8__locals15; // x8

  mapGimmick = this->fields.mapGimmick;
  if ( !mapGimmick
    || (mMapCtrl_MapGimmickInfo = mapGimmick->fields.mMapCtrl_MapGimmickInfo) == 0
    || (mMapCtrl_MapGimmickInfo->fields.dispType = 0, (CS___8__locals15 = this->fields.CS___8__locals15) == 0)
    || (this = (QuestAfterAction_StateMain___c__DisplayClass16_15_o *)CS___8__locals15->fields.__4__this) == 0 )
  {
    sub_1C71608(this, method);
  }
  ((void (__fastcall *)(QuestAfterAction_StateMain___c__DisplayClass16_15_o *, Il2CppClass **))this->klass[1]._1.nestedTypes)(
    this,
    this->klass[1]._1.implementedInterfaces);
}


void QuestAfterAction_StateMain___c__DisplayClass16_16___ctor(
        QuestAfterAction_StateMain___c__DisplayClass16_16_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void QuestAfterAction_StateMain___c__DisplayClass16_16___UpdateAnim_b__24(
        QuestAfterAction_StateMain___c__DisplayClass16_16_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  QuestEntity_o *questEntity; // x0
  void *image; // x8
  ScrTerminalListTop_o *v6; // x20
  int32_t name_high; // w21
  int namespaze; // w24
  System_Action_o *_9__25; // x22
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  clsQuestCheck_o *v16; // x19
  QuestAfterAction_StateMain___c_c *v17; // x8
  System_Action_o *_9__16_26; // x20
  Il2CppObject *v19; // x21
  struct QuestAfterAction_StateMain___c_StaticFields *static_fields; // x0
  int32_t v21; // w2
  int32_t v22; // w3
  System_String_o *v23; // x4
  int32_t v24; // w5
  int64_t v25; // x6
  System_String_o *v26; // x7

  if ( (byte_4CC4000 & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    sub_1C713B0(&TerminalPramsManager_TypeInfo);
    sub_1C713B0(&TerminalSceneComponent_TypeInfo);
    sub_1C713B0(&Method_QuestAfterAction_StateMain___c__UpdateAnim_b__16_26__);
    sub_1C713B0(&Method_QuestAfterAction_StateMain___c__DisplayClass16_16__UpdateAnim_b__25__);
    sub_1C713B0(&QuestAfterAction_StateMain___c_TypeInfo);
    byte_4CC4000 = 1;
  }
  questEntity = this->fields.questEntity;
  if ( !questEntity )
    goto LABEL_34;
  if ( QuestEntity__HasFlag(questEntity, 0x800000000000LL, 0) )
  {
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    if ( !byte_4CC12CE )
    {
      sub_1C713B0(&TerminalSceneComponent_TypeInfo);
      byte_4CC12CE = 1;
    }
    questEntity = (QuestEntity_o *)TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      questEntity = (QuestEntity_o *)TerminalSceneComponent_TypeInfo;
    }
    image = questEntity[1].klass->_1.image;
    if ( image )
    {
      v6 = (ScrTerminalListTop_o *)*((_QWORD *)image + 32);
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4CC13B1 )
      {
        sub_1C713B0(&TerminalPramsManager_TypeInfo);
        byte_4CC13B1 = 1;
      }
      questEntity = (QuestEntity_o *)TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        questEntity = (QuestEntity_o *)TerminalPramsManager_TypeInfo;
      }
      name_high = HIDWORD(questEntity[1].klass->_1.name);
      if ( !byte_4CC13B0 )
      {
        sub_1C713B0(&TerminalPramsManager_TypeInfo);
        questEntity = (QuestEntity_o *)TerminalPramsManager_TypeInfo;
        byte_4CC13B0 = 1;
      }
      if ( !questEntity[1].fields.type )
      {
        j_il2cpp_runtime_class_init_0(questEntity);
        questEntity = (QuestEntity_o *)TerminalPramsManager_TypeInfo;
      }
      namespaze = (int)questEntity[1].klass->_1.namespaze;
      _9__25 = this->fields.__9__25;
      if ( !_9__25 )
      {
        _9__25 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
        System_Action___ctor(
          _9__25,
          (Il2CppObject *)this,
          Method_QuestAfterAction_StateMain___c__DisplayClass16_16__UpdateAnim_b__25__,
          0);
        this->fields.__9__25 = _9__25;
        sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.__9__25, (int32_t)_9__25, v10, v11, v12, v13, v14, v15);
      }
      if ( v6 )
      {
        ScrTerminalListTop__StartWindowMessage_37215476(v6, name_high, namespaze + 1, 2, _9__25, 1, 0);
        return;
      }
    }
LABEL_34:
    sub_1C71608(questEntity, result);
  }
  questEntity = (QuestEntity_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3A5F648 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  v16 = (clsQuestCheck_o *)questEntity;
  v17 = QuestAfterAction_StateMain___c_TypeInfo;
  if ( !QuestAfterAction_StateMain___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestAfterAction_StateMain___c_TypeInfo);
    v17 = QuestAfterAction_StateMain___c_TypeInfo;
  }
  _9__16_26 = v17->static_fields->__9__16_26;
  if ( !_9__16_26 )
  {
    if ( !v17->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v17);
      v17 = QuestAfterAction_StateMain___c_TypeInfo;
    }
    v19 = (Il2CppObject *)v17->static_fields->__9;
    _9__16_26 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
    System_Action___ctor(_9__16_26, v19, Method_QuestAfterAction_StateMain___c__UpdateAnim_b__16_26__, 0);
    static_fields = QuestAfterAction_StateMain___c_TypeInfo->static_fields;
    static_fields->__9__16_26 = _9__16_26;
    sub_1C71354(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__16_26,
      (int32_t)_9__16_26,
      v21,
      v22,
      v23,
      v24,
      v25,
      v26);
  }
  if ( !v16 )
    goto LABEL_34;
  clsQuestCheck__PlayQuestStartAction(v16, _9__16_26, 0);
}


void QuestAfterAction_StateMain___c__DisplayClass16_16___UpdateAnim_b__25(
        QuestAfterAction_StateMain___c__DisplayClass16_16_o *this,
        const MethodInfo *method)
{
  ScrTerminalMap_o *_4__this; // x0
  UnityEngine_GameObject_c *klass; // x8
  UnityEngine_GameObject_c *v5; // x8
  UnityEngine_GameObject_c *v6; // x8
  TerminalPramsManager_c *v7; // x0
  int32_t QuestId_k__BackingField; // w21
  TerminalPramsManager_c *v9; // x0
  bool HasFlag; // w0
  TerminalPramsManager_c *v11; // x8
  TerminalPramsManager_c *v12; // x0
  int32_t SpotId; // w21
  struct MapControl_QuestInfo_o *questInfo; // x8
  int32_t questId; // w21
  UnityEngine_GameObject_c *v16; // x8
  bool Effect; // w21
  struct QuestAfterAction_StateMain___c__DisplayClass16_0_o *CS___8__locals16; // x8
  TerminalPramsManager_c *v19; // x0
  int32_t WarId_k__BackingField; // w19
  UnityEngine_GameObject_c *v21; // x8
  ScrTerminalListTop_o *v22; // x19
  int32_t m_CachedPtr_high; // w21

  if ( (byte_4CC4001 & 1) == 0 )
  {
    sub_1C713B0(&MyRoomParamsManager_TypeInfo);
    sub_1C713B0(&TerminalPramsManager_TypeInfo);
    sub_1C713B0(&TerminalSceneComponent_TypeInfo);
    sub_1C713B0(&StringLiteral_16731/*"afterActionBk"*/);
    sub_1C713B0(&StringLiteral_13726/*"TerminalTransitionInfoMissionId"*/);
    byte_4CC4001 = 1;
  }
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4CC12CE )
  {
    sub_1C713B0(&TerminalSceneComponent_TypeInfo);
    byte_4CC12CE = 1;
  }
  _4__this = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    _4__this = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
  }
  klass = _4__this->fields.subRootGimmickP->klass;
  if ( !klass )
    goto LABEL_101;
  _4__this = *(ScrTerminalMap_o **)&klass->_2.static_fields_size;
  if ( !_4__this )
    goto LABEL_101;
  if ( !ScrTerminalMap__IsAllMaskActive(_4__this, 0) )
    goto LABEL_21;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4CC12CE )
  {
    sub_1C713B0(&TerminalSceneComponent_TypeInfo);
    byte_4CC12CE = 1;
  }
  _4__this = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    _4__this = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
  }
  v5 = _4__this->fields.subRootGimmickP->klass;
  if ( !v5 || (_4__this = *(ScrTerminalMap_o **)&v5->_2.static_fields_size) == 0 )
LABEL_101:
    sub_1C71608(_4__this, method);
  ScrTerminalMap__AllMaskEnd(_4__this, 0);
LABEL_21:
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4CC12CE )
  {
    sub_1C713B0(&TerminalSceneComponent_TypeInfo);
    byte_4CC12CE = 1;
  }
  _4__this = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    _4__this = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
  }
  v6 = _4__this->fields.subRootGimmickP->klass;
  if ( !v6 )
    goto LABEL_101;
  _4__this = *(ScrTerminalMap_o **)&v6->_2.element_size;
  if ( !_4__this )
    goto LABEL_101;
  ScrTerminalListTop__IsAllTouchEnable((ScrTerminalListTop_o *)_4__this, 0, 0, 0);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4CC13B1 )
  {
    sub_1C713B0(&TerminalPramsManager_TypeInfo);
    byte_4CC13B1 = 1;
  }
  v7 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v7 = TerminalPramsManager_TypeInfo;
  }
  QuestId_k__BackingField = v7->static_fields->_QuestId_k__BackingField;
  if ( !byte_4CC40AB )
  {
    sub_1C713B0(&TerminalPramsManager_TypeInfo);
    v7 = TerminalPramsManager_TypeInfo;
    byte_4CC40AB = 1;
  }
  if ( !v7->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v7);
    v7 = TerminalPramsManager_TypeInfo;
  }
  v7->static_fields->_LastPlayedQuestId_k__BackingField = QuestId_k__BackingField;
  if ( !byte_4CC13B1 )
  {
    sub_1C713B0(&TerminalPramsManager_TypeInfo);
    v7 = TerminalPramsManager_TypeInfo;
    byte_4CC13B1 = 1;
  }
  if ( !v7->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v7);
    v7 = TerminalPramsManager_TypeInfo;
  }
  TerminalPramsManager__CheckClearSelectedStoryQuestId(v7->static_fields->_QuestId_k__BackingField, 0);
  if ( !byte_4CC13B1 )
  {
    sub_1C713B0(&TerminalPramsManager_TypeInfo);
    byte_4CC13B1 = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  HasFlag = QuestMaster__HasFlag(v9->static_fields->_QuestId_k__BackingField, 0x8000000000LL, 0);
  v11 = TerminalPramsManager_TypeInfo;
  if ( HasFlag )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4CC13B1 )
    {
      sub_1C713B0(&TerminalPramsManager_TypeInfo);
      byte_4CC13B1 = 1;
    }
    v12 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v12 = TerminalPramsManager_TypeInfo;
    }
    SpotId = QuestMaster__GetSpotId(v12->static_fields->_QuestId_k__BackingField, 0);
    if ( !byte_4CC40AC )
    {
      sub_1C713B0(&TerminalPramsManager_TypeInfo);
      byte_4CC40AC = 1;
    }
    v11 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v11 = TerminalPramsManager_TypeInfo;
    }
    v11->static_fields->_LastPlayedFreeQuestSpotId_k__BackingField = SpotId;
  }
  if ( !v11->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v11);
  TerminalPramsManager__PlayQuestSave_SaveData(0);
  TerminalPramsManager__Save_SaveData(0);
  questInfo = this->fields.questInfo;
  if ( !questInfo )
    goto LABEL_101;
  questId = questInfo->fields.questId;
  if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
  MyRoomParamsManager__SetClearQuestWarEnableMyRoomBgChange(questId, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_16731/*"afterActionBk"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13726/*"TerminalTransitionInfoMissionId"*/, 0);
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4CC12CE )
  {
    sub_1C713B0(&TerminalSceneComponent_TypeInfo);
    byte_4CC12CE = 1;
  }
  _4__this = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    _4__this = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
  }
  v16 = _4__this->fields.subRootGimmickP->klass;
  if ( !v16 )
    goto LABEL_101;
  _4__this = *(ScrTerminalMap_o **)&v16->_2.element_size;
  if ( !_4__this )
    goto LABEL_101;
  Effect = ScrTerminalListTop__IsDisplayGetEffect((ScrTerminalListTop_o *)_4__this, 0);
  if ( !byte_4CC40AD )
  {
    sub_1C713B0(&TerminalPramsManager_TypeInfo);
    byte_4CC40AD = 1;
  }
  _4__this = (ScrTerminalMap_o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    _4__this = (ScrTerminalMap_o *)TerminalPramsManager_TypeInfo;
  }
  BYTE2(_4__this->fields.subRootGimmickP[7].klass) = Effect;
  CS___8__locals16 = this->fields.CS___8__locals16;
  if ( !CS___8__locals16 )
    goto LABEL_101;
  _4__this = (ScrTerminalMap_o *)CS___8__locals16->fields.__4__this;
  if ( !_4__this )
    goto LABEL_101;
  ((void (__fastcall *)(ScrTerminalMap_o *, Il2CppClass **))_4__this->klass[1]._1.nestedTypes)(
    _4__this,
    _4__this->klass[1]._1.implementedInterfaces);
  if ( !byte_4CC1762 )
  {
    sub_1C713B0(&TerminalPramsManager_TypeInfo);
    byte_4CC1762 = 1;
  }
  v19 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v19 = TerminalPramsManager_TypeInfo;
  }
  WarId_k__BackingField = v19->static_fields->_WarId_k__BackingField;
  if ( !byte_4CC3F55 )
  {
    sub_1C713B0(&TerminalPramsManager_TypeInfo);
    v19 = TerminalPramsManager_TypeInfo;
    byte_4CC3F55 = 1;
  }
  if ( !v19->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v19);
    v19 = TerminalPramsManager_TypeInfo;
  }
  v19->static_fields->_BeforeQuestStartWarId_k__BackingField = WarId_k__BackingField;
  if ( !byte_4CC12CE )
  {
    sub_1C713B0(&TerminalSceneComponent_TypeInfo);
    byte_4CC12CE = 1;
  }
  _4__this = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    _4__this = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
  }
  v21 = _4__this->fields.subRootGimmickP->klass;
  if ( !v21 )
    goto LABEL_101;
  v22 = *(ScrTerminalListTop_o **)&v21->_2.element_size;
  if ( !byte_4CC13B1 )
  {
    sub_1C713B0(&TerminalPramsManager_TypeInfo);
    byte_4CC13B1 = 1;
  }
  _4__this = (ScrTerminalMap_o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    _4__this = (ScrTerminalMap_o *)TerminalPramsManager_TypeInfo;
  }
  m_CachedPtr_high = HIDWORD(_4__this->fields.subRootGimmickP->fields.m_CachedPtr);
  if ( !byte_4CC13B0 )
  {
    sub_1C713B0(&TerminalPramsManager_TypeInfo);
    _4__this = (ScrTerminalMap_o *)TerminalPramsManager_TypeInfo;
    byte_4CC13B0 = 1;
  }
  if ( !LODWORD(_4__this->fields.pfbBaseP) )
  {
    j_il2cpp_runtime_class_init_0(_4__this);
    _4__this = (ScrTerminalMap_o *)TerminalPramsManager_TypeInfo;
  }
  if ( !v22 )
    goto LABEL_101;
  ScrTerminalListTop__RequestBattleSecnario(
    v22,
    m_CachedPtr_high,
    LODWORD(_4__this->fields.subRootGimmickP[1].klass) + 1,
    0);
}


void QuestAfterAction_StateMain___c__DisplayClass16_17___ctor(
        QuestAfterAction_StateMain___c__DisplayClass16_17_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void QuestAfterAction_StateMain___c__DisplayClass16_17___UpdateAnim_b__34(
        QuestAfterAction_StateMain___c__DisplayClass16_17_o *this,
        const MethodInfo *method)
{
  QuestAfterAction_StateMain___c__DisplayClass16_17_o *v2; // x19
  QuestAfterAction_StateMain___c__DisplayClass16_0_c *klass; // x8
  ScrTerminalListTop_o *v4; // x20
  float defaultBgmVolume; // s8
  float bgmVolume; // s9
  struct QuestAfterAction_StateMain___c__DisplayClass16_0_o *CS___8__locals17; // x8
  struct QuestAfterAction_StateMain___c__DisplayClass16_0_o *v8; // x8

  v2 = this;
  if ( (byte_4CC4002 & 1) == 0 )
  {
    sub_1C713B0(&QuestAfterAction_TypeInfo);
    this = (QuestAfterAction_StateMain___c__DisplayClass16_17_o *)sub_1C713B0(&TerminalSceneComponent_TypeInfo);
    byte_4CC4002 = 1;
  }
  if ( v2->fields.bgmVolume > -1.0 )
  {
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    if ( !byte_4CC12CE )
    {
      sub_1C713B0(&TerminalSceneComponent_TypeInfo);
      byte_4CC12CE = 1;
    }
    this = (QuestAfterAction_StateMain___c__DisplayClass16_17_o *)TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      this = (QuestAfterAction_StateMain___c__DisplayClass16_17_o *)TerminalSceneComponent_TypeInfo;
    }
    klass = this[5].fields.CS___8__locals17->klass;
    if ( !klass )
      goto LABEL_20;
    v4 = *(ScrTerminalListTop_o **)&klass->_2.element_size;
    bgmVolume = v2->fields.bgmVolume;
    defaultBgmVolume = v2->fields.defaultBgmVolume;
    this = (QuestAfterAction_StateMain___c__DisplayClass16_17_o *)QuestAfterAction_TypeInfo;
    if ( !QuestAfterAction_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(QuestAfterAction_TypeInfo);
    if ( !v4 )
LABEL_20:
      sub_1C71608(this, method);
    ScrTerminalListTop__StartEasingBgmMasterVolume(
      v4,
      bgmVolume,
      defaultBgmVolume,
      QuestAfterAction_TypeInfo->static_fields->EventAnimationAfterBgmResetTime,
      2,
      0,
      0);
  }
  CS___8__locals17 = v2->fields.CS___8__locals17;
  if ( !CS___8__locals17 )
    goto LABEL_20;
  this = (QuestAfterAction_StateMain___c__DisplayClass16_17_o *)CS___8__locals17->fields.__4__this;
  if ( !this )
    goto LABEL_20;
  this = (QuestAfterAction_StateMain___c__DisplayClass16_17_o *)((__int64 (__fastcall *)(QuestAfterAction_StateMain___c__DisplayClass16_17_o *, Il2CppClass **))this->klass[1]._1.nestedTypes)(
                                                                  this,
                                                                  this->klass[1]._1.implementedInterfaces);
  v8 = v2->fields.CS___8__locals17;
  if ( !v8 )
    goto LABEL_20;
  this = (QuestAfterAction_StateMain___c__DisplayClass16_17_o *)v8->fields.__4__this;
  if ( !this )
    goto LABEL_20;
  ((void (__fastcall *)(QuestAfterAction_StateMain___c__DisplayClass16_17_o *, struct QuestAfterAction_o *, void *))this->klass[1]._1.properties)(
    this,
    v8->fields.that,
    this->klass[1]._1.methods);
}


void QuestAfterAction_StateMain___c__DisplayClass16_2___ctor(
        QuestAfterAction_StateMain___c__DisplayClass16_2_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void QuestAfterAction_StateMain___c__DisplayClass16_2___UpdateAnim_b__1(
        QuestAfterAction_StateMain___c__DisplayClass16_2_o *this,
        const MethodInfo *method)
{
  struct SrcSpotBasePrefab_o *spot; // x0
  struct MapControl_SpotInfo_o *mMapCtrl_SpotInfo; // x8
  struct QuestAfterAction_StateMain___c__DisplayClass16_0_o *CS___8__locals2; // x8

  spot = this->fields.spot;
  if ( !spot
    || (mMapCtrl_SpotInfo = spot->fields.mMapCtrl_SpotInfo) == 0
    || (mMapCtrl_SpotInfo->fields.dispType = 2,
        SrcSpotBasePrefab__SetTouchType(spot, 1, 0),
        (CS___8__locals2 = this->fields.CS___8__locals2) == 0)
    || (spot = (struct SrcSpotBasePrefab_o *)CS___8__locals2->fields.__4__this) == 0 )
  {
    sub_1C71608(spot, method);
  }
  ((void (__fastcall *)(struct SrcSpotBasePrefab_o *, Il2CppClass **))spot->klass[1]._1.nestedTypes)(
    spot,
    spot->klass[1]._1.implementedInterfaces);
}


void QuestAfterAction_StateMain___c__DisplayClass16_3___ctor(
        QuestAfterAction_StateMain___c__DisplayClass16_3_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void QuestAfterAction_StateMain___c__DisplayClass16_3___UpdateAnim_b__2(
        QuestAfterAction_StateMain___c__DisplayClass16_3_o *this,
        const MethodInfo *method)
{
  struct SrcSpotBasePrefab_o *spot; // x0
  struct MapControl_SpotInfo_o *mMapCtrl_SpotInfo; // x8
  struct QuestAfterAction_StateMain___c__DisplayClass16_0_o *CS___8__locals3; // x8

  spot = this->fields.spot;
  if ( !spot
    || (mMapCtrl_SpotInfo = spot->fields.mMapCtrl_SpotInfo) == 0
    || (mMapCtrl_SpotInfo->fields.dispType = 1,
        SrcSpotBasePrefab__SetTouchType(spot, 1, 0),
        (CS___8__locals3 = this->fields.CS___8__locals3) == 0)
    || (spot = (struct SrcSpotBasePrefab_o *)CS___8__locals3->fields.__4__this) == 0 )
  {
    sub_1C71608(spot, method);
  }
  ((void (__fastcall *)(struct SrcSpotBasePrefab_o *, Il2CppClass **))spot->klass[1]._1.nestedTypes)(
    spot,
    spot->klass[1]._1.implementedInterfaces);
}


void QuestAfterAction_StateMain___c__DisplayClass16_4___ctor(
        QuestAfterAction_StateMain___c__DisplayClass16_4_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void QuestAfterAction_StateMain___c__DisplayClass16_4___UpdateAnim_b__3(
        QuestAfterAction_StateMain___c__DisplayClass16_4_o *this,
        const MethodInfo *method)
{
  struct ModelLineComponent_o *roadModel; // x8
  struct MapControl_SpotRoadInfo_o *SpotRoadInfo_k__BackingField; // x8
  struct QuestAfterAction_StateMain___c__DisplayClass16_0_o *CS___8__locals4; // x8

  roadModel = this->fields.roadModel;
  if ( !roadModel
    || (SpotRoadInfo_k__BackingField = roadModel->fields._SpotRoadInfo_k__BackingField) == 0
    || (SpotRoadInfo_k__BackingField->fields.dispType = 0, (CS___8__locals4 = this->fields.CS___8__locals4) == 0)
    || (this = (QuestAfterAction_StateMain___c__DisplayClass16_4_o *)CS___8__locals4->fields.__4__this) == 0 )
  {
    sub_1C71608(this, method);
  }
  ((void (__fastcall *)(QuestAfterAction_StateMain___c__DisplayClass16_4_o *, Il2CppClass **))this->klass[1]._1.nestedTypes)(
    this,
    this->klass[1]._1.implementedInterfaces);
}


void QuestAfterAction_StateMain___c__DisplayClass16_5___ctor(
        QuestAfterAction_StateMain___c__DisplayClass16_5_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void QuestAfterAction_StateMain___c__DisplayClass16_5___UpdateAnim_b__4(
        QuestAfterAction_StateMain___c__DisplayClass16_5_o *this,
        const MethodInfo *method)
{
  struct srcLineSprite_o *roadSprite; // x8
  struct MapControl_SpotRoadInfo_o *mMapCtrl_SpotRoadInfo; // x8
  struct QuestAfterAction_StateMain___c__DisplayClass16_0_o *CS___8__locals5; // x8

  roadSprite = this->fields.roadSprite;
  if ( !roadSprite
    || (mMapCtrl_SpotRoadInfo = roadSprite->fields.mMapCtrl_SpotRoadInfo) == 0
    || (mMapCtrl_SpotRoadInfo->fields.dispType = 0, (CS___8__locals5 = this->fields.CS___8__locals5) == 0)
    || (this = (QuestAfterAction_StateMain___c__DisplayClass16_5_o *)CS___8__locals5->fields.__4__this) == 0 )
  {
    sub_1C71608(this, method);
  }
  ((void (__fastcall *)(QuestAfterAction_StateMain___c__DisplayClass16_5_o *, Il2CppClass **))this->klass[1]._1.nestedTypes)(
    this,
    this->klass[1]._1.implementedInterfaces);
}


void QuestAfterAction_StateMain___c__DisplayClass16_6___ctor(
        QuestAfterAction_StateMain___c__DisplayClass16_6_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void QuestAfterAction_StateMain___c__DisplayClass16_6___UpdateAnim_b__5(
        QuestAfterAction_StateMain___c__DisplayClass16_6_o *this,
        const MethodInfo *method)
{
  struct ModelLineComponent_o *roadModel; // x8
  struct MapControl_SpotRoadInfo_o *SpotRoadInfo_k__BackingField; // x8
  struct QuestAfterAction_StateMain___c__DisplayClass16_0_o *CS___8__locals6; // x8

  roadModel = this->fields.roadModel;
  if ( !roadModel
    || (SpotRoadInfo_k__BackingField = roadModel->fields._SpotRoadInfo_k__BackingField) == 0
    || (SpotRoadInfo_k__BackingField->fields.dispType = 2, (CS___8__locals6 = this->fields.CS___8__locals6) == 0)
    || (this = (QuestAfterAction_StateMain___c__DisplayClass16_6_o *)CS___8__locals6->fields.__4__this) == 0 )
  {
    sub_1C71608(this, method);
  }
  ((void (__fastcall *)(QuestAfterAction_StateMain___c__DisplayClass16_6_o *, Il2CppClass **))this->klass[1]._1.nestedTypes)(
    this,
    this->klass[1]._1.implementedInterfaces);
}


void QuestAfterAction_StateMain___c__DisplayClass16_7___ctor(
        QuestAfterAction_StateMain___c__DisplayClass16_7_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void QuestAfterAction_StateMain___c__DisplayClass16_7___UpdateAnim_b__6(
        QuestAfterAction_StateMain___c__DisplayClass16_7_o *this,
        const MethodInfo *method)
{
  struct srcLineSprite_o *roadSprite; // x8
  struct MapControl_SpotRoadInfo_o *mMapCtrl_SpotRoadInfo; // x8
  struct QuestAfterAction_StateMain___c__DisplayClass16_0_o *CS___8__locals7; // x8

  roadSprite = this->fields.roadSprite;
  if ( !roadSprite
    || (mMapCtrl_SpotRoadInfo = roadSprite->fields.mMapCtrl_SpotRoadInfo) == 0
    || (mMapCtrl_SpotRoadInfo->fields.dispType = 2, (CS___8__locals7 = this->fields.CS___8__locals7) == 0)
    || (this = (QuestAfterAction_StateMain___c__DisplayClass16_7_o *)CS___8__locals7->fields.__4__this) == 0 )
  {
    sub_1C71608(this, method);
  }
  ((void (__fastcall *)(QuestAfterAction_StateMain___c__DisplayClass16_7_o *, Il2CppClass **))this->klass[1]._1.nestedTypes)(
    this,
    this->klass[1]._1.implementedInterfaces);
}


void QuestAfterAction_StateMain___c__DisplayClass16_8___ctor(
        QuestAfterAction_StateMain___c__DisplayClass16_8_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void QuestAfterAction_StateMain___c__DisplayClass16_8___UpdateAnim_b__7(
        QuestAfterAction_StateMain___c__DisplayClass16_8_o *this,
        const MethodInfo *method)
{
  struct ModelLineComponent_o *roadModel; // x8
  struct MapControl_SpotRoadInfo_o *SpotRoadInfo_k__BackingField; // x8
  struct QuestAfterAction_StateMain___c__DisplayClass16_0_o *CS___8__locals8; // x8

  roadModel = this->fields.roadModel;
  if ( !roadModel
    || (SpotRoadInfo_k__BackingField = roadModel->fields._SpotRoadInfo_k__BackingField) == 0
    || (SpotRoadInfo_k__BackingField->fields.dispType = 1, (CS___8__locals8 = this->fields.CS___8__locals8) == 0)
    || (this = (QuestAfterAction_StateMain___c__DisplayClass16_8_o *)CS___8__locals8->fields.__4__this) == 0 )
  {
    sub_1C71608(this, method);
  }
  ((void (__fastcall *)(QuestAfterAction_StateMain___c__DisplayClass16_8_o *, Il2CppClass **))this->klass[1]._1.nestedTypes)(
    this,
    this->klass[1]._1.implementedInterfaces);
}


void QuestAfterAction_StateMain___c__DisplayClass16_9___ctor(
        QuestAfterAction_StateMain___c__DisplayClass16_9_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void QuestAfterAction_StateMain___c__DisplayClass16_9___UpdateAnim_b__8(
        QuestAfterAction_StateMain___c__DisplayClass16_9_o *this,
        const MethodInfo *method)
{
  struct srcLineSprite_o *roadSprite; // x8
  struct MapControl_SpotRoadInfo_o *mMapCtrl_SpotRoadInfo; // x8
  struct QuestAfterAction_StateMain___c__DisplayClass16_0_o *CS___8__locals9; // x8

  roadSprite = this->fields.roadSprite;
  if ( !roadSprite
    || (mMapCtrl_SpotRoadInfo = roadSprite->fields.mMapCtrl_SpotRoadInfo) == 0
    || (mMapCtrl_SpotRoadInfo->fields.dispType = 1, (CS___8__locals9 = this->fields.CS___8__locals9) == 0)
    || (this = (QuestAfterAction_StateMain___c__DisplayClass16_9_o *)CS___8__locals9->fields.__4__this) == 0 )
  {
    sub_1C71608(this, method);
  }
  ((void (__fastcall *)(QuestAfterAction_StateMain___c__DisplayClass16_9_o *, Il2CppClass **))this->klass[1]._1.nestedTypes)(
    this,
    this->klass[1]._1.implementedInterfaces);
}


void QuestAfterAction_StateNone___ctor(QuestAfterAction_StateNone_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void QuestAfterAction_StateNone__begin(
        QuestAfterAction_StateNone_o *this,
        QuestAfterAction_o *that,
        const MethodInfo *method)
{
  ;
}


void QuestAfterAction_StateNone__end(
        QuestAfterAction_StateNone_o *this,
        QuestAfterAction_o *that,
        const MethodInfo *method)
{
  ;
}


void QuestAfterAction_StateNone__update(
        QuestAfterAction_StateNone_o *this,
        QuestAfterAction_o *that,
        const MethodInfo *method)
{
  ;
}


void QuestAfterAction_TitleInfoControlCallback___ctor(
        QuestAfterAction_TitleInfoControlCallback_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void QuestAfterAction_TitleInfoControlCallback__End(
        QuestAfterAction_TitleInfoControlCallback_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct System_Action_o *end; // x8
  GrandQuestFolderBoardItem_o *p_end; // x19

  p_end = (GrandQuestFolderBoardItem_o *)&this->fields.end;
  end = this->fields.end;
  if ( end )
    ((void (__fastcall *)(intptr_t, intptr_t))end->fields.invoke_impl)(end->fields.method_code, end->fields.method);
  p_end->klass = 0;
  sub_1C71354(p_end, 0, v2, v3, v4, v5, v6, v7);
}


bool QuestAfterAction_TitleInfoControlCallback__HasStartCallback(
        QuestAfterAction_TitleInfoControlCallback_o *this,
        const MethodInfo *method)
{
  return this->fields.start != 0;
}


void QuestAfterAction_TitleInfoControlCallback__SetStartCallback(
        QuestAfterAction_TitleInfoControlCallback_o *this,
        System_Action_QuestAfterAction_TitleInfoControlParam__o *startCallback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields.start = startCallback;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields, (int32_t)startCallback, (int32_t)method, v3, v4, v5, v6, v7);
}


void QuestAfterAction_TitleInfoControlCallback__Start(
        QuestAfterAction_TitleInfoControlCallback_o *this,
        QuestAfterAction_TitleInfoControlParam_o *titleInfoControlParam,
        System_Action_o *endCallback,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct System_Action_o *end; // x8
  struct System_Action_o **p_end; // x22
  const MethodInfo *v13; // x1
  struct System_Action_QuestAfterAction_TitleInfoControlParam__o *start; // x8

  p_end = &this->fields.end;
  end = this->fields.end;
  if ( end )
    ((void (__fastcall *)(intptr_t, intptr_t, System_Action_o *, const MethodInfo *))end->fields.invoke_impl)(
      end->fields.method_code,
      end->fields.method,
      endCallback,
      method);
  this->fields.end = endCallback;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)p_end,
    (int32_t)endCallback,
    (int32_t)endCallback,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  start = this->fields.start;
  if ( start )
    ((void (__fastcall *)(intptr_t, QuestAfterAction_TitleInfoControlParam_o *, intptr_t))start->fields.invoke_impl)(
      start->fields.method_code,
      titleInfoControlParam,
      start->fields.method);
  else
    QuestAfterAction_TitleInfoControlCallback__End(this, v13);
}


void QuestAfterAction_TitleInfoControlParam___ctor(
        QuestAfterAction_TitleInfoControlParam_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t QuestAfterAction_TitleInfoControlParam__get_TargetId(
        QuestAfterAction_TitleInfoControlParam_o *this,
        const MethodInfo *method)
{
  return this->fields._TargetId_k__BackingField;
}


int32_t QuestAfterAction_TitleInfoControlParam__get_TargetType(
        QuestAfterAction_TitleInfoControlParam_o *this,
        const MethodInfo *method)
{
  return this->fields._TargetType_k__BackingField;
}


void QuestAfterAction_TitleInfoControlParam__set_TargetId(
        QuestAfterAction_TitleInfoControlParam_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._TargetId_k__BackingField = value;
}


void QuestAfterAction_TitleInfoControlParam__set_TargetType(
        QuestAfterAction_TitleInfoControlParam_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._TargetType_k__BackingField = value;
}


void QuestAfterAction_VoiceInfo___ctor(
        QuestAfterAction_VoiceInfo_o *this,
        int32_t sId,
        System_String_o *vName,
        const MethodInfo *method)
{
  QuestAfterAction_VoiceInfo_o *v6; // x21
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7

  v6 = this;
  System_Object___ctor((Il2CppObject *)this, 0);
  v6->fields.voiceName = vName;
  v6 = (QuestAfterAction_VoiceInfo_o *)((char *)v6 + 24);
  LODWORD(v6[-1].fields.voiceName) = sId;
  sub_1C71354((GrandQuestFolderBoardItem_o *)v6, (int32_t)vName, v7, v8, v9, v10, v11, v12);
}


void QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__90___ctor(
        QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__90_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
  this->fields.__l__initialThreadId = System_Environment__get_CurrentManagedThreadId(0);
}


bool QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__90__MoveNext(
        QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__90_o *this,
        const MethodInfo *method)
{
  QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__90_o *v2; // x21
  int32_t _1__state; // w8
  QuestAfterAction_o *_4__this; // x19
  struct System_Collections_Generic_IEnumerable_QuestAfterAction_Command__o *commandEnumerable; // x20
  System_Collections_Generic_IEnumerable_QuestAfterAction_Command__c *klass; // x8
  __int64 v7; // x9
  int *p_offset; // x10
  __int64 v9; // x0
  __int64 v10; // x1
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  struct System_Collections_Generic_IEnumerator_QuestAfterAction_Command__o *_7__wrap1; // x20
  System_Collections_Generic_IEnumerator_QuestAfterAction_Command__c *v18; // x8
  __int64 v19; // x9
  int *v20; // x10
  __int64 v21; // x0
  const MethodInfo *v22; // x1
  struct System_Collections_Generic_IEnumerator_QuestAfterAction_Command__o *v23; // x20
  System_Collections_Generic_IEnumerator_QuestAfterAction_Command__c *v24; // x8
  __int64 v25; // x9
  int *v26; // x10
  __int64 v27; // x0
  __int64 v28; // x0
  __int64 v29; // x1
  QuestAfterAction_Command_o *v30; // x20
  int32_t CommandType; // w21
  int32_t CommandTargetId; // w2
  int32_t v33; // w2
  int32_t v34; // w3
  System_String_o *v35; // x4
  int32_t v36; // w5
  int64_t v37; // x6
  System_String_o *v38; // x7
  int32_t v39; // w2
  int32_t v40; // w3
  System_String_o *v41; // x4
  int32_t v42; // w5
  int64_t v43; // x6
  System_String_o *v44; // x7
  bool result; // w0
  QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__90_o *v46; // [xsp+18h] [xbp-38h]

  v46 = this;
  v2 = this;
  if ( (byte_4CC4007 & 1) == 0 )
  {
    sub_1C713B0(&System_Collections_Generic_IEnumerable_QuestAfterAction_Command__TypeInfo);
    sub_1C713B0(&System_Collections_Generic_IEnumerator_QuestAfterAction_Command__TypeInfo);
    sub_1C713B0(&System_Collections_IEnumerator_TypeInfo);
    this = (QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__90_o *)sub_1C713B0(&QuestAfterAction_TypeInfo);
    byte_4CC4007 = 1;
  }
  _1__state = v2->fields.__1__state;
  _4__this = v2->fields.__4__this;
  if ( _1__state != 1 )
  {
    if ( _1__state )
      return 0;
    commandEnumerable = v2->fields.commandEnumerable;
    v2->fields.__1__state = -1;
    if ( !commandEnumerable )
      sub_1C71608(this, method);
    klass = commandEnumerable->klass;
    v7 = *(unsigned __int16 *)&commandEnumerable->klass->_2.rank;
    if ( *(_WORD *)&commandEnumerable->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerable_QuestAfterAction_Command__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_QuestAfterAction_Command__TypeInfo )
      {
        --v7;
        p_offset += 4;
        if ( !v7 )
          goto LABEL_10;
      }
      v9 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_10:
      v9 = sub_1C47738(commandEnumerable, System_Collections_Generic_IEnumerable_QuestAfterAction_Command__TypeInfo, 0);
    }
    v10 = (*(__int64 (__fastcall **)(struct System_Collections_Generic_IEnumerable_QuestAfterAction_Command__o *, _QWORD))v9)(
            commandEnumerable,
            *(_QWORD *)(v9 + 8));
    v46->fields.__7__wrap1 = (struct System_Collections_Generic_IEnumerator_QuestAfterAction_Command__o *)v10;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&v46->fields.__7__wrap1, v10, v11, v12, v13, v14, v15, v16);
    v2 = v46;
  }
  _7__wrap1 = v2->fields.__7__wrap1;
  v2->fields.__1__state = -3;
  if ( !_7__wrap1 )
LABEL_34:
    sub_1C71608(this, method);
  while ( 1 )
  {
    v18 = _7__wrap1->klass;
    v19 = *(unsigned __int16 *)&_7__wrap1->klass->_2.rank;
    if ( *(_WORD *)&_7__wrap1->klass->_2.rank )
    {
      v20 = &v18->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)v20 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v19;
        v20 += 4;
        if ( !v19 )
          goto LABEL_18;
      }
      v21 = (__int64)&v18->vtable[*v20];
    }
    else
    {
LABEL_18:
      v21 = sub_1C47738(_7__wrap1, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(struct System_Collections_Generic_IEnumerator_QuestAfterAction_Command__o *, _QWORD))v21)(
            _7__wrap1,
            *(_QWORD *)(v21 + 8))
        & 1) == 0 )
    {
      QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__90____m__Finally1(v46, v22);
      v46->fields.__7__wrap1 = 0;
      sub_1C71354((GrandQuestFolderBoardItem_o *)&v46->fields.__7__wrap1, 0, v39, v40, v41, v42, v43, v44);
      return 0;
    }
    v23 = v46->fields.__7__wrap1;
    if ( !v23 )
      sub_1C71608(v46, v22);
    v24 = v23->klass;
    v25 = *(unsigned __int16 *)&v23->klass->_2.rank;
    if ( *(_WORD *)&v23->klass->_2.rank )
    {
      v26 = &v24->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_QuestAfterAction_Command__c **)v26 - 1) != System_Collections_Generic_IEnumerator_QuestAfterAction_Command__TypeInfo )
      {
        --v25;
        v26 += 4;
        if ( !v25 )
          goto LABEL_26;
      }
      v27 = (__int64)&v24->vtable[*v26];
    }
    else
    {
LABEL_26:
      v27 = sub_1C47738(
              v46->fields.__7__wrap1,
              System_Collections_Generic_IEnumerator_QuestAfterAction_Command__TypeInfo,
              0);
    }
    v28 = (*(__int64 (__fastcall **)(struct System_Collections_Generic_IEnumerator_QuestAfterAction_Command__o *, _QWORD))v27)(
            v23,
            *(_QWORD *)(v27 + 8));
    v30 = (QuestAfterAction_Command_o *)v28;
    if ( !v28 )
      sub_1C71608(0, v29);
    if ( !_4__this )
      sub_1C71608(v28, v29);
    CommandType = QuestAfterAction__GetCommandType(_4__this, *(_DWORD *)(v28 + 16), 0);
    if ( !QuestAfterAction_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(QuestAfterAction_TypeInfo);
    CommandTargetId = QuestAfterAction__ExtractCommandTargetId(v30, 0);
    this = (QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__90_o *)QuestAfterAction__IsExistCommand(
                                                                                    _4__this,
                                                                                    CommandType,
                                                                                    CommandTargetId,
                                                                                    0);
    if ( ((unsigned __int8)this & 1) == 0 )
      break;
    _7__wrap1 = v46->fields.__7__wrap1;
    if ( !_7__wrap1 )
      goto LABEL_34;
  }
  v46->fields.__2__current = v30;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&v46->fields.__2__current, (int32_t)v30, v33, v34, v35, v36, v37, v38);
  result = 1;
  v46->fields.__1__state = 1;
  return result;
}


System_Collections_Generic_IEnumerator_QuestAfterAction_Command__o *QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__90__System_Collections_Generic_IEnumerable_QuestAfterAction_Command__GetEnumerator(
        QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__90_o *this,
        const MethodInfo *method)
{
  int32_t l__initialThreadId; // w20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7
  QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__90_o *v10; // x20
  struct QuestAfterAction_o *_4__this; // x1
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  struct System_Collections_Generic_IEnumerable_QuestAfterAction_Command__o *_3__commandEnumerable; // x1

  if ( (byte_4CC4009 & 1) == 0 )
  {
    sub_1C713B0(&QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__90_TypeInfo);
    byte_4CC4009 = 1;
  }
  if ( this->fields.__1__state == -2
    && (l__initialThreadId = this->fields.__l__initialThreadId,
        l__initialThreadId == System_Environment__get_CurrentManagedThreadId(0)) )
  {
    this->fields.__1__state = 0;
    v10 = this;
  }
  else
  {
    v10 = (QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__90_o *)sub_1C715FC(QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__90_TypeInfo);
    System_Object___ctor((Il2CppObject *)v10, 0);
    v10->fields.__1__state = 0;
    v10->fields.__l__initialThreadId = System_Environment__get_CurrentManagedThreadId(0);
    _4__this = this->fields.__4__this;
    v10->fields.__4__this = _4__this;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&v10->fields.__4__this, (int32_t)_4__this, v12, v13, v14, v15, v16, v17);
  }
  _3__commandEnumerable = this->fields.__3__commandEnumerable;
  v10->fields.commandEnumerable = _3__commandEnumerable;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&v10->fields.commandEnumerable,
    (int32_t)_3__commandEnumerable,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  return (System_Collections_Generic_IEnumerator_QuestAfterAction_Command__o *)v10;
}


QuestAfterAction_Command_o *QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__90__System_Collections_Generic_IEnumerator_QuestAfterAction_Command__get_Current(
        QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__90_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__90__System_Collections_IEnumerator_Reset(
        QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__90_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C713C4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C715FC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C713C4(&Method_QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__90_System_Collections_IEnumerator_Reset__);
  sub_1C714D8(v3, v4);
}


Il2CppObject *QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__90__System_Collections_IEnumerator_get_Current(
        QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__90_o *this,
        const MethodInfo *method)
{
  return (Il2CppObject *)this->fields.__2__current;
}


void QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__90__System_IDisposable_Dispose(
        QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__90_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w8

  _1__state = this->fields.__1__state;
  if ( _1__state == 1 || _1__state == -3 )
    QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__90____m__Finally1(this, method);
}


void QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__90____m__Finally1(
        QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__90_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_IEnumerator_QuestAfterAction_Command__o *_7__wrap1; // x19
  System_Collections_Generic_IEnumerator_QuestAfterAction_Command__c *klass; // x8
  __int64 v5; // x9
  int32_t *p_offset; // x10
  __int64 v7; // x0

  if ( (byte_4CC4008 & 1) == 0 )
  {
    sub_1C713B0(&System_IDisposable_TypeInfo);
    byte_4CC4008 = 1;
  }
  _7__wrap1 = this->fields.__7__wrap1;
  this->fields.__1__state = -1;
  if ( _7__wrap1 )
  {
    klass = _7__wrap1->klass;
    v5 = *(unsigned __int16 *)&_7__wrap1->klass->_2.rank;
    if ( *(_WORD *)&_7__wrap1->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
      {
        --v5;
        p_offset += 4;
        if ( !v5 )
          goto LABEL_8;
      }
      v7 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_8:
      v7 = sub_1C47738(_7__wrap1, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(struct System_Collections_Generic_IEnumerator_QuestAfterAction_Command__o *, _QWORD))v7)(
      _7__wrap1,
      *(_QWORD *)(v7 + 8));
  }
}


void QuestAfterAction__WaitWhileMainStateFinished_d__94___ctor(
        QuestAfterAction__WaitWhileMainStateFinished_d__94_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool QuestAfterAction__WaitWhileMainStateFinished_d__94__MoveNext(
        QuestAfterAction__WaitWhileMainStateFinished_d__94_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct QuestAfterAction_o *_4__this; // x8
  Il2CppObject **p__2__current; // x19
  bool result; // w0

  if ( this->fields.__1__state < 2u )
  {
    _4__this = this->fields.__4__this;
    this->fields.__1__state = -1;
    if ( !_4__this )
      sub_1C71608(this, method);
    if ( _4__this->fields.isKeepingMainStateButFinished )
    {
      this->fields.__2__current = 0;
      p__2__current = &this->fields.__2__current;
      sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.__2__current, 0, v2, v3, v4, v5, v6, v7);
      result = 1;
      *((_DWORD *)p__2__current - 2) = 1;
      return result;
    }
    ActionExtensions__Call(this->fields.action, 0);
  }
  return 0;
}


Il2CppObject *QuestAfterAction__WaitWhileMainStateFinished_d__94__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        QuestAfterAction__WaitWhileMainStateFinished_d__94_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn QuestAfterAction__WaitWhileMainStateFinished_d__94__System_Collections_IEnumerator_Reset(
        QuestAfterAction__WaitWhileMainStateFinished_d__94_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C713C4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C715FC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C713C4(&Method_QuestAfterAction__WaitWhileMainStateFinished_d__94_System_Collections_IEnumerator_Reset__);
  sub_1C714D8(v3, v4);
}


Il2CppObject *QuestAfterAction__WaitWhileMainStateFinished_d__94__System_Collections_IEnumerator_get_Current(
        QuestAfterAction__WaitWhileMainStateFinished_d__94_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void QuestAfterAction__WaitWhileMainStateFinished_d__94__System_IDisposable_Dispose(
        QuestAfterAction__WaitWhileMainStateFinished_d__94_o *this,
        const MethodInfo *method)
{
  ;
}


void QuestAfterAction___c__DisplayClass83_0___ctor(
        QuestAfterAction___c__DisplayClass83_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void QuestAfterAction___c__DisplayClass83_0___LoadVoice_b__0(
        QuestAfterAction___c__DisplayClass83_0_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *svtVInfos; // x0

  if ( (byte_4CC4004 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo__RemoveAt__);
    byte_4CC4004 = 1;
  }
  svtVInfos = (System_Collections_Generic_List_object__o *)this->fields.svtVInfos;
  if ( !svtVInfos
    || (System_Collections_Generic_List_object___RemoveAt(
          svtVInfos,
          0,
          (const MethodInfo_3811EEC *)Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo__RemoveAt__),
        (svtVInfos = (System_Collections_Generic_List_object__o *)this->fields.__4__this) == 0) )
  {
    sub_1C71608(svtVInfos, method);
  }
  QuestAfterAction__LoadVoice_36501864((QuestAfterAction_o *)svtVInfos, this->fields.svtVInfos, this->fields.endAct, 0);
}


void QuestAfterAction___c__DisplayClass87_0___ctor(
        QuestAfterAction___c__DisplayClass87_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void QuestAfterAction___c__DisplayClass87_0___Play_b__0(
        QuestAfterAction___c__DisplayClass87_0_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4CC4005 & 1) == 0 )
  {
    sub_1C713B0(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    byte_4CC4005 = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3A5F648 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    sub_1C71608(0, v4);
  MissionNotifyManager__EndPause((MissionNotifyManager_o *)Instance, 0);
  ActionExtensions__Call(this->fields.endAct, 0);
}


void QuestAfterAction___c__DisplayClass88_0___ctor(
        QuestAfterAction___c__DisplayClass88_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void QuestAfterAction___c__DisplayClass88_0___PlaySpecifiedAction_b__0(
        QuestAfterAction___c__DisplayClass88_0_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  char *_4__this; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7

  if ( (byte_4CC4006 & 1) == 0 )
  {
    sub_1C713B0(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    byte_4CC4006 = 1;
  }
  _4__this = (char *)this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_8;
  *((_QWORD *)_4__this + 22) = 0;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(_4__this + 176), 0, v2, v3, v4, v5, v6, v7);
  _4__this = (char *)this->fields.__4__this;
  if ( !_4__this
    || (*((_QWORD *)_4__this + 9) = 0,
        sub_1C71354((GrandQuestFolderBoardItem_o *)(_4__this + 72), 0, v10, v11, v12, v13, v14, v15),
        (_4__this = (char *)SingletonTemplate_object___get_Instance((const MethodInfo_3A5F648 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__)) == 0)
    || (MissionNotifyManager__EndPause((MissionNotifyManager_o *)_4__this, 0),
        (_4__this = (char *)this->fields.__4__this) == 0) )
  {
LABEL_8:
    sub_1C71608(_4__this, method);
  }
  QuestAfterAction__SetState((QuestAfterAction_o *)_4__this, 0, 0);
  ActionExtensions__Call(this->fields.finishCallback, 0);
}


void QuestAfterAction___c__DisplayClass88_0___PlaySpecifiedAction_b__1(
        QuestAfterAction___c__DisplayClass88_0_o *this,
        const MethodInfo *method)
{
  QuestAfterAction_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C71608(0, method);
  QuestAfterAction__SetState(_4__this, 2, 0);
}