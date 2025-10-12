void QuestAfterAction___cctor(const MethodInfo *method)
{
  if ( (byte_4C3455A & 1) == 0 )
  {
    sub_1C32C20(&QuestAfterAction_TypeInfo);
    byte_4C3455A = 1;
  }
  LODWORD(QuestAfterAction_TypeInfo->static_fields->EventAnimationAfterBgmResetTime) = (struct QuestAfterAction_StaticFields)1056964608;
}


void QuestAfterAction___ctor(QuestAfterAction_o *this, const MethodInfo *method)
{
  Il2CppObject *v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  BlankEarthQuestAfterAction_o *v6; // x20
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  System_Collections_Generic_Dictionary_TKey__TValue__o *v9; // x20
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  System_Collections_Generic_Dictionary_int__object__o *v12; // x20
  int32_t v13; // w2
  const MethodInfo *v14; // x3

  if ( (byte_4C34559 & 1) == 0 )
  {
    sub_1C32C20(&BlankEarthQuestAfterAction_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo___ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int____ctor__);
    sub_1C32C20(&System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___TypeInfo);
    sub_1C32C20(&System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_QuestAfterAction___ctor__);
    sub_1C32C20(&QuestAfterAction_TitleInfoControlCallback_TypeInfo);
    byte_4C34559 = 1;
  }
  v3 = (Il2CppObject *)sub_1C32E6C(QuestAfterAction_TitleInfoControlCallback_TypeInfo);
  System_Object___ctor(v3, 0);
  this->fields._TitleInfoCtrlCallback_k__BackingField = (struct QuestAfterAction_TitleInfoControlCallback_o *)v3;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields._TitleInfoCtrlCallback_k__BackingField, (int32_t)v3, v4, v5);
  v6 = (BlankEarthQuestAfterAction_o *)sub_1C32E6C(BlankEarthQuestAfterAction_TypeInfo);
  BlankEarthQuestAfterAction___ctor(v6, 0);
  this->fields._BlankEarthQuestAfterAction_k__BackingField = v6;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields._BlankEarthQuestAfterAction_k__BackingField, (int32_t)v6, v7, v8);
  v9 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1C32E6C(System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___TypeInfo);
  System_Collections_Generic_Dictionary_Int32Enum__object____ctor(
    v9,
    (const MethodInfo_34223E4 *)Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int____ctor__);
  this->fields.commandTypeIds = (struct System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___o *)v9;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.commandTypeIds, (int32_t)v9, v10, v11);
  v12 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C32E6C(System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v12,
    (const MethodInfo_33EF348 *)Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo___ctor__);
  this->fields.svtVoices = (struct System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__o *)v12;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.svtVoices, (int32_t)v12, v13, v14);
  this->fields.MapMoveBeforeFocusSpotId = -1;
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_39E2DEC *)Method_SingletonMonoBehaviour_QuestAfterAction___ctor__);
}


void QuestAfterAction__CallEndAct(QuestAfterAction_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  CGThumbnailListItem_o *p_endAct; // x0
  System_Action_o *endAct; // t1

  endAct = this->fields.endAct;
  p_endAct = (CGThumbnailListItem_o *)&this->fields.endAct;
  p_endAct->klass = 0;
  sub_1C32BC4(p_endAct, 0, v2, v3);
  ActionExtensions__Call(endAct, 0);
}


bool QuestAfterAction__CheckChangeBlankEarth(QuestAfterAction_o *this, const MethodInfo *method)
{
  bool result; // w0
  Il2CppObject *Instance; // x19
  __int64 v5; // x0
  Il2CppObject *MasterData_object; // x21
  int32_t v7; // w22
  _QWORD *p_image; // x21
  Il2CppObject *v9; // x21
  int32_t v10; // w22
  TerminalPramsManager_c *v11; // x0
  int32_t v12; // w20
  __int64 v13; // x8
  unsigned int *v14; // x19
  __int64 v15; // x23
  unsigned __int64 v16; // x24
  __int64 v17; // x25
  int i; // w26
  __int64 v19; // x20
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  __int64 v22; // x1
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  __int64 v25; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4C3453D & 1) == 0 )
  {
    sub_1C32C20(&QuestAfterAction_Command___TypeInfo);
    sub_1C32C20(&QuestAfterAction_Command_TypeInfo);
    sub_1C32C20(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_QuestPhaseDetailAddMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_QuestPhaseDetailMaster___);
    sub_1C32C20(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C32C20(&TerminalPramsManager_TypeInfo);
    sub_1C32C20(&StringLiteral_1172/*"1"*/);
    byte_4C3453D = 1;
  }
  entity = 0;
  if ( this->fields.BlankEarthTargetWarId > 0 )
    return 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C34564 )
  {
    sub_1C32C20(&TerminalPramsManager_TypeInfo);
    byte_4C34564 = 1;
  }
  v5 = (__int64)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = (__int64)TerminalPramsManager_TypeInfo;
  }
  if ( *(_BYTE *)(*(_QWORD *)(v5 + 184) + 102LL) )
  {
    if ( !Instance )
      goto LABEL_76;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_QuestPhaseDetailAddMaster___);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C31A97 )
    {
      sub_1C32C20(&TerminalPramsManager_TypeInfo);
      byte_4C31A97 = 1;
    }
    v5 = (__int64)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v5 = (__int64)TerminalPramsManager_TypeInfo;
    }
    v7 = *(_DWORD *)(*(_QWORD *)(v5 + 184) + 20LL);
    if ( !byte_4C31A96 )
    {
      sub_1C32C20(&TerminalPramsManager_TypeInfo);
      v5 = (__int64)TerminalPramsManager_TypeInfo;
      byte_4C31A96 = 1;
    }
    if ( !*(_DWORD *)(v5 + 224) )
    {
      j_il2cpp_runtime_class_init_0(v5);
      v5 = (__int64)TerminalPramsManager_TypeInfo;
    }
    if ( !MasterData_object )
      goto LABEL_76;
    p_image = QuestPhaseDetailAddMaster__GetAfterAction(
                (QuestPhaseDetailAddMaster_o *)MasterData_object,
                v7,
                *(_DWORD *)(*(_QWORD *)(v5 + 184) + 24LL) + 1,
                0);
    if ( p_image )
      goto LABEL_60;
    v9 = DataManager__GetMasterData_object_(
           (DataManager_o *)Instance,
           (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_QuestPhaseDetailMaster___);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C31A97 )
    {
      sub_1C32C20(&TerminalPramsManager_TypeInfo);
      byte_4C31A97 = 1;
    }
    v5 = (__int64)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v5 = (__int64)TerminalPramsManager_TypeInfo;
    }
    v10 = *(_DWORD *)(*(_QWORD *)(v5 + 184) + 20LL);
    if ( !byte_4C31A96 )
    {
      sub_1C32C20(&TerminalPramsManager_TypeInfo);
      v5 = (__int64)TerminalPramsManager_TypeInfo;
      byte_4C31A96 = 1;
    }
    if ( !*(_DWORD *)(v5 + 224) )
    {
      j_il2cpp_runtime_class_init_0(v5);
      v5 = (__int64)TerminalPramsManager_TypeInfo;
    }
    if ( !v9 )
      goto LABEL_76;
    p_image = QuestPhaseDetailMaster__GetAfterAction(
                (QuestPhaseDetailMaster_o *)v9,
                v10,
                *(_DWORD *)(*(_QWORD *)(v5 + 184) + 24LL) + 1,
                0);
    if ( p_image )
      goto LABEL_60;
    v5 = (__int64)TerminalPramsManager_TypeInfo;
  }
  if ( !*(_DWORD *)(v5 + 224) )
    j_il2cpp_runtime_class_init_0(v5);
  if ( !byte_4C34567 )
  {
    sub_1C32C20(&TerminalPramsManager_TypeInfo);
    byte_4C34567 = 1;
  }
  v11 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v11 = TerminalPramsManager_TypeInfo;
  }
  if ( !v11->static_fields->_IsQuestClear_k__BackingField )
    return 0;
  if ( !v11->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v11);
  if ( TerminalPramsManager__get_Debug_IsQuestReleaseAll(0) )
    return 0;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C31A97 )
  {
    sub_1C32C20(&TerminalPramsManager_TypeInfo);
    byte_4C31A97 = 1;
  }
  v5 = (__int64)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = (__int64)TerminalPramsManager_TypeInfo;
  }
  if ( !Instance
    || (v12 = *(_DWORD *)(*(_QWORD *)(v5 + 184) + 20LL),
        (v5 = (__int64)DataManager__GetMasterData_object_(
                         (DataManager_o *)Instance,
                         (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_QuestMaster___)) == 0) )
  {
LABEL_76:
    sub_1C32E7C(v5);
  }
  v5 = DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)v5,
         &entity,
         v12,
         (const MethodInfo_3396884 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
  if ( (v5 & 1) == 0 )
    return 0;
  if ( !entity )
    goto LABEL_76;
  p_image = &entity[6].klass->_1.image;
  if ( !p_image )
    return 0;
LABEL_60:
  v13 = p_image[3];
  result = 0;
  if ( (int)v13 < 2 || (v13 & 1) != 0 )
    return result;
  v5 = sub_1C32CC8(QuestAfterAction_Command___TypeInfo, (unsigned int)v13 >> 1);
  if ( !v5 )
    goto LABEL_76;
  v14 = (unsigned int *)v5;
  if ( *(int *)(v5 + 24) < 1 )
    return 0;
  v15 = 0;
  v16 = 0;
  v17 = v5 + 32;
  for ( i = 1; ; i += 2 )
  {
    v19 = sub_1C32E6C(QuestAfterAction_Command_TypeInfo);
    System_Object___ctor((Il2CppObject *)v19, 0);
    if ( (unsigned int)(i - 1) >= *((_DWORD *)p_image + 6) )
      goto LABEL_75;
    v5 = System_Int32__Parse((System_String_o *)p_image[i + 3], 0);
    if ( !v19 )
      goto LABEL_76;
    *(_DWORD *)(v19 + 16) = v5;
    if ( (unsigned int)i >= *((_DWORD *)p_image + 6) )
LABEL_75:
      sub_1C32E84(v5);
    v22 = p_image[i + 4];
    *(_QWORD *)(v19 + 24) = v22;
    sub_1C32BC4((CGThumbnailListItem_o *)(v19 + 24), v22, v20, v21);
    if ( *(_DWORD *)(v19 + 16) == 701
      && System_String__op_Equality(*(System_String_o **)(v19 + 24), (System_String_o *)StringLiteral_1172/*"1"*/, 0) )
    {
      break;
    }
    v5 = sub_1C32D5C(v19, *(_QWORD *)(*(_QWORD *)v14 + 64LL));
    if ( !v5 )
    {
      v25 = sub_1C32EA0();
      sub_1C32D48(v25, 0);
    }
    if ( v16 >= v14[6] )
      goto LABEL_75;
    *(_QWORD *)(v17 + 8 * v16) = v19;
    sub_1C32BC4((CGThumbnailListItem_o *)(v17 + v15), v19, v23, v24);
    ++v16;
    v15 += 8;
    if ( (__int64)v16 >= (int)v14[6] )
      return 0;
  }
  return 1;
}


void QuestAfterAction__Clear(QuestAfterAction_o *this, const MethodInfo *method)
{
  QuestAfterAction_c *v3; // x0
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4C34556 & 1) == 0 )
  {
    sub_1C32C20(&QuestAfterAction_TypeInfo);
    byte_4C34556 = 1;
  }
  v3 = QuestAfterAction_TypeInfo;
  if ( !QuestAfterAction_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(QuestAfterAction_TypeInfo);
  QuestAfterAction__DeleteContinueData((const MethodInfo *)v3);
  this->fields.commandBuf = 0;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.commandBuf, 0, v4, v5);
}


QuestAfterAction_Command_array *QuestAfterAction__ConvertValsToCommand(
        QuestAfterAction_o *this,
        System_String_array *actionVals,
        const MethodInfo *method)
{
  if ( (byte_4C3454B & 1) == 0 )
  {
    sub_1C32C20(&QuestAfterAction_TypeInfo);
    byte_4C3454B = 1;
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
  Il2CppObject *Instance; // x22
  DataMasterBase_TMaster__TEntity__PKType__o *MasterData_object; // x0
  System_Collections_ObjectModel_ObservableCollection_TEntity__c *klass; // x8
  System_Collections_ObjectModel_ObservableCollection_TEntity__c *v14; // x8
  const MethodInfo *v15; // x8
  int32_t invoker_method_high; // w24
  System_Collections_ObjectModel_ObservableCollection_TEntity__c *v17; // x8
  const MethodInfo *v18; // x8
  int32_t invoker_method; // w25
  System_Collections_ObjectModel_ObservableCollection_TEntity__c *v20; // x8
  const MethodInfo *v21; // x8
  int32_t MasterName_k__BackingField_high; // w24
  System_Collections_ObjectModel_ObservableCollection_TEntity__c *v23; // x8
  const MethodInfo *v24; // x8
  int32_t MasterKind_k__BackingField; // w19
  TerminalPramsManager_c *v26; // x0
  TerminalSceneComponent_c *v27; // x0
  TerminalPramsManager_c *v28; // x0
  DataMasterBase_TMaster__TEntity__PKType__o *v29; // x23
  int32_t v30; // w24
  int32_t v31; // w24
  System_String_o *lookup; // x24
  bool v33; // w24
  bool v34; // w23
  Il2CppObject *v35; // x23
  WarEntity_o *QuestId; // x0
  WarEntity_o *v37; // x23
  BalanceConfig_c *v38; // x0
  bool v39; // w0
  uint32_t cctor_finished; // w9
  TerminalPramsManager_c *v41; // x0
  TerminalPramsManager_c *v42; // x0
  int32_t id; // w19
  bool v44; // w23
  TerminalPramsManager_c *v45; // x0
  Il2CppObject *Master_object; // x23
  WarReleaseEntity_o *OpenEntity; // x24
  Il2CppObject *v48; // x23
  bool QuestEntity; // w0
  TerminalPramsManager_c *v50; // x0
  Il2CppObject *v51; // x23
  int32_t items_high; // w24
  Il2CppObject *v53; // x22
  int32_t v54; // w23
  TerminalPramsManager_c *v55; // x0
  Il2CppObject *v56; // x22
  int32_t v57; // w24
  const MethodInfo *v58; // x1
  bool IsOverwriteCommandNone; // w0
  il2cpp_array_size_t max_length; // x8
  __int64 v61; // x0
  unsigned int **p_commandBuf; // x21
  int32_t v63; // w2
  const MethodInfo *v64; // x3
  int *commandBuf; // x8
  unsigned __int64 v66; // x22
  unsigned int v67; // w29
  __int64 v68; // x24
  int32_t v69; // w2
  const MethodInfo *v70; // x3
  __int64 v71; // x8
  System_String_o *v72; // x1
  System_String_o **v73; // x25
  const MethodInfo *v74; // x2
  int v75; // w8
  bool v76; // w8
  System_Collections_Generic_Dictionary_int__object__o *svtVoices; // x26
  int32_t v78; // w21
  DataMasterBase_TMaster__TEntity__PKType__o *v79; // x28
  __int64 v80; // x27
  int32_t v81; // w2
  const MethodInfo *v82; // x3
  System_String_c *MasterName_k__BackingField; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v84; // x26
  int32_t v85; // w26
  BalanceConfig_c *v86; // x8
  int klass_high; // w27
  int v88; // w8
  unsigned int v89; // w8
  int32_t v90; // w1
  const MethodInfo *v91; // x1
  System_Collections_Generic_List_int__o *Item; // x26
  struct System_Int32_array *items; // x8
  _QWORD *v94; // x9
  __int64 size; // x10
  QuestAfterAction_o *v96; // x0
  const MethodInfo *v97; // x2
  System_String_c *v98; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v99; // x25
  unsigned __int64 v100; // x26
  int32_t v101; // w1
  System_String_Fields v102; // x8
  _QWORD *v103; // x9
  __int64 MasterName_k__BackingField_low; // x10
  unsigned int *v105; // x25
  int32_t v106; // w2
  const MethodInfo *v107; // x3
  unsigned int *v108; // x0
  TerminalPramsManager_c *v109; // x0
  TerminalPramsManager_c *v110; // x0
  int32_t BeforeQuestStartWarId_k__BackingField; // w19
  TerminalSceneComponent_c *v112; // x0
  Il2CppObject *v113; // x21
  TerminalPramsManager_c *v114; // x0
  TerminalPramsManager_c *v115; // x0
  Il2CppObject *v116; // x20
  TerminalPramsManager_c *v117; // x0
  BalanceConfig_c *v118; // x8
  int32_t WarId_k__BackingField; // w19
  int32_t v120; // w19
  TerminalPramsManager_c *v121; // x0
  TerminalPramsManager_c *v122; // x0
  TerminalPramsManager_c *v123; // x0
  BalanceConfig_c *v124; // x8
  int32_t v125; // w20
  TerminalPramsManager_c *v126; // x0
  __int64 v127; // x0
  char v128; // [xsp+Ch] [xbp-94h]
  int32_t svtId; // [xsp+1Ch] [xbp-84h] BYREF
  Il2CppObject *v130; // [xsp+20h] [xbp-80h] BYREF
  QuestEntity_o *entity; // [xsp+28h] [xbp-78h] BYREF
  Il2CppObject *v132; // [xsp+30h] [xbp-70h] BYREF
  QuestEntity_o *v133; // [xsp+38h] [xbp-68h] BYREF

  v4 = this;
  if ( (byte_4C3453C & 1) == 0 )
  {
    sub_1C32C20(&BalanceConfig_TypeInfo);
    sub_1C32C20(&bool_TypeInfo);
    sub_1C32C20(&QuestAfterAction_Command___TypeInfo);
    sub_1C32C20(&QuestAfterAction_Command_TypeInfo);
    sub_1C32C20(&Method_DataManager_GetMasterData_EventMissionMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_QuestPhaseDetailAddMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_QuestPhaseDetailMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_WarMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_BlankEarthSpotMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_QuestBehaviorMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_QuestMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_ShopMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_WarMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_WarReleaseMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__);
    sub_1C32C20(&Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__GetEntity__);
    sub_1C32C20(&Method_DataMasterBase_BlankEarthSpotMaster__BlankEarthSpotEntity__int__TryGetEntity__);
    sub_1C32C20(&Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___get_Item__);
    sub_1C32C20(&Method_System_Linq_Enumerable_Any_KeyValuePair_int__QuestAfterAction_VoiceInfo____);
    sub_1C32C20(&Method_System_Linq_Enumerable_Contains_int___);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C32C20(&QuestAfterAction_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C32C20(&TerminalPramsManager_TypeInfo);
    sub_1C32C20(&TerminalSceneComponent_TypeInfo);
    sub_1C32C20(&QuestAfterAction_VoiceInfo_TypeInfo);
    sub_1C32C20(&StringLiteral_16711/*"afterActionBk"*/);
    this = (QuestAfterAction_o *)sub_1C32C20(&StringLiteral_811/*","*/);
    byte_4C3453C = 1;
  }
  v132 = 0;
  v133 = 0;
  v130 = 0;
  entity = 0;
  svtId = 0;
  *(_WORD *)&v4->fields.isLoadedVoice = 0;
  *(_QWORD *)&v4->fields.ActionMapTargetType = -1;
  if ( isBeforeAction )
  {
    if ( System_Linq_Enumerable__Any_KeyValuePair_int__object__(
           (System_Collections_Generic_IEnumerable_TSource__o *)v4->fields.svtVoices,
           (const MethodInfo_30E8270 *)Method_System_Linq_Enumerable_Any_KeyValuePair_int__QuestAfterAction_VoiceInfo____) )
    {
      QuestAfterAction__releaseVoice(v4, v5);
    }
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C31A97 )
    {
      sub_1C32C20(&TerminalPramsManager_TypeInfo);
      byte_4C31A97 = 1;
    }
    v7 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v7 = TerminalPramsManager_TypeInfo;
    }
    QuestId_k__BackingField = v7->static_fields->_QuestId_k__BackingField;
    if ( !byte_4C31A96 )
    {
      sub_1C32C20(&TerminalPramsManager_TypeInfo);
      v7 = TerminalPramsManager_TypeInfo;
      byte_4C31A96 = 1;
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
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4C319B6 )
  {
    sub_1C32C20(&TerminalSceneComponent_TypeInfo);
    byte_4C319B6 = 1;
  }
  MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalSceneComponent_TypeInfo;
  }
  klass = MasterData_object[2].fields.list->klass;
  if ( !klass )
    goto LABEL_343;
  if ( !klass->vtable._9_unknown.method )
    goto LABEL_82;
  if ( !LODWORD(MasterData_object[3].monitor) )
    j_il2cpp_runtime_class_init_0(MasterData_object);
  if ( !byte_4C319B6 )
  {
    sub_1C32C20(&TerminalSceneComponent_TypeInfo);
    byte_4C319B6 = 1;
  }
  MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalSceneComponent_TypeInfo;
  }
  v14 = MasterData_object[2].fields.list->klass;
  if ( !v14 )
    goto LABEL_343;
  v15 = v14->vtable._9_unknown.method;
  if ( !v15 )
    goto LABEL_343;
  invoker_method_high = HIDWORD(v15->invoker_method);
  if ( !byte_4C319B6 )
  {
    sub_1C32C20(&TerminalSceneComponent_TypeInfo);
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalSceneComponent_TypeInfo;
    byte_4C319B6 = 1;
  }
  if ( !LODWORD(MasterData_object[3].monitor) )
  {
    j_il2cpp_runtime_class_init_0(MasterData_object);
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalSceneComponent_TypeInfo;
  }
  v17 = MasterData_object[2].fields.list->klass;
  if ( !v17 )
    goto LABEL_343;
  v18 = v17->vtable._9_unknown.method;
  if ( !v18 )
    goto LABEL_343;
  invoker_method = (int32_t)v18->invoker_method;
  if ( invoker_method >= 1 )
  {
    if ( !LODWORD(MasterData_object[3].monitor) )
      j_il2cpp_runtime_class_init_0(MasterData_object);
    if ( !byte_4C319B6 )
    {
      sub_1C32C20(&TerminalSceneComponent_TypeInfo);
      byte_4C319B6 = 1;
    }
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalSceneComponent_TypeInfo;
    }
    v20 = MasterData_object[2].fields.list->klass;
    if ( !v20 )
      goto LABEL_343;
    v21 = v20->vtable._9_unknown.method;
    if ( !v21 )
      goto LABEL_343;
    if ( !Instance )
      goto LABEL_343;
    afterActionVals = (System_String_array *)v21->klass;
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMasterData_object_(
                                                                        (DataManager_o *)Instance,
                                                                        (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_EventMissionMaster___);
    if ( !MasterData_object )
      goto LABEL_343;
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__int___GetEntity(
                                                                        MasterData_object,
                                                                        invoker_method,
                                                                        (const MethodInfo_3396838 *)Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__GetEntity__);
    if ( !MasterData_object )
      goto LABEL_343;
    MasterName_k__BackingField_high = HIDWORD(MasterData_object->fields._MasterName_k__BackingField);
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMasterData_object_(
                                                                        (DataManager_o *)Instance,
                                                                        (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_WarMaster___);
    if ( !MasterData_object )
      goto LABEL_343;
    goto LABEL_69;
  }
  if ( invoker_method_high >= 1 )
  {
    if ( !LODWORD(MasterData_object[3].monitor) )
      j_il2cpp_runtime_class_init_0(MasterData_object);
    if ( !byte_4C319B6 )
    {
      sub_1C32C20(&TerminalSceneComponent_TypeInfo);
      byte_4C319B6 = 1;
    }
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalSceneComponent_TypeInfo;
    }
    v23 = MasterData_object[2].fields.list->klass;
    if ( !v23 )
      goto LABEL_343;
    v24 = v23->vtable._9_unknown.method;
    if ( !v24 )
      goto LABEL_343;
    afterActionVals = (System_String_array *)v24->klass;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_ShopMaster___);
    if ( !MasterData_object )
      goto LABEL_343;
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__int___GetEntity(
                                                                        MasterData_object,
                                                                        invoker_method_high,
                                                                        (const MethodInfo_3396838 *)Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__);
    if ( !MasterData_object )
      goto LABEL_343;
    MasterName_k__BackingField_high = (int32_t)MasterData_object->fields._MasterName_k__BackingField;
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_WarMaster___);
    if ( !MasterData_object )
      goto LABEL_343;
LABEL_69:
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)WarMaster__getByEventId(
                                                                        (WarMaster_o *)MasterData_object,
                                                                        MasterName_k__BackingField_high,
                                                                        0);
    if ( !MasterData_object )
      goto LABEL_343;
    MasterKind_k__BackingField = MasterData_object->fields._MasterKind_k__BackingField;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C342B2 )
    {
      sub_1C32C20(&TerminalPramsManager_TypeInfo);
      byte_4C342B2 = 1;
    }
    v26 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v26 = TerminalPramsManager_TypeInfo;
    }
    v26->static_fields->_WarId_k__BackingField = MasterKind_k__BackingField;
    if ( !byte_4C319B6 )
    {
      sub_1C32C20(&TerminalSceneComponent_TypeInfo);
      byte_4C319B6 = 1;
    }
    v27 = TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      v27 = TerminalSceneComponent_TypeInfo;
    }
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)v27->static_fields->mInstance;
    if ( !MasterData_object )
      goto LABEL_343;
    TerminalSceneComponent__CallQuestInformationCloseAtAll((TerminalSceneComponent_o *)MasterData_object, 0, 0);
    if ( afterActionVals )
      goto LABEL_234;
  }
LABEL_82:
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C34564 )
  {
    sub_1C32C20(&TerminalPramsManager_TypeInfo);
    byte_4C34564 = 1;
  }
  v28 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v28 = TerminalPramsManager_TypeInfo;
  }
  if ( !v28->static_fields->_IsPhaseClear_k__BackingField
    && UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_16711/*"afterActionBk"*/, 0) )
  {
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)UnityEngine_PlayerPrefs__GetString_71182452(
                                                                        (System_String_o *)StringLiteral_16711/*"afterActionBk"*/,
                                                                        0);
    if ( !MasterData_object )
      goto LABEL_343;
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)System_String__Split(
                                                                        (System_String_o *)MasterData_object,
                                                                        0x2Cu,
                                                                        0,
                                                                        0);
    if ( !MasterData_object )
      goto LABEL_343;
    v29 = MasterData_object;
    if ( !LODWORD(MasterData_object->fields._MasterName_k__BackingField) )
      goto LABEL_483;
    v30 = System_Int32__Parse(*(System_String_o **)&MasterData_object->fields.revision, 0);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C342AC )
    {
      sub_1C32C20(&TerminalPramsManager_TypeInfo);
      byte_4C342AC = 1;
    }
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
    }
    HIDWORD(MasterData_object[2].fields.list->fields.items) = v30;
    if ( LODWORD(v29->fields._MasterName_k__BackingField) <= 1 )
      goto LABEL_483;
    v31 = System_Int32__Parse((System_String_o *)v29->fields.list, 0);
    if ( !byte_4C342B0 )
    {
      sub_1C32C20(&TerminalPramsManager_TypeInfo);
      byte_4C342B0 = 1;
    }
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
    }
    LODWORD(MasterData_object[2].fields.list->fields._monitor) = v31;
    if ( LODWORD(v29->fields._MasterName_k__BackingField) <= 2 )
      goto LABEL_483;
    lookup = (System_String_o *)v29->fields._lookup;
    if ( !bool_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(bool_TypeInfo);
    v33 = System_Boolean__Parse(lookup, 0);
    if ( !byte_4C34565 )
    {
      sub_1C32C20(&TerminalPramsManager_TypeInfo);
      byte_4C34565 = 1;
    }
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
    }
    BYTE5(MasterData_object[2].fields.list[1].fields.CollectionChanged) = v33;
    if ( LODWORD(v29->fields._MasterName_k__BackingField) <= 3 )
      goto LABEL_483;
    v34 = System_Boolean__Parse((System_String_o *)v29->fields.seriazlier, 0);
    if ( !byte_4C34566 )
    {
      sub_1C32C20(&TerminalPramsManager_TypeInfo);
      byte_4C34566 = 1;
    }
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
    }
    BYTE6(MasterData_object[2].fields.list[1].fields.CollectionChanged) = v34;
    if ( !byte_4C34567 )
    {
      sub_1C32C20(&TerminalPramsManager_TypeInfo);
      MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
      byte_4C34567 = 1;
    }
    if ( !LODWORD(MasterData_object[3].monitor) )
    {
      j_il2cpp_runtime_class_init_0(MasterData_object);
      MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
    }
    if ( BYTE5(MasterData_object[2].fields.list[1].fields.CollectionChanged) )
    {
      if ( !Instance )
        goto LABEL_343;
      v35 = DataManager__GetMasterData_object_(
              (DataManager_o *)Instance,
              (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_WarMaster___);
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4C31A97 )
      {
        sub_1C32C20(&TerminalPramsManager_TypeInfo);
        byte_4C31A97 = 1;
      }
      MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
      }
      if ( !v35 )
        goto LABEL_343;
      QuestId = WarMaster__getByLastQuestId(
                  (WarMaster_o *)v35,
                  HIDWORD(MasterData_object[2].fields.list->fields.items),
                  0);
      if ( QuestId )
      {
        v37 = QuestId;
        v38 = BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v38 = BalanceConfig_TypeInfo;
        }
        v39 = System_Linq_Enumerable__Contains_int_(
                (System_Collections_Generic_IEnumerable_TSource__o *)v38->static_fields->MainInterludeMapReturnWarIds,
                v37->fields.id,
                (const MethodInfo_30FA3A0 *)Method_System_Linq_Enumerable_Contains_int___);
        cctor_finished = TerminalPramsManager_TypeInfo->_2.cctor_finished;
        if ( v39 )
        {
          if ( !cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          if ( !byte_4C34568 )
          {
            sub_1C32C20(&TerminalPramsManager_TypeInfo);
            byte_4C34568 = 1;
          }
          v41 = TerminalPramsManager_TypeInfo;
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            v41 = TerminalPramsManager_TypeInfo;
          }
          v41->static_fields->_IsWarClear_k__BackingField = 0;
        }
        else
        {
          if ( !cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          if ( !byte_4C34568 )
          {
            sub_1C32C20(&TerminalPramsManager_TypeInfo);
            byte_4C34568 = 1;
          }
          v42 = TerminalPramsManager_TypeInfo;
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            v42 = TerminalPramsManager_TypeInfo;
          }
          v42->static_fields->_IsWarClear_k__BackingField = 1;
          id = v37->fields.id;
          if ( !byte_4C342B2 )
          {
            sub_1C32C20(&TerminalPramsManager_TypeInfo);
            v42 = TerminalPramsManager_TypeInfo;
            byte_4C342B2 = 1;
          }
          if ( !v42->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v42);
            v42 = TerminalPramsManager_TypeInfo;
          }
          v42->static_fields->_WarId_k__BackingField = id;
          v44 = TerminalPramsManager__CheckIsOrdealCallWarClear(v37, 0);
          if ( !byte_4C34569 )
          {
            sub_1C32C20(&TerminalPramsManager_TypeInfo);
            byte_4C34569 = 1;
          }
          v45 = TerminalPramsManager_TypeInfo;
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            v45 = TerminalPramsManager_TypeInfo;
          }
          v45->static_fields->_IsOrdealCallWarClear_k__BackingField = v44;
        }
      }
    }
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_WarReleaseMaster___);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C31DAD )
  {
    sub_1C32C20(&TerminalPramsManager_TypeInfo);
    byte_4C31DAD = 1;
  }
  MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
  }
  if ( !Master_object )
    goto LABEL_343;
  OpenEntity = WarReleaseMaster__GetOpenEntity(
                 (WarReleaseMaster_o *)Master_object,
                 HIDWORD(MasterData_object[2].fields.list->klass),
                 0);
  if ( !byte_4C3456A )
  {
    sub_1C32C20(&TerminalPramsManager_TypeInfo);
    byte_4C3456A = 1;
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
    if ( !byte_4C341F5 )
    {
      sub_1C32C20(&TerminalPramsManager_TypeInfo);
      byte_4C341F5 = 1;
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
    goto LABEL_343;
  v48 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C31A97 )
  {
    sub_1C32C20(&TerminalPramsManager_TypeInfo);
    byte_4C31A97 = 1;
  }
  MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
  }
  if ( !v48 )
    goto LABEL_343;
  QuestEntity = QuestMaster__TryGetQuestEntity(
                  (QuestMaster_o *)v48,
                  &entity,
                  HIDWORD(MasterData_object[2].fields.list->fields.items),
                  0);
  afterActionVals = 0;
  if ( !QuestEntity )
    goto LABEL_234;
  MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)entity;
  if ( !entity )
    goto LABEL_343;
  if ( QuestEntity__IsOpenByTime(entity, 0, 0) )
  {
LABEL_189:
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C34564 )
    {
      sub_1C32C20(&TerminalPramsManager_TypeInfo);
      byte_4C34564 = 1;
    }
    v50 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v50 = TerminalPramsManager_TypeInfo;
    }
    if ( v50->static_fields->_IsPhaseClear_k__BackingField )
    {
      v51 = DataManager__GetMasterData_object_(
              (DataManager_o *)Instance,
              (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_QuestPhaseDetailAddMaster___);
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4C31A97 )
      {
        sub_1C32C20(&TerminalPramsManager_TypeInfo);
        byte_4C31A97 = 1;
      }
      MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
      }
      items_high = HIDWORD(MasterData_object[2].fields.list->fields.items);
      if ( !byte_4C31A96 )
      {
        sub_1C32C20(&TerminalPramsManager_TypeInfo);
        MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
        byte_4C31A96 = 1;
      }
      if ( !LODWORD(MasterData_object[3].monitor) )
      {
        j_il2cpp_runtime_class_init_0(MasterData_object);
        MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
      }
      if ( !v51 )
        goto LABEL_343;
      afterActionVals = QuestPhaseDetailAddMaster__GetAfterAction(
                          (QuestPhaseDetailAddMaster_o *)v51,
                          items_high,
                          LODWORD(MasterData_object[2].fields.list->fields._monitor) + 1,
                          0);
      if ( afterActionVals )
        goto LABEL_234;
      v53 = DataManager__GetMasterData_object_(
              (DataManager_o *)Instance,
              (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_QuestPhaseDetailMaster___);
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4C31A97 )
      {
        sub_1C32C20(&TerminalPramsManager_TypeInfo);
        byte_4C31A97 = 1;
      }
      MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
      }
      v54 = HIDWORD(MasterData_object[2].fields.list->fields.items);
      if ( !byte_4C31A96 )
      {
        sub_1C32C20(&TerminalPramsManager_TypeInfo);
        MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
        byte_4C31A96 = 1;
      }
      if ( !LODWORD(MasterData_object[3].monitor) )
      {
        j_il2cpp_runtime_class_init_0(MasterData_object);
        MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
      }
      if ( !v53 )
        goto LABEL_343;
      afterActionVals = QuestPhaseDetailMaster__GetAfterAction(
                          (QuestPhaseDetailMaster_o *)v53,
                          v54,
                          LODWORD(MasterData_object[2].fields.list->fields._monitor) + 1,
                          0);
      if ( afterActionVals )
        goto LABEL_234;
      v50 = TerminalPramsManager_TypeInfo;
    }
    if ( !v50->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v50);
    if ( !byte_4C34567 )
    {
      sub_1C32C20(&TerminalPramsManager_TypeInfo);
      byte_4C34567 = 1;
    }
    v55 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v55 = TerminalPramsManager_TypeInfo;
    }
    if ( v55->static_fields->_IsQuestClear_k__BackingField )
    {
      if ( !v55->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v55);
      MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager__get_Debug_IsQuestReleaseAll(0);
      afterActionVals = 0;
      if ( ((unsigned __int8)MasterData_object & 1) == 0 )
      {
        if ( !entity )
          goto LABEL_343;
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
  v56 = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_QuestBehaviorMaster___);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C31A97 )
  {
    sub_1C32C20(&TerminalPramsManager_TypeInfo);
    byte_4C31A97 = 1;
  }
  MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
  }
  v57 = HIDWORD(MasterData_object[2].fields.list->fields.items);
  if ( !byte_4C31A96 )
  {
    sub_1C32C20(&TerminalPramsManager_TypeInfo);
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
    byte_4C31A96 = 1;
  }
  if ( !LODWORD(MasterData_object[3].monitor) )
  {
    j_il2cpp_runtime_class_init_0(MasterData_object);
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
  }
  if ( !v56 )
    goto LABEL_343;
  if ( QuestBehaviorMaster__IsOpenQuestBehaviorCond(
         (QuestBehaviorMaster_o *)v56,
         v57,
         LODWORD(MasterData_object[2].fields.list->fields._monitor) + 1,
         7,
         0) )
  {
    goto LABEL_487;
  }
  if ( !QuestAfterAction_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(QuestAfterAction_TypeInfo);
  IsOverwriteCommandNone = QuestAfterAction__IsOverwriteCommandNone(afterActionVals, v58);
  if ( !afterActionVals
    || IsOverwriteCommandNone
    || (max_length = afterActionVals->max_length, (int)max_length < 2)
    || (max_length & 1) != 0 )
  {
LABEL_487:
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C3456B )
    {
      sub_1C32C20(&TerminalPramsManager_TypeInfo);
      byte_4C3456B = 1;
    }
    v109 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v109 = TerminalPramsManager_TypeInfo;
    }
    if ( v109->static_fields->_BeforeQuestStartWarId_k__BackingField >= 1 )
    {
      if ( !v109->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v109);
      if ( !byte_4C3219C )
      {
        sub_1C32C20(&TerminalPramsManager_TypeInfo);
        byte_4C3219C = 1;
      }
      v110 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v110 = TerminalPramsManager_TypeInfo;
      }
      v110->static_fields->_IsAutoResume_k__BackingField = 1;
      if ( !byte_4C342AE )
      {
        sub_1C32C20(&TerminalPramsManager_TypeInfo);
        v110 = TerminalPramsManager_TypeInfo;
        byte_4C342AE = 1;
      }
      if ( !v110->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v110);
        v110 = TerminalPramsManager_TypeInfo;
      }
      v110->static_fields->_DispState_k__BackingField = 2;
      if ( !byte_4C3456B )
      {
        sub_1C32C20(&TerminalPramsManager_TypeInfo);
        v110 = TerminalPramsManager_TypeInfo;
        byte_4C3456B = 1;
      }
      if ( !v110->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v110);
        v110 = TerminalPramsManager_TypeInfo;
      }
      BeforeQuestStartWarId_k__BackingField = v110->static_fields->_BeforeQuestStartWarId_k__BackingField;
      if ( !byte_4C342B2 )
      {
        sub_1C32C20(&TerminalPramsManager_TypeInfo);
        v110 = TerminalPramsManager_TypeInfo;
        byte_4C342B2 = 1;
      }
      if ( !v110->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v110);
        v110 = TerminalPramsManager_TypeInfo;
      }
      v110->static_fields->_WarId_k__BackingField = BeforeQuestStartWarId_k__BackingField;
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      if ( !byte_4C319B6 )
      {
        sub_1C32C20(&TerminalSceneComponent_TypeInfo);
        byte_4C319B6 = 1;
      }
      v112 = TerminalSceneComponent_TypeInfo;
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        v112 = TerminalSceneComponent_TypeInfo;
      }
      MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)v112->static_fields->mInstance;
      if ( !MasterData_object )
        goto LABEL_343;
      TerminalSceneComponent__CallQuestInformationCloseAtAll((TerminalSceneComponent_o *)MasterData_object, 0, 0);
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      v113 = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_WarMaster___);
      if ( !byte_4C31DAD )
      {
        sub_1C32C20(&TerminalPramsManager_TypeInfo);
        byte_4C31DAD = 1;
      }
      MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
      }
      if ( !v113 )
        goto LABEL_343;
      if ( DataMasterBase_object__object__int___TryGetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)v113,
             &v130,
             HIDWORD(MasterData_object[2].fields.list->klass),
             (const MethodInfo_3396884 *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__) )
      {
        MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)v130;
        if ( !v130 )
          goto LABEL_343;
        v4->fields.ActionMapTargetId = WarEntity__GetBaseMap((WarEntity_o *)v130, 0);
      }
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4C3456C )
      {
        sub_1C32C20(&TerminalPramsManager_TypeInfo);
        byte_4C3456C = 1;
      }
      v114 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v114 = TerminalPramsManager_TypeInfo;
      }
      v114->static_fields->_BeforeQuestStartWarId_k__BackingField = 0;
    }
    UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_16711/*"afterActionBk"*/, 0);
    return;
  }
  v61 = sub_1C32CC8(QuestAfterAction_Command___TypeInfo, (unsigned int)max_length >> 1);
  v4->fields.commandBuf = (struct QuestAfterAction_Command_array *)v61;
  p_commandBuf = (unsigned int **)&v4->fields.commandBuf;
  sub_1C32BC4((CGThumbnailListItem_o *)&v4->fields.commandBuf, v61, v63, v64);
  commandBuf = (int *)v4->fields.commandBuf;
  if ( !commandBuf )
    goto LABEL_343;
  v128 = 0;
  v66 = 0;
  v67 = 0;
  while ( (__int64)v66 < commandBuf[6] )
  {
    v68 = sub_1C32E6C(QuestAfterAction_Command_TypeInfo);
    System_Object___ctor((Il2CppObject *)v68, 0);
    if ( v67 >= LODWORD(afterActionVals->max_length) )
      goto LABEL_483;
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)System_Int32__Parse(
                                                                        afterActionVals->m_Items[v67],
                                                                        0);
    if ( !v68 )
      goto LABEL_343;
    *(_DWORD *)(v68 + 16) = (_DWORD)MasterData_object;
    v71 = (int)v67 | 1LL;
    if ( (unsigned int)v71 >= LODWORD(afterActionVals->max_length) )
      goto LABEL_483;
    v72 = afterActionVals->m_Items[v71];
    *(_QWORD *)(v68 + 24) = v72;
    v73 = (System_String_o **)(v68 + 24);
    sub_1C32BC4((CGThumbnailListItem_o *)(v68 + 24), (int32_t)v72, v69, v70);
    if ( !v67 && !v4->fields.isRequestedStopBgm && *(_DWORD *)(v68 + 16) == 850 )
      v4->fields.isRequestedStopBgm = 1;
    if ( v4->fields.MapMoveBeforeFocusSpotId < 0 && *(_DWORD *)(v68 + 16) == 350 )
    {
      MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)*v73;
      if ( !*v73 )
        goto LABEL_343;
      MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)System_String__Split(
                                                                          (System_String_o *)MasterData_object,
                                                                          0x2Cu,
                                                                          0,
                                                                          0);
      if ( !MasterData_object )
        goto LABEL_343;
      if ( SLODWORD(MasterData_object->fields._MasterName_k__BackingField) >= 4 )
      {
        MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)System_Int32__Parse(
                                                                            (System_String_o *)MasterData_object->fields.seriazlier,
                                                                            0);
        v4->fields.MapMoveBeforeFocusSpotId = (int)MasterData_object;
      }
    }
    v75 = *(_DWORD *)(v68 + 16);
    if ( v4->fields.IsMoveToEventRewardShop || v75 != 700 )
    {
      if ( v75 == 703 )
      {
        MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)*v73;
        if ( !*v73 )
          goto LABEL_343;
        MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)System_String__Split_63570436(
                                                                            (System_String_o *)MasterData_object,
                                                                            (System_String_o *)StringLiteral_811/*","*/,
                                                                            0,
                                                                            0);
        if ( !MasterData_object )
          goto LABEL_343;
        if ( SLODWORD(MasterData_object->fields._MasterName_k__BackingField) >= 3 )
        {
          MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)System_Int32__Parse(
                                                                              (System_String_o *)MasterData_object->fields._lookup,
                                                                              0);
          v76 = (int)MasterData_object > 0;
        }
        else
        {
          v76 = 0;
        }
        v4->fields.IsMoveBeforeFadeIn = v76;
        v4->fields.IsMoveToClassScore = 1;
        v75 = *(_DWORD *)(v68 + 16);
      }
      if ( v75 == 800 )
      {
        MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)QuestAfterAction_Command__GetAvailableRandomVoice(
                                                                            (QuestAfterAction_Command_o *)v68,
                                                                            &svtId,
                                                                            v74);
        if ( MasterData_object )
        {
          svtVoices = (System_Collections_Generic_Dictionary_int__object__o *)v4->fields.svtVoices;
          v78 = svtId;
          v79 = MasterData_object;
          v80 = sub_1C32E6C(QuestAfterAction_VoiceInfo_TypeInfo);
          System_Object___ctor((Il2CppObject *)v80, 0);
          *(_DWORD *)(v80 + 16) = v78;
          *(_QWORD *)(v80 + 24) = v79;
          sub_1C32BC4((CGThumbnailListItem_o *)(v80 + 24), (int32_t)v79, v81, v82);
          if ( !svtVoices )
            goto LABEL_343;
          System_Collections_Generic_Dictionary_int__object___Add(
            svtVoices,
            v66,
            (Il2CppObject *)v80,
            (const MethodInfo_33EFD1C *)Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__Add__);
          p_commandBuf = (unsigned int **)&v4->fields.commandBuf;
        }
        v75 = *(_DWORD *)(v68 + 16);
      }
      if ( v75 == 702 )
      {
        MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)*v73;
        if ( !*v73 )
          goto LABEL_343;
        MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)System_String__Split_63570436(
                                                                            (System_String_o *)MasterData_object,
                                                                            (System_String_o *)StringLiteral_811/*","*/,
                                                                            0,
                                                                            0);
        if ( !MasterData_object )
          goto LABEL_343;
        MasterName_k__BackingField = (System_String_c *)MasterData_object->fields._MasterName_k__BackingField;
        v84 = MasterData_object;
        if ( MasterName_k__BackingField )
        {
          if ( !(_DWORD)MasterName_k__BackingField )
            goto LABEL_483;
          MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)System_Int32__Parse(
                                                                              *(System_String_o **)&MasterData_object->fields.revision,
                                                                              0);
          if ( (int)MasterData_object >= 1 )
          {
            if ( SLODWORD(v84->fields._MasterName_k__BackingField) < 2 )
              v85 = 0;
            else
              v85 = System_Int32__Parse((System_String_o *)v84->fields.list, 0);
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            TerminalPramsManager__SetAutoResumeForFolder(v85, 0);
            if ( !byte_4C31DAD )
            {
              sub_1C32C20(&TerminalPramsManager_TypeInfo);
              byte_4C31DAD = 1;
            }
            MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
              MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
            }
            v86 = BalanceConfig_TypeInfo;
            klass_high = HIDWORD(MasterData_object[2].fields.list->klass);
            if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
              v86 = BalanceConfig_TypeInfo;
            }
            p_commandBuf = (unsigned int **)&v4->fields.commandBuf;
            if ( klass_high == v86->static_fields->OrdealCallWarId )
            {
              v4->fields.BlankEarthTargetWarId = v85;
              v128 = 1;
            }
          }
        }
      }
    }
    else
    {
      v4->fields.IsMoveToEventRewardShop = 1;
    }
    v88 = *(_DWORD *)(v68 + 16);
    if ( v88 <= 205 )
    {
      if ( (unsigned int)(v88 - 100) < 0xF && ((0x7C1Fu >> (v88 - 100)) & 1) != 0 )
      {
        v90 = 0;
      }
      else
      {
        if ( (unsigned int)(v88 - 200) > 5 )
          goto LABEL_326;
        v90 = 1;
      }
    }
    else if ( v88 <= 550 )
    {
      if ( (unsigned int)(v88 - 400) < 0xD )
      {
        v90 = 2;
      }
      else
      {
        if ( v88 != 550 )
          goto LABEL_326;
        v90 = 3;
      }
    }
    else
    {
      v89 = v88 - 1000;
      if ( v89 >= 0xD || ((0x1C07u >> v89) & 1) == 0 )
        goto LABEL_326;
      v90 = 4;
    }
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)v4->fields.commandTypeIds;
    if ( !MasterData_object )
      goto LABEL_343;
    Item = (System_Collections_Generic_List_int__o *)System_Collections_Generic_Dictionary_Int32Enum__object___get_Item(
                                                       (System_Collections_Generic_Dictionary_TKey__TValue__o *)MasterData_object,
                                                       v90,
                                                       (const MethodInfo_3422D18 *)Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___get_Item__);
    if ( !QuestAfterAction_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(QuestAfterAction_TypeInfo);
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)QuestAfterAction__ExtractCommandTargetId(
                                                                        (QuestAfterAction_Command_o *)v68,
                                                                        v91);
    if ( !Item )
      goto LABEL_343;
    items = Item->fields._items;
    v94 = Method_System_Collections_Generic_List_int__Add__;
    ++Item->fields._version;
    if ( !items )
      goto LABEL_343;
    size = Item->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_int___AddWithResize(
        Item,
        (int32_t)MasterData_object,
        *(const MethodInfo_377B798 **)(*(_QWORD *)(v94[4] + 192LL) + 112LL));
    }
    else
    {
      Item->fields._size = size + 1;
      items->m_Items[size] = (int)MasterData_object;
    }
LABEL_326:
    if ( v4->fields.ActionMapTargetId <= 0 )
      QuestAfterAction__SetActionMap(v4, (QuestAfterAction_Command_o *)v68, v74);
    if ( *(_DWORD *)(v68 + 16) == 102 )
    {
      v96 = (QuestAfterAction_o *)System_Int32__Parse(*v73, 0);
      MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)QuestAfterAction__GetMapGimmickId(
                                                                          v96,
                                                                          (int32_t)v96,
                                                                          v97);
      if ( !MasterData_object )
        goto LABEL_343;
      v98 = (System_String_c *)MasterData_object->fields._MasterName_k__BackingField;
      v99 = MasterData_object;
      if ( (int)v98 >= 1 )
      {
        v100 = 0;
        while ( v100 < (unsigned int)v98 )
        {
          MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)v4->fields.invalidMapGimmickIdList;
          if ( !MasterData_object )
            goto LABEL_343;
          v101 = *(&v99->fields.revision + v100);
          v102 = *(System_String_Fields *)&MasterData_object->fields._MasterKind_k__BackingField;
          v103 = Method_System_Collections_Generic_List_int__Add__;
          ++HIDWORD(MasterData_object->fields._MasterName_k__BackingField);
          if ( !*(_QWORD *)&v102 )
            goto LABEL_343;
          MasterName_k__BackingField_low = SLODWORD(MasterData_object->fields._MasterName_k__BackingField);
          if ( (unsigned int)MasterName_k__BackingField_low >= *(_DWORD *)(*(_QWORD *)&v102 + 24LL) )
          {
            System_Collections_Generic_List_int___AddWithResize(
              (System_Collections_Generic_List_int__o *)MasterData_object,
              v101,
              *(const MethodInfo_377B798 **)(*(_QWORD *)(v103[4] + 192LL) + 112LL));
          }
          else
          {
            LODWORD(MasterData_object->fields._MasterName_k__BackingField) = MasterName_k__BackingField_low + 1;
            *(_DWORD *)(*(_QWORD *)&v102 + 4 * MasterName_k__BackingField_low + 32) = v101;
          }
          LODWORD(v98) = v99->fields._MasterName_k__BackingField;
          if ( (__int64)++v100 >= (int)v98 )
            goto LABEL_339;
        }
LABEL_483:
        sub_1C32E84(MasterData_object);
      }
    }
LABEL_339:
    v105 = *p_commandBuf;
    if ( !*p_commandBuf )
      goto LABEL_343;
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)sub_1C32D5C(
                                                                        v68,
                                                                        *(_QWORD *)(*(_QWORD *)v105 + 64LL));
    if ( !MasterData_object )
    {
      v127 = sub_1C32EA0();
      sub_1C32D48(v127, 0);
    }
    if ( v66 >= v105[6] )
      goto LABEL_483;
    v108 = &v105[2 * v66];
    *((_QWORD *)v108 + 4) = v68;
    sub_1C32BC4((CGThumbnailListItem_o *)(v108 + 8), v68, v106, v107);
    commandBuf = (int *)*p_commandBuf;
    v67 += 2;
    ++v66;
    if ( !*p_commandBuf )
      goto LABEL_343;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C34564 )
  {
    sub_1C32C20(&TerminalPramsManager_TypeInfo);
    byte_4C34564 = 1;
  }
  v115 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v115 = TerminalPramsManager_TypeInfo;
  }
  if ( v115->static_fields->_IsPhaseClear_k__BackingField )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v116 = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_QuestMaster___);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C31A97 )
    {
      sub_1C32C20(&TerminalPramsManager_TypeInfo);
      byte_4C31A97 = 1;
    }
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
    }
    if ( !v116 )
      goto LABEL_343;
    if ( QuestMaster__TryGetQuestEntity(
           (QuestMaster_o *)v116,
           &v133,
           HIDWORD(MasterData_object[2].fields.list->fields.items),
           0) )
    {
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4C31DAD )
      {
        sub_1C32C20(&TerminalPramsManager_TypeInfo);
        byte_4C31DAD = 1;
      }
      v117 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v117 = TerminalPramsManager_TypeInfo;
      }
      v118 = BalanceConfig_TypeInfo;
      WarId_k__BackingField = v117->static_fields->_WarId_k__BackingField;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v118 = BalanceConfig_TypeInfo;
      }
      if ( WarId_k__BackingField == v118->static_fields->OrdealCallWarId )
      {
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_BlankEarthSpotMaster___);
        if ( v133 && MasterData_object )
        {
          MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__int___TryGetEntity(
                                                                              MasterData_object,
                                                                              &v132,
                                                                              v133->fields.spotId,
                                                                              (const MethodInfo_3396884 *)Method_DataMasterBase_BlankEarthSpotMaster__BlankEarthSpotEntity__int__TryGetEntity__);
          if ( ((unsigned __int8)MasterData_object & 1) == 0 )
            goto LABEL_433;
          if ( v132 )
          {
            v120 = (int32_t)v132[1].klass;
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            if ( !byte_4C3456D )
            {
              sub_1C32C20(&TerminalPramsManager_TypeInfo);
              byte_4C3456D = 1;
            }
            v121 = TerminalPramsManager_TypeInfo;
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
              v121 = TerminalPramsManager_TypeInfo;
            }
            v121->static_fields->_BlankEarthAfterActionFocusSpotId_k__BackingField = v120;
            goto LABEL_433;
          }
        }
LABEL_343:
        sub_1C32E7C(MasterData_object);
      }
    }
  }
LABEL_433:
  v122 = TerminalPramsManager_TypeInfo;
  if ( (v128 & 1) == 0 )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C3219C )
    {
      sub_1C32C20(&TerminalPramsManager_TypeInfo);
      byte_4C3219C = 1;
    }
    v123 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v123 = TerminalPramsManager_TypeInfo;
    }
    v123->static_fields->_IsAutoResume_k__BackingField = 1;
    if ( !byte_4C342AE )
    {
      sub_1C32C20(&TerminalPramsManager_TypeInfo);
      v123 = TerminalPramsManager_TypeInfo;
      byte_4C342AE = 1;
    }
    if ( !v123->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v123);
      v123 = TerminalPramsManager_TypeInfo;
    }
    v123->static_fields->_DispState_k__BackingField = 2;
    if ( !byte_4C31DAD )
    {
      sub_1C32C20(&TerminalPramsManager_TypeInfo);
      v123 = TerminalPramsManager_TypeInfo;
      byte_4C31DAD = 1;
    }
    if ( !v123->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v123);
      v123 = TerminalPramsManager_TypeInfo;
    }
    v124 = BalanceConfig_TypeInfo;
    v125 = v123->static_fields->_WarId_k__BackingField;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v124 = BalanceConfig_TypeInfo;
    }
    v122 = TerminalPramsManager_TypeInfo;
    if ( v125 == v124->static_fields->OrdealCallWarId )
      goto LABEL_488;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C341F5 )
    {
      sub_1C32C20(&TerminalPramsManager_TypeInfo);
      byte_4C341F5 = 1;
    }
    v122 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v122 = TerminalPramsManager_TypeInfo;
    }
    if ( v122->static_fields->_IsOrdealCallWarClear_k__BackingField )
    {
LABEL_488:
      if ( !v122->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v122);
      if ( !byte_4C341F6 )
      {
        sub_1C32C20(&TerminalPramsManager_TypeInfo);
        byte_4C341F6 = 1;
      }
      v122 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v122 = TerminalPramsManager_TypeInfo;
      }
      v122->static_fields->_BlankEarthSpotId_k__BackingField = 0;
      if ( !byte_4C341F5 )
      {
        sub_1C32C20(&TerminalPramsManager_TypeInfo);
        v122 = TerminalPramsManager_TypeInfo;
        byte_4C341F5 = 1;
      }
      if ( !v122->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v122);
        v122 = TerminalPramsManager_TypeInfo;
      }
      if ( !v122->static_fields->_IsOrdealCallWarClear_k__BackingField )
      {
        if ( !v122->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v122);
        if ( !byte_4C342AE )
        {
          sub_1C32C20(&TerminalPramsManager_TypeInfo);
          byte_4C342AE = 1;
        }
        v122 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v122 = TerminalPramsManager_TypeInfo;
        }
        v122->static_fields->_DispState_k__BackingField = 3;
      }
    }
  }
  if ( !v122->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v122);
  if ( !byte_4C342B1 )
  {
    sub_1C32C20(&TerminalPramsManager_TypeInfo);
    byte_4C342B1 = 1;
  }
  v126 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v126 = TerminalPramsManager_TypeInfo;
  }
  v126->static_fields->_SpotId_k__BackingField = -1;
}


void QuestAfterAction__DeleteContinueData(const MethodInfo *method)
{
  if ( (byte_4C3453A & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_16711/*"afterActionBk"*/);
    byte_4C3453A = 1;
  }
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_16711/*"afterActionBk"*/, 0);
}


int32_t QuestAfterAction__ExtractCommandTargetId(QuestAfterAction_Command_o *command, const MethodInfo *method)
{
  QuestAfterAction_Command_o *v2; // x19
  QuestAfterAction_Command_c *param; // x8

  v2 = command;
  if ( (byte_4C3453E & 1) == 0 )
  {
    command = (QuestAfterAction_Command_o *)sub_1C32C20(&StringLiteral_811/*","*/);
    byte_4C3453E = 1;
  }
  if ( !v2 )
    goto LABEL_11;
  command = (QuestAfterAction_Command_o *)v2->fields.param;
  if ( !command )
    goto LABEL_11;
  command = (QuestAfterAction_Command_o *)System_String__Contains(
                                            (System_String_o *)command,
                                            (System_String_o *)StringLiteral_811/*","*/,
                                            0);
  param = (QuestAfterAction_Command_c *)v2->fields.param;
  if ( ((unsigned __int8)command & 1) == 0 )
    return System_Int32__Parse((System_String_o *)param, 0);
  if ( !param || (command = (QuestAfterAction_Command_o *)System_String__Split(v2->fields.param, 0x2Cu, 0, 0)) == 0 )
LABEL_11:
    sub_1C32E7C(command);
  if ( !LODWORD(command->fields.param) )
    sub_1C32E84(command);
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
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  int32_t v9; // w2
  const MethodInfo *v10; // x3

  if ( (byte_4C3454C & 1) == 0 )
  {
    sub_1C32C20(&QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__89_TypeInfo);
    byte_4C3454C = 1;
  }
  v5 = sub_1C32E6C(QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__89_TypeInfo);
  QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__89___ctor(
    (QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__89_o *)v5,
    -2,
    0);
  if ( !v5 )
    sub_1C32E7C(v6);
  *(_QWORD *)(v5 + 56) = this;
  sub_1C32BC4((CGThumbnailListItem_o *)(v5 + 56), (int32_t)this, v7, v8);
  *(_QWORD *)(v5 + 48) = commandEnumerable;
  sub_1C32BC4((CGThumbnailListItem_o *)(v5 + 48), (int32_t)commandEnumerable, v9, v10);
  return (System_Collections_Generic_IEnumerable_QuestAfterAction_Command__o *)v5;
}


QuestAfterAction_Command_array *QuestAfterAction__GenerateCommandBuf(
        System_String_array *actionVals,
        const MethodInfo *method)
{
  __int64 IsNullOrEmpty; // x0
  long double inited; // q0
  _QWORD *v5; // x19
  __int64 v6; // x8
  __int64 v7; // x0
  __int64 v8; // x0
  unsigned int *v9; // x20
  __int64 v10; // x22
  unsigned __int64 v11; // x23
  __int64 v12; // x24
  unsigned int v13; // w25
  __int64 v14; // x21
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  System_String_o *v17; // x1
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  __int64 v21; // x0

  if ( (byte_4C3453F & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Array_Empty_QuestAfterAction_Command___);
    sub_1C32C20(&QuestAfterAction_Command___TypeInfo);
    sub_1C32C20(&QuestAfterAction_Command_TypeInfo);
    byte_4C3453F = 1;
  }
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)actionVals, 0);
  if ( (IsNullOrEmpty & 1) != 0 )
  {
    v5 = Method_System_Array_Empty_QuestAfterAction_Command___;
    v6 = *((_QWORD *)Method_System_Array_Empty_QuestAfterAction_Command___ + 7);
    if ( !v6 )
    {
      sub_1C83390(Method_System_Array_Empty_QuestAfterAction_Command___);
      v6 = v5[7];
    }
    v7 = *(_QWORD *)(v6 + 16);
    if ( (*(_BYTE *)(v7 + 309) & 1) == 0 )
      v7 = sub_1C83334(inited);
    if ( !*(_DWORD *)(v7 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v7);
    v8 = *(_QWORD *)(v5[7] + 16LL);
    if ( (*(_BYTE *)(v8 + 309) & 1) == 0 )
      v8 = sub_1C83334(inited);
    return **(QuestAfterAction_Command_array ***)(v8 + 184);
  }
  else
  {
    if ( !actionVals
      || (IsNullOrEmpty = sub_1C32CC8(
                            QuestAfterAction_Command___TypeInfo,
                            (unsigned int)(SLODWORD(actionVals->max_length) / 2))) == 0 )
    {
LABEL_25:
      sub_1C32E7C(IsNullOrEmpty);
    }
    v9 = (unsigned int *)IsNullOrEmpty;
    if ( *(int *)(IsNullOrEmpty + 24) >= 1 )
    {
      v10 = 0;
      v11 = 0;
      v12 = IsNullOrEmpty + 32;
      v13 = 1;
      do
      {
        v14 = sub_1C32E6C(QuestAfterAction_Command_TypeInfo);
        System_Object___ctor((Il2CppObject *)v14, 0);
        if ( v13 - 1 >= LODWORD(actionVals->max_length) )
          goto LABEL_24;
        IsNullOrEmpty = System_Int32__Parse(actionVals->m_Items[v13 - 1], 0);
        if ( !v14 )
          goto LABEL_25;
        *(_DWORD *)(v14 + 16) = IsNullOrEmpty;
        if ( v13 >= LODWORD(actionVals->max_length) )
          goto LABEL_24;
        v17 = actionVals->m_Items[v13];
        *(_QWORD *)(v14 + 24) = v17;
        sub_1C32BC4((CGThumbnailListItem_o *)(v14 + 24), (int32_t)v17, v15, v16);
        IsNullOrEmpty = sub_1C32D5C(v14, *(_QWORD *)(*(_QWORD *)v9 + 64LL));
        if ( !IsNullOrEmpty )
        {
          v21 = sub_1C32EA0();
          sub_1C32D48(v21, 0);
        }
        if ( v11 >= v9[6] )
LABEL_24:
          sub_1C32E84(IsNullOrEmpty);
        *(_QWORD *)(v12 + 8 * v11) = v14;
        sub_1C32BC4((CGThumbnailListItem_o *)(v12 + v10), v14, v18, v19);
        ++v11;
        v13 += 2;
        v10 += 8;
      }
      while ( (__int64)v11 < (int)v9[6] );
    }
  }
  return (QuestAfterAction_Command_array *)v9;
}


System_String_array *QuestAfterAction__GetAfterAction(int32_t questId, int32_t phase, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  Il2CppObject *MasterData_object; // x22
  int32_t v7; // w23
  const MethodInfo *v8; // x1
  System_String_array *v9; // x22
  Il2CppObject *v11; // x19
  Il2CppObject *Entity; // x0
  Il2CppObject *v13; // x19

  if ( (byte_4C34558 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_QuestPhaseDetailAddMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_QuestPhaseDetailMaster___);
    sub_1C32C20(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    sub_1C32C20(&Method_System_Linq_Enumerable_Any_string___);
    sub_1C32C20(&QuestAfterAction_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C32C20(&TerminalPramsManager_TypeInfo);
    byte_4C34558 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_35;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_QuestPhaseDetailAddMaster___);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C31A97 )
  {
    sub_1C32C20(&TerminalPramsManager_TypeInfo);
    byte_4C31A97 = 1;
  }
  Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  }
  v7 = *(_DWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 20LL);
  if ( !byte_4C31A96 )
  {
    sub_1C32C20(&TerminalPramsManager_TypeInfo);
    Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
    byte_4C31A96 = 1;
  }
  if ( !LODWORD(Instance[1].fields.saveDataMapList) )
  {
    j_il2cpp_runtime_class_init_0(Instance);
    Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  }
  if ( !MasterData_object )
    goto LABEL_35;
  v9 = QuestPhaseDetailAddMaster__GetAfterAction(
         (QuestPhaseDetailAddMaster_o *)MasterData_object,
         v7,
         *(_DWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 24LL) + 1,
         0);
  if ( !QuestAfterAction_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(QuestAfterAction_TypeInfo);
  if ( !QuestAfterAction__IsOverwriteCommandNone(v9, v8) )
  {
    if ( v9 )
      return v9;
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_QuestPhaseDetailMaster___);
      if ( Instance )
      {
        v9 = QuestPhaseDetailMaster__GetAfterAction((QuestPhaseDetailMaster_o *)Instance, questId, phase, 0);
        if ( v9 )
          return v9;
        Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( Instance )
        {
          v11 = DataManager__GetMasterData_object_(
                  Instance,
                  (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_QuestMaster___);
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          if ( !byte_4C31A97 )
          {
            sub_1C32C20(&TerminalPramsManager_TypeInfo);
            byte_4C31A97 = 1;
          }
          Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
          }
          if ( v11 )
          {
            Entity = DataMasterBase_object__object__int___GetEntity(
                       (DataMasterBase_TMaster__TEntity__PKType__o *)v11,
                       *(_DWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 20LL),
                       (const MethodInfo_3396838 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
            if ( Entity )
            {
              v13 = Entity;
              if ( System_Linq_Enumerable__Any_object_(
                     (System_Collections_Generic_IEnumerable_TSource__o *)Entity[6].klass,
                     (const MethodInfo_30E8F68 *)Method_System_Linq_Enumerable_Any_string___) )
              {
                return (System_String_array *)v13[6].klass;
              }
            }
            return 0;
          }
        }
      }
    }
LABEL_35:
    sub_1C32E7C(Instance);
  }
  return 0;
}


System_String_array *QuestAfterAction__GetBeforeAction(int32_t questId, int32_t phase, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  Il2CppObject *MasterData_object; // x22
  int32_t v7; // w23
  const MethodInfo *v8; // x1
  System_String_array *v9; // x22
  Il2CppObject *v11; // x19
  Il2CppObject *Entity; // x0
  Il2CppObject *v13; // x19

  if ( (byte_4C34557 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_QuestPhaseDetailAddMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_QuestPhaseDetailMaster___);
    sub_1C32C20(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    sub_1C32C20(&Method_System_Linq_Enumerable_Any_string___);
    sub_1C32C20(&QuestAfterAction_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C32C20(&TerminalPramsManager_TypeInfo);
    byte_4C34557 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_35;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_QuestPhaseDetailAddMaster___);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C31A97 )
  {
    sub_1C32C20(&TerminalPramsManager_TypeInfo);
    byte_4C31A97 = 1;
  }
  Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  }
  v7 = *(_DWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 20LL);
  if ( !byte_4C31A96 )
  {
    sub_1C32C20(&TerminalPramsManager_TypeInfo);
    Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
    byte_4C31A96 = 1;
  }
  if ( !LODWORD(Instance[1].fields.saveDataMapList) )
  {
    j_il2cpp_runtime_class_init_0(Instance);
    Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  }
  if ( !MasterData_object )
    goto LABEL_35;
  v9 = QuestPhaseDetailAddMaster__GetBeforeAction(
         (QuestPhaseDetailAddMaster_o *)MasterData_object,
         v7,
         *(_DWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 24LL) + 1,
         0);
  if ( !QuestAfterAction_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(QuestAfterAction_TypeInfo);
  if ( !QuestAfterAction__IsOverwriteCommandNone(v9, v8) )
  {
    if ( v9 )
      return v9;
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_QuestPhaseDetailMaster___);
      if ( Instance )
      {
        v9 = QuestPhaseDetailMaster__GetBeforeAction((QuestPhaseDetailMaster_o *)Instance, questId, phase, 0);
        if ( v9 )
          return v9;
        Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( Instance )
        {
          v11 = DataManager__GetMasterData_object_(
                  Instance,
                  (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_QuestMaster___);
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          if ( !byte_4C31A97 )
          {
            sub_1C32C20(&TerminalPramsManager_TypeInfo);
            byte_4C31A97 = 1;
          }
          Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
          }
          if ( v11 )
          {
            Entity = DataMasterBase_object__object__int___GetEntity(
                       (DataMasterBase_TMaster__TEntity__PKType__o *)v11,
                       *(_DWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 20LL),
                       (const MethodInfo_3396838 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
            if ( Entity )
            {
              v13 = Entity;
              if ( System_Linq_Enumerable__Any_object_(
                     (System_Collections_Generic_IEnumerable_TSource__o *)Entity[5].monitor,
                     (const MethodInfo_30E8F68 *)Method_System_Linq_Enumerable_Any_string___) )
              {
                return (System_String_array *)v13[5].monitor;
              }
            }
            return 0;
          }
        }
      }
    }
LABEL_35:
    sub_1C32E7C(Instance);
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
        return dword_C45A64[commandId - 1000];
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
        const MethodInfo_3175FFC *method)
{
  UnityEngine_Object_o *MapGameObject; // x20
  _BOOL8 v11; // x0

  if ( !method->rgctx_data )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    if ( !method->rgctx_data )
      sub_1C83390();
  }
  MapGameObject = (UnityEngine_Object_o *)QuestAfterAction__GetMapGameObject(this, comType, id, state, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v11 = UnityEngine_Object__op_Equality(MapGameObject, 0, 0);
  if ( v11 )
    return 0;
  if ( !MapGameObject )
    sub_1C32E7C(v11);
  return UnityEngine_GameObject__GetComponent_object_(
           (UnityEngine_GameObject_o *)MapGameObject,
           (const MethodInfo_3134970 *)method->rgctx_data->_0_UnityEngine_GameObject_GetComponent_T_);
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
  const MethodInfo *v14; // x1
  const MethodInfo *v15; // x3

  v8 = this;
  if ( (byte_4C34552 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    this = (QuestAfterAction_o *)sub_1C32C20(&SrcSpotBasePrefab_TypeInfo);
    byte_4C34552 = 1;
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
        sub_1C32E7C(this);
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
    this = (QuestAfterAction_o *)QuestAfterAction__IsMapChangeable(this, v14);
    if ( !state )
      goto LABEL_45;
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      state->fields.IsAnimDoing = 0;
      QuestAfterAction__RequestMapChange(v8, comType, id, v15);
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
  int max_length; // w8
  System_Object_array *v7; // x21
  unsigned int v8; // w23
  Il2CppClass **v9; // x8
  Il2CppClass *v10; // x22
  int32_t name; // w1
  struct System_Int32_array *items; // x8
  _QWORD *v13; // x9
  __int64 size; // x10

  if ( (byte_4C34540 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_MapGimmickMaster___);
    sub_1C32C20(&Method_DataMasterBase_MapGimmickMaster__MapGimmickEntity__int__getEntitys__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C34540 = 1;
  }
  v4 = (System_Collections_Generic_List_int__o *)sub_1C32E6C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v4,
    (const MethodInfo_377AF44 *)Method_System_Collections_Generic_List_int___ctor__);
  Instance = (System_Object_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  Instance = (System_Object_array *)DataManager__GetMasterData_object_(
                                      (DataManager_o *)Instance,
                                      (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_MapGimmickMaster___);
  if ( !Instance )
    goto LABEL_19;
  Instance = DataMasterBase_object__object__int___getEntitys(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
               (const MethodInfo_3395ABC *)Method_DataMasterBase_MapGimmickMaster__MapGimmickEntity__int__getEntitys__);
  if ( !Instance )
    goto LABEL_19;
  max_length = Instance->max_length;
  v7 = Instance;
  if ( max_length >= 1 )
  {
    v8 = 0;
    while ( 1 )
    {
      if ( v8 >= max_length )
        sub_1C32E84(Instance);
      v9 = &v7->obj.klass + (int)v8;
      v10 = v9[4];
      if ( !v10 )
        break;
      Instance = (System_Object_array *)MapGimmickEntity__GetRaidDispSpotIdFromScript((MapGimmickEntity_o *)v9[4], 0);
      if ( (_DWORD)Instance == spotId )
      {
        if ( !v4 )
          break;
        name = (int32_t)v10->_1.name;
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
            name,
            *(const MethodInfo_377B798 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
        }
        else
        {
          v4->fields._size = size + 1;
          items->m_Items[size] = name;
        }
      }
      max_length = v7->max_length;
      if ( (int)++v8 >= max_length )
        goto LABEL_17;
    }
LABEL_19:
    sub_1C32E7C(Instance);
  }
LABEL_17:
  if ( !v4 )
    goto LABEL_19;
  return System_Collections_Generic_List_int___ToArray(
           v4,
           (const MethodInfo_377D250 *)Method_System_Collections_Generic_List_int__ToArray__);
}


int32_t QuestAfterAction__GetState(QuestAfterAction_o *this, const MethodInfo *method)
{
  struct CStateManager_QuestAfterAction__o *fsm; // x8

  if ( (byte_4C34550 & 1) == 0 )
  {
    sub_1C32C20(&Method_CStateManager_QuestAfterAction__getState__);
    byte_4C34550 = 1;
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
  const MethodInfo *v7; // x3
  CStateManager_T__o *fsm; // x21
  Il2CppObject *v9; // x22
  System_Collections_Generic_Dictionary_TKey__TValue__o *commandTypeIds; // x0
  CStateManager_T__o *v11; // x21
  Il2CppObject *v12; // x22
  CStateManager_T__o *v13; // x21
  QuestAfterAction_StateAdditional_o *v14; // x22
  CStateManager_T__o *v15; // x20
  QuestAfterAction_StateInstant_o *v16; // x21
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  int32_t v19; // w20
  System_Collections_Generic_Dictionary_TKey__TValue__o *v20; // x21
  int v21; // w8
  System_Collections_Generic_List_int__o *v22; // x22
  Il2CppObject *Component_object; // x0
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  System_Collections_Generic_List_int__o *v28; // x20
  struct System_Collections_Generic_List_int__o **p_invalidMapGimmickIdList; // x19
  int32_t v30; // w2
  const MethodInfo *v31; // x3

  if ( (byte_4C3453B & 1) == 0 )
  {
    sub_1C32C20(&Method_CStateManager_QuestAfterAction___ctor__);
    sub_1C32C20(&Method_CStateManager_QuestAfterAction__add__);
    sub_1C32C20(&CStateManager_QuestAfterAction__TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___ContainsKey__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___get_Item__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___set_Item__);
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__Clear__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C32C20(&QuestAfterAction_StateAdditional_TypeInfo);
    sub_1C32C20(&QuestAfterAction_StateInstant_TypeInfo);
    sub_1C32C20(&QuestAfterAction_StateMain_TypeInfo);
    sub_1C32C20(&QuestAfterAction_StateNone_TypeInfo);
    byte_4C3453B = 1;
  }
  p_fsm = &this->fields.fsm;
  if ( !this->fields.fsm )
  {
    v5 = (CStateManager_T__o *)sub_1C32E6C(CStateManager_QuestAfterAction__TypeInfo);
    CStateManager_object____ctor(
      v5,
      (Il2CppObject *)this,
      4,
      (const MethodInfo_3322708 *)Method_CStateManager_QuestAfterAction___ctor__);
    this->fields.fsm = (struct CStateManager_QuestAfterAction__o *)v5;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.fsm, (int32_t)v5, v6, v7);
    fsm = (CStateManager_T__o *)this->fields.fsm;
    v9 = (Il2CppObject *)sub_1C32E6C(QuestAfterAction_StateNone_TypeInfo);
    System_Object___ctor(v9, 0);
    if ( !fsm )
      goto LABEL_21;
    CStateManager_object___add(
      fsm,
      0,
      (IState_T__o *)v9,
      (const MethodInfo_33227B0 *)Method_CStateManager_QuestAfterAction__add__);
    v11 = (CStateManager_T__o *)*p_fsm;
    v12 = (Il2CppObject *)sub_1C32E6C(QuestAfterAction_StateMain_TypeInfo);
    System_Object___ctor(v12, 0);
    if ( !v11 )
      goto LABEL_21;
    CStateManager_object___add(
      v11,
      1,
      (IState_T__o *)v12,
      (const MethodInfo_33227B0 *)Method_CStateManager_QuestAfterAction__add__);
    v13 = (CStateManager_T__o *)*p_fsm;
    v14 = (QuestAfterAction_StateAdditional_o *)sub_1C32E6C(QuestAfterAction_StateAdditional_TypeInfo);
    QuestAfterAction_StateAdditional___ctor(v14, 0);
    if ( !v13 )
      goto LABEL_21;
    CStateManager_object___add(
      v13,
      2,
      (IState_T__o *)v14,
      (const MethodInfo_33227B0 *)Method_CStateManager_QuestAfterAction__add__);
    v15 = (CStateManager_T__o *)*p_fsm;
    v16 = (QuestAfterAction_StateInstant_o *)sub_1C32E6C(QuestAfterAction_StateInstant_TypeInfo);
    QuestAfterAction_StateInstant___ctor(v16, 0);
    if ( !v15 )
      goto LABEL_21;
    CStateManager_object___add(
      v15,
      3,
      (IState_T__o *)v16,
      (const MethodInfo_33227B0 *)Method_CStateManager_QuestAfterAction__add__);
  }
  QuestAfterAction__SetState(this, 0, v2);
  this->fields.commandBuf = 0;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.commandBuf, 0, v17, v18);
  v19 = 0;
  this->fields.commandIdx = 0;
  do
  {
    commandTypeIds = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.commandTypeIds;
    if ( !commandTypeIds )
      goto LABEL_21;
    commandTypeIds = (System_Collections_Generic_Dictionary_TKey__TValue__o *)System_Collections_Generic_Dictionary_Int32Enum__object___ContainsKey(
                                                                                commandTypeIds,
                                                                                v19,
                                                                                (const MethodInfo_3422FAC *)Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___ContainsKey__);
    v20 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.commandTypeIds;
    if ( ((unsigned __int8)commandTypeIds & 1) != 0 )
    {
      if ( !v20 )
        goto LABEL_21;
      commandTypeIds = (System_Collections_Generic_Dictionary_TKey__TValue__o *)System_Collections_Generic_Dictionary_Int32Enum__object___get_Item(
                                                                                  (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.commandTypeIds,
                                                                                  v19,
                                                                                  (const MethodInfo_3422D18 *)Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___get_Item__);
      if ( !commandTypeIds )
        goto LABEL_21;
      v21 = HIDWORD(commandTypeIds->fields._entries) + 1;
      LODWORD(commandTypeIds->fields._entries) = 0;
      HIDWORD(commandTypeIds->fields._entries) = v21;
    }
    else
    {
      v22 = (System_Collections_Generic_List_int__o *)sub_1C32E6C(System_Collections_Generic_List_int__TypeInfo);
      System_Collections_Generic_List_int____ctor(
        v22,
        (const MethodInfo_377AF44 *)Method_System_Collections_Generic_List_int___ctor__);
      if ( !v20 )
        goto LABEL_21;
      System_Collections_Generic_Dictionary_Int32Enum__object___set_Item(
        v20,
        v19,
        (Il2CppObject *)v22,
        (const MethodInfo_3422DA4 *)Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___set_Item__);
    }
    ++v19;
  }
  while ( v19 != 5 );
  commandTypeIds = (System_Collections_Generic_Dictionary_TKey__TValue__o *)UnityEngine_Component__get_gameObject(
                                                                              (UnityEngine_Component_o *)this,
                                                                              0);
  if ( !commandTypeIds
    || (Component_object = UnityEngine_GameObject__GetComponent_object_(
                             (UnityEngine_GameObject_o *)commandTypeIds,
                             (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___),
        this->fields.screenCollider = (struct UnityEngine_BoxCollider_o *)Component_object,
        sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.screenCollider, (int32_t)Component_object, v24, v25),
        (commandTypeIds = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.screenCollider) == 0) )
  {
LABEL_21:
    sub_1C32E7C(commandTypeIds);
  }
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)commandTypeIds, 0, 0);
  this->fields.lastDispSpot = 0;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.lastDispSpot, 0, v26, v27);
  v28 = (System_Collections_Generic_List_int__o *)sub_1C32E6C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v28,
    (const MethodInfo_377AF44 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.invalidMapGimmickIdList = v28;
  p_invalidMapGimmickIdList = &this->fields.invalidMapGimmickIdList;
  sub_1C32BC4((CGThumbnailListItem_o *)p_invalidMapGimmickIdList, (int32_t)v28, v30, v31);
  *((_BYTE *)p_invalidMapGimmickIdList + 160) = 0;
}


bool QuestAfterAction__IsActiveCommand(QuestAfterAction_o *this, const MethodInfo *method)
{
  return this->fields.commandBuf != 0;
}


bool QuestAfterAction__IsExistCommand(
        QuestAfterAction_o *this,
        int32_t commandType,
        int32_t commandTypeId,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_TKey__TValue__o *commandTypeIds; // x0

  if ( (byte_4C34543 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___ContainsKey__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___get_Item__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__Contains__);
    byte_4C34543 = 1;
  }
  commandTypeIds = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.commandTypeIds;
  if ( !commandTypeIds )
    goto LABEL_9;
  if ( System_Collections_Generic_Dictionary_Int32Enum__object___ContainsKey(
         commandTypeIds,
         commandType,
         (const MethodInfo_3422FAC *)Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___ContainsKey__) )
  {
    commandTypeIds = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.commandTypeIds;
    if ( commandTypeIds )
    {
      commandTypeIds = (System_Collections_Generic_Dictionary_TKey__TValue__o *)System_Collections_Generic_Dictionary_Int32Enum__object___get_Item(
                                                                                  commandTypeIds,
                                                                                  commandType,
                                                                                  (const MethodInfo_3422D18 *)Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___get_Item__);
      if ( commandTypeIds )
        return System_Collections_Generic_List_int___Contains(
                 (System_Collections_Generic_List_int__o *)commandTypeIds,
                 commandTypeId,
                 (const MethodInfo_377BB10 *)Method_System_Collections_Generic_List_int__Contains__);
    }
LABEL_9:
    sub_1C32E7C(commandTypeIds);
  }
  return 0;
}


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
      sub_1C32E84(this);
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
    sub_1C32E7C(this);
  }
  return v8;
}


bool QuestAfterAction__IsExistTerminalTransition(QuestAfterAction_o *this, const MethodInfo *method)
{
  struct QuestAfterAction_Command_array *commandBuf; // x10
  int max_length; // w8
  __int64 v4; // x9
  QuestAfterAction_Command_o **m_Items; // x10
  QuestAfterAction_Command_o *v6; // x11
  unsigned int v7; // w11

  commandBuf = this->fields.commandBuf;
  if ( commandBuf && (max_length = commandBuf->max_length, max_length >= 1) )
  {
    v4 = 0;
    m_Items = commandBuf->m_Items;
    do
    {
      if ( (unsigned int)v4 >= max_length )
        sub_1C32E84(this);
      v6 = m_Items[v4];
      if ( !v6 )
        sub_1C32E7C(this);
      ++v4;
      v7 = v6->fields.id - 701;
      this = (QuestAfterAction_o *)(v7 < 2);
    }
    while ( (int)v4 < max_length && v7 > 1 );
  }
  else
  {
    LOBYTE(this) = 0;
  }
  return (char)this;
}


bool QuestAfterAction__IsGimmickDispCommand(int32_t cmd, const MethodInfo *method)
{
  return (cmd & 0xFFFFFFFD) == 401;
}


bool QuestAfterAction__IsMapChangeable(QuestAfterAction_o *this, const MethodInfo *method)
{
  ScrTerminalMap_o *v2; // x0
  UnityEngine_GameObject_c *klass; // x8

  if ( (byte_4C34555 & 1) == 0 )
  {
    sub_1C32C20(&TerminalSceneComponent_TypeInfo);
    byte_4C34555 = 1;
  }
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4C319B6 )
  {
    sub_1C32C20(&TerminalSceneComponent_TypeInfo);
    byte_4C319B6 = 1;
  }
  v2 = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v2 = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
  }
  klass = v2->fields.subRootGimmickP->klass;
  if ( !klass || (v2 = *(ScrTerminalMap_o **)&klass->_2.static_fields_size) == 0 )
    sub_1C32E7C(v2);
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
        sub_1C32E84(actionCommand);
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

  if ( (byte_4C34550 & 1) == 0 )
  {
    sub_1C32C20(&Method_CStateManager_QuestAfterAction__getState__);
    byte_4C34550 = 1;
  }
  fsm = this->fields.fsm;
  return fsm && fsm->fields.m_state == 1;
}


bool QuestAfterAction__IsPlayingAction(QuestAfterAction_o *this, const MethodInfo *method)
{
  struct CStateManager_QuestAfterAction__o *fsm; // x8

  if ( (byte_4C34550 & 1) == 0 )
  {
    sub_1C32C20(&Method_CStateManager_QuestAfterAction__getState__);
    byte_4C34550 = 1;
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
      sub_1C32E84(1);
    if ( !*(_QWORD *)v6 )
      sub_1C32E7C(1);
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
  TerminalTransitionInfo_o *v3; // x20
  char *Master_object; // x0
  TerminalSceneComponent_o *v5; // x19
  DataManager_o *v6; // x22
  EventMissionActionAddEntity_o *EntityFromIdProgressTypeAndActionType; // x0
  EventMissionActionAddEntity_o *v8; // x23
  EventMissionActionInfo_o *v9; // x21
  Il2CppObject *Entity; // x0
  Il2CppObject *v11; // x21
  Il2CppObject *v12; // x0
  _BOOL8 v13; // x0
  Il2CppObject *current; // x21
  TerminalPramsManager_c *v15; // x0
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  struct TerminalTransitionInfo_o *TransitionInfo_k__BackingField; // x0
  Il2CppClass *klass; // x1
  __int64 v20; // x0
  struct TerminalTransitionInfo_o *v21; // x8
  EventMissionActionEntity_o *v22; // x0
  EventMissionActionEntity_o *v23; // x23
  Il2CppObject *v24; // x0
  Il2CppObject *v25; // x23
  TerminalPramsManager_c *v26; // x0
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  struct System_String_array *vals; // x1
  struct TerminalTransitionInfo_o *v30; // x8
  System_Collections_Generic_List_Enumerator_object__o v31; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v32; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4C34547 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_EventMissionActionAddMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_EventMissionActionMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_EventMissionMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_EventMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_ShopActionMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_ShopMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__);
    sub_1C32C20(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
    sub_1C32C20(&Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__GetEntity__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_ShopActionEntity__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_ShopActionEntity__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_ShopActionEntity__get_Current__);
    sub_1C32C20(&EventMissionActionInfo_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_ShopActionEntity__GetEnumerator__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C32C20(&TerminalPramsManager_TypeInfo);
    sub_1C32C20(&TerminalSceneComponent_TypeInfo);
    byte_4C34547 = 1;
  }
  memset(&v32, 0, sizeof(v32));
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  TerminalTransitionInfoData = TerminalPramsManager__Load_TerminalTransitionInfoData(0);
  if ( !TerminalTransitionInfoData )
    return;
  v3 = TerminalTransitionInfoData;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4C319B6 )
  {
    sub_1C32C20(&TerminalSceneComponent_TypeInfo);
    byte_4C319B6 = 1;
  }
  Master_object = (char *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    Master_object = (char *)TerminalSceneComponent_TypeInfo;
  }
  v5 = (TerminalSceneComponent_o *)**((_QWORD **)Master_object + 23);
  if ( !v5 )
    goto LABEL_67;
  if ( v5->fields._TransitionInfo_k__BackingField )
    return;
  if ( v3->fields.missionId < 1 )
  {
    if ( v3->fields.shopId >= 1 )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = (char *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_ShopMaster___);
      if ( !Master_object )
        goto LABEL_67;
      Entity = DataMasterBase_object__object__int___GetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                 v3->fields.shopId,
                 (const MethodInfo_3396838 *)Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__);
      if ( Entity )
      {
        v11 = Entity;
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Master_object = (char *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_EventMaster___);
        if ( !Master_object )
          goto LABEL_67;
        v12 = DataMasterBase_object__object__int___GetEntity(
                (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                (int32_t)v11[1].monitor,
                (const MethodInfo_3396838 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
        if ( !v12 || !EventEntity__IsEventPeriod((EventEntity_o *)v12, 0, 0) )
          goto LABEL_66;
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Master_object = (char *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_ShopActionMaster___);
        if ( !Master_object )
          goto LABEL_67;
        Master_object = (char *)ShopActionMaster__GetEntityList(
                                  (ShopActionMaster_o *)Master_object,
                                  (int32_t)v11[1].klass,
                                  0);
        if ( !Master_object )
          goto LABEL_67;
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v31,
          (System_Collections_Generic_List_object__o *)Master_object,
          (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_ShopActionEntity__GetEnumerator__);
        v32 = v31;
        while ( 1 )
        {
          v13 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v32,
                  (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_ShopActionEntity__MoveNext__);
          if ( !v13 )
            break;
          current = v32.fields._current;
          if ( !v32.fields._current )
            sub_1C32E7C(v13);
          if ( LODWORD(v32.fields._current[1].monitor) == 4 )
          {
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            if ( !byte_4C3456E )
            {
              sub_1C32C20(&TerminalPramsManager_TypeInfo);
              byte_4C3456E = 1;
            }
            v15 = TerminalPramsManager_TypeInfo;
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
              v15 = TerminalPramsManager_TypeInfo;
            }
            v15->static_fields->meSceneStatus = 2;
            TerminalSceneComponent__CreateTransitionInfo(v5, v3, 0);
            TransitionInfo_k__BackingField = v5->fields._TransitionInfo_k__BackingField;
            if ( !TransitionInfo_k__BackingField )
              sub_1C32E7C(0);
            klass = current[2].klass;
            TransitionInfo_k__BackingField->fields.afterActionVals = (struct System_String_array *)klass;
            sub_1C32BC4(
              (CGThumbnailListItem_o *)&TransitionInfo_k__BackingField->fields.afterActionVals,
              (int32_t)klass,
              v16,
              v17);
            v21 = v5->fields._TransitionInfo_k__BackingField;
            if ( !v21 )
              sub_1C32E7C(v20);
            v21->fields.optionId = (int32_t)current[2].monitor;
            break;
          }
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v32,
          (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_ShopActionEntity__Dispose__);
      }
    }
  }
  else
  {
    Master_object = (char *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Master_object )
      goto LABEL_67;
    v6 = (DataManager_o *)Master_object;
    Master_object = (char *)DataManager__GetMasterData_object_(
                              (DataManager_o *)Master_object,
                              (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_EventMissionActionAddMaster___);
    if ( !Master_object )
      goto LABEL_67;
    EntityFromIdProgressTypeAndActionType = EventMissionActionAddMaster__GetEntityFromIdProgressTypeAndActionType(
                                              (EventMissionActionAddMaster_o *)Master_object,
                                              v3->fields.missionId,
                                              5,
                                              4,
                                              0);
    if ( EntityFromIdProgressTypeAndActionType )
    {
      v8 = EntityFromIdProgressTypeAndActionType;
      v9 = (EventMissionActionInfo_o *)sub_1C32E6C(EventMissionActionInfo_TypeInfo);
      EventMissionActionInfo___ctor_44653808(v9, v8, 0);
    }
    else
    {
      Master_object = (char *)DataManager__GetMasterData_object_(
                                v6,
                                (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_EventMissionActionMaster___);
      if ( !Master_object )
        goto LABEL_67;
      v22 = EventMissionActionMaster__getEntityFromIdProgressTypeAndActionType(
              (EventMissionActionMaster_o *)Master_object,
              v3->fields.missionId,
              5,
              4,
              0);
      if ( !v22 )
        return;
      v23 = v22;
      v9 = (EventMissionActionInfo_o *)sub_1C32E6C(EventMissionActionInfo_TypeInfo);
      EventMissionActionInfo___ctor(v9, v23, 0);
    }
    Master_object = (char *)DataManager__GetMasterData_object_(
                              v6,
                              (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_EventMissionMaster___);
    if ( !Master_object )
      goto LABEL_67;
    v24 = DataMasterBase_object__object__int___GetEntity(
            (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
            v3->fields.missionId,
            (const MethodInfo_3396838 *)Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__GetEntity__);
    if ( v24 )
    {
      v25 = v24;
      Master_object = (char *)DataManager__GetMasterData_object_(
                                v6,
                                (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_EventMaster___);
      if ( !Master_object )
        goto LABEL_67;
      Master_object = (char *)DataMasterBase_object__object__int___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                HIDWORD(v25[1].monitor),
                                (const MethodInfo_3396838 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
      if ( !Master_object )
        goto LABEL_67;
      if ( EventEntity__IsEventPeriod((EventEntity_o *)Master_object, 0, 0) )
      {
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_4C3456E )
        {
          sub_1C32C20(&TerminalPramsManager_TypeInfo);
          byte_4C3456E = 1;
        }
        v26 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v26 = TerminalPramsManager_TypeInfo;
        }
        v26->static_fields->meSceneStatus = 2;
        TerminalSceneComponent__CreateTransitionInfo(v5, v3, 0);
        if ( v9 )
        {
          Master_object = (char *)v5->fields._TransitionInfo_k__BackingField;
          if ( Master_object )
          {
            vals = v9->fields.vals;
            *((_QWORD *)Master_object + 4) = vals;
            sub_1C32BC4((CGThumbnailListItem_o *)(Master_object + 32), (int32_t)vals, v27, v28);
            v30 = v5->fields._TransitionInfo_k__BackingField;
            if ( v30 )
            {
              v30->fields.optionId = v9->fields.optionId;
              return;
            }
          }
        }
LABEL_67:
        sub_1C32E7C(Master_object);
      }
LABEL_66:
      TerminalSceneComponent__ClearTransitionInfo(v5, 0);
    }
  }
}


void QuestAfterAction__LoadVoice(QuestAfterAction_o *this, System_Action_o *endAct, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__o *svtVoices; // x0
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *Values; // x21
  System_Collections_Generic_List_object__o *v7; // x22
  const MethodInfo *v8; // x3

  if ( (byte_4C34544 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__get_Values__);
    sub_1C32C20(&Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_QuestAfterAction_VoiceInfo__TypeInfo);
    byte_4C34544 = 1;
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
      sub_1C32E7C(0);
    Values = System_Collections_Generic_Dictionary_int__object___get_Values(
               (System_Collections_Generic_Dictionary_int__object__o *)svtVoices,
               (const MethodInfo_33EFB2C *)Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__get_Values__);
    v7 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_QuestAfterAction_VoiceInfo__TypeInfo);
    System_Collections_Generic_List_object____ctor_58294448(
      v7,
      (System_Collections_Generic_IEnumerable_T__o *)Values,
      (const MethodInfo_37980B0 *)Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo___ctor__);
    QuestAfterAction__LoadVoice_36148420(
      this,
      (System_Collections_Generic_List_QuestAfterAction_VoiceInfo__o *)v7,
      endAct,
      v8);
  }
}


void QuestAfterAction__LoadVoice_36148420(
        QuestAfterAction_o *this,
        System_Collections_Generic_List_QuestAfterAction_VoiceInfo__o *svtVInfos,
        System_Action_o *endAct,
        const MethodInfo *method)
{
  __int64 v7; // x21
  System_Collections_Generic_List_QuestAfterAction_VoiceInfo__o *Instance; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  System_Collections_Generic_List_QuestAfterAction_VoiceInfo__o **v11; // x28
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  System_Action_o **v14; // x19
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  System_String_o *VoiceAssetName_42693484; // x19
  Il2CppObject *v18; // x20
  System_Action_o *v19; // x22

  while ( 1 )
  {
    if ( (byte_4C34545 & 1) == 0 )
    {
      sub_1C32C20(&System_Action_TypeInfo);
      sub_1C32C20(&Method_System_Linq_Enumerable_Any_QuestAfterAction_VoiceInfo___);
      sub_1C32C20(&Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo__RemoveAt__);
      sub_1C32C20(&Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo__get_Item__);
      sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      sub_1C32C20(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
      sub_1C32C20(&Method_QuestAfterAction___c__DisplayClass82_0__LoadVoice_b__0__);
      sub_1C32C20(&QuestAfterAction___c__DisplayClass82_0_TypeInfo);
      byte_4C34545 = 1;
    }
    v7 = sub_1C32E6C(QuestAfterAction___c__DisplayClass82_0_TypeInfo);
    QuestAfterAction___c__DisplayClass82_0___ctor((QuestAfterAction___c__DisplayClass82_0_o *)v7, 0);
    if ( !v7 )
      goto LABEL_17;
    *(_QWORD *)(v7 + 16) = svtVInfos;
    v11 = (System_Collections_Generic_List_QuestAfterAction_VoiceInfo__o **)(v7 + 16);
    sub_1C32BC4((CGThumbnailListItem_o *)(v7 + 16), (int32_t)svtVInfos, v9, v10);
    *(_QWORD *)(v7 + 24) = this;
    sub_1C32BC4((CGThumbnailListItem_o *)(v7 + 24), (int32_t)this, v12, v13);
    *(_QWORD *)(v7 + 32) = endAct;
    v14 = (System_Action_o **)(v7 + 32);
    sub_1C32BC4((CGThumbnailListItem_o *)(v7 + 32), (int32_t)endAct, v15, v16);
    if ( !System_Linq_Enumerable__Any_object_(
            *(System_Collections_Generic_IEnumerable_TSource__o **)(v7 + 16),
            (const MethodInfo_30E8F68 *)Method_System_Linq_Enumerable_Any_QuestAfterAction_VoiceInfo___) )
    {
      Instance = (System_Collections_Generic_List_QuestAfterAction_VoiceInfo__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( Instance )
      {
        CommonUI__SetLoadMode((CommonUI_o *)Instance, 0, 0);
        ActionExtensions__Call(*v14, 0);
        return;
      }
LABEL_17:
      sub_1C32E7C(Instance);
    }
    Instance = *v11;
    if ( !*v11 )
      goto LABEL_17;
    Instance = (System_Collections_Generic_List_QuestAfterAction_VoiceInfo__o *)System_Collections_Generic_List_object___get_Item(
                                                                                  (System_Collections_Generic_List_object__o *)Instance,
                                                                                  0,
                                                                                  (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo__get_Item__);
    if ( !Instance )
      goto LABEL_17;
    if ( LODWORD(Instance->fields._items) )
      break;
    Instance = *v11;
    if ( !*v11 )
      goto LABEL_17;
    System_Collections_Generic_List_object___RemoveAt(
      (System_Collections_Generic_List_object__o *)Instance,
      0,
      (const MethodInfo_3799F90 *)Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo__RemoveAt__);
    svtVInfos = *v11;
    endAct = *v14;
  }
  Instance = (System_Collections_Generic_List_QuestAfterAction_VoiceInfo__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  CommonUI__SetLoadMode((CommonUI_o *)Instance, 1, 0);
  Instance = *v11;
  if ( !*v11 )
    goto LABEL_17;
  Instance = (System_Collections_Generic_List_QuestAfterAction_VoiceInfo__o *)System_Collections_Generic_List_object___get_Item(
                                                                                (System_Collections_Generic_List_object__o *)Instance,
                                                                                0,
                                                                                (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo__get_Item__);
  if ( !Instance )
    goto LABEL_17;
  VoiceAssetName_42693484 = ServantVoiceEntity__getVoiceAssetName_42693484((int32_t)Instance->fields._items, 0);
  v18 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
  v19 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
  System_Action___ctor(v19, (Il2CppObject *)v7, Method_QuestAfterAction___c__DisplayClass82_0__LoadVoice_b__0__, 0);
  if ( !v18 )
    goto LABEL_17;
  SoundManager__LoadAudioAssetStorage((SoundManager_o *)v18, VoiceAssetName_42693484, v19, 1, 0);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *QuestAfterAction__MapObjName(
        QuestAfterAction_o *this,
        int32_t comType,
        int32_t id,
        const MethodInfo *method)
{
  if ( (byte_4C34554 & 1) == 0 )
  {
    sub_1C32C20(&SrcSpotBasePrefab_TypeInfo);
    sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C34554 = 1;
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
  UnityEngine_Collider_o *screenCollider; // x0
  const MethodInfo *v5; // x1
  struct System_Collections_Generic_List_int__o *invalidMapGimmickIdList; // x8
  int v7; // w9

  if ( (byte_4C3454E & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_int__Clear__);
    byte_4C3454E = 1;
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
    sub_1C32E7C(screenCollider);
  }
  v7 = invalidMapGimmickIdList->fields._version + 1;
  invalidMapGimmickIdList->fields._size = 0;
  invalidMapGimmickIdList->fields._version = v7;
  QuestAfterAction__Init(this, v5);
  this->fields.isKeepingMainStateButFinished = 0;
}


void QuestAfterAction__Play(QuestAfterAction_o *this, System_Action_o *endAct, const MethodInfo *method)
{
  __int64 v5; // x21
  Il2CppObject *Instance; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  System_Action_o *v9; // x22
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  const MethodInfo *v12; // x2

  if ( (byte_4C34549 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_1C32C20(&Method_QuestAfterAction___c__DisplayClass86_0__Play_b__0__);
    sub_1C32C20(&QuestAfterAction___c__DisplayClass86_0_TypeInfo);
    byte_4C34549 = 1;
  }
  v5 = sub_1C32E6C(QuestAfterAction___c__DisplayClass86_0_TypeInfo);
  QuestAfterAction___c__DisplayClass86_0___ctor((QuestAfterAction___c__DisplayClass86_0_o *)v5, 0);
  if ( !v5
    || (*(_QWORD *)(v5 + 16) = endAct,
        sub_1C32BC4((CGThumbnailListItem_o *)(v5 + 16), (int32_t)endAct, v7, v8),
        (Instance = SingletonTemplate_object___get_Instance((const MethodInfo_39E2DF4 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__)) == 0) )
  {
    sub_1C32E7C(Instance);
  }
  MissionNotifyManager__StartPause((MissionNotifyManager_o *)Instance, 0);
  v9 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
  System_Action___ctor(v9, (Il2CppObject *)v5, Method_QuestAfterAction___c__DisplayClass86_0__Play_b__0__, 0);
  this->fields.endAct = v9;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.endAct, (int32_t)v9, v10, v11);
  if ( this->fields.commandBuf )
    QuestAfterAction__SetState(this, 1, v12);
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
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  const MethodInfo *v13; // x1
  struct QuestAfterAction_Command_array *CommandBuf; // x0
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  System_Action_o *v17; // x21
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  System_Action_o *v20; // x21
  const MethodInfo *v21; // x2
  System_Collections_IEnumerator_o *v22; // x1

  if ( (byte_4C3454A & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&QuestAfterAction_TypeInfo);
    sub_1C32C20(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_1C32C20(&Method_QuestAfterAction___c__DisplayClass87_0__PlaySpecifiedAction_b__0__);
    sub_1C32C20(&Method_QuestAfterAction___c__DisplayClass87_0__PlaySpecifiedAction_b__1__);
    sub_1C32C20(&QuestAfterAction___c__DisplayClass87_0_TypeInfo);
    byte_4C3454A = 1;
  }
  v7 = sub_1C32E6C(QuestAfterAction___c__DisplayClass87_0_TypeInfo);
  QuestAfterAction___c__DisplayClass87_0___ctor((QuestAfterAction___c__DisplayClass87_0_o *)v7, 0);
  if ( !v7 )
    goto LABEL_10;
  *(_QWORD *)(v7 + 16) = this;
  sub_1C32BC4((CGThumbnailListItem_o *)(v7 + 16), (int32_t)this, v9, v10);
  *(_QWORD *)(v7 + 24) = finishCallback;
  sub_1C32BC4((CGThumbnailListItem_o *)(v7 + 24), (int32_t)finishCallback, v11, v12);
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)actionVals, 0) )
  {
    ActionExtensions__Call(*(System_Action_o **)(v7 + 24), 0);
    return;
  }
  if ( !QuestAfterAction_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(QuestAfterAction_TypeInfo);
  CommandBuf = QuestAfterAction__GenerateCommandBuf(actionVals, v13);
  this->fields.temporaryCommandBuf = CommandBuf;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.temporaryCommandBuf, (int32_t)CommandBuf, v15, v16);
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_39E2DF4 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
LABEL_10:
    sub_1C32E7C(Instance);
  MissionNotifyManager__StartPause((MissionNotifyManager_o *)Instance, 0);
  v17 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
  System_Action___ctor(
    v17,
    (Il2CppObject *)v7,
    Method_QuestAfterAction___c__DisplayClass87_0__PlaySpecifiedAction_b__0__,
    0);
  this->fields.endAct = v17;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.endAct, (int32_t)v17, v18, v19);
  v20 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
  System_Action___ctor(
    v20,
    (Il2CppObject *)v7,
    Method_QuestAfterAction___c__DisplayClass87_0__PlaySpecifiedAction_b__1__,
    0);
  v22 = QuestAfterAction__WaitWhileMainStateFinished(this, v20, v21);
  UnityEngine_MonoBehaviour__StartCoroutine_71209212((UnityEngine_MonoBehaviour_o *)this, v22, 0);
}


void QuestAfterAction__PlaySpecifiedActionInstantly(
        QuestAfterAction_o *this,
        QuestAfterAction_Command_array *commandArray,
        const MethodInfo *method)
{
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  System_Action_o *v7; // x20
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  const MethodInfo *v10; // x2

  if ( (byte_4C3454D & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_QuestAfterAction__PlaySpecifiedActionInstantly_b__90_0__);
    byte_4C3454D = 1;
  }
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)commandArray, 0) )
  {
    this->fields.temporaryCommandBuf = commandArray;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.temporaryCommandBuf, (int32_t)commandArray, v5, v6);
    v7 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
    System_Action___ctor(v7, (Il2CppObject *)this, Method_QuestAfterAction__PlaySpecifiedActionInstantly_b__90_0__, 0);
    this->fields.endAct = v7;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.endAct, (int32_t)v7, v8, v9);
    QuestAfterAction__SetState(this, 3, v10);
  }
}


// local variable allocation has failed, the output may be wrong!
void QuestAfterAction__RequestMapChange(
        QuestAfterAction_o *this,
        int32_t cType,
        int32_t cTarget,
        const MethodInfo *method)
{
  TerminalPramsManager_c *v7; // x0
  ScrTerminalMap_o *v8; // x0
  UnityEngine_GameObject_c *klass; // x8

  if ( (byte_4C34553 & 1) == 0 )
  {
    sub_1C32C20(&TerminalPramsManager_TypeInfo);
    sub_1C32C20(&TerminalSceneComponent_TypeInfo);
    byte_4C34553 = 1;
  }
  this->fields.ActionMapTargetType = cType;
  this->fields.ActionMapTargetId = cTarget;
  QuestAfterAction__SetState(this, 0, *(const MethodInfo **)&cTarget);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C3219C )
  {
    sub_1C32C20(&TerminalPramsManager_TypeInfo);
    byte_4C3219C = 1;
  }
  v7 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v7 = TerminalPramsManager_TypeInfo;
  }
  v7->static_fields->_IsAutoResume_k__BackingField = 1;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4C319B6 )
  {
    sub_1C32C20(&TerminalSceneComponent_TypeInfo);
    byte_4C319B6 = 1;
  }
  v8 = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v8 = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
  }
  klass = v8->fields.subRootGimmickP->klass;
  if ( !klass || (v8 = *(ScrTerminalMap_o **)&klass->_2.static_fields_size) == 0 )
    sub_1C32E7C(v8);
  ScrTerminalMap__RequestMapChange(v8, 0, -1, -1, 0);
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
  if ( (byte_4C34542 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1C32C20(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    this = (QuestAfterAction_o *)sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C34542 = 1;
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
                sub_1C32E84(this);
              TitleInfoCtrlCallback_k__BackingField = (System_String_o *)this->fields.invalidMapGimmickIdList;
              goto LABEL_29;
            }
          }
LABEL_42:
          sub_1C32E7C(this);
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
          this = (QuestAfterAction_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( this )
          {
            MasterData_object = DataManager__GetMasterData_object_(
                                  (DataManager_o *)this,
                                  (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_QuestMaster___);
            param = com->fields.param;
            v14 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
            this = (QuestAfterAction_o *)System_Int32__Parse(param, 0);
            if ( v14 )
            {
              this = (QuestAfterAction_o *)DataMasterBase_object__object__int___GetEntity(
                                             v14,
                                             (int32_t)this,
                                             (const MethodInfo_3396838 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
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


void QuestAfterAction__SetState(QuestAfterAction_o *this, int32_t state, const MethodInfo *method)
{
  CStateManager_T__o *fsm; // x0

  if ( (byte_4C34551 & 1) == 0 )
  {
    sub_1C32C20(&Method_CStateManager_QuestAfterAction__setState__);
    byte_4C34551 = 1;
  }
  fsm = (CStateManager_T__o *)this->fields.fsm;
  if ( !fsm )
    sub_1C32E7C(0);
  CStateManager_object___setState(
    fsm,
    state,
    (const MethodInfo_332283C *)Method_CStateManager_QuestAfterAction__setState__);
}


void QuestAfterAction__SkipToNextAction(QuestAfterAction_o *this, const MethodInfo *method)
{
  this->fields.isSkippedNext = 1;
}


void QuestAfterAction__Update(QuestAfterAction_o *this, const MethodInfo *method)
{
  CStateManager_T__o *fsm; // x0

  if ( (byte_4C34548 & 1) == 0 )
  {
    sub_1C32C20(&Method_CStateManager_QuestAfterAction__update__);
    byte_4C34548 = 1;
  }
  fsm = (CStateManager_T__o *)this->fields.fsm;
  if ( fsm )
    CStateManager_object___update(fsm, (const MethodInfo_3322818 *)Method_CStateManager_QuestAfterAction__update__);
}


System_Collections_IEnumerator_o *QuestAfterAction__WaitWhileMainStateFinished(
        QuestAfterAction_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  int32_t v9; // w2
  const MethodInfo *v10; // x3

  if ( (byte_4C3454F & 1) == 0 )
  {
    sub_1C32C20(&QuestAfterAction__WaitWhileMainStateFinished_d__93_TypeInfo);
    byte_4C3454F = 1;
  }
  v5 = sub_1C32E6C(QuestAfterAction__WaitWhileMainStateFinished_d__93_TypeInfo);
  QuestAfterAction__WaitWhileMainStateFinished_d__93___ctor(
    (QuestAfterAction__WaitWhileMainStateFinished_d__93_o *)v5,
    0,
    0);
  if ( !v5 )
    sub_1C32E7C(v6);
  *(_QWORD *)(v5 + 32) = this;
  sub_1C32BC4((CGThumbnailListItem_o *)(v5 + 32), (int32_t)this, v7, v8);
  *(_QWORD *)(v5 + 40) = action;
  sub_1C32BC4((CGThumbnailListItem_o *)(v5 + 40), (int32_t)action, v9, v10);
  return (System_Collections_IEnumerator_o *)v5;
}


void QuestAfterAction___PlaySpecifiedActionInstantly_b__90_0(QuestAfterAction_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  const MethodInfo *v7; // x2

  this->fields.endAct = 0;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.endAct, 0, v2, v3);
  this->fields.temporaryCommandBuf = 0;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.temporaryCommandBuf, 0, v5, v6);
  QuestAfterAction__SetState(this, 0, v7);
}


System_Int32_array *QuestAfterAction__getMapGmkOffIdList(QuestAfterAction_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *invalidMapGimmickIdList; // x0

  if ( (byte_4C34541 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_int__ToArray__);
    byte_4C34541 = 1;
  }
  invalidMapGimmickIdList = this->fields.invalidMapGimmickIdList;
  if ( !invalidMapGimmickIdList )
    sub_1C32E7C(0);
  return System_Collections_Generic_List_int___ToArray(
           invalidMapGimmickIdList,
           (const MethodInfo_377D250 *)Method_System_Collections_Generic_List_int__ToArray__);
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
  System_String_o *VoiceAssetName_42693484; // x20
  System_Collections_Generic_List_Enumerator_object__o v8; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4C34546 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__Clear__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__get_Values__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_QuestAfterAction_VoiceInfo__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_QuestAfterAction_VoiceInfo__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_QuestAfterAction_VoiceInfo__get_Current__);
    sub_1C32C20(&Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo__GetEnumerator__);
    sub_1C32C20(&Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_QuestAfterAction_VoiceInfo__TypeInfo);
    sub_1C32C20(&SoundManager_TypeInfo);
    byte_4C34546 = 1;
  }
  memset(&v8, 0, sizeof(v8));
  svtVoices = this->fields.svtVoices;
  if ( !svtVoices )
    goto LABEL_14;
  Values = System_Collections_Generic_Dictionary_int__object___get_Values(
             (System_Collections_Generic_Dictionary_int__object__o *)svtVoices,
             (const MethodInfo_33EFB2C *)Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__get_Values__);
  v5 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_QuestAfterAction_VoiceInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor_58294448(
    v5,
    (System_Collections_Generic_IEnumerable_T__o *)Values,
    (const MethodInfo_37980B0 *)Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo___ctor__);
  if ( !v5 )
    goto LABEL_14;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v8,
    v5,
    (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo__GetEnumerator__);
  while ( 1 )
  {
    v6 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v8,
           (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_QuestAfterAction_VoiceInfo__MoveNext__);
    if ( !v6 )
      break;
    if ( !v8.fields._current )
      sub_1C32E7C(v6);
    VoiceAssetName_42693484 = ServantVoiceEntity__getVoiceAssetName_42693484(
                                *(_DWORD *)((char *)&v8.fields._current->klass + (unsigned __int64)&word_10),
                                0);
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    SoundManager__releaseAudioAssetStorage(VoiceAssetName_42693484, 0);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v8,
    (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_QuestAfterAction_VoiceInfo__Dispose__);
  svtVoices = this->fields.svtVoices;
  if ( !svtVoices )
LABEL_14:
    sub_1C32E7C(svtVoices);
  System_Collections_Generic_Dictionary_int__object___Clear(
    (System_Collections_Generic_Dictionary_int__object__o *)svtVoices,
    (const MethodInfo_33EFEA4 *)Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__Clear__);
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

  if ( (byte_4C3455B & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_VoicePlayCondMaster___);
    sub_1C32C20(&Method_System_Collections_Generic_List_string__RemoveAt__);
    sub_1C32C20(&Method_System_Collections_Generic_List_string___ctor___78021832);
    sub_1C32C20(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_1C32C20(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C32C20(&System_Random_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C32C20(&TerminalSceneComponent_TypeInfo);
    sub_1C32C20(&StringLiteral_16107/*"_"*/);
    byte_4C3455B = 1;
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
    param = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( param )
    {
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)param,
                            (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_VoicePlayCondMaster___);
      v8 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_string__TypeInfo);
      System_Collections_Generic_List_object____ctor_58294448(
        v8,
        v6,
        (const MethodInfo_37980B0 *)Method_System_Collections_Generic_List_string___ctor___78021832);
      result = 0;
      v9 = (System_Random_o *)sub_1C32E6C(System_Random_TypeInfo);
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
                      (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_string__get_Item__);
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
              param = System_String__Concat_63556792(
                        *((System_String_o **)v13 + 5),
                        (System_String_o *)StringLiteral_16107/*"_"*/,
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
                       (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_string__get_Item__);
              if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
              if ( !byte_4C319B6 )
              {
                sub_1C32C20(&TerminalSceneComponent_TypeInfo);
                byte_4C319B6 = 1;
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
              (const MethodInfo_3799F90 *)Method_System_Collections_Generic_List_string__RemoveAt__);
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
    sub_1C32E7C(param);
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
    sub_1C32E84(v18);
  return System_String__Concat_63556792(
           *((System_String_o **)v20 + 5),
           (System_String_o *)StringLiteral_16107/*"_"*/,
           *((System_String_o **)v20 + 6),
           0);
}


System_String_o *QuestAfterAction_Command__GetBgmName(QuestAfterAction_Command_o *this, const MethodInfo *method)
{
  System_String_o *v3; // x0
  bool v4; // w8
  Il2CppObject *Instance; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF
  int32_t result; // [xsp+1Ch] [xbp-14h] BYREF

  if ( (byte_4C3455D & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_BgmMaster___);
    sub_1C32C20(&Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C3455D = 1;
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
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_12;
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_BgmMaster___);
      if ( !Instance )
        goto LABEL_12;
      Instance = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                   (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                   &entity,
                                   result,
                                   (const MethodInfo_3396884 *)Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( entity )
          return (System_String_o *)entity[1].monitor;
LABEL_12:
        sub_1C32E7C(Instance);
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
    sub_1C32E7C(v3);
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
  QuestAfterAction_Command_o *v4; // x20
  int param; // w8

  v4 = this;
  if ( (byte_4C3455C & 1) == 0 )
  {
    this = (QuestAfterAction_Command_o *)sub_1C32C20(&StringLiteral_16107/*"_"*/);
    byte_4C3455C = 1;
  }
  if ( v4->fields.id == 800 )
  {
    if ( !str || (this = (QuestAfterAction_Command_o *)System_String__Split(str, 0x5Fu, 0, 0)) == 0 )
      sub_1C32E7C(this);
    param = (int)this->fields.param;
    if ( param == 2 )
      return str;
    if ( param == 3 )
      return System_String__Concat_63556792(
               (System_String_o *)this[1].monitor,
               (System_String_o *)StringLiteral_16107/*"_"*/,
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
    sub_1C32E7C(this);
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
    sub_1C32E7C(screenCollider);
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

  if ( (byte_4C34617 & 1) == 0 )
  {
    this = (QuestAfterAction_StateInstant_o *)sub_1C32C20(&QuestAfterAction_TypeInfo);
    byte_4C34617 = 1;
  }
  if ( !cmd )
    sub_1C32E7C(this);
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
    sub_1C32E7C(0);
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

  klass = this->klass;
  this->fields.IsAnimDoing = 0;
  v6 = ((__int64 (__fastcall *)(QuestAfterAction_StateMain_o *, const MethodInfo *, const MethodInfo *))klass->vtable._10_get_CommandBuf.methodPtr)(
         this,
         klass->vtable._10_get_CommandBuf.method,
         method);
  if ( !v6 )
    sub_1C32E7C(0);
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
  const MethodInfo *v10; // x1
  Il2CppClass *klass; // x8
  float AnimTime; // s0
  const MethodInfo *v13; // x3

  v2 = this;
  if ( (byte_4C34562 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_int__Remove__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
    this = (QuestAfterAction_StateMain_o *)sub_1C32C20(&Method_SingletonTemplate_QuestTree__get_Instance__);
    byte_4C34562 = 1;
  }
  that = v2->fields.that;
  if ( !that )
    goto LABEL_22;
  this = (QuestAfterAction_StateMain_o *)that->fields.invalidMapGimmickIdList;
  if ( !this )
    goto LABEL_22;
  this = (QuestAfterAction_StateMain_o *)System_Collections_Generic_List_int___ToArray(
                                           (System_Collections_Generic_List_int__o *)this,
                                           (const MethodInfo_377D250 *)Method_System_Collections_Generic_List_int__ToArray__);
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
        sub_1C32E84(this);
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
        (const MethodInfo_377CC94 *)Method_System_Collections_Generic_List_int__Remove__);
      this = (QuestAfterAction_StateMain_o *)v2->fields.that;
      if ( !this )
        break;
      MapComponent_object = QuestAfterAction__GetMapComponent_object_(
                              (QuestAfterAction_o *)this,
                              2,
                              v8,
                              v2,
                              (const MethodInfo_3175FFC *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (QuestAfterAction_StateMain_o *)UnityEngine_Object__op_Inequality(
                                               (UnityEngine_Object_o *)MapComponent_object,
                                               0,
                                               0);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        this = (QuestAfterAction_StateMain_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39E2DF4 *)Method_SingletonTemplate_QuestTree__get_Instance__);
        if ( !MapComponent_object || !this )
          break;
        this = (QuestAfterAction_StateMain_o *)QuestTree__CheckMapGimmickCond_36535288(
                                                 (QuestTree_o *)this,
                                                 (MapControl_MapGimmickInfo_o *)MapComponent_object[7].klass,
                                                 0);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          klass = MapComponent_object[7].klass;
          if ( !klass )
            break;
          LODWORD(klass->_1.name) = 1;
          AnimTime = MapGimmickComponent__GetAnimTime((MapGimmickComponent_o *)MapComponent_object, v10);
          MapGimmickComponent__SetDispAnim_36104132((MapGimmickComponent_o *)MapComponent_object, 1, AnimTime, 1, v13);
        }
      }
      LODWORD(v4) = *(_DWORD *)&v5->fields.IsAnimDoing;
      if ( (__int64)++v6 >= (int)v4 )
        return;
    }
LABEL_22:
    sub_1C32E7C(this);
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
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  QuestAfterAction_o **v9; // x20
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  QuestAfterAction_StateMain_c *klass; // x8
  __int64 v13; // x21
  QuestAfterAction_Command_o *v14; // x21
  QuestAfterAction_o *v15; // x23
  BlankEarthQuestAfterAction_o *BlankEarthQuestAfterAction_k__BackingField; // x24
  System_Action_o *v17; // x25
  const MethodInfo *v18; // x1
  int id; // w8
  __int64 v20; // x21
  int v21; // w22
  int32_t v22; // w21
  __int64 v23; // x8
  bool v24; // w2
  bool v25; // w3
  int32_t v26; // w1
  __int64 v27; // x20
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  __int64 v30; // x23
  int32_t v31; // w21
  Il2CppObject *v32; // x0
  __int64 *v33; // x24
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  MapControl_QuestInfo_o *QuestInfo; // x0
  __int64 v37; // x22
  int32_t v38; // w2
  const MethodInfo *v39; // x3
  const MethodInfo *v40; // x2
  int v41; // w21
  __int64 v42; // x8
  NetworkManager_ResultCallbackFunc_o *v43; // x21
  Il2CppObject *Request_object; // x20
  int32_t v45; // w21
  __int64 v46; // x21
  int32_t v47; // w20
  int32_t v48; // w22
  __int64 v49; // x8
  __int64 v50; // x23
  float v51; // s8
  TerminalSceneComponent_c *v52; // x0
  TerminalSceneComponent_o *mInstance; // x22
  __int64 v54; // x20
  int32_t v55; // w2
  const MethodInfo *v56; // x3
  __int64 v57; // x23
  __int64 v58; // x8
  __int64 v59; // x22
  int32_t v60; // w21
  bool v61; // w24
  bool v62; // w25
  __int64 v63; // x8
  __int64 v64; // x22
  _BOOL4 v65; // w23
  __int64 v66; // x20
  int32_t v67; // w2
  const MethodInfo *v68; // x3
  __int64 v69; // x8
  QuestAfterAction_o *v70; // x22
  Il2CppObject *v71; // x0
  int32_t v72; // w2
  const MethodInfo *v73; // x3
  UnityEngine_Object_o *v74; // x19
  SrcSpotBasePrefab_o *v75; // x19
  System_Action_o *v76; // x21
  int32_t v77; // w1
  __int64 v78; // x20
  int32_t v79; // w2
  const MethodInfo *v80; // x3
  __int64 v81; // x8
  QuestAfterAction_o *v82; // x22
  Il2CppObject *v83; // x0
  int32_t v84; // w2
  const MethodInfo *v85; // x3
  UnityEngine_Object_o *v86; // x19
  ModelLineComponent_o *v87; // x19
  System_Action_o *v88; // x21
  const MethodInfo *v89; // x3
  int32_t v90; // w1
  System_String_o *v91; // x19
  System_String_o *v92; // x20
  System_String_o *v93; // x20
  Il2CppObject *Instance; // x21
  System_Action_o *v95; // x23
  float v96; // s0
  __int64 v97; // x19
  int32_t v98; // w2
  const MethodInfo *v99; // x3
  __int64 v100; // x22
  int32_t v101; // w20
  int32_t v102; // w21
  BgmManager_c *v103; // x0
  float v104; // s0
  float masterVolume; // s1
  float v106; // s0
  __int64 v107; // x8
  ScrTerminalListTop_o *v108; // x22
  float v109; // s8
  float v110; // s9
  __int64 v111; // x8
  ScrTerminalListTop_o *v112; // x22
  System_Action_o *v113; // x23
  __int64 v114; // x22
  int v115; // w23
  float v116; // s8
  int32_t v117; // w21
  float DEFAULT_FADE_TIME; // s8
  AvalonSceneManager_c *v119; // x0
  TerminalSceneComponent_c *v120; // x0
  TerminalSceneComponent_o *v121; // x19
  System_Action_o *v122; // x20
  TerminalSceneComponent_o *v123; // x0
  float v124; // s0
  System_Action_o *v125; // x1
  System_String_o *param; // x21
  _QWORD *v127; // x0
  System_Reflection_MethodBase_o *v128; // x0
  __int64 v129; // x23
  int32_t v130; // w21
  int32_t v131; // w22
  int32_t v132; // w23
  __int64 v133; // x8
  PlayMakerFSM_o *v134; // x20
  System_String_o *ActiveStateName; // x0
  __int64 v136; // x8
  __int64 v137; // x8
  QuestBoardListViewManager_o *v138; // x21
  System_Action_o *v139; // x22
  Il2CppObject *v140; // x23
  struct QuestAfterAction_StateMain___c_StaticFields *static_fields; // x0
  int32_t v142; // w2
  const MethodInfo *v143; // x3
  TerminalSceneComponent_c *v144; // x0
  QuestAfterAction_o *v145; // x8
  __int64 v146; // x8
  __int64 v147; // x8
  __int64 v148; // x8
  System_String_o *v149; // x20
  System_String_o *v150; // x21
  SeManager_c *v151; // x0
  float DEFAULT_VOLUME; // s8
  __int64 v153; // x21
  int32_t v154; // w0
  int32_t v155; // w20
  float v156; // s8
  int32_t v157; // w19
  __int64 v158; // x8
  __int64 v159; // x8
  __int64 v160; // x23
  float v161; // s0
  int32_t v162; // w22
  __int64 v163; // x8
  ScrTerminalMap_o *v164; // x24
  float v165; // s0
  float v166; // s9
  float v167; // s0
  const MethodInfo_38C2B00 *v168; // x2
  int v169; // w8
  float v170; // s10
  float v171; // s9
  float v172; // s11
  MapCamera_o *mMapCamera; // x20
  Il2CppObject *MapComponent_object; // x22
  Il2CppObject *v175; // x20
  __int64 v176; // x8
  ScrTerminalMap_o *v177; // x23
  __int64 v178; // x8
  ScrTerminalMap_o *v179; // x20
  UnityEngine_GameObject_o *gameObject; // x22
  System_Action_o *v181; // x23
  TerminalPramsManager_c *v182; // x0
  __int64 v183; // x8
  const MethodInfo *v184; // x2
  TerminalPramsManager_c *v185; // x0
  __int64 v186; // x21
  const MethodInfo *v187; // x3
  QuestAfterAction_o *v188; // x8
  QuestAfterAction_TitleInfoControlCallback_o *TitleInfoCtrlCallback_k__BackingField; // x22
  System_Action_o *v190; // x20
  const MethodInfo *v191; // x3
  TerminalPramsManager_c *v192; // x0
  __int64 v193; // x8
  __int64 v194; // x21
  int32_t v195; // w20
  __int64 v196; // x8
  __int64 v197; // x21
  int32_t v198; // w0
  int32_t v199; // w20
  System_String_o *v200; // x21
  int v201; // w23
  __int64 v202; // x21
  float v203; // s0
  float v204; // s8
  float v205; // s0
  MapCamera_o *v206; // x19
  float v207; // s0
  float v208; // s9
  int32_t v209; // w20
  __int64 v210; // x23
  int32_t v211; // w2
  const MethodInfo *v212; // x3
  System_String_array *v213; // x20
  int32_t v214; // w1
  int v215; // w8
  System_String_o *v216; // x19
  System_String_o *v217; // x20
  System_String_o *v218; // x19
  System_String_o *v219; // x20
  System_String_o *v220; // x20
  Il2CppObject *v221; // x21
  System_Action_o *v222; // x23
  __int64 v223; // x23
  int32_t v224; // w2
  const MethodInfo *v225; // x3
  System_String_array *v226; // x20
  int32_t v227; // w1
  int v228; // w8
  System_String_o *v229; // x19
  System_String_o *v230; // x20
  System_String_o *v231; // x20
  Il2CppObject *v232; // x21
  System_Action_o *v233; // x23
  __int64 v234; // x23
  float v235; // s0
  float v236; // s9
  float v237; // s0
  float v238; // s10
  float v239; // s0
  float v240; // s11
  float v241; // s0
  float v242; // s8
  int32_t v243; // w19
  __int64 v244; // x8
  float v245; // s8
  const MethodInfo_38C2B00 *v246; // x2
  float v247; // s10
  float v248; // s9
  float v249; // s11
  MapCamera_o *v250; // x20
  System_Action_o *v251; // x21
  MapCamera_o *v252; // x0
  float v253; // s0 OVERLAPPED
  float v254; // s1
  float v255; // s2
  float v256; // s3
  int32_t v257; // w1
  __int64 v258; // x20
  int32_t v259; // w2
  const MethodInfo *v260; // x3
  __int64 v261; // x8
  QuestAfterAction_o *v262; // x22
  Il2CppObject *v263; // x0
  int32_t v264; // w2
  const MethodInfo *v265; // x3
  UnityEngine_Object_o *v266; // x19
  __int64 v267; // x23
  int32_t v268; // w2
  const MethodInfo *v269; // x3
  __int64 v270; // x20
  QuestAfterAction_o *v271; // x22
  Il2CppObject *v272; // x0
  __int64 *v273; // x19
  int32_t v274; // w2
  const MethodInfo *v275; // x3
  UnityEngine_Object_o *v276; // x21
  SrcSpotBasePrefab_o *v277; // x21
  System_Action_o *v278; // x22
  int32_t v279; // w2
  const MethodInfo *v280; // x3
  __int64 v281; // x1
  CGThumbnailListItem_o *v282; // x0
  __int64 v283; // x22
  QuestAfterAction_o *v284; // x21
  Il2CppObject *v285; // x21
  System_Action_o *v286; // x22
  QuestAfterAction_o *v287; // x22
  UnityEngine_Object_o *v288; // x21
  intptr_t m_CachedPtr; // x8
  SrcSpotBasePrefab_o *v290; // x0
  int32_t v291; // w1
  QuestAfterAction_o *v292; // x22
  UnityEngine_Object_o *v293; // x21
  intptr_t v294; // x8
  QuestAfterAction_o *v295; // x22
  intptr_t v296; // x8
  __int64 v297; // x21
  QuestAfterAction_o *v298; // x22
  Il2CppObject *v299; // x22
  __int64 v300; // x23
  int32_t v301; // w2
  const MethodInfo *v302; // x3
  __int64 v303; // x20
  __int64 v304; // x8
  __int64 v305; // x21
  int32_t v306; // w22
  bool v307; // w25
  bool v308; // w27
  __int64 v309; // x8
  __int64 v310; // x22
  int32_t v311; // w21
  bool v312; // w22
  __int64 v313; // x8
  __int64 v314; // x22
  int32_t v315; // w21
  bool v316; // w22
  __int64 v317; // x21
  float v318; // s0
  QuestAfterAction_o *v319; // x20
  float v320; // s8
  Il2CppObject *v321; // x20
  _BOOL4 v322; // w23
  __int64 v323; // x20
  int32_t v324; // w2
  const MethodInfo *v325; // x3
  __int64 v326; // x8
  QuestAfterAction_o *v327; // x22
  Il2CppObject *v328; // x0
  int32_t v329; // w2
  const MethodInfo *v330; // x3
  UnityEngine_Object_o *v331; // x19
  MapGimmickComponent_o *v332; // x19
  System_Action_o *v333; // x21
  const MethodInfo *v334; // x3
  TerminalSceneComponent_o *v335; // x19
  __int64 v336; // x20
  int32_t v337; // w2
  const MethodInfo *v338; // x3
  System_String_array *v339; // x0
  __int64 *v340; // x21
  int32_t v341; // w2
  const MethodInfo *v342; // x3
  __int64 v343; // x8
  __int64 v344; // x9
  QuestAfterAction_o *v345; // x21
  Il2CppObject *v346; // x0
  int32_t v347; // w2
  const MethodInfo *v348; // x3
  UnityEngine_Object_o *v349; // x19
  MapGimmickComponent_o *v350; // x19
  System_Action_o *v351; // x0
  intptr_t *v352; // x8
  System_Action_o *v353; // x21
  __int64 v354; // x21
  QuestAfterAction_o *v355; // x20
  Il2CppObject *v356; // x20
  UIWidget_o *v357; // x20
  int32_t v358; // w2
  const MethodInfo *v359; // x3
  __int64 v360; // x8
  QuestAfterAction_o *v361; // x22
  Il2CppObject *v362; // x0
  __int64 v363; // x19
  int32_t v364; // w2
  const MethodInfo *v365; // x3
  UnityEngine_Object_o *v366; // x21
  bool v367; // w0
  bool v368; // w22
  const MethodInfo *v369; // x3
  int32_t v370; // w1
  __int64 v371; // x8
  __int64 v372; // x22
  int32_t v373; // w21
  bool v374; // w22
  __int64 v375; // x21
  QuestAfterAction_o *v376; // x22
  Il2CppObject *v377; // x22
  QuestAfterAction_o *v378; // x23
  const MethodInfo *v379; // x4
  int32_t v380; // w2
  QuestAfterAction_o *v381; // x0
  int32_t v382; // w1
  QuestAfterAction_o *v383; // x22
  QuestAfterAction_o *v384; // x23
  const MethodInfo *v385; // x4
  UnityEngine_Object_o *MapGameObject; // x23
  float v387; // s9
  float v388; // s8
  float v389; // s10
  QuestAfterAction_o *v390; // x22
  QuestAfterAction_o *v391; // x23
  UnityEngine_Object_o *v392; // x23
  __int64 v393; // x8
  float v394; // s0
  float v395; // s11
  int32_t v396; // w23
  const MethodInfo *v397; // x3
  int32_t v398; // w21
  TerminalPramsManager_c *v399; // x0
  QuestAfterAction_o *v400; // x20
  Il2CppObject *v401; // x20
  TerminalPramsManager_c *v402; // x0
  __int64 v403; // x8
  __int64 v404; // x8
  __int64 v405; // x20
  int32_t v406; // w2
  const MethodInfo *v407; // x3
  __int64 v408; // x8
  QuestAfterAction_o *v409; // x22
  Il2CppObject *v410; // x0
  int32_t v411; // w2
  const MethodInfo *v412; // x3
  UnityEngine_Object_o *v413; // x19
  __int64 v414; // x20
  int32_t v415; // w2
  const MethodInfo *v416; // x3
  __int64 v417; // x8
  QuestAfterAction_o *v418; // x22
  Il2CppObject *v419; // x0
  int32_t v420; // w2
  const MethodInfo *v421; // x3
  UnityEngine_Object_o *v422; // x19
  _BOOL4 IsMapModel; // w23
  QuestAfterAction_o *v424; // x22
  UnityEngine_Object_o *v425; // x21
  const MethodInfo *v426; // x2
  _DWORD *v427; // x8
  _BOOL4 v428; // w23
  QuestAfterAction_o *v429; // x22
  UnityEngine_Object_o *v430; // x21
  const MethodInfo *v431; // x2
  const MethodInfo *v432; // x2
  _DWORD *v433; // x8
  _BOOL4 v434; // w23
  QuestAfterAction_o *v435; // x22
  UnityEngine_Object_o *v436; // x21
  const MethodInfo *v437; // x2
  const MethodInfo *v438; // x2
  float v439; // s0
  float v440; // s0
  float v441; // s0
  QuestAfterAction_o *v442; // x24
  const MethodInfo *v443; // x4
  UnityEngine_Object_o *v444; // x24
  float v445; // s11
  float v446; // s9
  float v447; // s10
  __int64 v448; // x8
  const MethodInfo_38C2B00 *v449; // x2
  System_String_o *v450; // x24
  QuestAfterAction_o *v451; // x24
  const MethodInfo *v452; // x4
  UnityEngine_Object_o *v453; // x24
  float v454; // s9
  float v455; // s10
  float v456; // s11
  __int64 v457; // x8
  QuestAfterAction_o *v458; // x24
  const MethodInfo *v459; // x4
  UnityEngine_Object_o *v460; // x24
  __int64 v461; // x8
  int v462; // w8
  QuestAfterAction_o *v463; // x8
  MapCamera_o *v464; // x20
  MapCamera_o *v465; // x0
  float v466; // s0 OVERLAPPED
  float v467; // s1
  float v468; // s2
  int32_t v469; // w1
  Il2CppObject *v470; // x3
  SceneJumpInfo_o *v471; // x21
  TerminalPramsManager_c *v472; // x0
  TerminalPramsManager_c *v473; // x0
  Il2CppObject *v474; // x21
  System_Action_o *v475; // x23
  Il2CppObject *v476; // x21
  const MethodInfo *v477; // x3
  Il2CppObject *v478; // x21
  const MethodInfo *v479; // x3
  Il2CppClass *v480; // x8
  Il2CppObject *v481; // x21
  const MethodInfo *v482; // x1
  float AnimTime; // s0
  const MethodInfo *v484; // x3
  Il2CppClass *v485; // x8
  QuestAfterAction_StateMain_c *v486; // x8
  int v487; // w0
  Il2CppObject *v488; // x0
  int32_t v489; // w2
  const MethodInfo *v490; // x3
  UnityEngine_Object_o *v491; // x22
  MapGimmickComponent_o *v492; // x21
  System_Action_o *v493; // x0
  System_Action_o *v494; // x22
  MapGimmickComponent_o *v495; // x0
  System_Action_o *v496; // x2
  Il2CppObject *v497; // x0
  MapGimmickComponent_o **v498; // x22
  int32_t v499; // w2
  const MethodInfo *v500; // x3
  UnityEngine_Object_o *v501; // x24
  MapGimmickComponent_o *v502; // x24
  const MethodInfo *v503; // x3
  System_Action_o *v504; // x0
  System_Action_o *v505; // x21
  __int64 v506; // x20
  int32_t v507; // w2
  const MethodInfo *v508; // x3
  __int64 v509; // x8
  QuestAfterAction_o *v510; // x22
  Il2CppObject *v511; // x0
  int32_t v512; // w2
  const MethodInfo *v513; // x3
  UnityEngine_Object_o *v514; // x19
  srcLineSprite_o *v515; // x19
  System_Action_o *v516; // x21
  int32_t v517; // w1
  __int64 v518; // x20
  int32_t v519; // w2
  const MethodInfo *v520; // x3
  __int64 v521; // x8
  QuestAfterAction_o *v522; // x22
  Il2CppObject *v523; // x0
  int32_t v524; // w2
  const MethodInfo *v525; // x3
  UnityEngine_Object_o *v526; // x19
  __int64 v527; // x20
  int32_t v528; // w2
  const MethodInfo *v529; // x3
  __int64 v530; // x8
  QuestAfterAction_o *v531; // x22
  Il2CppObject *v532; // x0
  int32_t v533; // w2
  const MethodInfo *v534; // x3
  UnityEngine_Object_o *v535; // x19
  UnityEngine_Object_o *v536; // x21
  UnityEngine_Object_o *v537; // x21
  int v538; // w9
  UnityEngine_Object_o *v539; // x21
  float v540; // s11
  float v541; // s10
  float v542; // s9
  System_String_o *v543; // x24
  __int64 v544; // x8
  ScrTerminalMap_o *v545; // x21
  System_Action_o *v546; // x23
  int32_t v547; // w0
  int32_t v548; // w23
  SceneJumpInfo_o *v549; // x22
  System_String_o *monitor; // x20
  MapCamera_o *v551; // x20
  System_Action_o *v552; // x20
  const MethodInfo *v553; // x3
  MapGimmickComponent_o *v554; // x0
  float v555; // s0 OVERLAPPED
  float v556; // s1
  float v557; // s2
  float v558; // s3
  int32_t v559; // w1
  System_Action_o *v560; // x2
  const MethodInfo *v561; // x3
  __int64 v562; // x8
  const MethodInfo *v563; // x3
  int v564; // w8
  MapCamera_o *v565; // x20
  float v566; // s0 OVERLAPPED
  float v567; // s1
  System_Nullable_Vector3__o v568; // x0
  float v569; // s2
  float v570; // s0 OVERLAPPED
  float v571; // s1
  System_Nullable_Vector3__o v572; // x0
  float v573; // s2
  QuestAfterAction_o *v574; // x8
  QuestAfterAction_o *v575; // x8
  __int64 v576; // x8
  ScrTerminalMap_o *v577; // x22
  float v578; // s0
  float v579; // s9
  float v580; // s0
  float x; // s10
  float y; // s9
  float z; // s11
  float v584; // s8
  const MethodInfo *v585; // x3
  int32_t v586; // w21
  System_Action_o *v587; // x22
  System_String_o *v588; // x0
  float v589; // s0
  System_Nullable_float__o p_size; // x0
  System_Nullable_float__o v591; // x3
  System_String_o *v592; // x0
  float v593; // s0
  System_Nullable_float__o v594; // x0
  System_Action_o *v595; // x21
  System_Nullable_Vector3__o v596; // x1 OVERLAPPED
  System_Nullable_float__o v597; // x3
  MapCamera_o *v598; // x0
  float v599; // s0
  int32_t v600; // w4
  MapCamera_o *v601; // x20
  float v602; // s0
  System_Nullable_float__o v603; // x0
  int32_t onClickOkSeKind; // [xsp+10h] [xbp-E0h]
  System_Nullable_float__o size; // [xsp+40h] [xbp-B0h] BYREF
  System_Nullable_Vector3__o v606; // [xsp+48h] [xbp-A8h] BYREF
  Il2CppObject *value; // [xsp+58h] [xbp-98h] BYREF
  Il2CppObject *entity; // [xsp+60h] [xbp-90h] BYREF
  UnityEngine_Color_o color; // [xsp+68h] [xbp-88h] BYREF
  bool isQuickUpdate; // [xsp+7Ch] [xbp-74h] BYREF
  System_Nullable_Vector3__o v611; // 0:x0.16
  System_Nullable_Vector3__o v612; // 0:x0.16
  System_Nullable_Vector3__o v613; // 0:x0.16
  UnityEngine_Vector3_o v614; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v615; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v616; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v618; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v619; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v620; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v621; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v622; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v623; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v624; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o Position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v626; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v627; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v628; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v629; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v630; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v631; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v632; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v633; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v634; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C34560 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&AvalonSceneManager_TypeInfo);
    sub_1C32C20(&BgmManager_TypeInfo);
    sub_1C32C20(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_QuestMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    sub_1C32C20(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__TryGetValue__);
    sub_1C32C20(&FSUtility_TypeInfo);
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponentInChildren_UISprite___);
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_ModelLineComponent___);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&Method_NetworkManager_getRequest_BattleSetupScenarioRequest___);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&Method_System_Nullable_Vector3___ctor__);
    sub_1C32C20(&Method_System_Nullable_float___ctor__);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
    sub_1C32C20(&Method_QuestAfterAction_GetMapComponent_ModelLineComponent___);
    sub_1C32C20(&Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
    sub_1C32C20(&Method_QuestAfterAction_GetMapComponent_srcLineSprite___);
    sub_1C32C20(&QuestAfterAction_TypeInfo);
    sub_1C32C20(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1C32C20(&SceneJumpInfo_TypeInfo);
    sub_1C32C20(&SeManager_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
    sub_1C32C20(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_1C32C20(&SoundManager_TypeInfo);
    sub_1C32C20(&Method_QuestAfterAction_StateMain_UpdateAnim__);
    sub_1C32C20(&string___TypeInfo);
    sub_1C32C20(&TerminalPramsManager_TypeInfo);
    sub_1C32C20(&TerminalSceneComponent_TypeInfo);
    sub_1C32C20(&QuestAfterAction_TitleInfoControlParam_TypeInfo);
    sub_1C32C20(&Method_QuestAfterAction_StateMain___c__UpdateAnim_b__16_22__);
    sub_1C32C20(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__10__);
    sub_1C32C20(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__11__);
    sub_1C32C20(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__12__);
    sub_1C32C20(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__23__);
    sub_1C32C20(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__29__);
    sub_1C32C20(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__30__);
    sub_1C32C20(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__31__);
    sub_1C32C20(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__32__);
    sub_1C32C20(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__33__);
    sub_1C32C20(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__9__);
    sub_1C32C20(&QuestAfterAction_StateMain___c__DisplayClass16_0_TypeInfo);
    sub_1C32C20(&Method_QuestAfterAction_StateMain___c__DisplayClass16_10__UpdateAnim_b__13__);
    sub_1C32C20(&Method_QuestAfterAction_StateMain___c__DisplayClass16_10__UpdateAnim_b__14__);
    sub_1C32C20(&QuestAfterAction_StateMain___c__DisplayClass16_10_TypeInfo);
    sub_1C32C20(&Method_QuestAfterAction_StateMain___c__DisplayClass16_11__UpdateAnim_b__15__);
    sub_1C32C20(&Method_QuestAfterAction_StateMain___c__DisplayClass16_11__UpdateAnim_b__16__);
    sub_1C32C20(&QuestAfterAction_StateMain___c__DisplayClass16_11_TypeInfo);
    sub_1C32C20(&Method_QuestAfterAction_StateMain___c__DisplayClass16_12__UpdateAnim_b__17__);
    sub_1C32C20(&QuestAfterAction_StateMain___c__DisplayClass16_12_TypeInfo);
    sub_1C32C20(&Method_QuestAfterAction_StateMain___c__DisplayClass16_13__UpdateAnim_b__18__);
    sub_1C32C20(&QuestAfterAction_StateMain___c__DisplayClass16_13_TypeInfo);
    sub_1C32C20(&Method_QuestAfterAction_StateMain___c__DisplayClass16_15__UpdateAnim_b__20__);
    sub_1C32C20(&Method_QuestAfterAction_StateMain___c__DisplayClass16_15__UpdateAnim_b__21__);
    sub_1C32C20(&QuestAfterAction_StateMain___c__DisplayClass16_15_TypeInfo);
    sub_1C32C20(&Method_QuestAfterAction_StateMain___c__DisplayClass16_16__UpdateAnim_b__24__);
    sub_1C32C20(&QuestAfterAction_StateMain___c__DisplayClass16_16_TypeInfo);
    sub_1C32C20(&Method_QuestAfterAction_StateMain___c__DisplayClass16_17__UpdateAnim_b__34__);
    sub_1C32C20(&QuestAfterAction_StateMain___c__DisplayClass16_17_TypeInfo);
    sub_1C32C20(&Method_QuestAfterAction_StateMain___c__DisplayClass16_1__UpdateAnim_b__0__);
    sub_1C32C20(&QuestAfterAction_StateMain___c__DisplayClass16_1_TypeInfo);
    sub_1C32C20(&Method_QuestAfterAction_StateMain___c__DisplayClass16_2__UpdateAnim_b__1__);
    sub_1C32C20(&QuestAfterAction_StateMain___c__DisplayClass16_2_TypeInfo);
    sub_1C32C20(&Method_QuestAfterAction_StateMain___c__DisplayClass16_3__UpdateAnim_b__2__);
    sub_1C32C20(&QuestAfterAction_StateMain___c__DisplayClass16_3_TypeInfo);
    sub_1C32C20(&Method_QuestAfterAction_StateMain___c__DisplayClass16_4__UpdateAnim_b__3__);
    sub_1C32C20(&QuestAfterAction_StateMain___c__DisplayClass16_4_TypeInfo);
    sub_1C32C20(&Method_QuestAfterAction_StateMain___c__DisplayClass16_5__UpdateAnim_b__4__);
    sub_1C32C20(&QuestAfterAction_StateMain___c__DisplayClass16_5_TypeInfo);
    sub_1C32C20(&Method_QuestAfterAction_StateMain___c__DisplayClass16_6__UpdateAnim_b__5__);
    sub_1C32C20(&QuestAfterAction_StateMain___c__DisplayClass16_6_TypeInfo);
    sub_1C32C20(&Method_QuestAfterAction_StateMain___c__DisplayClass16_7__UpdateAnim_b__6__);
    sub_1C32C20(&QuestAfterAction_StateMain___c__DisplayClass16_7_TypeInfo);
    sub_1C32C20(&Method_QuestAfterAction_StateMain___c__DisplayClass16_8__UpdateAnim_b__7__);
    sub_1C32C20(&QuestAfterAction_StateMain___c__DisplayClass16_8_TypeInfo);
    sub_1C32C20(&Method_QuestAfterAction_StateMain___c__DisplayClass16_9__UpdateAnim_b__8__);
    sub_1C32C20(&QuestAfterAction_StateMain___c__DisplayClass16_9_TypeInfo);
    sub_1C32C20(&QuestAfterAction_StateMain___c_TypeInfo);
    sub_1C32C20(&StringLiteral_87/*"\r\n"*/);
    sub_1C32C20(&StringLiteral_1381/*"30101"*/);
    sub_1C32C20(&StringLiteral_10820/*"QUEST_AFTER_ACTION_MESSAGE_"*/);
    sub_1C32C20(&StringLiteral_1382/*"30102"*/);
    sub_1C32C20(&StringLiteral_1308/*"10703"*/);
    sub_1C32C20(&StringLiteral_811/*","*/);
    sub_1C32C20(&StringLiteral_3293/*"CAPTER WAIT"*/);
    sub_1C32C20(&StringLiteral_1/*""*/);
    sub_1C32C20(&StringLiteral_19862/*"gevINFOBAR_BACK"*/);
    sub_1C32C20(&StringLiteral_1122/*"0"*/);
    byte_4C34560 = 1;
  }
  isQuickUpdate = 0;
  *(_QWORD *)&color.fields.r = 0;
  *(_QWORD *)&color.fields.b = 0;
  value = 0;
  entity = 0;
  v5 = sub_1C32E6C(QuestAfterAction_StateMain___c__DisplayClass16_0_TypeInfo);
  QuestAfterAction_StateMain___c__DisplayClass16_0___ctor((QuestAfterAction_StateMain___c__DisplayClass16_0_o *)v5, 0);
  if ( !v5 )
    goto LABEL_1104;
  *(_QWORD *)(v5 + 16) = this;
  sub_1C32BC4((CGThumbnailListItem_o *)(v5 + 16), (int32_t)this, v7, v8);
  *(_QWORD *)(v5 + 24) = that;
  v9 = (QuestAfterAction_o **)(v5 + 24);
  sub_1C32BC4((CGThumbnailListItem_o *)(v5 + 24), (int32_t)that, v10, v11);
  if ( this->fields.IsAnimDoing )
    return;
  updated = ((__int64 (__fastcall *)(QuestAfterAction_StateMain_o *, const MethodInfo *))this->klass->vtable._10_get_CommandBuf.methodPtr)(
              this,
              this->klass->vtable._10_get_CommandBuf.method);
  if ( !updated )
    return;
  if ( !*v9 )
    goto LABEL_1104;
  if ( (*v9)->fields.isSkippedNext )
  {
    updated = ((__int64 (__fastcall *)(QuestAfterAction_StateMain_o *, const MethodInfo *))this->klass->vtable._14_EndAnim.methodPtr)(
                this,
                this->klass->vtable._14_EndAnim.method);
    if ( *v9 )
    {
      (*v9)->fields.isSkippedNext = 0;
      return;
    }
LABEL_1104:
    sub_1C32E7C(updated);
  }
  klass = this->klass;
  this->fields.IsAnimDoing = 1;
  v13 = ((__int64 (__fastcall *)(QuestAfterAction_StateMain_o *, const MethodInfo *))klass->vtable._10_get_CommandBuf.methodPtr)(
          this,
          klass->vtable._10_get_CommandBuf.method);
  updated = ((__int64 (__fastcall *)(QuestAfterAction_StateMain_o *, const MethodInfo *))this->klass->vtable._11_get_CommandIndex.methodPtr)(
              this,
              this->klass->vtable._11_get_CommandIndex.method);
  if ( !v13 )
    goto LABEL_1104;
  if ( (unsigned int)updated >= *(_DWORD *)(v13 + 24) )
    goto LABEL_1105;
  v14 = *(QuestAfterAction_Command_o **)(v13 + 8LL * (int)updated + 32);
  updated = ((__int64 (__fastcall *)(QuestAfterAction_StateMain_o *, QuestAfterAction_Command_o *, const MethodInfo *))this->klass->vtable._9_IsUsableCommand.methodPtr)(
              this,
              v14,
              this->klass->vtable._9_IsUsableCommand.method);
  if ( (updated & 1) == 0 )
    goto LABEL_999;
  v15 = *v9;
  if ( !*v9 )
    goto LABEL_1104;
  BlankEarthQuestAfterAction_k__BackingField = v15->fields._BlankEarthQuestAfterAction_k__BackingField;
  v17 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
  System_Action___ctor(v17, (Il2CppObject *)this, (intptr_t)this->klass->vtable._14_EndAnim.method, 0);
  if ( !BlankEarthQuestAfterAction_k__BackingField )
    goto LABEL_1104;
  updated = BlankEarthQuestAfterAction__UpdateAnim(
              BlankEarthQuestAfterAction_k__BackingField,
              v15,
              v14,
              v17,
              &isQuickUpdate,
              0);
  if ( (updated & 1) == 0 )
  {
    if ( !v14 )
      goto LABEL_1104;
    id = v14->fields.id;
    if ( id > 530 )
    {
      if ( id > 800 )
      {
        if ( id <= 851 )
        {
          switch ( id )
          {
            case 801:
              param = v14->fields.param;
              v127 = Method_QuestAfterAction_StateMain_UpdateAnim__;
              if ( (*((_BYTE *)Method_QuestAfterAction_StateMain_UpdateAnim__ + 83) & 2) != 0 )
                v127 = (_QWORD *)sub_1C32C38(Method_QuestAfterAction_StateMain_UpdateAnim__);
              v128 = (System_Reflection_MethodBase_o *)sub_1C32C04(v127, v127[4]);
              OverwriteAssetSoundName__PlaySe(v128, param, 0, 0);
              goto LABEL_18;
            case 850:
              if ( !SoundManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
              SoundManager__stopBgm(0);
              if ( !*v9 )
                goto LABEL_1104;
              (*v9)->fields.isRequestedStopBgm = 1;
              goto LABEL_18;
            case 851:
              if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
              if ( !byte_4C319B6 )
              {
                sub_1C32C20(&TerminalSceneComponent_TypeInfo);
                byte_4C319B6 = 1;
              }
              v52 = TerminalSceneComponent_TypeInfo;
              if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
                v52 = TerminalSceneComponent_TypeInfo;
              }
              mInstance = v52->static_fields->mInstance;
              updated = (__int64)QuestAfterAction_Command__GetBgmName(v14, v18);
              if ( !mInstance )
                goto LABEL_1104;
              TerminalSceneComponent__playBgm(mInstance, (System_String_o *)updated, 0, 0);
              if ( !*v9 )
                goto LABEL_1104;
              (*v9)->fields.isRequestedStopBgm = 0;
              goto LABEL_18;
          }
          return;
        }
        switch ( id )
        {
          case 900:
            v96 = (float)System_Int32__Parse(v14->fields.param, 0) / 1000.0;
            if ( v96 <= 0.0 )
              goto LABEL_18;
            this->fields.waitTime = v96;
            this->fields.waitStartTime = UnityEngine_Time__get_realtimeSinceStartup(0);
            return;
          case 1100:
            v97 = sub_1C32E6C(QuestAfterAction_StateMain___c__DisplayClass16_17_TypeInfo);
            QuestAfterAction_StateMain___c__DisplayClass16_17___ctor(
              (QuestAfterAction_StateMain___c__DisplayClass16_17_o *)v97,
              0);
            if ( !v97 )
              goto LABEL_1104;
            *(_QWORD *)(v97 + 24) = v5;
            sub_1C32BC4((CGThumbnailListItem_o *)(v97 + 24), v5, v98, v99);
            updated = (__int64)v14->fields.param;
            if ( !updated )
              goto LABEL_1104;
            updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0);
            if ( !updated )
              goto LABEL_1104;
            v100 = updated;
            if ( *(_DWORD *)(updated + 24) )
            {
              updated = System_Int32__Parse(*(System_String_o **)(updated + 32), 0);
              if ( *(_DWORD *)(v100 + 24) > 1u )
              {
                v101 = updated;
                v102 = System_Int32__Parse(*(System_String_o **)(v100 + 40), 0);
                if ( !BgmManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
                if ( !byte_4C32815 )
                {
                  sub_1C32C20(&BgmManager_TypeInfo);
                  byte_4C32815 = 1;
                }
                v103 = BgmManager_TypeInfo;
                if ( !BgmManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
                  v103 = BgmManager_TypeInfo;
                }
                v104 = -1.0;
                masterVolume = v103->static_fields->masterVolume;
                *(float *)(v97 + 20) = masterVolume;
                if ( *(int *)(v100 + 24) >= 3 )
                {
                  v104 = System_Single__Parse(*(System_String_o **)(v100 + 48), 0);
                  masterVolume = *(float *)(v97 + 20);
                }
                v106 = v104 * masterVolume;
                *(float *)(v97 + 16) = v106;
                if ( v106 > -1.0 )
                {
                  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
                  if ( !byte_4C319B6 )
                  {
                    sub_1C32C20(&TerminalSceneComponent_TypeInfo);
                    byte_4C319B6 = 1;
                  }
                  updated = (__int64)TerminalSceneComponent_TypeInfo;
                  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
                    updated = (__int64)TerminalSceneComponent_TypeInfo;
                  }
                  v107 = **(_QWORD **)(updated + 184);
                  if ( !v107 )
                    goto LABEL_1104;
                  v108 = *(ScrTerminalListTop_o **)(v107 + 256);
                  v109 = *(float *)(v97 + 16);
                  v110 = *(float *)(v97 + 20);
                  updated = (__int64)QuestAfterAction_TypeInfo;
                  if ( !QuestAfterAction_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(QuestAfterAction_TypeInfo);
                  if ( !v108 )
                    goto LABEL_1104;
                  ScrTerminalListTop__StartEasingBgmMasterVolume(
                    v108,
                    v110,
                    v109,
                    QuestAfterAction_TypeInfo->static_fields->EventAnimationAfterBgmResetTime,
                    2,
                    0,
                    0);
                }
                if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
                if ( !byte_4C319B6 )
                {
                  sub_1C32C20(&TerminalSceneComponent_TypeInfo);
                  byte_4C319B6 = 1;
                }
                updated = (__int64)TerminalSceneComponent_TypeInfo;
                if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
                  updated = (__int64)TerminalSceneComponent_TypeInfo;
                }
                v111 = **(_QWORD **)(updated + 184);
                if ( !v111 )
                  goto LABEL_1104;
                v112 = *(ScrTerminalListTop_o **)(v111 + 256);
                v113 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
                System_Action___ctor(
                  v113,
                  (Il2CppObject *)v97,
                  Method_QuestAfterAction_StateMain___c__DisplayClass16_17__UpdateAnim_b__34__,
                  0);
                if ( !v112 )
                  goto LABEL_1104;
                ScrTerminalListTop__StartEventEffect(v112, v101, v102, v113, 0, 0);
                return;
              }
            }
            break;
          case 1200:
            updated = (__int64)v14->fields.param;
            if ( !updated )
              goto LABEL_1104;
            updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0);
            if ( !updated )
              goto LABEL_1104;
            v20 = updated;
            if ( *(_DWORD *)(updated + 24) )
            {
              updated = System_Int32__Parse(*(System_String_o **)(updated + 32), 0);
              if ( *(_DWORD *)(v20 + 24) > 1u )
              {
                v21 = updated;
                v22 = System_Int32__Parse(*(System_String_o **)(v20 + 40), 0);
                if ( v21 == 2 )
                {
                  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
                  if ( !byte_4C319B6 )
                  {
                    sub_1C32C20(&TerminalSceneComponent_TypeInfo);
                    byte_4C319B6 = 1;
                  }
                  updated = (__int64)TerminalSceneComponent_TypeInfo;
                  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
                    updated = (__int64)TerminalSceneComponent_TypeInfo;
                  }
                  v403 = **(_QWORD **)(updated + 184);
                  if ( !v403 )
                    goto LABEL_1104;
                  updated = *(_QWORD *)(v403 + 256);
                  if ( !updated )
                    goto LABEL_1104;
                  v24 = 1;
                  v26 = v22;
                }
                else
                {
                  if ( v21 != 1 )
                  {
                    if ( v21 )
                      goto LABEL_18;
                    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
                    if ( !byte_4C319B6 )
                    {
                      sub_1C32C20(&TerminalSceneComponent_TypeInfo);
                      byte_4C319B6 = 1;
                    }
                    updated = (__int64)TerminalSceneComponent_TypeInfo;
                    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
                      updated = (__int64)TerminalSceneComponent_TypeInfo;
                    }
                    v23 = **(_QWORD **)(updated + 184);
                    if ( !v23 )
                      goto LABEL_1104;
                    updated = *(_QWORD *)(v23 + 256);
                    if ( !updated )
                      goto LABEL_1104;
                    v24 = 1;
                    v25 = 1;
                    v26 = v22;
LABEL_733:
                    ScrTerminalListTop__SetQuestStateForEventEffect((ScrTerminalListTop_o *)updated, v26, v24, v25, 0);
                    goto LABEL_18;
                  }
                  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
                  if ( !byte_4C319B6 )
                  {
                    sub_1C32C20(&TerminalSceneComponent_TypeInfo);
                    byte_4C319B6 = 1;
                  }
                  updated = (__int64)TerminalSceneComponent_TypeInfo;
                  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
                    updated = (__int64)TerminalSceneComponent_TypeInfo;
                  }
                  v404 = **(_QWORD **)(updated + 184);
                  if ( !v404 )
                    goto LABEL_1104;
                  updated = *(_QWORD *)(v404 + 256);
                  if ( !updated )
                    goto LABEL_1104;
                  v26 = v22;
                  v24 = 0;
                }
                v25 = 0;
                goto LABEL_733;
              }
            }
            break;
          default:
            return;
        }
        goto LABEL_1105;
      }
      if ( id > 560 )
      {
        switch ( id )
        {
          case 600:
            v91 = (System_String_o *)StringLiteral_1/*""*/;
            v92 = System_String__Concat_63518544((System_String_o *)StringLiteral_10820/*"QUEST_AFTER_ACTION_MESSAGE_"*/, v14->fields.param, 0);
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v93 = LocalizationManager__Get(v92, 0);
            Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            v95 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
            System_Action___ctor(
              v95,
              (Il2CppObject *)v5,
              Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__29__,
              0);
            if ( !Instance )
              goto LABEL_1104;
            CommonUI__OpenNotificationDialog(
              (CommonUI_o *)Instance,
              v91,
              v93,
              v95,
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
            v210 = StringLiteral_1/*""*/;
            updated = sub_1C32CC8(string___TypeInfo, 1);
            if ( !updated )
              goto LABEL_1104;
            v213 = (System_String_array *)updated;
            if ( !*(_DWORD *)(updated + 24) )
              goto LABEL_1105;
            v214 = StringLiteral_87/*"\r\n"*/;
            *(_QWORD *)(updated + 32) = StringLiteral_87/*"\r\n"*/;
            sub_1C32BC4((CGThumbnailListItem_o *)(updated + 32), v214, v211, v212);
            updated = (__int64)v14->fields.param;
            if ( !updated )
              goto LABEL_1104;
            updated = (__int64)System_String__Split_63571576((System_String_o *)updated, v213, 0, 0);
            if ( !updated )
              goto LABEL_1104;
            v215 = *(_DWORD *)(updated + 24);
            if ( v215 <= 0 )
              goto LABEL_999;
            v216 = *(System_String_o **)(updated + 32);
            if ( v215 == 1 )
            {
              v217 = *(System_String_o **)(updated + 32);
              v216 = (System_String_o *)v210;
            }
            else
            {
              v217 = *(System_String_o **)(updated + 40);
            }
            v474 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            v475 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
            System_Action___ctor(
              v475,
              (Il2CppObject *)v5,
              Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__30__,
              0);
            if ( !v474 )
              goto LABEL_1104;
            CommonUI__OpenNotificationDialog(
              (CommonUI_o *)v474,
              v216,
              v217,
              v475,
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
            v218 = (System_String_o *)StringLiteral_1/*""*/;
            v219 = System_String__Concat_63518544((System_String_o *)StringLiteral_10820/*"QUEST_AFTER_ACTION_MESSAGE_"*/, v14->fields.param, 0);
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v220 = LocalizationManager__Get(v219, 0);
            v221 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            v222 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
            System_Action___ctor(
              v222,
              (Il2CppObject *)v5,
              Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__31__,
              0);
            if ( !v221 )
              goto LABEL_1104;
            onClickOkSeKind = 0;
            goto LABEL_876;
          case 603:
            v223 = StringLiteral_1/*""*/;
            updated = sub_1C32CC8(string___TypeInfo, 1);
            if ( !updated )
              goto LABEL_1104;
            v226 = (System_String_array *)updated;
            if ( !*(_DWORD *)(updated + 24) )
              goto LABEL_1105;
            v227 = StringLiteral_87/*"\r\n"*/;
            *(_QWORD *)(updated + 32) = StringLiteral_87/*"\r\n"*/;
            sub_1C32BC4((CGThumbnailListItem_o *)(updated + 32), v227, v224, v225);
            updated = (__int64)v14->fields.param;
            if ( !updated )
              goto LABEL_1104;
            updated = (__int64)System_String__Split_63571576((System_String_o *)updated, v226, 0, 0);
            if ( !updated )
              goto LABEL_1104;
            v228 = *(_DWORD *)(updated + 24);
            if ( v228 <= 0 )
              goto LABEL_999;
            v218 = *(System_String_o **)(updated + 32);
            if ( v228 == 1 )
            {
              v220 = *(System_String_o **)(updated + 32);
              v218 = (System_String_o *)v223;
            }
            else
            {
              v220 = *(System_String_o **)(updated + 40);
            }
            v221 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            v222 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
            System_Action___ctor(
              v222,
              (Il2CppObject *)v5,
              Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__32__,
              0);
            if ( !v221 )
              goto LABEL_1104;
            onClickOkSeKind = 1;
LABEL_876:
            CommonUI__OpenNotificationDialog_31191784(
              (CommonUI_o *)v221,
              v218,
              v220,
              v222,
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
            v229 = (System_String_o *)StringLiteral_1/*""*/;
            v230 = System_String__Concat_63518544((System_String_o *)StringLiteral_10820/*"QUEST_AFTER_ACTION_MESSAGE_"*/, v14->fields.param, 0);
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v231 = LocalizationManager__Get(v230, 0);
            v232 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            v233 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
            System_Action___ctor(
              v233,
              (Il2CppObject *)v5,
              Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__33__,
              0);
            if ( !v232 )
              goto LABEL_1104;
            CommonUI__OpenNotificationDialog_31191784(
              (CommonUI_o *)v232,
              v229,
              v231,
              v233,
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
                updated = (__int64)v14->fields.param;
                if ( !updated )
                  goto LABEL_1104;
                updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0);
                if ( !updated )
                  goto LABEL_1104;
                v46 = updated;
                if ( !*(_DWORD *)(updated + 24) )
                  goto LABEL_1105;
                v47 = System_Int32__Parse(*(System_String_o **)(updated + 32), 0);
                if ( *(int *)(v46 + 24) >= 2 )
                  v48 = System_Int32__Parse(*(System_String_o **)(v46 + 40), 0) + 1;
                else
                  v48 = 0;
                v471 = (SceneJumpInfo_o *)sub_1C32E6C(SceneJumpInfo_TypeInfo);
                SceneJumpInfo___ctor_41379700(v471, (System_String_o *)StringLiteral_1/*""*/, v47, v48, 0);
                updated = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
                if ( !updated )
                  goto LABEL_1104;
                v469 = 72;
                v470 = (Il2CppObject *)v471;
                goto LABEL_998;
              case 701:
                if ( !System_String__op_Equality(v14->fields.param, (System_String_o *)StringLiteral_1122/*"0"*/, 0) )
                  goto LABEL_18;
                if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                if ( !byte_4C34572 )
                {
                  sub_1C32C20(&TerminalPramsManager_TypeInfo);
                  byte_4C34572 = 1;
                }
                v192 = TerminalPramsManager_TypeInfo;
                if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                  v192 = TerminalPramsManager_TypeInfo;
                }
                v192->static_fields->_IsTransOrdealCall_k__BackingField = 1;
                goto LABEL_868;
              case 702:
                updated = (__int64)v14->fields.param;
                if ( !updated )
                  goto LABEL_1104;
                updated = (__int64)System_String__Split_63570436(
                                     (System_String_o *)updated,
                                     (System_String_o *)StringLiteral_811/*","*/,
                                     0,
                                     0);
                if ( !updated )
                  goto LABEL_1104;
                v193 = *(_QWORD *)(updated + 24);
                v194 = updated;
                if ( !v193 )
                  goto LABEL_853;
                if ( !(_DWORD)v193 )
                  goto LABEL_1105;
                if ( System_Int32__Parse(*(System_String_o **)(updated + 32), 0) > 0 )
                  goto LABEL_18;
                if ( *(int *)(v194 + 24) < 2 )
LABEL_853:
                  v195 = 0;
                else
                  v195 = System_Int32__Parse(*(System_String_o **)(v194 + 40), 0);
                if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                TerminalPramsManager__SetAutoResumeForFolder(v195, 0);
                if ( !byte_4C344B0 )
                {
                  sub_1C32C20(&TerminalPramsManager_TypeInfo);
                  byte_4C344B0 = 1;
                }
                v472 = TerminalPramsManager_TypeInfo;
                if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                  v472 = TerminalPramsManager_TypeInfo;
                }
                if ( v472->static_fields->_DispState_k__BackingField == 3 )
                {
                  if ( !v472->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(v472);
                  if ( !byte_4C34573 )
                  {
                    sub_1C32C20(&TerminalPramsManager_TypeInfo);
                    byte_4C34573 = 1;
                  }
                  v473 = TerminalPramsManager_TypeInfo;
                  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                    v473 = TerminalPramsManager_TypeInfo;
                  }
                  v473->static_fields->_IsMoveFolderByQuestAfterAction_k__BackingField = 1;
                }
LABEL_868:
                updated = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
                if ( !updated )
                  goto LABEL_1104;
                AvalonSceneManager__transitionSceneRefresh((AvalonSceneManager_o *)updated, 34, 1, 0, 0, 0);
                goto LABEL_999;
              case 703:
                updated = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
                if ( !updated )
                  goto LABEL_1104;
                *(_BYTE *)(updated + 195) = 0;
                updated = (__int64)v14->fields.param;
                if ( !updated )
                  goto LABEL_1104;
                updated = (__int64)System_String__Split_63570436(
                                     (System_String_o *)updated,
                                     (System_String_o *)StringLiteral_811/*","*/,
                                     0,
                                     0);
                if ( !updated )
                  goto LABEL_1104;
                v196 = *(_QWORD *)(updated + 24);
                v197 = updated;
                if ( !v196 )
                  goto LABEL_848;
                if ( !(_DWORD)v196 )
                  goto LABEL_1105;
                v198 = System_Int32__Parse(*(System_String_o **)(updated + 32), 0);
                if ( v198 < 1 )
                {
LABEL_848:
                  updated = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
                  if ( !updated )
                    goto LABEL_1104;
                  v469 = 91;
                  v470 = 0;
                  goto LABEL_998;
                }
                v199 = v198;
                if ( *(int *)(v197 + 24) > 1 )
                {
                  v547 = System_Int32__Parse(*(System_String_o **)(v197 + 40), 0);
                  v200 = (System_String_o *)StringLiteral_1/*""*/;
                  if ( v547 >= 1 )
                  {
                    v548 = 1;
                    goto LABEL_996;
                  }
                }
                else
                {
                  v200 = (System_String_o *)StringLiteral_1/*""*/;
                }
                v548 = 0;
LABEL_996:
                v549 = (SceneJumpInfo_o *)sub_1C32E6C(SceneJumpInfo_TypeInfo);
                SceneJumpInfo___ctor_41379700(v549, v200, v199, v548, 0);
                updated = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
                if ( !updated )
                  goto LABEL_1104;
                v469 = 91;
                v470 = (Il2CppObject *)v549;
LABEL_998:
                AvalonSceneManager__transitionScene((AvalonSceneManager_o *)updated, v469, 1, v470, 0);
                goto LABEL_999;
              default:
                if ( id != 800 )
                  return;
                v145 = *v9;
                if ( !*v9 )
                  goto LABEL_1104;
                updated = (__int64)v145->fields.svtVoices;
                if ( !updated )
                  goto LABEL_1104;
                if ( !System_Collections_Generic_Dictionary_int__object___TryGetValue(
                        (System_Collections_Generic_Dictionary_int__object__o *)updated,
                        v145->fields.commandIdx,
                        &value,
                        (const MethodInfo_33F14A8 *)Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__TryGetValue__) )
                  goto LABEL_999;
                updated = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
                if ( !updated )
                  goto LABEL_1104;
                AutomatedAction__TerminateMissionAction((AutomatedAction_o *)updated, 0);
                if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
                if ( !byte_4C319B6 )
                {
                  sub_1C32C20(&TerminalSceneComponent_TypeInfo);
                  byte_4C319B6 = 1;
                }
                updated = (__int64)TerminalSceneComponent_TypeInfo;
                if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
                  updated = (__int64)TerminalSceneComponent_TypeInfo;
                }
                v146 = **(_QWORD **)(updated + 184);
                if ( !v146 )
                  goto LABEL_1104;
                if ( !*(_QWORD *)(v146 + 464) )
                  goto LABEL_273;
                if ( !*(_DWORD *)(updated + 224) )
                  j_il2cpp_runtime_class_init_0(updated);
                if ( !byte_4C319B6 )
                {
                  sub_1C32C20(&TerminalSceneComponent_TypeInfo);
                  byte_4C319B6 = 1;
                }
                updated = (__int64)TerminalSceneComponent_TypeInfo;
                if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
                  updated = (__int64)TerminalSceneComponent_TypeInfo;
                }
                v147 = **(_QWORD **)(updated + 184);
                if ( !v147 )
                  goto LABEL_1104;
                v148 = *(_QWORD *)(v147 + 464);
                if ( !v148 )
                  goto LABEL_1104;
                updated = *(unsigned int *)(v148 + 48);
                if ( (_DWORD)updated )
                  goto LABEL_275;
LABEL_273:
                if ( !value )
                  goto LABEL_1104;
                updated = LODWORD(value[1].klass);
LABEL_275:
                if ( (int)updated < 1 )
                {
                  if ( !value )
                    goto LABEL_1104;
                  monitor = (System_String_o *)value[1].monitor;
                  if ( !SoundManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
                  SoundManager__playVoice(monitor, 0, 0);
                }
                else
                {
                  updated = (__int64)ServantVoiceEntity__getVoiceAssetName_42693484(updated, 0);
                  if ( !value )
                    goto LABEL_1104;
                  v149 = (System_String_o *)updated;
                  v150 = (System_String_o *)value[1].monitor;
                  v151 = SeManager_TypeInfo;
                  if ( !SeManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
                    v151 = SeManager_TypeInfo;
                  }
                  DEFAULT_VOLUME = v151->static_fields->DEFAULT_VOLUME;
                  if ( !SoundManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
                  SoundManager__playVoice_41418932(v149, v150, DEFAULT_VOLUME, 0, 0, 0);
                }
                break;
            }
            break;
        }
        goto LABEL_999;
      }
      if ( id != 540 )
      {
        if ( id == 550 )
          goto LABEL_18;
        if ( id != 560 )
          return;
        updated = (__int64)v14->fields.param;
        if ( !updated )
          goto LABEL_1104;
        updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0);
        if ( !updated )
          goto LABEL_1104;
        v63 = *(_QWORD *)(updated + 24);
        v64 = updated;
        if ( v63 )
        {
          if ( !(_DWORD)v63 )
            goto LABEL_1105;
          v65 = System_Int32__Parse(*(System_String_o **)(updated + 32), 0) > 0;
        }
        else
        {
          v65 = 0;
        }
        v186 = sub_1C32E6C(QuestAfterAction_TitleInfoControlParam_TypeInfo);
        System_Object___ctor((Il2CppObject *)v186, 0);
        if ( *(int *)(v64 + 24) >= 2 )
        {
          updated = System_Int32__Parse(*(System_String_o **)(v64 + 40), 0);
          if ( (int)updated >= 1 )
          {
            if ( *(_DWORD *)(v64 + 24) <= 1u )
              goto LABEL_1105;
            updated = System_Int32__Parse(*(System_String_o **)(v64 + 40), 0);
            if ( !v186 )
              goto LABEL_1104;
            *(_DWORD *)(v186 + 16) = updated;
          }
        }
        if ( *(int *)(v64 + 24) > 2 )
        {
          updated = System_Int32__Parse(*(System_String_o **)(v64 + 48), 0);
          if ( (int)updated >= 1 )
          {
            if ( *(_DWORD *)(v64 + 24) <= 2u )
              goto LABEL_1105;
            updated = System_Int32__Parse(*(System_String_o **)(v64 + 48), 0);
            if ( !v186 )
              goto LABEL_1104;
            *(_DWORD *)(v186 + 20) = updated;
          }
        }
        v188 = *v9;
        if ( !*v9 )
          goto LABEL_1104;
        TitleInfoCtrlCallback_k__BackingField = v188->fields._TitleInfoCtrlCallback_k__BackingField;
        if ( v65 )
        {
          if ( !TitleInfoCtrlCallback_k__BackingField )
            goto LABEL_1104;
          QuestAfterAction_TitleInfoControlCallback__Start(
            v188->fields._TitleInfoCtrlCallback_k__BackingField,
            (QuestAfterAction_TitleInfoControlParam_o *)v186,
            0,
            v187);
          goto LABEL_18;
        }
        v190 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
        System_Action___ctor(v190, (Il2CppObject *)this, (intptr_t)this->klass->vtable._14_EndAnim.method, 0);
        if ( !TitleInfoCtrlCallback_k__BackingField )
          goto LABEL_1104;
        QuestAfterAction_TitleInfoControlCallback__Start(
          TitleInfoCtrlCallback_k__BackingField,
          (QuestAfterAction_TitleInfoControlParam_o *)v186,
          v190,
          v191);
        return;
      }
      updated = (__int64)v14->fields.param;
      if ( !updated )
        goto LABEL_1104;
      updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0);
      if ( !updated )
        goto LABEL_1104;
      v129 = updated;
      if ( !*(_DWORD *)(updated + 24) )
LABEL_1105:
        sub_1C32E84(updated);
      v130 = System_Int32__Parse(*(System_String_o **)(updated + 32), 0);
      if ( *(int *)(v129 + 24) < 2 )
      {
        v131 = -1;
      }
      else
      {
        v131 = System_Int32__Parse(*(System_String_o **)(v129 + 40), 0);
        if ( *(int *)(v129 + 24) >= 3 )
        {
          v132 = System_Int32__Parse(*(System_String_o **)(v129 + 48), 0);
LABEL_363:
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          if ( !byte_4C3219C )
          {
            sub_1C32C20(&TerminalPramsManager_TypeInfo);
            byte_4C3219C = 1;
          }
          v182 = TerminalPramsManager_TypeInfo;
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            v182 = TerminalPramsManager_TypeInfo;
          }
          v182->static_fields->_IsAutoResume_k__BackingField = 1;
          if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          if ( !byte_4C319B6 )
          {
            sub_1C32C20(&TerminalSceneComponent_TypeInfo);
            byte_4C319B6 = 1;
          }
          updated = (__int64)TerminalSceneComponent_TypeInfo;
          if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            updated = (__int64)TerminalSceneComponent_TypeInfo;
          }
          v183 = **(_QWORD **)(updated + 184);
          if ( !v183 )
            goto LABEL_1104;
          updated = *(_QWORD *)(v183 + 264);
          if ( !updated )
            goto LABEL_1104;
          if ( !ScrTerminalMap__RequestMapChange((ScrTerminalMap_o *)updated, v130, v131, v132, 0) )
          {
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            if ( !byte_4C3219C )
            {
              sub_1C32C20(&TerminalPramsManager_TypeInfo);
              byte_4C3219C = 1;
            }
            v185 = TerminalPramsManager_TypeInfo;
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
              v185 = TerminalPramsManager_TypeInfo;
            }
            v185->static_fields->_IsAutoResume_k__BackingField = 0;
            goto LABEL_18;
          }
          ((void (__fastcall *)(QuestAfterAction_StateMain_o *, const MethodInfo *))this->klass->vtable._14_EndAnim.methodPtr)(
            this,
            this->klass->vtable._14_EndAnim.method);
          updated = (__int64)*v9;
          if ( !*v9 )
            goto LABEL_1104;
          QuestAfterAction__SetState((QuestAfterAction_o *)updated, 0, v184);
          return;
        }
      }
      v132 = -1;
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
            DEFAULT_FADE_TIME = System_Single__Parse(v14->fields.param, 0);
            if ( DEFAULT_FADE_TIME <= 0.0 )
            {
              v119 = AvalonSceneManager_TypeInfo;
              if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
                v119 = AvalonSceneManager_TypeInfo;
              }
              DEFAULT_FADE_TIME = v119->static_fields->DEFAULT_FADE_TIME;
            }
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            if ( !byte_4C319B6 )
            {
              sub_1C32C20(&TerminalSceneComponent_TypeInfo);
              byte_4C319B6 = 1;
            }
            v120 = TerminalSceneComponent_TypeInfo;
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
              v120 = TerminalSceneComponent_TypeInfo;
            }
            v121 = v120->static_fields->mInstance;
            v122 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
            System_Action___ctor(
              v122,
              (Il2CppObject *)v5,
              Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__23__,
              0);
            if ( !v121 )
              goto LABEL_1104;
            v123 = v121;
            v124 = DEFAULT_FADE_TIME;
            v125 = v122;
LABEL_202:
            TerminalSceneComponent__Fadein_MapDisp(v123, v124, v125, 0);
          }
          else if ( id == 530 )
          {
            v27 = sub_1C32E6C(QuestAfterAction_StateMain___c__DisplayClass16_16_TypeInfo);
            QuestAfterAction_StateMain___c__DisplayClass16_16___ctor(
              (QuestAfterAction_StateMain___c__DisplayClass16_16_o *)v27,
              0);
            if ( !v27 )
              goto LABEL_1104;
            *(_QWORD *)(v27 + 32) = v5;
            v30 = v27 + 32;
            sub_1C32BC4((CGThumbnailListItem_o *)(v27 + 32), v5, v28, v29);
            v31 = System_Int32__Parse(v14->fields.param, 0);
            updated = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( !updated )
              goto LABEL_1104;
            updated = (__int64)DataManager__GetMasterData_object_(
                                 (DataManager_o *)updated,
                                 (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_QuestMaster___);
            if ( !updated )
              goto LABEL_1104;
            v32 = DataMasterBase_object__object__int___GetEntity(
                    (DataMasterBase_TMaster__TEntity__PKType__o *)updated,
                    v31,
                    (const MethodInfo_3396838 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
            *(_QWORD *)(v27 + 16) = v32;
            v33 = (__int64 *)(v27 + 16);
            sub_1C32BC4((CGThumbnailListItem_o *)(v27 + 16), (int32_t)v32, v34, v35);
            updated = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_39E2DF4 *)Method_SingletonTemplate_QuestTree__get_Instance__);
            if ( !updated )
              goto LABEL_1104;
            QuestInfo = QuestTree__GetQuestInfo((QuestTree_o *)updated, v31, 0);
            *(_QWORD *)(v27 + 24) = QuestInfo;
            v37 = v27 + 24;
            sub_1C32BC4((CGThumbnailListItem_o *)(v27 + 24), (int32_t)QuestInfo, v38, v39);
            if ( !*(_QWORD *)(v27 + 24) )
              goto LABEL_1104;
            if ( *(_DWORD *)(*(_QWORD *)(v27 + 24) + 32LL) == 1 )
            {
              updated = *v33;
              if ( !*v33 )
                goto LABEL_1104;
              if ( QuestEntity__HasFlag((QuestEntity_o *)updated, 2, 0) )
              {
                if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                if ( !byte_4C342AC )
                {
                  sub_1C32C20(&TerminalPramsManager_TypeInfo);
                  byte_4C342AC = 1;
                }
                updated = (__int64)TerminalPramsManager_TypeInfo;
                if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                  updated = (__int64)TerminalPramsManager_TypeInfo;
                }
                *(_DWORD *)(*(_QWORD *)(updated + 184) + 20LL) = v31;
                if ( !*(_QWORD *)v37 )
                  goto LABEL_1104;
                v41 = *(_DWORD *)(*(_QWORD *)v37 + 44LL);
                if ( !byte_4C342B0 )
                {
                  sub_1C32C20(&TerminalPramsManager_TypeInfo);
                  updated = (__int64)TerminalPramsManager_TypeInfo;
                  byte_4C342B0 = 1;
                }
                if ( !*(_DWORD *)(updated + 224) )
                {
                  j_il2cpp_runtime_class_init_0(updated);
                  updated = (__int64)TerminalPramsManager_TypeInfo;
                }
                *(_DWORD *)(*(_QWORD *)(updated + 184) + 24LL) = v41;
                if ( !*(_QWORD *)v30 )
                  goto LABEL_1104;
                v42 = *(_QWORD *)(*(_QWORD *)v30 + 24LL);
                if ( !v42 )
                  goto LABEL_1104;
                *(_BYTE *)(v42 + 196) = 1;
                v43 = (NetworkManager_ResultCallbackFunc_o *)sub_1C32E6C(NetworkManager_ResultCallbackFunc_TypeInfo);
                NetworkManager_ResultCallbackFunc___ctor(
                  v43,
                  (Il2CppObject *)v27,
                  Method_QuestAfterAction_StateMain___c__DisplayClass16_16__UpdateAnim_b__24__,
                  0);
                if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                Request_object = NetworkManager__getRequest_object_(
                                   v43,
                                   (const MethodInfo_3168488 *)Method_NetworkManager_getRequest_BattleSetupScenarioRequest___);
                if ( !byte_4C31A97 )
                {
                  sub_1C32C20(&TerminalPramsManager_TypeInfo);
                  byte_4C31A97 = 1;
                }
                updated = (__int64)TerminalPramsManager_TypeInfo;
                if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                  updated = (__int64)TerminalPramsManager_TypeInfo;
                }
                v45 = *(_DWORD *)(*(_QWORD *)(updated + 184) + 20LL);
                if ( !byte_4C31A96 )
                {
                  sub_1C32C20(&TerminalPramsManager_TypeInfo);
                  updated = (__int64)TerminalPramsManager_TypeInfo;
                  byte_4C31A96 = 1;
                }
                if ( !*(_DWORD *)(updated + 224) )
                {
                  j_il2cpp_runtime_class_init_0(updated);
                  updated = (__int64)TerminalPramsManager_TypeInfo;
                }
                if ( !Request_object )
                  goto LABEL_1104;
                BattleSetupScenarioRequest__beginRequest(
                  (BattleSetupScenarioRequest_o *)Request_object,
                  v45,
                  *(_DWORD *)(*(_QWORD *)(updated + 184) + 24LL) + 1,
                  0);
              }
            }
            else
            {
              QuestAfterAction_StateMain__ForceEndAnim(this, 1, v40);
            }
          }
          return;
        }
        updated = (__int64)v14->fields.param;
        if ( !updated )
          goto LABEL_1104;
        updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0);
        if ( !updated )
          goto LABEL_1104;
        v114 = updated;
        if ( *(_DWORD *)(updated + 24) )
        {
          v115 = System_Int32__Parse(*(System_String_o **)(updated + 32), 0);
          v116 = 0.5;
          if ( *(int *)(v114 + 24) >= 2 )
          {
            v117 = System_Int32__Parse(*(System_String_o **)(v114 + 40), 0);
            if ( *(int *)(v114 + 24) >= 3 )
              v116 = System_Single__Parse(*(System_String_o **)(v114 + 48), 0);
          }
          else
          {
            v117 = v115;
            v115 = -1;
          }
          updated = (__int64)*v9;
          if ( !*v9 )
            goto LABEL_1104;
          MapComponent_object = QuestAfterAction__GetMapComponent_object_(
                                  (QuestAfterAction_o *)updated,
                                  0,
                                  v117,
                                  this,
                                  (const MethodInfo_3175FFC *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)MapComponent_object, 0, 0) )
          {
            if ( v115 >= 1 )
            {
              updated = (__int64)*v9;
              if ( !*v9 )
                goto LABEL_1104;
              v175 = QuestAfterAction__GetMapComponent_object_(
                       (QuestAfterAction_o *)updated,
                       0,
                       v115,
                       this,
                       (const MethodInfo_3175FFC *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v175, 0, 0) )
              {
                if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
                if ( !byte_4C319B6 )
                {
                  sub_1C32C20(&TerminalSceneComponent_TypeInfo);
                  byte_4C319B6 = 1;
                }
                updated = (__int64)TerminalSceneComponent_TypeInfo;
                if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
                  updated = (__int64)TerminalSceneComponent_TypeInfo;
                }
                v176 = **(_QWORD **)(updated + 184);
                if ( !v176 )
                  goto LABEL_1104;
                if ( !v175 )
                  goto LABEL_1104;
                v177 = *(ScrTerminalMap_o **)(v176 + 264);
                updated = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v175, 0);
                if ( !v177 )
                  goto LABEL_1104;
                ScrTerminalMap__SetPlayerIcon(v177, (UnityEngine_GameObject_o *)updated, 0);
              }
            }
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            if ( !byte_4C319B6 )
            {
              sub_1C32C20(&TerminalSceneComponent_TypeInfo);
              byte_4C319B6 = 1;
            }
            updated = (__int64)TerminalSceneComponent_TypeInfo;
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
              updated = (__int64)TerminalSceneComponent_TypeInfo;
            }
            v178 = **(_QWORD **)(updated + 184);
            if ( !v178 )
              goto LABEL_1104;
            if ( !MapComponent_object )
              goto LABEL_1104;
            v179 = *(ScrTerminalMap_o **)(v178 + 264);
            gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)MapComponent_object, 0);
            v181 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
            System_Action___ctor(v181, (Il2CppObject *)this, (intptr_t)this->klass->vtable._14_EndAnim.method, 0);
            if ( !v179 )
              goto LABEL_1104;
            ScrTerminalMap__MovePlayerIcon(v179, gameObject, v117, v181, v116, 0);
          }
          return;
        }
        goto LABEL_1105;
      }
      switch ( id )
      {
        case 400:
          v54 = sub_1C32E6C(QuestAfterAction_StateMain___c__DisplayClass16_10_TypeInfo);
          QuestAfterAction_StateMain___c__DisplayClass16_10___ctor(
            (QuestAfterAction_StateMain___c__DisplayClass16_10_o *)v54,
            0);
          if ( !v54 )
            goto LABEL_1104;
          *(_QWORD *)(v54 + 24) = v5;
          v57 = v54 + 24;
          sub_1C32BC4((CGThumbnailListItem_o *)(v54 + 24), v5, v55, v56);
          updated = (__int64)v14->fields.param;
          if ( !updated )
            goto LABEL_1104;
          updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0);
          if ( !updated )
            goto LABEL_1104;
          v58 = *(_QWORD *)(updated + 24);
          v59 = updated;
          if ( v58 )
          {
            if ( !(_DWORD)v58 )
              goto LABEL_1105;
            updated = System_Int32__Parse(*(System_String_o **)(updated + 32), 0);
            v60 = updated;
            if ( *(int *)(v59 + 24) >= 2 )
            {
              updated = System_Int32__Parse(*(System_String_o **)(v59 + 40), 0);
              v61 = (int)updated < 1;
              if ( *(int *)(v59 + 24) < 3 )
              {
                v62 = 0;
              }
              else
              {
                updated = System_Int32__Parse(*(System_String_o **)(v59 + 48), 0);
                v62 = (int)updated > 0;
              }
              goto LABEL_906;
            }
          }
          else
          {
            v60 = 0;
          }
          v62 = 0;
          v61 = 1;
LABEL_906:
          if ( !*(_QWORD *)v57 )
            goto LABEL_1104;
          updated = *(_QWORD *)(*(_QWORD *)v57 + 24LL);
          if ( !updated )
            goto LABEL_1104;
          v488 = QuestAfterAction__GetMapComponent_object_(
                   (QuestAfterAction_o *)updated,
                   2,
                   v60,
                   this,
                   (const MethodInfo_3175FFC *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
          *(_QWORD *)(v54 + 16) = v488;
          sub_1C32BC4((CGThumbnailListItem_o *)(v54 + 16), (int32_t)v488, v489, v490);
          v491 = *(UnityEngine_Object_o **)(v54 + 16);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          updated = UnityEngine_Object__op_Equality(v491, 0, 0);
          if ( (updated & 1) != 0 )
            return;
          v492 = *(MapGimmickComponent_o **)(v54 + 16);
          if ( !v492 )
            goto LABEL_1104;
          v492->fields.isForceNotActive = v62;
          v493 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
          v494 = v493;
          if ( v61 )
          {
            System_Action___ctor(
              v493,
              (Il2CppObject *)v54,
              Method_QuestAfterAction_StateMain___c__DisplayClass16_10__UpdateAnim_b__14__,
              0);
            v370 = 2;
            v495 = v492;
            v496 = v494;
LABEL_1015:
            MapGimmickComponent__SetState(v495, v370, v496, v369);
            return;
          }
          System_Action___ctor(
            v493,
            (Il2CppObject *)v54,
            Method_QuestAfterAction_StateMain___c__DisplayClass16_10__UpdateAnim_b__13__,
            0);
          MapGimmickComponent__SetState(v492, 2, v494, v561);
          updated = ((__int64 (__fastcall *)(QuestAfterAction_StateMain_o *, const MethodInfo *))this->klass->vtable._14_EndAnim.methodPtr)(
                      this,
                      this->klass->vtable._14_EndAnim.method);
          v562 = *(_QWORD *)(v54 + 24);
          if ( !v562 )
            goto LABEL_1104;
          goto LABEL_1020;
        case 401:
          v300 = sub_1C32E6C(QuestAfterAction_StateMain___c__DisplayClass16_11_TypeInfo);
          QuestAfterAction_StateMain___c__DisplayClass16_11___ctor(
            (QuestAfterAction_StateMain___c__DisplayClass16_11_o *)v300,
            0);
          if ( !v300 )
            goto LABEL_1104;
          *(_QWORD *)(v300 + 24) = v5;
          v303 = v300 + 24;
          sub_1C32BC4((CGThumbnailListItem_o *)(v300 + 24), v5, v301, v302);
          updated = (__int64)v14->fields.param;
          if ( !updated )
            goto LABEL_1104;
          updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0);
          if ( !updated )
            goto LABEL_1104;
          v304 = *(_QWORD *)(updated + 24);
          v305 = updated;
          if ( v304 )
          {
            if ( !(_DWORD)v304 )
              goto LABEL_1105;
            updated = System_Int32__Parse(*(System_String_o **)(updated + 32), 0);
            v306 = updated;
            if ( *(int *)(v305 + 24) >= 2 )
            {
              updated = System_Int32__Parse(*(System_String_o **)(v305 + 40), 0);
              v307 = (int)updated < 1;
              if ( *(int *)(v305 + 24) < 3 )
              {
                v308 = 0;
              }
              else
              {
                updated = System_Int32__Parse(*(System_String_o **)(v305 + 48), 0);
                v308 = (int)updated > 0;
              }
              goto LABEL_916;
            }
          }
          else
          {
            v306 = 0;
          }
          v308 = 0;
          v307 = 1;
LABEL_916:
          if ( !*(_QWORD *)v303 )
            goto LABEL_1104;
          updated = *(_QWORD *)(*(_QWORD *)v303 + 24LL);
          if ( !updated )
            goto LABEL_1104;
          v497 = QuestAfterAction__GetMapComponent_object_(
                   (QuestAfterAction_o *)updated,
                   2,
                   v306,
                   this,
                   (const MethodInfo_3175FFC *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
          *(_QWORD *)(v300 + 16) = v497;
          v498 = (MapGimmickComponent_o **)(v300 + 16);
          sub_1C32BC4((CGThumbnailListItem_o *)(v300 + 16), (int32_t)v497, v499, v500);
          v501 = *(UnityEngine_Object_o **)(v300 + 16);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          updated = UnityEngine_Object__op_Equality(v501, 0, 0);
          if ( (updated & 1) != 0 )
            return;
          v502 = *v498;
          if ( !*v498 )
            goto LABEL_1104;
          v502->fields.isForceLoop = v308;
          v502->fields.isForceNotActive = 0;
          if ( *(int *)(v305 + 24) >= 4 )
          {
            updated = System_Int32__Parse(*(System_String_o **)(v305 + 56), 0);
            if ( !*v498 )
              goto LABEL_1104;
            MapGimmickComponent__SetUseAnimNum(*v498, updated, 1, v503);
            v502 = *v498;
          }
          v504 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
          v353 = v504;
          if ( v307 )
          {
            System_Action___ctor(
              v504,
              (Il2CppObject *)v300,
              Method_QuestAfterAction_StateMain___c__DisplayClass16_11__UpdateAnim_b__16__,
              0);
            if ( !v502 )
              goto LABEL_1104;
            v370 = 3;
            v495 = v502;
LABEL_1014:
            v496 = v353;
            goto LABEL_1015;
          }
          System_Action___ctor(
            v504,
            (Il2CppObject *)v300,
            Method_QuestAfterAction_StateMain___c__DisplayClass16_11__UpdateAnim_b__15__,
            0);
          if ( !v502 )
            goto LABEL_1104;
          MapGimmickComponent__SetState(v502, 3, v353, v563);
          updated = ((__int64 (__fastcall *)(QuestAfterAction_StateMain_o *, const MethodInfo *))this->klass->vtable._14_EndAnim.methodPtr)(
                      this,
                      this->klass->vtable._14_EndAnim.method);
          v562 = *(_QWORD *)v303;
          if ( !*(_QWORD *)v303 )
            goto LABEL_1104;
LABEL_1020:
          ((void (__fastcall *)(QuestAfterAction_StateMain_o *, _QWORD, const MethodInfo *))this->klass->vtable._13_UpdateAnim.methodPtr)(
            this,
            *(_QWORD *)(v562 + 24),
            this->klass->vtable._13_UpdateAnim.method);
          return;
        case 402:
          updated = (__int64)v14->fields.param;
          if ( !updated )
            goto LABEL_1104;
          updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0);
          if ( !updated )
            goto LABEL_1104;
          v309 = *(_QWORD *)(updated + 24);
          v310 = updated;
          if ( v309 )
          {
            if ( !(_DWORD)v309 )
              goto LABEL_1105;
            v311 = System_Int32__Parse(*(System_String_o **)(updated + 32), 0);
            if ( *(int *)(v310 + 24) >= 2 )
            {
              v312 = System_Int32__Parse(*(System_String_o **)(v310 + 40), 0) > 0;
              goto LABEL_879;
            }
          }
          else
          {
            v311 = 0;
          }
          v312 = 0;
LABEL_879:
          updated = (__int64)*v9;
          if ( !*v9 )
            goto LABEL_1104;
          v476 = QuestAfterAction__GetMapComponent_object_(
                   (QuestAfterAction_o *)updated,
                   2,
                   v311,
                   this,
                   (const MethodInfo_3175FFC *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          updated = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v476, 0, 0);
          if ( (updated & 1) == 0 )
          {
            if ( !v476 )
              goto LABEL_1104;
            BYTE1(v476[6].monitor) = v312;
            MapGimmickComponent__SetDispAnim_36104132((MapGimmickComponent_o *)v476, 0, 0.0, 0, v477);
            v427 = v476[7].klass;
            if ( !v427 )
              goto LABEL_1104;
LABEL_961:
            v427[4] = 0;
            goto LABEL_18;
          }
          return;
        case 403:
          updated = (__int64)v14->fields.param;
          if ( !updated )
            goto LABEL_1104;
          updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0);
          if ( !updated )
            goto LABEL_1104;
          v313 = *(_QWORD *)(updated + 24);
          v314 = updated;
          if ( v313 )
          {
            if ( !(_DWORD)v313 )
              goto LABEL_1105;
            v315 = System_Int32__Parse(*(System_String_o **)(updated + 32), 0);
            if ( *(int *)(v314 + 24) >= 2 )
            {
              v316 = System_Int32__Parse(*(System_String_o **)(v314 + 40), 0) > 0;
              goto LABEL_888;
            }
          }
          else
          {
            v315 = 0;
          }
          v316 = 0;
LABEL_888:
          updated = (__int64)*v9;
          if ( !*v9 )
            goto LABEL_1104;
          v478 = QuestAfterAction__GetMapComponent_object_(
                   (QuestAfterAction_o *)updated,
                   2,
                   v315,
                   this,
                   (const MethodInfo_3175FFC *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          updated = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v478, 0, 0);
          if ( (updated & 1) == 0 )
          {
            if ( !v478 )
              goto LABEL_1104;
            LOBYTE(v478[6].monitor) = v316;
            BYTE1(v478[6].monitor) = 0;
            MapGimmickComponent__SetDispAnim_36104132((MapGimmickComponent_o *)v478, 1, 0.0, 0, v479);
            v480 = v478[7].klass;
            if ( !v480 )
              goto LABEL_1104;
            LODWORD(v480->_1.name) = 1;
            goto LABEL_18;
          }
          return;
        case 404:
          updated = (__int64)v14->fields.param;
          if ( !updated )
            goto LABEL_1104;
          updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0);
          if ( !updated )
            goto LABEL_1104;
          v317 = updated;
          if ( *(int *)(updated + 24) <= 4 )
            goto LABEL_999;
          v318 = System_Single__Parse(*(System_String_o **)(updated + 56), 0);
          if ( !*(_DWORD *)(v317 + 24) )
            goto LABEL_1105;
          v319 = *v9;
          v320 = v318;
          updated = System_Int32__Parse(*(System_String_o **)(v317 + 32), 0);
          if ( !v319 )
            goto LABEL_1104;
          v321 = QuestAfterAction__GetMapComponent_object_(
                   v319,
                   2,
                   updated,
                   this,
                   (const MethodInfo_3175FFC *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v321, 0, 0) )
            return;
          v322 = *(int *)(v317 + 24) >= 6 && System_Int32__Parse(*(System_String_o **)(v317 + 72), 0) > 0;
          if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          if ( !byte_4C319B6 )
          {
            sub_1C32C20(&TerminalSceneComponent_TypeInfo);
            byte_4C319B6 = 1;
          }
          updated = (__int64)TerminalSceneComponent_TypeInfo;
          if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            updated = (__int64)TerminalSceneComponent_TypeInfo;
          }
          v576 = **(_QWORD **)(updated + 184);
          if ( !v576 )
            goto LABEL_1104;
          if ( *(_DWORD *)(v317 + 24) <= 1u )
            goto LABEL_1105;
          v577 = *(ScrTerminalMap_o **)(v576 + 264);
          v578 = System_Single__Parse(*(System_String_o **)(v317 + 40), 0);
          if ( *(_DWORD *)(v317 + 24) <= 2u )
            goto LABEL_1105;
          v579 = v578;
          v580 = System_Single__Parse(*(System_String_o **)(v317 + 48), 0);
          if ( !v577 )
            goto LABEL_1104;
          v631 = ScrTerminalMap__LocalPosFromCoord(v577, v579, v580, 0.0, 0.0, 0);
          if ( *(_DWORD *)(v317 + 24) <= 4u )
            goto LABEL_1105;
          x = v631.fields.x;
          y = v631.fields.y;
          z = v631.fields.z;
          v584 = v320 * 0.001;
          updated = System_Int32__Parse(*(System_String_o **)(v317 + 64), 0);
          v586 = updated;
          if ( v322 )
          {
            if ( !v321 )
              goto LABEL_1104;
            v632.fields.x = x;
            v632.fields.y = y;
            v632.fields.z = z;
            MapGimmickComponent__SetMoveAnim((MapGimmickComponent_o *)v321, v632, v584, updated, 0, v585);
            goto LABEL_999;
          }
          v587 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
          System_Action___ctor(v587, (Il2CppObject *)this, (intptr_t)this->klass->vtable._14_EndAnim.method, 0);
          if ( !v321 )
            goto LABEL_1104;
          v554 = (MapGimmickComponent_o *)v321;
          v555 = x;
          v556 = y;
          v557 = z;
          v558 = v584;
          v559 = v586;
          v560 = v587;
LABEL_1080:
          MapGimmickComponent__SetMoveAnim(v554, *(UnityEngine_Vector3_o *)&v555, v558, v559, v560, v553);
          return;
        case 405:
          v323 = sub_1C32E6C(QuestAfterAction_StateMain___c__DisplayClass16_12_TypeInfo);
          QuestAfterAction_StateMain___c__DisplayClass16_12___ctor(
            (QuestAfterAction_StateMain___c__DisplayClass16_12_o *)v323,
            0);
          if ( !v323 )
            goto LABEL_1104;
          *(_QWORD *)(v323 + 24) = v5;
          sub_1C32BC4((CGThumbnailListItem_o *)(v323 + 24), v5, v324, v325);
          v326 = *(_QWORD *)(v323 + 24);
          if ( !v326 )
            goto LABEL_1104;
          v327 = *(QuestAfterAction_o **)(v326 + 24);
          updated = System_Int32__Parse(v14->fields.param, 0);
          if ( !v327 )
            goto LABEL_1104;
          v328 = QuestAfterAction__GetMapComponent_object_(
                   v327,
                   2,
                   updated,
                   this,
                   (const MethodInfo_3175FFC *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
          *(_QWORD *)(v323 + 16) = v328;
          sub_1C32BC4((CGThumbnailListItem_o *)(v323 + 16), (int32_t)v328, v329, v330);
          v331 = *(UnityEngine_Object_o **)(v323 + 16);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Equality(v331, 0, 0) )
            return;
          v332 = *(MapGimmickComponent_o **)(v323 + 16);
          v333 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
          System_Action___ctor(
            v333,
            (Il2CppObject *)v323,
            Method_QuestAfterAction_StateMain___c__DisplayClass16_12__UpdateAnim_b__17__,
            0);
          if ( !v332 )
            goto LABEL_1104;
          MapGimmickComponent__SetState(v332, 3, v333, v334);
          if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          if ( !byte_4C319B6 )
          {
            sub_1C32C20(&TerminalSceneComponent_TypeInfo);
            byte_4C319B6 = 1;
          }
          updated = (__int64)TerminalSceneComponent_TypeInfo;
          if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            updated = (__int64)TerminalSceneComponent_TypeInfo;
          }
          v335 = **(TerminalSceneComponent_o ***)(updated + 184);
          if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
          if ( !v335 )
            goto LABEL_1104;
          v123 = v335;
          v125 = 0;
          v124 = AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME;
          goto LABEL_202;
        case 406:
          v336 = sub_1C32E6C(QuestAfterAction_StateMain___c__DisplayClass16_13_TypeInfo);
          QuestAfterAction_StateMain___c__DisplayClass16_13___ctor(
            (QuestAfterAction_StateMain___c__DisplayClass16_13_o *)v336,
            0);
          if ( !v336 )
            goto LABEL_1104;
          *(_QWORD *)(v336 + 32) = v5;
          sub_1C32BC4((CGThumbnailListItem_o *)(v336 + 32), v5, v337, v338);
          updated = (__int64)v14->fields.param;
          if ( !updated )
            goto LABEL_1104;
          v339 = System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0);
          *(_QWORD *)(v336 + 24) = v339;
          v340 = (__int64 *)(v336 + 24);
          sub_1C32BC4((CGThumbnailListItem_o *)(v336 + 24), (int32_t)v339, v341, v342);
          v343 = *(_QWORD *)(v336 + 32);
          if ( !v343 )
            goto LABEL_1104;
          v344 = *v340;
          if ( !*v340 )
            goto LABEL_1104;
          if ( !*(_DWORD *)(v344 + 24) )
            goto LABEL_1105;
          v345 = *(QuestAfterAction_o **)(v343 + 24);
          updated = System_Int32__Parse(*(System_String_o **)(v344 + 32), 0);
          if ( !v345 )
            goto LABEL_1104;
          v346 = QuestAfterAction__GetMapComponent_object_(
                   v345,
                   2,
                   updated,
                   this,
                   (const MethodInfo_3175FFC *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
          *(_QWORD *)(v336 + 16) = v346;
          sub_1C32BC4((CGThumbnailListItem_o *)(v336 + 16), (int32_t)v346, v347, v348);
          v349 = *(UnityEngine_Object_o **)(v336 + 16);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Equality(v349, 0, 0) )
            return;
          v350 = *(MapGimmickComponent_o **)(v336 + 16);
          v351 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
          v352 = &Method_QuestAfterAction_StateMain___c__DisplayClass16_13__UpdateAnim_b__18__;
          v353 = v351;
          goto LABEL_627;
        case 407:
          updated = (__int64)v14->fields.param;
          if ( !updated )
            goto LABEL_1104;
          updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0);
          if ( !updated )
            goto LABEL_1104;
          v354 = updated;
          if ( !*(_DWORD *)(updated + 24) )
            goto LABEL_1105;
          v355 = *v9;
          updated = System_Int32__Parse(*(System_String_o **)(updated + 32), 0);
          if ( !v355 )
            goto LABEL_1104;
          v356 = QuestAfterAction__GetMapComponent_object_(
                   v355,
                   2,
                   updated,
                   this,
                   (const MethodInfo_3175FFC *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          updated = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v356, 0, 0);
          if ( (updated & 1) != 0 )
            return;
          if ( !v356 )
            goto LABEL_1104;
          updated = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v356, 0);
          if ( !updated )
            goto LABEL_1104;
          updated = (__int64)UnityEngine_GameObject__GetComponentInChildren_object_(
                               (UnityEngine_GameObject_o *)updated,
                               (const MethodInfo_3134BD4 *)Method_UnityEngine_GameObject_GetComponentInChildren_UISprite___);
          if ( *(_DWORD *)(v354 + 24) <= 1u )
            goto LABEL_1105;
          v357 = (UIWidget_o *)updated;
          updated = UnityEngine_ColorUtility__TryParseHtmlString(*(System_String_o **)(v354 + 40), &color, 0);
          if ( !v357 )
            goto LABEL_1104;
          UIWidget__set_color(v357, color, 0);
          goto LABEL_999;
        case 408:
          v336 = sub_1C32E6C(QuestAfterAction_StateMain___c__DisplayClass16_15_TypeInfo);
          QuestAfterAction_StateMain___c__DisplayClass16_15___ctor(
            (QuestAfterAction_StateMain___c__DisplayClass16_15_o *)v336,
            0);
          if ( !v336 )
            goto LABEL_1104;
          *(_QWORD *)(v336 + 24) = v5;
          sub_1C32BC4((CGThumbnailListItem_o *)(v336 + 24), v5, v358, v359);
          v360 = *(_QWORD *)(v336 + 24);
          if ( !v360 )
            goto LABEL_1104;
          v361 = *(QuestAfterAction_o **)(v360 + 24);
          updated = System_Int32__Parse(v14->fields.param, 0);
          if ( !v361 )
            goto LABEL_1104;
          v362 = QuestAfterAction__GetMapComponent_object_(
                   v361,
                   2,
                   updated,
                   this,
                   (const MethodInfo_3175FFC *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
          *(_QWORD *)(v336 + 16) = v362;
          v363 = v336 + 16;
          sub_1C32BC4((CGThumbnailListItem_o *)(v336 + 16), (int32_t)v362, v364, v365);
          v366 = *(UnityEngine_Object_o **)(v336 + 16);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Equality(v366, 0, 0) )
            return;
          updated = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_39E2DF4 *)Method_SingletonTemplate_QuestTree__get_Instance__);
          if ( !*(_QWORD *)v363 || !updated )
            goto LABEL_1104;
          v367 = QuestTree__CheckMapGimmickCond_36535288(
                   (QuestTree_o *)updated,
                   *(MapControl_MapGimmickInfo_o **)(*(_QWORD *)v363 + 112LL),
                   0);
          v350 = *(MapGimmickComponent_o **)v363;
          v368 = v367;
          v351 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
          v353 = v351;
          if ( v368 )
          {
            v352 = &Method_QuestAfterAction_StateMain___c__DisplayClass16_15__UpdateAnim_b__20__;
LABEL_627:
            System_Action___ctor(v351, (Il2CppObject *)v336, *v352, 0);
            if ( !v350 )
              goto LABEL_1104;
            v370 = 3;
          }
          else
          {
            System_Action___ctor(
              v351,
              (Il2CppObject *)v336,
              Method_QuestAfterAction_StateMain___c__DisplayClass16_15__UpdateAnim_b__21__,
              0);
            if ( !v350 )
              goto LABEL_1104;
            v370 = 2;
          }
          v495 = v350;
          goto LABEL_1014;
        case 409:
          updated = (__int64)v14->fields.param;
          if ( !updated )
            goto LABEL_1104;
          updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0);
          if ( !updated )
            goto LABEL_1104;
          v371 = *(_QWORD *)(updated + 24);
          v372 = updated;
          if ( v371 )
          {
            if ( !(_DWORD)v371 )
              goto LABEL_1105;
            v373 = System_Int32__Parse(*(System_String_o **)(updated + 32), 0);
            if ( *(int *)(v372 + 24) >= 2 )
            {
              v374 = System_Int32__Parse(*(System_String_o **)(v372 + 40), 0) > 0;
              goto LABEL_897;
            }
          }
          else
          {
            v373 = 0;
          }
          v374 = 0;
LABEL_897:
          updated = (__int64)*v9;
          if ( !*v9 )
            goto LABEL_1104;
          v481 = QuestAfterAction__GetMapComponent_object_(
                   (QuestAfterAction_o *)updated,
                   2,
                   v373,
                   this,
                   (const MethodInfo_3175FFC *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          updated = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v481, 0, 0);
          if ( (updated & 1) == 0 )
          {
            if ( !v481 )
              goto LABEL_1104;
            LOBYTE(v481[6].monitor) = v374;
            BYTE1(v481[6].monitor) = 0;
            AnimTime = MapGimmickComponent__GetAnimTime((MapGimmickComponent_o *)v481, v482);
            MapGimmickComponent__SetDispAnim_36104132((MapGimmickComponent_o *)v481, 1, AnimTime, 1, v484);
            v485 = v481[7].klass;
            if ( !v485 )
              goto LABEL_1104;
            LODWORD(v485->_1.name) = 1;
            v486 = this->klass;
            this->fields.IsAnimDoing = 0;
            v487 = ((__int64 (__fastcall *)(QuestAfterAction_StateMain_o *, const MethodInfo *))v486->vtable._11_get_CommandIndex.methodPtr)(
                     this,
                     v486->vtable._11_get_CommandIndex.method);
            ((void (__fastcall *)(QuestAfterAction_StateMain_o *, _QWORD, const MethodInfo *))this->klass->vtable._12_set_CommandIndex.methodPtr)(
              this,
              (unsigned int)(v487 + 1),
              this->klass->vtable._12_set_CommandIndex.method);
            goto LABEL_19;
          }
          return;
        case 410:
          updated = (__int64)v14->fields.param;
          if ( !updated )
            goto LABEL_1104;
          updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0);
          if ( !updated )
            goto LABEL_1104;
          v375 = updated;
          if ( *(int *)(updated + 24) <= 2 )
            goto LABEL_999;
          v376 = *v9;
          updated = System_Int32__Parse(*(System_String_o **)(updated + 32), 0);
          if ( !v376 )
            goto LABEL_1104;
          v377 = QuestAfterAction__GetMapComponent_object_(
                   v376,
                   2,
                   updated,
                   this,
                   (const MethodInfo_3175FFC *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          updated = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v377, 0, 0);
          if ( (updated & 1) != 0 )
            return;
          if ( *(_DWORD *)(v375 + 24) <= 1u )
            goto LABEL_1105;
          v378 = *v9;
          updated = System_Int32__Parse(*(System_String_o **)(v375 + 40), 0);
          if ( !v378 )
            goto LABEL_1104;
          v380 = updated;
          v381 = v378;
          v382 = 0;
          goto LABEL_669;
        case 411:
          updated = (__int64)v14->fields.param;
          if ( !updated )
            goto LABEL_1104;
          updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0);
          if ( !updated )
            goto LABEL_1104;
          v375 = updated;
          if ( *(int *)(updated + 24) <= 2 )
            goto LABEL_999;
          v383 = *v9;
          updated = System_Int32__Parse(*(System_String_o **)(updated + 32), 0);
          if ( !v383 )
            goto LABEL_1104;
          v377 = QuestAfterAction__GetMapComponent_object_(
                   v383,
                   2,
                   updated,
                   this,
                   (const MethodInfo_3175FFC *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          updated = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v377, 0, 0);
          if ( (updated & 1) != 0 )
            return;
          if ( *(_DWORD *)(v375 + 24) <= 1u )
            goto LABEL_1105;
          v384 = *v9;
          updated = System_Int32__Parse(*(System_String_o **)(v375 + 40), 0);
          if ( !v384 )
            goto LABEL_1104;
          MapGameObject = (UnityEngine_Object_o *)QuestAfterAction__GetMapGameObject(v384, 2, updated, this, v385);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Equality(MapGameObject, 0, 0) )
            return;
          LocalPosition = GameObjectExtensions__GetLocalPosition((UnityEngine_GameObject_o *)MapGameObject, 0);
          if ( *(_DWORD *)(v375 + 24) <= 2u )
            goto LABEL_1105;
          v387 = LocalPosition.fields.x;
          v388 = LocalPosition.fields.y;
          v389 = LocalPosition.fields.z;
          goto LABEL_683;
        case 412:
          updated = (__int64)v14->fields.param;
          if ( !updated )
            goto LABEL_1104;
          updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0);
          if ( !updated )
            goto LABEL_1104;
          v375 = updated;
          if ( *(int *)(updated + 24) <= 2 )
            goto LABEL_999;
          v390 = *v9;
          updated = System_Int32__Parse(*(System_String_o **)(updated + 32), 0);
          if ( !v390 )
            goto LABEL_1104;
          v377 = QuestAfterAction__GetMapComponent_object_(
                   v390,
                   2,
                   updated,
                   this,
                   (const MethodInfo_3175FFC *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          updated = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v377, 0, 0);
          if ( (updated & 1) != 0 )
            return;
          if ( *(_DWORD *)(v375 + 24) <= 1u )
            goto LABEL_1105;
          v391 = *v9;
          updated = System_Int32__Parse(*(System_String_o **)(v375 + 40), 0);
          if ( !v391 )
            goto LABEL_1104;
          v380 = updated;
          v382 = 1;
          v381 = v391;
LABEL_669:
          v392 = (UnityEngine_Object_o *)QuestAfterAction__GetMapGameObject(v381, v382, v380, this, v379);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Equality(v392, 0, 0) )
            return;
          v618 = GameObjectExtensions__GetLocalPosition((UnityEngine_GameObject_o *)v392, 0);
          v387 = v618.fields.x;
          v388 = v618.fields.y;
          v389 = v618.fields.z;
          if ( !this->fields.IsMapModel )
            goto LABEL_682;
          if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          if ( !byte_4C319B6 )
          {
            sub_1C32C20(&TerminalSceneComponent_TypeInfo);
            byte_4C319B6 = 1;
          }
          updated = (__int64)TerminalSceneComponent_TypeInfo;
          if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            updated = (__int64)TerminalSceneComponent_TypeInfo;
          }
          v393 = **(_QWORD **)(updated + 184);
          if ( !v393 )
            goto LABEL_1104;
          updated = *(_QWORD *)(v393 + 264);
          if ( !updated )
            goto LABEL_1104;
          v619.fields.x = v387;
          v619.fields.y = v388;
          v619.fields.z = v389;
          v620 = ScrTerminalMap__ConvertLocalToScreenPosition((ScrTerminalMap_o *)updated, v619, 0);
          v387 = v620.fields.x;
          v388 = v620.fields.y;
          v389 = v620.fields.z;
LABEL_682:
          if ( *(_DWORD *)(v375 + 24) <= 2u )
            goto LABEL_1105;
LABEL_683:
          v394 = System_Single__Parse(*(System_String_o **)(v375 + 48), 0) * 0.001;
          if ( v394 >= 0.0 )
            v395 = v394;
          else
            v395 = 0.5;
          if ( *(_DWORD *)(v375 + 24) <= 3u )
            goto LABEL_1105;
          v396 = System_Int32__Parse(*(System_String_o **)(v375 + 56), 0);
          if ( *(int *)(v375 + 24) >= 5 )
          {
            updated = System_Int32__Parse(*(System_String_o **)(v375 + 64), 0);
            if ( (int)updated >= 1 )
            {
              if ( !v377 )
                goto LABEL_1104;
              v621.fields.x = v387;
              v621.fields.y = v388;
              v621.fields.z = v389;
              MapGimmickComponent__SetMoveAnim((MapGimmickComponent_o *)v377, v621, v395, v396, 0, v397);
              goto LABEL_18;
            }
          }
          v552 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
          System_Action___ctor(v552, (Il2CppObject *)this, (intptr_t)this->klass->vtable._14_EndAnim.method, 0);
          if ( !v377 )
            goto LABEL_1104;
          v554 = (MapGimmickComponent_o *)v377;
          v555 = v387;
          v556 = v388;
          v557 = v389;
          v558 = v395;
          v559 = v396;
          v560 = v552;
          goto LABEL_1080;
        default:
          if ( id == 500 )
          {
            v398 = System_Int32__Parse(v14->fields.param, 0);
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            if ( !byte_4C34570 )
            {
              sub_1C32C20(&TerminalPramsManager_TypeInfo);
              byte_4C34570 = 1;
            }
            v399 = TerminalPramsManager_TypeInfo;
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
              v399 = TerminalPramsManager_TypeInfo;
            }
            v399->static_fields->_AfterActionFocusQuestId_k__BackingField = v398;
            if ( !DataManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
            updated = (__int64)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_QuestMaster___);
            if ( !updated )
              goto LABEL_1104;
            if ( DataMasterBase_object__object__int___TryGetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)updated,
                   &entity,
                   v398,
                   (const MethodInfo_3396884 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__) )
            {
              updated = (__int64)entity;
              if ( !entity )
                goto LABEL_1104;
              v400 = *v9;
              updated = QuestEntity__getSpotId((QuestEntity_o *)entity, 0);
              if ( !v400 )
                goto LABEL_1104;
              v401 = QuestAfterAction__GetMapComponent_object_(
                       v400,
                       0,
                       updated,
                       this,
                       (const MethodInfo_3175FFC *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              updated = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v401, 0, 0);
              if ( (updated & 1) != 0 )
              {
                if ( !v401 )
                  goto LABEL_1104;
                SrcSpotBasePrefab__SelectSpot((SrcSpotBasePrefab_o *)v401, 0, 0);
                if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                if ( !byte_4C34571 )
                {
                  sub_1C32C20(&TerminalPramsManager_TypeInfo);
                  byte_4C34571 = 1;
                }
                v402 = TerminalPramsManager_TypeInfo;
                if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                  v402 = TerminalPramsManager_TypeInfo;
                }
                v402->static_fields->_IsBackQuestBoardDisable_k__BackingField = 1;
              }
            }
          }
          else
          {
            if ( id != 501 )
              return;
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            if ( !byte_4C319B6 )
            {
              sub_1C32C20(&TerminalSceneComponent_TypeInfo);
              byte_4C319B6 = 1;
            }
            updated = (__int64)TerminalSceneComponent_TypeInfo;
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
              updated = (__int64)TerminalSceneComponent_TypeInfo;
            }
            v133 = **(_QWORD **)(updated + 184);
            if ( !v133 )
              goto LABEL_1104;
            updated = *(_QWORD *)(v133 + 256);
            if ( !updated )
              goto LABEL_1104;
            updated = (__int64)ScrTerminalListTop__mfGetMyFsmP((ScrTerminalListTop_o *)updated, 0);
            if ( !updated )
              goto LABEL_1104;
            v134 = (PlayMakerFSM_o *)updated;
            ActiveStateName = PlayMakerFSM__get_ActiveStateName((PlayMakerFSM_o *)updated, 0);
            if ( System_String__op_Equality(ActiveStateName, (System_String_o *)StringLiteral_3293/*"CAPTER WAIT"*/, 0) )
            {
              if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
              if ( !byte_4C319B6 )
              {
                sub_1C32C20(&TerminalSceneComponent_TypeInfo);
                byte_4C319B6 = 1;
              }
              updated = (__int64)TerminalSceneComponent_TypeInfo;
              if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
                updated = (__int64)TerminalSceneComponent_TypeInfo;
              }
              v136 = **(_QWORD **)(updated + 184);
              if ( !v136 )
                goto LABEL_1104;
              v137 = *(_QWORD *)(v136 + 256);
              if ( !v137 )
                goto LABEL_1104;
              v138 = *(QuestBoardListViewManager_o **)(v137 + 320);
              updated = (__int64)QuestAfterAction_StateMain___c_TypeInfo;
              if ( !QuestAfterAction_StateMain___c_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(QuestAfterAction_StateMain___c_TypeInfo);
                updated = (__int64)QuestAfterAction_StateMain___c_TypeInfo;
              }
              v139 = *(System_Action_o **)(*(_QWORD *)(updated + 184) + 8LL);
              if ( !v139 )
              {
                if ( !*(_DWORD *)(updated + 224) )
                {
                  j_il2cpp_runtime_class_init_0(updated);
                  updated = (__int64)QuestAfterAction_StateMain___c_TypeInfo;
                }
                v140 = **(Il2CppObject ***)(updated + 184);
                v139 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
                System_Action___ctor(v139, v140, Method_QuestAfterAction_StateMain___c__UpdateAnim_b__16_22__, 0);
                static_fields = QuestAfterAction_StateMain___c_TypeInfo->static_fields;
                static_fields->__9__16_22 = v139;
                sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__16_22, (int32_t)v139, v142, v143);
              }
              if ( !v138 )
                goto LABEL_1104;
              QuestBoardListViewManager__SetMode(v138, 4, v139, 0, 0, 0, 0);
              if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
              if ( !byte_4C319B6 )
              {
                sub_1C32C20(&TerminalSceneComponent_TypeInfo);
                byte_4C319B6 = 1;
              }
              v144 = TerminalSceneComponent_TypeInfo;
              if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
                v144 = TerminalSceneComponent_TypeInfo;
              }
              updated = (__int64)v144->static_fields->mInstance;
              if ( !updated )
                goto LABEL_1104;
              TerminalSceneComponent__CallQuestInformationClose((TerminalSceneComponent_o *)updated, 0);
              PlayMakerFSM__SendEvent(v134, (System_String_o *)StringLiteral_19862/*"gevINFOBAR_BACK"*/, 0);
            }
          }
          goto LABEL_999;
      }
    }
    if ( id <= 205 )
    {
      switch ( id )
      {
        case 'd':
          v66 = sub_1C32E6C(QuestAfterAction_StateMain___c__DisplayClass16_1_TypeInfo);
          QuestAfterAction_StateMain___c__DisplayClass16_1___ctor(
            (QuestAfterAction_StateMain___c__DisplayClass16_1_o *)v66,
            0);
          if ( !v66 )
            goto LABEL_1104;
          *(_QWORD *)(v66 + 24) = v5;
          sub_1C32BC4((CGThumbnailListItem_o *)(v66 + 24), v5, v67, v68);
          v69 = *(_QWORD *)(v66 + 24);
          if ( !v69 )
            goto LABEL_1104;
          v70 = *(QuestAfterAction_o **)(v69 + 24);
          updated = System_Int32__Parse(v14->fields.param, 0);
          if ( !v70 )
            goto LABEL_1104;
          v71 = QuestAfterAction__GetMapComponent_object_(
                  v70,
                  0,
                  updated,
                  this,
                  (const MethodInfo_3175FFC *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
          *(_QWORD *)(v66 + 16) = v71;
          sub_1C32BC4((CGThumbnailListItem_o *)(v66 + 16), (int32_t)v71, v72, v73);
          v74 = *(UnityEngine_Object_o **)(v66 + 16);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Equality(v74, 0, 0) )
            return;
          v75 = *(SrcSpotBasePrefab_o **)(v66 + 16);
          v76 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
          System_Action___ctor(
            v76,
            (Il2CppObject *)v66,
            Method_QuestAfterAction_StateMain___c__DisplayClass16_1__UpdateAnim_b__0__,
            0);
          if ( !v75 )
            goto LABEL_1104;
          v77 = 2;
          goto LABEL_492;
        case 'e':
          v258 = sub_1C32E6C(QuestAfterAction_StateMain___c__DisplayClass16_2_TypeInfo);
          QuestAfterAction_StateMain___c__DisplayClass16_2___ctor(
            (QuestAfterAction_StateMain___c__DisplayClass16_2_o *)v258,
            0);
          if ( !v258 )
            goto LABEL_1104;
          *(_QWORD *)(v258 + 24) = v5;
          sub_1C32BC4((CGThumbnailListItem_o *)(v258 + 24), v5, v259, v260);
          v261 = *(_QWORD *)(v258 + 24);
          if ( !v261 )
            goto LABEL_1104;
          v262 = *(QuestAfterAction_o **)(v261 + 24);
          updated = System_Int32__Parse(v14->fields.param, 0);
          if ( !v262 )
            goto LABEL_1104;
          v263 = QuestAfterAction__GetMapComponent_object_(
                   v262,
                   0,
                   updated,
                   this,
                   (const MethodInfo_3175FFC *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
          *(_QWORD *)(v258 + 16) = v263;
          sub_1C32BC4((CGThumbnailListItem_o *)(v258 + 16), (int32_t)v263, v264, v265);
          v266 = *(UnityEngine_Object_o **)(v258 + 16);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Equality(v266, 0, 0) )
            return;
          v75 = *(SrcSpotBasePrefab_o **)(v258 + 16);
          v76 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
          System_Action___ctor(
            v76,
            (Il2CppObject *)v258,
            Method_QuestAfterAction_StateMain___c__DisplayClass16_2__UpdateAnim_b__1__,
            0);
          if ( !v75 )
            goto LABEL_1104;
          v77 = 3;
LABEL_492:
          SrcSpotBasePrefab__SetState(v75, v77, v76, 0);
          return;
        case 'f':
          v267 = sub_1C32E6C(QuestAfterAction_StateMain___c__DisplayClass16_3_TypeInfo);
          QuestAfterAction_StateMain___c__DisplayClass16_3___ctor(
            (QuestAfterAction_StateMain___c__DisplayClass16_3_o *)v267,
            0);
          if ( !v267 )
            goto LABEL_1104;
          *(_QWORD *)(v267 + 24) = v5;
          v270 = v267 + 24;
          sub_1C32BC4((CGThumbnailListItem_o *)(v267 + 24), v5, v268, v269);
          if ( !*(_QWORD *)(v267 + 24) )
            goto LABEL_1104;
          v271 = *(QuestAfterAction_o **)(*(_QWORD *)(v267 + 24) + 24LL);
          updated = System_Int32__Parse(v14->fields.param, 0);
          if ( !v271 )
            goto LABEL_1104;
          v272 = QuestAfterAction__GetMapComponent_object_(
                   v271,
                   0,
                   updated,
                   this,
                   (const MethodInfo_3175FFC *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
          *(_QWORD *)(v267 + 16) = v272;
          v273 = (__int64 *)(v267 + 16);
          sub_1C32BC4((CGThumbnailListItem_o *)(v267 + 16), (int32_t)v272, v274, v275);
          v276 = *(UnityEngine_Object_o **)(v267 + 16);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Equality(v276, 0, 0) )
            return;
          v277 = *(SrcSpotBasePrefab_o **)(v267 + 16);
          v278 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
          System_Action___ctor(
            v278,
            (Il2CppObject *)v267,
            Method_QuestAfterAction_StateMain___c__DisplayClass16_3__UpdateAnim_b__2__,
            0);
          if ( !v277 )
            goto LABEL_1104;
          SrcSpotBasePrefab__SetState(v277, 4, v278, 0);
          if ( !*(_QWORD *)v270 )
            goto LABEL_1104;
          updated = *(_QWORD *)(*(_QWORD *)v270 + 24LL);
          if ( !updated )
            goto LABEL_1104;
          v281 = *v273;
          *(_QWORD *)(updated + 184) = *v273;
          v282 = (CGThumbnailListItem_o *)(updated + 184);
          goto LABEL_514;
        case 'g':
          updated = (__int64)v14->fields.param;
          if ( !updated )
            goto LABEL_1104;
          updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0);
          if ( !updated )
            goto LABEL_1104;
          v283 = updated;
          if ( *(int *)(updated + 24) <= 1 )
            goto LABEL_999;
          v284 = *v9;
          updated = System_Int32__Parse(*(System_String_o **)(updated + 32), 0);
          if ( !v284 )
            goto LABEL_1104;
          v285 = QuestAfterAction__GetMapComponent_object_(
                   v284,
                   0,
                   updated,
                   this,
                   (const MethodInfo_3175FFC *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          updated = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v285, 0, 0);
          if ( (updated & 1) != 0 )
            return;
          if ( *(_DWORD *)(v283 + 24) <= 1u )
            goto LABEL_1105;
          updated = System_Int32__Parse(*(System_String_o **)(v283 + 40), 0);
          if ( !v285 )
            goto LABEL_1104;
          LODWORD(v285[14].klass) = updated;
          v286 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
          System_Action___ctor(v286, (Il2CppObject *)this, (intptr_t)this->klass->vtable._14_EndAnim.method, 0);
          SrcSpotBasePrefab__SetState((SrcSpotBasePrefab_o *)v285, 5, v286, 0);
          updated = (__int64)*v9;
          if ( !*v9 )
            goto LABEL_1104;
          *(_QWORD *)(updated + 184) = v285;
          v282 = (CGThumbnailListItem_o *)(updated + 184);
          LODWORD(v281) = (_DWORD)v285;
LABEL_514:
          sub_1C32BC4(v282, v281, v279, v280);
          return;
        case 'h':
        case 'i':
        case 'j':
        case 'k':
        case 'l':
        case 'm':
          return;
        case 'n':
          v287 = *v9;
          updated = System_Int32__Parse(v14->fields.param, 0);
          if ( !v287 )
            goto LABEL_1104;
          v288 = (UnityEngine_Object_o *)QuestAfterAction__GetMapComponent_object_(
                                           v287,
                                           0,
                                           updated,
                                           this,
                                           (const MethodInfo_3175FFC *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          updated = UnityEngine_Object__op_Equality(v288, 0, 0);
          if ( (updated & 1) != 0 )
            return;
          if ( !v288 )
            goto LABEL_1104;
          SrcSpotBasePrefab__SetQaaScaleAnimQuick((SrcSpotBasePrefab_o *)v288, 0, 0);
          m_CachedPtr = v288[9].fields.m_CachedPtr;
          if ( !m_CachedPtr )
            goto LABEL_1104;
          *(_DWORD *)(m_CachedPtr + 20) = 0;
          v290 = (SrcSpotBasePrefab_o *)v288;
          v291 = 0;
          goto LABEL_537;
        case 'o':
          v292 = *v9;
          updated = System_Int32__Parse(v14->fields.param, 0);
          if ( !v292 )
            goto LABEL_1104;
          v293 = (UnityEngine_Object_o *)QuestAfterAction__GetMapComponent_object_(
                                           v292,
                                           0,
                                           updated,
                                           this,
                                           (const MethodInfo_3175FFC *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          updated = UnityEngine_Object__op_Equality(v293, 0, 0);
          if ( (updated & 1) != 0 )
            return;
          if ( !v293 )
            goto LABEL_1104;
          SrcSpotBasePrefab__SetQaaScaleAnimQuick((SrcSpotBasePrefab_o *)v293, 1, 0);
          SrcSpotBasePrefab__SetQaaColorAnimQuick((SrcSpotBasePrefab_o *)v293, 0, 0);
          v294 = v293[9].fields.m_CachedPtr;
          if ( !v294 )
            goto LABEL_1104;
          *(_DWORD *)(v294 + 20) = 2;
          goto LABEL_536;
        case 'p':
          v295 = *v9;
          updated = System_Int32__Parse(v14->fields.param, 0);
          if ( !v295 )
            goto LABEL_1104;
          v293 = (UnityEngine_Object_o *)QuestAfterAction__GetMapComponent_object_(
                                           v295,
                                           0,
                                           updated,
                                           this,
                                           (const MethodInfo_3175FFC *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          updated = UnityEngine_Object__op_Equality(v293, 0, 0);
          if ( (updated & 1) != 0 )
            return;
          if ( !v293 )
            goto LABEL_1104;
          SrcSpotBasePrefab__SetQaaScaleAnimQuick((SrcSpotBasePrefab_o *)v293, 1, 0);
          SrcSpotBasePrefab__SetQaaColorAnimQuick((SrcSpotBasePrefab_o *)v293, 1, 0);
          v296 = v293[9].fields.m_CachedPtr;
          if ( !v296 )
            goto LABEL_1104;
          *(_DWORD *)(v296 + 20) = 1;
LABEL_536:
          v291 = 1;
          v290 = (SrcSpotBasePrefab_o *)v293;
LABEL_537:
          SrcSpotBasePrefab__SetTouchType(v290, v291, 0);
          goto LABEL_18;
        case 'q':
          updated = (__int64)v14->fields.param;
          if ( !updated )
            goto LABEL_1104;
          updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0);
          if ( !updated )
            goto LABEL_1104;
          v297 = updated;
          if ( *(int *)(updated + 24) <= 1 )
            goto LABEL_999;
          v298 = *v9;
          updated = System_Int32__Parse(*(System_String_o **)(updated + 32), 0);
          if ( !v298 )
            goto LABEL_1104;
          v299 = QuestAfterAction__GetMapComponent_object_(
                   v298,
                   0,
                   updated,
                   this,
                   (const MethodInfo_3175FFC *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          updated = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v299, 0, 0);
          if ( (updated & 1) != 0 )
            return;
          if ( *(_DWORD *)(v297 + 24) <= 1u )
            goto LABEL_1105;
          updated = System_Int32__Parse(*(System_String_o **)(v297 + 40), 0);
          if ( !v299 )
            goto LABEL_1104;
          LODWORD(v299[14].klass) = updated;
          SrcSpotBasePrefab__UpdateDisp((SrcSpotBasePrefab_o *)v299, 1, 0);
          goto LABEL_18;
        default:
          switch ( id )
          {
            case 200:
              if ( this->fields.IsMapModel )
              {
                v78 = sub_1C32E6C(QuestAfterAction_StateMain___c__DisplayClass16_4_TypeInfo);
                QuestAfterAction_StateMain___c__DisplayClass16_4___ctor(
                  (QuestAfterAction_StateMain___c__DisplayClass16_4_o *)v78,
                  0);
                if ( !v78 )
                  goto LABEL_1104;
                *(_QWORD *)(v78 + 24) = v5;
                sub_1C32BC4((CGThumbnailListItem_o *)(v78 + 24), v5, v79, v80);
                v81 = *(_QWORD *)(v78 + 24);
                if ( !v81 )
                  goto LABEL_1104;
                v82 = *(QuestAfterAction_o **)(v81 + 24);
                updated = System_Int32__Parse(v14->fields.param, 0);
                if ( !v82 )
                  goto LABEL_1104;
                v83 = QuestAfterAction__GetMapComponent_object_(
                        v82,
                        1,
                        updated,
                        this,
                        (const MethodInfo_3175FFC *)Method_QuestAfterAction_GetMapComponent_ModelLineComponent___);
                *(_QWORD *)(v78 + 16) = v83;
                sub_1C32BC4((CGThumbnailListItem_o *)(v78 + 16), (int32_t)v83, v84, v85);
                v86 = *(UnityEngine_Object_o **)(v78 + 16);
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                if ( !UnityEngine_Object__op_Equality(v86, 0, 0) )
                {
                  v87 = *(ModelLineComponent_o **)(v78 + 16);
                  v88 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
                  System_Action___ctor(
                    v88,
                    (Il2CppObject *)v78,
                    Method_QuestAfterAction_StateMain___c__DisplayClass16_4__UpdateAnim_b__3__,
                    0);
                  if ( !v87 )
                    goto LABEL_1104;
                  v90 = 2;
                  goto LABEL_752;
                }
              }
              else
              {
                v506 = sub_1C32E6C(QuestAfterAction_StateMain___c__DisplayClass16_5_TypeInfo);
                QuestAfterAction_StateMain___c__DisplayClass16_5___ctor(
                  (QuestAfterAction_StateMain___c__DisplayClass16_5_o *)v506,
                  0);
                if ( !v506 )
                  goto LABEL_1104;
                *(_QWORD *)(v506 + 24) = v5;
                sub_1C32BC4((CGThumbnailListItem_o *)(v506 + 24), v5, v507, v508);
                v509 = *(_QWORD *)(v506 + 24);
                if ( !v509 )
                  goto LABEL_1104;
                v510 = *(QuestAfterAction_o **)(v509 + 24);
                updated = System_Int32__Parse(v14->fields.param, 0);
                if ( !v510 )
                  goto LABEL_1104;
                v511 = QuestAfterAction__GetMapComponent_object_(
                         v510,
                         1,
                         updated,
                         this,
                         (const MethodInfo_3175FFC *)Method_QuestAfterAction_GetMapComponent_srcLineSprite___);
                *(_QWORD *)(v506 + 16) = v511;
                sub_1C32BC4((CGThumbnailListItem_o *)(v506 + 16), (int32_t)v511, v512, v513);
                v514 = *(UnityEngine_Object_o **)(v506 + 16);
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                if ( !UnityEngine_Object__op_Equality(v514, 0, 0) )
                {
                  v515 = *(srcLineSprite_o **)(v506 + 16);
                  v516 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
                  System_Action___ctor(
                    v516,
                    (Il2CppObject *)v506,
                    Method_QuestAfterAction_StateMain___c__DisplayClass16_5__UpdateAnim_b__4__,
                    0);
                  if ( !v515 )
                    goto LABEL_1104;
                  v517 = 2;
                  goto LABEL_955;
                }
              }
              return;
            case 201:
              if ( this->fields.IsMapModel )
              {
                v405 = sub_1C32E6C(QuestAfterAction_StateMain___c__DisplayClass16_6_TypeInfo);
                QuestAfterAction_StateMain___c__DisplayClass16_6___ctor(
                  (QuestAfterAction_StateMain___c__DisplayClass16_6_o *)v405,
                  0);
                if ( !v405 )
                  goto LABEL_1104;
                *(_QWORD *)(v405 + 24) = v5;
                sub_1C32BC4((CGThumbnailListItem_o *)(v405 + 24), v5, v406, v407);
                v408 = *(_QWORD *)(v405 + 24);
                if ( !v408 )
                  goto LABEL_1104;
                v409 = *(QuestAfterAction_o **)(v408 + 24);
                updated = System_Int32__Parse(v14->fields.param, 0);
                if ( !v409 )
                  goto LABEL_1104;
                v410 = QuestAfterAction__GetMapComponent_object_(
                         v409,
                         1,
                         updated,
                         this,
                         (const MethodInfo_3175FFC *)Method_QuestAfterAction_GetMapComponent_ModelLineComponent___);
                *(_QWORD *)(v405 + 16) = v410;
                sub_1C32BC4((CGThumbnailListItem_o *)(v405 + 16), (int32_t)v410, v411, v412);
                v413 = *(UnityEngine_Object_o **)(v405 + 16);
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                if ( !UnityEngine_Object__op_Equality(v413, 0, 0) )
                {
                  v87 = *(ModelLineComponent_o **)(v405 + 16);
                  v88 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
                  System_Action___ctor(
                    v88,
                    (Il2CppObject *)v405,
                    Method_QuestAfterAction_StateMain___c__DisplayClass16_6__UpdateAnim_b__5__,
                    0);
                  if ( !v87 )
                    goto LABEL_1104;
                  v90 = 3;
                  goto LABEL_752;
                }
              }
              else
              {
                v518 = sub_1C32E6C(QuestAfterAction_StateMain___c__DisplayClass16_7_TypeInfo);
                QuestAfterAction_StateMain___c__DisplayClass16_7___ctor(
                  (QuestAfterAction_StateMain___c__DisplayClass16_7_o *)v518,
                  0);
                if ( !v518 )
                  goto LABEL_1104;
                *(_QWORD *)(v518 + 24) = v5;
                sub_1C32BC4((CGThumbnailListItem_o *)(v518 + 24), v5, v519, v520);
                v521 = *(_QWORD *)(v518 + 24);
                if ( !v521 )
                  goto LABEL_1104;
                v522 = *(QuestAfterAction_o **)(v521 + 24);
                updated = System_Int32__Parse(v14->fields.param, 0);
                if ( !v522 )
                  goto LABEL_1104;
                v523 = QuestAfterAction__GetMapComponent_object_(
                         v522,
                         1,
                         updated,
                         this,
                         (const MethodInfo_3175FFC *)Method_QuestAfterAction_GetMapComponent_srcLineSprite___);
                *(_QWORD *)(v518 + 16) = v523;
                sub_1C32BC4((CGThumbnailListItem_o *)(v518 + 16), (int32_t)v523, v524, v525);
                v526 = *(UnityEngine_Object_o **)(v518 + 16);
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                if ( !UnityEngine_Object__op_Equality(v526, 0, 0) )
                {
                  v515 = *(srcLineSprite_o **)(v518 + 16);
                  v516 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
                  System_Action___ctor(
                    v516,
                    (Il2CppObject *)v518,
                    Method_QuestAfterAction_StateMain___c__DisplayClass16_7__UpdateAnim_b__6__,
                    0);
                  if ( !v515 )
                    goto LABEL_1104;
                  v517 = 3;
                  goto LABEL_955;
                }
              }
              return;
            case 202:
              if ( this->fields.IsMapModel )
              {
                v414 = sub_1C32E6C(QuestAfterAction_StateMain___c__DisplayClass16_8_TypeInfo);
                QuestAfterAction_StateMain___c__DisplayClass16_8___ctor(
                  (QuestAfterAction_StateMain___c__DisplayClass16_8_o *)v414,
                  0);
                if ( !v414 )
                  goto LABEL_1104;
                *(_QWORD *)(v414 + 24) = v5;
                sub_1C32BC4((CGThumbnailListItem_o *)(v414 + 24), v5, v415, v416);
                v417 = *(_QWORD *)(v414 + 24);
                if ( !v417 )
                  goto LABEL_1104;
                v418 = *(QuestAfterAction_o **)(v417 + 24);
                updated = System_Int32__Parse(v14->fields.param, 0);
                if ( !v418 )
                  goto LABEL_1104;
                v419 = QuestAfterAction__GetMapComponent_object_(
                         v418,
                         1,
                         updated,
                         this,
                         (const MethodInfo_3175FFC *)Method_QuestAfterAction_GetMapComponent_ModelLineComponent___);
                *(_QWORD *)(v414 + 16) = v419;
                sub_1C32BC4((CGThumbnailListItem_o *)(v414 + 16), (int32_t)v419, v420, v421);
                v422 = *(UnityEngine_Object_o **)(v414 + 16);
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                if ( !UnityEngine_Object__op_Equality(v422, 0, 0) )
                {
                  v87 = *(ModelLineComponent_o **)(v414 + 16);
                  v88 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
                  System_Action___ctor(
                    v88,
                    (Il2CppObject *)v414,
                    Method_QuestAfterAction_StateMain___c__DisplayClass16_8__UpdateAnim_b__7__,
                    0);
                  if ( !v87 )
                    goto LABEL_1104;
                  v90 = 4;
LABEL_752:
                  ModelLineComponent__SetState(v87, v90, v88, v89);
                }
              }
              else
              {
                v527 = sub_1C32E6C(QuestAfterAction_StateMain___c__DisplayClass16_9_TypeInfo);
                QuestAfterAction_StateMain___c__DisplayClass16_9___ctor(
                  (QuestAfterAction_StateMain___c__DisplayClass16_9_o *)v527,
                  0);
                if ( !v527 )
                  goto LABEL_1104;
                *(_QWORD *)(v527 + 24) = v5;
                sub_1C32BC4((CGThumbnailListItem_o *)(v527 + 24), v5, v528, v529);
                v530 = *(_QWORD *)(v527 + 24);
                if ( !v530 )
                  goto LABEL_1104;
                v531 = *(QuestAfterAction_o **)(v530 + 24);
                updated = System_Int32__Parse(v14->fields.param, 0);
                if ( !v531 )
                  goto LABEL_1104;
                v532 = QuestAfterAction__GetMapComponent_object_(
                         v531,
                         1,
                         updated,
                         this,
                         (const MethodInfo_3175FFC *)Method_QuestAfterAction_GetMapComponent_srcLineSprite___);
                *(_QWORD *)(v527 + 16) = v532;
                sub_1C32BC4((CGThumbnailListItem_o *)(v527 + 16), (int32_t)v532, v533, v534);
                v535 = *(UnityEngine_Object_o **)(v527 + 16);
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                if ( !UnityEngine_Object__op_Equality(v535, 0, 0) )
                {
                  v515 = *(srcLineSprite_o **)(v527 + 16);
                  v516 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
                  System_Action___ctor(
                    v516,
                    (Il2CppObject *)v527,
                    Method_QuestAfterAction_StateMain___c__DisplayClass16_9__UpdateAnim_b__8__,
                    0);
                  if ( !v515 )
                    goto LABEL_1104;
                  v517 = 4;
LABEL_955:
                  srcLineSprite__SetState(v515, v517, v516, 0);
                }
              }
              return;
            case 203:
              IsMapModel = this->fields.IsMapModel;
              v424 = *v9;
              updated = System_Int32__Parse(v14->fields.param, 0);
              if ( !v424 )
                goto LABEL_1104;
              if ( IsMapModel )
              {
                v425 = (UnityEngine_Object_o *)QuestAfterAction__GetMapComponent_object_(
                                                 v424,
                                                 1,
                                                 updated,
                                                 this,
                                                 (const MethodInfo_3175FFC *)Method_QuestAfterAction_GetMapComponent_ModelLineComponent___);
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                updated = UnityEngine_Object__op_Equality(v425, 0, 0);
                if ( (updated & 1) != 0 )
                  return;
                if ( !v425 )
                  goto LABEL_1104;
                ModelLineComponent__SetQuestAfterActionScaleAnim_36128844((ModelLineComponent_o *)v425, 0, 0.0, v426);
                v427 = v425[3].klass;
                if ( !v427 )
                  goto LABEL_1104;
              }
              else
              {
                v536 = (UnityEngine_Object_o *)QuestAfterAction__GetMapComponent_object_(
                                                 v424,
                                                 1,
                                                 updated,
                                                 this,
                                                 (const MethodInfo_3175FFC *)Method_QuestAfterAction_GetMapComponent_srcLineSprite___);
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                updated = UnityEngine_Object__op_Equality(v536, 0, 0);
                if ( (updated & 1) != 0 )
                  return;
                if ( !v536 )
                  goto LABEL_1104;
                srcLineSprite__SetQaaScaleAnimQuick((srcLineSprite_o *)v536, 0, 0);
                v427 = v536[5].monitor;
                if ( !v427 )
                  goto LABEL_1104;
              }
              goto LABEL_961;
            case 204:
              v428 = this->fields.IsMapModel;
              v429 = *v9;
              updated = System_Int32__Parse(v14->fields.param, 0);
              if ( !v429 )
                goto LABEL_1104;
              if ( v428 )
              {
                v430 = (UnityEngine_Object_o *)QuestAfterAction__GetMapComponent_object_(
                                                 v429,
                                                 1,
                                                 updated,
                                                 this,
                                                 (const MethodInfo_3175FFC *)Method_QuestAfterAction_GetMapComponent_ModelLineComponent___);
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                updated = UnityEngine_Object__op_Equality(v430, 0, 0);
                if ( (updated & 1) != 0 )
                  return;
                if ( !v430 )
                  goto LABEL_1104;
                ModelLineComponent__SetQuestAfterActionScaleAnim_36128844((ModelLineComponent_o *)v430, 1, 0.0, v431);
                ModelLineComponent__SetQuestAfterActionColorAnim_36129320((ModelLineComponent_o *)v430, 0, 0.0, v432);
                v433 = v430[3].klass;
                if ( !v433 )
                  goto LABEL_1104;
              }
              else
              {
                v537 = (UnityEngine_Object_o *)QuestAfterAction__GetMapComponent_object_(
                                                 v429,
                                                 1,
                                                 updated,
                                                 this,
                                                 (const MethodInfo_3175FFC *)Method_QuestAfterAction_GetMapComponent_srcLineSprite___);
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                updated = UnityEngine_Object__op_Equality(v537, 0, 0);
                if ( (updated & 1) != 0 )
                  return;
                if ( !v537 )
                  goto LABEL_1104;
                srcLineSprite__SetQaaScaleAnimQuick((srcLineSprite_o *)v537, 1, 0);
                srcLineSprite__SetQaaColorAnimQuick((srcLineSprite_o *)v537, 0, 0);
                v433 = v537[5].monitor;
                if ( !v433 )
                  goto LABEL_1104;
              }
              v538 = 2;
              goto LABEL_974;
            case 205:
              v434 = this->fields.IsMapModel;
              v435 = *v9;
              updated = System_Int32__Parse(v14->fields.param, 0);
              if ( !v435 )
                goto LABEL_1104;
              if ( v434 )
              {
                v436 = (UnityEngine_Object_o *)QuestAfterAction__GetMapComponent_object_(
                                                 v435,
                                                 1,
                                                 updated,
                                                 this,
                                                 (const MethodInfo_3175FFC *)Method_QuestAfterAction_GetMapComponent_ModelLineComponent___);
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                updated = UnityEngine_Object__op_Equality(v436, 0, 0);
                if ( (updated & 1) != 0 )
                  return;
                if ( !v436 )
                  goto LABEL_1104;
                ModelLineComponent__SetQuestAfterActionScaleAnim_36128844((ModelLineComponent_o *)v436, 1, 0.0, v437);
                ModelLineComponent__SetQuestAfterActionColorAnim_36129320((ModelLineComponent_o *)v436, 1, 0.0, v438);
                v433 = v436[3].klass;
                if ( !v433 )
                  goto LABEL_1104;
              }
              else
              {
                v539 = (UnityEngine_Object_o *)QuestAfterAction__GetMapComponent_object_(
                                                 v435,
                                                 1,
                                                 updated,
                                                 this,
                                                 (const MethodInfo_3175FFC *)Method_QuestAfterAction_GetMapComponent_srcLineSprite___);
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                updated = UnityEngine_Object__op_Equality(v539, 0, 0);
                if ( (updated & 1) != 0 )
                  return;
                if ( !v539 )
                  goto LABEL_1104;
                srcLineSprite__SetQaaScaleAnimQuick((srcLineSprite_o *)v539, 1, 0);
                srcLineSprite__SetQaaColorAnimQuick((srcLineSprite_o *)v539, 1, 0);
                v433 = v539[5].monitor;
                if ( !v433 )
                  goto LABEL_1104;
              }
              v538 = 1;
LABEL_974:
              v433[4] = v538;
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
        updated = (__int64)v14->fields.param;
        if ( !updated )
          goto LABEL_1104;
        updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0);
        if ( !updated )
          goto LABEL_1104;
        v49 = *(_QWORD *)(updated + 24);
        v50 = updated;
        if ( (int)v49 <= 0 )
          break;
        if ( (int)v49 > 2 )
        {
          v439 = System_Single__Parse(*(System_String_o **)(updated + 48), 0);
          v49 = *(_QWORD *)(v50 + 24);
          v51 = v439 * 0.001;
        }
        else
        {
          v51 = 0.5;
        }
        if ( (int)v49 >= 2 )
        {
          updated = System_Int32__Parse(*(System_String_o **)(v50 + 40), 0);
          v49 = *(_QWORD *)(v50 + 24);
          v162 = updated;
        }
        else
        {
          v162 = 15;
        }
        if ( !(_DWORD)v49 )
          goto LABEL_1105;
        v442 = *v9;
        updated = System_Int32__Parse(*(System_String_o **)(v50 + 32), 0);
        if ( !v442 )
          goto LABEL_1104;
        v444 = (UnityEngine_Object_o *)QuestAfterAction__GetMapGameObject(v442, 0, updated, this, v443);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Equality(v444, 0, 0) )
          return;
        v622 = GameObjectExtensions__GetLocalPosition((UnityEngine_GameObject_o *)v444, 0);
        v445 = v622.fields.x;
        v446 = v622.fields.y;
        v447 = v622.fields.z;
        if ( !this->fields.IsMapModel )
          goto LABEL_802;
        if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        if ( !byte_4C319B6 )
        {
          sub_1C32C20(&TerminalSceneComponent_TypeInfo);
          byte_4C319B6 = 1;
        }
        updated = (__int64)TerminalSceneComponent_TypeInfo;
        if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          updated = (__int64)TerminalSceneComponent_TypeInfo;
        }
        v448 = **(_QWORD **)(updated + 184);
        if ( !v448 )
          goto LABEL_1104;
        updated = *(_QWORD *)(v448 + 264);
        if ( !updated )
          goto LABEL_1104;
        v623.fields.x = v445;
        v623.fields.y = v446;
        v623.fields.z = v447;
        v624 = ScrTerminalMap__ConvertLocalToScreenPosition((ScrTerminalMap_o *)updated, v623, 0);
        v445 = v624.fields.x;
        v446 = v624.fields.y;
        v447 = v624.fields.z;
LABEL_802:
        if ( !FSUtility_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
        updated = FSUtility__IsUnderVista(0);
        if ( (updated & 1) != 0 )
          goto LABEL_1023;
        if ( !*(_DWORD *)(v50 + 24) )
          goto LABEL_1105;
        v450 = *(System_String_o **)(v50 + 32);
        updated = System_String__op_Equality(v450, (System_String_o *)StringLiteral_1308/*"10703"*/, 0);
        if ( (updated & 1) != 0 )
        {
          v446 = v446 + -50.0;
        }
        else
        {
          updated = System_String__op_Equality(v450, (System_String_o *)StringLiteral_1381/*"30101"*/, 0);
          if ( (updated & 1) != 0 )
            v446 = v446 + -50.0;
        }
LABEL_1023:
        v462 = *(_DWORD *)(v50 + 24);
        if ( v14->fields.id == 305 )
        {
LABEL_1024:
          if ( v462 < 4 )
            goto LABEL_1025;
          if ( v462 == 4 )
          {
            if ( !*v9 )
              goto LABEL_1104;
            mMapCamera = (*v9)->fields.mMapCamera;
          }
          else
          {
            updated = System_Int32__Parse(*(System_String_o **)(v50 + 64), 0);
            if ( !*v9 )
              goto LABEL_1104;
            mMapCamera = (*v9)->fields.mMapCamera;
            if ( (int)updated >= 1 )
            {
              *(_QWORD *)&v568.fields.hasValue = &v606;
              v566 = v445;
              v567 = v446;
              *(_QWORD *)&v568.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
              v569 = v447;
              *(_QWORD *)&v606.fields.hasValue = 0;
              *(_QWORD *)&v606.fields.value.fields.y = 0;
LABEL_1084:
              System_Nullable_Vector3____ctor(v568, *(UnityEngine_Vector3_o *)&v566, v449);
              if ( *(_DWORD *)(v50 + 24) <= 3u )
                goto LABEL_1105;
              v588 = *(System_String_o **)(v50 + 56);
LABEL_1086:
              v589 = System_Single__Parse(v588, 0);
              p_size = (System_Nullable_float__o)&size;
              size = 0;
              System_Nullable_float____ctor(
                p_size,
                v589,
                (const MethodInfo_38C063C *)Method_System_Nullable_float___ctor__);
              if ( !mMapCamera )
                goto LABEL_1104;
              v591 = size;
              MapCamera__StartAutoWork(mMapCamera, v51, v606, v591, v162, 0, 0);
              break;
            }
          }
          *(_QWORD *)&v572.fields.hasValue = &v606;
          v570 = v445;
          v571 = v446;
          *(_QWORD *)&v572.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
          v573 = v447;
          *(_QWORD *)&v606.fields.hasValue = 0;
          *(_QWORD *)&v606.fields.value.fields.y = 0;
LABEL_1089:
          System_Nullable_Vector3____ctor(v572, *(UnityEngine_Vector3_o *)&v570, v449);
          if ( *(_DWORD *)(v50 + 24) <= 3u )
            goto LABEL_1105;
          v592 = *(System_String_o **)(v50 + 56);
LABEL_1091:
          v593 = System_Single__Parse(v592, 0);
          v594 = (System_Nullable_float__o)&size;
          size = 0;
          System_Nullable_float____ctor(v594, v593, (const MethodInfo_38C063C *)Method_System_Nullable_float___ctor__);
          v595 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
          System_Action___ctor(v595, (Il2CppObject *)this, (intptr_t)this->klass->vtable._14_EndAnim.method, 0);
          if ( !mMapCamera )
            goto LABEL_1104;
          v596 = v606;
          v597 = size;
          v598 = mMapCamera;
          v599 = v51;
          v600 = v162;
          goto LABEL_1093;
        }
LABEL_843:
        if ( v462 < 4 )
        {
LABEL_1025:
          if ( !*v9 )
            goto LABEL_1104;
          v464 = (*v9)->fields.mMapCamera;
          goto LABEL_1027;
        }
        updated = System_Int32__Parse(*(System_String_o **)(v50 + 56), 0);
        v463 = *v9;
        if ( !*v9 )
          goto LABEL_1104;
        v464 = v463->fields.mMapCamera;
        if ( (int)updated < 1 )
        {
LABEL_1027:
          v251 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
          System_Action___ctor(v251, (Il2CppObject *)this, (intptr_t)this->klass->vtable._14_EndAnim.method, 0);
          if ( !v464 )
            goto LABEL_1104;
          v252 = v464;
          v253 = v445;
          v254 = v446;
          v255 = v447;
          goto LABEL_1046;
        }
        if ( !v464 )
          goto LABEL_1104;
        v465 = v463->fields.mMapCamera;
        v466 = v445;
        v467 = v446;
        v468 = v447;
        goto LABEL_1062;
      case 301:
      case 306:
        updated = (__int64)v14->fields.param;
        if ( !updated )
          goto LABEL_1104;
        updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0);
        if ( !updated )
          goto LABEL_1104;
        v158 = *(_QWORD *)(updated + 24);
        v50 = updated;
        if ( (int)v158 <= 0 )
          break;
        if ( (int)v158 > 2 )
        {
          v440 = System_Single__Parse(*(System_String_o **)(updated + 48), 0);
          v158 = *(_QWORD *)(v50 + 24);
          v51 = v440 * 0.001;
        }
        else
        {
          v51 = 0.5;
        }
        if ( (int)v158 >= 2 )
        {
          updated = System_Int32__Parse(*(System_String_o **)(v50 + 40), 0);
          v158 = *(_QWORD *)(v50 + 24);
          v162 = updated;
        }
        else
        {
          v162 = 15;
        }
        if ( !(_DWORD)v158 )
          goto LABEL_1105;
        v451 = *v9;
        updated = System_Int32__Parse(*(System_String_o **)(v50 + 32), 0);
        if ( !v451 )
          goto LABEL_1104;
        v453 = (UnityEngine_Object_o *)QuestAfterAction__GetMapGameObject(v451, 1, updated, this, v452);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        updated = UnityEngine_Object__op_Equality(v453, 0, 0);
        if ( (updated & 1) != 0 )
          return;
        if ( this->fields.IsMapModel )
        {
          if ( !v453 )
            goto LABEL_1104;
          updated = (__int64)UnityEngine_GameObject__GetComponent_object_(
                               (UnityEngine_GameObject_o *)v453,
                               (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_ModelLineComponent___);
          if ( !updated )
            goto LABEL_1104;
          Position = GameObjectExtensions__GetPosition((UnityEngine_GameObject_o *)*(_QWORD *)(updated + 32), 0);
          v454 = Position.fields.x;
          v455 = Position.fields.y;
          v456 = Position.fields.z;
          if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          if ( !byte_4C319B6 )
          {
            sub_1C32C20(&TerminalSceneComponent_TypeInfo);
            byte_4C319B6 = 1;
          }
          updated = (__int64)TerminalSceneComponent_TypeInfo;
          if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            updated = (__int64)TerminalSceneComponent_TypeInfo;
          }
          v457 = **(_QWORD **)(updated + 184);
          if ( !v457 )
            goto LABEL_1104;
          updated = *(_QWORD *)(v457 + 264);
          if ( !updated )
            goto LABEL_1104;
          v626.fields.x = v454;
          v626.fields.y = v455;
          v626.fields.z = v456;
          v627 = ScrTerminalMap__ConvertWorldToScreenPosition((ScrTerminalMap_o *)updated, v626, 0);
        }
        else
        {
          v627 = GameObjectExtensions__GetLocalPosition((UnityEngine_GameObject_o *)v453, 0);
        }
        v540 = v627.fields.x;
        v541 = v627.fields.y;
        v542 = v627.fields.z;
        if ( !FSUtility_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
        updated = FSUtility__IsUnderVista(0);
        if ( (updated & 1) != 0 )
          goto LABEL_1035;
        if ( !*(_DWORD *)(v50 + 24) )
          goto LABEL_1105;
        v543 = *(System_String_o **)(v50 + 32);
        updated = System_String__op_Equality(v543, (System_String_o *)StringLiteral_1308/*"10703"*/, 0);
        if ( (updated & 1) != 0 )
        {
          v541 = v541 + -95.0;
        }
        else
        {
          updated = System_String__op_Equality(v543, (System_String_o *)StringLiteral_1382/*"30102"*/, 0);
          if ( (updated & 1) != 0 )
            v541 = v541 + 45.0;
        }
LABEL_1035:
        v564 = *(_DWORD *)(v50 + 24);
        if ( v14->fields.id == 306 )
        {
          if ( v564 >= 4 )
          {
            if ( v564 == 4 )
            {
              if ( !*v9 )
                goto LABEL_1104;
              mMapCamera = (*v9)->fields.mMapCamera;
            }
            else
            {
              updated = System_Int32__Parse(*(System_String_o **)(v50 + 64), 0);
              if ( !*v9 )
                goto LABEL_1104;
              mMapCamera = (*v9)->fields.mMapCamera;
              if ( (int)updated >= 1 )
              {
                *(_QWORD *)&v606.fields.hasValue = 0;
                *(_QWORD *)&v606.fields.value.fields.y = 0;
                *(_QWORD *)&v568.fields.hasValue = &v606;
                v566 = v540;
                *(_QWORD *)&v568.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
                v567 = v541;
                v569 = v542;
                goto LABEL_1084;
              }
            }
            v606 = (System_Nullable_Vector3__o)0LL;
            *(_QWORD *)&v572.fields.hasValue = &v606;
            v570 = v540;
            *(_QWORD *)&v572.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
            v571 = v541;
            v573 = v542;
            goto LABEL_1089;
          }
          goto LABEL_1042;
        }
        if ( v564 < 4 )
        {
LABEL_1042:
          if ( !*v9 )
            goto LABEL_1104;
          v565 = (*v9)->fields.mMapCamera;
LABEL_1044:
          v251 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
          System_Action___ctor(v251, (Il2CppObject *)this, (intptr_t)this->klass->vtable._14_EndAnim.method, 0);
          if ( !v565 )
            goto LABEL_1104;
          v252 = v565;
          v253 = v540;
          v254 = v541;
          v255 = v542;
          goto LABEL_1046;
        }
        updated = System_Int32__Parse(*(System_String_o **)(v50 + 56), 0);
        v574 = *v9;
        if ( !*v9 )
          goto LABEL_1104;
        v565 = v574->fields.mMapCamera;
        if ( (int)updated < 1 )
          goto LABEL_1044;
        if ( !v565 )
          goto LABEL_1104;
        v465 = v574->fields.mMapCamera;
        v466 = v540;
        v467 = v541;
        v468 = v542;
        goto LABEL_1062;
      case 302:
      case 307:
        updated = (__int64)v14->fields.param;
        if ( !updated )
          goto LABEL_1104;
        updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0);
        if ( !updated )
          goto LABEL_1104;
        v159 = *(_QWORD *)(updated + 24);
        v50 = updated;
        if ( (int)v159 <= 0 )
          break;
        if ( (int)v159 > 2 )
        {
          v441 = System_Single__Parse(*(System_String_o **)(updated + 48), 0);
          v159 = *(_QWORD *)(v50 + 24);
          v51 = v441 * 0.001;
        }
        else
        {
          v51 = 0.5;
        }
        if ( (int)v159 >= 2 )
        {
          updated = System_Int32__Parse(*(System_String_o **)(v50 + 40), 0);
          v159 = *(_QWORD *)(v50 + 24);
          v162 = updated;
        }
        else
        {
          v162 = 15;
        }
        if ( !(_DWORD)v159 )
          goto LABEL_1105;
        v458 = *v9;
        updated = System_Int32__Parse(*(System_String_o **)(v50 + 32), 0);
        if ( !v458 )
          goto LABEL_1104;
        v460 = (UnityEngine_Object_o *)QuestAfterAction__GetMapGameObject(v458, 2, updated, this, v459);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Equality(v460, 0, 0) )
          return;
        v628 = GameObjectExtensions__GetLocalPosition((UnityEngine_GameObject_o *)v460, 0);
        v445 = v628.fields.x;
        v446 = v628.fields.y;
        v447 = v628.fields.z;
        if ( !this->fields.IsMapModel )
          goto LABEL_842;
        if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        if ( !byte_4C319B6 )
        {
          sub_1C32C20(&TerminalSceneComponent_TypeInfo);
          byte_4C319B6 = 1;
        }
        updated = (__int64)TerminalSceneComponent_TypeInfo;
        if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          updated = (__int64)TerminalSceneComponent_TypeInfo;
        }
        v461 = **(_QWORD **)(updated + 184);
        if ( !v461 )
          goto LABEL_1104;
        updated = *(_QWORD *)(v461 + 264);
        if ( !updated )
          goto LABEL_1104;
        v629.fields.x = v445;
        v629.fields.y = v446;
        v629.fields.z = v447;
        v630 = ScrTerminalMap__ConvertLocalToScreenPosition((ScrTerminalMap_o *)updated, v629, 0);
        v445 = v630.fields.x;
        v446 = v630.fields.y;
        v447 = v630.fields.z;
LABEL_842:
        v462 = *(_DWORD *)(v50 + 24);
        if ( v14->fields.id != 307 )
          goto LABEL_843;
        goto LABEL_1024;
      case 303:
      case 308:
        updated = (__int64)v14->fields.param;
        if ( !updated )
          goto LABEL_1104;
        updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0);
        if ( !updated )
          goto LABEL_1104;
        v160 = updated;
        if ( *(int *)(updated + 24) < 4 )
          break;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_4C3456F )
        {
          sub_1C32C20(&TerminalPramsManager_TypeInfo);
          byte_4C3456F = 1;
        }
        updated = (__int64)TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          updated = (__int64)TerminalPramsManager_TypeInfo;
        }
        if ( *(_BYTE *)(*(_QWORD *)(updated + 184) + 105LL) )
          break;
        if ( *(_DWORD *)(v160 + 24) <= 2u )
          goto LABEL_1105;
        v161 = System_Single__Parse(*(System_String_o **)(v160 + 48), 0) * 0.001;
        v51 = v161 >= 0.0 ? v161 : 0.5;
        if ( *(_DWORD *)(v160 + 24) <= 3u )
          goto LABEL_1105;
        v162 = System_Int32__Parse(*(System_String_o **)(v160 + 56), 0);
        if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        if ( !byte_4C319B6 )
        {
          sub_1C32C20(&TerminalSceneComponent_TypeInfo);
          byte_4C319B6 = 1;
        }
        updated = (__int64)TerminalSceneComponent_TypeInfo;
        if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          updated = (__int64)TerminalSceneComponent_TypeInfo;
        }
        v163 = **(_QWORD **)(updated + 184);
        if ( !v163 )
          goto LABEL_1104;
        if ( !*(_DWORD *)(v160 + 24) )
          goto LABEL_1105;
        v164 = *(ScrTerminalMap_o **)(v163 + 264);
        v165 = System_Single__Parse(*(System_String_o **)(v160 + 32), 0);
        if ( *(_DWORD *)(v160 + 24) <= 1u )
          goto LABEL_1105;
        v166 = v165;
        v167 = System_Single__Parse(*(System_String_o **)(v160 + 40), 0);
        if ( !v164 )
          goto LABEL_1104;
        v614 = ScrTerminalMap__LocalPosFromCoord(v164, v166, v167, 0.0, 0.0, 0);
        v169 = *(_DWORD *)(v160 + 24);
        v170 = v614.fields.x;
        v171 = v614.fields.y;
        v172 = v614.fields.z;
        if ( v14->fields.id == 308 )
        {
          if ( v169 >= 5 )
          {
            if ( v169 == 5 )
            {
              if ( !*v9 )
                goto LABEL_1104;
              mMapCamera = (*v9)->fields.mMapCamera;
            }
            else
            {
              updated = System_Int32__Parse(*(System_String_o **)(v160 + 72), 0);
              if ( !*v9 )
                goto LABEL_1104;
              mMapCamera = (*v9)->fields.mMapCamera;
              if ( (int)updated >= 1 )
              {
                *(_QWORD *)&v612.fields.hasValue = &v606;
                v633.fields.x = v170;
                v633.fields.y = v171;
                *(_QWORD *)&v612.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
                v633.fields.z = v172;
                v606 = (System_Nullable_Vector3__o)0LL;
                System_Nullable_Vector3____ctor(v612, v633, v168);
                if ( *(_DWORD *)(v160 + 24) <= 4u )
                  goto LABEL_1105;
                v588 = *(System_String_o **)(v160 + 64);
                goto LABEL_1086;
              }
            }
            *(_QWORD *)&v613.fields.hasValue = &v606;
            v634.fields.x = v170;
            v634.fields.y = v171;
            *(_QWORD *)&v613.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
            v634.fields.z = v172;
            v606 = (System_Nullable_Vector3__o)0LL;
            System_Nullable_Vector3____ctor(v613, v634, v168);
            if ( *(_DWORD *)(v160 + 24) <= 4u )
              goto LABEL_1105;
            v592 = *(System_String_o **)(v160 + 64);
            goto LABEL_1091;
          }
          goto LABEL_1005;
        }
        if ( v169 < 5 )
        {
LABEL_1005:
          if ( !*v9 )
            goto LABEL_1104;
          v551 = (*v9)->fields.mMapCamera;
LABEL_1007:
          v251 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
          System_Action___ctor(v251, (Il2CppObject *)this, (intptr_t)this->klass->vtable._14_EndAnim.method, 0);
          if ( !v551 )
            goto LABEL_1104;
          v252 = v551;
          v253 = v170;
          v254 = v171;
          v255 = v172;
LABEL_1046:
          v256 = v51;
          v257 = v162;
LABEL_1047:
          MapCamera__StartAutoMove(v252, *(UnityEngine_Vector3_o *)&v253, v256, v257, v251, 0);
          return;
        }
        updated = System_Int32__Parse(*(System_String_o **)(v160 + 64), 0);
        v575 = *v9;
        if ( !*v9 )
          goto LABEL_1104;
        v551 = v575->fields.mMapCamera;
        if ( (int)updated < 1 )
          goto LABEL_1007;
        if ( !v551 )
          goto LABEL_1104;
        v465 = v575->fields.mMapCamera;
        v466 = v170;
        v467 = v171;
        v468 = v172;
LABEL_1062:
        MapCamera__StartAutoMove(v465, *(UnityEngine_Vector3_o *)&v466, v51, v162, 0, 0);
        break;
      case 304:
        updated = (__int64)v14->fields.param;
        if ( !updated )
          goto LABEL_1104;
        updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0);
        if ( !updated )
          goto LABEL_1104;
        v201 = *(_DWORD *)(updated + 24);
        v202 = updated;
        if ( v201 <= 1 )
          break;
        v203 = System_Single__Parse(*(System_String_o **)(updated + 32), 0);
        if ( *(_DWORD *)(v202 + 24) <= 1u )
          goto LABEL_1105;
        v204 = v203;
        v205 = System_Single__Parse(*(System_String_o **)(v202 + 40), 0);
        if ( !*v9 )
          goto LABEL_1104;
        v206 = (*v9)->fields.mMapCamera;
        v207 = v205 * 0.001;
        if ( v207 >= 0.0 )
          v208 = v207;
        else
          v208 = 0.5;
        if ( v201 < 3 )
        {
          v209 = 5;
        }
        else
        {
          if ( *(_DWORD *)(v202 + 24) <= 2u )
            goto LABEL_1105;
          v209 = System_Int32__Parse(*(System_String_o **)(v202 + 48), 0);
        }
        v505 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
        System_Action___ctor(
          v505,
          (Il2CppObject *)v5,
          Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__9__,
          0);
        if ( !v206 )
          goto LABEL_1104;
        MapCamera__StartAutoZoom(v206, v204, v208, v209, v505, 0);
        return;
      default:
        if ( id == 350 )
        {
          updated = (__int64)v14->fields.param;
          if ( !updated )
            goto LABEL_1104;
          updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0);
          if ( !updated )
            goto LABEL_1104;
          v153 = updated;
          if ( *(int *)(updated + 24) > 0 )
          {
            v154 = System_Int32__Parse(*(System_String_o **)(updated + 32), 0);
            if ( v154 >= 1 )
            {
              v155 = v154;
              v156 = 0.5;
              if ( *(int *)(v153 + 24) > 1 )
              {
                v157 = System_Int32__Parse(*(System_String_o **)(v153 + 40), 0);
                if ( *(int *)(v153 + 24) >= 3 )
                  v156 = System_Single__Parse(*(System_String_o **)(v153 + 48), 0) * 0.001;
              }
              else
              {
                v157 = 15;
              }
              if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
              if ( !byte_4C319B6 )
              {
                sub_1C32C20(&TerminalSceneComponent_TypeInfo);
                byte_4C319B6 = 1;
              }
              updated = (__int64)TerminalSceneComponent_TypeInfo;
              if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
                updated = (__int64)TerminalSceneComponent_TypeInfo;
              }
              v544 = **(_QWORD **)(updated + 184);
              if ( !v544 )
                goto LABEL_1104;
              v545 = *(ScrTerminalMap_o **)(v544 + 264);
              v546 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
              System_Action___ctor(
                v546,
                (Il2CppObject *)v5,
                Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__10__,
                0);
              if ( !v545 )
                goto LABEL_1104;
              ScrTerminalMap__RequestMapMove_37012344(v545, v155, v156, v157, v546, 0);
              return;
            }
          }
        }
        else
        {
          if ( (unsigned int)(id - 351) >= 2 )
            return;
          updated = (__int64)v14->fields.param;
          if ( !updated )
            goto LABEL_1104;
          updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0);
          if ( !updated )
            goto LABEL_1104;
          v234 = updated;
          if ( *(int *)(updated + 24) > 4 )
          {
            v235 = System_Single__Parse(*(System_String_o **)(updated + 32), 0);
            if ( *(_DWORD *)(v234 + 24) <= 1u )
              goto LABEL_1105;
            v236 = v235;
            v237 = System_Single__Parse(*(System_String_o **)(v234 + 40), 0);
            if ( *(_DWORD *)(v234 + 24) <= 2u )
              goto LABEL_1105;
            v238 = v237;
            v239 = System_Single__Parse(*(System_String_o **)(v234 + 48), 0);
            if ( *(_DWORD *)(v234 + 24) <= 3u )
              goto LABEL_1105;
            v240 = v239;
            v241 = System_Single__Parse(*(System_String_o **)(v234 + 56), 0);
            if ( *(_DWORD *)(v234 + 24) <= 4u )
              goto LABEL_1105;
            v242 = v241;
            v243 = System_Int32__Parse(*(System_String_o **)(v234 + 64), 0);
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            if ( !byte_4C319B6 )
            {
              sub_1C32C20(&TerminalSceneComponent_TypeInfo);
              byte_4C319B6 = 1;
            }
            updated = (__int64)TerminalSceneComponent_TypeInfo;
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
              updated = (__int64)TerminalSceneComponent_TypeInfo;
            }
            v244 = **(_QWORD **)(updated + 184);
            if ( !v244 )
              goto LABEL_1104;
            updated = *(_QWORD *)(v244 + 264);
            if ( !updated )
              goto LABEL_1104;
            v615.fields.y = v238;
            v615.fields.z = v240;
            v245 = v242 * 0.001;
            v615.fields.x = v236;
            v616 = ScrTerminalMap__ConvertLocalToScreenPosition((ScrTerminalMap_o *)updated, v615, 0);
            v247 = v616.fields.x;
            v248 = v616.fields.y;
            v249 = v616.fields.z;
            if ( v14->fields.id != 352 || *(int *)(v234 + 24) < 6 )
            {
              if ( !*v9 )
                goto LABEL_1104;
              v250 = (*v9)->fields.mMapCamera;
              v251 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
              System_Action___ctor(
                v251,
                (Il2CppObject *)v5,
                Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__12__,
                0);
              if ( !v250 )
                goto LABEL_1104;
              v252 = v250;
              v253 = v247;
              v254 = v248;
              v255 = v249;
              v256 = v245;
              v257 = v243;
              goto LABEL_1047;
            }
            if ( !*v9 )
              goto LABEL_1104;
            v601 = (*v9)->fields.mMapCamera;
            *(_QWORD *)&v611.fields.hasValue = &v606;
            *(_QWORD *)&v611.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
            v606 = (System_Nullable_Vector3__o)0LL;
            System_Nullable_Vector3____ctor(v611, v616, v246);
            if ( *(_DWORD *)(v234 + 24) <= 5u )
              goto LABEL_1105;
            v602 = System_Single__Parse(*(System_String_o **)(v234 + 72), 0);
            v603 = (System_Nullable_float__o)&size;
            size = 0;
            System_Nullable_float____ctor(v603, v602, (const MethodInfo_38C063C *)Method_System_Nullable_float___ctor__);
            v595 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
            System_Action___ctor(
              v595,
              (Il2CppObject *)v5,
              Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__11__,
              0);
            if ( !v601 )
              goto LABEL_1104;
            v596 = v606;
            v597 = size;
            v598 = v601;
            v599 = v245;
            v600 = v243;
LABEL_1093:
            MapCamera__StartAutoWork(v598, v599, v596, v597, v600, v595, 0);
            return;
          }
        }
        break;
    }
LABEL_999:
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
      *v9,
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
  const MethodInfo *v3; // x3
  TerminalSceneComponent_c *screenCollider; // x0
  struct QuestAfterAction_o *v7; // x8
  struct TerminalSceneComponent_o *mInstance; // x8

  if ( (byte_4C3455F & 1) == 0 )
  {
    sub_1C32C20(&TerminalSceneComponent_TypeInfo);
    byte_4C3455F = 1;
  }
  this->fields.that = that;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields, (int32_t)that, (int32_t)method, v3);
  v7 = this->fields.that;
  if ( !v7 )
    goto LABEL_14;
  screenCollider = (TerminalSceneComponent_c *)v7->fields.screenCollider;
  if ( !screenCollider )
    goto LABEL_14;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)screenCollider, 1, 0);
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4C319B6 )
  {
    sub_1C32C20(&TerminalSceneComponent_TypeInfo);
    byte_4C319B6 = 1;
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
    sub_1C32E7C(screenCollider);
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
    sub_1C32E7C(this);
  return that->fields.commandBuf;
}


int32_t QuestAfterAction_StateMain__get_CommandIndex(QuestAfterAction_StateMain_o *this, const MethodInfo *method)
{
  struct QuestAfterAction_o *that; // x8

  that = this->fields.that;
  if ( !that )
    sub_1C32E7C(this);
  return that->fields.commandIdx;
}


UnityEngine_GameObject_o *QuestAfterAction_StateMain__get_SubGimmickRoot(
        QuestAfterAction_StateMain_o *this,
        const MethodInfo *method)
{
  TerminalSceneComponent_c *v2; // x0
  struct TerminalSceneComponent_o *mInstance; // x8
  struct ScrTerminalMap_o *mTerminalMap; // x8

  if ( (byte_4C3455E & 1) == 0 )
  {
    sub_1C32C20(&TerminalSceneComponent_TypeInfo);
    byte_4C3455E = 1;
  }
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4C319B6 )
  {
    sub_1C32C20(&TerminalSceneComponent_TypeInfo);
    byte_4C319B6 = 1;
  }
  v2 = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v2 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = v2->static_fields->mInstance;
  if ( !mInstance || (mTerminalMap = mInstance->fields.mTerminalMap) == 0 )
    sub_1C32E7C(v2);
  return mTerminalMap->fields.subRootGimmickP;
}


void QuestAfterAction_StateMain__onEnd(QuestAfterAction_StateMain_o *this, bool deleteKey, const MethodInfo *method)
{
  TerminalSceneComponent_c *v5; // x0
  TerminalSceneComponent_o *mInstance; // x0
  const MethodInfo *v7; // x1
  const MethodInfo *v8; // x1

  if ( (byte_4C34561 & 1) == 0 )
  {
    sub_1C32C20(&TerminalSceneComponent_TypeInfo);
    sub_1C32C20(&StringLiteral_16711/*"afterActionBk"*/);
    byte_4C34561 = 1;
  }
  if ( deleteKey )
    UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_16711/*"afterActionBk"*/, 0);
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4C319B6 )
  {
    sub_1C32C20(&TerminalSceneComponent_TypeInfo);
    byte_4C319B6 = 1;
  }
  v5 = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v5 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = v5->static_fields->mInstance;
  if ( !mInstance
    || (TerminalSceneComponent__ClearTransitionInfo(mInstance, 0),
        QuestAfterAction_StateMain__StartMapGimmick(this, v7),
        (mInstance = (TerminalSceneComponent_o *)this->fields.that) == 0) )
  {
    sub_1C32E7C(mInstance);
  }
  QuestAfterAction__OnEnd((QuestAfterAction_o *)mInstance, v8);
}


void QuestAfterAction_StateMain__set_CommandIndex(
        QuestAfterAction_StateMain_o *this,
        int32_t value,
        const MethodInfo *method)
{
  struct QuestAfterAction_o *that; // x8

  that = this->fields.that;
  if ( !that )
    sub_1C32E7C(this);
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
  const MethodInfo *v3; // x3

  if ( (byte_4C3460E & 1) == 0 )
  {
    sub_1C32C20(&QuestAfterAction_StateMain___c_TypeInfo);
    byte_4C3460E = 1;
  }
  v1 = (Il2CppObject *)sub_1C32E6C(QuestAfterAction_StateMain___c_TypeInfo);
  System_Object___ctor(v1, 0);
  QuestAfterAction_StateMain___c_TypeInfo->static_fields->__9 = (struct QuestAfterAction_StateMain___c_o *)v1;
  sub_1C32BC4((CGThumbnailListItem_o *)QuestAfterAction_StateMain___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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
  const MethodInfo *v11; // x3

  if ( (byte_4C3460F & 1) == 0 )
  {
    sub_1C32C20(&ScriptManager_CallbackFunc_TypeInfo);
    sub_1C32C20(&ScriptManager_TypeInfo);
    sub_1C32C20(&TerminalPramsManager_TypeInfo);
    sub_1C32C20(&Method_QuestAfterAction_StateMain___c__UpdateAnim_b__16_27__);
    sub_1C32C20(&QuestAfterAction_StateMain___c_TypeInfo);
    byte_4C3460F = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C31DAD )
  {
    sub_1C32C20(&TerminalPramsManager_TypeInfo);
    byte_4C31DAD = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  WarId_k__BackingField = v2->static_fields->_WarId_k__BackingField;
  if ( !byte_4C31A97 )
  {
    sub_1C32C20(&TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
    byte_4C31A97 = 1;
  }
  if ( !v2->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v2);
    v2 = TerminalPramsManager_TypeInfo;
  }
  QuestId_k__BackingField = v2->static_fields->_QuestId_k__BackingField;
  if ( !byte_4C31A96 )
  {
    sub_1C32C20(&TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
    byte_4C31A96 = 1;
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
    _9__16_27 = (ScriptManager_CallbackFunc_o *)sub_1C32E6C(ScriptManager_CallbackFunc_TypeInfo);
    ScriptManager_CallbackFunc___ctor(_9__16_27, v8, Method_QuestAfterAction_StateMain___c__UpdateAnim_b__16_27__, 0);
    static_fields = QuestAfterAction_StateMain___c_TypeInfo->static_fields;
    static_fields->__9__16_27 = _9__16_27;
    sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__16_27, (int32_t)_9__16_27, v10, v11);
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
  const MethodInfo *v8; // x3
  Il2CppObject *Request_object; // x19
  TerminalPramsManager_c *v10; // x0
  int32_t QuestId_k__BackingField; // w21
  int32_t PhaseCnt_k__BackingField; // w20
  System_Int32_array *SelectRouteArray; // x0

  if ( (byte_4C34610 & 1) == 0 )
  {
    sub_1C32C20(&Method_NetworkManager_getRequest_BattleScenarioRequest___);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1C32C20(&ScriptManager_TypeInfo);
    sub_1C32C20(&TerminalPramsManager_TypeInfo);
    sub_1C32C20(&Method_QuestAfterAction_StateMain___c__UpdateAnim_b__16_28__);
    sub_1C32C20(&QuestAfterAction_StateMain___c_TypeInfo);
    byte_4C34610 = 1;
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
    _9__16_28 = (NetworkManager_ResultCallbackFunc_o *)sub_1C32E6C(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      _9__16_28,
      v5,
      Method_QuestAfterAction_StateMain___c__UpdateAnim_b__16_28__,
      0);
    static_fields = QuestAfterAction_StateMain___c_TypeInfo->static_fields;
    static_fields->__9__16_28 = _9__16_28;
    sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__16_28, (int32_t)_9__16_28, v7, v8);
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     _9__16_28,
                     (const MethodInfo_3168488 *)Method_NetworkManager_getRequest_BattleScenarioRequest___);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C31A97 )
  {
    sub_1C32C20(&TerminalPramsManager_TypeInfo);
    byte_4C31A97 = 1;
  }
  v10 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v10 = TerminalPramsManager_TypeInfo;
  }
  QuestId_k__BackingField = v10->static_fields->_QuestId_k__BackingField;
  if ( !byte_4C31A96 )
  {
    sub_1C32C20(&TerminalPramsManager_TypeInfo);
    v10 = TerminalPramsManager_TypeInfo;
    byte_4C31A96 = 1;
  }
  if ( !v10->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v10);
    v10 = TerminalPramsManager_TypeInfo;
  }
  PhaseCnt_k__BackingField = v10->static_fields->_PhaseCnt_k__BackingField;
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  SelectRouteArray = ScriptManager__GetSelectRouteArray(0);
  if ( !Request_object )
    sub_1C32E7C(SelectRouteArray);
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

  if ( (byte_4C34611 & 1) == 0 )
  {
    sub_1C32C20(&Method_JsonManager_DeserializeArray_BattleResultComponent_resultData___);
    sub_1C32C20(&JsonManager_TypeInfo);
    sub_1C32C20(&ScriptManager_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C32C20(&TerminalPramsManager_TypeInfo);
    sub_1C32C20(&StringLiteral_16711/*"afterActionBk"*/);
    sub_1C32C20(&StringLiteral_15802/*"["*/);
    sub_1C32C20(&StringLiteral_16056/*"]"*/);
    sub_1C32C20(&StringLiteral_13716/*"TerminalTransitionInfoMissionId"*/);
    byte_4C34611 = 1;
  }
  v4 = (Il2CppObject *)System_String__Concat_63556792(
                         (System_String_o *)StringLiteral_15802/*"["*/,
                         jsonstr,
                         (System_String_o *)StringLiteral_16056/*"]"*/,
                         0);
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v5 = JsonManager__DeserializeArray_object_(
         v4,
         (const MethodInfo_314C85C *)Method_JsonManager_DeserializeArray_BattleResultComponent_resultData___);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_16711/*"afterActionBk"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13716/*"TerminalTransitionInfoMissionId"*/, 0);
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  ScriptManager__ClearSelectRouteArray(0);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  TerminalPramsManager__ReceiveQuestEndResultInfo((BattleResultComponent_resultData_array *)v5, 1, 0);
  if ( !byte_4C3219C )
  {
    sub_1C32C20(&TerminalPramsManager_TypeInfo);
    byte_4C3219C = 1;
  }
  v6 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v6 = TerminalPramsManager_TypeInfo;
  }
  v6->static_fields->_IsAutoResume_k__BackingField = 1;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1C32E7C(0);
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
    sub_1C32E7C(0);
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
    sub_1C32E7C(0);
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
    sub_1C32E7C(0);
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
    sub_1C32E7C(_4__this);
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
    sub_1C32E7C(0);
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
    sub_1C32E7C(0);
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
    sub_1C32E7C(0);
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
    sub_1C32E7C(0);
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
    sub_1C32E7C(0);
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
    sub_1C32E7C(0);
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
    sub_1C32E7C(spot);
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
    sub_1C32E7C(this);
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
    sub_1C32E7C(this);
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
    sub_1C32E7C(this);
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
    sub_1C32E7C(this);
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
    sub_1C32E7C(this);
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
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  UnityEngine_Component_o *v7; // x22
  Il2CppObject *v8; // x0
  UnityEngine_Color_o **v9; // x21
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  struct System_String_array *paramsStr; // x8
  struct System_String_array *v13; // x8
  UnityEngine_Color_o *v14; // x20
  float v15; // s0
  UITweener_o *v16; // x20
  EventDelegate_Callback_o *v17; // x21
  UnityEngine_Color_o color; // [xsp+10h] [xbp-40h] BYREF

  if ( (byte_4C34612 & 1) == 0 )
  {
    sub_1C32C20(&EventDelegate_Callback_TypeInfo);
    sub_1C32C20(&Method_UnityEngine_GameObject_AddComponent_TweenColor___);
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponentInChildren_UISprite___);
    sub_1C32C20(&Method_QuestAfterAction_StateMain___c__DisplayClass16_14__UpdateAnim_b__19__);
    sub_1C32C20(&QuestAfterAction_StateMain___c__DisplayClass16_14_TypeInfo);
    byte_4C34612 = 1;
  }
  *(_QWORD *)&color.fields.r = 0;
  *(_QWORD *)&color.fields.b = 0;
  v3 = sub_1C32E6C(QuestAfterAction_StateMain___c__DisplayClass16_14_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !v3 )
    goto LABEL_18;
  *(_QWORD *)(v3 + 24) = this;
  sub_1C32BC4((CGThumbnailListItem_o *)(v3 + 24), (int32_t)this, v5, v6);
  mapGimmick = (UnityEngine_Component_o *)this->fields.mapGimmick;
  if ( !mapGimmick )
    goto LABEL_18;
  mapGimmick = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mapGimmick, 0);
  if ( !mapGimmick )
    goto LABEL_18;
  mapGimmick = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponentInChildren_object_(
                                            (UnityEngine_GameObject_o *)mapGimmick,
                                            (const MethodInfo_3134BD4 *)Method_UnityEngine_GameObject_GetComponentInChildren_UISprite___);
  if ( !mapGimmick )
    goto LABEL_18;
  v7 = mapGimmick;
  mapGimmick = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mapGimmick, 0);
  if ( !mapGimmick )
    goto LABEL_18;
  v8 = UnityEngine_GameObject__AddComponent_object_(
         (UnityEngine_GameObject_o *)mapGimmick,
         (const MethodInfo_3134888 *)Method_UnityEngine_GameObject_AddComponent_TweenColor___);
  *(_QWORD *)(v3 + 16) = v8;
  v9 = (UnityEngine_Color_o **)(v3 + 16);
  sub_1C32BC4((CGThumbnailListItem_o *)(v3 + 16), (int32_t)v8, v10, v11);
  paramsStr = this->fields.paramsStr;
  if ( !paramsStr )
    goto LABEL_18;
  if ( LODWORD(paramsStr->max_length) <= 1 )
    goto LABEL_19;
  mapGimmick = (UnityEngine_Component_o *)UnityEngine_ColorUtility__TryParseHtmlString(paramsStr->m_Items[1], &color, 0);
  if ( !*v9
    || ((*v9)[8] = *(UnityEngine_Color_o *)((char *)&v7[6].klass + 4), !*v9)
    || ((*v9)[9] = color, (v13 = this->fields.paramsStr) == 0) )
  {
LABEL_18:
    sub_1C32E7C(mapGimmick);
  }
  if ( LODWORD(v13->max_length) <= 2 )
LABEL_19:
    sub_1C32E84(mapGimmick);
  v14 = *v9;
  v15 = System_Single__Parse(v13->m_Items[2], 0);
  if ( !v14 )
    goto LABEL_18;
  v14[3].fields.b = v15;
  mapGimmick = (UnityEngine_Component_o *)*v9;
  if ( !*v9 )
    goto LABEL_18;
  UITweener__PlayForward((UITweener_o *)mapGimmick, 0);
  v16 = *(UITweener_o **)(v3 + 16);
  v17 = (EventDelegate_Callback_o *)sub_1C32E6C(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(
    v17,
    (Il2CppObject *)v3,
    Method_QuestAfterAction_StateMain___c__DisplayClass16_14__UpdateAnim_b__19__,
    0);
  if ( !v16 )
    goto LABEL_18;
  UITweener__SetOnFinished(v16, v17, 0);
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
  struct QuestAfterAction_StateMain___c__DisplayClass16_13_o *CS___8__locals14; // x8
  struct QuestAfterAction_StateMain___c__DisplayClass16_0_o *CS___8__locals13; // x8

  if ( (byte_4C34613 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C34613 = 1;
  }
  tween = (UnityEngine_Object_o *)this->fields.tween;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_71223640(tween, 0);
  CS___8__locals14 = this->fields.CS___8__locals14;
  if ( !CS___8__locals14
    || (CS___8__locals13 = CS___8__locals14->fields.CS___8__locals13) == 0
    || (_4__this = CS___8__locals13->fields.__4__this) == 0 )
  {
    sub_1C32E7C(_4__this);
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
    sub_1C32E7C(this);
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
    sub_1C32E7C(this);
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
  const MethodInfo *v11; // x3
  clsQuestCheck_o *v12; // x19
  QuestAfterAction_StateMain___c_c *v13; // x8
  System_Action_o *_9__16_26; // x20
  Il2CppObject *v15; // x21
  struct QuestAfterAction_StateMain___c_StaticFields *static_fields; // x0
  int32_t v17; // w2
  const MethodInfo *v18; // x3

  if ( (byte_4C34614 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    sub_1C32C20(&TerminalPramsManager_TypeInfo);
    sub_1C32C20(&TerminalSceneComponent_TypeInfo);
    sub_1C32C20(&Method_QuestAfterAction_StateMain___c__UpdateAnim_b__16_26__);
    sub_1C32C20(&Method_QuestAfterAction_StateMain___c__DisplayClass16_16__UpdateAnim_b__25__);
    sub_1C32C20(&QuestAfterAction_StateMain___c_TypeInfo);
    byte_4C34614 = 1;
  }
  questEntity = this->fields.questEntity;
  if ( !questEntity )
    goto LABEL_34;
  if ( QuestEntity__HasFlag(questEntity, 0x800000000000LL, 0) )
  {
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    if ( !byte_4C319B6 )
    {
      sub_1C32C20(&TerminalSceneComponent_TypeInfo);
      byte_4C319B6 = 1;
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
      if ( !byte_4C31A97 )
      {
        sub_1C32C20(&TerminalPramsManager_TypeInfo);
        byte_4C31A97 = 1;
      }
      questEntity = (QuestEntity_o *)TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        questEntity = (QuestEntity_o *)TerminalPramsManager_TypeInfo;
      }
      name_high = HIDWORD(questEntity[1].klass->_1.name);
      if ( !byte_4C31A96 )
      {
        sub_1C32C20(&TerminalPramsManager_TypeInfo);
        questEntity = (QuestEntity_o *)TerminalPramsManager_TypeInfo;
        byte_4C31A96 = 1;
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
        _9__25 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
        System_Action___ctor(
          _9__25,
          (Il2CppObject *)this,
          Method_QuestAfterAction_StateMain___c__DisplayClass16_16__UpdateAnim_b__25__,
          0);
        this->fields.__9__25 = _9__25;
        sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.__9__25, (int32_t)_9__25, v10, v11);
      }
      if ( v6 )
      {
        ScrTerminalListTop__StartWindowMessage_36856952(v6, name_high, namespaze + 1, 2, _9__25, 1, 0);
        return;
      }
    }
LABEL_34:
    sub_1C32E7C(questEntity);
  }
  questEntity = (QuestEntity_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39E2DF4 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  v12 = (clsQuestCheck_o *)questEntity;
  v13 = QuestAfterAction_StateMain___c_TypeInfo;
  if ( !QuestAfterAction_StateMain___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestAfterAction_StateMain___c_TypeInfo);
    v13 = QuestAfterAction_StateMain___c_TypeInfo;
  }
  _9__16_26 = v13->static_fields->__9__16_26;
  if ( !_9__16_26 )
  {
    if ( !v13->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v13);
      v13 = QuestAfterAction_StateMain___c_TypeInfo;
    }
    v15 = (Il2CppObject *)v13->static_fields->__9;
    _9__16_26 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
    System_Action___ctor(_9__16_26, v15, Method_QuestAfterAction_StateMain___c__UpdateAnim_b__16_26__, 0);
    static_fields = QuestAfterAction_StateMain___c_TypeInfo->static_fields;
    static_fields->__9__16_26 = _9__16_26;
    sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__16_26, (int32_t)_9__16_26, v17, v18);
  }
  if ( !v12 )
    goto LABEL_34;
  clsQuestCheck__PlayQuestStartAction(v12, _9__16_26, 0);
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

  if ( (byte_4C34615 & 1) == 0 )
  {
    sub_1C32C20(&MyRoomParamsManager_TypeInfo);
    sub_1C32C20(&TerminalPramsManager_TypeInfo);
    sub_1C32C20(&TerminalSceneComponent_TypeInfo);
    sub_1C32C20(&StringLiteral_16711/*"afterActionBk"*/);
    sub_1C32C20(&StringLiteral_13716/*"TerminalTransitionInfoMissionId"*/);
    byte_4C34615 = 1;
  }
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4C319B6 )
  {
    sub_1C32C20(&TerminalSceneComponent_TypeInfo);
    byte_4C319B6 = 1;
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
  if ( !byte_4C319B6 )
  {
    sub_1C32C20(&TerminalSceneComponent_TypeInfo);
    byte_4C319B6 = 1;
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
    sub_1C32E7C(_4__this);
  ScrTerminalMap__AllMaskEnd(_4__this, 0);
LABEL_21:
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4C319B6 )
  {
    sub_1C32C20(&TerminalSceneComponent_TypeInfo);
    byte_4C319B6 = 1;
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
  if ( !byte_4C31A97 )
  {
    sub_1C32C20(&TerminalPramsManager_TypeInfo);
    byte_4C31A97 = 1;
  }
  v7 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v7 = TerminalPramsManager_TypeInfo;
  }
  QuestId_k__BackingField = v7->static_fields->_QuestId_k__BackingField;
  if ( !byte_4C346C0 )
  {
    sub_1C32C20(&TerminalPramsManager_TypeInfo);
    v7 = TerminalPramsManager_TypeInfo;
    byte_4C346C0 = 1;
  }
  if ( !v7->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v7);
    v7 = TerminalPramsManager_TypeInfo;
  }
  v7->static_fields->_LastPlayedQuestId_k__BackingField = QuestId_k__BackingField;
  if ( !byte_4C31A97 )
  {
    sub_1C32C20(&TerminalPramsManager_TypeInfo);
    v7 = TerminalPramsManager_TypeInfo;
    byte_4C31A97 = 1;
  }
  if ( !v7->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v7);
    v7 = TerminalPramsManager_TypeInfo;
  }
  TerminalPramsManager__CheckClearSelectedStoryQuestId(v7->static_fields->_QuestId_k__BackingField, 0);
  if ( !byte_4C31A97 )
  {
    sub_1C32C20(&TerminalPramsManager_TypeInfo);
    byte_4C31A97 = 1;
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
    if ( !byte_4C31A97 )
    {
      sub_1C32C20(&TerminalPramsManager_TypeInfo);
      byte_4C31A97 = 1;
    }
    v12 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v12 = TerminalPramsManager_TypeInfo;
    }
    SpotId = QuestMaster__GetSpotId(v12->static_fields->_QuestId_k__BackingField, 0);
    if ( !byte_4C346C1 )
    {
      sub_1C32C20(&TerminalPramsManager_TypeInfo);
      byte_4C346C1 = 1;
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
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_16711/*"afterActionBk"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13716/*"TerminalTransitionInfoMissionId"*/, 0);
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4C319B6 )
  {
    sub_1C32C20(&TerminalSceneComponent_TypeInfo);
    byte_4C319B6 = 1;
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
  if ( !byte_4C346C2 )
  {
    sub_1C32C20(&TerminalPramsManager_TypeInfo);
    byte_4C346C2 = 1;
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
  if ( !byte_4C31DAD )
  {
    sub_1C32C20(&TerminalPramsManager_TypeInfo);
    byte_4C31DAD = 1;
  }
  v19 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v19 = TerminalPramsManager_TypeInfo;
  }
  WarId_k__BackingField = v19->static_fields->_WarId_k__BackingField;
  if ( !byte_4C3456C )
  {
    sub_1C32C20(&TerminalPramsManager_TypeInfo);
    v19 = TerminalPramsManager_TypeInfo;
    byte_4C3456C = 1;
  }
  if ( !v19->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v19);
    v19 = TerminalPramsManager_TypeInfo;
  }
  v19->static_fields->_BeforeQuestStartWarId_k__BackingField = WarId_k__BackingField;
  if ( !byte_4C319B6 )
  {
    sub_1C32C20(&TerminalSceneComponent_TypeInfo);
    byte_4C319B6 = 1;
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
  if ( !byte_4C31A97 )
  {
    sub_1C32C20(&TerminalPramsManager_TypeInfo);
    byte_4C31A97 = 1;
  }
  _4__this = (ScrTerminalMap_o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    _4__this = (ScrTerminalMap_o *)TerminalPramsManager_TypeInfo;
  }
  m_CachedPtr_high = HIDWORD(_4__this->fields.subRootGimmickP->fields.m_CachedPtr);
  if ( !byte_4C31A96 )
  {
    sub_1C32C20(&TerminalPramsManager_TypeInfo);
    _4__this = (ScrTerminalMap_o *)TerminalPramsManager_TypeInfo;
    byte_4C31A96 = 1;
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
  if ( (byte_4C34616 & 1) == 0 )
  {
    sub_1C32C20(&QuestAfterAction_TypeInfo);
    this = (QuestAfterAction_StateMain___c__DisplayClass16_17_o *)sub_1C32C20(&TerminalSceneComponent_TypeInfo);
    byte_4C34616 = 1;
  }
  if ( v2->fields.bgmVolume > -1.0 )
  {
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    if ( !byte_4C319B6 )
    {
      sub_1C32C20(&TerminalSceneComponent_TypeInfo);
      byte_4C319B6 = 1;
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
      sub_1C32E7C(this);
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
    sub_1C32E7C(spot);
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
    sub_1C32E7C(spot);
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
    sub_1C32E7C(this);
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
    sub_1C32E7C(this);
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
    sub_1C32E7C(this);
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
    sub_1C32E7C(this);
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
    sub_1C32E7C(this);
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
    sub_1C32E7C(this);
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
  const MethodInfo *v3; // x3
  struct System_Action_o *end; // x8
  CGThumbnailListItem_o *p_end; // x19

  p_end = (CGThumbnailListItem_o *)&this->fields.end;
  end = this->fields.end;
  if ( end )
    ((void (__fastcall *)(intptr_t, intptr_t))end->fields.invoke_impl)(end->fields.method_code, end->fields.method);
  p_end->klass = 0;
  sub_1C32BC4(p_end, 0, v2, v3);
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
  const MethodInfo *v3; // x3

  this->fields.start = startCallback;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields, (int32_t)startCallback, (int32_t)method, v3);
}


void QuestAfterAction_TitleInfoControlCallback__Start(
        QuestAfterAction_TitleInfoControlCallback_o *this,
        QuestAfterAction_TitleInfoControlParam_o *titleInfoControlParam,
        System_Action_o *endCallback,
        const MethodInfo *method)
{
  struct System_Action_o *end; // x8
  struct System_Action_o **p_end; // x22
  const MethodInfo *v9; // x1
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
  sub_1C32BC4((CGThumbnailListItem_o *)p_end, (int32_t)endCallback, (int32_t)endCallback, method);
  start = this->fields.start;
  if ( start )
    ((void (__fastcall *)(intptr_t, QuestAfterAction_TitleInfoControlParam_o *, intptr_t))start->fields.invoke_impl)(
      start->fields.method_code,
      titleInfoControlParam,
      start->fields.method);
  else
    QuestAfterAction_TitleInfoControlCallback__End(this, v9);
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
  const MethodInfo *v8; // x3

  v6 = this;
  System_Object___ctor((Il2CppObject *)this, 0);
  v6->fields.voiceName = vName;
  v6 = (QuestAfterAction_VoiceInfo_o *)((char *)v6 + 24);
  LODWORD(v6[-1].fields.voiceName) = sId;
  sub_1C32BC4((CGThumbnailListItem_o *)v6, (int32_t)vName, v7, v8);
}


void QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__89___ctor(
        QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__89_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
  this->fields.__l__initialThreadId = System_Environment__get_CurrentManagedThreadId(0);
}


bool QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__89__MoveNext(
        QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__89_o *this,
        const MethodInfo *method)
{
  QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__89_o *v2; // x21
  int32_t _1__state; // w8
  QuestAfterAction_o *_4__this; // x19
  struct System_Collections_Generic_IEnumerable_QuestAfterAction_Command__o *commandEnumerable; // x20
  System_Collections_Generic_IEnumerable_QuestAfterAction_Command__c *klass; // x8
  __int64 v7; // x9
  int *p_offset; // x10
  __int64 v9; // x0
  __int64 v10; // x1
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  struct System_Collections_Generic_IEnumerator_QuestAfterAction_Command__o *_7__wrap1; // x20
  System_Collections_Generic_IEnumerator_QuestAfterAction_Command__c *v14; // x8
  __int64 v15; // x9
  int *v16; // x10
  __int64 v17; // x0
  const MethodInfo *v18; // x1
  struct System_Collections_Generic_IEnumerator_QuestAfterAction_Command__o *v19; // x20
  System_Collections_Generic_IEnumerator_QuestAfterAction_Command__c *v20; // x8
  __int64 v21; // x9
  int *v22; // x10
  __int64 v23; // x0
  __int64 v24; // x0
  QuestAfterAction_Command_o *v25; // x20
  int32_t CommandType; // w21
  int32_t CommandTargetId; // w2
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  bool result; // w0
  QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__89_o *v33; // [xsp+18h] [xbp-38h]

  v33 = this;
  v2 = this;
  if ( (byte_4C3461B & 1) == 0 )
  {
    sub_1C32C20(&System_Collections_Generic_IEnumerable_QuestAfterAction_Command__TypeInfo);
    sub_1C32C20(&System_Collections_Generic_IEnumerator_QuestAfterAction_Command__TypeInfo);
    sub_1C32C20(&System_Collections_IEnumerator_TypeInfo);
    this = (QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__89_o *)sub_1C32C20(&QuestAfterAction_TypeInfo);
    byte_4C3461B = 1;
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
      sub_1C32E7C(this);
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
      v9 = sub_1C83438(commandEnumerable, System_Collections_Generic_IEnumerable_QuestAfterAction_Command__TypeInfo, 0);
    }
    v10 = (*(__int64 (__fastcall **)(struct System_Collections_Generic_IEnumerable_QuestAfterAction_Command__o *, _QWORD))v9)(
            commandEnumerable,
            *(_QWORD *)(v9 + 8));
    v33->fields.__7__wrap1 = (struct System_Collections_Generic_IEnumerator_QuestAfterAction_Command__o *)v10;
    sub_1C32BC4((CGThumbnailListItem_o *)&v33->fields.__7__wrap1, v10, v11, v12);
    v2 = v33;
  }
  _7__wrap1 = v2->fields.__7__wrap1;
  v2->fields.__1__state = -3;
  if ( !_7__wrap1 )
LABEL_34:
    sub_1C32E7C(this);
  while ( 1 )
  {
    v14 = _7__wrap1->klass;
    v15 = *(unsigned __int16 *)&_7__wrap1->klass->_2.rank;
    if ( *(_WORD *)&_7__wrap1->klass->_2.rank )
    {
      v16 = &v14->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)v16 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v15;
        v16 += 4;
        if ( !v15 )
          goto LABEL_18;
      }
      v17 = (__int64)&v14->vtable[*v16];
    }
    else
    {
LABEL_18:
      v17 = sub_1C83438(_7__wrap1, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(struct System_Collections_Generic_IEnumerator_QuestAfterAction_Command__o *, _QWORD))v17)(
            _7__wrap1,
            *(_QWORD *)(v17 + 8))
        & 1) == 0 )
    {
      QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__89____m__Finally1(v33, v18);
      v33->fields.__7__wrap1 = 0;
      sub_1C32BC4((CGThumbnailListItem_o *)&v33->fields.__7__wrap1, 0, v30, v31);
      return 0;
    }
    v19 = v33->fields.__7__wrap1;
    if ( !v19 )
      sub_1C32E7C(v33);
    v20 = v19->klass;
    v21 = *(unsigned __int16 *)&v19->klass->_2.rank;
    if ( *(_WORD *)&v19->klass->_2.rank )
    {
      v22 = &v20->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_QuestAfterAction_Command__c **)v22 - 1) != System_Collections_Generic_IEnumerator_QuestAfterAction_Command__TypeInfo )
      {
        --v21;
        v22 += 4;
        if ( !v21 )
          goto LABEL_26;
      }
      v23 = (__int64)&v20->vtable[*v22];
    }
    else
    {
LABEL_26:
      v23 = sub_1C83438(
              v33->fields.__7__wrap1,
              System_Collections_Generic_IEnumerator_QuestAfterAction_Command__TypeInfo,
              0);
    }
    v24 = (*(__int64 (__fastcall **)(struct System_Collections_Generic_IEnumerator_QuestAfterAction_Command__o *, _QWORD))v23)(
            v19,
            *(_QWORD *)(v23 + 8));
    v25 = (QuestAfterAction_Command_o *)v24;
    if ( !v24 )
      sub_1C32E7C(0);
    if ( !_4__this )
      sub_1C32E7C(v24);
    CommandType = QuestAfterAction__GetCommandType(_4__this, *(_DWORD *)(v24 + 16), 0);
    if ( !QuestAfterAction_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(QuestAfterAction_TypeInfo);
    CommandTargetId = QuestAfterAction__ExtractCommandTargetId(v25, 0);
    this = (QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__89_o *)QuestAfterAction__IsExistCommand(
                                                                                    _4__this,
                                                                                    CommandType,
                                                                                    CommandTargetId,
                                                                                    0);
    if ( ((unsigned __int8)this & 1) == 0 )
      break;
    _7__wrap1 = v33->fields.__7__wrap1;
    if ( !_7__wrap1 )
      goto LABEL_34;
  }
  v33->fields.__2__current = v25;
  sub_1C32BC4((CGThumbnailListItem_o *)&v33->fields.__2__current, (int32_t)v25, v28, v29);
  result = 1;
  v33->fields.__1__state = 1;
  return result;
}


System_Collections_Generic_IEnumerator_QuestAfterAction_Command__o *QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__89__System_Collections_Generic_IEnumerable_QuestAfterAction_Command__GetEnumerator(
        QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__89_o *this,
        const MethodInfo *method)
{
  int32_t l__initialThreadId; // w20
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__89_o *v6; // x20
  struct QuestAfterAction_o *_4__this; // x1
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  struct System_Collections_Generic_IEnumerable_QuestAfterAction_Command__o *_3__commandEnumerable; // x1

  if ( (byte_4C3461D & 1) == 0 )
  {
    sub_1C32C20(&QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__89_TypeInfo);
    byte_4C3461D = 1;
  }
  if ( this->fields.__1__state == -2
    && (l__initialThreadId = this->fields.__l__initialThreadId,
        l__initialThreadId == System_Environment__get_CurrentManagedThreadId(0)) )
  {
    this->fields.__1__state = 0;
    v6 = this;
  }
  else
  {
    v6 = (QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__89_o *)sub_1C32E6C(QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__89_TypeInfo);
    System_Object___ctor((Il2CppObject *)v6, 0);
    v6->fields.__1__state = 0;
    v6->fields.__l__initialThreadId = System_Environment__get_CurrentManagedThreadId(0);
    _4__this = this->fields.__4__this;
    v6->fields.__4__this = _4__this;
    sub_1C32BC4((CGThumbnailListItem_o *)&v6->fields.__4__this, (int32_t)_4__this, v8, v9);
  }
  _3__commandEnumerable = this->fields.__3__commandEnumerable;
  v6->fields.commandEnumerable = _3__commandEnumerable;
  sub_1C32BC4((CGThumbnailListItem_o *)&v6->fields.commandEnumerable, (int32_t)_3__commandEnumerable, v4, v5);
  return (System_Collections_Generic_IEnumerator_QuestAfterAction_Command__o *)v6;
}


QuestAfterAction_Command_o *QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__89__System_Collections_Generic_IEnumerator_QuestAfterAction_Command__get_Current(
        QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__89_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__89__System_Collections_IEnumerator_Reset(
        QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__89_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C32C34(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C32E6C(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C32C34(&Method_QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__89_System_Collections_IEnumerator_Reset__);
  sub_1C32D48(v3, v4);
}


Il2CppObject *QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__89__System_Collections_IEnumerator_get_Current(
        QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__89_o *this,
        const MethodInfo *method)
{
  return (Il2CppObject *)this->fields.__2__current;
}


void QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__89__System_IDisposable_Dispose(
        QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__89_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w8

  _1__state = this->fields.__1__state;
  if ( _1__state == 1 || _1__state == -3 )
    QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__89____m__Finally1(this, method);
}


void QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__89____m__Finally1(
        QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__89_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_IEnumerator_QuestAfterAction_Command__o *_7__wrap1; // x19
  System_Collections_Generic_IEnumerator_QuestAfterAction_Command__c *klass; // x8
  __int64 v5; // x9
  int32_t *p_offset; // x10
  __int64 v7; // x0

  if ( (byte_4C3461C & 1) == 0 )
  {
    sub_1C32C20(&System_IDisposable_TypeInfo);
    byte_4C3461C = 1;
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
      v7 = sub_1C83438(_7__wrap1, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(struct System_Collections_Generic_IEnumerator_QuestAfterAction_Command__o *, _QWORD))v7)(
      _7__wrap1,
      *(_QWORD *)(v7 + 8));
  }
}


void QuestAfterAction__WaitWhileMainStateFinished_d__93___ctor(
        QuestAfterAction__WaitWhileMainStateFinished_d__93_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool QuestAfterAction__WaitWhileMainStateFinished_d__93__MoveNext(
        QuestAfterAction__WaitWhileMainStateFinished_d__93_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  struct QuestAfterAction_o *_4__this; // x8
  Il2CppObject **p__2__current; // x19
  bool result; // w0

  if ( this->fields.__1__state < 2u )
  {
    _4__this = this->fields.__4__this;
    this->fields.__1__state = -1;
    if ( !_4__this )
      sub_1C32E7C(this);
    if ( _4__this->fields.isKeepingMainStateButFinished )
    {
      this->fields.__2__current = 0;
      p__2__current = &this->fields.__2__current;
      sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.__2__current, 0, v2, v3);
      result = 1;
      *((_DWORD *)p__2__current - 2) = 1;
      return result;
    }
    ActionExtensions__Call(this->fields.action, 0);
  }
  return 0;
}


Il2CppObject *QuestAfterAction__WaitWhileMainStateFinished_d__93__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        QuestAfterAction__WaitWhileMainStateFinished_d__93_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn QuestAfterAction__WaitWhileMainStateFinished_d__93__System_Collections_IEnumerator_Reset(
        QuestAfterAction__WaitWhileMainStateFinished_d__93_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C32C34(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C32E6C(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C32C34(&Method_QuestAfterAction__WaitWhileMainStateFinished_d__93_System_Collections_IEnumerator_Reset__);
  sub_1C32D48(v3, v4);
}


Il2CppObject *QuestAfterAction__WaitWhileMainStateFinished_d__93__System_Collections_IEnumerator_get_Current(
        QuestAfterAction__WaitWhileMainStateFinished_d__93_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void QuestAfterAction__WaitWhileMainStateFinished_d__93__System_IDisposable_Dispose(
        QuestAfterAction__WaitWhileMainStateFinished_d__93_o *this,
        const MethodInfo *method)
{
  ;
}


void QuestAfterAction___c__DisplayClass82_0___ctor(
        QuestAfterAction___c__DisplayClass82_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void QuestAfterAction___c__DisplayClass82_0___LoadVoice_b__0(
        QuestAfterAction___c__DisplayClass82_0_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *svtVInfos; // x0

  if ( (byte_4C34618 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo__RemoveAt__);
    byte_4C34618 = 1;
  }
  svtVInfos = (System_Collections_Generic_List_object__o *)this->fields.svtVInfos;
  if ( !svtVInfos
    || (System_Collections_Generic_List_object___RemoveAt(
          svtVInfos,
          0,
          (const MethodInfo_3799F90 *)Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo__RemoveAt__),
        (svtVInfos = (System_Collections_Generic_List_object__o *)this->fields.__4__this) == 0) )
  {
    sub_1C32E7C(svtVInfos);
  }
  QuestAfterAction__LoadVoice_36148420((QuestAfterAction_o *)svtVInfos, this->fields.svtVInfos, this->fields.endAct, 0);
}


void QuestAfterAction___c__DisplayClass86_0___ctor(
        QuestAfterAction___c__DisplayClass86_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void QuestAfterAction___c__DisplayClass86_0___Play_b__0(
        QuestAfterAction___c__DisplayClass86_0_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0

  if ( (byte_4C34619 & 1) == 0 )
  {
    sub_1C32C20(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    byte_4C34619 = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_39E2DF4 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    sub_1C32E7C(0);
  MissionNotifyManager__EndPause((MissionNotifyManager_o *)Instance, 0);
  ActionExtensions__Call(this->fields.endAct, 0);
}


void QuestAfterAction___c__DisplayClass87_0___ctor(
        QuestAfterAction___c__DisplayClass87_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void QuestAfterAction___c__DisplayClass87_0___PlaySpecifiedAction_b__0(
        QuestAfterAction___c__DisplayClass87_0_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  char *_4__this; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_4C3461A & 1) == 0 )
  {
    sub_1C32C20(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    byte_4C3461A = 1;
  }
  _4__this = (char *)this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_8;
  *((_QWORD *)_4__this + 22) = 0;
  sub_1C32BC4((CGThumbnailListItem_o *)(_4__this + 176), 0, v2, v3);
  _4__this = (char *)this->fields.__4__this;
  if ( !_4__this
    || (*((_QWORD *)_4__this + 9) = 0,
        sub_1C32BC4((CGThumbnailListItem_o *)(_4__this + 72), 0, v6, v7),
        (_4__this = (char *)SingletonTemplate_object___get_Instance((const MethodInfo_39E2DF4 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__)) == 0)
    || (MissionNotifyManager__EndPause((MissionNotifyManager_o *)_4__this, 0),
        (_4__this = (char *)this->fields.__4__this) == 0) )
  {
LABEL_8:
    sub_1C32E7C(_4__this);
  }
  QuestAfterAction__SetState((QuestAfterAction_o *)_4__this, 0, 0);
  ActionExtensions__Call(this->fields.finishCallback, 0);
}


void QuestAfterAction___c__DisplayClass87_0___PlaySpecifiedAction_b__1(
        QuestAfterAction___c__DisplayClass87_0_o *this,
        const MethodInfo *method)
{
  QuestAfterAction_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C32E7C(0);
  QuestAfterAction__SetState(_4__this, 2, 0);
}