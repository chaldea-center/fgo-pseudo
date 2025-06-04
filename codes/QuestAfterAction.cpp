void __fastcall QuestAfterAction___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4AFEC37 & 1) == 0 )
  {
    sub_1BC3008(&QuestAfterAction_TypeInfo, v1);
    byte_4AFEC37 = 1;
  }
  LODWORD(QuestAfterAction_TypeInfo->static_fields->EventAnimationAfterBgmResetTime) = (struct QuestAfterAction_StaticFields)1056964608;
}


void __fastcall QuestAfterAction___ctor(QuestAfterAction_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  Il2CppObject *v9; // x20
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  BlankEarthQuestAfterAction_o *v12; // x20
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  System_Collections_Generic_Dictionary_TKey__TValue__o *v15; // x20
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  System_Collections_Generic_Dictionary_int__object__o *v18; // x20
  int32_t v19; // w2
  const MethodInfo *v20; // x3

  if ( (byte_4AFEC36 & 1) == 0 )
  {
    sub_1BC3008(&BlankEarthQuestAfterAction_TypeInfo, method);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo___ctor__, v3);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int____ctor__, v4);
    sub_1BC3008(&System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___TypeInfo, v5);
    sub_1BC3008(&System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__TypeInfo, v6);
    sub_1BC3008(&Method_SingletonMonoBehaviour_QuestAfterAction___ctor__, v7);
    sub_1BC3008(&QuestAfterAction_TitleInfoControlCallback_TypeInfo, v8);
    byte_4AFEC36 = 1;
  }
  v9 = (Il2CppObject *)sub_1BC3254(QuestAfterAction_TitleInfoControlCallback_TypeInfo);
  System_Object___ctor(v9, 0LL);
  this->fields._TitleInfoCtrlCallback_k__BackingField = (struct QuestAfterAction_TitleInfoControlCallback_o *)v9;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields._TitleInfoCtrlCallback_k__BackingField, (int32_t)v9, v10, v11);
  v12 = (BlankEarthQuestAfterAction_o *)sub_1BC3254(BlankEarthQuestAfterAction_TypeInfo);
  BlankEarthQuestAfterAction___ctor(v12, 0LL);
  this->fields._BlankEarthQuestAfterAction_k__BackingField = v12;
  sub_1BC2FAC(
    (CGThumbnailListItem_o *)&this->fields._BlankEarthQuestAfterAction_k__BackingField,
    (int32_t)v12,
    v13,
    v14);
  v15 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1BC3254(System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___TypeInfo);
  System_Collections_Generic_Dictionary_Int32Enum__object____ctor(
    v15,
    (const MethodInfo_33393F4 *)Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int____ctor__);
  this->fields.commandTypeIds = (struct System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___o *)v15;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.commandTypeIds, (int32_t)v15, v16, v17);
  v18 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1BC3254(System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v18,
    (const MethodInfo_3307B80 *)Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo___ctor__);
  this->fields.svtVoices = (struct System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__o *)v18;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.svtVoices, (int32_t)v18, v19, v20);
  this->fields.MapMoveBeforeFocusSpotId = -1;
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_38E0160 *)Method_SingletonMonoBehaviour_QuestAfterAction___ctor__);
}


void __fastcall QuestAfterAction__CallEndAct(QuestAfterAction_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  CGThumbnailListItem_o *p_endAct; // x0
  System_Action_o *endAct; // t1

  endAct = this->fields.endAct;
  p_endAct = (CGThumbnailListItem_o *)&this->fields.endAct;
  p_endAct->klass = 0LL;
  sub_1BC2FAC(p_endAct, 0, v2, v3);
  ActionExtensions__Call(endAct, 0LL);
}


bool __fastcall QuestAfterAction__CheckChangeBlankEarth(QuestAfterAction_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  bool result; // w0
  __int64 v12; // x1
  Il2CppObject *Instance; // x19
  __int64 v14; // x0
  Il2CppObject *MasterData_object; // x21
  int32_t v16; // w22
  _QWORD *p_image; // x21
  Il2CppObject *v18; // x21
  int32_t v19; // w22
  TerminalPramsManager_c *v20; // x0
  int32_t v21; // w20
  __int64 v22; // x8
  unsigned int *v23; // x19
  __int64 v24; // x23
  unsigned __int64 v25; // x24
  __int64 v26; // x25
  int i; // w26
  __int64 v28; // x20
  __int64 v29; // x2
  const MethodInfo *v30; // x3
  __int64 v31; // x1
  const MethodInfo *v32; // x3
  __int64 v33; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4AFEC1A & 1) == 0 )
  {
    sub_1BC3008(&QuestAfterAction_Command___TypeInfo, method);
    sub_1BC3008(&QuestAfterAction_Command_TypeInfo, v3);
    sub_1BC3008(&Method_DataManager_GetMasterData_QuestMaster___, v4);
    sub_1BC3008(&Method_DataManager_GetMasterData_QuestPhaseDetailAddMaster___, v5);
    sub_1BC3008(&Method_DataManager_GetMasterData_QuestPhaseDetailMaster___, v6);
    sub_1BC3008(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__, v7);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    sub_1BC3008(&TerminalPramsManager_TypeInfo, v9);
    sub_1BC3008(&StringLiteral_1163/*"1"*/, v10);
    byte_4AFEC1A = 1;
  }
  entity = 0LL;
  if ( this->fields.BlankEarthTargetWarId > 0 )
    return 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4AFEC41 )
  {
    sub_1BC3008(&TerminalPramsManager_TypeInfo, v12);
    byte_4AFEC41 = 1;
  }
  v14 = (__int64)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v14 = (__int64)TerminalPramsManager_TypeInfo;
  }
  if ( *(_BYTE *)(*(_QWORD *)(v14 + 184) + 102LL) )
  {
    if ( !Instance )
      goto LABEL_76;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_QuestPhaseDetailAddMaster___);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4AFC46E )
    {
      sub_1BC3008(&TerminalPramsManager_TypeInfo, v12);
      byte_4AFC46E = 1;
    }
    v14 = (__int64)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v14 = (__int64)TerminalPramsManager_TypeInfo;
    }
    v16 = *(_DWORD *)(*(_QWORD *)(v14 + 184) + 20LL);
    if ( !byte_4AFC46D )
    {
      sub_1BC3008(&TerminalPramsManager_TypeInfo, v12);
      v14 = (__int64)TerminalPramsManager_TypeInfo;
      byte_4AFC46D = 1;
    }
    if ( !*(_DWORD *)(v14 + 224) )
    {
      j_il2cpp_runtime_class_init_0(v14);
      v14 = (__int64)TerminalPramsManager_TypeInfo;
    }
    if ( !MasterData_object )
      goto LABEL_76;
    p_image = QuestPhaseDetailAddMaster__GetAfterAction(
                (QuestPhaseDetailAddMaster_o *)MasterData_object,
                v16,
                *(_DWORD *)(*(_QWORD *)(v14 + 184) + 24LL) + 1,
                0LL);
    if ( p_image )
      goto LABEL_60;
    v18 = DataManager__GetMasterData_object_(
            (DataManager_o *)Instance,
            (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_QuestPhaseDetailMaster___);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4AFC46E )
    {
      sub_1BC3008(&TerminalPramsManager_TypeInfo, v12);
      byte_4AFC46E = 1;
    }
    v14 = (__int64)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v14 = (__int64)TerminalPramsManager_TypeInfo;
    }
    v19 = *(_DWORD *)(*(_QWORD *)(v14 + 184) + 20LL);
    if ( !byte_4AFC46D )
    {
      sub_1BC3008(&TerminalPramsManager_TypeInfo, v12);
      v14 = (__int64)TerminalPramsManager_TypeInfo;
      byte_4AFC46D = 1;
    }
    if ( !*(_DWORD *)(v14 + 224) )
    {
      j_il2cpp_runtime_class_init_0(v14);
      v14 = (__int64)TerminalPramsManager_TypeInfo;
    }
    if ( !v18 )
      goto LABEL_76;
    p_image = QuestPhaseDetailMaster__GetAfterAction(
                (QuestPhaseDetailMaster_o *)v18,
                v19,
                *(_DWORD *)(*(_QWORD *)(v14 + 184) + 24LL) + 1,
                0LL);
    if ( p_image )
      goto LABEL_60;
    v14 = (__int64)TerminalPramsManager_TypeInfo;
  }
  if ( !*(_DWORD *)(v14 + 224) )
    j_il2cpp_runtime_class_init_0(v14);
  if ( !byte_4AFEC44 )
  {
    sub_1BC3008(&TerminalPramsManager_TypeInfo, v12);
    byte_4AFEC44 = 1;
  }
  v20 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v20 = TerminalPramsManager_TypeInfo;
  }
  if ( !v20->static_fields->_IsQuestClear_k__BackingField )
    return 0;
  if ( !v20->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v20);
  if ( TerminalPramsManager__get_Debug_IsQuestReleaseAll(0LL) )
    return 0;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4AFC46E )
  {
    sub_1BC3008(&TerminalPramsManager_TypeInfo, v12);
    byte_4AFC46E = 1;
  }
  v14 = (__int64)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v14 = (__int64)TerminalPramsManager_TypeInfo;
  }
  if ( !Instance
    || (v21 = *(_DWORD *)(*(_QWORD *)(v14 + 184) + 20LL),
        (v14 = (__int64)DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_QuestMaster___)) == 0) )
  {
LABEL_76:
    sub_1BC3264(v14, v12);
  }
  v14 = DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)v14,
          &entity,
          v21,
          (const MethodInfo_32AF0BC *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
  if ( (v14 & 1) == 0 )
    return 0;
  if ( !entity )
    goto LABEL_76;
  p_image = &entity[6].klass->_1.image;
  if ( !p_image )
    return 0;
LABEL_60:
  v22 = p_image[3];
  result = 0;
  if ( (int)v22 < 2 || (v22 & 1) != 0 )
    return result;
  v14 = sub_1BC30B0(QuestAfterAction_Command___TypeInfo, (unsigned int)v22 >> 1);
  if ( !v14 )
    goto LABEL_76;
  v23 = (unsigned int *)v14;
  if ( *(int *)(v14 + 24) < 1 )
    return 0;
  v24 = 0LL;
  v25 = 0LL;
  v26 = v14 + 32;
  for ( i = 1; ; i += 2 )
  {
    v28 = sub_1BC3254(QuestAfterAction_Command_TypeInfo);
    System_Object___ctor((Il2CppObject *)v28, 0LL);
    if ( (unsigned int)(i - 1) >= *((_DWORD *)p_image + 6) )
      goto LABEL_75;
    v14 = System_Int32__Parse((System_String_o *)p_image[i + 3], 0LL);
    if ( !v28 )
      goto LABEL_76;
    *(_DWORD *)(v28 + 16) = v14;
    if ( (unsigned int)i >= *((_DWORD *)p_image + 6) )
LABEL_75:
      sub_1BC326C(v14, v12, v29);
    v31 = p_image[i + 4];
    *(_QWORD *)(v28 + 24) = v31;
    sub_1BC2FAC((CGThumbnailListItem_o *)(v28 + 24), v31, v29, v30);
    if ( *(_DWORD *)(v28 + 16) == 701
      && System_String__op_Equality(*(System_String_o **)(v28 + 24), (System_String_o *)StringLiteral_1163/*"1"*/, 0LL) )
    {
      break;
    }
    v14 = sub_1BC3144(v28, *(_QWORD *)(*(_QWORD *)v23 + 64LL));
    if ( !v14 )
    {
      v33 = sub_1BC3288();
      sub_1BC3130(v33, 0LL);
    }
    if ( v25 >= v23[6] )
      goto LABEL_75;
    *(_QWORD *)(v26 + 8 * v25) = v28;
    sub_1BC2FAC((CGThumbnailListItem_o *)(v26 + v24), v28, v29, v32);
    ++v25;
    v24 += 8LL;
    if ( (__int64)v25 >= (int)v23[6] )
      return 0;
  }
  return 1;
}


void __fastcall QuestAfterAction__Clear(QuestAfterAction_o *this, const MethodInfo *method)
{
  QuestAfterAction_c *v3; // x0
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4AFEC33 & 1) == 0 )
  {
    sub_1BC3008(&QuestAfterAction_TypeInfo, method);
    byte_4AFEC33 = 1;
  }
  v3 = QuestAfterAction_TypeInfo;
  if ( !QuestAfterAction_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(QuestAfterAction_TypeInfo);
  QuestAfterAction__DeleteContinueData((const MethodInfo *)v3);
  this->fields.commandBuf = 0LL;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.commandBuf, 0, v4, v5);
}


QuestAfterAction_Command_array *__fastcall QuestAfterAction__ConvertValsToCommand(
        QuestAfterAction_o *this,
        System_String_array *actionVals,
        const MethodInfo *method)
{
  if ( (byte_4AFEC28 & 1) == 0 )
  {
    sub_1BC3008(&QuestAfterAction_TypeInfo, actionVals);
    byte_4AFEC28 = 1;
  }
  if ( !QuestAfterAction_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(QuestAfterAction_TypeInfo);
  return QuestAfterAction__GenerateCommandBuf(actionVals, (const MethodInfo *)actionVals);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestAfterAction__CreateCommandBuf(
        QuestAfterAction_o *this,
        bool isBeforeAction,
        const MethodInfo *method)
{
  QuestAfterAction_o *v4; // x20
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
  __int64 v30; // x1
  __int64 v31; // x1
  __int64 v32; // x1
  __int64 v33; // x1
  __int64 v34; // x1
  __int64 v35; // x1
  const MethodInfo *v36; // x1
  const MethodInfo *v37; // x2
  TerminalPramsManager_c *v38; // x0
  int32_t QuestId_k__BackingField; // w22
  int32_t PhaseCnt_k__BackingField; // w19
  System_String_array *afterActionVals; // x23
  __int64 v42; // x1
  Il2CppObject *Instance; // x22
  DataMasterBase_TMaster__TEntity__PKType__o *MasterData_object; // x0
  System_Collections_ObjectModel_ObservableCollection_TEntity__c *klass; // x8
  System_Collections_ObjectModel_ObservableCollection_TEntity__c *v46; // x8
  Il2CppMethodPointer methodPtr; // x8
  int32_t v48; // w24
  System_Collections_ObjectModel_ObservableCollection_TEntity__c *v49; // x8
  Il2CppMethodPointer v50; // x8
  int32_t v51; // w25
  System_Collections_ObjectModel_ObservableCollection_TEntity__c *v52; // x8
  Il2CppMethodPointer v53; // x8
  int32_t MasterName_k__BackingField_high; // w24
  System_Collections_ObjectModel_ObservableCollection_TEntity__c *v55; // x8
  Il2CppMethodPointer v56; // x8
  int32_t MasterKind_k__BackingField; // w19
  TerminalPramsManager_c *v58; // x0
  TerminalSceneComponent_c *v59; // x0
  TerminalPramsManager_c *v60; // x0
  const MethodInfo *v61; // x2
  DataMasterBase_TMaster__TEntity__PKType__o *v62; // x23
  int32_t v63; // w24
  int32_t v64; // w24
  System_String_o *lookup; // x24
  bool v66; // w24
  bool v67; // w23
  Il2CppObject *v68; // x23
  WarEntity_o *QuestId; // x0
  WarEntity_o *v70; // x23
  BalanceConfig_c *v71; // x0
  bool v72; // w0
  __int64 v73; // x1
  uint32_t cctor_finished; // w9
  TerminalPramsManager_c *v75; // x0
  TerminalPramsManager_c *v76; // x0
  int32_t id; // w19
  __int64 v78; // x1
  bool v79; // w23
  TerminalPramsManager_c *v80; // x0
  Il2CppObject *Master_object; // x23
  WarReleaseEntity_o *OpenEntity; // x24
  Il2CppObject *v83; // x23
  bool QuestEntity; // w0
  __int64 v85; // x1
  TerminalPramsManager_c *v86; // x0
  Il2CppObject *v87; // x23
  int32_t items_high; // w24
  Il2CppObject *v89; // x22
  int32_t v90; // w23
  TerminalPramsManager_c *v91; // x0
  Il2CppObject *v92; // x22
  int32_t v93; // w24
  bool IsOverwriteCommandNone; // w0
  __int64 v95; // x8
  __int64 v96; // x0
  unsigned int **p_commandBuf; // x21
  int32_t v98; // w2
  const MethodInfo *v99; // x3
  int *commandBuf; // x8
  unsigned __int64 v101; // x22
  il2cpp_array_size_t v102; // w29
  __int64 v103; // x24
  const MethodInfo *v104; // x3
  __int64 v105; // x8
  System_String_o *v106; // x1
  System_String_o **v107; // x25
  int v108; // w8
  bool v109; // w8
  System_Collections_Generic_Dictionary_int__object__o *svtVoices; // x26
  int32_t v111; // w21
  DataMasterBase_TMaster__TEntity__PKType__o *v112; // x28
  __int64 v113; // x27
  int32_t v114; // w2
  const MethodInfo *v115; // x3
  System_String_c *MasterName_k__BackingField; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v117; // x26
  int32_t v118; // w26
  BalanceConfig_c *v119; // x8
  int klass_high; // w27
  int v121; // w8
  unsigned int v122; // w8
  const MethodInfo *v123; // x1
  System_Collections_Generic_List_int__o *Item; // x26
  struct System_Int32_array *items; // x8
  _QWORD *v126; // x9
  __int64 size; // x10
  QuestAfterAction_o *v128; // x0
  const MethodInfo *v129; // x2
  System_String_c *v130; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v131; // x25
  unsigned __int64 v132; // x26
  System_String_Fields v133; // x8
  _QWORD *v134; // x9
  __int64 MasterName_k__BackingField_low; // x10
  unsigned int *v136; // x25
  const MethodInfo *v137; // x3
  unsigned int *v138; // x0
  TerminalPramsManager_c *v139; // x0
  TerminalPramsManager_c *v140; // x0
  int32_t BeforeQuestStartWarId_k__BackingField; // w19
  TerminalSceneComponent_c *v142; // x0
  Il2CppObject *v143; // x21
  TerminalPramsManager_c *v144; // x0
  TerminalPramsManager_c *v145; // x0
  Il2CppObject *v146; // x20
  TerminalPramsManager_c *v147; // x0
  BalanceConfig_c *v148; // x8
  int32_t WarId_k__BackingField; // w19
  int32_t v150; // w19
  TerminalPramsManager_c *v151; // x0
  TerminalPramsManager_c *v152; // x0
  TerminalPramsManager_c *v153; // x0
  BalanceConfig_c *v154; // x8
  int32_t v155; // w20
  TerminalPramsManager_c *v156; // x0
  __int64 v157; // x0
  char v158; // [xsp+Ch] [xbp-94h]
  int32_t svtId; // [xsp+1Ch] [xbp-84h] BYREF
  Il2CppObject *v160; // [xsp+20h] [xbp-80h] BYREF
  QuestEntity_o *entity; // [xsp+28h] [xbp-78h] BYREF
  Il2CppObject *v162; // [xsp+30h] [xbp-70h] BYREF
  QuestEntity_o *v163; // [xsp+38h] [xbp-68h] BYREF

  v4 = this;
  if ( (byte_4AFEC19 & 1) == 0 )
  {
    sub_1BC3008(&BalanceConfig_TypeInfo, isBeforeAction);
    sub_1BC3008(&bool_TypeInfo, v5);
    sub_1BC3008(&QuestAfterAction_Command___TypeInfo, v6);
    sub_1BC3008(&QuestAfterAction_Command_TypeInfo, v7);
    sub_1BC3008(&Method_DataManager_GetMasterData_EventMissionMaster___, v8);
    sub_1BC3008(&Method_DataManager_GetMasterData_QuestMaster___, v9);
    sub_1BC3008(&Method_DataManager_GetMasterData_QuestPhaseDetailAddMaster___, v10);
    sub_1BC3008(&Method_DataManager_GetMasterData_QuestPhaseDetailMaster___, v11);
    sub_1BC3008(&Method_DataManager_GetMasterData_WarMaster___, v12);
    sub_1BC3008(&Method_DataManager_GetMaster_BlankEarthSpotMaster___, v13);
    sub_1BC3008(&Method_DataManager_GetMaster_QuestBehaviorMaster___, v14);
    sub_1BC3008(&Method_DataManager_GetMaster_QuestMaster___, v15);
    sub_1BC3008(&Method_DataManager_GetMaster_ShopMaster___, v16);
    sub_1BC3008(&Method_DataManager_GetMaster_WarMaster___, v17);
    sub_1BC3008(&Method_DataManager_GetMaster_WarReleaseMaster___, v18);
    sub_1BC3008(&DataManager_TypeInfo, v19);
    sub_1BC3008(&Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__, v20);
    sub_1BC3008(&Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__GetEntity__, v21);
    sub_1BC3008(&Method_DataMasterBase_BlankEarthSpotMaster__BlankEarthSpotEntity__int__TryGetEntity__, v22);
    sub_1BC3008(&Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__, v23);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__Add__, v24);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___get_Item__, v25);
    sub_1BC3008(&Method_System_Linq_Enumerable_Any_KeyValuePair_int__QuestAfterAction_VoiceInfo____, v26);
    sub_1BC3008(&Method_System_Linq_Enumerable_Contains_int___, v27);
    sub_1BC3008(&Method_System_Collections_Generic_List_int__Add__, v28);
    sub_1BC3008(&QuestAfterAction_TypeInfo, v29);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v30);
    sub_1BC3008(&TerminalPramsManager_TypeInfo, v31);
    sub_1BC3008(&TerminalSceneComponent_TypeInfo, v32);
    sub_1BC3008(&QuestAfterAction_VoiceInfo_TypeInfo, v33);
    sub_1BC3008(&StringLiteral_16564/*"afterActionBk"*/, v34);
    this = (QuestAfterAction_o *)sub_1BC3008(&StringLiteral_806/*","*/, v35);
    byte_4AFEC19 = 1;
  }
  v162 = 0LL;
  v163 = 0LL;
  v160 = 0LL;
  entity = 0LL;
  svtId = 0;
  *(_WORD *)&v4->fields.isLoadedVoice = 0;
  *(_QWORD *)&v4->fields.ActionMapTargetType = -1LL;
  if ( isBeforeAction )
  {
    if ( System_Linq_Enumerable__Any_KeyValuePair_int__object__(
           (System_Collections_Generic_IEnumerable_TSource__o *)v4->fields.svtVoices,
           (const MethodInfo_300CCE4 *)Method_System_Linq_Enumerable_Any_KeyValuePair_int__QuestAfterAction_VoiceInfo____) )
    {
      QuestAfterAction__releaseVoice(v4, v36);
    }
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4AFC46E )
    {
      sub_1BC3008(&TerminalPramsManager_TypeInfo, v36);
      byte_4AFC46E = 1;
    }
    v38 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v38 = TerminalPramsManager_TypeInfo;
    }
    QuestId_k__BackingField = v38->static_fields->_QuestId_k__BackingField;
    if ( !byte_4AFC46D )
    {
      sub_1BC3008(&TerminalPramsManager_TypeInfo, v36);
      v38 = TerminalPramsManager_TypeInfo;
      byte_4AFC46D = 1;
    }
    if ( !v38->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v38);
      v38 = TerminalPramsManager_TypeInfo;
    }
    PhaseCnt_k__BackingField = v38->static_fields->_PhaseCnt_k__BackingField;
    if ( !QuestAfterAction_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(QuestAfterAction_TypeInfo);
    afterActionVals = QuestAfterAction__GetBeforeAction(QuestId_k__BackingField, PhaseCnt_k__BackingField + 1, v37);
    goto LABEL_234;
  }
  QuestAfterAction__LoadTerminalTransitionInfo(this, (const MethodInfo *)isBeforeAction);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4AFC38D )
  {
    sub_1BC3008(&TerminalSceneComponent_TypeInfo, v42);
    byte_4AFC38D = 1;
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
  if ( !klass->vtable._10_System_Collections_Generic_ICollection_T__get_IsReadOnly.methodPtr )
    goto LABEL_82;
  if ( !LODWORD(MasterData_object[3].monitor) )
    j_il2cpp_runtime_class_init_0(MasterData_object);
  if ( !byte_4AFC38D )
  {
    sub_1BC3008(&TerminalSceneComponent_TypeInfo, v42);
    byte_4AFC38D = 1;
  }
  MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalSceneComponent_TypeInfo;
  }
  v46 = MasterData_object[2].fields.list->klass;
  if ( !v46 )
    goto LABEL_343;
  methodPtr = v46->vtable._10_System_Collections_Generic_ICollection_T__get_IsReadOnly.methodPtr;
  if ( !methodPtr )
    goto LABEL_343;
  v48 = *((_DWORD *)methodPtr + 5);
  if ( !byte_4AFC38D )
  {
    sub_1BC3008(&TerminalSceneComponent_TypeInfo, v42);
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalSceneComponent_TypeInfo;
    byte_4AFC38D = 1;
  }
  if ( !LODWORD(MasterData_object[3].monitor) )
  {
    j_il2cpp_runtime_class_init_0(MasterData_object);
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalSceneComponent_TypeInfo;
  }
  v49 = MasterData_object[2].fields.list->klass;
  if ( !v49 )
    goto LABEL_343;
  v50 = v49->vtable._10_System_Collections_Generic_ICollection_T__get_IsReadOnly.methodPtr;
  if ( !v50 )
    goto LABEL_343;
  v51 = *((_DWORD *)v50 + 4);
  if ( v51 >= 1 )
  {
    if ( !LODWORD(MasterData_object[3].monitor) )
      j_il2cpp_runtime_class_init_0(MasterData_object);
    if ( !byte_4AFC38D )
    {
      sub_1BC3008(&TerminalSceneComponent_TypeInfo, v42);
      byte_4AFC38D = 1;
    }
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalSceneComponent_TypeInfo;
    }
    v52 = MasterData_object[2].fields.list->klass;
    if ( !v52 )
      goto LABEL_343;
    v53 = v52->vtable._10_System_Collections_Generic_ICollection_T__get_IsReadOnly.methodPtr;
    if ( !v53 )
      goto LABEL_343;
    if ( !Instance )
      goto LABEL_343;
    afterActionVals = (System_String_array *)*((_QWORD *)v53 + 4);
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMasterData_object_(
                                                                        (DataManager_o *)Instance,
                                                                        (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_EventMissionMaster___);
    if ( !MasterData_object )
      goto LABEL_343;
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__int___GetEntity(
                                                                        MasterData_object,
                                                                        v51,
                                                                        (const MethodInfo_32AF070 *)Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__GetEntity__);
    if ( !MasterData_object )
      goto LABEL_343;
    MasterName_k__BackingField_high = HIDWORD(MasterData_object->fields._MasterName_k__BackingField);
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMasterData_object_(
                                                                        (DataManager_o *)Instance,
                                                                        (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_WarMaster___);
    if ( !MasterData_object )
      goto LABEL_343;
    goto LABEL_69;
  }
  if ( v48 >= 1 )
  {
    if ( !LODWORD(MasterData_object[3].monitor) )
      j_il2cpp_runtime_class_init_0(MasterData_object);
    if ( !byte_4AFC38D )
    {
      sub_1BC3008(&TerminalSceneComponent_TypeInfo, v42);
      byte_4AFC38D = 1;
    }
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalSceneComponent_TypeInfo;
    }
    v55 = MasterData_object[2].fields.list->klass;
    if ( !v55 )
      goto LABEL_343;
    v56 = v55->vtable._10_System_Collections_Generic_ICollection_T__get_IsReadOnly.methodPtr;
    if ( !v56 )
      goto LABEL_343;
    afterActionVals = (System_String_array *)*((_QWORD *)v56 + 4);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_ShopMaster___);
    if ( !MasterData_object )
      goto LABEL_343;
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__int___GetEntity(
                                                                        MasterData_object,
                                                                        v48,
                                                                        (const MethodInfo_32AF070 *)Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__);
    if ( !MasterData_object )
      goto LABEL_343;
    MasterName_k__BackingField_high = (int32_t)MasterData_object->fields._MasterName_k__BackingField;
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_WarMaster___);
    if ( !MasterData_object )
      goto LABEL_343;
LABEL_69:
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)WarMaster__getByEventId(
                                                                        (WarMaster_o *)MasterData_object,
                                                                        MasterName_k__BackingField_high,
                                                                        0LL);
    if ( !MasterData_object )
      goto LABEL_343;
    MasterKind_k__BackingField = MasterData_object->fields._MasterKind_k__BackingField;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4AFE99E )
    {
      sub_1BC3008(&TerminalPramsManager_TypeInfo, v42);
      byte_4AFE99E = 1;
    }
    v58 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v58 = TerminalPramsManager_TypeInfo;
    }
    v58->static_fields->_WarId_k__BackingField = MasterKind_k__BackingField;
    if ( !byte_4AFC38D )
    {
      sub_1BC3008(&TerminalSceneComponent_TypeInfo, v42);
      byte_4AFC38D = 1;
    }
    v59 = TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      v59 = TerminalSceneComponent_TypeInfo;
    }
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)v59->static_fields->mInstance;
    if ( !MasterData_object )
      goto LABEL_343;
    TerminalSceneComponent__CallQuestInformationCloseAtAll((TerminalSceneComponent_o *)MasterData_object, 0, 0LL);
    if ( afterActionVals )
      goto LABEL_234;
  }
LABEL_82:
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4AFEC41 )
  {
    sub_1BC3008(&TerminalPramsManager_TypeInfo, v42);
    byte_4AFEC41 = 1;
  }
  v60 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v60 = TerminalPramsManager_TypeInfo;
  }
  if ( !v60->static_fields->_IsPhaseClear_k__BackingField
    && UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_16564/*"afterActionBk"*/, 0LL) )
  {
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)UnityEngine_PlayerPrefs__GetString_69993112(
                                                                        (System_String_o *)StringLiteral_16564/*"afterActionBk"*/,
                                                                        0LL);
    if ( !MasterData_object )
      goto LABEL_343;
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)System_String__Split(
                                                                        (System_String_o *)MasterData_object,
                                                                        0x2Cu,
                                                                        0,
                                                                        0LL);
    if ( !MasterData_object )
      goto LABEL_343;
    v62 = MasterData_object;
    if ( !LODWORD(MasterData_object->fields._MasterName_k__BackingField) )
      goto LABEL_483;
    v63 = System_Int32__Parse(*(System_String_o **)&MasterData_object->fields.revision, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4AFE998 )
    {
      sub_1BC3008(&TerminalPramsManager_TypeInfo, v42);
      byte_4AFE998 = 1;
    }
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
    }
    HIDWORD(MasterData_object[2].fields.list->fields.items) = v63;
    if ( LODWORD(v62->fields._MasterName_k__BackingField) <= 1 )
      goto LABEL_483;
    v64 = System_Int32__Parse((System_String_o *)v62->fields.list, 0LL);
    if ( !byte_4AFE99C )
    {
      sub_1BC3008(&TerminalPramsManager_TypeInfo, v42);
      byte_4AFE99C = 1;
    }
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
    }
    LODWORD(MasterData_object[2].fields.list->fields._monitor) = v64;
    if ( LODWORD(v62->fields._MasterName_k__BackingField) <= 2 )
      goto LABEL_483;
    lookup = (System_String_o *)v62->fields._lookup;
    if ( !bool_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(bool_TypeInfo);
    v66 = System_Boolean__Parse(lookup, 0LL);
    if ( !byte_4AFEC42 )
    {
      sub_1BC3008(&TerminalPramsManager_TypeInfo, v42);
      byte_4AFEC42 = 1;
    }
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
    }
    BYTE5(MasterData_object[2].fields.list[1].fields.CollectionChanged) = v66;
    if ( LODWORD(v62->fields._MasterName_k__BackingField) <= 3 )
      goto LABEL_483;
    v67 = System_Boolean__Parse((System_String_o *)v62->fields.seriazlier, 0LL);
    if ( !byte_4AFEC43 )
    {
      sub_1BC3008(&TerminalPramsManager_TypeInfo, v42);
      byte_4AFEC43 = 1;
    }
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
    }
    BYTE6(MasterData_object[2].fields.list[1].fields.CollectionChanged) = v67;
    if ( !byte_4AFEC44 )
    {
      sub_1BC3008(&TerminalPramsManager_TypeInfo, v42);
      MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
      byte_4AFEC44 = 1;
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
      v68 = DataManager__GetMasterData_object_(
              (DataManager_o *)Instance,
              (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_WarMaster___);
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4AFC46E )
      {
        sub_1BC3008(&TerminalPramsManager_TypeInfo, v42);
        byte_4AFC46E = 1;
      }
      MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
      }
      if ( !v68 )
        goto LABEL_343;
      QuestId = WarMaster__getByLastQuestId(
                  (WarMaster_o *)v68,
                  HIDWORD(MasterData_object[2].fields.list->fields.items),
                  0LL);
      if ( QuestId )
      {
        v70 = QuestId;
        v71 = BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v71 = BalanceConfig_TypeInfo;
        }
        v72 = System_Linq_Enumerable__Contains_int_(
                (System_Collections_Generic_IEnumerable_TSource__o *)v71->static_fields->MainInterludeMapReturnWarIds,
                v70->fields.id,
                (const MethodInfo_301AE3C *)Method_System_Linq_Enumerable_Contains_int___);
        cctor_finished = TerminalPramsManager_TypeInfo->_2.cctor_finished;
        if ( v72 )
        {
          if ( !cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          if ( !byte_4AFEC45 )
          {
            sub_1BC3008(&TerminalPramsManager_TypeInfo, v73);
            byte_4AFEC45 = 1;
          }
          v75 = TerminalPramsManager_TypeInfo;
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            v75 = TerminalPramsManager_TypeInfo;
          }
          v75->static_fields->_IsWarClear_k__BackingField = 0;
        }
        else
        {
          if ( !cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          if ( !byte_4AFEC45 )
          {
            sub_1BC3008(&TerminalPramsManager_TypeInfo, v73);
            byte_4AFEC45 = 1;
          }
          v76 = TerminalPramsManager_TypeInfo;
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            v76 = TerminalPramsManager_TypeInfo;
          }
          v76->static_fields->_IsWarClear_k__BackingField = 1;
          id = v70->fields.id;
          if ( !byte_4AFE99E )
          {
            sub_1BC3008(&TerminalPramsManager_TypeInfo, v73);
            v76 = TerminalPramsManager_TypeInfo;
            byte_4AFE99E = 1;
          }
          if ( !v76->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v76);
            v76 = TerminalPramsManager_TypeInfo;
          }
          v76->static_fields->_WarId_k__BackingField = id;
          v79 = TerminalPramsManager__CheckIsOrdealCallWarClear(v70, 0LL);
          if ( !byte_4AFEC46 )
          {
            sub_1BC3008(&TerminalPramsManager_TypeInfo, v78);
            byte_4AFEC46 = 1;
          }
          v80 = TerminalPramsManager_TypeInfo;
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            v80 = TerminalPramsManager_TypeInfo;
          }
          v80->static_fields->_IsOrdealCallWarClear_k__BackingField = v79;
        }
      }
    }
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_WarReleaseMaster___);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4AFC524 )
  {
    sub_1BC3008(&TerminalPramsManager_TypeInfo, v42);
    byte_4AFC524 = 1;
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
                 0LL);
  if ( !byte_4AFEC47 )
  {
    sub_1BC3008(&TerminalPramsManager_TypeInfo, v42);
    byte_4AFEC47 = 1;
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
    if ( !byte_4AFE8E1 )
    {
      sub_1BC3008(&TerminalPramsManager_TypeInfo, v42);
      byte_4AFE8E1 = 1;
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
  v83 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4AFC46E )
  {
    sub_1BC3008(&TerminalPramsManager_TypeInfo, v42);
    byte_4AFC46E = 1;
  }
  MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
  }
  if ( !v83 )
    goto LABEL_343;
  QuestEntity = QuestMaster__TryGetQuestEntity(
                  (QuestMaster_o *)v83,
                  &entity,
                  HIDWORD(MasterData_object[2].fields.list->fields.items),
                  0LL);
  afterActionVals = 0LL;
  if ( !QuestEntity )
    goto LABEL_234;
  MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)entity;
  if ( !entity )
    goto LABEL_343;
  if ( QuestEntity__IsOpenByTime(entity, 0, 0LL) )
  {
LABEL_189:
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4AFEC41 )
    {
      sub_1BC3008(&TerminalPramsManager_TypeInfo, v85);
      byte_4AFEC41 = 1;
    }
    v86 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v86 = TerminalPramsManager_TypeInfo;
    }
    if ( v86->static_fields->_IsPhaseClear_k__BackingField )
    {
      v87 = DataManager__GetMasterData_object_(
              (DataManager_o *)Instance,
              (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_QuestPhaseDetailAddMaster___);
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4AFC46E )
      {
        sub_1BC3008(&TerminalPramsManager_TypeInfo, v42);
        byte_4AFC46E = 1;
      }
      MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
      }
      items_high = HIDWORD(MasterData_object[2].fields.list->fields.items);
      if ( !byte_4AFC46D )
      {
        sub_1BC3008(&TerminalPramsManager_TypeInfo, v42);
        MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
        byte_4AFC46D = 1;
      }
      if ( !LODWORD(MasterData_object[3].monitor) )
      {
        j_il2cpp_runtime_class_init_0(MasterData_object);
        MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
      }
      if ( !v87 )
        goto LABEL_343;
      afterActionVals = QuestPhaseDetailAddMaster__GetAfterAction(
                          (QuestPhaseDetailAddMaster_o *)v87,
                          items_high,
                          LODWORD(MasterData_object[2].fields.list->fields._monitor) + 1,
                          0LL);
      if ( afterActionVals )
        goto LABEL_234;
      v89 = DataManager__GetMasterData_object_(
              (DataManager_o *)Instance,
              (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_QuestPhaseDetailMaster___);
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4AFC46E )
      {
        sub_1BC3008(&TerminalPramsManager_TypeInfo, v42);
        byte_4AFC46E = 1;
      }
      MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
      }
      v90 = HIDWORD(MasterData_object[2].fields.list->fields.items);
      if ( !byte_4AFC46D )
      {
        sub_1BC3008(&TerminalPramsManager_TypeInfo, v42);
        MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
        byte_4AFC46D = 1;
      }
      if ( !LODWORD(MasterData_object[3].monitor) )
      {
        j_il2cpp_runtime_class_init_0(MasterData_object);
        MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
      }
      if ( !v89 )
        goto LABEL_343;
      afterActionVals = QuestPhaseDetailMaster__GetAfterAction(
                          (QuestPhaseDetailMaster_o *)v89,
                          v90,
                          LODWORD(MasterData_object[2].fields.list->fields._monitor) + 1,
                          0LL);
      if ( afterActionVals )
        goto LABEL_234;
      v86 = TerminalPramsManager_TypeInfo;
    }
    if ( !v86->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v86);
    if ( !byte_4AFEC44 )
    {
      sub_1BC3008(&TerminalPramsManager_TypeInfo, v85);
      byte_4AFEC44 = 1;
    }
    v91 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v91 = TerminalPramsManager_TypeInfo;
    }
    if ( v91->static_fields->_IsQuestClear_k__BackingField )
    {
      if ( !v91->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v91);
      MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager__get_Debug_IsQuestReleaseAll(0LL);
      afterActionVals = 0LL;
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
    afterActionVals = 0LL;
    goto LABEL_234;
  }
  afterActionVals = 0LL;
  if ( WarReleaseEntity__IsOpen(OpenEntity, 0LL) )
    goto LABEL_189;
LABEL_234:
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v92 = DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_QuestBehaviorMaster___);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4AFC46E )
  {
    sub_1BC3008(&TerminalPramsManager_TypeInfo, v42);
    byte_4AFC46E = 1;
  }
  MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
  }
  v93 = HIDWORD(MasterData_object[2].fields.list->fields.items);
  if ( !byte_4AFC46D )
  {
    sub_1BC3008(&TerminalPramsManager_TypeInfo, v42);
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
    byte_4AFC46D = 1;
  }
  if ( !LODWORD(MasterData_object[3].monitor) )
  {
    j_il2cpp_runtime_class_init_0(MasterData_object);
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
  }
  if ( !v92 )
    goto LABEL_343;
  if ( QuestBehaviorMaster__IsOpenQuestBehaviorCond(
         (QuestBehaviorMaster_o *)v92,
         v93,
         LODWORD(MasterData_object[2].fields.list->fields._monitor) + 1,
         7,
         0LL) )
  {
    goto LABEL_487;
  }
  if ( !QuestAfterAction_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(QuestAfterAction_TypeInfo);
  IsOverwriteCommandNone = QuestAfterAction__IsOverwriteCommandNone(afterActionVals, (const MethodInfo *)v42);
  if ( !afterActionVals
    || IsOverwriteCommandNone
    || (v95 = *(_QWORD *)&afterActionVals->max_length, (int)v95 < 2)
    || (v95 & 1) != 0 )
  {
LABEL_487:
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4AFEC48 )
    {
      sub_1BC3008(&TerminalPramsManager_TypeInfo, v42);
      byte_4AFEC48 = 1;
    }
    v139 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v139 = TerminalPramsManager_TypeInfo;
    }
    if ( v139->static_fields->_BeforeQuestStartWarId_k__BackingField >= 1 )
    {
      if ( !v139->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v139);
      if ( !byte_4AFC911 )
      {
        sub_1BC3008(&TerminalPramsManager_TypeInfo, v42);
        byte_4AFC911 = 1;
      }
      v140 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v140 = TerminalPramsManager_TypeInfo;
      }
      v140->static_fields->_IsAutoResume_k__BackingField = 1;
      if ( !byte_4AFE99A )
      {
        sub_1BC3008(&TerminalPramsManager_TypeInfo, v42);
        v140 = TerminalPramsManager_TypeInfo;
        byte_4AFE99A = 1;
      }
      if ( !v140->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v140);
        v140 = TerminalPramsManager_TypeInfo;
      }
      v140->static_fields->_DispState_k__BackingField = 2;
      if ( !byte_4AFEC48 )
      {
        sub_1BC3008(&TerminalPramsManager_TypeInfo, v42);
        v140 = TerminalPramsManager_TypeInfo;
        byte_4AFEC48 = 1;
      }
      if ( !v140->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v140);
        v140 = TerminalPramsManager_TypeInfo;
      }
      BeforeQuestStartWarId_k__BackingField = v140->static_fields->_BeforeQuestStartWarId_k__BackingField;
      if ( !byte_4AFE99E )
      {
        sub_1BC3008(&TerminalPramsManager_TypeInfo, v42);
        v140 = TerminalPramsManager_TypeInfo;
        byte_4AFE99E = 1;
      }
      if ( !v140->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v140);
        v140 = TerminalPramsManager_TypeInfo;
      }
      v140->static_fields->_WarId_k__BackingField = BeforeQuestStartWarId_k__BackingField;
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      if ( !byte_4AFC38D )
      {
        sub_1BC3008(&TerminalSceneComponent_TypeInfo, v42);
        byte_4AFC38D = 1;
      }
      v142 = TerminalSceneComponent_TypeInfo;
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        v142 = TerminalSceneComponent_TypeInfo;
      }
      MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)v142->static_fields->mInstance;
      if ( !MasterData_object )
        goto LABEL_343;
      TerminalSceneComponent__CallQuestInformationCloseAtAll((TerminalSceneComponent_o *)MasterData_object, 0, 0LL);
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      v143 = DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_WarMaster___);
      if ( !byte_4AFC524 )
      {
        sub_1BC3008(&TerminalPramsManager_TypeInfo, v42);
        byte_4AFC524 = 1;
      }
      MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
      }
      if ( !v143 )
        goto LABEL_343;
      if ( DataMasterBase_object__object__int___TryGetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)v143,
             &v160,
             HIDWORD(MasterData_object[2].fields.list->klass),
             (const MethodInfo_32AF0BC *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__) )
      {
        MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)v160;
        if ( !v160 )
          goto LABEL_343;
        v4->fields.ActionMapTargetId = WarEntity__GetBaseMap((WarEntity_o *)v160, 0LL);
      }
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4AFEC49 )
      {
        sub_1BC3008(&TerminalPramsManager_TypeInfo, v42);
        byte_4AFEC49 = 1;
      }
      v144 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v144 = TerminalPramsManager_TypeInfo;
      }
      v144->static_fields->_BeforeQuestStartWarId_k__BackingField = 0;
    }
    UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_16564/*"afterActionBk"*/, 0LL);
    return;
  }
  v96 = sub_1BC30B0(QuestAfterAction_Command___TypeInfo, (unsigned int)v95 >> 1);
  v4->fields.commandBuf = (struct QuestAfterAction_Command_array *)v96;
  p_commandBuf = (unsigned int **)&v4->fields.commandBuf;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v4->fields.commandBuf, v96, v98, v99);
  commandBuf = (int *)v4->fields.commandBuf;
  if ( !commandBuf )
    goto LABEL_343;
  v158 = 0;
  v101 = 0LL;
  v102 = 0;
  while ( (__int64)v101 < commandBuf[6] )
  {
    v103 = sub_1BC3254(QuestAfterAction_Command_TypeInfo);
    System_Object___ctor((Il2CppObject *)v103, 0LL);
    if ( v102 >= afterActionVals->max_length )
      goto LABEL_483;
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)System_Int32__Parse(
                                                                        afterActionVals->m_Items[v102],
                                                                        0LL);
    if ( !v103 )
      goto LABEL_343;
    *(_DWORD *)(v103 + 16) = (_DWORD)MasterData_object;
    v105 = (int)v102 | 1LL;
    if ( (unsigned int)v105 >= afterActionVals->max_length )
      goto LABEL_483;
    v106 = afterActionVals->m_Items[v105];
    *(_QWORD *)(v103 + 24) = v106;
    v107 = (System_String_o **)(v103 + 24);
    sub_1BC2FAC((CGThumbnailListItem_o *)(v103 + 24), (int32_t)v106, (int32_t)v61, v104);
    if ( !v102 && !v4->fields.isRequestedStopBgm && *(_DWORD *)(v103 + 16) == 850 )
      v4->fields.isRequestedStopBgm = 1;
    if ( (v4->fields.MapMoveBeforeFocusSpotId & 0x80000000) != 0 && *(_DWORD *)(v103 + 16) == 350 )
    {
      MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)*v107;
      if ( !*v107 )
        goto LABEL_343;
      MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)System_String__Split(
                                                                          (System_String_o *)MasterData_object,
                                                                          0x2Cu,
                                                                          0,
                                                                          0LL);
      if ( !MasterData_object )
        goto LABEL_343;
      if ( SLODWORD(MasterData_object->fields._MasterName_k__BackingField) >= 4 )
      {
        MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)System_Int32__Parse(
                                                                            (System_String_o *)MasterData_object->fields.seriazlier,
                                                                            0LL);
        v4->fields.MapMoveBeforeFocusSpotId = (int)MasterData_object;
      }
    }
    v108 = *(_DWORD *)(v103 + 16);
    if ( v4->fields.IsMoveToEventRewardShop || v108 != 700 )
    {
      if ( v108 == 703 )
      {
        MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)*v107;
        if ( !*v107 )
          goto LABEL_343;
        MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)System_String__Split_62400540(
                                                                            (System_String_o *)MasterData_object,
                                                                            (System_String_o *)StringLiteral_806/*","*/,
                                                                            0,
                                                                            0LL);
        if ( !MasterData_object )
          goto LABEL_343;
        if ( SLODWORD(MasterData_object->fields._MasterName_k__BackingField) >= 3 )
        {
          MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)System_Int32__Parse(
                                                                              (System_String_o *)MasterData_object->fields._lookup,
                                                                              0LL);
          v109 = (int)MasterData_object > 0;
        }
        else
        {
          v109 = 0;
        }
        v4->fields.IsMoveBeforeFadeIn = v109;
        v4->fields.IsMoveToClassScore = 1;
        v108 = *(_DWORD *)(v103 + 16);
      }
      if ( v108 == 800 )
      {
        MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)QuestAfterAction_Command__GetAvailableRandomVoice(
                                                                            (QuestAfterAction_Command_o *)v103,
                                                                            &svtId,
                                                                            v61);
        if ( MasterData_object )
        {
          svtVoices = (System_Collections_Generic_Dictionary_int__object__o *)v4->fields.svtVoices;
          v111 = svtId;
          v112 = MasterData_object;
          v113 = sub_1BC3254(QuestAfterAction_VoiceInfo_TypeInfo);
          System_Object___ctor((Il2CppObject *)v113, 0LL);
          *(_DWORD *)(v113 + 16) = v111;
          *(_QWORD *)(v113 + 24) = v112;
          sub_1BC2FAC((CGThumbnailListItem_o *)(v113 + 24), (int32_t)v112, v114, v115);
          if ( !svtVoices )
            goto LABEL_343;
          System_Collections_Generic_Dictionary_int__object___Add(
            svtVoices,
            v101,
            (Il2CppObject *)v113,
            (const MethodInfo_3308554 *)Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__Add__);
          p_commandBuf = (unsigned int **)&v4->fields.commandBuf;
        }
        v108 = *(_DWORD *)(v103 + 16);
      }
      if ( v108 == 702 )
      {
        MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)*v107;
        if ( !*v107 )
          goto LABEL_343;
        MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)System_String__Split_62400540(
                                                                            (System_String_o *)MasterData_object,
                                                                            (System_String_o *)StringLiteral_806/*","*/,
                                                                            0,
                                                                            0LL);
        if ( !MasterData_object )
          goto LABEL_343;
        MasterName_k__BackingField = (System_String_c *)MasterData_object->fields._MasterName_k__BackingField;
        v117 = MasterData_object;
        if ( MasterName_k__BackingField )
        {
          if ( !(_DWORD)MasterName_k__BackingField )
            goto LABEL_483;
          MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)System_Int32__Parse(
                                                                              *(System_String_o **)&MasterData_object->fields.revision,
                                                                              0LL);
          if ( (int)MasterData_object >= 1 )
          {
            if ( SLODWORD(v117->fields._MasterName_k__BackingField) < 2 )
              v118 = 0;
            else
              v118 = System_Int32__Parse((System_String_o *)v117->fields.list, 0LL);
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            TerminalPramsManager__SetAutoResumeForFolder(v118, 0LL);
            if ( !byte_4AFC524 )
            {
              sub_1BC3008(&TerminalPramsManager_TypeInfo, v42);
              byte_4AFC524 = 1;
            }
            MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
              MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
            }
            v119 = BalanceConfig_TypeInfo;
            klass_high = HIDWORD(MasterData_object[2].fields.list->klass);
            if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
              v119 = BalanceConfig_TypeInfo;
            }
            p_commandBuf = (unsigned int **)&v4->fields.commandBuf;
            if ( klass_high == v119->static_fields->OrdealCallWarId )
            {
              v4->fields.BlankEarthTargetWarId = v118;
              v158 = 1;
            }
          }
        }
      }
    }
    else
    {
      v4->fields.IsMoveToEventRewardShop = 1;
    }
    v121 = *(_DWORD *)(v103 + 16);
    if ( v121 <= 205 )
    {
      if ( (unsigned int)(v121 - 100) < 0xF && ((0x7C1Fu >> (v121 - 100)) & 1) != 0 )
      {
        v42 = 0LL;
      }
      else
      {
        if ( (unsigned int)(v121 - 200) > 5 )
          goto LABEL_326;
        v42 = 1LL;
      }
    }
    else if ( v121 <= 550 )
    {
      if ( (unsigned int)(v121 - 400) < 0xD )
      {
        v42 = 2LL;
      }
      else
      {
        if ( v121 != 550 )
          goto LABEL_326;
        v42 = 3LL;
      }
    }
    else
    {
      v122 = v121 - 1000;
      if ( v122 >= 0xD || ((0x1C07u >> v122) & 1) == 0 )
        goto LABEL_326;
      v42 = 4LL;
    }
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)v4->fields.commandTypeIds;
    if ( !MasterData_object )
      goto LABEL_343;
    Item = (System_Collections_Generic_List_int__o *)System_Collections_Generic_Dictionary_Int32Enum__object___get_Item(
                                                       (System_Collections_Generic_Dictionary_TKey__TValue__o *)MasterData_object,
                                                       v42,
                                                       (const MethodInfo_3339D28 *)Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___get_Item__);
    if ( !QuestAfterAction_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(QuestAfterAction_TypeInfo);
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)QuestAfterAction__ExtractCommandTargetId(
                                                                        (QuestAfterAction_Command_o *)v103,
                                                                        v123);
    if ( !Item )
      goto LABEL_343;
    items = Item->fields._items;
    v126 = Method_System_Collections_Generic_List_int__Add__;
    ++Item->fields._version;
    if ( !items )
      goto LABEL_343;
    size = Item->fields._size;
    v42 = (unsigned int)MasterData_object;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_int___AddWithResize(
        Item,
        (int32_t)MasterData_object,
        *(const MethodInfo_3683E1C **)(*(_QWORD *)(v126[4] + 192LL) + 112LL));
    }
    else
    {
      Item->fields._size = size + 1;
      items->m_Items[size + 1] = (int)MasterData_object;
    }
LABEL_326:
    if ( v4->fields.ActionMapTargetId <= 0 )
      QuestAfterAction__SetActionMap(v4, (QuestAfterAction_Command_o *)v103, v61);
    if ( *(_DWORD *)(v103 + 16) == 102 )
    {
      v128 = (QuestAfterAction_o *)System_Int32__Parse(*v107, 0LL);
      MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)QuestAfterAction__GetMapGimmickId(
                                                                          v128,
                                                                          (int32_t)v128,
                                                                          v129);
      if ( !MasterData_object )
        goto LABEL_343;
      v130 = (System_String_c *)MasterData_object->fields._MasterName_k__BackingField;
      v131 = MasterData_object;
      if ( (int)v130 >= 1 )
      {
        v132 = 0LL;
        while ( v132 < (unsigned int)v130 )
        {
          MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)v4->fields.invalidMapGimmickIdList;
          if ( !MasterData_object )
            goto LABEL_343;
          v42 = *((unsigned int *)&v131->fields.revision + v132);
          v133 = *(System_String_Fields *)&MasterData_object->fields._MasterKind_k__BackingField;
          v134 = Method_System_Collections_Generic_List_int__Add__;
          ++HIDWORD(MasterData_object->fields._MasterName_k__BackingField);
          if ( !*(_QWORD *)&v133 )
            goto LABEL_343;
          MasterName_k__BackingField_low = SLODWORD(MasterData_object->fields._MasterName_k__BackingField);
          if ( (unsigned int)MasterName_k__BackingField_low >= *(_DWORD *)(*(_QWORD *)&v133 + 24LL) )
          {
            System_Collections_Generic_List_int___AddWithResize(
              (System_Collections_Generic_List_int__o *)MasterData_object,
              v42,
              *(const MethodInfo_3683E1C **)(*(_QWORD *)(v134[4] + 192LL) + 112LL));
          }
          else
          {
            LODWORD(MasterData_object->fields._MasterName_k__BackingField) = MasterName_k__BackingField_low + 1;
            *(_DWORD *)(*(_QWORD *)&v133 + 4 * MasterName_k__BackingField_low + 32) = v42;
          }
          LODWORD(v130) = v131->fields._MasterName_k__BackingField;
          if ( (__int64)++v132 >= (int)v130 )
            goto LABEL_339;
        }
LABEL_483:
        sub_1BC326C(MasterData_object, v42, v61);
      }
    }
LABEL_339:
    v136 = *p_commandBuf;
    if ( !*p_commandBuf )
      goto LABEL_343;
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)sub_1BC3144(
                                                                        v103,
                                                                        *(_QWORD *)(*(_QWORD *)v136 + 64LL));
    if ( !MasterData_object )
    {
      v157 = sub_1BC3288();
      sub_1BC3130(v157, 0LL);
    }
    if ( v101 >= v136[6] )
      goto LABEL_483;
    v138 = &v136[2 * v101];
    *((_QWORD *)v138 + 4) = v103;
    sub_1BC2FAC((CGThumbnailListItem_o *)(v138 + 8), v103, (int32_t)v61, v137);
    commandBuf = (int *)*p_commandBuf;
    v102 += 2;
    ++v101;
    if ( !*p_commandBuf )
      goto LABEL_343;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4AFEC41 )
  {
    sub_1BC3008(&TerminalPramsManager_TypeInfo, v42);
    byte_4AFEC41 = 1;
  }
  v145 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v145 = TerminalPramsManager_TypeInfo;
  }
  if ( v145->static_fields->_IsPhaseClear_k__BackingField )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v146 = DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_QuestMaster___);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4AFC46E )
    {
      sub_1BC3008(&TerminalPramsManager_TypeInfo, v42);
      byte_4AFC46E = 1;
    }
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
    }
    if ( !v146 )
      goto LABEL_343;
    if ( QuestMaster__TryGetQuestEntity(
           (QuestMaster_o *)v146,
           &v163,
           HIDWORD(MasterData_object[2].fields.list->fields.items),
           0LL) )
    {
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4AFC524 )
      {
        sub_1BC3008(&TerminalPramsManager_TypeInfo, v42);
        byte_4AFC524 = 1;
      }
      v147 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v147 = TerminalPramsManager_TypeInfo;
      }
      v148 = BalanceConfig_TypeInfo;
      WarId_k__BackingField = v147->static_fields->_WarId_k__BackingField;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v148 = BalanceConfig_TypeInfo;
      }
      if ( WarId_k__BackingField == v148->static_fields->OrdealCallWarId )
      {
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_BlankEarthSpotMaster___);
        if ( v163 && MasterData_object )
        {
          MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__int___TryGetEntity(
                                                                              MasterData_object,
                                                                              &v162,
                                                                              v163->fields.spotId,
                                                                              (const MethodInfo_32AF0BC *)Method_DataMasterBase_BlankEarthSpotMaster__BlankEarthSpotEntity__int__TryGetEntity__);
          if ( ((unsigned __int8)MasterData_object & 1) == 0 )
            goto LABEL_433;
          if ( v162 )
          {
            v150 = (int32_t)v162[1].klass;
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            if ( !byte_4AFEC4A )
            {
              sub_1BC3008(&TerminalPramsManager_TypeInfo, v42);
              byte_4AFEC4A = 1;
            }
            v151 = TerminalPramsManager_TypeInfo;
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
              v151 = TerminalPramsManager_TypeInfo;
            }
            v151->static_fields->_BlankEarthAfterActionFocusSpotId_k__BackingField = v150;
            goto LABEL_433;
          }
        }
LABEL_343:
        sub_1BC3264(MasterData_object, v42);
      }
    }
  }
LABEL_433:
  v152 = TerminalPramsManager_TypeInfo;
  if ( (v158 & 1) == 0 )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4AFC911 )
    {
      sub_1BC3008(&TerminalPramsManager_TypeInfo, v42);
      byte_4AFC911 = 1;
    }
    v153 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v153 = TerminalPramsManager_TypeInfo;
    }
    v153->static_fields->_IsAutoResume_k__BackingField = 1;
    if ( !byte_4AFE99A )
    {
      sub_1BC3008(&TerminalPramsManager_TypeInfo, v42);
      v153 = TerminalPramsManager_TypeInfo;
      byte_4AFE99A = 1;
    }
    if ( !v153->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v153);
      v153 = TerminalPramsManager_TypeInfo;
    }
    v153->static_fields->_DispState_k__BackingField = 2;
    if ( !byte_4AFC524 )
    {
      sub_1BC3008(&TerminalPramsManager_TypeInfo, v42);
      v153 = TerminalPramsManager_TypeInfo;
      byte_4AFC524 = 1;
    }
    if ( !v153->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v153);
      v153 = TerminalPramsManager_TypeInfo;
    }
    v154 = BalanceConfig_TypeInfo;
    v155 = v153->static_fields->_WarId_k__BackingField;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v154 = BalanceConfig_TypeInfo;
    }
    v152 = TerminalPramsManager_TypeInfo;
    if ( v155 == v154->static_fields->OrdealCallWarId )
      goto LABEL_488;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4AFE8E1 )
    {
      sub_1BC3008(&TerminalPramsManager_TypeInfo, v42);
      byte_4AFE8E1 = 1;
    }
    v152 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v152 = TerminalPramsManager_TypeInfo;
    }
    if ( v152->static_fields->_IsOrdealCallWarClear_k__BackingField )
    {
LABEL_488:
      if ( !v152->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v152);
      if ( !byte_4AFE8E2 )
      {
        sub_1BC3008(&TerminalPramsManager_TypeInfo, v42);
        byte_4AFE8E2 = 1;
      }
      v152 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v152 = TerminalPramsManager_TypeInfo;
      }
      v152->static_fields->_BlankEarthSpotId_k__BackingField = 0;
      if ( !byte_4AFE8E1 )
      {
        sub_1BC3008(&TerminalPramsManager_TypeInfo, v42);
        v152 = TerminalPramsManager_TypeInfo;
        byte_4AFE8E1 = 1;
      }
      if ( !v152->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v152);
        v152 = TerminalPramsManager_TypeInfo;
      }
      if ( !v152->static_fields->_IsOrdealCallWarClear_k__BackingField )
      {
        if ( !v152->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v152);
        if ( !byte_4AFE99A )
        {
          sub_1BC3008(&TerminalPramsManager_TypeInfo, v42);
          byte_4AFE99A = 1;
        }
        v152 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v152 = TerminalPramsManager_TypeInfo;
        }
        v152->static_fields->_DispState_k__BackingField = 3;
      }
    }
  }
  if ( !v152->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v152);
  if ( !byte_4AFE99D )
  {
    sub_1BC3008(&TerminalPramsManager_TypeInfo, v42);
    byte_4AFE99D = 1;
  }
  v156 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v156 = TerminalPramsManager_TypeInfo;
  }
  v156->static_fields->_SpotId_k__BackingField = -1;
}


void __fastcall QuestAfterAction__DeleteContinueData(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4AFEC17 & 1) == 0 )
  {
    sub_1BC3008(&StringLiteral_16564/*"afterActionBk"*/, v1);
    byte_4AFEC17 = 1;
  }
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_16564/*"afterActionBk"*/, 0LL);
}


int32_t __fastcall QuestAfterAction__ExtractCommandTargetId(
        QuestAfterAction_Command_o *command,
        const MethodInfo *method)
{
  QuestAfterAction_Command_o *v2; // x19
  QuestAfterAction_Command_c *param; // x8
  __int64 v4; // x2

  v2 = command;
  if ( (byte_4AFEC1B & 1) == 0 )
  {
    command = (QuestAfterAction_Command_o *)sub_1BC3008(&StringLiteral_806/*","*/, method);
    byte_4AFEC1B = 1;
  }
  if ( !v2 )
    goto LABEL_11;
  command = (QuestAfterAction_Command_o *)v2->fields.param;
  if ( !command )
    goto LABEL_11;
  command = (QuestAfterAction_Command_o *)System_String__Contains(
                                            (System_String_o *)command,
                                            (System_String_o *)StringLiteral_806/*","*/,
                                            0LL);
  param = (QuestAfterAction_Command_c *)v2->fields.param;
  if ( ((unsigned __int8)command & 1) == 0 )
    return System_Int32__Parse((System_String_o *)param, 0LL);
  if ( !param || (command = (QuestAfterAction_Command_o *)System_String__Split(v2->fields.param, 0x2Cu, 0, 0LL)) == 0LL )
LABEL_11:
    sub_1BC3264(command, method);
  if ( !LODWORD(command->fields.param) )
    sub_1BC326C(command, method, v4);
  param = command[1].klass;
  return System_Int32__Parse((System_String_o *)param, 0LL);
}


System_Collections_Generic_IEnumerable_QuestAfterAction_Command__o *__fastcall QuestAfterAction__FilterCommandsMainActionConflictsResolved(
        QuestAfterAction_o *this,
        System_Collections_Generic_IEnumerable_QuestAfterAction_Command__o *commandEnumerable,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  int32_t v10; // w2
  const MethodInfo *v11; // x3

  if ( (byte_4AFEC29 & 1) == 0 )
  {
    sub_1BC3008(&QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__87_TypeInfo, commandEnumerable);
    byte_4AFEC29 = 1;
  }
  v5 = sub_1BC3254(QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__87_TypeInfo);
  QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__87___ctor(
    (QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__87_o *)v5,
    -2,
    0LL);
  if ( !v5 )
    sub_1BC3264(v6, v7);
  *(_QWORD *)(v5 + 56) = this;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v5 + 56), (int32_t)this, v8, v9);
  *(_QWORD *)(v5 + 48) = commandEnumerable;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v5 + 48), (int32_t)commandEnumerable, v10, v11);
  return (System_Collections_Generic_IEnumerable_QuestAfterAction_Command__o *)v5;
}


QuestAfterAction_Command_array *__fastcall QuestAfterAction__GenerateCommandBuf(
        System_String_array *actionVals,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 IsNullOrEmpty; // x0
  __int64 v6; // x1
  long double inited; // q0
  _QWORD *v8; // x19
  __int64 v9; // x8
  __int64 v10; // x0
  __int64 v11; // x0
  QuestAfterAction_Command_array *v12; // x20
  __int64 v13; // x22
  unsigned __int64 v14; // x23
  __int64 v15; // x24
  il2cpp_array_size_t v16; // w25
  __int64 v17; // x21
  __int64 v18; // x2
  const MethodInfo *v19; // x3
  System_String_o *v20; // x1
  const MethodInfo *v21; // x3
  __int64 v23; // x0

  if ( (byte_4AFEC1C & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Array_Empty_QuestAfterAction_Command___, method);
    sub_1BC3008(&QuestAfterAction_Command___TypeInfo, v3);
    sub_1BC3008(&QuestAfterAction_Command_TypeInfo, v4);
    byte_4AFEC1C = 1;
  }
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)actionVals, 0LL);
  if ( (IsNullOrEmpty & 1) != 0 )
  {
    v8 = Method_System_Array_Empty_QuestAfterAction_Command___;
    v9 = *((_QWORD *)Method_System_Array_Empty_QuestAfterAction_Command___ + 7);
    if ( !v9 )
    {
      sub_1C134C8(Method_System_Array_Empty_QuestAfterAction_Command___);
      v9 = v8[7];
    }
    v10 = *(_QWORD *)(v9 + 16);
    if ( (*(_BYTE *)(v10 + 309) & 1) == 0 )
      v10 = sub_1C1346C(inited);
    if ( !*(_DWORD *)(v10 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v10);
    v11 = *(_QWORD *)(v8[7] + 16LL);
    if ( (*(_BYTE *)(v11 + 309) & 1) == 0 )
      v11 = sub_1C1346C(inited);
    return **(QuestAfterAction_Command_array ***)(v11 + 184);
  }
  else
  {
    if ( !actionVals
      || (IsNullOrEmpty = sub_1BC30B0(
                            QuestAfterAction_Command___TypeInfo,
                            (unsigned int)((signed int)actionVals->max_length / 2))) == 0 )
    {
LABEL_25:
      sub_1BC3264(IsNullOrEmpty, v6);
    }
    v12 = (QuestAfterAction_Command_array *)IsNullOrEmpty;
    if ( *(int *)(IsNullOrEmpty + 24) >= 1 )
    {
      v13 = 0LL;
      v14 = 0LL;
      v15 = IsNullOrEmpty + 32;
      v16 = 1;
      do
      {
        v17 = sub_1BC3254(QuestAfterAction_Command_TypeInfo);
        System_Object___ctor((Il2CppObject *)v17, 0LL);
        if ( v16 - 1 >= actionVals->max_length )
          goto LABEL_24;
        IsNullOrEmpty = System_Int32__Parse(actionVals->m_Items[v16 - 1], 0LL);
        if ( !v17 )
          goto LABEL_25;
        *(_DWORD *)(v17 + 16) = IsNullOrEmpty;
        if ( v16 >= actionVals->max_length )
          goto LABEL_24;
        v20 = actionVals->m_Items[v16];
        *(_QWORD *)(v17 + 24) = v20;
        sub_1BC2FAC((CGThumbnailListItem_o *)(v17 + 24), (int32_t)v20, v18, v19);
        IsNullOrEmpty = sub_1BC3144(v17, v12->obj.klass->_1.element_class);
        if ( !IsNullOrEmpty )
        {
          v23 = sub_1BC3288();
          sub_1BC3130(v23, 0LL);
        }
        if ( v14 >= v12->max_length )
LABEL_24:
          sub_1BC326C(IsNullOrEmpty, v6, v18);
        *(_QWORD *)(v15 + 8 * v14) = v17;
        sub_1BC2FAC((CGThumbnailListItem_o *)(v15 + v13), v17, v18, v21);
        ++v14;
        v16 += 2;
        v13 += 8LL;
      }
      while ( (__int64)v14 < (int)v12->max_length );
    }
  }
  return v12;
}


// local variable allocation has failed, the output may be wrong!
System_String_array *__fastcall QuestAfterAction__GetAfterAction(
        int32_t questId,
        int32_t phase,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  DataManager_o *Instance; // x0
  __int64 v13; // x1
  Il2CppObject *MasterData_object; // x22
  int32_t v15; // w23
  const MethodInfo *v16; // x1
  System_String_array *v17; // x22
  Il2CppObject *v19; // x19
  Il2CppObject *Entity; // x0
  Il2CppObject *v21; // x19

  if ( (byte_4AFEC35 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMasterData_QuestMaster___, *(_QWORD *)&phase);
    sub_1BC3008(&Method_DataManager_GetMasterData_QuestPhaseDetailAddMaster___, v5);
    sub_1BC3008(&Method_DataManager_GetMasterData_QuestPhaseDetailMaster___, v6);
    sub_1BC3008(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v7);
    sub_1BC3008(&Method_System_Linq_Enumerable_Any_string___, v8);
    sub_1BC3008(&QuestAfterAction_TypeInfo, v9);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    sub_1BC3008(&TerminalPramsManager_TypeInfo, v11);
    byte_4AFEC35 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_35;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_QuestPhaseDetailAddMaster___);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4AFC46E )
  {
    sub_1BC3008(&TerminalPramsManager_TypeInfo, v13);
    byte_4AFC46E = 1;
  }
  Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  }
  v15 = *(_DWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 20LL);
  if ( !byte_4AFC46D )
  {
    sub_1BC3008(&TerminalPramsManager_TypeInfo, v13);
    Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
    byte_4AFC46D = 1;
  }
  if ( !LODWORD(Instance[1].fields.saveDataMapList) )
  {
    j_il2cpp_runtime_class_init_0(Instance);
    Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  }
  if ( !MasterData_object )
    goto LABEL_35;
  v17 = QuestPhaseDetailAddMaster__GetAfterAction(
          (QuestPhaseDetailAddMaster_o *)MasterData_object,
          v15,
          *(_DWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 24LL) + 1,
          0LL);
  if ( !QuestAfterAction_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(QuestAfterAction_TypeInfo);
  if ( !QuestAfterAction__IsOverwriteCommandNone(v17, v16) )
  {
    if ( v17 )
      return v17;
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_QuestPhaseDetailMaster___);
      if ( Instance )
      {
        v17 = QuestPhaseDetailMaster__GetAfterAction((QuestPhaseDetailMaster_o *)Instance, questId, phase, 0LL);
        if ( v17 )
          return v17;
        Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( Instance )
        {
          v19 = DataManager__GetMasterData_object_(
                  Instance,
                  (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_QuestMaster___);
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          if ( !byte_4AFC46E )
          {
            sub_1BC3008(&TerminalPramsManager_TypeInfo, v13);
            byte_4AFC46E = 1;
          }
          Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
          }
          if ( v19 )
          {
            Entity = DataMasterBase_object__object__int___GetEntity(
                       (DataMasterBase_TMaster__TEntity__PKType__o *)v19,
                       *(_DWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 20LL),
                       (const MethodInfo_32AF070 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
            if ( Entity )
            {
              v21 = Entity;
              if ( System_Linq_Enumerable__Any_object_(
                     (System_Collections_Generic_IEnumerable_TSource__o *)Entity[6].klass,
                     (const MethodInfo_300D9DC *)Method_System_Linq_Enumerable_Any_string___) )
              {
                return (System_String_array *)v21[6].klass;
              }
            }
            return 0LL;
          }
        }
      }
    }
LABEL_35:
    sub_1BC3264(Instance, v13);
  }
  return 0LL;
}


// local variable allocation has failed, the output may be wrong!
System_String_array *__fastcall QuestAfterAction__GetBeforeAction(
        int32_t questId,
        int32_t phase,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  DataManager_o *Instance; // x0
  __int64 v13; // x1
  Il2CppObject *MasterData_object; // x22
  int32_t v15; // w23
  const MethodInfo *v16; // x1
  System_String_array *v17; // x22
  Il2CppObject *v19; // x19
  Il2CppObject *Entity; // x0
  Il2CppObject *v21; // x19

  if ( (byte_4AFEC34 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMasterData_QuestMaster___, *(_QWORD *)&phase);
    sub_1BC3008(&Method_DataManager_GetMasterData_QuestPhaseDetailAddMaster___, v5);
    sub_1BC3008(&Method_DataManager_GetMasterData_QuestPhaseDetailMaster___, v6);
    sub_1BC3008(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v7);
    sub_1BC3008(&Method_System_Linq_Enumerable_Any_string___, v8);
    sub_1BC3008(&QuestAfterAction_TypeInfo, v9);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    sub_1BC3008(&TerminalPramsManager_TypeInfo, v11);
    byte_4AFEC34 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_35;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_QuestPhaseDetailAddMaster___);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4AFC46E )
  {
    sub_1BC3008(&TerminalPramsManager_TypeInfo, v13);
    byte_4AFC46E = 1;
  }
  Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  }
  v15 = *(_DWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 20LL);
  if ( !byte_4AFC46D )
  {
    sub_1BC3008(&TerminalPramsManager_TypeInfo, v13);
    Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
    byte_4AFC46D = 1;
  }
  if ( !LODWORD(Instance[1].fields.saveDataMapList) )
  {
    j_il2cpp_runtime_class_init_0(Instance);
    Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  }
  if ( !MasterData_object )
    goto LABEL_35;
  v17 = QuestPhaseDetailAddMaster__GetBeforeAction(
          (QuestPhaseDetailAddMaster_o *)MasterData_object,
          v15,
          *(_DWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 24LL) + 1,
          0LL);
  if ( !QuestAfterAction_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(QuestAfterAction_TypeInfo);
  if ( !QuestAfterAction__IsOverwriteCommandNone(v17, v16) )
  {
    if ( v17 )
      return v17;
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_QuestPhaseDetailMaster___);
      if ( Instance )
      {
        v17 = QuestPhaseDetailMaster__GetBeforeAction((QuestPhaseDetailMaster_o *)Instance, questId, phase, 0LL);
        if ( v17 )
          return v17;
        Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( Instance )
        {
          v19 = DataManager__GetMasterData_object_(
                  Instance,
                  (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_QuestMaster___);
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          if ( !byte_4AFC46E )
          {
            sub_1BC3008(&TerminalPramsManager_TypeInfo, v13);
            byte_4AFC46E = 1;
          }
          Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
          }
          if ( v19 )
          {
            Entity = DataMasterBase_object__object__int___GetEntity(
                       (DataMasterBase_TMaster__TEntity__PKType__o *)v19,
                       *(_DWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 20LL),
                       (const MethodInfo_32AF070 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
            if ( Entity )
            {
              v21 = Entity;
              if ( System_Linq_Enumerable__Any_object_(
                     (System_Collections_Generic_IEnumerable_TSource__o *)Entity[5].monitor,
                     (const MethodInfo_300D9DC *)Method_System_Linq_Enumerable_Any_string___) )
              {
                return (System_String_array *)v21[5].monitor;
              }
            }
            return 0LL;
          }
        }
      }
    }
LABEL_35:
    sub_1BC3264(Instance, v13);
  }
  return 0LL;
}


int32_t __fastcall QuestAfterAction__GetCommandType(
        QuestAfterAction_o *this,
        int32_t commandId,
        const MethodInfo *method)
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
        return dword_C17734[commandId - 1000];
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


SrcSpotBasePrefab_o *__fastcall QuestAfterAction__GetLastDispSpot(QuestAfterAction_o *this, const MethodInfo *method)
{
  return this->fields.lastDispSpot;
}


// local variable allocation has failed, the output may be wrong!
Il2CppObject *__fastcall QuestAfterAction__GetMapComponent_object_(
        QuestAfterAction_o *this,
        int32_t comType,
        int32_t id,
        QuestAfterAction_StateMain_o *state,
        const MethodInfo_30976C8 *method)
{
  UnityEngine_Object_o *MapGameObject; // x20
  _BOOL8 v11; // x0
  __int64 v12; // x1

  if ( !method->rgctx_data )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, *(_QWORD *)&comType);
    if ( !method->rgctx_data )
      sub_1C134C8();
  }
  MapGameObject = (UnityEngine_Object_o *)QuestAfterAction__GetMapGameObject(this, comType, id, state, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v11 = UnityEngine_Object__op_Equality(MapGameObject, 0LL, 0LL);
  if ( v11 )
    return 0LL;
  if ( !MapGameObject )
    sub_1BC3264(v11, v12);
  return UnityEngine_GameObject__GetComponent_object_(
           (UnityEngine_GameObject_o *)MapGameObject,
           (const MethodInfo_3055998 *)method->rgctx_data->_0_UnityEngine_GameObject_GetComponent_T_);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_GameObject_o *__fastcall QuestAfterAction__GetMapGameObject(
        QuestAfterAction_o *this,
        int32_t comType,
        int32_t id,
        QuestAfterAction_StateMain_o *state,
        const MethodInfo *method)
{
  QuestAfterAction_o *v8; // x22
  __int64 v9; // x1
  UnityEngine_Object_o *v10; // x23
  UnityEngine_Transform_o *transform; // x23
  UnityEngine_Transform_o *v12; // x23
  const MethodInfo *v13; // x1
  const MethodInfo *v14; // x1
  const MethodInfo *v15; // x3

  v8 = this;
  if ( (byte_4AFEC2F & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, *(_QWORD *)&comType);
    this = (QuestAfterAction_o *)sub_1BC3008(&SrcSpotBasePrefab_TypeInfo, v9);
    byte_4AFEC2F = 1;
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
      transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
      this = (QuestAfterAction_o *)srcLineSprite__GetGobjName(id, 0LL);
      if ( !transform )
        goto LABEL_45;
    }
    else
    {
      if ( comType )
      {
        v10 = 0LL;
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
      transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
      if ( !SrcSpotBasePrefab_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(SrcSpotBasePrefab_TypeInfo);
      this = (QuestAfterAction_o *)SrcSpotBasePrefab__GetGobjName(id, 0LL);
      if ( !transform )
LABEL_45:
        sub_1BC3264(this, *(_QWORD *)&comType);
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
    transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
    this = (QuestAfterAction_o *)MapGimmickComponent__GetGobjName(id, v14);
    if ( !transform )
      goto LABEL_45;
LABEL_34:
    v10 = (UnityEngine_Object_o *)UnityEngine_Transform__Find(transform, (System_String_o *)this, 0LL);
    goto LABEL_35;
  }
  this = (QuestAfterAction_o *)v8->fields.mGimmickRoot;
  if ( !this )
    goto LABEL_45;
  v12 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  this = (QuestAfterAction_o *)MapGimmickComponent__GetGobjName(id, v13);
  if ( !v12 )
    goto LABEL_45;
  v10 = (UnityEngine_Object_o *)UnityEngine_Transform__Find(v12, (System_String_o *)this, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(v10, 0LL, 0LL) )
  {
    this = (QuestAfterAction_o *)v8->fields.mUIGimmickRoot;
    if ( !this )
      goto LABEL_45;
    goto LABEL_30;
  }
LABEL_35:
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (QuestAfterAction_o *)UnityEngine_Object__op_Equality(v10, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    this = (QuestAfterAction_o *)QuestAfterAction__IsMapChangeable(this, *(const MethodInfo **)&comType);
    if ( !state )
      goto LABEL_45;
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      state->fields.IsAnimDoing = 0;
      QuestAfterAction__RequestMapChange(v8, comType, id, v15);
    }
    else
    {
      ((void (__fastcall *)(QuestAfterAction_StateMain_o *, Il2CppMethodPointer))state->klass->vtable._14_EndAnim.method)(
        state,
        state->klass->vtable._15_onEnd.methodPtr);
    }
    return 0LL;
  }
  else
  {
    if ( !v10 )
      goto LABEL_45;
    return UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v10, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall QuestAfterAction__GetMapGimmickId(
        QuestAfterAction_o *this,
        int32_t spotId,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_List_int__o *v10; // x20
  System_Object_array *Instance; // x0
  __int64 name_low; // x1
  __int64 v13; // x2
  int max_length; // w8
  System_Object_array *v15; // x21
  unsigned int v16; // w23
  Il2CppClass **v17; // x8
  Il2CppClass *v18; // x22
  struct System_Int32_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10

  if ( (byte_4AFEC1D & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMasterData_MapGimmickMaster___, *(_QWORD *)&spotId);
    sub_1BC3008(&Method_DataMasterBase_MapGimmickMaster__MapGimmickEntity__int__getEntitys__, v4);
    sub_1BC3008(&Method_System_Collections_Generic_List_int__Add__, v5);
    sub_1BC3008(&Method_System_Collections_Generic_List_int__ToArray__, v6);
    sub_1BC3008(&Method_System_Collections_Generic_List_int___ctor__, v7);
    sub_1BC3008(&System_Collections_Generic_List_int__TypeInfo, v8);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_4AFEC1D = 1;
  }
  v10 = (System_Collections_Generic_List_int__o *)sub_1BC3254(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v10,
    (const MethodInfo_36835C8 *)Method_System_Collections_Generic_List_int___ctor__);
  Instance = (System_Object_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  Instance = (System_Object_array *)DataManager__GetMasterData_object_(
                                      (DataManager_o *)Instance,
                                      (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_MapGimmickMaster___);
  if ( !Instance )
    goto LABEL_19;
  Instance = DataMasterBase_object__object__int___getEntitys(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
               (const MethodInfo_32AE2F4 *)Method_DataMasterBase_MapGimmickMaster__MapGimmickEntity__int__getEntitys__);
  if ( !Instance )
    goto LABEL_19;
  max_length = Instance->max_length;
  v15 = Instance;
  if ( max_length >= 1 )
  {
    v16 = 0;
    while ( 1 )
    {
      if ( v16 >= max_length )
        sub_1BC326C(Instance, name_low, v13);
      v17 = &v15->obj.klass + (int)v16;
      v18 = v17[4];
      if ( !v18 )
        break;
      Instance = (System_Object_array *)MapGimmickEntity__GetRaidDispSpotIdFromScript((MapGimmickEntity_o *)v17[4], 0LL);
      if ( (_DWORD)Instance == spotId )
      {
        if ( !v10 )
          break;
        name_low = LODWORD(v18->_1.name);
        items = v10->fields._items;
        v20 = Method_System_Collections_Generic_List_int__Add__;
        ++v10->fields._version;
        if ( !items )
          break;
        size = v10->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v10,
            name_low,
            *(const MethodInfo_3683E1C **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
        }
        else
        {
          v10->fields._size = size + 1;
          items->m_Items[size + 1] = name_low;
        }
      }
      max_length = v15->max_length;
      if ( (int)++v16 >= max_length )
        goto LABEL_17;
    }
LABEL_19:
    sub_1BC3264(Instance, name_low);
  }
LABEL_17:
  if ( !v10 )
    goto LABEL_19;
  return System_Collections_Generic_List_int___ToArray(
           v10,
           (const MethodInfo_36858D4 *)Method_System_Collections_Generic_List_int__ToArray__);
}


int32_t __fastcall QuestAfterAction__GetState(QuestAfterAction_o *this, const MethodInfo *method)
{
  struct CStateManager_QuestAfterAction__o *fsm; // x8

  if ( (byte_4AFEC2D & 1) == 0 )
  {
    sub_1BC3008(&Method_CStateManager_QuestAfterAction__getState__, method);
    byte_4AFEC2D = 1;
  }
  fsm = this->fields.fsm;
  if ( fsm )
    return fsm->fields.m_state;
  else
    return 0;
}


void __fastcall QuestAfterAction__Init(QuestAfterAction_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
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
  struct CStateManager_QuestAfterAction__o **p_fsm; // x20
  CStateManager_T__o *v18; // x21
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  CStateManager_T__o *fsm; // x21
  Il2CppObject *v22; // x22
  System_Collections_Generic_Dictionary_TKey__TValue__o *commandTypeIds; // x0
  __int64 v24; // x1
  CStateManager_T__o *v25; // x21
  Il2CppObject *v26; // x22
  CStateManager_T__o *v27; // x21
  QuestAfterAction_StateAdditional_o *v28; // x22
  CStateManager_T__o *v29; // x20
  QuestAfterAction_StateInstant_o *v30; // x21
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  int32_t v33; // w20
  System_Collections_Generic_Dictionary_TKey__TValue__o *v34; // x21
  int v35; // w8
  System_Collections_Generic_List_int__o *v36; // x22
  Il2CppObject *Component_object; // x0
  int32_t v38; // w2
  const MethodInfo *v39; // x3
  int32_t v40; // w2
  const MethodInfo *v41; // x3
  System_Collections_Generic_List_int__o *v42; // x20
  struct System_Collections_Generic_List_int__o **p_invalidMapGimmickIdList; // x19
  int32_t v44; // w2
  const MethodInfo *v45; // x3

  if ( (byte_4AFEC18 & 1) == 0 )
  {
    sub_1BC3008(&Method_CStateManager_QuestAfterAction___ctor__, method);
    sub_1BC3008(&Method_CStateManager_QuestAfterAction__add__, v4);
    sub_1BC3008(&CStateManager_QuestAfterAction__TypeInfo, v5);
    sub_1BC3008(
      &Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___ContainsKey__,
      v6);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___get_Item__, v7);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___set_Item__, v8);
    sub_1BC3008(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___, v9);
    sub_1BC3008(&Method_System_Collections_Generic_List_int__Clear__, v10);
    sub_1BC3008(&Method_System_Collections_Generic_List_int___ctor__, v11);
    sub_1BC3008(&System_Collections_Generic_List_int__TypeInfo, v12);
    sub_1BC3008(&QuestAfterAction_StateAdditional_TypeInfo, v13);
    sub_1BC3008(&QuestAfterAction_StateInstant_TypeInfo, v14);
    sub_1BC3008(&QuestAfterAction_StateMain_TypeInfo, v15);
    sub_1BC3008(&QuestAfterAction_StateNone_TypeInfo, v16);
    byte_4AFEC18 = 1;
  }
  p_fsm = &this->fields.fsm;
  if ( !this->fields.fsm )
  {
    v18 = (CStateManager_T__o *)sub_1BC3254(CStateManager_QuestAfterAction__TypeInfo);
    CStateManager_object____ctor(
      v18,
      (Il2CppObject *)this,
      4,
      (const MethodInfo_323D2B8 *)Method_CStateManager_QuestAfterAction___ctor__);
    this->fields.fsm = (struct CStateManager_QuestAfterAction__o *)v18;
    sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.fsm, (int32_t)v18, v19, v20);
    fsm = (CStateManager_T__o *)this->fields.fsm;
    v22 = (Il2CppObject *)sub_1BC3254(QuestAfterAction_StateNone_TypeInfo);
    System_Object___ctor(v22, 0LL);
    if ( !fsm )
      goto LABEL_21;
    CStateManager_object___add(
      fsm,
      0,
      (IState_T__o *)v22,
      (const MethodInfo_323D360 *)Method_CStateManager_QuestAfterAction__add__);
    v25 = (CStateManager_T__o *)*p_fsm;
    v26 = (Il2CppObject *)sub_1BC3254(QuestAfterAction_StateMain_TypeInfo);
    System_Object___ctor(v26, 0LL);
    if ( !v25 )
      goto LABEL_21;
    CStateManager_object___add(
      v25,
      1,
      (IState_T__o *)v26,
      (const MethodInfo_323D360 *)Method_CStateManager_QuestAfterAction__add__);
    v27 = (CStateManager_T__o *)*p_fsm;
    v28 = (QuestAfterAction_StateAdditional_o *)sub_1BC3254(QuestAfterAction_StateAdditional_TypeInfo);
    QuestAfterAction_StateAdditional___ctor(v28, 0LL);
    if ( !v27 )
      goto LABEL_21;
    CStateManager_object___add(
      v27,
      2,
      (IState_T__o *)v28,
      (const MethodInfo_323D360 *)Method_CStateManager_QuestAfterAction__add__);
    v29 = (CStateManager_T__o *)*p_fsm;
    v30 = (QuestAfterAction_StateInstant_o *)sub_1BC3254(QuestAfterAction_StateInstant_TypeInfo);
    QuestAfterAction_StateInstant___ctor(v30, 0LL);
    if ( !v29 )
      goto LABEL_21;
    CStateManager_object___add(
      v29,
      3,
      (IState_T__o *)v30,
      (const MethodInfo_323D360 *)Method_CStateManager_QuestAfterAction__add__);
  }
  QuestAfterAction__SetState(this, 0, v2);
  this->fields.commandBuf = 0LL;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.commandBuf, 0, v31, v32);
  v33 = 0;
  this->fields.commandIdx = 0;
  do
  {
    commandTypeIds = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.commandTypeIds;
    if ( !commandTypeIds )
      goto LABEL_21;
    commandTypeIds = (System_Collections_Generic_Dictionary_TKey__TValue__o *)System_Collections_Generic_Dictionary_Int32Enum__object___ContainsKey(
                                                                                commandTypeIds,
                                                                                v33,
                                                                                (const MethodInfo_3339FBC *)Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___ContainsKey__);
    v34 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.commandTypeIds;
    if ( ((unsigned __int8)commandTypeIds & 1) != 0 )
    {
      if ( !v34 )
        goto LABEL_21;
      commandTypeIds = (System_Collections_Generic_Dictionary_TKey__TValue__o *)System_Collections_Generic_Dictionary_Int32Enum__object___get_Item(
                                                                                  (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.commandTypeIds,
                                                                                  v33,
                                                                                  (const MethodInfo_3339D28 *)Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___get_Item__);
      if ( !commandTypeIds )
        goto LABEL_21;
      v35 = HIDWORD(commandTypeIds->fields._entries) + 1;
      LODWORD(commandTypeIds->fields._entries) = 0;
      HIDWORD(commandTypeIds->fields._entries) = v35;
    }
    else
    {
      v36 = (System_Collections_Generic_List_int__o *)sub_1BC3254(System_Collections_Generic_List_int__TypeInfo);
      System_Collections_Generic_List_int____ctor(
        v36,
        (const MethodInfo_36835C8 *)Method_System_Collections_Generic_List_int___ctor__);
      if ( !v34 )
        goto LABEL_21;
      System_Collections_Generic_Dictionary_Int32Enum__object___set_Item(
        v34,
        v33,
        (Il2CppObject *)v36,
        (const MethodInfo_3339DB4 *)Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___set_Item__);
    }
    ++v33;
  }
  while ( v33 != 5 );
  commandTypeIds = (System_Collections_Generic_Dictionary_TKey__TValue__o *)UnityEngine_Component__get_gameObject(
                                                                              (UnityEngine_Component_o *)this,
                                                                              0LL);
  if ( !commandTypeIds
    || (Component_object = UnityEngine_GameObject__GetComponent_object_(
                             (UnityEngine_GameObject_o *)commandTypeIds,
                             (const MethodInfo_3055998 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___),
        this->fields.screenCollider = (struct UnityEngine_BoxCollider_o *)Component_object,
        sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.screenCollider, (int32_t)Component_object, v38, v39),
        (commandTypeIds = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.screenCollider) == 0LL) )
  {
LABEL_21:
    sub_1BC3264(commandTypeIds, v24);
  }
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)commandTypeIds, 0, 0LL);
  this->fields.lastDispSpot = 0LL;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.lastDispSpot, 0, v40, v41);
  v42 = (System_Collections_Generic_List_int__o *)sub_1BC3254(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v42,
    (const MethodInfo_36835C8 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.invalidMapGimmickIdList = v42;
  p_invalidMapGimmickIdList = &this->fields.invalidMapGimmickIdList;
  sub_1BC2FAC((CGThumbnailListItem_o *)p_invalidMapGimmickIdList, (int32_t)v42, v44, v45);
  *((_BYTE *)p_invalidMapGimmickIdList + 160) = 0;
}


bool __fastcall QuestAfterAction__IsActiveCommand(QuestAfterAction_o *this, const MethodInfo *method)
{
  return this->fields.commandBuf != 0LL;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall QuestAfterAction__IsExistCommand(
        QuestAfterAction_o *this,
        int32_t commandType,
        int32_t commandTypeId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_Dictionary_TKey__TValue__o *commandTypeIds; // x0

  if ( (byte_4AFEC20 & 1) == 0 )
  {
    sub_1BC3008(
      &Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___ContainsKey__,
      *(_QWORD *)&commandType);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___get_Item__, v7);
    sub_1BC3008(&Method_System_Collections_Generic_List_int__Contains__, v8);
    byte_4AFEC20 = 1;
  }
  commandTypeIds = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.commandTypeIds;
  if ( !commandTypeIds )
    goto LABEL_9;
  if ( System_Collections_Generic_Dictionary_Int32Enum__object___ContainsKey(
         commandTypeIds,
         commandType,
         (const MethodInfo_3339FBC *)Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___ContainsKey__) )
  {
    commandTypeIds = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.commandTypeIds;
    if ( commandTypeIds )
    {
      commandTypeIds = (System_Collections_Generic_Dictionary_TKey__TValue__o *)System_Collections_Generic_Dictionary_Int32Enum__object___get_Item(
                                                                                  commandTypeIds,
                                                                                  commandType,
                                                                                  (const MethodInfo_3339D28 *)Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___get_Item__);
      if ( commandTypeIds )
        return System_Collections_Generic_List_int___Contains(
                 (System_Collections_Generic_List_int__o *)commandTypeIds,
                 commandTypeId,
                 (const MethodInfo_3684194 *)Method_System_Collections_Generic_List_int__Contains__);
    }
LABEL_9:
    sub_1BC3264(commandTypeIds, *(_QWORD *)&commandType);
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall QuestAfterAction__IsExistSpotReveal(QuestAfterAction_o *this, int32_t spotId, const MethodInfo *method)
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
  v6 = 0LL;
  while ( 1 )
  {
    max_length = commandBuf->max_length;
    v8 = (int)v6 < max_length;
    if ( (int)v6 >= max_length )
      break;
    if ( (unsigned int)v6 >= max_length )
      sub_1BC326C(this, *(_QWORD *)&spotId, method);
    v9 = commandBuf->m_Items[v6];
    if ( v9 )
    {
      id = v9->fields.id;
      if ( id == 112 || id == 102 )
      {
        this = (QuestAfterAction_o *)System_Int32__Parse(v9->fields.param, 0LL);
        if ( (_DWORD)this == spotId )
          return v8;
        commandBuf = v4->fields.commandBuf;
      }
      ++v6;
      if ( commandBuf )
        continue;
    }
    sub_1BC3264(this, *(_QWORD *)&spotId);
  }
  return v8;
}


bool __fastcall QuestAfterAction__IsExistTerminalTransition(QuestAfterAction_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  struct QuestAfterAction_Command_array *commandBuf; // x10
  int max_length; // w8
  __int64 v5; // x9
  QuestAfterAction_Command_o **m_Items; // x10
  QuestAfterAction_Command_o *v7; // x11
  unsigned int v8; // w11

  commandBuf = this->fields.commandBuf;
  if ( commandBuf && (max_length = commandBuf->max_length, max_length >= 1) )
  {
    v5 = 0LL;
    m_Items = commandBuf->m_Items;
    do
    {
      if ( (unsigned int)v5 >= max_length )
        sub_1BC326C(this, method, v2);
      v7 = m_Items[v5];
      if ( !v7 )
        sub_1BC3264(this, method);
      ++v5;
      v8 = v7->fields.id - 701;
      this = (QuestAfterAction_o *)(v8 < 2);
    }
    while ( (int)v5 < max_length && v8 > 1 );
  }
  else
  {
    LOBYTE(this) = 0;
  }
  return (char)this;
}


bool __fastcall QuestAfterAction__IsGimmickDispCommand(int32_t cmd, const MethodInfo *method)
{
  return (cmd & 0xFFFFFFFD) == 401;
}


bool __fastcall QuestAfterAction__IsMapChangeable(QuestAfterAction_o *this, const MethodInfo *method)
{
  ScrTerminalMap_o *v2; // x0
  UnityEngine_GameObject_c *klass; // x8

  if ( (byte_4AFEC32 & 1) == 0 )
  {
    sub_1BC3008(&TerminalSceneComponent_TypeInfo, method);
    byte_4AFEC32 = 1;
  }
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4AFC38D )
  {
    sub_1BC3008(&TerminalSceneComponent_TypeInfo, method);
    byte_4AFC38D = 1;
  }
  v2 = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v2 = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
  }
  klass = v2->fields.subRootGimmickP->klass;
  if ( !klass || (v2 = *(ScrTerminalMap_o **)&klass->_2.thread_static_fields_offset) == 0LL )
    sub_1BC3264(v2, method);
  return ScrTerminalMap__IsMapChangeable(v2, 0LL);
}


bool __fastcall QuestAfterAction__IsNoWaitCommand(int32_t cmd, const MethodInfo *method)
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


bool __fastcall QuestAfterAction__IsOtherObjChangeDispQuicklyCommand(int32_t cmd, const MethodInfo *method)
{
  return (cmd & 0xFFFFFFFE) == 1010;
}


bool __fastcall QuestAfterAction__IsOtherObjHideCommand(int32_t cmd, const MethodInfo *method)
{
  return cmd == 1000 || cmd == 1010;
}


bool __fastcall QuestAfterAction__IsOverwriteCommandNone(System_String_array *actionCommand, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x8

  if ( actionCommand )
  {
    v3 = *(_QWORD *)&actionCommand->max_length;
    if ( v3 )
    {
      if ( !(_DWORD)v3 )
        sub_1BC326C(actionCommand, method, v2);
      LOBYTE(actionCommand) = System_Int32__Parse(actionCommand->m_Items[0], 0LL) == 0;
    }
    else
    {
      LOBYTE(actionCommand) = 0;
    }
  }
  return (char)actionCommand;
}


bool __fastcall QuestAfterAction__IsPlaying(QuestAfterAction_o *this, const MethodInfo *method)
{
  struct CStateManager_QuestAfterAction__o *fsm; // x8

  if ( (byte_4AFEC2D & 1) == 0 )
  {
    sub_1BC3008(&Method_CStateManager_QuestAfterAction__getState__, method);
    byte_4AFEC2D = 1;
  }
  fsm = this->fields.fsm;
  return fsm && fsm->fields.m_state == 1;
}


bool __fastcall QuestAfterAction__IsPlayingAction(QuestAfterAction_o *this, const MethodInfo *method)
{
  struct CStateManager_QuestAfterAction__o *fsm; // x8

  if ( (byte_4AFEC2D & 1) == 0 )
  {
    sub_1BC3008(&Method_CStateManager_QuestAfterAction__getState__, method);
    byte_4AFEC2D = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    return 0;
  if ( fsm->fields.m_state == 1 )
    return 1;
  return fsm->fields.m_state == 2;
}


bool __fastcall QuestAfterAction__IsRemainFadeCommand(QuestAfterAction_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  bool result; // w0
  struct QuestAfterAction_Command_array *commandBuf; // x10
  int32_t commandIdx; // w8
  signed int max_length; // w9
  __int64 v7; // x10
  int v8; // w11

  if ( this->fields.IsMoveBeforeFadeIn )
    return 1;
  commandBuf = this->fields.commandBuf;
  if ( !commandBuf )
    return 0;
  commandIdx = this->fields.commandIdx;
  max_length = commandBuf->max_length;
  if ( commandIdx >= max_length )
    return 0;
  v7 = (__int64)&commandBuf->m_Items[commandIdx];
  result = 1;
  while ( 1 )
  {
    if ( commandIdx >= (unsigned int)max_length )
      sub_1BC326C(1LL, method, v2);
    if ( !*(_QWORD *)v7 )
      sub_1BC3264(1LL, method);
    v8 = *(_DWORD *)(*(_QWORD *)v7 + 16LL);
    if ( v8 == 405 || v8 == 520 )
      break;
    ++commandIdx;
    v7 += 8LL;
    if ( commandIdx >= max_length )
      return 0;
  }
  return result;
}


bool __fastcall QuestAfterAction__IsSpotChangeDispQuicklyCommand(int32_t cmd, const MethodInfo *method)
{
  return (unsigned int)(cmd - 110) < 3;
}


bool __fastcall QuestAfterAction__IsSpotDispCommand(int32_t cmd, const MethodInfo *method)
{
  return cmd == 102 || cmd == 112;
}


bool __fastcall QuestAfterAction__IsSpotGrayCommand(int32_t cmd, const MethodInfo *method)
{
  return cmd == 101 || cmd == 111;
}


bool __fastcall QuestAfterAction__IsSpotHideCommand(int32_t cmd, const MethodInfo *method)
{
  return cmd == 100 || cmd == 110;
}


void __fastcall QuestAfterAction__LoadTerminalTransitionInfo(QuestAfterAction_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
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
  TerminalTransitionInfo_o *TerminalTransitionInfoData; // x0
  __int64 v21; // x1
  TerminalTransitionInfo_o *v22; // x20
  char *Master_object; // x0
  TerminalSceneComponent_o *v24; // x19
  DataManager_o *v25; // x22
  EventMissionActionAddEntity_o *EntityFromIdProgressTypeAndActionType; // x0
  EventMissionActionAddEntity_o *v27; // x23
  EventMissionActionInfo_o *v28; // x21
  Il2CppObject *Entity; // x0
  Il2CppObject *v30; // x21
  Il2CppObject *v31; // x0
  _BOOL8 v32; // x0
  __int64 v33; // x1
  Il2CppObject *current; // x21
  TerminalPramsManager_c *v35; // x0
  __int64 v36; // x1
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  struct TerminalTransitionInfo_o *TransitionInfo_k__BackingField; // x0
  Il2CppClass *klass; // x1
  __int64 v41; // x0
  __int64 v42; // x1
  struct TerminalTransitionInfo_o *v43; // x8
  EventMissionActionEntity_o *v44; // x0
  EventMissionActionEntity_o *v45; // x23
  Il2CppObject *v46; // x0
  Il2CppObject *v47; // x23
  __int64 v48; // x1
  TerminalPramsManager_c *v49; // x0
  int32_t v50; // w2
  const MethodInfo *v51; // x3
  struct System_String_array *vals; // x1
  struct TerminalTransitionInfo_o *v53; // x8
  System_Collections_Generic_List_Enumerator_object__o v54; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v55; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4AFEC24 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMasterData_EventMaster___, method);
    sub_1BC3008(&Method_DataManager_GetMasterData_EventMissionActionAddMaster___, v2);
    sub_1BC3008(&Method_DataManager_GetMasterData_EventMissionActionMaster___, v3);
    sub_1BC3008(&Method_DataManager_GetMasterData_EventMissionMaster___, v4);
    sub_1BC3008(&Method_DataManager_GetMaster_EventMaster___, v5);
    sub_1BC3008(&Method_DataManager_GetMaster_ShopActionMaster___, v6);
    sub_1BC3008(&Method_DataManager_GetMaster_ShopMaster___, v7);
    sub_1BC3008(&DataManager_TypeInfo, v8);
    sub_1BC3008(&Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__, v9);
    sub_1BC3008(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v10);
    sub_1BC3008(&Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__GetEntity__, v11);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_ShopActionEntity__Dispose__, v12);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_ShopActionEntity__MoveNext__, v13);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_ShopActionEntity__get_Current__, v14);
    sub_1BC3008(&EventMissionActionInfo_TypeInfo, v15);
    sub_1BC3008(&Method_System_Collections_Generic_List_ShopActionEntity__GetEnumerator__, v16);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    sub_1BC3008(&TerminalPramsManager_TypeInfo, v18);
    sub_1BC3008(&TerminalSceneComponent_TypeInfo, v19);
    byte_4AFEC24 = 1;
  }
  memset(&v55, 0, sizeof(v55));
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  TerminalTransitionInfoData = TerminalPramsManager__Load_TerminalTransitionInfoData(0LL);
  if ( !TerminalTransitionInfoData )
    return;
  v22 = TerminalTransitionInfoData;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4AFC38D )
  {
    sub_1BC3008(&TerminalSceneComponent_TypeInfo, v21);
    byte_4AFC38D = 1;
  }
  Master_object = (char *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    Master_object = (char *)TerminalSceneComponent_TypeInfo;
  }
  v24 = (TerminalSceneComponent_o *)**((_QWORD **)Master_object + 23);
  if ( !v24 )
    goto LABEL_67;
  if ( v24->fields._TransitionInfo_k__BackingField )
    return;
  if ( v22->fields.missionId < 1 )
  {
    if ( v22->fields.shopId >= 1 )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = (char *)DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_ShopMaster___);
      if ( !Master_object )
        goto LABEL_67;
      Entity = DataMasterBase_object__object__int___GetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                 v22->fields.shopId,
                 (const MethodInfo_32AF070 *)Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__);
      if ( Entity )
      {
        v30 = Entity;
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Master_object = (char *)DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_EventMaster___);
        if ( !Master_object )
          goto LABEL_67;
        v31 = DataMasterBase_object__object__int___GetEntity(
                (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                (int32_t)v30[1].monitor,
                (const MethodInfo_32AF070 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
        if ( !v31 || !EventEntity__IsEventPeriod((EventEntity_o *)v31, 0LL, 0LL) )
          goto LABEL_66;
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Master_object = (char *)DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_ShopActionMaster___);
        if ( !Master_object )
          goto LABEL_67;
        Master_object = (char *)ShopActionMaster__GetEntityList(
                                  (ShopActionMaster_o *)Master_object,
                                  (int32_t)v30[1].klass,
                                  0LL);
        if ( !Master_object )
          goto LABEL_67;
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v54,
          (System_Collections_Generic_List_object__o *)Master_object,
          (const MethodInfo_36A1938 *)Method_System_Collections_Generic_List_ShopActionEntity__GetEnumerator__);
        v55 = v54;
        while ( 1 )
        {
          v32 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v55,
                  (const MethodInfo_343678C *)Method_System_Collections_Generic_List_Enumerator_ShopActionEntity__MoveNext__);
          if ( !v32 )
            break;
          current = v55.fields._current;
          if ( !v55.fields._current )
            sub_1BC3264(v32, v33);
          if ( LODWORD(v55.fields._current[1].monitor) == 4 )
          {
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            if ( !byte_4AFEC4B )
            {
              sub_1BC3008(&TerminalPramsManager_TypeInfo, v33);
              byte_4AFEC4B = 1;
            }
            v35 = TerminalPramsManager_TypeInfo;
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
              v35 = TerminalPramsManager_TypeInfo;
            }
            v35->static_fields->meSceneStatus = 2;
            TerminalSceneComponent__CreateTransitionInfo(v24, v22, 0LL);
            TransitionInfo_k__BackingField = v24->fields._TransitionInfo_k__BackingField;
            if ( !TransitionInfo_k__BackingField )
              sub_1BC3264(0LL, v36);
            klass = current[2].klass;
            TransitionInfo_k__BackingField->fields.afterActionVals = (struct System_String_array *)klass;
            sub_1BC2FAC(
              (CGThumbnailListItem_o *)&TransitionInfo_k__BackingField->fields.afterActionVals,
              (int32_t)klass,
              v37,
              v38);
            v43 = v24->fields._TransitionInfo_k__BackingField;
            if ( !v43 )
              sub_1BC3264(v41, v42);
            v43->fields.optionId = (int32_t)current[2].monitor;
            break;
          }
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v55,
          (const MethodInfo_3436788 *)Method_System_Collections_Generic_List_Enumerator_ShopActionEntity__Dispose__);
      }
    }
  }
  else
  {
    Master_object = (char *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Master_object )
      goto LABEL_67;
    v25 = (DataManager_o *)Master_object;
    Master_object = (char *)DataManager__GetMasterData_object_(
                              (DataManager_o *)Master_object,
                              (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_EventMissionActionAddMaster___);
    if ( !Master_object )
      goto LABEL_67;
    EntityFromIdProgressTypeAndActionType = EventMissionActionAddMaster__GetEntityFromIdProgressTypeAndActionType(
                                              (EventMissionActionAddMaster_o *)Master_object,
                                              v22->fields.missionId,
                                              5,
                                              4,
                                              0LL);
    if ( EntityFromIdProgressTypeAndActionType )
    {
      v27 = EntityFromIdProgressTypeAndActionType;
      v28 = (EventMissionActionInfo_o *)sub_1BC3254(EventMissionActionInfo_TypeInfo);
      EventMissionActionInfo___ctor_43872792(v28, v27, 0LL);
    }
    else
    {
      Master_object = (char *)DataManager__GetMasterData_object_(
                                v25,
                                (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_EventMissionActionMaster___);
      if ( !Master_object )
        goto LABEL_67;
      v44 = EventMissionActionMaster__getEntityFromIdProgressTypeAndActionType(
              (EventMissionActionMaster_o *)Master_object,
              v22->fields.missionId,
              5,
              4,
              0LL);
      if ( !v44 )
        return;
      v45 = v44;
      v28 = (EventMissionActionInfo_o *)sub_1BC3254(EventMissionActionInfo_TypeInfo);
      EventMissionActionInfo___ctor(v28, v45, 0LL);
    }
    Master_object = (char *)DataManager__GetMasterData_object_(
                              v25,
                              (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_EventMissionMaster___);
    if ( !Master_object )
      goto LABEL_67;
    v46 = DataMasterBase_object__object__int___GetEntity(
            (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
            v22->fields.missionId,
            (const MethodInfo_32AF070 *)Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__GetEntity__);
    if ( v46 )
    {
      v47 = v46;
      Master_object = (char *)DataManager__GetMasterData_object_(
                                v25,
                                (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_EventMaster___);
      if ( !Master_object )
        goto LABEL_67;
      Master_object = (char *)DataMasterBase_object__object__int___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                HIDWORD(v47[1].monitor),
                                (const MethodInfo_32AF070 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
      if ( !Master_object )
        goto LABEL_67;
      if ( EventEntity__IsEventPeriod((EventEntity_o *)Master_object, 0LL, 0LL) )
      {
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_4AFEC4B )
        {
          sub_1BC3008(&TerminalPramsManager_TypeInfo, v48);
          byte_4AFEC4B = 1;
        }
        v49 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v49 = TerminalPramsManager_TypeInfo;
        }
        v49->static_fields->meSceneStatus = 2;
        TerminalSceneComponent__CreateTransitionInfo(v24, v22, 0LL);
        if ( v28 )
        {
          Master_object = (char *)v24->fields._TransitionInfo_k__BackingField;
          if ( Master_object )
          {
            vals = v28->fields.vals;
            *((_QWORD *)Master_object + 4) = vals;
            sub_1BC2FAC((CGThumbnailListItem_o *)(Master_object + 32), (int32_t)vals, v50, v51);
            v53 = v24->fields._TransitionInfo_k__BackingField;
            if ( v53 )
            {
              v53->fields.optionId = v28->fields.optionId;
              return;
            }
          }
        }
LABEL_67:
        sub_1BC3264(Master_object, v21);
      }
LABEL_66:
      TerminalSceneComponent__ClearTransitionInfo(v24, 0LL);
    }
  }
}


void __fastcall QuestAfterAction__LoadVoice(
        QuestAfterAction_o *this,
        System_Action_o *endAct,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  struct System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__o *svtVoices; // x0
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *Values; // x21
  System_Collections_Generic_List_object__o *v9; // x22
  const MethodInfo *v10; // x3

  if ( (byte_4AFEC21 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__get_Values__, endAct);
    sub_1BC3008(&Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo___ctor__, v5);
    sub_1BC3008(&System_Collections_Generic_List_QuestAfterAction_VoiceInfo__TypeInfo, v6);
    byte_4AFEC21 = 1;
  }
  if ( this->fields.isLoadedVoice )
  {
    ActionExtensions__Call(endAct, 0LL);
  }
  else
  {
    svtVoices = this->fields.svtVoices;
    this->fields.isLoadedVoice = 1;
    if ( !svtVoices )
      sub_1BC3264(0LL, endAct);
    Values = System_Collections_Generic_Dictionary_int__object___get_Values(
               (System_Collections_Generic_Dictionary_int__object__o *)svtVoices,
               (const MethodInfo_3308364 *)Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__get_Values__);
    v9 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_QuestAfterAction_VoiceInfo__TypeInfo);
    System_Collections_Generic_List_object____ctor_57280308(
      v9,
      (System_Collections_Generic_IEnumerable_T__o *)Values,
      (const MethodInfo_36A0734 *)Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo___ctor__);
    QuestAfterAction__LoadVoice_35323288(
      this,
      (System_Collections_Generic_List_QuestAfterAction_VoiceInfo__o *)v9,
      endAct,
      v10);
  }
}


void __fastcall QuestAfterAction__LoadVoice_35323288(
        QuestAfterAction_o *this,
        System_Collections_Generic_List_QuestAfterAction_VoiceInfo__o *svtVInfos,
        System_Action_o *endAct,
        const MethodInfo *method)
{
  System_Collections_Generic_List_QuestAfterAction_VoiceInfo__o *v5; // x20
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x21
  CommonUI_o *Instance; // x0
  __int64 v16; // x1
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  CommonUI_o **v19; // x28
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  System_Action_o **v22; // x19
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  System_String_o *VoiceAssetName_41775916; // x19
  Il2CppObject *v26; // x20
  System_Action_o *v27; // x22

  v5 = svtVInfos;
  while ( 1 )
  {
    if ( (byte_4AFEC22 & 1) == 0 )
    {
      sub_1BC3008(&System_Action_TypeInfo, svtVInfos);
      sub_1BC3008(&Method_System_Linq_Enumerable_Any_QuestAfterAction_VoiceInfo___, v7);
      sub_1BC3008(&Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo__RemoveAt__, v8);
      sub_1BC3008(&Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo__get_Item__, v9);
      sub_1BC3008(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v10);
      sub_1BC3008(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__, v11);
      sub_1BC3008(&Method_QuestAfterAction___c__DisplayClass80_0__LoadVoice_b__0__, v12);
      sub_1BC3008(&QuestAfterAction___c__DisplayClass80_0_TypeInfo, v13);
      byte_4AFEC22 = 1;
    }
    v14 = sub_1BC3254(QuestAfterAction___c__DisplayClass80_0_TypeInfo);
    QuestAfterAction___c__DisplayClass80_0___ctor((QuestAfterAction___c__DisplayClass80_0_o *)v14, 0LL);
    if ( !v14 )
      goto LABEL_18;
    *(_QWORD *)(v14 + 16) = v5;
    v19 = (CommonUI_o **)(v14 + 16);
    sub_1BC2FAC((CGThumbnailListItem_o *)(v14 + 16), (int32_t)v5, v17, v18);
    *(_QWORD *)(v14 + 24) = this;
    sub_1BC2FAC((CGThumbnailListItem_o *)(v14 + 24), (int32_t)this, v20, v21);
    *(_QWORD *)(v14 + 32) = endAct;
    v22 = (System_Action_o **)(v14 + 32);
    sub_1BC2FAC((CGThumbnailListItem_o *)(v14 + 32), (int32_t)endAct, v23, v24);
    if ( !System_Linq_Enumerable__Any_object_(
            *(System_Collections_Generic_IEnumerable_TSource__o **)(v14 + 16),
            (const MethodInfo_300D9DC *)Method_System_Linq_Enumerable_Any_QuestAfterAction_VoiceInfo___) )
    {
      Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( Instance )
      {
        CommonUI__SetLoadMode(Instance, 0, 0LL);
        ActionExtensions__Call(*v22, 0LL);
        return;
      }
LABEL_18:
      sub_1BC3264(Instance, v16);
    }
    Instance = *v19;
    if ( !*v19 )
      goto LABEL_18;
    Instance = (CommonUI_o *)System_Collections_Generic_List_object___get_Item(
                               (System_Collections_Generic_List_object__o *)Instance,
                               0,
                               (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo__get_Item__);
    if ( !Instance )
      goto LABEL_18;
    if ( Instance->fields.m_CachedPtr )
      break;
    Instance = *v19;
    if ( !*v19 )
      goto LABEL_18;
    System_Collections_Generic_List_object___RemoveAt(
      (System_Collections_Generic_List_object__o *)Instance,
      0,
      (const MethodInfo_36A2614 *)Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo__RemoveAt__);
    v5 = (System_Collections_Generic_List_QuestAfterAction_VoiceInfo__o *)*v19;
    endAct = *v22;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  CommonUI__SetLoadMode(Instance, 1, 0LL);
  Instance = *v19;
  if ( !*v19 )
    goto LABEL_18;
  Instance = (CommonUI_o *)System_Collections_Generic_List_object___get_Item(
                             (System_Collections_Generic_List_object__o *)Instance,
                             0,
                             (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo__get_Item__);
  if ( !Instance )
    goto LABEL_18;
  VoiceAssetName_41775916 = ServantVoiceEntity__getVoiceAssetName_41775916(Instance->fields.m_CachedPtr, 0LL);
  v26 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
  v27 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
  System_Action___ctor(v27, (Il2CppObject *)v14, Method_QuestAfterAction___c__DisplayClass80_0__LoadVoice_b__0__, 0LL);
  if ( !v26 )
    goto LABEL_18;
  SoundManager__LoadAudioAssetStorage((SoundManager_o *)v26, VoiceAssetName_41775916, v27, 1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall QuestAfterAction__MapObjName(
        QuestAfterAction_o *this,
        int32_t comType,
        int32_t id,
        const MethodInfo *method)
{
  __int64 v6; // x1

  if ( (byte_4AFEC31 & 1) == 0 )
  {
    sub_1BC3008(&SrcSpotBasePrefab_TypeInfo, *(_QWORD *)&comType);
    sub_1BC3008(&StringLiteral_1/*""*/, v6);
    byte_4AFEC31 = 1;
  }
  if ( comType )
  {
    if ( comType == 1 )
    {
      return srcLineSprite__GetGobjName(id, 0LL);
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
    return SrcSpotBasePrefab__GetGobjName(id, 0LL);
  }
}


void __fastcall QuestAfterAction__OnEnd(QuestAfterAction_o *this, const MethodInfo *method)
{
  System_Action_o *endAct; // x0
  const MethodInfo *v4; // x1
  UnityEngine_Collider_o *screenCollider; // x0
  struct System_Collections_Generic_List_int__o *invalidMapGimmickIdList; // x8
  int v7; // w9

  if ( (byte_4AFEC2B & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_List_int__Clear__, method);
    byte_4AFEC2B = 1;
  }
  endAct = this->fields.endAct;
  this->fields.isKeepingMainStateButFinished = 1;
  *(_QWORD *)&this->fields.ActionMapTargetType = -1LL;
  ActionExtensions__Call(endAct, 0LL);
  screenCollider = (UnityEngine_Collider_o *)this->fields.screenCollider;
  if ( !screenCollider
    || (UnityEngine_Collider__set_enabled(screenCollider, 0, 0LL),
        (invalidMapGimmickIdList = this->fields.invalidMapGimmickIdList) == 0LL) )
  {
    sub_1BC3264(screenCollider, v4);
  }
  v7 = invalidMapGimmickIdList->fields._version + 1;
  invalidMapGimmickIdList->fields._size = 0;
  invalidMapGimmickIdList->fields._version = v7;
  QuestAfterAction__Init(this, v4);
  this->fields.isKeepingMainStateButFinished = 0;
}


void __fastcall QuestAfterAction__Play(QuestAfterAction_o *this, System_Action_o *endAct, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x21
  Il2CppObject *Instance; // x0
  __int64 v10; // x1
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  System_Action_o *v13; // x22
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  const MethodInfo *v16; // x2

  if ( (byte_4AFEC26 & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, endAct);
    sub_1BC3008(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v5);
    sub_1BC3008(&Method_QuestAfterAction___c__DisplayClass84_0__Play_b__0__, v6);
    sub_1BC3008(&QuestAfterAction___c__DisplayClass84_0_TypeInfo, v7);
    byte_4AFEC26 = 1;
  }
  v8 = sub_1BC3254(QuestAfterAction___c__DisplayClass84_0_TypeInfo);
  QuestAfterAction___c__DisplayClass84_0___ctor((QuestAfterAction___c__DisplayClass84_0_o *)v8, 0LL);
  if ( !v8
    || (*(_QWORD *)(v8 + 16) = endAct,
        sub_1BC2FAC((CGThumbnailListItem_o *)(v8 + 16), (int32_t)endAct, v11, v12),
        (Instance = SingletonTemplate_object___get_Instance((const MethodInfo_38E0168 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__)) == 0LL) )
  {
    sub_1BC3264(Instance, v10);
  }
  MissionNotifyManager__StartPause((MissionNotifyManager_o *)Instance, 0LL);
  v13 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
  System_Action___ctor(v13, (Il2CppObject *)v8, Method_QuestAfterAction___c__DisplayClass84_0__Play_b__0__, 0LL);
  this->fields.endAct = v13;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.endAct, (int32_t)v13, v14, v15);
  if ( this->fields.commandBuf )
    QuestAfterAction__SetState(this, 1, v16);
  else
    ActionExtensions__Call(this->fields.endAct, 0LL);
}


void __fastcall QuestAfterAction__PlaySpecifiedAction(
        QuestAfterAction_o *this,
        System_String_array *actionVals,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x20
  Il2CppObject *Instance; // x0
  __int64 v14; // x1
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  const MethodInfo *v19; // x1
  struct QuestAfterAction_Command_array *CommandBuf; // x0
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  System_Action_o *v23; // x21
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  System_Action_o *v26; // x21
  const MethodInfo *v27; // x2
  System_Collections_IEnumerator_o *v28; // x1

  if ( (byte_4AFEC27 & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, actionVals);
    sub_1BC3008(&QuestAfterAction_TypeInfo, v7);
    sub_1BC3008(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v8);
    sub_1BC3008(&Method_QuestAfterAction___c__DisplayClass85_0__PlaySpecifiedAction_b__0__, v9);
    sub_1BC3008(&Method_QuestAfterAction___c__DisplayClass85_0__PlaySpecifiedAction_b__1__, v10);
    sub_1BC3008(&QuestAfterAction___c__DisplayClass85_0_TypeInfo, v11);
    byte_4AFEC27 = 1;
  }
  v12 = sub_1BC3254(QuestAfterAction___c__DisplayClass85_0_TypeInfo);
  QuestAfterAction___c__DisplayClass85_0___ctor((QuestAfterAction___c__DisplayClass85_0_o *)v12, 0LL);
  if ( !v12 )
    goto LABEL_10;
  *(_QWORD *)(v12 + 16) = this;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v12 + 16), (int32_t)this, v15, v16);
  *(_QWORD *)(v12 + 24) = finishCallback;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v12 + 24), (int32_t)finishCallback, v17, v18);
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)actionVals, 0LL) )
  {
    ActionExtensions__Call(*(System_Action_o **)(v12 + 24), 0LL);
    return;
  }
  if ( !QuestAfterAction_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(QuestAfterAction_TypeInfo);
  CommandBuf = QuestAfterAction__GenerateCommandBuf(actionVals, v19);
  this->fields.temporaryCommandBuf = CommandBuf;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.temporaryCommandBuf, (int32_t)CommandBuf, v21, v22);
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_38E0168 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
LABEL_10:
    sub_1BC3264(Instance, v14);
  MissionNotifyManager__StartPause((MissionNotifyManager_o *)Instance, 0LL);
  v23 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
  System_Action___ctor(
    v23,
    (Il2CppObject *)v12,
    Method_QuestAfterAction___c__DisplayClass85_0__PlaySpecifiedAction_b__0__,
    0LL);
  this->fields.endAct = v23;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.endAct, (int32_t)v23, v24, v25);
  v26 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
  System_Action___ctor(
    v26,
    (Il2CppObject *)v12,
    Method_QuestAfterAction___c__DisplayClass85_0__PlaySpecifiedAction_b__1__,
    0LL);
  v28 = QuestAfterAction__WaitWhileMainStateFinished(this, v26, v27);
  UnityEngine_MonoBehaviour__StartCoroutine_70019872((UnityEngine_MonoBehaviour_o *)this, v28, 0LL);
}


void __fastcall QuestAfterAction__PlaySpecifiedActionInstantly(
        QuestAfterAction_o *this,
        QuestAfterAction_Command_array *commandArray,
        const MethodInfo *method)
{
  __int64 v5; // x1
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  System_Action_o *v8; // x20
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  const MethodInfo *v11; // x2

  if ( (byte_4AFEC2A & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, commandArray);
    sub_1BC3008(&Method_QuestAfterAction__PlaySpecifiedActionInstantly_b__88_0__, v5);
    byte_4AFEC2A = 1;
  }
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)commandArray, 0LL) )
  {
    this->fields.temporaryCommandBuf = commandArray;
    sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.temporaryCommandBuf, (int32_t)commandArray, v6, v7);
    v8 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
    System_Action___ctor(v8, (Il2CppObject *)this, Method_QuestAfterAction__PlaySpecifiedActionInstantly_b__88_0__, 0LL);
    this->fields.endAct = v8;
    sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.endAct, (int32_t)v8, v9, v10);
    QuestAfterAction__SetState(this, 3, v11);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestAfterAction__RequestMapChange(
        QuestAfterAction_o *this,
        int32_t cType,
        int32_t cTarget,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  TerminalPramsManager_c *v9; // x0
  ScrTerminalMap_o *v10; // x0
  UnityEngine_GameObject_c *klass; // x8

  if ( (byte_4AFEC30 & 1) == 0 )
  {
    sub_1BC3008(&TerminalPramsManager_TypeInfo, *(_QWORD *)&cType);
    sub_1BC3008(&TerminalSceneComponent_TypeInfo, v7);
    byte_4AFEC30 = 1;
  }
  this->fields.ActionMapTargetType = cType;
  this->fields.ActionMapTargetId = cTarget;
  QuestAfterAction__SetState(this, 0, *(const MethodInfo **)&cTarget);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4AFC911 )
  {
    sub_1BC3008(&TerminalPramsManager_TypeInfo, v8);
    byte_4AFC911 = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  v9->static_fields->_IsAutoResume_k__BackingField = 1;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4AFC38D )
  {
    sub_1BC3008(&TerminalSceneComponent_TypeInfo, v8);
    byte_4AFC38D = 1;
  }
  v10 = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v10 = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
  }
  klass = v10->fields.subRootGimmickP->klass;
  if ( !klass || (v10 = *(ScrTerminalMap_o **)&klass->_2.thread_static_fields_offset) == 0LL )
    sub_1BC3264(v10, v8);
  ScrTerminalMap__RequestMapChange(v10, 0, -1, -1, 0LL);
}


void __fastcall QuestAfterAction__SetActionMap(
        QuestAfterAction_o *this,
        QuestAfterAction_Command_o *com,
        const MethodInfo *method)
{
  QuestAfterAction_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  int32_t id; // w8
  int v8; // w8
  unsigned int v9; // w8
  unsigned int v10; // w8
  __int64 v11; // x2
  int m_CancellationTokenSource; // w8
  System_String_o *TitleInfoCtrlCallback_k__BackingField; // x0
  int32_t SpotId; // w0
  Il2CppObject *MasterData_object; // x0
  System_String_o *param; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v17; // x20

  v4 = this;
  if ( (byte_4AFEC1F & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMasterData_QuestMaster___, com);
    sub_1BC3008(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v5);
    this = (QuestAfterAction_o *)sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_4AFEC1F = 1;
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
            this = (QuestAfterAction_o *)System_String__Split((System_String_o *)this, 0x2Cu, 0, 0LL);
            if ( this )
            {
              m_CancellationTokenSource = (int)this->fields.m_CancellationTokenSource;
              if ( m_CancellationTokenSource >= 2 )
              {
                TitleInfoCtrlCallback_k__BackingField = (System_String_o *)this->fields._TitleInfoCtrlCallback_k__BackingField;
LABEL_29:
                SpotId = System_Int32__Parse(TitleInfoCtrlCallback_k__BackingField, 0LL);
LABEL_30:
                v4->fields.ActionMapTargetId = SpotId;
                return;
              }
LABEL_27:
              if ( !m_CancellationTokenSource )
                sub_1BC326C(this, com, v11);
              TitleInfoCtrlCallback_k__BackingField = (System_String_o *)this->fields.invalidMapGimmickIdList;
              goto LABEL_29;
            }
          }
LABEL_42:
          sub_1BC3264(this, com);
        }
        if ( id == 550 )
        {
          v8 = 3;
LABEL_23:
          v4->fields.ActionMapTargetType = v8;
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
          this = (QuestAfterAction_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( this )
          {
            MasterData_object = DataManager__GetMasterData_object_(
                                  (DataManager_o *)this,
                                  (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_QuestMaster___);
            param = com->fields.param;
            v17 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
            this = (QuestAfterAction_o *)System_Int32__Parse(param, 0LL);
            if ( v17 )
            {
              this = (QuestAfterAction_o *)DataMasterBase_object__object__int___GetEntity(
                                             v17,
                                             (int32_t)this,
                                             (const MethodInfo_32AF070 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
              if ( this )
              {
                SpotId = QuestEntity__getSpotId((QuestEntity_o *)this, 0LL);
                goto LABEL_30;
              }
            }
          }
          goto LABEL_42;
        }
        goto LABEL_41;
      }
LABEL_18:
      v8 = 2;
      goto LABEL_23;
    }
    if ( id <= 113 )
    {
      v10 = id - 100;
      if ( v10 > 0xD || ((1 << v10) & 0x3C1F) == 0 )
        goto LABEL_41;
    }
    else
    {
      if ( (unsigned int)(id - 200) < 6 )
        goto LABEL_22;
      v9 = id - 300;
      if ( v9 > 7 )
        goto LABEL_41;
      if ( ((1 << v9) & 0x21) == 0 )
      {
        if ( ((1 << v9) & 0x42) == 0 )
        {
          if ( ((1 << v9) & 0x84) == 0 )
            goto LABEL_41;
          goto LABEL_18;
        }
LABEL_22:
        v8 = 1;
        goto LABEL_23;
      }
    }
    v4->fields.ActionMapTargetType = 0;
LABEL_24:
    this = (QuestAfterAction_o *)com->fields.param;
    if ( this )
    {
      this = (QuestAfterAction_o *)System_String__Split((System_String_o *)this, 0x2Cu, 0, 0LL);
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
void __fastcall QuestAfterAction__SetState(QuestAfterAction_o *this, int32_t state, const MethodInfo *method)
{
  CStateManager_T__o *fsm; // x0

  if ( (byte_4AFEC2E & 1) == 0 )
  {
    sub_1BC3008(&Method_CStateManager_QuestAfterAction__setState__, *(_QWORD *)&state);
    byte_4AFEC2E = 1;
  }
  fsm = (CStateManager_T__o *)this->fields.fsm;
  if ( !fsm )
    sub_1BC3264(0LL, *(_QWORD *)&state);
  CStateManager_object___setState(
    fsm,
    state,
    (const MethodInfo_323D3EC *)Method_CStateManager_QuestAfterAction__setState__);
}


void __fastcall QuestAfterAction__SkipToNextAction(QuestAfterAction_o *this, const MethodInfo *method)
{
  this->fields.isSkippedNext = 1;
}


void __fastcall QuestAfterAction__Update(QuestAfterAction_o *this, const MethodInfo *method)
{
  CStateManager_T__o *fsm; // x0

  if ( (byte_4AFEC25 & 1) == 0 )
  {
    sub_1BC3008(&Method_CStateManager_QuestAfterAction__update__, method);
    byte_4AFEC25 = 1;
  }
  fsm = (CStateManager_T__o *)this->fields.fsm;
  if ( fsm )
    CStateManager_object___update(fsm, (const MethodInfo_323D3C8 *)Method_CStateManager_QuestAfterAction__update__);
}


System_Collections_IEnumerator_o *__fastcall QuestAfterAction__WaitWhileMainStateFinished(
        QuestAfterAction_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  int32_t v10; // w2
  const MethodInfo *v11; // x3

  if ( (byte_4AFEC2C & 1) == 0 )
  {
    sub_1BC3008(&QuestAfterAction__WaitWhileMainStateFinished_d__91_TypeInfo, action);
    byte_4AFEC2C = 1;
  }
  v5 = sub_1BC3254(QuestAfterAction__WaitWhileMainStateFinished_d__91_TypeInfo);
  QuestAfterAction__WaitWhileMainStateFinished_d__91___ctor(
    (QuestAfterAction__WaitWhileMainStateFinished_d__91_o *)v5,
    0,
    0LL);
  if ( !v5 )
    sub_1BC3264(v6, v7);
  *(_QWORD *)(v5 + 32) = this;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v5 + 32), (int32_t)this, v8, v9);
  *(_QWORD *)(v5 + 40) = action;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v5 + 40), (int32_t)action, v10, v11);
  return (System_Collections_IEnumerator_o *)v5;
}


void __fastcall QuestAfterAction___PlaySpecifiedActionInstantly_b__88_0(
        QuestAfterAction_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  const MethodInfo *v7; // x2

  this->fields.endAct = 0LL;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.endAct, 0, v2, v3);
  this->fields.temporaryCommandBuf = 0LL;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.temporaryCommandBuf, 0, v5, v6);
  QuestAfterAction__SetState(this, 0, v7);
}


System_Int32_array *__fastcall QuestAfterAction__getMapGmkOffIdList(QuestAfterAction_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *invalidMapGimmickIdList; // x0

  if ( (byte_4AFEC1E & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_List_int__ToArray__, method);
    byte_4AFEC1E = 1;
  }
  invalidMapGimmickIdList = this->fields.invalidMapGimmickIdList;
  if ( !invalidMapGimmickIdList )
    sub_1BC3264(0LL, method);
  return System_Collections_Generic_List_int___ToArray(
           invalidMapGimmickIdList,
           (const MethodInfo_36858D4 *)Method_System_Collections_Generic_List_int__ToArray__);
}


BlankEarthQuestAfterAction_o *__fastcall QuestAfterAction__get_BlankEarthQuestAfterAction(
        QuestAfterAction_o *this,
        const MethodInfo *method)
{
  return this->fields._BlankEarthQuestAfterAction_k__BackingField;
}


bool __fastcall QuestAfterAction__get_IsRequestedStopBgm(QuestAfterAction_o *this, const MethodInfo *method)
{
  return this->fields.isRequestedStopBgm;
}


QuestAfterAction_TitleInfoControlCallback_o *__fastcall QuestAfterAction__get_TitleInfoCtrlCallback(
        QuestAfterAction_o *this,
        const MethodInfo *method)
{
  return this->fields._TitleInfoCtrlCallback_k__BackingField;
}


void __fastcall QuestAfterAction__releaseVoice(QuestAfterAction_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  struct System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__o *svtVoices; // x0
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *Values; // x21
  System_Collections_Generic_List_object__o *v13; // x20
  _BOOL8 v14; // x0
  __int64 v15; // x1
  System_String_o *VoiceAssetName_41775916; // x20
  System_Collections_Generic_List_Enumerator_object__o v17; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4AFEC23 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__Clear__, method);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__get_Values__, v3);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_QuestAfterAction_VoiceInfo__Dispose__, v4);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_QuestAfterAction_VoiceInfo__MoveNext__, v5);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_QuestAfterAction_VoiceInfo__get_Current__, v6);
    sub_1BC3008(&Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo__GetEnumerator__, v7);
    sub_1BC3008(&Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo___ctor__, v8);
    sub_1BC3008(&System_Collections_Generic_List_QuestAfterAction_VoiceInfo__TypeInfo, v9);
    sub_1BC3008(&SoundManager_TypeInfo, v10);
    byte_4AFEC23 = 1;
  }
  memset(&v17, 0, sizeof(v17));
  svtVoices = this->fields.svtVoices;
  if ( !svtVoices )
    goto LABEL_14;
  Values = System_Collections_Generic_Dictionary_int__object___get_Values(
             (System_Collections_Generic_Dictionary_int__object__o *)svtVoices,
             (const MethodInfo_3308364 *)Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__get_Values__);
  v13 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_QuestAfterAction_VoiceInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor_57280308(
    v13,
    (System_Collections_Generic_IEnumerable_T__o *)Values,
    (const MethodInfo_36A0734 *)Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo___ctor__);
  if ( !v13 )
    goto LABEL_14;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v17,
    v13,
    (const MethodInfo_36A1938 *)Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo__GetEnumerator__);
  while ( 1 )
  {
    v14 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v17,
            (const MethodInfo_343678C *)Method_System_Collections_Generic_List_Enumerator_QuestAfterAction_VoiceInfo__MoveNext__);
    if ( !v14 )
      break;
    if ( !v17.fields._current )
      sub_1BC3264(v14, v15);
    VoiceAssetName_41775916 = ServantVoiceEntity__getVoiceAssetName_41775916((int32_t)v17.fields._current[1].klass, 0LL);
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    SoundManager__releaseAudioAssetStorage(VoiceAssetName_41775916, 0LL);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v17,
    (const MethodInfo_3436788 *)Method_System_Collections_Generic_List_Enumerator_QuestAfterAction_VoiceInfo__Dispose__);
  svtVoices = this->fields.svtVoices;
  if ( !svtVoices )
LABEL_14:
    sub_1BC3264(svtVoices, method);
  System_Collections_Generic_Dictionary_int__object___Clear(
    (System_Collections_Generic_Dictionary_int__object__o *)svtVoices,
    (const MethodInfo_33086DC *)Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__Clear__);
  this->fields.isLoadedVoice = 0;
}


void __fastcall QuestAfterAction__set_IsRequestedStopBgm(
        QuestAfterAction_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields.isRequestedStopBgm = value;
}


void __fastcall QuestAfterAction_Command___ctor(QuestAfterAction_Command_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


System_String_o *__fastcall QuestAfterAction_Command__GetAvailableRandomVoice(
        QuestAfterAction_Command_o *this,
        int32_t *svtId,
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
  void *param; // x0
  System_Collections_Generic_IEnumerable_T__o *v15; // x22
  Il2CppObject *MasterData_object; // x20
  System_Collections_Generic_List_object__o *v17; // x21
  System_Random_o *v18; // x22
  __int64 size; // x1
  int32_t v20; // w24
  int v21; // w8
  void *v22; // x25
  Il2CppObject *Item; // x25
  __int64 v24; // x8
  __int64 v25; // x8
  int32_t v26; // w1
  _BOOL8 v27; // x0
  __int64 v28; // x1
  __int64 v29; // x2
  int v30; // w8
  void *v31; // x21
  int32_t result; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_4AFEC38 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMasterData_VoicePlayCondMaster___, svtId);
    sub_1BC3008(&Method_System_Collections_Generic_List_string__RemoveAt__, v5);
    sub_1BC3008(&Method_System_Collections_Generic_List_string___ctor___76772336, v6);
    sub_1BC3008(&Method_System_Collections_Generic_List_string__get_Count__, v7);
    sub_1BC3008(&Method_System_Collections_Generic_List_string__get_Item__, v8);
    sub_1BC3008(&System_Collections_Generic_List_string__TypeInfo, v9);
    sub_1BC3008(&System_Random_TypeInfo, v10);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_1BC3008(&TerminalSceneComponent_TypeInfo, v12);
    sub_1BC3008(&StringLiteral_15961/*"_"*/, v13);
    byte_4AFEC38 = 1;
  }
  *svtId = 0;
  if ( this->fields.id != 800 )
    return 0LL;
  param = this->fields.param;
  if ( !param )
    goto LABEL_41;
  param = System_String__Split((System_String_o *)param, 0x2Cu, 0, 0LL);
  if ( !param )
    goto LABEL_41;
  v15 = (System_Collections_Generic_IEnumerable_T__o *)param;
  if ( *((int *)param + 6) > 1 )
  {
    param = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( param )
    {
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)param,
                            (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_VoicePlayCondMaster___);
      v17 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_string__TypeInfo);
      System_Collections_Generic_List_object____ctor_57280308(
        v17,
        v15,
        (const MethodInfo_36A0734 *)Method_System_Collections_Generic_List_string___ctor___76772336);
      result = 0;
      v18 = (System_Random_o *)sub_1BC3254(System_Random_TypeInfo);
      System_Random___ctor(v18, 0LL);
      if ( v17 )
      {
        if ( v18 )
        {
          size = (unsigned int)v17->fields._size;
          while ( 1 )
          {
            v20 = ((__int64 (__fastcall *)(System_Random_o *, __int64, void *))v18->klass->vtable._7_Next.method)(
                    v18,
                    size,
                    v18->klass[1]._1.image);
            result = 0;
            param = System_Collections_Generic_List_object___get_Item(
                      v17,
                      v20,
                      (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_string__get_Item__);
            if ( !param )
              break;
            param = System_String__Split((System_String_o *)param, 0x5Fu, 0, 0LL);
            if ( !param )
              break;
            v21 = *((_DWORD *)param + 6);
            v22 = param;
            if ( v21 == 3 )
            {
              v27 = System_Int32__TryParse(*((System_String_o **)param + 4), &result, 0LL);
              if ( *((_DWORD *)v22 + 6) < 3u )
                goto LABEL_42;
              param = System_String__Concat_62386896(
                        *((System_String_o **)v22 + 5),
                        (System_String_o *)StringLiteral_15961/*"_"*/,
                        *((System_String_o **)v22 + 6),
                        0LL);
              if ( !MasterData_object )
                break;
              v26 = result;
              Item = (Il2CppObject *)param;
            }
            else
            {
              if ( v21 != 2 )
                goto LABEL_29;
              result = 0;
              Item = System_Collections_Generic_List_object___get_Item(
                       v17,
                       v20,
                       (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_string__get_Item__);
              if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
              if ( !byte_4AFC38D )
              {
                sub_1BC3008(&TerminalSceneComponent_TypeInfo, svtId);
                byte_4AFC38D = 1;
              }
              param = TerminalSceneComponent_TypeInfo;
              if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
                param = TerminalSceneComponent_TypeInfo;
              }
              v24 = **((_QWORD **)param + 23);
              if ( !v24 )
                break;
              v25 = *(_QWORD *)(v24 + 464);
              if ( !v25 )
                break;
              param = (void *)ServantVoiceEntity__getSvtIdfromVoiceAssetName(*(System_String_o **)(v25 + 40), 0LL);
              if ( !MasterData_object )
                break;
              v26 = (int)param;
            }
            if ( VoicePlayCondMaster__isVoicePlay(
                   (VoicePlayCondMaster_o *)MasterData_object,
                   v26,
                   (System_String_o *)Item,
                   0LL,
                   -1LL,
                   -1,
                   0LL,
                   0LL,
                   0LL) )
            {
              *svtId = result;
              return (System_String_o *)Item;
            }
LABEL_29:
            System_Collections_Generic_List_object___RemoveAt(
              v17,
              v20,
              (const MethodInfo_36A2614 *)Method_System_Collections_Generic_List_string__RemoveAt__);
            size = (unsigned int)v17->fields._size;
            if ( !(_DWORD)size )
            {
              Item = 0LL;
              *svtId = 0;
              return (System_String_o *)Item;
            }
          }
        }
      }
    }
LABEL_41:
    sub_1BC3264(param, svtId);
  }
  param = this->fields.param;
  if ( !param )
    goto LABEL_41;
  param = System_String__Split((System_String_o *)param, 0x5Fu, 0, 0LL);
  if ( !param )
    goto LABEL_41;
  v30 = *((_DWORD *)param + 6);
  v31 = param;
  if ( v30 != 3 )
  {
    if ( v30 == 2 )
      return this->fields.param;
    return 0LL;
  }
  v27 = System_Int32__TryParse(*((System_String_o **)param + 4), svtId, 0LL);
  if ( *((_DWORD *)v31 + 6) < 3u )
LABEL_42:
    sub_1BC326C(v27, v28, v29);
  return System_String__Concat_62386896(
           *((System_String_o **)v31 + 5),
           (System_String_o *)StringLiteral_15961/*"_"*/,
           *((System_String_o **)v31 + 6),
           0LL);
}


System_String_o *__fastcall QuestAfterAction_Command__GetBgmName(
        QuestAfterAction_Command_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_String_o *v5; // x0
  bool v6; // w8
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF
  int32_t result; // [xsp+1Ch] [xbp-14h] BYREF

  if ( (byte_4AFEC3A & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMasterData_BgmMaster___, method);
    sub_1BC3008(&Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__, v3);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_4AFEC3A = 1;
  }
  result = 0;
  entity = 0LL;
  v5 = 0LL;
  if ( this->fields.id == 851 )
  {
    v6 = System_Int32__TryParse(this->fields.param, &result, 0LL);
    v5 = 0LL;
    if ( v6 )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_12;
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_BgmMaster___);
      if ( !Instance )
        goto LABEL_12;
      Instance = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                   (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                   &entity,
                                   result,
                                   (const MethodInfo_32AF0BC *)Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( entity )
          return (System_String_o *)entity[1].monitor;
LABEL_12:
        sub_1BC3264(Instance, v8);
      }
      return 0LL;
    }
  }
  return v5;
}


int32_t __fastcall QuestAfterAction_Command__GetSvtId(
        QuestAfterAction_Command_o *this,
        System_String_o *str,
        const MethodInfo *method)
{
  System_String_o **v3; // x0
  int32_t result; // [xsp+Ch] [xbp-4h] BYREF

  if ( this->fields.id != 800 )
    return 0;
  v3 = (System_String_o **)str;
  if ( !str || (v3 = (System_String_o **)System_String__Split(str, 0x5Fu, 0, 0LL)) == 0LL )
    sub_1BC3264(v3, str);
  if ( *((_DWORD *)v3 + 6) != 3 )
    return 0;
  result = 0;
  if ( System_Int32__TryParse(v3[4], &result, 0LL) )
    return result;
  else
    return 0;
}


System_String_o *__fastcall QuestAfterAction_Command__GetVoiceId(
        QuestAfterAction_Command_o *this,
        System_String_o *str,
        const MethodInfo *method)
{
  System_String_o *v3; // x19
  QuestAfterAction_Command_o *v4; // x20
  int param; // w8

  v3 = str;
  v4 = this;
  if ( (byte_4AFEC39 & 1) == 0 )
  {
    this = (QuestAfterAction_Command_o *)sub_1BC3008(&StringLiteral_15961/*"_"*/, str);
    byte_4AFEC39 = 1;
  }
  if ( v4->fields.id == 800 )
  {
    if ( !v3 || (this = (QuestAfterAction_Command_o *)System_String__Split(v3, 0x5Fu, 0, 0LL)) == 0LL )
      sub_1BC3264(this, str);
    param = (int)this->fields.param;
    if ( param == 2 )
      return v3;
    if ( param == 3 )
      return System_String__Concat_62386896(
               (System_String_o *)this[1].monitor,
               (System_String_o *)StringLiteral_15961/*"_"*/,
               *(System_String_o **)&this[1].fields.id,
               0LL);
  }
  return 0LL;
}


void __fastcall QuestAfterAction_StateAdditional___ctor(
        QuestAfterAction_StateAdditional_o *this,
        const MethodInfo *method)
{
  QuestAfterAction_StateMain___ctor((QuestAfterAction_StateMain_o *)this, 0LL);
}


void __fastcall QuestAfterAction_StateAdditionalBase___ctor(
        QuestAfterAction_StateAdditionalBase_o *this,
        const MethodInfo *method)
{
  QuestAfterAction_StateMain___ctor((QuestAfterAction_StateMain_o *)this, 0LL);
}


void __fastcall QuestAfterAction_StateAdditionalBase__begin(
        QuestAfterAction_StateAdditionalBase_o *this,
        QuestAfterAction_o *that,
        const MethodInfo *method)
{
  QuestAfterAction_StateMain__begin((QuestAfterAction_StateMain_o *)this, that, 0LL);
  ((void (__fastcall *)(QuestAfterAction_StateAdditionalBase_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._12_set_CommandIndex.method)(
    this,
    0LL,
    this->klass->vtable._13_UpdateAnim.methodPtr);
}


QuestAfterAction_Command_array *__fastcall QuestAfterAction_StateAdditionalBase__get_CommandBuf(
        QuestAfterAction_StateAdditionalBase_o *this,
        const MethodInfo *method)
{
  struct QuestAfterAction_o *that; // x8

  that = this->fields.that;
  if ( !that )
    sub_1BC3264(this, method);
  return that->fields.temporaryCommandBuf;
}


int32_t __fastcall QuestAfterAction_StateAdditionalBase__get_CommandIndex(
        QuestAfterAction_StateAdditionalBase_o *this,
        const MethodInfo *method)
{
  return this->fields._CommandIndex_k__BackingField;
}


void __fastcall QuestAfterAction_StateAdditionalBase__onEnd(
        QuestAfterAction_StateAdditionalBase_o *this,
        bool deleteKey,
        const MethodInfo *method)
{
  struct QuestAfterAction_o *screenCollider; // x0
  __int64 v5; // x1
  struct QuestAfterAction_o *that; // x8

  screenCollider = (struct QuestAfterAction_o *)((__int64 (__fastcall *)(QuestAfterAction_StateAdditionalBase_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._12_set_CommandIndex.method)(
                                                  this,
                                                  0LL,
                                                  this->klass->vtable._13_UpdateAnim.methodPtr);
  that = this->fields.that;
  if ( !that
    || (screenCollider = (struct QuestAfterAction_o *)that->fields.screenCollider) == 0LL
    || (UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)screenCollider, 0, 0LL),
        (screenCollider = this->fields.that) == 0LL) )
  {
    sub_1BC3264(screenCollider, v5);
  }
  QuestAfterAction__CallEndAct(screenCollider, 0LL);
}


void __fastcall QuestAfterAction_StateAdditionalBase__set_CommandIndex(
        QuestAfterAction_StateAdditionalBase_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._CommandIndex_k__BackingField = value;
}


void __fastcall QuestAfterAction_StateInstant___ctor(QuestAfterAction_StateInstant_o *this, const MethodInfo *method)
{
  QuestAfterAction_StateMain___ctor((QuestAfterAction_StateMain_o *)this, 0LL);
}


void __fastcall QuestAfterAction_StateInstant__EndAnim(QuestAfterAction_StateInstant_o *this, const MethodInfo *method)
{
  if ( !this->fields.completed )
  {
    QuestAfterAction_StateMain__EndAnim((QuestAfterAction_StateMain_o *)this, 0LL);
    ((void (__fastcall *)(QuestAfterAction_StateInstant_o *, struct QuestAfterAction_o *, Il2CppMethodPointer))this->klass->vtable._13_UpdateAnim.method)(
      this,
      this->fields.that,
      this->klass->vtable._14_EndAnim.methodPtr);
  }
}


bool __fastcall QuestAfterAction_StateInstant__IsUsableCommand(
        QuestAfterAction_StateInstant_o *this,
        QuestAfterAction_Command_o *cmd,
        const MethodInfo *method)
{
  int32_t id; // w19

  if ( (byte_4AFECAF & 1) == 0 )
  {
    this = (QuestAfterAction_StateInstant_o *)sub_1BC3008(&QuestAfterAction_TypeInfo, cmd);
    byte_4AFECAF = 1;
  }
  if ( !cmd )
    sub_1BC3264(this, cmd);
  id = cmd->fields.id;
  if ( !QuestAfterAction_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(QuestAfterAction_TypeInfo);
  return QuestAfterAction__IsNoWaitCommand(id, 0LL);
}


void __fastcall QuestAfterAction_StateInstant__UpdateAnim(
        QuestAfterAction_StateInstant_o *this,
        QuestAfterAction_o *that,
        const MethodInfo *method)
{
  if ( !this->fields.completed )
    QuestAfterAction_StateMain__UpdateAnim((QuestAfterAction_StateMain_o *)this, that, 0LL);
}


void __fastcall QuestAfterAction_StateInstant__begin(
        QuestAfterAction_StateInstant_o *this,
        QuestAfterAction_o *that,
        const MethodInfo *method)
{
  QuestAfterAction_StateInstant_c *klass; // x8

  QuestAfterAction_StateMain__begin((QuestAfterAction_StateMain_o *)this, that, 0LL);
  ((void (__fastcall *)(QuestAfterAction_StateInstant_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._12_set_CommandIndex.method)(
    this,
    0LL,
    this->klass->vtable._13_UpdateAnim.methodPtr);
  klass = this->klass;
  this->fields.completed = 0;
  ((void (__fastcall *)(QuestAfterAction_StateInstant_o *, QuestAfterAction_o *, Il2CppMethodPointer))klass->vtable._13_UpdateAnim.method)(
    this,
    that,
    klass->vtable._14_EndAnim.methodPtr);
}


void __fastcall QuestAfterAction_StateInstant__onEnd(
        QuestAfterAction_StateInstant_o *this,
        bool deleteKey,
        const MethodInfo *method)
{
  this->fields.completed = 1;
  QuestAfterAction_StateAdditionalBase__onEnd((QuestAfterAction_StateAdditionalBase_o *)this, 0, method);
}


void __fastcall QuestAfterAction_StateInstant__update(
        QuestAfterAction_StateInstant_o *this,
        QuestAfterAction_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall QuestAfterAction_StateMain___ctor(QuestAfterAction_StateMain_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QuestAfterAction_StateMain__EndAnim(QuestAfterAction_StateMain_o *this, const MethodInfo *method)
{
  QuestAfterAction_StateMain_c *klass; // x8
  int v4; // w0
  int v5; // w20
  __int64 v6; // x0
  __int64 v7; // x1

  klass = this->klass;
  this->fields.IsAnimDoing = 0;
  v4 = ((__int64 (__fastcall *)(QuestAfterAction_StateMain_o *, Il2CppMethodPointer))klass->vtable._11_get_CommandIndex.method)(
         this,
         klass->vtable._12_set_CommandIndex.methodPtr);
  ((void (__fastcall *)(QuestAfterAction_StateMain_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._12_set_CommandIndex.method)(
    this,
    (unsigned int)(v4 + 1),
    this->klass->vtable._13_UpdateAnim.methodPtr);
  v5 = ((__int64 (__fastcall *)(QuestAfterAction_StateMain_o *, Il2CppMethodPointer))this->klass->vtable._11_get_CommandIndex.method)(
         this,
         this->klass->vtable._12_set_CommandIndex.methodPtr);
  v6 = ((__int64 (__fastcall *)(QuestAfterAction_StateMain_o *, Il2CppMethodPointer))this->klass->vtable._10_get_CommandBuf.method)(
         this,
         this->klass->vtable._11_get_CommandIndex.methodPtr);
  if ( !v6 )
    sub_1BC3264(0LL, v7);
  if ( v5 >= *(_DWORD *)(v6 + 24) )
    ((void (__fastcall *)(QuestAfterAction_StateMain_o *, __int64, void *))this->klass->vtable._15_onEnd.method)(
      this,
      1LL,
      this->klass[1]._1.image);
}


void __fastcall QuestAfterAction_StateMain__ForceEndAnim(
        QuestAfterAction_StateMain_o *this,
        bool deleteKey,
        const MethodInfo *method)
{
  QuestAfterAction_StateMain_c *klass; // x8
  __int64 v6; // x0
  __int64 v7; // x1

  klass = this->klass;
  this->fields.IsAnimDoing = 0;
  v6 = ((__int64 (__fastcall *)(QuestAfterAction_StateMain_o *, Il2CppMethodPointer, const MethodInfo *))klass->vtable._10_get_CommandBuf.method)(
         this,
         klass->vtable._11_get_CommandIndex.methodPtr,
         method);
  if ( !v6 )
    sub_1BC3264(0LL, v7);
  ((void (__fastcall *)(QuestAfterAction_StateMain_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._12_set_CommandIndex.method)(
    this,
    *(unsigned int *)(v6 + 24),
    this->klass->vtable._13_UpdateAnim.methodPtr);
  ((void (__fastcall *)(QuestAfterAction_StateMain_o *, bool, void *))this->klass->vtable._15_onEnd.method)(
    this,
    deleteKey,
    this->klass[1]._1.image);
}


bool __fastcall QuestAfterAction_StateMain__IsUsableCommand(
        QuestAfterAction_StateMain_o *this,
        QuestAfterAction_Command_o *cmd,
        const MethodInfo *method)
{
  return 1;
}


void __fastcall QuestAfterAction_StateMain__StartMapGimmick(
        QuestAfterAction_StateMain_o *this,
        const MethodInfo *method)
{
  QuestAfterAction_StateMain_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  struct QuestAfterAction_o *that; // x8
  __int64 v8; // x2
  __int64 v9; // x8
  QuestAfterAction_StateMain_o *v10; // x20
  unsigned __int64 v11; // x22
  struct QuestAfterAction_o *v12; // x8
  int32_t v13; // w21
  Il2CppObject *MapComponent_object; // x21
  Il2CppClass *klass; // x8
  float AnimTime; // s0
  const MethodInfo *v17; // x3

  v2 = this;
  if ( (byte_4AFEC3F & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_List_int__Remove__, method);
    sub_1BC3008(&Method_System_Collections_Generic_List_int__ToArray__, v3);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v4);
    sub_1BC3008(&Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___, v5);
    this = (QuestAfterAction_StateMain_o *)sub_1BC3008(&Method_SingletonTemplate_QuestTree__get_Instance__, v6);
    byte_4AFEC3F = 1;
  }
  that = v2->fields.that;
  if ( !that )
    goto LABEL_22;
  this = (QuestAfterAction_StateMain_o *)that->fields.invalidMapGimmickIdList;
  if ( !this )
    goto LABEL_22;
  this = (QuestAfterAction_StateMain_o *)System_Collections_Generic_List_int___ToArray(
                                           (System_Collections_Generic_List_int__o *)this,
                                           (const MethodInfo_36858D4 *)Method_System_Collections_Generic_List_int__ToArray__);
  if ( !this )
    goto LABEL_22;
  v9 = *(_QWORD *)&this->fields.IsAnimDoing;
  v10 = this;
  if ( (int)v9 >= 1 )
  {
    v11 = 0LL;
    while ( 1 )
    {
      if ( v11 >= (unsigned int)v9 )
        sub_1BC326C(this, method, v8);
      v12 = v2->fields.that;
      if ( !v12 )
        break;
      this = (QuestAfterAction_StateMain_o *)v12->fields.invalidMapGimmickIdList;
      if ( !this )
        break;
      v13 = *((_DWORD *)&v10->fields.waitTime + v11);
      System_Collections_Generic_List_int___Remove(
        (System_Collections_Generic_List_int__o *)this,
        v13,
        (const MethodInfo_3685318 *)Method_System_Collections_Generic_List_int__Remove__);
      this = (QuestAfterAction_StateMain_o *)v2->fields.that;
      if ( !this )
        break;
      MapComponent_object = QuestAfterAction__GetMapComponent_object_(
                              (QuestAfterAction_o *)this,
                              2,
                              v13,
                              v2,
                              (const MethodInfo_30976C8 *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (QuestAfterAction_StateMain_o *)UnityEngine_Object__op_Inequality(
                                               (UnityEngine_Object_o *)MapComponent_object,
                                               0LL,
                                               0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        this = (QuestAfterAction_StateMain_o *)SingletonTemplate_object___get_Instance((const MethodInfo_38E0168 *)Method_SingletonTemplate_QuestTree__get_Instance__);
        if ( !MapComponent_object || !this )
          break;
        this = (QuestAfterAction_StateMain_o *)QuestTree__CheckMapGimmickCond_35639228(
                                                 (QuestTree_o *)this,
                                                 (MapControl_MapGimmickInfo_o *)MapComponent_object[7].klass,
                                                 0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          klass = MapComponent_object[7].klass;
          if ( !klass )
            break;
          LODWORD(klass->_1.name) = 1;
          AnimTime = MapGimmickComponent__GetAnimTime((MapGimmickComponent_o *)MapComponent_object, method);
          MapGimmickComponent__SetDispAnim_35279032((MapGimmickComponent_o *)MapComponent_object, 1, AnimTime, 1, v17);
        }
      }
      LODWORD(v9) = *(_DWORD *)&v10->fields.IsAnimDoing;
      if ( (__int64)++v11 >= (int)v9 )
        return;
    }
LABEL_22:
    sub_1BC3264(this, method);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestAfterAction_StateMain__UpdateAnim(
        QuestAfterAction_StateMain_o *this,
        QuestAfterAction_o *that,
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
  __int64 v30; // x1
  __int64 v31; // x1
  __int64 v32; // x1
  __int64 v33; // x1
  __int64 v34; // x1
  __int64 v35; // x1
  __int64 v36; // x1
  __int64 v37; // x1
  __int64 v38; // x1
  __int64 v39; // x1
  __int64 v40; // x1
  __int64 v41; // x1
  __int64 v42; // x1
  __int64 v43; // x1
  __int64 v44; // x1
  __int64 v45; // x1
  __int64 v46; // x1
  __int64 v47; // x1
  __int64 v48; // x1
  __int64 v49; // x1
  __int64 v50; // x1
  __int64 v51; // x1
  __int64 v52; // x1
  __int64 v53; // x1
  __int64 v54; // x1
  __int64 v55; // x1
  __int64 v56; // x1
  __int64 v57; // x1
  __int64 v58; // x1
  __int64 v59; // x1
  __int64 v60; // x1
  __int64 v61; // x1
  __int64 v62; // x1
  __int64 v63; // x1
  __int64 v64; // x1
  __int64 v65; // x1
  __int64 v66; // x1
  __int64 v67; // x1
  __int64 v68; // x1
  __int64 v69; // x1
  __int64 v70; // x1
  __int64 v71; // x1
  __int64 v72; // x1
  __int64 v73; // x1
  __int64 v74; // x1
  __int64 v75; // x1
  __int64 v76; // x1
  __int64 v77; // x1
  __int64 v78; // x1
  __int64 v79; // x1
  __int64 v80; // x1
  __int64 v81; // x1
  __int64 v82; // x1
  __int64 v83; // x1
  __int64 v84; // x1
  __int64 v85; // x1
  __int64 v86; // x1
  __int64 v87; // x1
  __int64 v88; // x1
  __int64 v89; // x1
  __int64 v90; // x1
  __int64 v91; // x1
  __int64 v92; // x1
  __int64 v93; // x1
  __int64 v94; // x1
  __int64 v95; // x1
  __int64 v96; // x1
  __int64 v97; // x1
  __int64 v98; // x1
  __int64 v99; // x1
  __int64 v100; // x22
  __int64 updated; // x0
  const MethodInfo *v102; // x1
  int32_t v103; // w2
  const MethodInfo *v104; // x3
  QuestAfterAction_o **v105; // x20
  int32_t v106; // w2
  const MethodInfo *v107; // x3
  QuestAfterAction_StateMain_c *klass; // x8
  __int64 v109; // x21
  const MethodInfo_37C4780 *v110; // x2
  QuestAfterAction_Command_o *v111; // x21
  QuestAfterAction_o *v112; // x23
  BlankEarthQuestAfterAction_o *BlankEarthQuestAfterAction_k__BackingField; // x24
  System_Action_o *v114; // x25
  int id; // w8
  __int64 v116; // x21
  int v117; // w22
  int32_t v118; // w21
  __int64 v119; // x8
  bool v120; // w2
  bool v121; // w3
  int32_t v122; // w1
  __int64 v123; // x20
  int32_t v124; // w2
  const MethodInfo *v125; // x3
  __int64 v126; // x23
  int32_t v127; // w21
  Il2CppObject *v128; // x0
  __int64 *v129; // x24
  int32_t v130; // w2
  const MethodInfo *v131; // x3
  MapControl_QuestInfo_o *QuestInfo; // x0
  __int64 v133; // x22
  int32_t v134; // w2
  const MethodInfo *v135; // x3
  const MethodInfo *v136; // x2
  int v137; // w21
  __int64 v138; // x8
  NetworkManager_ResultCallbackFunc_o *v139; // x21
  Il2CppObject *Request_object; // x20
  int32_t v141; // w21
  __int64 v142; // x21
  int32_t v143; // w20
  int32_t v144; // w22
  __int64 v145; // x8
  __int64 v146; // x23
  float v147; // s8
  TerminalSceneComponent_c *v148; // x0
  TerminalSceneComponent_o *mInstance; // x22
  __int64 v150; // x20
  int32_t v151; // w2
  const MethodInfo *v152; // x3
  __int64 v153; // x23
  __int64 v154; // x8
  __int64 v155; // x22
  int32_t v156; // w21
  bool v157; // w24
  bool v158; // w25
  __int64 v159; // x8
  __int64 v160; // x22
  _BOOL4 v161; // w23
  __int64 v162; // x20
  int32_t v163; // w2
  const MethodInfo *v164; // x3
  __int64 v165; // x8
  QuestAfterAction_o *v166; // x22
  Il2CppObject *v167; // x0
  int32_t v168; // w2
  const MethodInfo *v169; // x3
  UnityEngine_Object_o *v170; // x19
  SrcSpotBasePrefab_o *v171; // x19
  System_Action_o *v172; // x21
  int32_t v173; // w1
  __int64 v174; // x20
  int32_t v175; // w2
  const MethodInfo *v176; // x3
  __int64 v177; // x8
  QuestAfterAction_o *v178; // x22
  Il2CppObject *v179; // x0
  int32_t v180; // w2
  const MethodInfo *v181; // x3
  UnityEngine_Object_o *v182; // x19
  ModelLineComponent_o *v183; // x19
  System_Action_o *v184; // x21
  const MethodInfo *v185; // x3
  int32_t v186; // w1
  System_String_o *v187; // x19
  System_String_o *v188; // x20
  System_String_o *v189; // x20
  Il2CppObject *Instance; // x21
  System_Action_o *v191; // x23
  float v192; // s0
  __int64 v193; // x19
  int32_t v194; // w2
  const MethodInfo *v195; // x3
  __int64 v196; // x22
  int32_t v197; // w20
  int32_t v198; // w21
  BgmManager_c *v199; // x0
  float v200; // s0
  float masterVolume; // s1
  float v202; // s0
  __int64 v203; // x8
  ScrTerminalListTop_o *v204; // x22
  float v205; // s8
  float v206; // s9
  __int64 v207; // x8
  ScrTerminalListTop_o *v208; // x22
  System_Action_o *v209; // x23
  __int64 v210; // x22
  int v211; // w23
  float v212; // s8
  int32_t v213; // w21
  __int64 v214; // x1
  float DEFAULT_FADE_TIME; // s8
  AvalonSceneManager_c *v216; // x0
  TerminalSceneComponent_c *v217; // x0
  TerminalSceneComponent_o *v218; // x19
  System_Action_o *v219; // x20
  TerminalSceneComponent_o *v220; // x0
  float v221; // s0
  System_Action_o *v222; // x1
  System_String_o *param; // x21
  _QWORD *v224; // x0
  System_Reflection_MethodBase_o *v225; // x0
  __int64 v226; // x23
  int32_t v227; // w21
  int32_t v228; // w22
  int32_t v229; // w23
  __int64 v230; // x8
  PlayMakerFSM_o *v231; // x20
  System_String_o *ActiveStateName; // x0
  __int64 v233; // x8
  __int64 v234; // x8
  QuestBoardListViewManager_o *v235; // x21
  System_Action_o *v236; // x22
  Il2CppObject *v237; // x23
  struct QuestAfterAction_StateMain___c_StaticFields *static_fields; // x0
  int32_t v239; // w2
  const MethodInfo *v240; // x3
  TerminalSceneComponent_c *v241; // x0
  QuestAfterAction_o *v242; // x8
  __int64 v243; // x8
  __int64 v244; // x8
  __int64 v245; // x8
  System_String_o *v246; // x20
  System_String_o *v247; // x21
  SeManager_c *v248; // x0
  float DEFAULT_VOLUME; // s8
  __int64 v250; // x21
  int32_t v251; // w0
  int32_t v252; // w20
  float v253; // s8
  int32_t v254; // w19
  __int64 v255; // x8
  __int64 v256; // x8
  __int64 v257; // x23
  float v258; // s0
  int32_t v259; // w22
  __int64 v260; // x8
  ScrTerminalMap_o *v261; // x24
  float v262; // s0
  float v263; // s9
  float v264; // s0
  const MethodInfo_37C4780 *v265; // x2
  int v266; // w8
  float v267; // s10
  float v268; // s9
  float v269; // s11
  MapCamera_o *mMapCamera; // x20
  Il2CppObject *MapComponent_object; // x22
  Il2CppObject *v272; // x20
  __int64 v273; // x8
  ScrTerminalMap_o *v274; // x23
  __int64 v275; // x8
  ScrTerminalMap_o *v276; // x20
  UnityEngine_GameObject_o *gameObject; // x22
  System_Action_o *v278; // x23
  TerminalPramsManager_c *v279; // x0
  __int64 v280; // x8
  __int64 v281; // x1
  const MethodInfo *v282; // x2
  TerminalPramsManager_c *v283; // x0
  __int64 v284; // x21
  const MethodInfo *v285; // x3
  QuestAfterAction_o *v286; // x8
  QuestAfterAction_TitleInfoControlCallback_o *TitleInfoCtrlCallback_k__BackingField; // x22
  System_Action_o *v288; // x20
  const MethodInfo *v289; // x3
  __int64 v290; // x1
  TerminalPramsManager_c *v291; // x0
  __int64 v292; // x8
  __int64 v293; // x21
  int32_t v294; // w20
  __int64 v295; // x8
  __int64 v296; // x21
  int32_t v297; // w0
  int32_t v298; // w20
  System_String_o *v299; // x21
  int v300; // w23
  __int64 v301; // x21
  float v302; // s0
  float v303; // s8
  float v304; // s0
  MapCamera_o *v305; // x19
  float v306; // s0
  float v307; // s9
  int32_t v308; // w20
  System_String_o *v309; // x23
  const MethodInfo *v310; // x3
  System_String_array *v311; // x20
  int32_t v312; // w1
  int v313; // w8
  System_String_o *v314; // x19
  System_String_o *v315; // x20
  System_String_o *v316; // x19
  System_String_o *v317; // x20
  System_String_o *v318; // x20
  Il2CppObject *v319; // x21
  System_Action_o *v320; // x23
  int *v321; // x10
  System_String_o *v322; // x23
  const MethodInfo *v323; // x3
  System_String_array *v324; // x20
  int32_t v325; // w1
  int v326; // w8
  System_String_o *v327; // x19
  System_String_o *v328; // x20
  System_String_o *v329; // x20
  Il2CppObject *v330; // x21
  System_Action_o *v331; // x23
  __int64 v332; // x23
  float v333; // s0
  float v334; // s9
  float v335; // s0
  float v336; // s10
  float v337; // s0
  float v338; // s11
  float v339; // s0
  float v340; // s8
  int32_t v341; // w19
  __int64 v342; // x8
  float v343; // s8
  const MethodInfo_37C4780 *v344; // x2
  float v345; // s0
  float v346; // s1
  float v347; // s2
  float v348; // s10
  float v349; // s9
  float v350; // s11
  MapCamera_o *v351; // x20
  System_Action_o *v352; // x21
  MapCamera_o *v353; // x0
  float v354; // s0
  float v355; // s1
  float v356; // s2
  float v357; // s3
  int32_t v358; // w1
  __int64 v359; // x20
  int32_t v360; // w2
  const MethodInfo *v361; // x3
  __int64 v362; // x8
  QuestAfterAction_o *v363; // x22
  Il2CppObject *v364; // x0
  int32_t v365; // w2
  const MethodInfo *v366; // x3
  UnityEngine_Object_o *v367; // x19
  __int64 v368; // x23
  int32_t v369; // w2
  const MethodInfo *v370; // x3
  __int64 v371; // x20
  QuestAfterAction_o *v372; // x22
  Il2CppObject *v373; // x0
  __int64 *v374; // x19
  int32_t v375; // w2
  const MethodInfo *v376; // x3
  UnityEngine_Object_o *v377; // x21
  SrcSpotBasePrefab_o *v378; // x21
  System_Action_o *v379; // x22
  int32_t v380; // w2
  const MethodInfo *v381; // x3
  __int64 v382; // x1
  CGThumbnailListItem_o *v383; // x0
  __int64 v384; // x22
  QuestAfterAction_o *v385; // x21
  Il2CppObject *v386; // x21
  System_Action_o *v387; // x22
  QuestAfterAction_o *v388; // x22
  Il2CppObject *v389; // x21
  _DWORD *v390; // x8
  SrcSpotBasePrefab_o *v391; // x0
  int32_t v392; // w1
  QuestAfterAction_o *v393; // x22
  Il2CppObject *v394; // x21
  _DWORD *v395; // x8
  QuestAfterAction_o *v396; // x22
  _DWORD *v397; // x8
  __int64 v398; // x21
  QuestAfterAction_o *v399; // x22
  Il2CppObject *v400; // x22
  __int64 v401; // x23
  int32_t v402; // w2
  const MethodInfo *v403; // x3
  __int64 v404; // x20
  __int64 v405; // x8
  __int64 v406; // x21
  int32_t v407; // w22
  bool v408; // w25
  bool v409; // w27
  __int64 v410; // x8
  __int64 v411; // x22
  int32_t v412; // w21
  bool v413; // w22
  __int64 v414; // x8
  __int64 v415; // x22
  int32_t v416; // w21
  bool v417; // w22
  __int64 v418; // x21
  float v419; // s0
  QuestAfterAction_o *v420; // x20
  float v421; // s8
  Il2CppObject *v422; // x20
  _BOOL4 v423; // w23
  __int64 v424; // x20
  int32_t v425; // w2
  const MethodInfo *v426; // x3
  __int64 v427; // x8
  QuestAfterAction_o *v428; // x22
  Il2CppObject *v429; // x0
  int32_t v430; // w2
  const MethodInfo *v431; // x3
  UnityEngine_Object_o *v432; // x19
  MapGimmickComponent_o *v433; // x19
  System_Action_o *v434; // x21
  const MethodInfo *v435; // x3
  TerminalSceneComponent_o *v436; // x19
  __int64 v437; // x20
  int32_t v438; // w2
  const MethodInfo *v439; // x3
  System_String_array *v440; // x0
  __int64 *v441; // x21
  int32_t v442; // w2
  const MethodInfo *v443; // x3
  __int64 v444; // x8
  __int64 v445; // x9
  QuestAfterAction_o *v446; // x21
  Il2CppObject *v447; // x0
  int32_t v448; // w2
  const MethodInfo *v449; // x3
  UnityEngine_Object_o *v450; // x19
  MapGimmickComponent_o *v451; // x19
  System_Action_o *v452; // x0
  __int64 *v453; // x8
  System_Action_o *v454; // x21
  __int64 v455; // x21
  QuestAfterAction_o *v456; // x20
  Il2CppObject *v457; // x20
  UIWidget_o *v458; // x20
  int32_t v459; // w2
  const MethodInfo *v460; // x3
  __int64 v461; // x8
  QuestAfterAction_o *v462; // x22
  Il2CppObject *v463; // x0
  __int64 v464; // x19
  int32_t v465; // w2
  const MethodInfo *v466; // x3
  UnityEngine_Object_o *v467; // x21
  bool v468; // w0
  bool v469; // w22
  const MethodInfo *v470; // x3
  int32_t v471; // w1
  __int64 v472; // x8
  __int64 v473; // x22
  int32_t v474; // w21
  bool v475; // w22
  __int64 v476; // x21
  QuestAfterAction_o *v477; // x22
  Il2CppObject *v478; // x22
  QuestAfterAction_o *v479; // x23
  const MethodInfo *v480; // x4
  int32_t v481; // w2
  QuestAfterAction_o *v482; // x0
  int32_t v483; // w1
  QuestAfterAction_o *v484; // x22
  QuestAfterAction_o *v485; // x23
  const MethodInfo *v486; // x4
  UnityEngine_Object_o *MapGameObject; // x23
  float v488; // s0
  float v489; // s1
  float v490; // s2
  float x; // s9
  float y; // s8
  float z; // s10
  QuestAfterAction_o *v494; // x22
  QuestAfterAction_o *v495; // x23
  UnityEngine_Object_o *v496; // x23
  __int64 v497; // x8
  float v498; // s0
  float v499; // s11
  int32_t v500; // w23
  const MethodInfo *v501; // x3
  __int64 v502; // x1
  int32_t v503; // w21
  TerminalPramsManager_c *v504; // x0
  QuestAfterAction_o *v505; // x20
  Il2CppObject *v506; // x20
  __int64 v507; // x1
  TerminalPramsManager_c *v508; // x0
  __int64 v509; // x8
  __int64 v510; // x8
  __int64 v511; // x20
  int32_t v512; // w2
  const MethodInfo *v513; // x3
  __int64 v514; // x8
  QuestAfterAction_o *v515; // x22
  Il2CppObject *v516; // x0
  int32_t v517; // w2
  const MethodInfo *v518; // x3
  UnityEngine_Object_o *v519; // x19
  __int64 v520; // x20
  int32_t v521; // w2
  const MethodInfo *v522; // x3
  __int64 v523; // x8
  QuestAfterAction_o *v524; // x22
  Il2CppObject *v525; // x0
  int32_t v526; // w2
  const MethodInfo *v527; // x3
  UnityEngine_Object_o *v528; // x19
  _BOOL4 IsMapModel; // w23
  QuestAfterAction_o *v530; // x22
  UnityEngine_Object_o *v531; // x21
  const MethodInfo *v532; // x2
  _DWORD *v533; // x8
  _BOOL4 v534; // w23
  QuestAfterAction_o *v535; // x22
  UnityEngine_Object_o *v536; // x21
  const MethodInfo *v537; // x2
  const MethodInfo *v538; // x2
  _DWORD *v539; // x8
  _BOOL4 v540; // w23
  QuestAfterAction_o *v541; // x22
  UnityEngine_Object_o *v542; // x21
  const MethodInfo *v543; // x2
  const MethodInfo *v544; // x2
  float v545; // s0
  float v546; // s0
  float v547; // s0
  QuestAfterAction_o *v548; // x24
  const MethodInfo *v549; // x4
  UnityEngine_Object_o *v550; // x24
  float v551; // s11
  float v552; // s9
  float v553; // s10
  __int64 v554; // x8
  System_String_o *v555; // x24
  QuestAfterAction_o *v556; // x24
  const MethodInfo *v557; // x4
  UnityEngine_Object_o *v558; // x24
  float v559; // s9
  float v560; // s10
  float v561; // s11
  __int64 v562; // x8
  float v563; // s0
  float v564; // s1
  float v565; // s2
  QuestAfterAction_o *v566; // x24
  const MethodInfo *v567; // x4
  UnityEngine_Object_o *v568; // x24
  __int64 v569; // x8
  int v570; // w8
  QuestAfterAction_o *v571; // x8
  MapCamera_o *v572; // x20
  MapCamera_o *v573; // x0
  float v574; // s0
  float v575; // s1
  float v576; // s2
  int32_t v577; // w1
  Il2CppObject *v578; // x3
  SceneJumpInfo_o *v579; // x21
  __int64 v580; // x1
  TerminalPramsManager_c *v581; // x0
  TerminalPramsManager_c *v582; // x0
  Il2CppObject *v583; // x21
  System_Action_o *v584; // x23
  Il2CppObject *v585; // x21
  const MethodInfo *v586; // x3
  Il2CppObject *v587; // x21
  const MethodInfo *v588; // x3
  Il2CppClass *v589; // x8
  Il2CppObject *v590; // x21
  float AnimTime; // s0
  const MethodInfo *v592; // x3
  Il2CppClass *v593; // x8
  QuestAfterAction_StateMain_c *v594; // x8
  int v595; // w0
  Il2CppObject *v596; // x0
  int32_t v597; // w2
  const MethodInfo *v598; // x3
  UnityEngine_Object_o *v599; // x22
  MapGimmickComponent_o *v600; // x21
  System_Action_o *v601; // x0
  System_Action_o *v602; // x22
  MapGimmickComponent_o *v603; // x0
  System_Action_o *v604; // x2
  Il2CppObject *v605; // x0
  MapGimmickComponent_o **v606; // x22
  int32_t v607; // w2
  const MethodInfo *v608; // x3
  UnityEngine_Object_o *v609; // x24
  MapGimmickComponent_o *v610; // x24
  const MethodInfo *v611; // x3
  System_Action_o *v612; // x0
  System_Action_o *v613; // x21
  __int64 v614; // x20
  int32_t v615; // w2
  const MethodInfo *v616; // x3
  __int64 v617; // x8
  QuestAfterAction_o *v618; // x22
  Il2CppObject *v619; // x0
  int32_t v620; // w2
  const MethodInfo *v621; // x3
  UnityEngine_Object_o *v622; // x19
  srcLineSprite_o *v623; // x19
  System_Action_o *v624; // x21
  int32_t v625; // w1
  __int64 v626; // x20
  int32_t v627; // w2
  const MethodInfo *v628; // x3
  __int64 v629; // x8
  QuestAfterAction_o *v630; // x22
  Il2CppObject *v631; // x0
  int32_t v632; // w2
  const MethodInfo *v633; // x3
  UnityEngine_Object_o *v634; // x19
  __int64 v635; // x20
  int32_t v636; // w2
  const MethodInfo *v637; // x3
  __int64 v638; // x8
  QuestAfterAction_o *v639; // x22
  Il2CppObject *v640; // x0
  int32_t v641; // w2
  const MethodInfo *v642; // x3
  UnityEngine_Object_o *v643; // x19
  UnityEngine_Object_o *v644; // x21
  UnityEngine_Object_o *v645; // x21
  int v646; // w9
  UnityEngine_Object_o *v647; // x21
  float v648; // s11
  float v649; // s10
  float v650; // s9
  System_String_o *v651; // x24
  __int64 v652; // x8
  ScrTerminalMap_o *v653; // x21
  System_Action_o *v654; // x23
  int32_t v655; // w0
  int32_t v656; // w23
  SceneJumpInfo_o *v657; // x22
  System_String_o *monitor; // x20
  MapCamera_o *v659; // x20
  System_Action_o *v660; // x20
  const MethodInfo *v661; // x3
  MapGimmickComponent_o *v662; // x0
  float v663; // s0
  float v664; // s1
  float v665; // s2
  float v666; // s3
  int32_t v667; // w1
  System_Action_o *v668; // x2
  const MethodInfo *v669; // x3
  __int64 v670; // x8
  const MethodInfo *v671; // x3
  int v672; // w8
  MapCamera_o *v673; // x20
  float v674; // s0
  float v675; // s1
  float v676; // s2
  float v677; // s0
  float v678; // s1
  float v679; // s2
  QuestAfterAction_o *v680; // x8
  QuestAfterAction_o *v681; // x8
  __int64 v682; // x8
  ScrTerminalMap_o *v683; // x22
  float v684; // s0
  float v685; // s9
  float v686; // s0
  float v687; // s0
  float v688; // s1
  float v689; // s2
  float v690; // s10
  float v691; // s9
  float v692; // s11
  float v693; // s8
  const MethodInfo *v694; // x3
  int32_t v695; // w21
  System_Action_o *v696; // x22
  System_String_o *v697; // x0
  float v698; // s0
  System_String_o *v699; // x0
  float v700; // s0
  System_Action_o *v701; // x21
  MapCamera_o *v702; // x0
  float v703; // s0
  int32_t v704; // w4
  MapCamera_o *v705; // x20
  float v706; // s0
  int32_t onClickOkSeKind; // [xsp+10h] [xbp-E0h]
  System_Nullable_float__o size; // [xsp+40h] [xbp-B0h] BYREF
  System_Nullable_Vector3__o v709; // [xsp+48h] [xbp-A8h] BYREF
  Il2CppObject *value; // [xsp+58h] [xbp-98h] BYREF
  Il2CppObject *entity; // [xsp+60h] [xbp-90h] BYREF
  UnityEngine_Color_o color; // [xsp+68h] [xbp-88h] BYREF
  bool isQuickUpdate; // [xsp+7Ch] [xbp-74h] BYREF
  System_Nullable_float__o p_size; // 0:x0.8
  System_Nullable_float__o v715; // 0:x0.8
  System_Nullable_float__o v716; // 0:x0.8
  System_Nullable_float__o v717; // 0:x3.8
  System_Nullable_float__o v718; // 0:x3.8
  System_Nullable_Vector3__o v719; // 0:x0.16
  System_Nullable_Vector3__o v720; // 0:x0.16
  System_Nullable_Vector3__o v721; // 0:x0.16
  System_Nullable_Vector3__o v722; // 0:x0.16
  System_Nullable_Vector3__o v723; // 0:x0.16
  System_Nullable_Vector3__o v724; // 0:x1.16
  UnityEngine_Vector3_o v725; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v726; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v728; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v729; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v730; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v731; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v732; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v733; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o Position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v735; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v736; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v737; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v738; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v739; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v740; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v741; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4AFEC3D & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, that);
    sub_1BC3008(&AvalonSceneManager_TypeInfo, v5);
    sub_1BC3008(&BgmManager_TypeInfo, v6);
    sub_1BC3008(&Method_DataManager_GetMasterData_QuestMaster___, v7);
    sub_1BC3008(&Method_DataManager_GetMaster_QuestMaster___, v8);
    sub_1BC3008(&DataManager_TypeInfo, v9);
    sub_1BC3008(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v10);
    sub_1BC3008(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__, v11);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__TryGetValue__, v12);
    sub_1BC3008(&FSUtility_TypeInfo, v13);
    sub_1BC3008(&Method_UnityEngine_GameObject_GetComponentInChildren_UISprite___, v14);
    sub_1BC3008(&Method_UnityEngine_GameObject_GetComponent_ModelLineComponent___, v15);
    sub_1BC3008(&LocalizationManager_TypeInfo, v16);
    sub_1BC3008(&Method_NetworkManager_getRequest_BattleSetupScenarioRequest___, v17);
    sub_1BC3008(&NetworkManager_TypeInfo, v18);
    sub_1BC3008(&Method_System_Nullable_Vector3___ctor__, v19);
    sub_1BC3008(&Method_System_Nullable_float___ctor__, v20);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v21);
    sub_1BC3008(&Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___, v22);
    sub_1BC3008(&Method_QuestAfterAction_GetMapComponent_ModelLineComponent___, v23);
    sub_1BC3008(&Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___, v24);
    sub_1BC3008(&Method_QuestAfterAction_GetMapComponent_srcLineSprite___, v25);
    sub_1BC3008(&QuestAfterAction_TypeInfo, v26);
    sub_1BC3008(&NetworkManager_ResultCallbackFunc_TypeInfo, v27);
    sub_1BC3008(&SceneJumpInfo_TypeInfo, v28);
    sub_1BC3008(&SeManager_TypeInfo, v29);
    sub_1BC3008(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v30);
    sub_1BC3008(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__, v31);
    sub_1BC3008(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v32);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v33);
    sub_1BC3008(&Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__, v34);
    sub_1BC3008(&Method_SingletonTemplate_QuestTree__get_Instance__, v35);
    sub_1BC3008(&SoundManager_TypeInfo, v36);
    sub_1BC3008(&Method_QuestAfterAction_StateMain_UpdateAnim__, v37);
    sub_1BC3008(&string___TypeInfo, v38);
    sub_1BC3008(&TerminalPramsManager_TypeInfo, v39);
    sub_1BC3008(&TerminalSceneComponent_TypeInfo, v40);
    sub_1BC3008(&QuestAfterAction_TitleInfoControlParam_TypeInfo, v41);
    sub_1BC3008(&Method_QuestAfterAction_StateMain___c__UpdateAnim_b__16_22__, v42);
    sub_1BC3008(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__10__, v43);
    sub_1BC3008(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__11__, v44);
    sub_1BC3008(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__12__, v45);
    sub_1BC3008(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__23__, v46);
    sub_1BC3008(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__29__, v47);
    sub_1BC3008(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__30__, v48);
    sub_1BC3008(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__31__, v49);
    sub_1BC3008(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__32__, v50);
    sub_1BC3008(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__33__, v51);
    sub_1BC3008(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__9__, v52);
    sub_1BC3008(&QuestAfterAction_StateMain___c__DisplayClass16_0_TypeInfo, v53);
    sub_1BC3008(&Method_QuestAfterAction_StateMain___c__DisplayClass16_10__UpdateAnim_b__13__, v54);
    sub_1BC3008(&Method_QuestAfterAction_StateMain___c__DisplayClass16_10__UpdateAnim_b__14__, v55);
    sub_1BC3008(&QuestAfterAction_StateMain___c__DisplayClass16_10_TypeInfo, v56);
    sub_1BC3008(&Method_QuestAfterAction_StateMain___c__DisplayClass16_11__UpdateAnim_b__15__, v57);
    sub_1BC3008(&Method_QuestAfterAction_StateMain___c__DisplayClass16_11__UpdateAnim_b__16__, v58);
    sub_1BC3008(&QuestAfterAction_StateMain___c__DisplayClass16_11_TypeInfo, v59);
    sub_1BC3008(&Method_QuestAfterAction_StateMain___c__DisplayClass16_12__UpdateAnim_b__17__, v60);
    sub_1BC3008(&QuestAfterAction_StateMain___c__DisplayClass16_12_TypeInfo, v61);
    sub_1BC3008(&Method_QuestAfterAction_StateMain___c__DisplayClass16_13__UpdateAnim_b__18__, v62);
    sub_1BC3008(&QuestAfterAction_StateMain___c__DisplayClass16_13_TypeInfo, v63);
    sub_1BC3008(&Method_QuestAfterAction_StateMain___c__DisplayClass16_15__UpdateAnim_b__20__, v64);
    sub_1BC3008(&Method_QuestAfterAction_StateMain___c__DisplayClass16_15__UpdateAnim_b__21__, v65);
    sub_1BC3008(&QuestAfterAction_StateMain___c__DisplayClass16_15_TypeInfo, v66);
    sub_1BC3008(&Method_QuestAfterAction_StateMain___c__DisplayClass16_16__UpdateAnim_b__24__, v67);
    sub_1BC3008(&QuestAfterAction_StateMain___c__DisplayClass16_16_TypeInfo, v68);
    sub_1BC3008(&Method_QuestAfterAction_StateMain___c__DisplayClass16_17__UpdateAnim_b__34__, v69);
    sub_1BC3008(&QuestAfterAction_StateMain___c__DisplayClass16_17_TypeInfo, v70);
    sub_1BC3008(&Method_QuestAfterAction_StateMain___c__DisplayClass16_1__UpdateAnim_b__0__, v71);
    sub_1BC3008(&QuestAfterAction_StateMain___c__DisplayClass16_1_TypeInfo, v72);
    sub_1BC3008(&Method_QuestAfterAction_StateMain___c__DisplayClass16_2__UpdateAnim_b__1__, v73);
    sub_1BC3008(&QuestAfterAction_StateMain___c__DisplayClass16_2_TypeInfo, v74);
    sub_1BC3008(&Method_QuestAfterAction_StateMain___c__DisplayClass16_3__UpdateAnim_b__2__, v75);
    sub_1BC3008(&QuestAfterAction_StateMain___c__DisplayClass16_3_TypeInfo, v76);
    sub_1BC3008(&Method_QuestAfterAction_StateMain___c__DisplayClass16_4__UpdateAnim_b__3__, v77);
    sub_1BC3008(&QuestAfterAction_StateMain___c__DisplayClass16_4_TypeInfo, v78);
    sub_1BC3008(&Method_QuestAfterAction_StateMain___c__DisplayClass16_5__UpdateAnim_b__4__, v79);
    sub_1BC3008(&QuestAfterAction_StateMain___c__DisplayClass16_5_TypeInfo, v80);
    sub_1BC3008(&Method_QuestAfterAction_StateMain___c__DisplayClass16_6__UpdateAnim_b__5__, v81);
    sub_1BC3008(&QuestAfterAction_StateMain___c__DisplayClass16_6_TypeInfo, v82);
    sub_1BC3008(&Method_QuestAfterAction_StateMain___c__DisplayClass16_7__UpdateAnim_b__6__, v83);
    sub_1BC3008(&QuestAfterAction_StateMain___c__DisplayClass16_7_TypeInfo, v84);
    sub_1BC3008(&Method_QuestAfterAction_StateMain___c__DisplayClass16_8__UpdateAnim_b__7__, v85);
    sub_1BC3008(&QuestAfterAction_StateMain___c__DisplayClass16_8_TypeInfo, v86);
    sub_1BC3008(&Method_QuestAfterAction_StateMain___c__DisplayClass16_9__UpdateAnim_b__8__, v87);
    sub_1BC3008(&QuestAfterAction_StateMain___c__DisplayClass16_9_TypeInfo, v88);
    sub_1BC3008(&QuestAfterAction_StateMain___c_TypeInfo, v89);
    sub_1BC3008(&StringLiteral_87/*"\r\n"*/, v90);
    sub_1BC3008(&StringLiteral_1371/*"30101"*/, v91);
    sub_1BC3008(&StringLiteral_10728/*"QUEST_AFTER_ACTION_MESSAGE_"*/, v92);
    sub_1BC3008(&StringLiteral_1372/*"30102"*/, v93);
    sub_1BC3008(&StringLiteral_1298/*"10703"*/, v94);
    sub_1BC3008(&StringLiteral_806/*","*/, v95);
    sub_1BC3008(&StringLiteral_3265/*"CAPTER WAIT"*/, v96);
    sub_1BC3008(&StringLiteral_1/*""*/, v97);
    sub_1BC3008(&StringLiteral_19677/*"gevINFOBAR_BACK"*/, v98);
    sub_1BC3008(&StringLiteral_1113/*"0"*/, v99);
    byte_4AFEC3D = 1;
  }
  isQuickUpdate = 0;
  *(_QWORD *)&color.fields.r = 0LL;
  *(_QWORD *)&color.fields.b = 0LL;
  value = 0LL;
  entity = 0LL;
  v100 = sub_1BC3254(QuestAfterAction_StateMain___c__DisplayClass16_0_TypeInfo);
  QuestAfterAction_StateMain___c__DisplayClass16_0___ctor(
    (QuestAfterAction_StateMain___c__DisplayClass16_0_o *)v100,
    0LL);
  if ( !v100 )
    goto LABEL_1104;
  *(_QWORD *)(v100 + 16) = this;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v100 + 16), (int32_t)this, v103, v104);
  *(_QWORD *)(v100 + 24) = that;
  v105 = (QuestAfterAction_o **)(v100 + 24);
  sub_1BC2FAC((CGThumbnailListItem_o *)(v100 + 24), (int32_t)that, v106, v107);
  if ( this->fields.IsAnimDoing )
    return;
  updated = ((__int64 (__fastcall *)(QuestAfterAction_StateMain_o *, Il2CppMethodPointer))this->klass->vtable._10_get_CommandBuf.method)(
              this,
              this->klass->vtable._11_get_CommandIndex.methodPtr);
  if ( !updated )
    return;
  if ( !*v105 )
    goto LABEL_1104;
  if ( (*v105)->fields.isSkippedNext )
  {
    updated = ((__int64 (__fastcall *)(QuestAfterAction_StateMain_o *, Il2CppMethodPointer))this->klass->vtable._14_EndAnim.method)(
                this,
                this->klass->vtable._15_onEnd.methodPtr);
    if ( *v105 )
    {
      (*v105)->fields.isSkippedNext = 0;
      return;
    }
LABEL_1104:
    sub_1BC3264(updated, v102);
  }
  klass = this->klass;
  this->fields.IsAnimDoing = 1;
  v109 = ((__int64 (__fastcall *)(QuestAfterAction_StateMain_o *, Il2CppMethodPointer))klass->vtable._10_get_CommandBuf.method)(
           this,
           klass->vtable._11_get_CommandIndex.methodPtr);
  updated = ((__int64 (__fastcall *)(QuestAfterAction_StateMain_o *, Il2CppMethodPointer))this->klass->vtable._11_get_CommandIndex.method)(
              this,
              this->klass->vtable._12_set_CommandIndex.methodPtr);
  if ( !v109 )
    goto LABEL_1104;
  if ( (unsigned int)updated >= *(_DWORD *)(v109 + 24) )
    goto LABEL_1105;
  v111 = *(QuestAfterAction_Command_o **)(v109 + 8LL * (int)updated + 32);
  updated = ((__int64 (__fastcall *)(QuestAfterAction_StateMain_o *, QuestAfterAction_Command_o *, Il2CppMethodPointer))this->klass->vtable._9_IsUsableCommand.method)(
              this,
              v111,
              this->klass->vtable._10_get_CommandBuf.methodPtr);
  if ( (updated & 1) == 0 )
    goto LABEL_999;
  v112 = *v105;
  if ( !*v105 )
    goto LABEL_1104;
  BlankEarthQuestAfterAction_k__BackingField = v112->fields._BlankEarthQuestAfterAction_k__BackingField;
  v114 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
  System_Action___ctor(v114, (Il2CppObject *)this, (intptr_t)this->klass->vtable._15_onEnd.methodPtr, 0LL);
  if ( !BlankEarthQuestAfterAction_k__BackingField )
    goto LABEL_1104;
  updated = BlankEarthQuestAfterAction__UpdateAnim(
              BlankEarthQuestAfterAction_k__BackingField,
              v112,
              v111,
              v114,
              &isQuickUpdate,
              0LL);
  if ( (updated & 1) == 0 )
  {
    if ( !v111 )
      goto LABEL_1104;
    id = v111->fields.id;
    if ( id > 530 )
    {
      if ( id > 800 )
      {
        if ( id <= 851 )
        {
          switch ( id )
          {
            case 801:
              param = v111->fields.param;
              v224 = Method_QuestAfterAction_StateMain_UpdateAnim__;
              if ( (*((_BYTE *)Method_QuestAfterAction_StateMain_UpdateAnim__ + 83) & 2) != 0 )
                v224 = (_QWORD *)sub_1BC3020(Method_QuestAfterAction_StateMain_UpdateAnim__);
              v225 = (System_Reflection_MethodBase_o *)sub_1BC2FEC(v224, v224[4]);
              OverwriteAssetSoundName__PlaySe(v225, param, 0, 0LL);
              goto LABEL_18;
            case 850:
              if ( !SoundManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
              SoundManager__stopBgm(0LL);
              if ( !*v105 )
                goto LABEL_1104;
              (*v105)->fields.isRequestedStopBgm = 1;
              goto LABEL_18;
            case 851:
              if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
              if ( !byte_4AFC38D )
              {
                sub_1BC3008(&TerminalSceneComponent_TypeInfo, v102);
                byte_4AFC38D = 1;
              }
              v148 = TerminalSceneComponent_TypeInfo;
              if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
                v148 = TerminalSceneComponent_TypeInfo;
              }
              mInstance = v148->static_fields->mInstance;
              updated = (__int64)QuestAfterAction_Command__GetBgmName(v111, v102);
              if ( !mInstance )
                goto LABEL_1104;
              TerminalSceneComponent__playBgm(mInstance, (System_String_o *)updated, 0LL, 0LL);
              if ( !*v105 )
                goto LABEL_1104;
              (*v105)->fields.isRequestedStopBgm = 0;
              goto LABEL_18;
          }
          return;
        }
        switch ( id )
        {
          case 900:
            v192 = (float)System_Int32__Parse(v111->fields.param, 0LL) / 1000.0;
            if ( v192 <= 0.0 )
              goto LABEL_18;
            this->fields.waitTime = v192;
            this->fields.waitStartTime = UnityEngine_Time__get_realtimeSinceStartup(0LL);
            return;
          case 1100:
            v193 = sub_1BC3254(QuestAfterAction_StateMain___c__DisplayClass16_17_TypeInfo);
            QuestAfterAction_StateMain___c__DisplayClass16_17___ctor(
              (QuestAfterAction_StateMain___c__DisplayClass16_17_o *)v193,
              0LL);
            if ( !v193 )
              goto LABEL_1104;
            *(_QWORD *)(v193 + 24) = v100;
            sub_1BC2FAC((CGThumbnailListItem_o *)(v193 + 24), v100, v194, v195);
            updated = (__int64)v111->fields.param;
            if ( !updated )
              goto LABEL_1104;
            updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
            if ( !updated )
              goto LABEL_1104;
            v196 = updated;
            if ( *(_DWORD *)(updated + 24) )
            {
              updated = System_Int32__Parse(*(System_String_o **)(updated + 32), 0LL);
              if ( *(_DWORD *)(v196 + 24) > 1u )
              {
                v197 = updated;
                v198 = System_Int32__Parse(*(System_String_o **)(v196 + 40), 0LL);
                if ( !BgmManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
                if ( !byte_4AFCFAF )
                {
                  sub_1BC3008(&BgmManager_TypeInfo, v102);
                  byte_4AFCFAF = 1;
                }
                v199 = BgmManager_TypeInfo;
                if ( !BgmManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
                  v199 = BgmManager_TypeInfo;
                }
                v200 = -1.0;
                masterVolume = v199->static_fields->masterVolume;
                *(float *)(v193 + 20) = masterVolume;
                if ( *(int *)(v196 + 24) >= 3 )
                {
                  v200 = System_Single__Parse(*(System_String_o **)(v196 + 48), 0LL);
                  masterVolume = *(float *)(v193 + 20);
                }
                v202 = v200 * masterVolume;
                *(float *)(v193 + 16) = v202;
                if ( v202 > -1.0 )
                {
                  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
                  if ( !byte_4AFC38D )
                  {
                    sub_1BC3008(&TerminalSceneComponent_TypeInfo, v102);
                    byte_4AFC38D = 1;
                  }
                  updated = (__int64)TerminalSceneComponent_TypeInfo;
                  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
                    updated = (__int64)TerminalSceneComponent_TypeInfo;
                  }
                  v203 = **(_QWORD **)(updated + 184);
                  if ( !v203 )
                    goto LABEL_1104;
                  v204 = *(ScrTerminalListTop_o **)(v203 + 256);
                  v205 = *(float *)(v193 + 16);
                  v206 = *(float *)(v193 + 20);
                  updated = (__int64)QuestAfterAction_TypeInfo;
                  if ( !QuestAfterAction_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(QuestAfterAction_TypeInfo);
                  if ( !v204 )
                    goto LABEL_1104;
                  ScrTerminalListTop__StartEasingBgmMasterVolume(
                    v204,
                    v206,
                    v205,
                    QuestAfterAction_TypeInfo->static_fields->EventAnimationAfterBgmResetTime,
                    2,
                    0LL,
                    0LL);
                }
                if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
                if ( !byte_4AFC38D )
                {
                  sub_1BC3008(&TerminalSceneComponent_TypeInfo, v102);
                  byte_4AFC38D = 1;
                }
                updated = (__int64)TerminalSceneComponent_TypeInfo;
                if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
                  updated = (__int64)TerminalSceneComponent_TypeInfo;
                }
                v207 = **(_QWORD **)(updated + 184);
                if ( !v207 )
                  goto LABEL_1104;
                v208 = *(ScrTerminalListTop_o **)(v207 + 256);
                v209 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
                System_Action___ctor(
                  v209,
                  (Il2CppObject *)v193,
                  Method_QuestAfterAction_StateMain___c__DisplayClass16_17__UpdateAnim_b__34__,
                  0LL);
                if ( !v208 )
                  goto LABEL_1104;
                ScrTerminalListTop__StartEventEffect(v208, v197, v198, v209, 0LL);
                return;
              }
            }
            break;
          case 1200:
            updated = (__int64)v111->fields.param;
            if ( !updated )
              goto LABEL_1104;
            updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
            if ( !updated )
              goto LABEL_1104;
            v116 = updated;
            if ( *(_DWORD *)(updated + 24) )
            {
              updated = System_Int32__Parse(*(System_String_o **)(updated + 32), 0LL);
              if ( *(_DWORD *)(v116 + 24) > 1u )
              {
                v117 = updated;
                v118 = System_Int32__Parse(*(System_String_o **)(v116 + 40), 0LL);
                if ( v117 == 2 )
                {
                  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
                  if ( !byte_4AFC38D )
                  {
                    sub_1BC3008(&TerminalSceneComponent_TypeInfo, v102);
                    byte_4AFC38D = 1;
                  }
                  updated = (__int64)TerminalSceneComponent_TypeInfo;
                  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
                    updated = (__int64)TerminalSceneComponent_TypeInfo;
                  }
                  v509 = **(_QWORD **)(updated + 184);
                  if ( !v509 )
                    goto LABEL_1104;
                  updated = *(_QWORD *)(v509 + 256);
                  if ( !updated )
                    goto LABEL_1104;
                  v120 = 1;
                  v122 = v118;
                }
                else
                {
                  if ( v117 != 1 )
                  {
                    if ( v117 )
                      goto LABEL_18;
                    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
                    if ( !byte_4AFC38D )
                    {
                      sub_1BC3008(&TerminalSceneComponent_TypeInfo, v102);
                      byte_4AFC38D = 1;
                    }
                    updated = (__int64)TerminalSceneComponent_TypeInfo;
                    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
                      updated = (__int64)TerminalSceneComponent_TypeInfo;
                    }
                    v119 = **(_QWORD **)(updated + 184);
                    if ( !v119 )
                      goto LABEL_1104;
                    updated = *(_QWORD *)(v119 + 256);
                    if ( !updated )
                      goto LABEL_1104;
                    v120 = 1;
                    v121 = 1;
                    v122 = v118;
LABEL_733:
                    ScrTerminalListTop__SetQuestStateForEventEffect(
                      (ScrTerminalListTop_o *)updated,
                      v122,
                      v120,
                      v121,
                      0LL);
                    goto LABEL_18;
                  }
                  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
                  if ( !byte_4AFC38D )
                  {
                    sub_1BC3008(&TerminalSceneComponent_TypeInfo, v102);
                    byte_4AFC38D = 1;
                  }
                  updated = (__int64)TerminalSceneComponent_TypeInfo;
                  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
                    updated = (__int64)TerminalSceneComponent_TypeInfo;
                  }
                  v510 = **(_QWORD **)(updated + 184);
                  if ( !v510 )
                    goto LABEL_1104;
                  updated = *(_QWORD *)(v510 + 256);
                  if ( !updated )
                    goto LABEL_1104;
                  v122 = v118;
                  v120 = 0;
                }
                v121 = 0;
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
            v187 = (System_String_o *)StringLiteral_1/*""*/;
            v188 = System_String__Concat_62348648((System_String_o *)StringLiteral_10728/*"QUEST_AFTER_ACTION_MESSAGE_"*/, v111->fields.param, 0LL);
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v189 = LocalizationManager__Get(v188, 0LL);
            Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            v191 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
            System_Action___ctor(
              v191,
              (Il2CppObject *)v100,
              Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__29__,
              0LL);
            if ( !Instance )
              goto LABEL_1104;
            CommonUI__OpenNotificationDialog(
              (CommonUI_o *)Instance,
              v187,
              v189,
              v191,
              210,
              0,
              0,
              0,
              1,
              0,
              0,
              0,
              0LL,
              0.0,
              0,
              0LL);
            return;
          case 601:
            v309 = (System_String_o *)StringLiteral_1/*""*/;
            updated = sub_1BC30B0(string___TypeInfo, 1LL);
            if ( !updated )
              goto LABEL_1104;
            v311 = (System_String_array *)updated;
            if ( !*(_DWORD *)(updated + 24) )
              goto LABEL_1105;
            v312 = StringLiteral_87/*"\r\n"*/;
            *(_QWORD *)(updated + 32) = StringLiteral_87/*"\r\n"*/;
            sub_1BC2FAC((CGThumbnailListItem_o *)(updated + 32), v312, (int32_t)v110, v310);
            updated = (__int64)v111->fields.param;
            if ( !updated )
              goto LABEL_1104;
            updated = (__int64)System_String__Split_62401680((System_String_o *)updated, v311, 0, 0LL);
            if ( !updated )
              goto LABEL_1104;
            v313 = *(_DWORD *)(updated + 24);
            if ( v313 <= 0 )
              goto LABEL_999;
            v314 = *(System_String_o **)(updated + 32);
            if ( v313 == 1 )
            {
              v315 = *(System_String_o **)(updated + 32);
              v314 = v309;
            }
            else
            {
              v315 = *(System_String_o **)(updated + 40);
            }
            v583 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            v584 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
            System_Action___ctor(
              v584,
              (Il2CppObject *)v100,
              Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__30__,
              0LL);
            if ( !v583 )
              goto LABEL_1104;
            CommonUI__OpenNotificationDialog(
              (CommonUI_o *)v583,
              v314,
              v315,
              v584,
              210,
              0,
              0,
              0,
              1,
              0,
              1,
              0,
              0LL,
              0.0,
              0,
              0LL);
            return;
          case 602:
            v316 = (System_String_o *)StringLiteral_1/*""*/;
            v317 = System_String__Concat_62348648((System_String_o *)StringLiteral_10728/*"QUEST_AFTER_ACTION_MESSAGE_"*/, v111->fields.param, 0LL);
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v318 = LocalizationManager__Get(v317, 0LL);
            v319 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            v320 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
            System_Action___ctor(
              v320,
              (Il2CppObject *)v100,
              Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__31__,
              0LL);
            if ( !v319 )
              goto LABEL_1104;
            v321 = &dword_C16000;
            onClickOkSeKind = 0;
            goto LABEL_876;
          case 603:
            v322 = (System_String_o *)StringLiteral_1/*""*/;
            updated = sub_1BC30B0(string___TypeInfo, 1LL);
            if ( !updated )
              goto LABEL_1104;
            v324 = (System_String_array *)updated;
            if ( !*(_DWORD *)(updated + 24) )
              goto LABEL_1105;
            v325 = StringLiteral_87/*"\r\n"*/;
            *(_QWORD *)(updated + 32) = StringLiteral_87/*"\r\n"*/;
            sub_1BC2FAC((CGThumbnailListItem_o *)(updated + 32), v325, (int32_t)v110, v323);
            updated = (__int64)v111->fields.param;
            if ( !updated )
              goto LABEL_1104;
            updated = (__int64)System_String__Split_62401680((System_String_o *)updated, v324, 0, 0LL);
            if ( !updated )
              goto LABEL_1104;
            v326 = *(_DWORD *)(updated + 24);
            if ( v326 <= 0 )
              goto LABEL_999;
            v316 = *(System_String_o **)(updated + 32);
            if ( v326 == 1 )
            {
              v318 = *(System_String_o **)(updated + 32);
              v316 = v322;
            }
            else
            {
              v318 = *(System_String_o **)(updated + 40);
            }
            v319 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            v320 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
            System_Action___ctor(
              v320,
              (Il2CppObject *)v100,
              Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__32__,
              0LL);
            if ( !v319 )
              goto LABEL_1104;
            v321 = &dword_C16000;
            onClickOkSeKind = 1;
LABEL_876:
            CommonUI__OpenNotificationDialog_30732028(
              (CommonUI_o *)v319,
              v316,
              v318,
              v320,
              40.0,
              *((float *)v321 + 161),
              210,
              0,
              0,
              0,
              1,
              28,
              onClickOkSeKind,
              0,
              1,
              0LL,
              0LL);
            return;
          case 604:
            v327 = (System_String_o *)StringLiteral_1/*""*/;
            v328 = System_String__Concat_62348648((System_String_o *)StringLiteral_10728/*"QUEST_AFTER_ACTION_MESSAGE_"*/, v111->fields.param, 0LL);
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v329 = LocalizationManager__Get(v328, 0LL);
            v330 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            v331 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
            System_Action___ctor(
              v331,
              (Il2CppObject *)v100,
              Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__33__,
              0LL);
            if ( !v330 )
              goto LABEL_1104;
            CommonUI__OpenNotificationDialog_30732028(
              (CommonUI_o *)v330,
              v327,
              v329,
              v331,
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
              0LL,
              0LL);
            return;
          default:
            switch ( id )
            {
              case 700:
                updated = (__int64)v111->fields.param;
                if ( !updated )
                  goto LABEL_1104;
                updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
                if ( !updated )
                  goto LABEL_1104;
                v142 = updated;
                if ( !*(_DWORD *)(updated + 24) )
                  goto LABEL_1105;
                v143 = System_Int32__Parse(*(System_String_o **)(updated + 32), 0LL);
                if ( *(int *)(v142 + 24) >= 2 )
                  v144 = System_Int32__Parse(*(System_String_o **)(v142 + 40), 0LL) + 1;
                else
                  v144 = 0;
                v579 = (SceneJumpInfo_o *)sub_1BC3254(SceneJumpInfo_TypeInfo);
                SceneJumpInfo___ctor_40501008(v579, (System_String_o *)StringLiteral_1/*""*/, v143, v144, 0LL);
                updated = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
                if ( !updated )
                  goto LABEL_1104;
                v577 = 72;
                v578 = (Il2CppObject *)v579;
                goto LABEL_998;
              case 701:
                if ( !System_String__op_Equality(v111->fields.param, (System_String_o *)StringLiteral_1113/*"0"*/, 0LL) )
                  goto LABEL_18;
                if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                if ( !byte_4AFEC4F )
                {
                  sub_1BC3008(&TerminalPramsManager_TypeInfo, v290);
                  byte_4AFEC4F = 1;
                }
                v291 = TerminalPramsManager_TypeInfo;
                if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                  v291 = TerminalPramsManager_TypeInfo;
                }
                v291->static_fields->_IsTransOrdealCall_k__BackingField = 1;
                goto LABEL_868;
              case 702:
                updated = (__int64)v111->fields.param;
                if ( !updated )
                  goto LABEL_1104;
                updated = (__int64)System_String__Split_62400540(
                                     (System_String_o *)updated,
                                     (System_String_o *)StringLiteral_806/*","*/,
                                     0,
                                     0LL);
                if ( !updated )
                  goto LABEL_1104;
                v292 = *(_QWORD *)(updated + 24);
                v293 = updated;
                if ( !v292 )
                  goto LABEL_853;
                if ( !(_DWORD)v292 )
                  goto LABEL_1105;
                if ( System_Int32__Parse(*(System_String_o **)(updated + 32), 0LL) > 0 )
                  goto LABEL_18;
                if ( *(int *)(v293 + 24) < 2 )
LABEL_853:
                  v294 = 0;
                else
                  v294 = System_Int32__Parse(*(System_String_o **)(v293 + 40), 0LL);
                if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                TerminalPramsManager__SetAutoResumeForFolder(v294, 0LL);
                if ( !byte_4AFEB8E )
                {
                  sub_1BC3008(&TerminalPramsManager_TypeInfo, v580);
                  byte_4AFEB8E = 1;
                }
                v581 = TerminalPramsManager_TypeInfo;
                if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                  v581 = TerminalPramsManager_TypeInfo;
                }
                if ( v581->static_fields->_DispState_k__BackingField == 3 )
                {
                  if ( !v581->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(v581);
                  if ( !byte_4AFEC50 )
                  {
                    sub_1BC3008(&TerminalPramsManager_TypeInfo, v580);
                    byte_4AFEC50 = 1;
                  }
                  v582 = TerminalPramsManager_TypeInfo;
                  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                    v582 = TerminalPramsManager_TypeInfo;
                  }
                  v582->static_fields->_IsMoveFolderByQuestAfterAction_k__BackingField = 1;
                }
LABEL_868:
                updated = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
                if ( !updated )
                  goto LABEL_1104;
                AvalonSceneManager__transitionSceneRefresh((AvalonSceneManager_o *)updated, 34, 1, 0LL, 0, 0LL);
                goto LABEL_999;
              case 703:
                updated = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
                if ( !updated )
                  goto LABEL_1104;
                *(_BYTE *)(updated + 195) = 0;
                updated = (__int64)v111->fields.param;
                if ( !updated )
                  goto LABEL_1104;
                updated = (__int64)System_String__Split_62400540(
                                     (System_String_o *)updated,
                                     (System_String_o *)StringLiteral_806/*","*/,
                                     0,
                                     0LL);
                if ( !updated )
                  goto LABEL_1104;
                v295 = *(_QWORD *)(updated + 24);
                v296 = updated;
                if ( !v295 )
                  goto LABEL_848;
                if ( !(_DWORD)v295 )
                  goto LABEL_1105;
                v297 = System_Int32__Parse(*(System_String_o **)(updated + 32), 0LL);
                if ( v297 < 1 )
                {
LABEL_848:
                  updated = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
                  if ( !updated )
                    goto LABEL_1104;
                  v577 = 91;
                  v578 = 0LL;
                  goto LABEL_998;
                }
                v298 = v297;
                if ( *(int *)(v296 + 24) > 1 )
                {
                  v655 = System_Int32__Parse(*(System_String_o **)(v296 + 40), 0LL);
                  v299 = (System_String_o *)StringLiteral_1/*""*/;
                  if ( v655 >= 1 )
                  {
                    v656 = 1;
                    goto LABEL_996;
                  }
                }
                else
                {
                  v299 = (System_String_o *)StringLiteral_1/*""*/;
                }
                v656 = 0;
LABEL_996:
                v657 = (SceneJumpInfo_o *)sub_1BC3254(SceneJumpInfo_TypeInfo);
                SceneJumpInfo___ctor_40501008(v657, v299, v298, v656, 0LL);
                updated = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
                if ( !updated )
                  goto LABEL_1104;
                v577 = 91;
                v578 = (Il2CppObject *)v657;
LABEL_998:
                AvalonSceneManager__transitionScene((AvalonSceneManager_o *)updated, v577, 1, v578, 0LL);
                goto LABEL_999;
              default:
                if ( id != 800 )
                  return;
                v242 = *v105;
                if ( !*v105 )
                  goto LABEL_1104;
                updated = (__int64)v242->fields.svtVoices;
                if ( !updated )
                  goto LABEL_1104;
                if ( !System_Collections_Generic_Dictionary_int__object___TryGetValue(
                        (System_Collections_Generic_Dictionary_int__object__o *)updated,
                        v242->fields.commandIdx,
                        &value,
                        (const MethodInfo_3309CE0 *)Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__TryGetValue__) )
                  goto LABEL_999;
                updated = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
                if ( !updated )
                  goto LABEL_1104;
                AutomatedAction__TerminateMissionAction((AutomatedAction_o *)updated, 0LL);
                if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
                if ( !byte_4AFC38D )
                {
                  sub_1BC3008(&TerminalSceneComponent_TypeInfo, v102);
                  byte_4AFC38D = 1;
                }
                updated = (__int64)TerminalSceneComponent_TypeInfo;
                if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
                  updated = (__int64)TerminalSceneComponent_TypeInfo;
                }
                v243 = **(_QWORD **)(updated + 184);
                if ( !v243 )
                  goto LABEL_1104;
                if ( !*(_QWORD *)(v243 + 464) )
                  goto LABEL_273;
                if ( !*(_DWORD *)(updated + 224) )
                  j_il2cpp_runtime_class_init_0(updated);
                if ( !byte_4AFC38D )
                {
                  sub_1BC3008(&TerminalSceneComponent_TypeInfo, v102);
                  byte_4AFC38D = 1;
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
                v245 = *(_QWORD *)(v244 + 464);
                if ( !v245 )
                  goto LABEL_1104;
                updated = *(unsigned int *)(v245 + 48);
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
                  SoundManager__playVoice(monitor, 0, 0LL);
                }
                else
                {
                  updated = (__int64)ServantVoiceEntity__getVoiceAssetName_41775916(updated, 0LL);
                  if ( !value )
                    goto LABEL_1104;
                  v246 = (System_String_o *)updated;
                  v247 = (System_String_o *)value[1].monitor;
                  v248 = SeManager_TypeInfo;
                  if ( !SeManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
                    v248 = SeManager_TypeInfo;
                  }
                  DEFAULT_VOLUME = v248->static_fields->DEFAULT_VOLUME;
                  if ( !SoundManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
                  SoundManager__playVoice_40538664(v246, v247, DEFAULT_VOLUME, 0LL, 0, 0LL);
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
        updated = (__int64)v111->fields.param;
        if ( !updated )
          goto LABEL_1104;
        updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
        if ( !updated )
          goto LABEL_1104;
        v159 = *(_QWORD *)(updated + 24);
        v160 = updated;
        if ( v159 )
        {
          if ( !(_DWORD)v159 )
            goto LABEL_1105;
          v161 = System_Int32__Parse(*(System_String_o **)(updated + 32), 0LL) > 0;
        }
        else
        {
          v161 = 0;
        }
        v284 = sub_1BC3254(QuestAfterAction_TitleInfoControlParam_TypeInfo);
        System_Object___ctor((Il2CppObject *)v284, 0LL);
        if ( *(int *)(v160 + 24) >= 2 )
        {
          updated = System_Int32__Parse(*(System_String_o **)(v160 + 40), 0LL);
          if ( (int)updated >= 1 )
          {
            if ( *(_DWORD *)(v160 + 24) <= 1u )
              goto LABEL_1105;
            updated = System_Int32__Parse(*(System_String_o **)(v160 + 40), 0LL);
            if ( !v284 )
              goto LABEL_1104;
            *(_DWORD *)(v284 + 16) = updated;
          }
        }
        if ( *(int *)(v160 + 24) > 2 )
        {
          updated = System_Int32__Parse(*(System_String_o **)(v160 + 48), 0LL);
          if ( (int)updated >= 1 )
          {
            if ( *(_DWORD *)(v160 + 24) <= 2u )
              goto LABEL_1105;
            updated = System_Int32__Parse(*(System_String_o **)(v160 + 48), 0LL);
            if ( !v284 )
              goto LABEL_1104;
            *(_DWORD *)(v284 + 20) = updated;
          }
        }
        v286 = *v105;
        if ( !*v105 )
          goto LABEL_1104;
        TitleInfoCtrlCallback_k__BackingField = v286->fields._TitleInfoCtrlCallback_k__BackingField;
        if ( v161 )
        {
          if ( !TitleInfoCtrlCallback_k__BackingField )
            goto LABEL_1104;
          QuestAfterAction_TitleInfoControlCallback__Start(
            v286->fields._TitleInfoCtrlCallback_k__BackingField,
            (QuestAfterAction_TitleInfoControlParam_o *)v284,
            0LL,
            v285);
          goto LABEL_18;
        }
        v288 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
        System_Action___ctor(v288, (Il2CppObject *)this, (intptr_t)this->klass->vtable._15_onEnd.methodPtr, 0LL);
        if ( !TitleInfoCtrlCallback_k__BackingField )
          goto LABEL_1104;
        QuestAfterAction_TitleInfoControlCallback__Start(
          TitleInfoCtrlCallback_k__BackingField,
          (QuestAfterAction_TitleInfoControlParam_o *)v284,
          v288,
          v289);
        return;
      }
      updated = (__int64)v111->fields.param;
      if ( !updated )
        goto LABEL_1104;
      updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
      if ( !updated )
        goto LABEL_1104;
      v226 = updated;
      if ( !*(_DWORD *)(updated + 24) )
LABEL_1105:
        sub_1BC326C(updated, v102, v110);
      v227 = System_Int32__Parse(*(System_String_o **)(updated + 32), 0LL);
      if ( *(int *)(v226 + 24) < 2 )
      {
        v228 = -1;
      }
      else
      {
        v228 = System_Int32__Parse(*(System_String_o **)(v226 + 40), 0LL);
        if ( *(int *)(v226 + 24) >= 3 )
        {
          v229 = System_Int32__Parse(*(System_String_o **)(v226 + 48), 0LL);
LABEL_363:
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          if ( !byte_4AFC911 )
          {
            sub_1BC3008(&TerminalPramsManager_TypeInfo, v102);
            byte_4AFC911 = 1;
          }
          v279 = TerminalPramsManager_TypeInfo;
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            v279 = TerminalPramsManager_TypeInfo;
          }
          v279->static_fields->_IsAutoResume_k__BackingField = 1;
          if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          if ( !byte_4AFC38D )
          {
            sub_1BC3008(&TerminalSceneComponent_TypeInfo, v102);
            byte_4AFC38D = 1;
          }
          updated = (__int64)TerminalSceneComponent_TypeInfo;
          if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            updated = (__int64)TerminalSceneComponent_TypeInfo;
          }
          v280 = **(_QWORD **)(updated + 184);
          if ( !v280 )
            goto LABEL_1104;
          updated = *(_QWORD *)(v280 + 264);
          if ( !updated )
            goto LABEL_1104;
          if ( !ScrTerminalMap__RequestMapChange((ScrTerminalMap_o *)updated, v227, v228, v229, 0LL) )
          {
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            if ( !byte_4AFC911 )
            {
              sub_1BC3008(&TerminalPramsManager_TypeInfo, v281);
              byte_4AFC911 = 1;
            }
            v283 = TerminalPramsManager_TypeInfo;
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
              v283 = TerminalPramsManager_TypeInfo;
            }
            v283->static_fields->_IsAutoResume_k__BackingField = 0;
            goto LABEL_18;
          }
          ((void (__fastcall *)(QuestAfterAction_StateMain_o *, Il2CppMethodPointer))this->klass->vtable._14_EndAnim.method)(
            this,
            this->klass->vtable._15_onEnd.methodPtr);
          updated = (__int64)*v105;
          if ( !*v105 )
            goto LABEL_1104;
          QuestAfterAction__SetState((QuestAfterAction_o *)updated, 0, v282);
          return;
        }
      }
      v229 = -1;
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
            DEFAULT_FADE_TIME = System_Single__Parse(v111->fields.param, 0LL);
            if ( DEFAULT_FADE_TIME <= 0.0 )
            {
              v216 = AvalonSceneManager_TypeInfo;
              if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
                v216 = AvalonSceneManager_TypeInfo;
              }
              DEFAULT_FADE_TIME = v216->static_fields->DEFAULT_FADE_TIME;
            }
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            if ( !byte_4AFC38D )
            {
              sub_1BC3008(&TerminalSceneComponent_TypeInfo, v214);
              byte_4AFC38D = 1;
            }
            v217 = TerminalSceneComponent_TypeInfo;
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
              v217 = TerminalSceneComponent_TypeInfo;
            }
            v218 = v217->static_fields->mInstance;
            v219 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
            System_Action___ctor(
              v219,
              (Il2CppObject *)v100,
              Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__23__,
              0LL);
            if ( !v218 )
              goto LABEL_1104;
            v220 = v218;
            v221 = DEFAULT_FADE_TIME;
            v222 = v219;
LABEL_202:
            TerminalSceneComponent__Fadein_MapDisp(v220, v221, v222, 0LL);
          }
          else if ( id == 530 )
          {
            v123 = sub_1BC3254(QuestAfterAction_StateMain___c__DisplayClass16_16_TypeInfo);
            QuestAfterAction_StateMain___c__DisplayClass16_16___ctor(
              (QuestAfterAction_StateMain___c__DisplayClass16_16_o *)v123,
              0LL);
            if ( !v123 )
              goto LABEL_1104;
            *(_QWORD *)(v123 + 32) = v100;
            v126 = v123 + 32;
            sub_1BC2FAC((CGThumbnailListItem_o *)(v123 + 32), v100, v124, v125);
            v127 = System_Int32__Parse(v111->fields.param, 0LL);
            updated = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( !updated )
              goto LABEL_1104;
            updated = (__int64)DataManager__GetMasterData_object_(
                                 (DataManager_o *)updated,
                                 (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_QuestMaster___);
            if ( !updated )
              goto LABEL_1104;
            v128 = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)updated,
                     v127,
                     (const MethodInfo_32AF070 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
            *(_QWORD *)(v123 + 16) = v128;
            v129 = (__int64 *)(v123 + 16);
            sub_1BC2FAC((CGThumbnailListItem_o *)(v123 + 16), (int32_t)v128, v130, v131);
            updated = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_38E0168 *)Method_SingletonTemplate_QuestTree__get_Instance__);
            if ( !updated )
              goto LABEL_1104;
            QuestInfo = QuestTree__GetQuestInfo((QuestTree_o *)updated, v127, 0LL);
            *(_QWORD *)(v123 + 24) = QuestInfo;
            v133 = v123 + 24;
            sub_1BC2FAC((CGThumbnailListItem_o *)(v123 + 24), (int32_t)QuestInfo, v134, v135);
            if ( !*(_QWORD *)(v123 + 24) )
              goto LABEL_1104;
            if ( *(_DWORD *)(*(_QWORD *)(v123 + 24) + 32LL) == 1 )
            {
              updated = *v129;
              if ( !*v129 )
                goto LABEL_1104;
              if ( QuestEntity__HasFlag((QuestEntity_o *)updated, 2LL, 0LL) )
              {
                if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                if ( !byte_4AFE998 )
                {
                  sub_1BC3008(&TerminalPramsManager_TypeInfo, v102);
                  byte_4AFE998 = 1;
                }
                updated = (__int64)TerminalPramsManager_TypeInfo;
                if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                  updated = (__int64)TerminalPramsManager_TypeInfo;
                }
                *(_DWORD *)(*(_QWORD *)(updated + 184) + 20LL) = v127;
                if ( !*(_QWORD *)v133 )
                  goto LABEL_1104;
                v137 = *(_DWORD *)(*(_QWORD *)v133 + 44LL);
                if ( !byte_4AFE99C )
                {
                  sub_1BC3008(&TerminalPramsManager_TypeInfo, v102);
                  updated = (__int64)TerminalPramsManager_TypeInfo;
                  byte_4AFE99C = 1;
                }
                if ( !*(_DWORD *)(updated + 224) )
                {
                  j_il2cpp_runtime_class_init_0(updated);
                  updated = (__int64)TerminalPramsManager_TypeInfo;
                }
                *(_DWORD *)(*(_QWORD *)(updated + 184) + 24LL) = v137;
                if ( !*(_QWORD *)v126 )
                  goto LABEL_1104;
                v138 = *(_QWORD *)(*(_QWORD *)v126 + 24LL);
                if ( !v138 )
                  goto LABEL_1104;
                *(_BYTE *)(v138 + 196) = 1;
                v139 = (NetworkManager_ResultCallbackFunc_o *)sub_1BC3254(NetworkManager_ResultCallbackFunc_TypeInfo);
                NetworkManager_ResultCallbackFunc___ctor(
                  v139,
                  (Il2CppObject *)v123,
                  Method_QuestAfterAction_StateMain___c__DisplayClass16_16__UpdateAnim_b__24__,
                  0LL);
                if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                Request_object = NetworkManager__getRequest_object_(
                                   v139,
                                   (const MethodInfo_3089B54 *)Method_NetworkManager_getRequest_BattleSetupScenarioRequest___);
                if ( !byte_4AFC46E )
                {
                  sub_1BC3008(&TerminalPramsManager_TypeInfo, v102);
                  byte_4AFC46E = 1;
                }
                updated = (__int64)TerminalPramsManager_TypeInfo;
                if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                  updated = (__int64)TerminalPramsManager_TypeInfo;
                }
                v141 = *(_DWORD *)(*(_QWORD *)(updated + 184) + 20LL);
                if ( !byte_4AFC46D )
                {
                  sub_1BC3008(&TerminalPramsManager_TypeInfo, v102);
                  updated = (__int64)TerminalPramsManager_TypeInfo;
                  byte_4AFC46D = 1;
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
                  v141,
                  *(_DWORD *)(*(_QWORD *)(updated + 184) + 24LL) + 1,
                  0LL);
              }
            }
            else
            {
              QuestAfterAction_StateMain__ForceEndAnim(this, 1, v136);
            }
          }
          return;
        }
        updated = (__int64)v111->fields.param;
        if ( !updated )
          goto LABEL_1104;
        updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
        if ( !updated )
          goto LABEL_1104;
        v210 = updated;
        if ( *(_DWORD *)(updated + 24) )
        {
          v211 = System_Int32__Parse(*(System_String_o **)(updated + 32), 0LL);
          v212 = 0.5;
          if ( *(int *)(v210 + 24) >= 2 )
          {
            v213 = System_Int32__Parse(*(System_String_o **)(v210 + 40), 0LL);
            if ( *(int *)(v210 + 24) >= 3 )
              v212 = System_Single__Parse(*(System_String_o **)(v210 + 48), 0LL);
          }
          else
          {
            v213 = v211;
            v211 = -1;
          }
          updated = (__int64)*v105;
          if ( !*v105 )
            goto LABEL_1104;
          MapComponent_object = QuestAfterAction__GetMapComponent_object_(
                                  (QuestAfterAction_o *)updated,
                                  0,
                                  v213,
                                  this,
                                  (const MethodInfo_30976C8 *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)MapComponent_object, 0LL, 0LL) )
          {
            if ( v211 >= 1 )
            {
              updated = (__int64)*v105;
              if ( !*v105 )
                goto LABEL_1104;
              v272 = QuestAfterAction__GetMapComponent_object_(
                       (QuestAfterAction_o *)updated,
                       0,
                       v211,
                       this,
                       (const MethodInfo_30976C8 *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v272, 0LL, 0LL) )
              {
                if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
                if ( !byte_4AFC38D )
                {
                  sub_1BC3008(&TerminalSceneComponent_TypeInfo, v102);
                  byte_4AFC38D = 1;
                }
                updated = (__int64)TerminalSceneComponent_TypeInfo;
                if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
                  updated = (__int64)TerminalSceneComponent_TypeInfo;
                }
                v273 = **(_QWORD **)(updated + 184);
                if ( !v273 )
                  goto LABEL_1104;
                if ( !v272 )
                  goto LABEL_1104;
                v274 = *(ScrTerminalMap_o **)(v273 + 264);
                updated = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v272, 0LL);
                if ( !v274 )
                  goto LABEL_1104;
                ScrTerminalMap__SetPlayerIcon(v274, (UnityEngine_GameObject_o *)updated, 0LL);
              }
            }
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            if ( !byte_4AFC38D )
            {
              sub_1BC3008(&TerminalSceneComponent_TypeInfo, v102);
              byte_4AFC38D = 1;
            }
            updated = (__int64)TerminalSceneComponent_TypeInfo;
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
              updated = (__int64)TerminalSceneComponent_TypeInfo;
            }
            v275 = **(_QWORD **)(updated + 184);
            if ( !v275 )
              goto LABEL_1104;
            if ( !MapComponent_object )
              goto LABEL_1104;
            v276 = *(ScrTerminalMap_o **)(v275 + 264);
            gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)MapComponent_object, 0LL);
            v278 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
            System_Action___ctor(v278, (Il2CppObject *)this, (intptr_t)this->klass->vtable._15_onEnd.methodPtr, 0LL);
            if ( !v276 )
              goto LABEL_1104;
            ScrTerminalMap__MovePlayerIcon(v276, gameObject, v213, v278, v212, 0LL);
          }
          return;
        }
        goto LABEL_1105;
      }
      switch ( id )
      {
        case 400:
          v150 = sub_1BC3254(QuestAfterAction_StateMain___c__DisplayClass16_10_TypeInfo);
          QuestAfterAction_StateMain___c__DisplayClass16_10___ctor(
            (QuestAfterAction_StateMain___c__DisplayClass16_10_o *)v150,
            0LL);
          if ( !v150 )
            goto LABEL_1104;
          *(_QWORD *)(v150 + 24) = v100;
          v153 = v150 + 24;
          sub_1BC2FAC((CGThumbnailListItem_o *)(v150 + 24), v100, v151, v152);
          updated = (__int64)v111->fields.param;
          if ( !updated )
            goto LABEL_1104;
          updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
          if ( !updated )
            goto LABEL_1104;
          v154 = *(_QWORD *)(updated + 24);
          v155 = updated;
          if ( v154 )
          {
            if ( !(_DWORD)v154 )
              goto LABEL_1105;
            updated = System_Int32__Parse(*(System_String_o **)(updated + 32), 0LL);
            v156 = updated;
            if ( *(int *)(v155 + 24) >= 2 )
            {
              updated = System_Int32__Parse(*(System_String_o **)(v155 + 40), 0LL);
              v157 = (int)updated < 1;
              if ( *(int *)(v155 + 24) < 3 )
              {
                v158 = 0;
              }
              else
              {
                updated = System_Int32__Parse(*(System_String_o **)(v155 + 48), 0LL);
                v158 = (int)updated > 0;
              }
              goto LABEL_906;
            }
          }
          else
          {
            v156 = 0;
          }
          v158 = 0;
          v157 = 1;
LABEL_906:
          if ( !*(_QWORD *)v153 )
            goto LABEL_1104;
          updated = *(_QWORD *)(*(_QWORD *)v153 + 24LL);
          if ( !updated )
            goto LABEL_1104;
          v596 = QuestAfterAction__GetMapComponent_object_(
                   (QuestAfterAction_o *)updated,
                   2,
                   v156,
                   this,
                   (const MethodInfo_30976C8 *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
          *(_QWORD *)(v150 + 16) = v596;
          sub_1BC2FAC((CGThumbnailListItem_o *)(v150 + 16), (int32_t)v596, v597, v598);
          v599 = *(UnityEngine_Object_o **)(v150 + 16);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          updated = UnityEngine_Object__op_Equality(v599, 0LL, 0LL);
          if ( (updated & 1) != 0 )
            return;
          v600 = *(MapGimmickComponent_o **)(v150 + 16);
          if ( !v600 )
            goto LABEL_1104;
          v600->fields.isForceNotActive = v158;
          v601 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
          v602 = v601;
          if ( v157 )
          {
            System_Action___ctor(
              v601,
              (Il2CppObject *)v150,
              Method_QuestAfterAction_StateMain___c__DisplayClass16_10__UpdateAnim_b__14__,
              0LL);
            v471 = 2;
            v603 = v600;
            v604 = v602;
LABEL_1015:
            MapGimmickComponent__SetState(v603, v471, v604, v470);
            return;
          }
          System_Action___ctor(
            v601,
            (Il2CppObject *)v150,
            Method_QuestAfterAction_StateMain___c__DisplayClass16_10__UpdateAnim_b__13__,
            0LL);
          MapGimmickComponent__SetState(v600, 2, v602, v669);
          updated = ((__int64 (__fastcall *)(QuestAfterAction_StateMain_o *, Il2CppMethodPointer))this->klass->vtable._14_EndAnim.method)(
                      this,
                      this->klass->vtable._15_onEnd.methodPtr);
          v670 = *(_QWORD *)(v150 + 24);
          if ( !v670 )
            goto LABEL_1104;
          goto LABEL_1020;
        case 401:
          v401 = sub_1BC3254(QuestAfterAction_StateMain___c__DisplayClass16_11_TypeInfo);
          QuestAfterAction_StateMain___c__DisplayClass16_11___ctor(
            (QuestAfterAction_StateMain___c__DisplayClass16_11_o *)v401,
            0LL);
          if ( !v401 )
            goto LABEL_1104;
          *(_QWORD *)(v401 + 24) = v100;
          v404 = v401 + 24;
          sub_1BC2FAC((CGThumbnailListItem_o *)(v401 + 24), v100, v402, v403);
          updated = (__int64)v111->fields.param;
          if ( !updated )
            goto LABEL_1104;
          updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
          if ( !updated )
            goto LABEL_1104;
          v405 = *(_QWORD *)(updated + 24);
          v406 = updated;
          if ( v405 )
          {
            if ( !(_DWORD)v405 )
              goto LABEL_1105;
            updated = System_Int32__Parse(*(System_String_o **)(updated + 32), 0LL);
            v407 = updated;
            if ( *(int *)(v406 + 24) >= 2 )
            {
              updated = System_Int32__Parse(*(System_String_o **)(v406 + 40), 0LL);
              v408 = (int)updated < 1;
              if ( *(int *)(v406 + 24) < 3 )
              {
                v409 = 0;
              }
              else
              {
                updated = System_Int32__Parse(*(System_String_o **)(v406 + 48), 0LL);
                v409 = (int)updated > 0;
              }
              goto LABEL_916;
            }
          }
          else
          {
            v407 = 0;
          }
          v409 = 0;
          v408 = 1;
LABEL_916:
          if ( !*(_QWORD *)v404 )
            goto LABEL_1104;
          updated = *(_QWORD *)(*(_QWORD *)v404 + 24LL);
          if ( !updated )
            goto LABEL_1104;
          v605 = QuestAfterAction__GetMapComponent_object_(
                   (QuestAfterAction_o *)updated,
                   2,
                   v407,
                   this,
                   (const MethodInfo_30976C8 *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
          *(_QWORD *)(v401 + 16) = v605;
          v606 = (MapGimmickComponent_o **)(v401 + 16);
          sub_1BC2FAC((CGThumbnailListItem_o *)(v401 + 16), (int32_t)v605, v607, v608);
          v609 = *(UnityEngine_Object_o **)(v401 + 16);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          updated = UnityEngine_Object__op_Equality(v609, 0LL, 0LL);
          if ( (updated & 1) != 0 )
            return;
          v610 = *v606;
          if ( !*v606 )
            goto LABEL_1104;
          v610->fields.isForceLoop = v409;
          v610->fields.isForceNotActive = 0;
          if ( *(int *)(v406 + 24) >= 4 )
          {
            updated = System_Int32__Parse(*(System_String_o **)(v406 + 56), 0LL);
            if ( !*v606 )
              goto LABEL_1104;
            MapGimmickComponent__SetUseAnimNum(*v606, updated, 1, v611);
            v610 = *v606;
          }
          v612 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
          v454 = v612;
          if ( v408 )
          {
            System_Action___ctor(
              v612,
              (Il2CppObject *)v401,
              Method_QuestAfterAction_StateMain___c__DisplayClass16_11__UpdateAnim_b__16__,
              0LL);
            if ( !v610 )
              goto LABEL_1104;
            v471 = 3;
            v603 = v610;
LABEL_1014:
            v604 = v454;
            goto LABEL_1015;
          }
          System_Action___ctor(
            v612,
            (Il2CppObject *)v401,
            Method_QuestAfterAction_StateMain___c__DisplayClass16_11__UpdateAnim_b__15__,
            0LL);
          if ( !v610 )
            goto LABEL_1104;
          MapGimmickComponent__SetState(v610, 3, v454, v671);
          updated = ((__int64 (__fastcall *)(QuestAfterAction_StateMain_o *, Il2CppMethodPointer))this->klass->vtable._14_EndAnim.method)(
                      this,
                      this->klass->vtable._15_onEnd.methodPtr);
          v670 = *(_QWORD *)v404;
          if ( !*(_QWORD *)v404 )
            goto LABEL_1104;
LABEL_1020:
          ((void (__fastcall *)(QuestAfterAction_StateMain_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._13_UpdateAnim.method)(
            this,
            *(_QWORD *)(v670 + 24),
            this->klass->vtable._14_EndAnim.methodPtr);
          return;
        case 402:
          updated = (__int64)v111->fields.param;
          if ( !updated )
            goto LABEL_1104;
          updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
          if ( !updated )
            goto LABEL_1104;
          v410 = *(_QWORD *)(updated + 24);
          v411 = updated;
          if ( v410 )
          {
            if ( !(_DWORD)v410 )
              goto LABEL_1105;
            v412 = System_Int32__Parse(*(System_String_o **)(updated + 32), 0LL);
            if ( *(int *)(v411 + 24) >= 2 )
            {
              v413 = System_Int32__Parse(*(System_String_o **)(v411 + 40), 0LL) > 0;
              goto LABEL_879;
            }
          }
          else
          {
            v412 = 0;
          }
          v413 = 0;
LABEL_879:
          updated = (__int64)*v105;
          if ( !*v105 )
            goto LABEL_1104;
          v585 = QuestAfterAction__GetMapComponent_object_(
                   (QuestAfterAction_o *)updated,
                   2,
                   v412,
                   this,
                   (const MethodInfo_30976C8 *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          updated = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v585, 0LL, 0LL);
          if ( (updated & 1) == 0 )
          {
            if ( !v585 )
              goto LABEL_1104;
            BYTE1(v585[6].monitor) = v413;
            MapGimmickComponent__SetDispAnim_35279032((MapGimmickComponent_o *)v585, 0, 0.0, 0, v586);
            v533 = v585[7].klass;
            if ( !v533 )
              goto LABEL_1104;
LABEL_961:
            v533[4] = 0;
            goto LABEL_18;
          }
          return;
        case 403:
          updated = (__int64)v111->fields.param;
          if ( !updated )
            goto LABEL_1104;
          updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
          if ( !updated )
            goto LABEL_1104;
          v414 = *(_QWORD *)(updated + 24);
          v415 = updated;
          if ( v414 )
          {
            if ( !(_DWORD)v414 )
              goto LABEL_1105;
            v416 = System_Int32__Parse(*(System_String_o **)(updated + 32), 0LL);
            if ( *(int *)(v415 + 24) >= 2 )
            {
              v417 = System_Int32__Parse(*(System_String_o **)(v415 + 40), 0LL) > 0;
              goto LABEL_888;
            }
          }
          else
          {
            v416 = 0;
          }
          v417 = 0;
LABEL_888:
          updated = (__int64)*v105;
          if ( !*v105 )
            goto LABEL_1104;
          v587 = QuestAfterAction__GetMapComponent_object_(
                   (QuestAfterAction_o *)updated,
                   2,
                   v416,
                   this,
                   (const MethodInfo_30976C8 *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          updated = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v587, 0LL, 0LL);
          if ( (updated & 1) == 0 )
          {
            if ( !v587 )
              goto LABEL_1104;
            LOBYTE(v587[6].monitor) = v417;
            BYTE1(v587[6].monitor) = 0;
            MapGimmickComponent__SetDispAnim_35279032((MapGimmickComponent_o *)v587, 1, 0.0, 0, v588);
            v589 = v587[7].klass;
            if ( !v589 )
              goto LABEL_1104;
            LODWORD(v589->_1.name) = 1;
            goto LABEL_18;
          }
          return;
        case 404:
          updated = (__int64)v111->fields.param;
          if ( !updated )
            goto LABEL_1104;
          updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
          if ( !updated )
            goto LABEL_1104;
          v418 = updated;
          if ( *(int *)(updated + 24) <= 4 )
            goto LABEL_999;
          v419 = System_Single__Parse(*(System_String_o **)(updated + 56), 0LL);
          if ( !*(_DWORD *)(v418 + 24) )
            goto LABEL_1105;
          v420 = *v105;
          v421 = v419;
          updated = System_Int32__Parse(*(System_String_o **)(v418 + 32), 0LL);
          if ( !v420 )
            goto LABEL_1104;
          v422 = QuestAfterAction__GetMapComponent_object_(
                   v420,
                   2,
                   updated,
                   this,
                   (const MethodInfo_30976C8 *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v422, 0LL, 0LL) )
            return;
          v423 = *(int *)(v418 + 24) >= 6 && System_Int32__Parse(*(System_String_o **)(v418 + 72), 0LL) > 0;
          if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          if ( !byte_4AFC38D )
          {
            sub_1BC3008(&TerminalSceneComponent_TypeInfo, v102);
            byte_4AFC38D = 1;
          }
          updated = (__int64)TerminalSceneComponent_TypeInfo;
          if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            updated = (__int64)TerminalSceneComponent_TypeInfo;
          }
          v682 = **(_QWORD **)(updated + 184);
          if ( !v682 )
            goto LABEL_1104;
          if ( *(_DWORD *)(v418 + 24) <= 1u )
            goto LABEL_1105;
          v683 = *(ScrTerminalMap_o **)(v682 + 264);
          v684 = System_Single__Parse(*(System_String_o **)(v418 + 40), 0LL);
          if ( *(_DWORD *)(v418 + 24) <= 2u )
            goto LABEL_1105;
          v685 = v684;
          v686 = System_Single__Parse(*(System_String_o **)(v418 + 48), 0LL);
          if ( !v683 )
            goto LABEL_1104;
          *(UnityEngine_Vector3_o *)&v687 = ScrTerminalMap__LocalPosFromCoord(v683, v685, v686, 0.0, 0.0, 0LL);
          if ( *(_DWORD *)(v418 + 24) <= 4u )
            goto LABEL_1105;
          v690 = v687;
          v691 = v688;
          v692 = v689;
          v693 = v421 * 0.001;
          updated = System_Int32__Parse(*(System_String_o **)(v418 + 64), 0LL);
          v695 = updated;
          if ( v423 )
          {
            if ( !v422 )
              goto LABEL_1104;
            v739.fields.x = v690;
            v739.fields.y = v691;
            v739.fields.z = v692;
            MapGimmickComponent__SetMoveAnim((MapGimmickComponent_o *)v422, v739, v693, updated, 0LL, v694);
            goto LABEL_999;
          }
          v696 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
          System_Action___ctor(v696, (Il2CppObject *)this, (intptr_t)this->klass->vtable._15_onEnd.methodPtr, 0LL);
          if ( !v422 )
            goto LABEL_1104;
          v662 = (MapGimmickComponent_o *)v422;
          v663 = v690;
          v664 = v691;
          v665 = v692;
          v666 = v693;
          v667 = v695;
          v668 = v696;
LABEL_1080:
          MapGimmickComponent__SetMoveAnim(v662, *(UnityEngine_Vector3_o *)&v663, v666, v667, v668, v661);
          return;
        case 405:
          v424 = sub_1BC3254(QuestAfterAction_StateMain___c__DisplayClass16_12_TypeInfo);
          QuestAfterAction_StateMain___c__DisplayClass16_12___ctor(
            (QuestAfterAction_StateMain___c__DisplayClass16_12_o *)v424,
            0LL);
          if ( !v424 )
            goto LABEL_1104;
          *(_QWORD *)(v424 + 24) = v100;
          sub_1BC2FAC((CGThumbnailListItem_o *)(v424 + 24), v100, v425, v426);
          v427 = *(_QWORD *)(v424 + 24);
          if ( !v427 )
            goto LABEL_1104;
          v428 = *(QuestAfterAction_o **)(v427 + 24);
          updated = System_Int32__Parse(v111->fields.param, 0LL);
          if ( !v428 )
            goto LABEL_1104;
          v429 = QuestAfterAction__GetMapComponent_object_(
                   v428,
                   2,
                   updated,
                   this,
                   (const MethodInfo_30976C8 *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
          *(_QWORD *)(v424 + 16) = v429;
          sub_1BC2FAC((CGThumbnailListItem_o *)(v424 + 16), (int32_t)v429, v430, v431);
          v432 = *(UnityEngine_Object_o **)(v424 + 16);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Equality(v432, 0LL, 0LL) )
            return;
          v433 = *(MapGimmickComponent_o **)(v424 + 16);
          v434 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
          System_Action___ctor(
            v434,
            (Il2CppObject *)v424,
            Method_QuestAfterAction_StateMain___c__DisplayClass16_12__UpdateAnim_b__17__,
            0LL);
          if ( !v433 )
            goto LABEL_1104;
          MapGimmickComponent__SetState(v433, 3, v434, v435);
          if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          if ( !byte_4AFC38D )
          {
            sub_1BC3008(&TerminalSceneComponent_TypeInfo, v102);
            byte_4AFC38D = 1;
          }
          updated = (__int64)TerminalSceneComponent_TypeInfo;
          if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            updated = (__int64)TerminalSceneComponent_TypeInfo;
          }
          v436 = **(TerminalSceneComponent_o ***)(updated + 184);
          if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
          if ( !v436 )
            goto LABEL_1104;
          v220 = v436;
          v222 = 0LL;
          v221 = AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME;
          goto LABEL_202;
        case 406:
          v437 = sub_1BC3254(QuestAfterAction_StateMain___c__DisplayClass16_13_TypeInfo);
          QuestAfterAction_StateMain___c__DisplayClass16_13___ctor(
            (QuestAfterAction_StateMain___c__DisplayClass16_13_o *)v437,
            0LL);
          if ( !v437 )
            goto LABEL_1104;
          *(_QWORD *)(v437 + 32) = v100;
          sub_1BC2FAC((CGThumbnailListItem_o *)(v437 + 32), v100, v438, v439);
          updated = (__int64)v111->fields.param;
          if ( !updated )
            goto LABEL_1104;
          v440 = System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
          *(_QWORD *)(v437 + 24) = v440;
          v441 = (__int64 *)(v437 + 24);
          sub_1BC2FAC((CGThumbnailListItem_o *)(v437 + 24), (int32_t)v440, v442, v443);
          v444 = *(_QWORD *)(v437 + 32);
          if ( !v444 )
            goto LABEL_1104;
          v445 = *v441;
          if ( !*v441 )
            goto LABEL_1104;
          if ( !*(_DWORD *)(v445 + 24) )
            goto LABEL_1105;
          v446 = *(QuestAfterAction_o **)(v444 + 24);
          updated = System_Int32__Parse(*(System_String_o **)(v445 + 32), 0LL);
          if ( !v446 )
            goto LABEL_1104;
          v447 = QuestAfterAction__GetMapComponent_object_(
                   v446,
                   2,
                   updated,
                   this,
                   (const MethodInfo_30976C8 *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
          *(_QWORD *)(v437 + 16) = v447;
          sub_1BC2FAC((CGThumbnailListItem_o *)(v437 + 16), (int32_t)v447, v448, v449);
          v450 = *(UnityEngine_Object_o **)(v437 + 16);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Equality(v450, 0LL, 0LL) )
            return;
          v451 = *(MapGimmickComponent_o **)(v437 + 16);
          v452 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
          v453 = &Method_QuestAfterAction_StateMain___c__DisplayClass16_13__UpdateAnim_b__18__;
          v454 = v452;
          goto LABEL_627;
        case 407:
          updated = (__int64)v111->fields.param;
          if ( !updated )
            goto LABEL_1104;
          updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
          if ( !updated )
            goto LABEL_1104;
          v455 = updated;
          if ( !*(_DWORD *)(updated + 24) )
            goto LABEL_1105;
          v456 = *v105;
          updated = System_Int32__Parse(*(System_String_o **)(updated + 32), 0LL);
          if ( !v456 )
            goto LABEL_1104;
          v457 = QuestAfterAction__GetMapComponent_object_(
                   v456,
                   2,
                   updated,
                   this,
                   (const MethodInfo_30976C8 *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          updated = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v457, 0LL, 0LL);
          if ( (updated & 1) != 0 )
            return;
          if ( !v457 )
            goto LABEL_1104;
          updated = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v457, 0LL);
          if ( !updated )
            goto LABEL_1104;
          updated = (__int64)UnityEngine_GameObject__GetComponentInChildren_object_(
                               (UnityEngine_GameObject_o *)updated,
                               (const MethodInfo_3055BFC *)Method_UnityEngine_GameObject_GetComponentInChildren_UISprite___);
          if ( *(_DWORD *)(v455 + 24) <= 1u )
            goto LABEL_1105;
          v458 = (UIWidget_o *)updated;
          updated = UnityEngine_ColorUtility__TryParseHtmlString(*(System_String_o **)(v455 + 40), &color, 0LL);
          if ( !v458 )
            goto LABEL_1104;
          UIWidget__set_color(v458, color, 0LL);
          goto LABEL_999;
        case 408:
          v437 = sub_1BC3254(QuestAfterAction_StateMain___c__DisplayClass16_15_TypeInfo);
          QuestAfterAction_StateMain___c__DisplayClass16_15___ctor(
            (QuestAfterAction_StateMain___c__DisplayClass16_15_o *)v437,
            0LL);
          if ( !v437 )
            goto LABEL_1104;
          *(_QWORD *)(v437 + 24) = v100;
          sub_1BC2FAC((CGThumbnailListItem_o *)(v437 + 24), v100, v459, v460);
          v461 = *(_QWORD *)(v437 + 24);
          if ( !v461 )
            goto LABEL_1104;
          v462 = *(QuestAfterAction_o **)(v461 + 24);
          updated = System_Int32__Parse(v111->fields.param, 0LL);
          if ( !v462 )
            goto LABEL_1104;
          v463 = QuestAfterAction__GetMapComponent_object_(
                   v462,
                   2,
                   updated,
                   this,
                   (const MethodInfo_30976C8 *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
          *(_QWORD *)(v437 + 16) = v463;
          v464 = v437 + 16;
          sub_1BC2FAC((CGThumbnailListItem_o *)(v437 + 16), (int32_t)v463, v465, v466);
          v467 = *(UnityEngine_Object_o **)(v437 + 16);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Equality(v467, 0LL, 0LL) )
            return;
          updated = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_38E0168 *)Method_SingletonTemplate_QuestTree__get_Instance__);
          if ( !*(_QWORD *)v464 || !updated )
            goto LABEL_1104;
          v468 = QuestTree__CheckMapGimmickCond_35639228(
                   (QuestTree_o *)updated,
                   *(MapControl_MapGimmickInfo_o **)(*(_QWORD *)v464 + 112LL),
                   0LL);
          v451 = *(MapGimmickComponent_o **)v464;
          v469 = v468;
          v452 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
          v454 = v452;
          if ( v469 )
          {
            v453 = &Method_QuestAfterAction_StateMain___c__DisplayClass16_15__UpdateAnim_b__20__;
LABEL_627:
            System_Action___ctor(v452, (Il2CppObject *)v437, *v453, 0LL);
            if ( !v451 )
              goto LABEL_1104;
            v471 = 3;
          }
          else
          {
            System_Action___ctor(
              v452,
              (Il2CppObject *)v437,
              Method_QuestAfterAction_StateMain___c__DisplayClass16_15__UpdateAnim_b__21__,
              0LL);
            if ( !v451 )
              goto LABEL_1104;
            v471 = 2;
          }
          v603 = v451;
          goto LABEL_1014;
        case 409:
          updated = (__int64)v111->fields.param;
          if ( !updated )
            goto LABEL_1104;
          updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
          if ( !updated )
            goto LABEL_1104;
          v472 = *(_QWORD *)(updated + 24);
          v473 = updated;
          if ( v472 )
          {
            if ( !(_DWORD)v472 )
              goto LABEL_1105;
            v474 = System_Int32__Parse(*(System_String_o **)(updated + 32), 0LL);
            if ( *(int *)(v473 + 24) >= 2 )
            {
              v475 = System_Int32__Parse(*(System_String_o **)(v473 + 40), 0LL) > 0;
              goto LABEL_897;
            }
          }
          else
          {
            v474 = 0;
          }
          v475 = 0;
LABEL_897:
          updated = (__int64)*v105;
          if ( !*v105 )
            goto LABEL_1104;
          v590 = QuestAfterAction__GetMapComponent_object_(
                   (QuestAfterAction_o *)updated,
                   2,
                   v474,
                   this,
                   (const MethodInfo_30976C8 *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          updated = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v590, 0LL, 0LL);
          if ( (updated & 1) == 0 )
          {
            if ( !v590 )
              goto LABEL_1104;
            LOBYTE(v590[6].monitor) = v475;
            BYTE1(v590[6].monitor) = 0;
            AnimTime = MapGimmickComponent__GetAnimTime((MapGimmickComponent_o *)v590, v102);
            MapGimmickComponent__SetDispAnim_35279032((MapGimmickComponent_o *)v590, 1, AnimTime, 1, v592);
            v593 = v590[7].klass;
            if ( !v593 )
              goto LABEL_1104;
            LODWORD(v593->_1.name) = 1;
            v594 = this->klass;
            this->fields.IsAnimDoing = 0;
            v595 = ((__int64 (__fastcall *)(QuestAfterAction_StateMain_o *, Il2CppMethodPointer))v594->vtable._11_get_CommandIndex.method)(
                     this,
                     v594->vtable._12_set_CommandIndex.methodPtr);
            ((void (__fastcall *)(QuestAfterAction_StateMain_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._12_set_CommandIndex.method)(
              this,
              (unsigned int)(v595 + 1),
              this->klass->vtable._13_UpdateAnim.methodPtr);
            goto LABEL_19;
          }
          return;
        case 410:
          updated = (__int64)v111->fields.param;
          if ( !updated )
            goto LABEL_1104;
          updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
          if ( !updated )
            goto LABEL_1104;
          v476 = updated;
          if ( *(int *)(updated + 24) <= 2 )
            goto LABEL_999;
          v477 = *v105;
          updated = System_Int32__Parse(*(System_String_o **)(updated + 32), 0LL);
          if ( !v477 )
            goto LABEL_1104;
          v478 = QuestAfterAction__GetMapComponent_object_(
                   v477,
                   2,
                   updated,
                   this,
                   (const MethodInfo_30976C8 *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          updated = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v478, 0LL, 0LL);
          if ( (updated & 1) != 0 )
            return;
          if ( *(_DWORD *)(v476 + 24) <= 1u )
            goto LABEL_1105;
          v479 = *v105;
          updated = System_Int32__Parse(*(System_String_o **)(v476 + 40), 0LL);
          if ( !v479 )
            goto LABEL_1104;
          v481 = updated;
          v482 = v479;
          v483 = 0;
          goto LABEL_669;
        case 411:
          updated = (__int64)v111->fields.param;
          if ( !updated )
            goto LABEL_1104;
          updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
          if ( !updated )
            goto LABEL_1104;
          v476 = updated;
          if ( *(int *)(updated + 24) <= 2 )
            goto LABEL_999;
          v484 = *v105;
          updated = System_Int32__Parse(*(System_String_o **)(updated + 32), 0LL);
          if ( !v484 )
            goto LABEL_1104;
          v478 = QuestAfterAction__GetMapComponent_object_(
                   v484,
                   2,
                   updated,
                   this,
                   (const MethodInfo_30976C8 *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          updated = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v478, 0LL, 0LL);
          if ( (updated & 1) != 0 )
            return;
          if ( *(_DWORD *)(v476 + 24) <= 1u )
            goto LABEL_1105;
          v485 = *v105;
          updated = System_Int32__Parse(*(System_String_o **)(v476 + 40), 0LL);
          if ( !v485 )
            goto LABEL_1104;
          MapGameObject = (UnityEngine_Object_o *)QuestAfterAction__GetMapGameObject(v485, 2, updated, this, v486);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Equality(MapGameObject, 0LL, 0LL) )
            return;
          *(UnityEngine_Vector3_o *)&v488 = GameObjectExtensions__GetLocalPosition(
                                              (UnityEngine_GameObject_o *)MapGameObject,
                                              0LL);
          if ( *(_DWORD *)(v476 + 24) <= 2u )
            goto LABEL_1105;
          x = v488;
          y = v489;
          z = v490;
          goto LABEL_683;
        case 412:
          updated = (__int64)v111->fields.param;
          if ( !updated )
            goto LABEL_1104;
          updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
          if ( !updated )
            goto LABEL_1104;
          v476 = updated;
          if ( *(int *)(updated + 24) <= 2 )
            goto LABEL_999;
          v494 = *v105;
          updated = System_Int32__Parse(*(System_String_o **)(updated + 32), 0LL);
          if ( !v494 )
            goto LABEL_1104;
          v478 = QuestAfterAction__GetMapComponent_object_(
                   v494,
                   2,
                   updated,
                   this,
                   (const MethodInfo_30976C8 *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          updated = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v478, 0LL, 0LL);
          if ( (updated & 1) != 0 )
            return;
          if ( *(_DWORD *)(v476 + 24) <= 1u )
            goto LABEL_1105;
          v495 = *v105;
          updated = System_Int32__Parse(*(System_String_o **)(v476 + 40), 0LL);
          if ( !v495 )
            goto LABEL_1104;
          v481 = updated;
          v483 = 1;
          v482 = v495;
LABEL_669:
          v496 = (UnityEngine_Object_o *)QuestAfterAction__GetMapGameObject(v482, v483, v481, this, v480);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Equality(v496, 0LL, 0LL) )
            return;
          LocalPosition = GameObjectExtensions__GetLocalPosition((UnityEngine_GameObject_o *)v496, 0LL);
          x = LocalPosition.fields.x;
          y = LocalPosition.fields.y;
          z = LocalPosition.fields.z;
          if ( !this->fields.IsMapModel )
            goto LABEL_682;
          if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          if ( !byte_4AFC38D )
          {
            sub_1BC3008(&TerminalSceneComponent_TypeInfo, v102);
            byte_4AFC38D = 1;
          }
          updated = (__int64)TerminalSceneComponent_TypeInfo;
          if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            updated = (__int64)TerminalSceneComponent_TypeInfo;
          }
          v497 = **(_QWORD **)(updated + 184);
          if ( !v497 )
            goto LABEL_1104;
          updated = *(_QWORD *)(v497 + 264);
          if ( !updated )
            goto LABEL_1104;
          v728.fields.x = x;
          v728.fields.y = y;
          v728.fields.z = z;
          v729 = ScrTerminalMap__ConvertLocalToScreenPosition((ScrTerminalMap_o *)updated, v728, 0LL);
          x = v729.fields.x;
          y = v729.fields.y;
          z = v729.fields.z;
LABEL_682:
          if ( *(_DWORD *)(v476 + 24) <= 2u )
            goto LABEL_1105;
LABEL_683:
          v498 = System_Single__Parse(*(System_String_o **)(v476 + 48), 0LL) * 0.001;
          if ( v498 >= 0.0 )
            v499 = v498;
          else
            v499 = 0.5;
          if ( *(_DWORD *)(v476 + 24) <= 3u )
            goto LABEL_1105;
          v500 = System_Int32__Parse(*(System_String_o **)(v476 + 56), 0LL);
          if ( *(int *)(v476 + 24) >= 5 )
          {
            updated = System_Int32__Parse(*(System_String_o **)(v476 + 64), 0LL);
            if ( (int)updated >= 1 )
            {
              if ( !v478 )
                goto LABEL_1104;
              v730.fields.x = x;
              v730.fields.y = y;
              v730.fields.z = z;
              MapGimmickComponent__SetMoveAnim((MapGimmickComponent_o *)v478, v730, v499, v500, 0LL, v501);
              goto LABEL_18;
            }
          }
          v660 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
          System_Action___ctor(v660, (Il2CppObject *)this, (intptr_t)this->klass->vtable._15_onEnd.methodPtr, 0LL);
          if ( !v478 )
            goto LABEL_1104;
          v662 = (MapGimmickComponent_o *)v478;
          v663 = x;
          v664 = y;
          v665 = z;
          v666 = v499;
          v667 = v500;
          v668 = v660;
          goto LABEL_1080;
        default:
          if ( id == 500 )
          {
            v503 = System_Int32__Parse(v111->fields.param, 0LL);
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            if ( !byte_4AFEC4D )
            {
              sub_1BC3008(&TerminalPramsManager_TypeInfo, v502);
              byte_4AFEC4D = 1;
            }
            v504 = TerminalPramsManager_TypeInfo;
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
              v504 = TerminalPramsManager_TypeInfo;
            }
            v504->static_fields->_AfterActionFocusQuestId_k__BackingField = v503;
            if ( !DataManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
            updated = (__int64)DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_QuestMaster___);
            if ( !updated )
              goto LABEL_1104;
            if ( DataMasterBase_object__object__int___TryGetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)updated,
                   &entity,
                   v503,
                   (const MethodInfo_32AF0BC *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__) )
            {
              updated = (__int64)entity;
              if ( !entity )
                goto LABEL_1104;
              v505 = *v105;
              updated = QuestEntity__getSpotId((QuestEntity_o *)entity, 0LL);
              if ( !v505 )
                goto LABEL_1104;
              v506 = QuestAfterAction__GetMapComponent_object_(
                       v505,
                       0,
                       updated,
                       this,
                       (const MethodInfo_30976C8 *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              updated = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v506, 0LL, 0LL);
              if ( (updated & 1) != 0 )
              {
                if ( !v506 )
                  goto LABEL_1104;
                SrcSpotBasePrefab__SelectSpot((SrcSpotBasePrefab_o *)v506, 0, 0LL);
                if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                if ( !byte_4AFEC4E )
                {
                  sub_1BC3008(&TerminalPramsManager_TypeInfo, v507);
                  byte_4AFEC4E = 1;
                }
                v508 = TerminalPramsManager_TypeInfo;
                if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                  v508 = TerminalPramsManager_TypeInfo;
                }
                v508->static_fields->_IsBackQuestBoardDisable_k__BackingField = 1;
              }
            }
          }
          else
          {
            if ( id != 501 )
              return;
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            if ( !byte_4AFC38D )
            {
              sub_1BC3008(&TerminalSceneComponent_TypeInfo, v102);
              byte_4AFC38D = 1;
            }
            updated = (__int64)TerminalSceneComponent_TypeInfo;
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
              updated = (__int64)TerminalSceneComponent_TypeInfo;
            }
            v230 = **(_QWORD **)(updated + 184);
            if ( !v230 )
              goto LABEL_1104;
            updated = *(_QWORD *)(v230 + 256);
            if ( !updated )
              goto LABEL_1104;
            updated = (__int64)ScrTerminalListTop__mfGetMyFsmP((ScrTerminalListTop_o *)updated, 0LL);
            if ( !updated )
              goto LABEL_1104;
            v231 = (PlayMakerFSM_o *)updated;
            ActiveStateName = PlayMakerFSM__get_ActiveStateName((PlayMakerFSM_o *)updated, 0LL);
            if ( System_String__op_Equality(ActiveStateName, (System_String_o *)StringLiteral_3265/*"CAPTER WAIT"*/, 0LL) )
            {
              if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
              if ( !byte_4AFC38D )
              {
                sub_1BC3008(&TerminalSceneComponent_TypeInfo, v102);
                byte_4AFC38D = 1;
              }
              updated = (__int64)TerminalSceneComponent_TypeInfo;
              if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
                updated = (__int64)TerminalSceneComponent_TypeInfo;
              }
              v233 = **(_QWORD **)(updated + 184);
              if ( !v233 )
                goto LABEL_1104;
              v234 = *(_QWORD *)(v233 + 256);
              if ( !v234 )
                goto LABEL_1104;
              v235 = *(QuestBoardListViewManager_o **)(v234 + 304);
              updated = (__int64)QuestAfterAction_StateMain___c_TypeInfo;
              if ( !QuestAfterAction_StateMain___c_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(QuestAfterAction_StateMain___c_TypeInfo);
                updated = (__int64)QuestAfterAction_StateMain___c_TypeInfo;
              }
              v236 = *(System_Action_o **)(*(_QWORD *)(updated + 184) + 8LL);
              if ( !v236 )
              {
                if ( !*(_DWORD *)(updated + 224) )
                {
                  j_il2cpp_runtime_class_init_0(updated);
                  updated = (__int64)QuestAfterAction_StateMain___c_TypeInfo;
                }
                v237 = **(Il2CppObject ***)(updated + 184);
                v236 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
                System_Action___ctor(v236, v237, Method_QuestAfterAction_StateMain___c__UpdateAnim_b__16_22__, 0LL);
                static_fields = QuestAfterAction_StateMain___c_TypeInfo->static_fields;
                static_fields->__9__16_22 = v236;
                sub_1BC2FAC((CGThumbnailListItem_o *)&static_fields->__9__16_22, (int32_t)v236, v239, v240);
              }
              if ( !v235 )
                goto LABEL_1104;
              QuestBoardListViewManager__SetMode(v235, 4, v236, 0, 0, 0, 0LL);
              if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
              if ( !byte_4AFC38D )
              {
                sub_1BC3008(&TerminalSceneComponent_TypeInfo, v102);
                byte_4AFC38D = 1;
              }
              v241 = TerminalSceneComponent_TypeInfo;
              if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
                v241 = TerminalSceneComponent_TypeInfo;
              }
              updated = (__int64)v241->static_fields->mInstance;
              if ( !updated )
                goto LABEL_1104;
              TerminalSceneComponent__CallQuestInformationClose((TerminalSceneComponent_o *)updated, 0LL);
              PlayMakerFSM__SendEvent(v231, (System_String_o *)StringLiteral_19677/*"gevINFOBAR_BACK"*/, 0LL);
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
          v162 = sub_1BC3254(QuestAfterAction_StateMain___c__DisplayClass16_1_TypeInfo);
          QuestAfterAction_StateMain___c__DisplayClass16_1___ctor(
            (QuestAfterAction_StateMain___c__DisplayClass16_1_o *)v162,
            0LL);
          if ( !v162 )
            goto LABEL_1104;
          *(_QWORD *)(v162 + 24) = v100;
          sub_1BC2FAC((CGThumbnailListItem_o *)(v162 + 24), v100, v163, v164);
          v165 = *(_QWORD *)(v162 + 24);
          if ( !v165 )
            goto LABEL_1104;
          v166 = *(QuestAfterAction_o **)(v165 + 24);
          updated = System_Int32__Parse(v111->fields.param, 0LL);
          if ( !v166 )
            goto LABEL_1104;
          v167 = QuestAfterAction__GetMapComponent_object_(
                   v166,
                   0,
                   updated,
                   this,
                   (const MethodInfo_30976C8 *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
          *(_QWORD *)(v162 + 16) = v167;
          sub_1BC2FAC((CGThumbnailListItem_o *)(v162 + 16), (int32_t)v167, v168, v169);
          v170 = *(UnityEngine_Object_o **)(v162 + 16);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Equality(v170, 0LL, 0LL) )
            return;
          v171 = *(SrcSpotBasePrefab_o **)(v162 + 16);
          v172 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
          System_Action___ctor(
            v172,
            (Il2CppObject *)v162,
            Method_QuestAfterAction_StateMain___c__DisplayClass16_1__UpdateAnim_b__0__,
            0LL);
          if ( !v171 )
            goto LABEL_1104;
          v173 = 2;
          goto LABEL_492;
        case 'e':
          v359 = sub_1BC3254(QuestAfterAction_StateMain___c__DisplayClass16_2_TypeInfo);
          QuestAfterAction_StateMain___c__DisplayClass16_2___ctor(
            (QuestAfterAction_StateMain___c__DisplayClass16_2_o *)v359,
            0LL);
          if ( !v359 )
            goto LABEL_1104;
          *(_QWORD *)(v359 + 24) = v100;
          sub_1BC2FAC((CGThumbnailListItem_o *)(v359 + 24), v100, v360, v361);
          v362 = *(_QWORD *)(v359 + 24);
          if ( !v362 )
            goto LABEL_1104;
          v363 = *(QuestAfterAction_o **)(v362 + 24);
          updated = System_Int32__Parse(v111->fields.param, 0LL);
          if ( !v363 )
            goto LABEL_1104;
          v364 = QuestAfterAction__GetMapComponent_object_(
                   v363,
                   0,
                   updated,
                   this,
                   (const MethodInfo_30976C8 *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
          *(_QWORD *)(v359 + 16) = v364;
          sub_1BC2FAC((CGThumbnailListItem_o *)(v359 + 16), (int32_t)v364, v365, v366);
          v367 = *(UnityEngine_Object_o **)(v359 + 16);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Equality(v367, 0LL, 0LL) )
            return;
          v171 = *(SrcSpotBasePrefab_o **)(v359 + 16);
          v172 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
          System_Action___ctor(
            v172,
            (Il2CppObject *)v359,
            Method_QuestAfterAction_StateMain___c__DisplayClass16_2__UpdateAnim_b__1__,
            0LL);
          if ( !v171 )
            goto LABEL_1104;
          v173 = 3;
LABEL_492:
          SrcSpotBasePrefab__SetState(v171, v173, v172, 0LL);
          return;
        case 'f':
          v368 = sub_1BC3254(QuestAfterAction_StateMain___c__DisplayClass16_3_TypeInfo);
          QuestAfterAction_StateMain___c__DisplayClass16_3___ctor(
            (QuestAfterAction_StateMain___c__DisplayClass16_3_o *)v368,
            0LL);
          if ( !v368 )
            goto LABEL_1104;
          *(_QWORD *)(v368 + 24) = v100;
          v371 = v368 + 24;
          sub_1BC2FAC((CGThumbnailListItem_o *)(v368 + 24), v100, v369, v370);
          if ( !*(_QWORD *)(v368 + 24) )
            goto LABEL_1104;
          v372 = *(QuestAfterAction_o **)(*(_QWORD *)(v368 + 24) + 24LL);
          updated = System_Int32__Parse(v111->fields.param, 0LL);
          if ( !v372 )
            goto LABEL_1104;
          v373 = QuestAfterAction__GetMapComponent_object_(
                   v372,
                   0,
                   updated,
                   this,
                   (const MethodInfo_30976C8 *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
          *(_QWORD *)(v368 + 16) = v373;
          v374 = (__int64 *)(v368 + 16);
          sub_1BC2FAC((CGThumbnailListItem_o *)(v368 + 16), (int32_t)v373, v375, v376);
          v377 = *(UnityEngine_Object_o **)(v368 + 16);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Equality(v377, 0LL, 0LL) )
            return;
          v378 = *(SrcSpotBasePrefab_o **)(v368 + 16);
          v379 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
          System_Action___ctor(
            v379,
            (Il2CppObject *)v368,
            Method_QuestAfterAction_StateMain___c__DisplayClass16_3__UpdateAnim_b__2__,
            0LL);
          if ( !v378 )
            goto LABEL_1104;
          SrcSpotBasePrefab__SetState(v378, 4, v379, 0LL);
          if ( !*(_QWORD *)v371 )
            goto LABEL_1104;
          updated = *(_QWORD *)(*(_QWORD *)v371 + 24LL);
          if ( !updated )
            goto LABEL_1104;
          v382 = *v374;
          *(_QWORD *)(updated + 184) = *v374;
          v383 = (CGThumbnailListItem_o *)(updated + 184);
          goto LABEL_514;
        case 'g':
          updated = (__int64)v111->fields.param;
          if ( !updated )
            goto LABEL_1104;
          updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
          if ( !updated )
            goto LABEL_1104;
          v384 = updated;
          if ( *(int *)(updated + 24) <= 1 )
            goto LABEL_999;
          v385 = *v105;
          updated = System_Int32__Parse(*(System_String_o **)(updated + 32), 0LL);
          if ( !v385 )
            goto LABEL_1104;
          v386 = QuestAfterAction__GetMapComponent_object_(
                   v385,
                   0,
                   updated,
                   this,
                   (const MethodInfo_30976C8 *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          updated = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v386, 0LL, 0LL);
          if ( (updated & 1) != 0 )
            return;
          if ( *(_DWORD *)(v384 + 24) <= 1u )
            goto LABEL_1105;
          updated = System_Int32__Parse(*(System_String_o **)(v384 + 40), 0LL);
          if ( !v386 )
            goto LABEL_1104;
          LODWORD(v386[14].klass) = updated;
          v387 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
          System_Action___ctor(v387, (Il2CppObject *)this, (intptr_t)this->klass->vtable._15_onEnd.methodPtr, 0LL);
          SrcSpotBasePrefab__SetState((SrcSpotBasePrefab_o *)v386, 5, v387, 0LL);
          updated = (__int64)*v105;
          if ( !*v105 )
            goto LABEL_1104;
          *(_QWORD *)(updated + 184) = v386;
          v383 = (CGThumbnailListItem_o *)(updated + 184);
          LODWORD(v382) = (_DWORD)v386;
LABEL_514:
          sub_1BC2FAC(v383, v382, v380, v381);
          return;
        case 'h':
        case 'i':
        case 'j':
        case 'k':
        case 'l':
        case 'm':
          return;
        case 'n':
          v388 = *v105;
          updated = System_Int32__Parse(v111->fields.param, 0LL);
          if ( !v388 )
            goto LABEL_1104;
          v389 = QuestAfterAction__GetMapComponent_object_(
                   v388,
                   0,
                   updated,
                   this,
                   (const MethodInfo_30976C8 *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          updated = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v389, 0LL, 0LL);
          if ( (updated & 1) != 0 )
            return;
          if ( !v389 )
            goto LABEL_1104;
          SrcSpotBasePrefab__SetQaaScaleAnimQuick((SrcSpotBasePrefab_o *)v389, 0, 0LL);
          v390 = v389[14].monitor;
          if ( !v390 )
            goto LABEL_1104;
          v390[5] = 0;
          v391 = (SrcSpotBasePrefab_o *)v389;
          v392 = 0;
          goto LABEL_537;
        case 'o':
          v393 = *v105;
          updated = System_Int32__Parse(v111->fields.param, 0LL);
          if ( !v393 )
            goto LABEL_1104;
          v394 = QuestAfterAction__GetMapComponent_object_(
                   v393,
                   0,
                   updated,
                   this,
                   (const MethodInfo_30976C8 *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          updated = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v394, 0LL, 0LL);
          if ( (updated & 1) != 0 )
            return;
          if ( !v394 )
            goto LABEL_1104;
          SrcSpotBasePrefab__SetQaaScaleAnimQuick((SrcSpotBasePrefab_o *)v394, 1, 0LL);
          SrcSpotBasePrefab__SetQaaColorAnimQuick((SrcSpotBasePrefab_o *)v394, 0, 0LL);
          v395 = v394[14].monitor;
          if ( !v395 )
            goto LABEL_1104;
          v395[5] = 2;
          goto LABEL_536;
        case 'p':
          v396 = *v105;
          updated = System_Int32__Parse(v111->fields.param, 0LL);
          if ( !v396 )
            goto LABEL_1104;
          v394 = QuestAfterAction__GetMapComponent_object_(
                   v396,
                   0,
                   updated,
                   this,
                   (const MethodInfo_30976C8 *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          updated = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v394, 0LL, 0LL);
          if ( (updated & 1) != 0 )
            return;
          if ( !v394 )
            goto LABEL_1104;
          SrcSpotBasePrefab__SetQaaScaleAnimQuick((SrcSpotBasePrefab_o *)v394, 1, 0LL);
          SrcSpotBasePrefab__SetQaaColorAnimQuick((SrcSpotBasePrefab_o *)v394, 1, 0LL);
          v397 = v394[14].monitor;
          if ( !v397 )
            goto LABEL_1104;
          v397[5] = 1;
LABEL_536:
          v392 = 1;
          v391 = (SrcSpotBasePrefab_o *)v394;
LABEL_537:
          SrcSpotBasePrefab__SetTouchType(v391, v392, 0LL);
          goto LABEL_18;
        case 'q':
          updated = (__int64)v111->fields.param;
          if ( !updated )
            goto LABEL_1104;
          updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
          if ( !updated )
            goto LABEL_1104;
          v398 = updated;
          if ( *(int *)(updated + 24) <= 1 )
            goto LABEL_999;
          v399 = *v105;
          updated = System_Int32__Parse(*(System_String_o **)(updated + 32), 0LL);
          if ( !v399 )
            goto LABEL_1104;
          v400 = QuestAfterAction__GetMapComponent_object_(
                   v399,
                   0,
                   updated,
                   this,
                   (const MethodInfo_30976C8 *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          updated = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v400, 0LL, 0LL);
          if ( (updated & 1) != 0 )
            return;
          if ( *(_DWORD *)(v398 + 24) <= 1u )
            goto LABEL_1105;
          updated = System_Int32__Parse(*(System_String_o **)(v398 + 40), 0LL);
          if ( !v400 )
            goto LABEL_1104;
          LODWORD(v400[14].klass) = updated;
          SrcSpotBasePrefab__UpdateDisp((SrcSpotBasePrefab_o *)v400, 1, 0LL);
          goto LABEL_18;
        default:
          switch ( id )
          {
            case 200:
              if ( this->fields.IsMapModel )
              {
                v174 = sub_1BC3254(QuestAfterAction_StateMain___c__DisplayClass16_4_TypeInfo);
                QuestAfterAction_StateMain___c__DisplayClass16_4___ctor(
                  (QuestAfterAction_StateMain___c__DisplayClass16_4_o *)v174,
                  0LL);
                if ( !v174 )
                  goto LABEL_1104;
                *(_QWORD *)(v174 + 24) = v100;
                sub_1BC2FAC((CGThumbnailListItem_o *)(v174 + 24), v100, v175, v176);
                v177 = *(_QWORD *)(v174 + 24);
                if ( !v177 )
                  goto LABEL_1104;
                v178 = *(QuestAfterAction_o **)(v177 + 24);
                updated = System_Int32__Parse(v111->fields.param, 0LL);
                if ( !v178 )
                  goto LABEL_1104;
                v179 = QuestAfterAction__GetMapComponent_object_(
                         v178,
                         1,
                         updated,
                         this,
                         (const MethodInfo_30976C8 *)Method_QuestAfterAction_GetMapComponent_ModelLineComponent___);
                *(_QWORD *)(v174 + 16) = v179;
                sub_1BC2FAC((CGThumbnailListItem_o *)(v174 + 16), (int32_t)v179, v180, v181);
                v182 = *(UnityEngine_Object_o **)(v174 + 16);
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                if ( !UnityEngine_Object__op_Equality(v182, 0LL, 0LL) )
                {
                  v183 = *(ModelLineComponent_o **)(v174 + 16);
                  v184 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
                  System_Action___ctor(
                    v184,
                    (Il2CppObject *)v174,
                    Method_QuestAfterAction_StateMain___c__DisplayClass16_4__UpdateAnim_b__3__,
                    0LL);
                  if ( !v183 )
                    goto LABEL_1104;
                  v186 = 2;
                  goto LABEL_752;
                }
              }
              else
              {
                v614 = sub_1BC3254(QuestAfterAction_StateMain___c__DisplayClass16_5_TypeInfo);
                QuestAfterAction_StateMain___c__DisplayClass16_5___ctor(
                  (QuestAfterAction_StateMain___c__DisplayClass16_5_o *)v614,
                  0LL);
                if ( !v614 )
                  goto LABEL_1104;
                *(_QWORD *)(v614 + 24) = v100;
                sub_1BC2FAC((CGThumbnailListItem_o *)(v614 + 24), v100, v615, v616);
                v617 = *(_QWORD *)(v614 + 24);
                if ( !v617 )
                  goto LABEL_1104;
                v618 = *(QuestAfterAction_o **)(v617 + 24);
                updated = System_Int32__Parse(v111->fields.param, 0LL);
                if ( !v618 )
                  goto LABEL_1104;
                v619 = QuestAfterAction__GetMapComponent_object_(
                         v618,
                         1,
                         updated,
                         this,
                         (const MethodInfo_30976C8 *)Method_QuestAfterAction_GetMapComponent_srcLineSprite___);
                *(_QWORD *)(v614 + 16) = v619;
                sub_1BC2FAC((CGThumbnailListItem_o *)(v614 + 16), (int32_t)v619, v620, v621);
                v622 = *(UnityEngine_Object_o **)(v614 + 16);
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                if ( !UnityEngine_Object__op_Equality(v622, 0LL, 0LL) )
                {
                  v623 = *(srcLineSprite_o **)(v614 + 16);
                  v624 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
                  System_Action___ctor(
                    v624,
                    (Il2CppObject *)v614,
                    Method_QuestAfterAction_StateMain___c__DisplayClass16_5__UpdateAnim_b__4__,
                    0LL);
                  if ( !v623 )
                    goto LABEL_1104;
                  v625 = 2;
                  goto LABEL_955;
                }
              }
              return;
            case 201:
              if ( this->fields.IsMapModel )
              {
                v511 = sub_1BC3254(QuestAfterAction_StateMain___c__DisplayClass16_6_TypeInfo);
                QuestAfterAction_StateMain___c__DisplayClass16_6___ctor(
                  (QuestAfterAction_StateMain___c__DisplayClass16_6_o *)v511,
                  0LL);
                if ( !v511 )
                  goto LABEL_1104;
                *(_QWORD *)(v511 + 24) = v100;
                sub_1BC2FAC((CGThumbnailListItem_o *)(v511 + 24), v100, v512, v513);
                v514 = *(_QWORD *)(v511 + 24);
                if ( !v514 )
                  goto LABEL_1104;
                v515 = *(QuestAfterAction_o **)(v514 + 24);
                updated = System_Int32__Parse(v111->fields.param, 0LL);
                if ( !v515 )
                  goto LABEL_1104;
                v516 = QuestAfterAction__GetMapComponent_object_(
                         v515,
                         1,
                         updated,
                         this,
                         (const MethodInfo_30976C8 *)Method_QuestAfterAction_GetMapComponent_ModelLineComponent___);
                *(_QWORD *)(v511 + 16) = v516;
                sub_1BC2FAC((CGThumbnailListItem_o *)(v511 + 16), (int32_t)v516, v517, v518);
                v519 = *(UnityEngine_Object_o **)(v511 + 16);
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                if ( !UnityEngine_Object__op_Equality(v519, 0LL, 0LL) )
                {
                  v183 = *(ModelLineComponent_o **)(v511 + 16);
                  v184 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
                  System_Action___ctor(
                    v184,
                    (Il2CppObject *)v511,
                    Method_QuestAfterAction_StateMain___c__DisplayClass16_6__UpdateAnim_b__5__,
                    0LL);
                  if ( !v183 )
                    goto LABEL_1104;
                  v186 = 3;
                  goto LABEL_752;
                }
              }
              else
              {
                v626 = sub_1BC3254(QuestAfterAction_StateMain___c__DisplayClass16_7_TypeInfo);
                QuestAfterAction_StateMain___c__DisplayClass16_7___ctor(
                  (QuestAfterAction_StateMain___c__DisplayClass16_7_o *)v626,
                  0LL);
                if ( !v626 )
                  goto LABEL_1104;
                *(_QWORD *)(v626 + 24) = v100;
                sub_1BC2FAC((CGThumbnailListItem_o *)(v626 + 24), v100, v627, v628);
                v629 = *(_QWORD *)(v626 + 24);
                if ( !v629 )
                  goto LABEL_1104;
                v630 = *(QuestAfterAction_o **)(v629 + 24);
                updated = System_Int32__Parse(v111->fields.param, 0LL);
                if ( !v630 )
                  goto LABEL_1104;
                v631 = QuestAfterAction__GetMapComponent_object_(
                         v630,
                         1,
                         updated,
                         this,
                         (const MethodInfo_30976C8 *)Method_QuestAfterAction_GetMapComponent_srcLineSprite___);
                *(_QWORD *)(v626 + 16) = v631;
                sub_1BC2FAC((CGThumbnailListItem_o *)(v626 + 16), (int32_t)v631, v632, v633);
                v634 = *(UnityEngine_Object_o **)(v626 + 16);
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                if ( !UnityEngine_Object__op_Equality(v634, 0LL, 0LL) )
                {
                  v623 = *(srcLineSprite_o **)(v626 + 16);
                  v624 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
                  System_Action___ctor(
                    v624,
                    (Il2CppObject *)v626,
                    Method_QuestAfterAction_StateMain___c__DisplayClass16_7__UpdateAnim_b__6__,
                    0LL);
                  if ( !v623 )
                    goto LABEL_1104;
                  v625 = 3;
                  goto LABEL_955;
                }
              }
              return;
            case 202:
              if ( this->fields.IsMapModel )
              {
                v520 = sub_1BC3254(QuestAfterAction_StateMain___c__DisplayClass16_8_TypeInfo);
                QuestAfterAction_StateMain___c__DisplayClass16_8___ctor(
                  (QuestAfterAction_StateMain___c__DisplayClass16_8_o *)v520,
                  0LL);
                if ( !v520 )
                  goto LABEL_1104;
                *(_QWORD *)(v520 + 24) = v100;
                sub_1BC2FAC((CGThumbnailListItem_o *)(v520 + 24), v100, v521, v522);
                v523 = *(_QWORD *)(v520 + 24);
                if ( !v523 )
                  goto LABEL_1104;
                v524 = *(QuestAfterAction_o **)(v523 + 24);
                updated = System_Int32__Parse(v111->fields.param, 0LL);
                if ( !v524 )
                  goto LABEL_1104;
                v525 = QuestAfterAction__GetMapComponent_object_(
                         v524,
                         1,
                         updated,
                         this,
                         (const MethodInfo_30976C8 *)Method_QuestAfterAction_GetMapComponent_ModelLineComponent___);
                *(_QWORD *)(v520 + 16) = v525;
                sub_1BC2FAC((CGThumbnailListItem_o *)(v520 + 16), (int32_t)v525, v526, v527);
                v528 = *(UnityEngine_Object_o **)(v520 + 16);
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                if ( !UnityEngine_Object__op_Equality(v528, 0LL, 0LL) )
                {
                  v183 = *(ModelLineComponent_o **)(v520 + 16);
                  v184 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
                  System_Action___ctor(
                    v184,
                    (Il2CppObject *)v520,
                    Method_QuestAfterAction_StateMain___c__DisplayClass16_8__UpdateAnim_b__7__,
                    0LL);
                  if ( !v183 )
                    goto LABEL_1104;
                  v186 = 4;
LABEL_752:
                  ModelLineComponent__SetState(v183, v186, v184, v185);
                }
              }
              else
              {
                v635 = sub_1BC3254(QuestAfterAction_StateMain___c__DisplayClass16_9_TypeInfo);
                QuestAfterAction_StateMain___c__DisplayClass16_9___ctor(
                  (QuestAfterAction_StateMain___c__DisplayClass16_9_o *)v635,
                  0LL);
                if ( !v635 )
                  goto LABEL_1104;
                *(_QWORD *)(v635 + 24) = v100;
                sub_1BC2FAC((CGThumbnailListItem_o *)(v635 + 24), v100, v636, v637);
                v638 = *(_QWORD *)(v635 + 24);
                if ( !v638 )
                  goto LABEL_1104;
                v639 = *(QuestAfterAction_o **)(v638 + 24);
                updated = System_Int32__Parse(v111->fields.param, 0LL);
                if ( !v639 )
                  goto LABEL_1104;
                v640 = QuestAfterAction__GetMapComponent_object_(
                         v639,
                         1,
                         updated,
                         this,
                         (const MethodInfo_30976C8 *)Method_QuestAfterAction_GetMapComponent_srcLineSprite___);
                *(_QWORD *)(v635 + 16) = v640;
                sub_1BC2FAC((CGThumbnailListItem_o *)(v635 + 16), (int32_t)v640, v641, v642);
                v643 = *(UnityEngine_Object_o **)(v635 + 16);
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                if ( !UnityEngine_Object__op_Equality(v643, 0LL, 0LL) )
                {
                  v623 = *(srcLineSprite_o **)(v635 + 16);
                  v624 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
                  System_Action___ctor(
                    v624,
                    (Il2CppObject *)v635,
                    Method_QuestAfterAction_StateMain___c__DisplayClass16_9__UpdateAnim_b__8__,
                    0LL);
                  if ( !v623 )
                    goto LABEL_1104;
                  v625 = 4;
LABEL_955:
                  srcLineSprite__SetState(v623, v625, v624, 0LL);
                }
              }
              return;
            case 203:
              IsMapModel = this->fields.IsMapModel;
              v530 = *v105;
              updated = System_Int32__Parse(v111->fields.param, 0LL);
              if ( !v530 )
                goto LABEL_1104;
              if ( IsMapModel )
              {
                v531 = (UnityEngine_Object_o *)QuestAfterAction__GetMapComponent_object_(
                                                 v530,
                                                 1,
                                                 updated,
                                                 this,
                                                 (const MethodInfo_30976C8 *)Method_QuestAfterAction_GetMapComponent_ModelLineComponent___);
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                updated = UnityEngine_Object__op_Equality(v531, 0LL, 0LL);
                if ( (updated & 1) != 0 )
                  return;
                if ( !v531 )
                  goto LABEL_1104;
                ModelLineComponent__SetQuestAfterActionScaleAnim_35303744((ModelLineComponent_o *)v531, 0, 0.0, v532);
                v533 = v531[3].klass;
                if ( !v533 )
                  goto LABEL_1104;
              }
              else
              {
                v644 = (UnityEngine_Object_o *)QuestAfterAction__GetMapComponent_object_(
                                                 v530,
                                                 1,
                                                 updated,
                                                 this,
                                                 (const MethodInfo_30976C8 *)Method_QuestAfterAction_GetMapComponent_srcLineSprite___);
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                updated = UnityEngine_Object__op_Equality(v644, 0LL, 0LL);
                if ( (updated & 1) != 0 )
                  return;
                if ( !v644 )
                  goto LABEL_1104;
                srcLineSprite__SetQaaScaleAnimQuick((srcLineSprite_o *)v644, 0, 0LL);
                v533 = v644[5].monitor;
                if ( !v533 )
                  goto LABEL_1104;
              }
              goto LABEL_961;
            case 204:
              v534 = this->fields.IsMapModel;
              v535 = *v105;
              updated = System_Int32__Parse(v111->fields.param, 0LL);
              if ( !v535 )
                goto LABEL_1104;
              if ( v534 )
              {
                v536 = (UnityEngine_Object_o *)QuestAfterAction__GetMapComponent_object_(
                                                 v535,
                                                 1,
                                                 updated,
                                                 this,
                                                 (const MethodInfo_30976C8 *)Method_QuestAfterAction_GetMapComponent_ModelLineComponent___);
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                updated = UnityEngine_Object__op_Equality(v536, 0LL, 0LL);
                if ( (updated & 1) != 0 )
                  return;
                if ( !v536 )
                  goto LABEL_1104;
                ModelLineComponent__SetQuestAfterActionScaleAnim_35303744((ModelLineComponent_o *)v536, 1, 0.0, v537);
                ModelLineComponent__SetQuestAfterActionColorAnim_35304220((ModelLineComponent_o *)v536, 0, 0.0, v538);
                v539 = v536[3].klass;
                if ( !v539 )
                  goto LABEL_1104;
              }
              else
              {
                v645 = (UnityEngine_Object_o *)QuestAfterAction__GetMapComponent_object_(
                                                 v535,
                                                 1,
                                                 updated,
                                                 this,
                                                 (const MethodInfo_30976C8 *)Method_QuestAfterAction_GetMapComponent_srcLineSprite___);
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                updated = UnityEngine_Object__op_Equality(v645, 0LL, 0LL);
                if ( (updated & 1) != 0 )
                  return;
                if ( !v645 )
                  goto LABEL_1104;
                srcLineSprite__SetQaaScaleAnimQuick((srcLineSprite_o *)v645, 1, 0LL);
                srcLineSprite__SetQaaColorAnimQuick((srcLineSprite_o *)v645, 0, 0LL);
                v539 = v645[5].monitor;
                if ( !v539 )
                  goto LABEL_1104;
              }
              v646 = 2;
              goto LABEL_974;
            case 205:
              v540 = this->fields.IsMapModel;
              v541 = *v105;
              updated = System_Int32__Parse(v111->fields.param, 0LL);
              if ( !v541 )
                goto LABEL_1104;
              if ( v540 )
              {
                v542 = (UnityEngine_Object_o *)QuestAfterAction__GetMapComponent_object_(
                                                 v541,
                                                 1,
                                                 updated,
                                                 this,
                                                 (const MethodInfo_30976C8 *)Method_QuestAfterAction_GetMapComponent_ModelLineComponent___);
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                updated = UnityEngine_Object__op_Equality(v542, 0LL, 0LL);
                if ( (updated & 1) != 0 )
                  return;
                if ( !v542 )
                  goto LABEL_1104;
                ModelLineComponent__SetQuestAfterActionScaleAnim_35303744((ModelLineComponent_o *)v542, 1, 0.0, v543);
                ModelLineComponent__SetQuestAfterActionColorAnim_35304220((ModelLineComponent_o *)v542, 1, 0.0, v544);
                v539 = v542[3].klass;
                if ( !v539 )
                  goto LABEL_1104;
              }
              else
              {
                v647 = (UnityEngine_Object_o *)QuestAfterAction__GetMapComponent_object_(
                                                 v541,
                                                 1,
                                                 updated,
                                                 this,
                                                 (const MethodInfo_30976C8 *)Method_QuestAfterAction_GetMapComponent_srcLineSprite___);
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                updated = UnityEngine_Object__op_Equality(v647, 0LL, 0LL);
                if ( (updated & 1) != 0 )
                  return;
                if ( !v647 )
                  goto LABEL_1104;
                srcLineSprite__SetQaaScaleAnimQuick((srcLineSprite_o *)v647, 1, 0LL);
                srcLineSprite__SetQaaColorAnimQuick((srcLineSprite_o *)v647, 1, 0LL);
                v539 = v647[5].monitor;
                if ( !v539 )
                  goto LABEL_1104;
              }
              v646 = 1;
LABEL_974:
              v539[4] = v646;
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
        updated = (__int64)v111->fields.param;
        if ( !updated )
          goto LABEL_1104;
        updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
        if ( !updated )
          goto LABEL_1104;
        v145 = *(_QWORD *)(updated + 24);
        v146 = updated;
        if ( (int)v145 <= 0 )
          break;
        if ( (int)v145 > 2 )
        {
          v545 = System_Single__Parse(*(System_String_o **)(updated + 48), 0LL);
          v145 = *(_QWORD *)(v146 + 24);
          v147 = v545 * 0.001;
        }
        else
        {
          v147 = 0.5;
        }
        if ( (int)v145 >= 2 )
        {
          updated = System_Int32__Parse(*(System_String_o **)(v146 + 40), 0LL);
          v145 = *(_QWORD *)(v146 + 24);
          v259 = updated;
        }
        else
        {
          v259 = 15;
        }
        if ( !(_DWORD)v145 )
          goto LABEL_1105;
        v548 = *v105;
        updated = System_Int32__Parse(*(System_String_o **)(v146 + 32), 0LL);
        if ( !v548 )
          goto LABEL_1104;
        v550 = (UnityEngine_Object_o *)QuestAfterAction__GetMapGameObject(v548, 0, updated, this, v549);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Equality(v550, 0LL, 0LL) )
          return;
        v731 = GameObjectExtensions__GetLocalPosition((UnityEngine_GameObject_o *)v550, 0LL);
        v551 = v731.fields.x;
        v552 = v731.fields.y;
        v553 = v731.fields.z;
        if ( !this->fields.IsMapModel )
          goto LABEL_802;
        if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        if ( !byte_4AFC38D )
        {
          sub_1BC3008(&TerminalSceneComponent_TypeInfo, v102);
          byte_4AFC38D = 1;
        }
        updated = (__int64)TerminalSceneComponent_TypeInfo;
        if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          updated = (__int64)TerminalSceneComponent_TypeInfo;
        }
        v554 = **(_QWORD **)(updated + 184);
        if ( !v554 )
          goto LABEL_1104;
        updated = *(_QWORD *)(v554 + 264);
        if ( !updated )
          goto LABEL_1104;
        v732.fields.x = v551;
        v732.fields.y = v552;
        v732.fields.z = v553;
        v733 = ScrTerminalMap__ConvertLocalToScreenPosition((ScrTerminalMap_o *)updated, v732, 0LL);
        v551 = v733.fields.x;
        v552 = v733.fields.y;
        v553 = v733.fields.z;
LABEL_802:
        if ( !FSUtility_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
        updated = FSUtility__IsUnderVista(0LL);
        if ( (updated & 1) != 0 )
          goto LABEL_1023;
        if ( !*(_DWORD *)(v146 + 24) )
          goto LABEL_1105;
        v555 = *(System_String_o **)(v146 + 32);
        updated = System_String__op_Equality(v555, (System_String_o *)StringLiteral_1298/*"10703"*/, 0LL);
        if ( (updated & 1) != 0 )
        {
          v552 = v552 + -50.0;
        }
        else
        {
          updated = System_String__op_Equality(v555, (System_String_o *)StringLiteral_1371/*"30101"*/, 0LL);
          if ( (updated & 1) != 0 )
            v552 = v552 + -50.0;
        }
LABEL_1023:
        v570 = *(_DWORD *)(v146 + 24);
        if ( v111->fields.id == 305 )
        {
LABEL_1024:
          if ( v570 < 4 )
            goto LABEL_1025;
          if ( v570 == 4 )
          {
            if ( !*v105 )
              goto LABEL_1104;
            mMapCamera = (*v105)->fields.mMapCamera;
          }
          else
          {
            updated = System_Int32__Parse(*(System_String_o **)(v146 + 64), 0LL);
            if ( !*v105 )
              goto LABEL_1104;
            mMapCamera = (*v105)->fields.mMapCamera;
            if ( (int)updated >= 1 )
            {
              *(_QWORD *)&v719.fields.hasValue = &v709;
              v674 = v551;
              v675 = v552;
              *(_QWORD *)&v719.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
              v676 = v553;
              *(_QWORD *)&v709.fields.hasValue = 0LL;
              *(_QWORD *)&v709.fields.value.fields.y = 0LL;
LABEL_1084:
              System_Nullable_Vector3____ctor(v719, *(UnityEngine_Vector3_o *)&v674, v110);
              if ( *(_DWORD *)(v146 + 24) <= 3u )
                goto LABEL_1105;
              v697 = *(System_String_o **)(v146 + 56);
LABEL_1086:
              v698 = System_Single__Parse(v697, 0LL);
              p_size = (System_Nullable_float__o)&size;
              size = 0LL;
              System_Nullable_float____ctor(
                p_size,
                v698,
                (const MethodInfo_37C22BC *)Method_System_Nullable_float___ctor__);
              if ( !mMapCamera )
                goto LABEL_1104;
              v717 = size;
              MapCamera__StartAutoWork(mMapCamera, v147, v709, v717, v259, 0LL, 0LL);
              break;
            }
          }
          *(_QWORD *)&v720.fields.hasValue = &v709;
          v677 = v551;
          v678 = v552;
          *(_QWORD *)&v720.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
          v679 = v553;
          *(_QWORD *)&v709.fields.hasValue = 0LL;
          *(_QWORD *)&v709.fields.value.fields.y = 0LL;
LABEL_1089:
          System_Nullable_Vector3____ctor(v720, *(UnityEngine_Vector3_o *)&v677, v110);
          if ( *(_DWORD *)(v146 + 24) <= 3u )
            goto LABEL_1105;
          v699 = *(System_String_o **)(v146 + 56);
LABEL_1091:
          v700 = System_Single__Parse(v699, 0LL);
          v715 = (System_Nullable_float__o)&size;
          size = 0LL;
          System_Nullable_float____ctor(v715, v700, (const MethodInfo_37C22BC *)Method_System_Nullable_float___ctor__);
          v701 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
          System_Action___ctor(v701, (Il2CppObject *)this, (intptr_t)this->klass->vtable._15_onEnd.methodPtr, 0LL);
          if ( !mMapCamera )
            goto LABEL_1104;
          v724 = v709;
          v718 = size;
          v702 = mMapCamera;
          v703 = v147;
          v704 = v259;
          goto LABEL_1093;
        }
LABEL_843:
        if ( v570 < 4 )
        {
LABEL_1025:
          if ( !*v105 )
            goto LABEL_1104;
          v572 = (*v105)->fields.mMapCamera;
          goto LABEL_1027;
        }
        updated = System_Int32__Parse(*(System_String_o **)(v146 + 56), 0LL);
        v571 = *v105;
        if ( !*v105 )
          goto LABEL_1104;
        v572 = v571->fields.mMapCamera;
        if ( (int)updated < 1 )
        {
LABEL_1027:
          v352 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
          System_Action___ctor(v352, (Il2CppObject *)this, (intptr_t)this->klass->vtable._15_onEnd.methodPtr, 0LL);
          if ( !v572 )
            goto LABEL_1104;
          v353 = v572;
          v354 = v551;
          v355 = v552;
          v356 = v553;
          goto LABEL_1046;
        }
        if ( !v572 )
          goto LABEL_1104;
        v573 = v571->fields.mMapCamera;
        v574 = v551;
        v575 = v552;
        v576 = v553;
        goto LABEL_1062;
      case 301:
      case 306:
        updated = (__int64)v111->fields.param;
        if ( !updated )
          goto LABEL_1104;
        updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
        if ( !updated )
          goto LABEL_1104;
        v255 = *(_QWORD *)(updated + 24);
        v146 = updated;
        if ( (int)v255 <= 0 )
          break;
        if ( (int)v255 > 2 )
        {
          v546 = System_Single__Parse(*(System_String_o **)(updated + 48), 0LL);
          v255 = *(_QWORD *)(v146 + 24);
          v147 = v546 * 0.001;
        }
        else
        {
          v147 = 0.5;
        }
        if ( (int)v255 >= 2 )
        {
          updated = System_Int32__Parse(*(System_String_o **)(v146 + 40), 0LL);
          v255 = *(_QWORD *)(v146 + 24);
          v259 = updated;
        }
        else
        {
          v259 = 15;
        }
        if ( !(_DWORD)v255 )
          goto LABEL_1105;
        v556 = *v105;
        updated = System_Int32__Parse(*(System_String_o **)(v146 + 32), 0LL);
        if ( !v556 )
          goto LABEL_1104;
        v558 = (UnityEngine_Object_o *)QuestAfterAction__GetMapGameObject(v556, 1, updated, this, v557);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        updated = UnityEngine_Object__op_Equality(v558, 0LL, 0LL);
        if ( (updated & 1) != 0 )
          return;
        if ( this->fields.IsMapModel )
        {
          if ( !v558 )
            goto LABEL_1104;
          updated = (__int64)UnityEngine_GameObject__GetComponent_object_(
                               (UnityEngine_GameObject_o *)v558,
                               (const MethodInfo_3055998 *)Method_UnityEngine_GameObject_GetComponent_ModelLineComponent___);
          if ( !updated )
            goto LABEL_1104;
          Position = GameObjectExtensions__GetPosition((UnityEngine_GameObject_o *)*(_QWORD *)(updated + 32), 0LL);
          v559 = Position.fields.x;
          v560 = Position.fields.y;
          v561 = Position.fields.z;
          if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          if ( !byte_4AFC38D )
          {
            sub_1BC3008(&TerminalSceneComponent_TypeInfo, v102);
            byte_4AFC38D = 1;
          }
          updated = (__int64)TerminalSceneComponent_TypeInfo;
          if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            updated = (__int64)TerminalSceneComponent_TypeInfo;
          }
          v562 = **(_QWORD **)(updated + 184);
          if ( !v562 )
            goto LABEL_1104;
          updated = *(_QWORD *)(v562 + 264);
          if ( !updated )
            goto LABEL_1104;
          v735.fields.x = v559;
          v735.fields.y = v560;
          v735.fields.z = v561;
          *(UnityEngine_Vector3_o *)&v563 = ScrTerminalMap__ConvertWorldToScreenPosition(
                                              (ScrTerminalMap_o *)updated,
                                              v735,
                                              0LL);
        }
        else
        {
          *(UnityEngine_Vector3_o *)&v563 = GameObjectExtensions__GetLocalPosition(
                                              (UnityEngine_GameObject_o *)v558,
                                              0LL);
        }
        v648 = v563;
        v649 = v564;
        v650 = v565;
        if ( !FSUtility_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
        updated = FSUtility__IsUnderVista(0LL);
        if ( (updated & 1) != 0 )
          goto LABEL_1035;
        if ( !*(_DWORD *)(v146 + 24) )
          goto LABEL_1105;
        v651 = *(System_String_o **)(v146 + 32);
        updated = System_String__op_Equality(v651, (System_String_o *)StringLiteral_1298/*"10703"*/, 0LL);
        if ( (updated & 1) != 0 )
        {
          v649 = v649 + -95.0;
        }
        else
        {
          updated = System_String__op_Equality(v651, (System_String_o *)StringLiteral_1372/*"30102"*/, 0LL);
          if ( (updated & 1) != 0 )
            v649 = v649 + 45.0;
        }
LABEL_1035:
        v672 = *(_DWORD *)(v146 + 24);
        if ( v111->fields.id == 306 )
        {
          if ( v672 >= 4 )
          {
            if ( v672 == 4 )
            {
              if ( !*v105 )
                goto LABEL_1104;
              mMapCamera = (*v105)->fields.mMapCamera;
            }
            else
            {
              updated = System_Int32__Parse(*(System_String_o **)(v146 + 64), 0LL);
              if ( !*v105 )
                goto LABEL_1104;
              mMapCamera = (*v105)->fields.mMapCamera;
              if ( (int)updated >= 1 )
              {
                *(_QWORD *)&v709.fields.hasValue = 0LL;
                *(_QWORD *)&v709.fields.value.fields.y = 0LL;
                *(_QWORD *)&v719.fields.hasValue = &v709;
                v674 = v648;
                *(_QWORD *)&v719.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
                v675 = v649;
                v676 = v650;
                goto LABEL_1084;
              }
            }
            v709 = (System_Nullable_Vector3__o)0LL;
            *(_QWORD *)&v720.fields.hasValue = &v709;
            v677 = v648;
            *(_QWORD *)&v720.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
            v678 = v649;
            v679 = v650;
            goto LABEL_1089;
          }
          goto LABEL_1042;
        }
        if ( v672 < 4 )
        {
LABEL_1042:
          if ( !*v105 )
            goto LABEL_1104;
          v673 = (*v105)->fields.mMapCamera;
LABEL_1044:
          v352 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
          System_Action___ctor(v352, (Il2CppObject *)this, (intptr_t)this->klass->vtable._15_onEnd.methodPtr, 0LL);
          if ( !v673 )
            goto LABEL_1104;
          v353 = v673;
          v354 = v648;
          v355 = v649;
          v356 = v650;
          goto LABEL_1046;
        }
        updated = System_Int32__Parse(*(System_String_o **)(v146 + 56), 0LL);
        v680 = *v105;
        if ( !*v105 )
          goto LABEL_1104;
        v673 = v680->fields.mMapCamera;
        if ( (int)updated < 1 )
          goto LABEL_1044;
        if ( !v673 )
          goto LABEL_1104;
        v573 = v680->fields.mMapCamera;
        v574 = v648;
        v575 = v649;
        v576 = v650;
        goto LABEL_1062;
      case 302:
      case 307:
        updated = (__int64)v111->fields.param;
        if ( !updated )
          goto LABEL_1104;
        updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
        if ( !updated )
          goto LABEL_1104;
        v256 = *(_QWORD *)(updated + 24);
        v146 = updated;
        if ( (int)v256 <= 0 )
          break;
        if ( (int)v256 > 2 )
        {
          v547 = System_Single__Parse(*(System_String_o **)(updated + 48), 0LL);
          v256 = *(_QWORD *)(v146 + 24);
          v147 = v547 * 0.001;
        }
        else
        {
          v147 = 0.5;
        }
        if ( (int)v256 >= 2 )
        {
          updated = System_Int32__Parse(*(System_String_o **)(v146 + 40), 0LL);
          v256 = *(_QWORD *)(v146 + 24);
          v259 = updated;
        }
        else
        {
          v259 = 15;
        }
        if ( !(_DWORD)v256 )
          goto LABEL_1105;
        v566 = *v105;
        updated = System_Int32__Parse(*(System_String_o **)(v146 + 32), 0LL);
        if ( !v566 )
          goto LABEL_1104;
        v568 = (UnityEngine_Object_o *)QuestAfterAction__GetMapGameObject(v566, 2, updated, this, v567);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Equality(v568, 0LL, 0LL) )
          return;
        v736 = GameObjectExtensions__GetLocalPosition((UnityEngine_GameObject_o *)v568, 0LL);
        v551 = v736.fields.x;
        v552 = v736.fields.y;
        v553 = v736.fields.z;
        if ( !this->fields.IsMapModel )
          goto LABEL_842;
        if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        if ( !byte_4AFC38D )
        {
          sub_1BC3008(&TerminalSceneComponent_TypeInfo, v102);
          byte_4AFC38D = 1;
        }
        updated = (__int64)TerminalSceneComponent_TypeInfo;
        if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          updated = (__int64)TerminalSceneComponent_TypeInfo;
        }
        v569 = **(_QWORD **)(updated + 184);
        if ( !v569 )
          goto LABEL_1104;
        updated = *(_QWORD *)(v569 + 264);
        if ( !updated )
          goto LABEL_1104;
        v737.fields.x = v551;
        v737.fields.y = v552;
        v737.fields.z = v553;
        v738 = ScrTerminalMap__ConvertLocalToScreenPosition((ScrTerminalMap_o *)updated, v737, 0LL);
        v551 = v738.fields.x;
        v552 = v738.fields.y;
        v553 = v738.fields.z;
LABEL_842:
        v570 = *(_DWORD *)(v146 + 24);
        if ( v111->fields.id != 307 )
          goto LABEL_843;
        goto LABEL_1024;
      case 303:
      case 308:
        updated = (__int64)v111->fields.param;
        if ( !updated )
          goto LABEL_1104;
        updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
        if ( !updated )
          goto LABEL_1104;
        v257 = updated;
        if ( *(int *)(updated + 24) < 4 )
          break;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_4AFEC4C )
        {
          sub_1BC3008(&TerminalPramsManager_TypeInfo, v102);
          byte_4AFEC4C = 1;
        }
        updated = (__int64)TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          updated = (__int64)TerminalPramsManager_TypeInfo;
        }
        if ( *(_BYTE *)(*(_QWORD *)(updated + 184) + 105LL) )
          break;
        if ( *(_DWORD *)(v257 + 24) <= 2u )
          goto LABEL_1105;
        v258 = System_Single__Parse(*(System_String_o **)(v257 + 48), 0LL) * 0.001;
        v147 = v258 >= 0.0 ? v258 : 0.5;
        if ( *(_DWORD *)(v257 + 24) <= 3u )
          goto LABEL_1105;
        v259 = System_Int32__Parse(*(System_String_o **)(v257 + 56), 0LL);
        if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        if ( !byte_4AFC38D )
        {
          sub_1BC3008(&TerminalSceneComponent_TypeInfo, v102);
          byte_4AFC38D = 1;
        }
        updated = (__int64)TerminalSceneComponent_TypeInfo;
        if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          updated = (__int64)TerminalSceneComponent_TypeInfo;
        }
        v260 = **(_QWORD **)(updated + 184);
        if ( !v260 )
          goto LABEL_1104;
        if ( !*(_DWORD *)(v257 + 24) )
          goto LABEL_1105;
        v261 = *(ScrTerminalMap_o **)(v260 + 264);
        v262 = System_Single__Parse(*(System_String_o **)(v257 + 32), 0LL);
        if ( *(_DWORD *)(v257 + 24) <= 1u )
          goto LABEL_1105;
        v263 = v262;
        v264 = System_Single__Parse(*(System_String_o **)(v257 + 40), 0LL);
        if ( !v261 )
          goto LABEL_1104;
        v725 = ScrTerminalMap__LocalPosFromCoord(v261, v263, v264, 0.0, 0.0, 0LL);
        v266 = *(_DWORD *)(v257 + 24);
        v267 = v725.fields.x;
        v268 = v725.fields.y;
        v269 = v725.fields.z;
        if ( v111->fields.id == 308 )
        {
          if ( v266 >= 5 )
          {
            if ( v266 == 5 )
            {
              if ( !*v105 )
                goto LABEL_1104;
              mMapCamera = (*v105)->fields.mMapCamera;
            }
            else
            {
              updated = System_Int32__Parse(*(System_String_o **)(v257 + 72), 0LL);
              if ( !*v105 )
                goto LABEL_1104;
              mMapCamera = (*v105)->fields.mMapCamera;
              if ( (int)updated >= 1 )
              {
                *(_QWORD *)&v722.fields.hasValue = &v709;
                v740.fields.x = v267;
                v740.fields.y = v268;
                *(_QWORD *)&v722.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
                v740.fields.z = v269;
                v709 = (System_Nullable_Vector3__o)0LL;
                System_Nullable_Vector3____ctor(v722, v740, v265);
                if ( *(_DWORD *)(v257 + 24) <= 4u )
                  goto LABEL_1105;
                v697 = *(System_String_o **)(v257 + 64);
                goto LABEL_1086;
              }
            }
            *(_QWORD *)&v723.fields.hasValue = &v709;
            v741.fields.x = v267;
            v741.fields.y = v268;
            *(_QWORD *)&v723.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
            v741.fields.z = v269;
            v709 = (System_Nullable_Vector3__o)0LL;
            System_Nullable_Vector3____ctor(v723, v741, v265);
            if ( *(_DWORD *)(v257 + 24) <= 4u )
              goto LABEL_1105;
            v699 = *(System_String_o **)(v257 + 64);
            goto LABEL_1091;
          }
          goto LABEL_1005;
        }
        if ( v266 < 5 )
        {
LABEL_1005:
          if ( !*v105 )
            goto LABEL_1104;
          v659 = (*v105)->fields.mMapCamera;
LABEL_1007:
          v352 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
          System_Action___ctor(v352, (Il2CppObject *)this, (intptr_t)this->klass->vtable._15_onEnd.methodPtr, 0LL);
          if ( !v659 )
            goto LABEL_1104;
          v353 = v659;
          v354 = v267;
          v355 = v268;
          v356 = v269;
LABEL_1046:
          v357 = v147;
          v358 = v259;
LABEL_1047:
          MapCamera__StartAutoMove(v353, *(UnityEngine_Vector3_o *)&v354, v357, v358, v352, 0LL);
          return;
        }
        updated = System_Int32__Parse(*(System_String_o **)(v257 + 64), 0LL);
        v681 = *v105;
        if ( !*v105 )
          goto LABEL_1104;
        v659 = v681->fields.mMapCamera;
        if ( (int)updated < 1 )
          goto LABEL_1007;
        if ( !v659 )
          goto LABEL_1104;
        v573 = v681->fields.mMapCamera;
        v574 = v267;
        v575 = v268;
        v576 = v269;
LABEL_1062:
        MapCamera__StartAutoMove(v573, *(UnityEngine_Vector3_o *)&v574, v147, v259, 0LL, 0LL);
        break;
      case 304:
        updated = (__int64)v111->fields.param;
        if ( !updated )
          goto LABEL_1104;
        updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
        if ( !updated )
          goto LABEL_1104;
        v300 = *(_DWORD *)(updated + 24);
        v301 = updated;
        if ( v300 <= 1 )
          break;
        v302 = System_Single__Parse(*(System_String_o **)(updated + 32), 0LL);
        if ( *(_DWORD *)(v301 + 24) <= 1u )
          goto LABEL_1105;
        v303 = v302;
        v304 = System_Single__Parse(*(System_String_o **)(v301 + 40), 0LL);
        if ( !*v105 )
          goto LABEL_1104;
        v305 = (*v105)->fields.mMapCamera;
        v306 = v304 * 0.001;
        if ( v306 >= 0.0 )
          v307 = v306;
        else
          v307 = 0.5;
        if ( v300 < 3 )
        {
          v308 = 5;
        }
        else
        {
          if ( *(_DWORD *)(v301 + 24) <= 2u )
            goto LABEL_1105;
          v308 = System_Int32__Parse(*(System_String_o **)(v301 + 48), 0LL);
        }
        v613 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
        System_Action___ctor(
          v613,
          (Il2CppObject *)v100,
          Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__9__,
          0LL);
        if ( !v305 )
          goto LABEL_1104;
        MapCamera__StartAutoZoom(v305, v303, v307, v308, v613, 0LL);
        return;
      default:
        if ( id == 350 )
        {
          updated = (__int64)v111->fields.param;
          if ( !updated )
            goto LABEL_1104;
          updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
          if ( !updated )
            goto LABEL_1104;
          v250 = updated;
          if ( *(int *)(updated + 24) > 0 )
          {
            v251 = System_Int32__Parse(*(System_String_o **)(updated + 32), 0LL);
            if ( v251 >= 1 )
            {
              v252 = v251;
              v253 = 0.5;
              if ( *(int *)(v250 + 24) > 1 )
              {
                v254 = System_Int32__Parse(*(System_String_o **)(v250 + 40), 0LL);
                if ( *(int *)(v250 + 24) >= 3 )
                  v253 = System_Single__Parse(*(System_String_o **)(v250 + 48), 0LL) * 0.001;
              }
              else
              {
                v254 = 15;
              }
              if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
              if ( !byte_4AFC38D )
              {
                sub_1BC3008(&TerminalSceneComponent_TypeInfo, v102);
                byte_4AFC38D = 1;
              }
              updated = (__int64)TerminalSceneComponent_TypeInfo;
              if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
                updated = (__int64)TerminalSceneComponent_TypeInfo;
              }
              v652 = **(_QWORD **)(updated + 184);
              if ( !v652 )
                goto LABEL_1104;
              v653 = *(ScrTerminalMap_o **)(v652 + 264);
              v654 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
              System_Action___ctor(
                v654,
                (Il2CppObject *)v100,
                Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__10__,
                0LL);
              if ( !v653 )
                goto LABEL_1104;
              ScrTerminalMap__RequestMapMove_36181064(v653, v252, v253, v254, v654, 0LL);
              return;
            }
          }
        }
        else
        {
          if ( (unsigned int)(id - 351) >= 2 )
            return;
          updated = (__int64)v111->fields.param;
          if ( !updated )
            goto LABEL_1104;
          updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
          if ( !updated )
            goto LABEL_1104;
          v332 = updated;
          if ( *(int *)(updated + 24) > 4 )
          {
            v333 = System_Single__Parse(*(System_String_o **)(updated + 32), 0LL);
            if ( *(_DWORD *)(v332 + 24) <= 1u )
              goto LABEL_1105;
            v334 = v333;
            v335 = System_Single__Parse(*(System_String_o **)(v332 + 40), 0LL);
            if ( *(_DWORD *)(v332 + 24) <= 2u )
              goto LABEL_1105;
            v336 = v335;
            v337 = System_Single__Parse(*(System_String_o **)(v332 + 48), 0LL);
            if ( *(_DWORD *)(v332 + 24) <= 3u )
              goto LABEL_1105;
            v338 = v337;
            v339 = System_Single__Parse(*(System_String_o **)(v332 + 56), 0LL);
            if ( *(_DWORD *)(v332 + 24) <= 4u )
              goto LABEL_1105;
            v340 = v339;
            v341 = System_Int32__Parse(*(System_String_o **)(v332 + 64), 0LL);
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            if ( !byte_4AFC38D )
            {
              sub_1BC3008(&TerminalSceneComponent_TypeInfo, v102);
              byte_4AFC38D = 1;
            }
            updated = (__int64)TerminalSceneComponent_TypeInfo;
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
              updated = (__int64)TerminalSceneComponent_TypeInfo;
            }
            v342 = **(_QWORD **)(updated + 184);
            if ( !v342 )
              goto LABEL_1104;
            updated = *(_QWORD *)(v342 + 264);
            if ( !updated )
              goto LABEL_1104;
            v726.fields.y = v336;
            v726.fields.z = v338;
            v343 = v340 * 0.001;
            v726.fields.x = v334;
            *(UnityEngine_Vector3_o *)&v345 = ScrTerminalMap__ConvertLocalToScreenPosition(
                                                (ScrTerminalMap_o *)updated,
                                                v726,
                                                0LL);
            v348 = v345;
            v349 = v346;
            v350 = v347;
            if ( v111->fields.id != 352 || *(int *)(v332 + 24) < 6 )
            {
              if ( !*v105 )
                goto LABEL_1104;
              v351 = (*v105)->fields.mMapCamera;
              v352 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
              System_Action___ctor(
                v352,
                (Il2CppObject *)v100,
                Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__12__,
                0LL);
              if ( !v351 )
                goto LABEL_1104;
              v353 = v351;
              v354 = v348;
              v355 = v349;
              v356 = v350;
              v357 = v343;
              v358 = v341;
              goto LABEL_1047;
            }
            if ( !*v105 )
              goto LABEL_1104;
            v705 = (*v105)->fields.mMapCamera;
            *(_QWORD *)&v721.fields.hasValue = &v709;
            *(_QWORD *)&v721.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
            v709 = (System_Nullable_Vector3__o)0LL;
            System_Nullable_Vector3____ctor(v721, *(UnityEngine_Vector3_o *)&v345, v344);
            if ( *(_DWORD *)(v332 + 24) <= 5u )
              goto LABEL_1105;
            v706 = System_Single__Parse(*(System_String_o **)(v332 + 72), 0LL);
            v716 = (System_Nullable_float__o)&size;
            size = 0LL;
            System_Nullable_float____ctor(v716, v706, (const MethodInfo_37C22BC *)Method_System_Nullable_float___ctor__);
            v701 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
            System_Action___ctor(
              v701,
              (Il2CppObject *)v100,
              Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__11__,
              0LL);
            if ( !v705 )
              goto LABEL_1104;
            v724 = v709;
            v718 = size;
            v702 = v705;
            v703 = v343;
            v704 = v341;
LABEL_1093:
            MapCamera__StartAutoWork(v702, v703, v724, v718, v704, v701, 0LL);
            return;
          }
        }
        break;
    }
LABEL_999:
    ((void (__fastcall *)(QuestAfterAction_StateMain_o *, Il2CppMethodPointer))this->klass->vtable._14_EndAnim.method)(
      this,
      this->klass->vtable._15_onEnd.methodPtr);
    return;
  }
  if ( isQuickUpdate )
  {
LABEL_18:
    ((void (__fastcall *)(QuestAfterAction_StateMain_o *, Il2CppMethodPointer))this->klass->vtable._14_EndAnim.method)(
      this,
      this->klass->vtable._15_onEnd.methodPtr);
LABEL_19:
    ((void (__fastcall *)(QuestAfterAction_StateMain_o *, QuestAfterAction_o *, Il2CppMethodPointer))this->klass->vtable._13_UpdateAnim.method)(
      this,
      *v105,
      this->klass->vtable._14_EndAnim.methodPtr);
  }
}


void __fastcall QuestAfterAction_StateMain__Wait(QuestAfterAction_StateMain_o *this, const MethodInfo *method)
{
  QuestAfterAction_StateMain_c *klass; // x8

  if ( this->fields.waitTime > 0.0
    && (float)(UnityEngine_Time__get_realtimeSinceStartup(0LL) - this->fields.waitStartTime) >= this->fields.waitTime )
  {
    klass = this->klass;
    this->fields.waitTime = 0.0;
    ((void (__fastcall *)(QuestAfterAction_StateMain_o *, Il2CppMethodPointer))klass->vtable._14_EndAnim.method)(
      this,
      klass->vtable._15_onEnd.methodPtr);
  }
}


void __fastcall QuestAfterAction_StateMain__begin(
        QuestAfterAction_StateMain_o *this,
        QuestAfterAction_o *that,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  TerminalSceneComponent_c *screenCollider; // x0
  __int64 v7; // x1
  struct QuestAfterAction_o *v8; // x8
  struct TerminalSceneComponent_o *mInstance; // x8

  if ( (byte_4AFEC3C & 1) == 0 )
  {
    sub_1BC3008(&TerminalSceneComponent_TypeInfo, that);
    byte_4AFEC3C = 1;
  }
  this->fields.that = that;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields, (int32_t)that, (int32_t)method, v3);
  v8 = this->fields.that;
  if ( !v8 )
    goto LABEL_14;
  screenCollider = (TerminalSceneComponent_c *)v8->fields.screenCollider;
  if ( !screenCollider )
    goto LABEL_14;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)screenCollider, 1, 0LL);
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4AFC38D )
  {
    sub_1BC3008(&TerminalSceneComponent_TypeInfo, v7);
    byte_4AFC38D = 1;
  }
  screenCollider = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    screenCollider = TerminalSceneComponent_TypeInfo;
  }
  mInstance = screenCollider->static_fields->mInstance;
  if ( !mInstance || (screenCollider = (TerminalSceneComponent_c *)mInstance->fields.mTerminalMap) == 0LL )
LABEL_14:
    sub_1BC3264(screenCollider, v7);
  this->fields.IsMapModel = ScrTerminalMap__IsMapModel((ScrTerminalMap_o *)screenCollider, 0LL);
}


void __fastcall QuestAfterAction_StateMain__end(
        QuestAfterAction_StateMain_o *this,
        QuestAfterAction_o *that,
        const MethodInfo *method)
{
  ;
}


QuestAfterAction_Command_array *__fastcall QuestAfterAction_StateMain__get_CommandBuf(
        QuestAfterAction_StateMain_o *this,
        const MethodInfo *method)
{
  struct QuestAfterAction_o *that; // x8

  that = this->fields.that;
  if ( !that )
    sub_1BC3264(this, method);
  return that->fields.commandBuf;
}


int32_t __fastcall QuestAfterAction_StateMain__get_CommandIndex(
        QuestAfterAction_StateMain_o *this,
        const MethodInfo *method)
{
  struct QuestAfterAction_o *that; // x8

  that = this->fields.that;
  if ( !that )
    sub_1BC3264(this, method);
  return that->fields.commandIdx;
}


UnityEngine_GameObject_o *__fastcall QuestAfterAction_StateMain__get_SubGimmickRoot(
        QuestAfterAction_StateMain_o *this,
        const MethodInfo *method)
{
  TerminalSceneComponent_c *v2; // x0
  struct TerminalSceneComponent_o *mInstance; // x8
  struct ScrTerminalMap_o *mTerminalMap; // x8

  if ( (byte_4AFEC3B & 1) == 0 )
  {
    sub_1BC3008(&TerminalSceneComponent_TypeInfo, method);
    byte_4AFEC3B = 1;
  }
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4AFC38D )
  {
    sub_1BC3008(&TerminalSceneComponent_TypeInfo, method);
    byte_4AFC38D = 1;
  }
  v2 = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v2 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = v2->static_fields->mInstance;
  if ( !mInstance || (mTerminalMap = mInstance->fields.mTerminalMap) == 0LL )
    sub_1BC3264(v2, method);
  return mTerminalMap->fields.subRootGimmickP;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestAfterAction_StateMain__onEnd(
        QuestAfterAction_StateMain_o *this,
        bool deleteKey,
        const MethodInfo *method)
{
  __int64 v5; // x1
  TerminalSceneComponent_c *v6; // x0
  TerminalSceneComponent_o *mInstance; // x0
  const MethodInfo *v8; // x1

  if ( (byte_4AFEC3E & 1) == 0 )
  {
    sub_1BC3008(&TerminalSceneComponent_TypeInfo, deleteKey);
    sub_1BC3008(&StringLiteral_16564/*"afterActionBk"*/, v5);
    byte_4AFEC3E = 1;
  }
  if ( deleteKey )
    UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_16564/*"afterActionBk"*/, 0LL);
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4AFC38D )
  {
    sub_1BC3008(&TerminalSceneComponent_TypeInfo, deleteKey);
    byte_4AFC38D = 1;
  }
  v6 = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v6 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = v6->static_fields->mInstance;
  if ( !mInstance
    || (TerminalSceneComponent__ClearTransitionInfo(mInstance, 0LL),
        QuestAfterAction_StateMain__StartMapGimmick(this, v8),
        (mInstance = (TerminalSceneComponent_o *)this->fields.that) == 0LL) )
  {
    sub_1BC3264(mInstance, deleteKey);
  }
  QuestAfterAction__OnEnd((QuestAfterAction_o *)mInstance, (const MethodInfo *)deleteKey);
}


void __fastcall QuestAfterAction_StateMain__set_CommandIndex(
        QuestAfterAction_StateMain_o *this,
        int32_t value,
        const MethodInfo *method)
{
  struct QuestAfterAction_o *that; // x8

  that = this->fields.that;
  if ( !that )
    sub_1BC3264(this, value);
  that->fields.commandIdx = value;
}


void __fastcall QuestAfterAction_StateMain__update(
        QuestAfterAction_StateMain_o *this,
        QuestAfterAction_o *that,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x1

  ((void (__fastcall *)(QuestAfterAction_StateMain_o *, QuestAfterAction_o *, Il2CppMethodPointer))this->klass->vtable._13_UpdateAnim.method)(
    this,
    that,
    this->klass->vtable._14_EndAnim.methodPtr);
  QuestAfterAction_StateMain__Wait(this, v4);
}


void __fastcall QuestAfterAction_StateMain___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_4AFECA6 & 1) == 0 )
  {
    sub_1BC3008(&QuestAfterAction_StateMain___c_TypeInfo, v1);
    byte_4AFECA6 = 1;
  }
  v2 = (Il2CppObject *)sub_1BC3254(QuestAfterAction_StateMain___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  QuestAfterAction_StateMain___c_TypeInfo->static_fields->__9 = (struct QuestAfterAction_StateMain___c_o *)v2;
  sub_1BC2FAC((CGThumbnailListItem_o *)QuestAfterAction_StateMain___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
}


void __fastcall QuestAfterAction_StateMain___c___ctor(QuestAfterAction_StateMain___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QuestAfterAction_StateMain___c___UpdateAnim_b__16_22(
        QuestAfterAction_StateMain___c_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall QuestAfterAction_StateMain___c___UpdateAnim_b__16_26(
        QuestAfterAction_StateMain___c_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  TerminalPramsManager_c *v6; // x0
  int32_t WarId_k__BackingField; // w19
  int32_t QuestId_k__BackingField; // w20
  QuestAfterAction_StateMain___c_c *v9; // x8
  int32_t PhaseCnt_k__BackingField; // w23
  ScriptManager_CallbackFunc_o *_9__16_27; // x21
  Il2CppObject *v12; // x22
  struct QuestAfterAction_StateMain___c_StaticFields *static_fields; // x0
  int32_t v14; // w2
  const MethodInfo *v15; // x3

  if ( (byte_4AFECA7 & 1) == 0 )
  {
    sub_1BC3008(&ScriptManager_CallbackFunc_TypeInfo, method);
    sub_1BC3008(&ScriptManager_TypeInfo, v2);
    sub_1BC3008(&TerminalPramsManager_TypeInfo, v3);
    sub_1BC3008(&Method_QuestAfterAction_StateMain___c__UpdateAnim_b__16_27__, v4);
    sub_1BC3008(&QuestAfterAction_StateMain___c_TypeInfo, v5);
    byte_4AFECA7 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4AFC524 )
  {
    sub_1BC3008(&TerminalPramsManager_TypeInfo, method);
    byte_4AFC524 = 1;
  }
  v6 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v6 = TerminalPramsManager_TypeInfo;
  }
  WarId_k__BackingField = v6->static_fields->_WarId_k__BackingField;
  if ( !byte_4AFC46E )
  {
    sub_1BC3008(&TerminalPramsManager_TypeInfo, method);
    v6 = TerminalPramsManager_TypeInfo;
    byte_4AFC46E = 1;
  }
  if ( !v6->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v6);
    v6 = TerminalPramsManager_TypeInfo;
  }
  QuestId_k__BackingField = v6->static_fields->_QuestId_k__BackingField;
  if ( !byte_4AFC46D )
  {
    sub_1BC3008(&TerminalPramsManager_TypeInfo, method);
    v6 = TerminalPramsManager_TypeInfo;
    byte_4AFC46D = 1;
  }
  if ( !v6->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v6);
    v6 = TerminalPramsManager_TypeInfo;
  }
  v9 = QuestAfterAction_StateMain___c_TypeInfo;
  PhaseCnt_k__BackingField = v6->static_fields->_PhaseCnt_k__BackingField;
  if ( !QuestAfterAction_StateMain___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestAfterAction_StateMain___c_TypeInfo);
    v9 = QuestAfterAction_StateMain___c_TypeInfo;
  }
  _9__16_27 = v9->static_fields->__9__16_27;
  if ( !_9__16_27 )
  {
    if ( !v9->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v9);
      v9 = QuestAfterAction_StateMain___c_TypeInfo;
    }
    v12 = (Il2CppObject *)v9->static_fields->__9;
    _9__16_27 = (ScriptManager_CallbackFunc_o *)sub_1BC3254(ScriptManager_CallbackFunc_TypeInfo);
    ScriptManager_CallbackFunc___ctor(_9__16_27, v12, Method_QuestAfterAction_StateMain___c__UpdateAnim_b__16_27__, 0LL);
    static_fields = QuestAfterAction_StateMain___c_TypeInfo->static_fields;
    static_fields->__9__16_27 = _9__16_27;
    sub_1BC2FAC((CGThumbnailListItem_o *)&static_fields->__9__16_27, (int32_t)_9__16_27, v14, v15);
  }
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  ScriptManager__PlayBattleStart(
    WarId_k__BackingField,
    QuestId_k__BackingField,
    PhaseCnt_k__BackingField + 1,
    _9__16_27,
    0,
    0LL,
    -1,
    0,
    0,
    0LL,
    0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestAfterAction_StateMain___c___UpdateAnim_b__16_27(
        QuestAfterAction_StateMain___c_o *this,
        bool isExit,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  QuestAfterAction_StateMain___c_c *v9; // x0
  NetworkManager_ResultCallbackFunc_o *_9__16_28; // x19
  Il2CppObject *v11; // x20
  struct QuestAfterAction_StateMain___c_StaticFields *static_fields; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  __int64 v15; // x1
  Il2CppObject *Request_object; // x19
  TerminalPramsManager_c *v17; // x0
  int32_t QuestId_k__BackingField; // w21
  int32_t PhaseCnt_k__BackingField; // w20
  System_Int32_array *SelectRouteArray; // x0
  __int64 v21; // x1

  if ( (byte_4AFECA8 & 1) == 0 )
  {
    sub_1BC3008(&Method_NetworkManager_getRequest_BattleScenarioRequest___, isExit);
    sub_1BC3008(&NetworkManager_TypeInfo, v3);
    sub_1BC3008(&NetworkManager_ResultCallbackFunc_TypeInfo, v4);
    sub_1BC3008(&ScriptManager_TypeInfo, v5);
    sub_1BC3008(&TerminalPramsManager_TypeInfo, v6);
    sub_1BC3008(&Method_QuestAfterAction_StateMain___c__UpdateAnim_b__16_28__, v7);
    sub_1BC3008(&QuestAfterAction_StateMain___c_TypeInfo, v8);
    byte_4AFECA8 = 1;
  }
  v9 = QuestAfterAction_StateMain___c_TypeInfo;
  if ( !QuestAfterAction_StateMain___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestAfterAction_StateMain___c_TypeInfo);
    v9 = QuestAfterAction_StateMain___c_TypeInfo;
  }
  _9__16_28 = v9->static_fields->__9__16_28;
  if ( !_9__16_28 )
  {
    if ( !v9->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v9);
      v9 = QuestAfterAction_StateMain___c_TypeInfo;
    }
    v11 = (Il2CppObject *)v9->static_fields->__9;
    _9__16_28 = (NetworkManager_ResultCallbackFunc_o *)sub_1BC3254(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      _9__16_28,
      v11,
      Method_QuestAfterAction_StateMain___c__UpdateAnim_b__16_28__,
      0LL);
    static_fields = QuestAfterAction_StateMain___c_TypeInfo->static_fields;
    static_fields->__9__16_28 = _9__16_28;
    sub_1BC2FAC((CGThumbnailListItem_o *)&static_fields->__9__16_28, (int32_t)_9__16_28, v13, v14);
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     _9__16_28,
                     (const MethodInfo_3089B54 *)Method_NetworkManager_getRequest_BattleScenarioRequest___);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4AFC46E )
  {
    sub_1BC3008(&TerminalPramsManager_TypeInfo, v15);
    byte_4AFC46E = 1;
  }
  v17 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v17 = TerminalPramsManager_TypeInfo;
  }
  QuestId_k__BackingField = v17->static_fields->_QuestId_k__BackingField;
  if ( !byte_4AFC46D )
  {
    sub_1BC3008(&TerminalPramsManager_TypeInfo, v15);
    v17 = TerminalPramsManager_TypeInfo;
    byte_4AFC46D = 1;
  }
  if ( !v17->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v17);
    v17 = TerminalPramsManager_TypeInfo;
  }
  PhaseCnt_k__BackingField = v17->static_fields->_PhaseCnt_k__BackingField;
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  SelectRouteArray = ScriptManager__GetSelectRouteArray(0LL);
  if ( !Request_object )
    sub_1BC3264(SelectRouteArray, v21);
  BattleScenarioRequest__beginRequest(
    (BattleScenarioRequest_o *)Request_object,
    QuestId_k__BackingField,
    PhaseCnt_k__BackingField + 1,
    SelectRouteArray,
    0LL);
}


void __fastcall QuestAfterAction_StateMain___c___UpdateAnim_b__16_28(
        QuestAfterAction_StateMain___c_o *this,
        System_String_o *jsonstr,
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
  Il2CppObject *v12; // x19
  System_Object_array *v13; // x19
  __int64 v14; // x1
  TerminalPramsManager_c *v15; // x0
  Il2CppObject *Instance; // x0
  __int64 v17; // x1

  if ( (byte_4AFECA9 & 1) == 0 )
  {
    sub_1BC3008(&Method_JsonManager_DeserializeArray_BattleResultComponent_resultData___, jsonstr);
    sub_1BC3008(&JsonManager_TypeInfo, v4);
    sub_1BC3008(&ScriptManager_TypeInfo, v5);
    sub_1BC3008(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v6);
    sub_1BC3008(&TerminalPramsManager_TypeInfo, v7);
    sub_1BC3008(&StringLiteral_16564/*"afterActionBk"*/, v8);
    sub_1BC3008(&StringLiteral_15658/*"["*/, v9);
    sub_1BC3008(&StringLiteral_15911/*"]"*/, v10);
    sub_1BC3008(&StringLiteral_13587/*"TerminalTransitionInfoMissionId"*/, v11);
    byte_4AFECA9 = 1;
  }
  v12 = (Il2CppObject *)System_String__Concat_62386896(
                          (System_String_o *)StringLiteral_15658/*"["*/,
                          jsonstr,
                          (System_String_o *)StringLiteral_15911/*"]"*/,
                          0LL);
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v13 = JsonManager__DeserializeArray_object_(
          v12,
          (const MethodInfo_306D91C *)Method_JsonManager_DeserializeArray_BattleResultComponent_resultData___);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_16564/*"afterActionBk"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13587/*"TerminalTransitionInfoMissionId"*/, 0LL);
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  ScriptManager__ClearSelectRouteArray(0LL);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  TerminalPramsManager__ReceiveQuestEndResultInfo((BattleResultComponent_resultData_array *)v13, 1, 0LL);
  if ( !byte_4AFC911 )
  {
    sub_1BC3008(&TerminalPramsManager_TypeInfo, v14);
    byte_4AFC911 = 1;
  }
  v15 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v15 = TerminalPramsManager_TypeInfo;
  }
  v15->static_fields->_IsAutoResume_k__BackingField = 1;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1BC3264(0LL, v17);
  AvalonSceneManager__transitionSceneRefresh((AvalonSceneManager_o *)Instance, 34, 1, 0LL, 0, 0LL);
}


void __fastcall QuestAfterAction_StateMain___c__DisplayClass16_0___ctor(
        QuestAfterAction_StateMain___c__DisplayClass16_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QuestAfterAction_StateMain___c__DisplayClass16_0___UpdateAnim_b__10(
        QuestAfterAction_StateMain___c__DisplayClass16_0_o *this,
        const MethodInfo *method)
{
  struct QuestAfterAction_StateMain_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1BC3264(0LL, method);
  ((void (__fastcall *)(struct QuestAfterAction_StateMain_o *, Il2CppMethodPointer))_4__this->klass->vtable._14_EndAnim.method)(
    _4__this,
    _4__this->klass->vtable._15_onEnd.methodPtr);
}


void __fastcall QuestAfterAction_StateMain___c__DisplayClass16_0___UpdateAnim_b__11(
        QuestAfterAction_StateMain___c__DisplayClass16_0_o *this,
        const MethodInfo *method)
{
  struct QuestAfterAction_StateMain_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1BC3264(0LL, method);
  ((void (__fastcall *)(struct QuestAfterAction_StateMain_o *, Il2CppMethodPointer))_4__this->klass->vtable._14_EndAnim.method)(
    _4__this,
    _4__this->klass->vtable._15_onEnd.methodPtr);
}


void __fastcall QuestAfterAction_StateMain___c__DisplayClass16_0___UpdateAnim_b__12(
        QuestAfterAction_StateMain___c__DisplayClass16_0_o *this,
        const MethodInfo *method)
{
  struct QuestAfterAction_StateMain_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1BC3264(0LL, method);
  ((void (__fastcall *)(struct QuestAfterAction_StateMain_o *, Il2CppMethodPointer))_4__this->klass->vtable._14_EndAnim.method)(
    _4__this,
    _4__this->klass->vtable._15_onEnd.methodPtr);
}


void __fastcall QuestAfterAction_StateMain___c__DisplayClass16_0___UpdateAnim_b__23(
        QuestAfterAction_StateMain___c__DisplayClass16_0_o *this,
        const MethodInfo *method)
{
  struct QuestAfterAction_StateMain_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (((void (__fastcall *)(struct QuestAfterAction_StateMain_o *, Il2CppMethodPointer))_4__this->klass->vtable._14_EndAnim.method)(
          _4__this,
          _4__this->klass->vtable._15_onEnd.methodPtr),
        (_4__this = this->fields.__4__this) == 0LL) )
  {
    sub_1BC3264(_4__this, method);
  }
  ((void (__fastcall *)(struct QuestAfterAction_StateMain_o *, struct QuestAfterAction_o *, Il2CppMethodPointer))_4__this->klass->vtable._13_UpdateAnim.method)(
    _4__this,
    this->fields.that,
    _4__this->klass->vtable._14_EndAnim.methodPtr);
}


void __fastcall QuestAfterAction_StateMain___c__DisplayClass16_0___UpdateAnim_b__29(
        QuestAfterAction_StateMain___c__DisplayClass16_0_o *this,
        const MethodInfo *method)
{
  struct QuestAfterAction_StateMain_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1BC3264(0LL, method);
  ((void (__fastcall *)(struct QuestAfterAction_StateMain_o *, Il2CppMethodPointer))_4__this->klass->vtable._14_EndAnim.method)(
    _4__this,
    _4__this->klass->vtable._15_onEnd.methodPtr);
}


void __fastcall QuestAfterAction_StateMain___c__DisplayClass16_0___UpdateAnim_b__30(
        QuestAfterAction_StateMain___c__DisplayClass16_0_o *this,
        const MethodInfo *method)
{
  struct QuestAfterAction_StateMain_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1BC3264(0LL, method);
  ((void (__fastcall *)(struct QuestAfterAction_StateMain_o *, Il2CppMethodPointer))_4__this->klass->vtable._14_EndAnim.method)(
    _4__this,
    _4__this->klass->vtable._15_onEnd.methodPtr);
}


void __fastcall QuestAfterAction_StateMain___c__DisplayClass16_0___UpdateAnim_b__31(
        QuestAfterAction_StateMain___c__DisplayClass16_0_o *this,
        const MethodInfo *method)
{
  struct QuestAfterAction_StateMain_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1BC3264(0LL, method);
  ((void (__fastcall *)(struct QuestAfterAction_StateMain_o *, Il2CppMethodPointer))_4__this->klass->vtable._14_EndAnim.method)(
    _4__this,
    _4__this->klass->vtable._15_onEnd.methodPtr);
}


void __fastcall QuestAfterAction_StateMain___c__DisplayClass16_0___UpdateAnim_b__32(
        QuestAfterAction_StateMain___c__DisplayClass16_0_o *this,
        const MethodInfo *method)
{
  struct QuestAfterAction_StateMain_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1BC3264(0LL, method);
  ((void (__fastcall *)(struct QuestAfterAction_StateMain_o *, Il2CppMethodPointer))_4__this->klass->vtable._14_EndAnim.method)(
    _4__this,
    _4__this->klass->vtable._15_onEnd.methodPtr);
}


void __fastcall QuestAfterAction_StateMain___c__DisplayClass16_0___UpdateAnim_b__33(
        QuestAfterAction_StateMain___c__DisplayClass16_0_o *this,
        const MethodInfo *method)
{
  struct QuestAfterAction_StateMain_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1BC3264(0LL, method);
  ((void (__fastcall *)(struct QuestAfterAction_StateMain_o *, Il2CppMethodPointer))_4__this->klass->vtable._14_EndAnim.method)(
    _4__this,
    _4__this->klass->vtable._15_onEnd.methodPtr);
}


void __fastcall QuestAfterAction_StateMain___c__DisplayClass16_0___UpdateAnim_b__9(
        QuestAfterAction_StateMain___c__DisplayClass16_0_o *this,
        const MethodInfo *method)
{
  struct QuestAfterAction_StateMain_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1BC3264(0LL, method);
  ((void (__fastcall *)(struct QuestAfterAction_StateMain_o *, Il2CppMethodPointer))_4__this->klass->vtable._14_EndAnim.method)(
    _4__this,
    _4__this->klass->vtable._15_onEnd.methodPtr);
}


void __fastcall QuestAfterAction_StateMain___c__DisplayClass16_1___ctor(
        QuestAfterAction_StateMain___c__DisplayClass16_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QuestAfterAction_StateMain___c__DisplayClass16_1___UpdateAnim_b__0(
        QuestAfterAction_StateMain___c__DisplayClass16_1_o *this,
        const MethodInfo *method)
{
  struct SrcSpotBasePrefab_o *spot; // x0
  struct MapControl_SpotInfo_o *mMapCtrl_SpotInfo; // x8
  struct QuestAfterAction_StateMain___c__DisplayClass16_0_o *CS___8__locals1; // x8

  spot = this->fields.spot;
  if ( !spot
    || (mMapCtrl_SpotInfo = spot->fields.mMapCtrl_SpotInfo) == 0LL
    || (mMapCtrl_SpotInfo->fields.dispType = 0,
        SrcSpotBasePrefab__SetTouchType(spot, 0, 0LL),
        (CS___8__locals1 = this->fields.CS___8__locals1) == 0LL)
    || (spot = (struct SrcSpotBasePrefab_o *)CS___8__locals1->fields.__4__this) == 0LL )
  {
    sub_1BC3264(spot, method);
  }
  ((void (__fastcall *)(struct SrcSpotBasePrefab_o *, Il2CppRuntimeInterfaceOffsetPair *))spot->klass[1]._1.implementedInterfaces)(
    spot,
    spot->klass[1]._1.interfaceOffsets);
}


void __fastcall QuestAfterAction_StateMain___c__DisplayClass16_10___ctor(
        QuestAfterAction_StateMain___c__DisplayClass16_10_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QuestAfterAction_StateMain___c__DisplayClass16_10___UpdateAnim_b__13(
        QuestAfterAction_StateMain___c__DisplayClass16_10_o *this,
        const MethodInfo *method)
{
  struct MapGimmickComponent_o *mapGimmick; // x8
  struct MapControl_MapGimmickInfo_o *mMapCtrl_MapGimmickInfo; // x8

  mapGimmick = this->fields.mapGimmick;
  if ( !mapGimmick || (mMapCtrl_MapGimmickInfo = mapGimmick->fields.mMapCtrl_MapGimmickInfo) == 0LL )
    sub_1BC3264(this, method);
  mMapCtrl_MapGimmickInfo->fields.dispType = 0;
}


void __fastcall QuestAfterAction_StateMain___c__DisplayClass16_10___UpdateAnim_b__14(
        QuestAfterAction_StateMain___c__DisplayClass16_10_o *this,
        const MethodInfo *method)
{
  struct MapGimmickComponent_o *mapGimmick; // x8
  struct MapControl_MapGimmickInfo_o *mMapCtrl_MapGimmickInfo; // x8
  struct QuestAfterAction_StateMain___c__DisplayClass16_0_o *CS___8__locals10; // x8

  mapGimmick = this->fields.mapGimmick;
  if ( !mapGimmick
    || (mMapCtrl_MapGimmickInfo = mapGimmick->fields.mMapCtrl_MapGimmickInfo) == 0LL
    || (mMapCtrl_MapGimmickInfo->fields.dispType = 0, (CS___8__locals10 = this->fields.CS___8__locals10) == 0LL)
    || (this = (QuestAfterAction_StateMain___c__DisplayClass16_10_o *)CS___8__locals10->fields.__4__this) == 0LL )
  {
    sub_1BC3264(this, method);
  }
  ((void (__fastcall *)(QuestAfterAction_StateMain___c__DisplayClass16_10_o *, Il2CppRuntimeInterfaceOffsetPair *))this->klass[1]._1.implementedInterfaces)(
    this,
    this->klass[1]._1.interfaceOffsets);
}


void __fastcall QuestAfterAction_StateMain___c__DisplayClass16_11___ctor(
        QuestAfterAction_StateMain___c__DisplayClass16_11_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QuestAfterAction_StateMain___c__DisplayClass16_11___UpdateAnim_b__15(
        QuestAfterAction_StateMain___c__DisplayClass16_11_o *this,
        const MethodInfo *method)
{
  struct MapGimmickComponent_o *mapGimmick; // x8
  struct MapControl_MapGimmickInfo_o *mMapCtrl_MapGimmickInfo; // x8

  mapGimmick = this->fields.mapGimmick;
  if ( !mapGimmick || (mMapCtrl_MapGimmickInfo = mapGimmick->fields.mMapCtrl_MapGimmickInfo) == 0LL )
    sub_1BC3264(this, method);
  mMapCtrl_MapGimmickInfo->fields.dispType = 1;
}


void __fastcall QuestAfterAction_StateMain___c__DisplayClass16_11___UpdateAnim_b__16(
        QuestAfterAction_StateMain___c__DisplayClass16_11_o *this,
        const MethodInfo *method)
{
  struct MapGimmickComponent_o *mapGimmick; // x8
  struct MapControl_MapGimmickInfo_o *mMapCtrl_MapGimmickInfo; // x8
  struct QuestAfterAction_StateMain___c__DisplayClass16_0_o *CS___8__locals11; // x8

  mapGimmick = this->fields.mapGimmick;
  if ( !mapGimmick
    || (mMapCtrl_MapGimmickInfo = mapGimmick->fields.mMapCtrl_MapGimmickInfo) == 0LL
    || (mMapCtrl_MapGimmickInfo->fields.dispType = 1, (CS___8__locals11 = this->fields.CS___8__locals11) == 0LL)
    || (this = (QuestAfterAction_StateMain___c__DisplayClass16_11_o *)CS___8__locals11->fields.__4__this) == 0LL )
  {
    sub_1BC3264(this, method);
  }
  ((void (__fastcall *)(QuestAfterAction_StateMain___c__DisplayClass16_11_o *, Il2CppRuntimeInterfaceOffsetPair *))this->klass[1]._1.implementedInterfaces)(
    this,
    this->klass[1]._1.interfaceOffsets);
}


void __fastcall QuestAfterAction_StateMain___c__DisplayClass16_12___ctor(
        QuestAfterAction_StateMain___c__DisplayClass16_12_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QuestAfterAction_StateMain___c__DisplayClass16_12___UpdateAnim_b__17(
        QuestAfterAction_StateMain___c__DisplayClass16_12_o *this,
        const MethodInfo *method)
{
  struct MapGimmickComponent_o *mapGimmick; // x8
  struct MapControl_MapGimmickInfo_o *mMapCtrl_MapGimmickInfo; // x8
  struct QuestAfterAction_StateMain___c__DisplayClass16_0_o *CS___8__locals12; // x8

  mapGimmick = this->fields.mapGimmick;
  if ( !mapGimmick
    || (mMapCtrl_MapGimmickInfo = mapGimmick->fields.mMapCtrl_MapGimmickInfo) == 0LL
    || (mMapCtrl_MapGimmickInfo->fields.dispType = 1, (CS___8__locals12 = this->fields.CS___8__locals12) == 0LL)
    || (this = (QuestAfterAction_StateMain___c__DisplayClass16_12_o *)CS___8__locals12->fields.__4__this) == 0LL )
  {
    sub_1BC3264(this, method);
  }
  ((void (__fastcall *)(QuestAfterAction_StateMain___c__DisplayClass16_12_o *, Il2CppRuntimeInterfaceOffsetPair *))this->klass[1]._1.implementedInterfaces)(
    this,
    this->klass[1]._1.interfaceOffsets);
}


void __fastcall QuestAfterAction_StateMain___c__DisplayClass16_13___ctor(
        QuestAfterAction_StateMain___c__DisplayClass16_13_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QuestAfterAction_StateMain___c__DisplayClass16_13___UpdateAnim_b__18(
        QuestAfterAction_StateMain___c__DisplayClass16_13_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x19
  UnityEngine_Component_o *mapGimmick; // x0
  __int64 v9; // x1
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  UnityEngine_Component_o *v12; // x22
  Il2CppObject *v13; // x0
  UnityEngine_Color_o **v14; // x21
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  __int64 v17; // x2
  struct System_String_array *paramsStr; // x8
  struct System_String_array *v19; // x8
  UnityEngine_Color_o *v20; // x20
  float v21; // s0
  UITweener_o *v22; // x20
  EventDelegate_Callback_o *v23; // x21
  UnityEngine_Color_o color; // [xsp+10h] [xbp-40h] BYREF

  if ( (byte_4AFECAA & 1) == 0 )
  {
    sub_1BC3008(&EventDelegate_Callback_TypeInfo, method);
    sub_1BC3008(&Method_UnityEngine_GameObject_AddComponent_TweenColor___, v3);
    sub_1BC3008(&Method_UnityEngine_GameObject_GetComponentInChildren_UISprite___, v4);
    sub_1BC3008(&Method_QuestAfterAction_StateMain___c__DisplayClass16_14__UpdateAnim_b__19__, v5);
    sub_1BC3008(&QuestAfterAction_StateMain___c__DisplayClass16_14_TypeInfo, v6);
    byte_4AFECAA = 1;
  }
  *(_QWORD *)&color.fields.r = 0LL;
  *(_QWORD *)&color.fields.b = 0LL;
  v7 = sub_1BC3254(QuestAfterAction_StateMain___c__DisplayClass16_14_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7 )
    goto LABEL_18;
  *(_QWORD *)(v7 + 24) = this;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v7 + 24), (int32_t)this, v10, v11);
  mapGimmick = (UnityEngine_Component_o *)this->fields.mapGimmick;
  if ( !mapGimmick )
    goto LABEL_18;
  mapGimmick = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mapGimmick, 0LL);
  if ( !mapGimmick )
    goto LABEL_18;
  mapGimmick = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponentInChildren_object_(
                                            (UnityEngine_GameObject_o *)mapGimmick,
                                            (const MethodInfo_3055BFC *)Method_UnityEngine_GameObject_GetComponentInChildren_UISprite___);
  if ( !mapGimmick )
    goto LABEL_18;
  v12 = mapGimmick;
  mapGimmick = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mapGimmick, 0LL);
  if ( !mapGimmick )
    goto LABEL_18;
  v13 = UnityEngine_GameObject__AddComponent_object_(
          (UnityEngine_GameObject_o *)mapGimmick,
          (const MethodInfo_30558B0 *)Method_UnityEngine_GameObject_AddComponent_TweenColor___);
  *(_QWORD *)(v7 + 16) = v13;
  v14 = (UnityEngine_Color_o **)(v7 + 16);
  sub_1BC2FAC((CGThumbnailListItem_o *)(v7 + 16), (int32_t)v13, v15, v16);
  paramsStr = this->fields.paramsStr;
  if ( !paramsStr )
    goto LABEL_18;
  if ( paramsStr->max_length <= 1 )
    goto LABEL_19;
  mapGimmick = (UnityEngine_Component_o *)UnityEngine_ColorUtility__TryParseHtmlString(
                                            paramsStr->m_Items[1],
                                            &color,
                                            0LL);
  if ( !*v14
    || ((*v14)[8] = *(UnityEngine_Color_o *)((char *)&v12[6].klass + 4), !*v14)
    || ((*v14)[9] = color, (v19 = this->fields.paramsStr) == 0LL) )
  {
LABEL_18:
    sub_1BC3264(mapGimmick, v9);
  }
  if ( v19->max_length <= 2 )
LABEL_19:
    sub_1BC326C(mapGimmick, v9, v17);
  v20 = *v14;
  v21 = System_Single__Parse(v19->m_Items[2], 0LL);
  if ( !v20 )
    goto LABEL_18;
  v20[3].fields.b = v21;
  mapGimmick = (UnityEngine_Component_o *)*v14;
  if ( !*v14 )
    goto LABEL_18;
  UITweener__PlayForward((UITweener_o *)mapGimmick, 0LL);
  v22 = *(UITweener_o **)(v7 + 16);
  v23 = (EventDelegate_Callback_o *)sub_1BC3254(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(
    v23,
    (Il2CppObject *)v7,
    Method_QuestAfterAction_StateMain___c__DisplayClass16_14__UpdateAnim_b__19__,
    0LL);
  if ( !v22 )
    goto LABEL_18;
  UITweener__SetOnFinished(v22, v23, 0LL);
}


void __fastcall QuestAfterAction_StateMain___c__DisplayClass16_14___ctor(
        QuestAfterAction_StateMain___c__DisplayClass16_14_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QuestAfterAction_StateMain___c__DisplayClass16_14___UpdateAnim_b__19(
        QuestAfterAction_StateMain___c__DisplayClass16_14_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *tween; // x20
  struct QuestAfterAction_StateMain_o *_4__this; // x0
  __int64 v5; // x1
  struct QuestAfterAction_StateMain___c__DisplayClass16_13_o *CS___8__locals14; // x8
  struct QuestAfterAction_StateMain___c__DisplayClass16_0_o *CS___8__locals13; // x8

  if ( (byte_4AFECAB & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, method);
    byte_4AFECAB = 1;
  }
  tween = (UnityEngine_Object_o *)this->fields.tween;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_70034300(tween, 0LL);
  CS___8__locals14 = this->fields.CS___8__locals14;
  if ( !CS___8__locals14
    || (CS___8__locals13 = CS___8__locals14->fields.CS___8__locals13) == 0LL
    || (_4__this = CS___8__locals13->fields.__4__this) == 0LL )
  {
    sub_1BC3264(_4__this, v5);
  }
  ((void (__fastcall *)(struct QuestAfterAction_StateMain_o *, Il2CppMethodPointer))_4__this->klass->vtable._14_EndAnim.method)(
    _4__this,
    _4__this->klass->vtable._15_onEnd.methodPtr);
}


void __fastcall QuestAfterAction_StateMain___c__DisplayClass16_15___ctor(
        QuestAfterAction_StateMain___c__DisplayClass16_15_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QuestAfterAction_StateMain___c__DisplayClass16_15___UpdateAnim_b__20(
        QuestAfterAction_StateMain___c__DisplayClass16_15_o *this,
        const MethodInfo *method)
{
  struct MapGimmickComponent_o *mapGimmick; // x8
  struct MapControl_MapGimmickInfo_o *mMapCtrl_MapGimmickInfo; // x8
  struct QuestAfterAction_StateMain___c__DisplayClass16_0_o *CS___8__locals15; // x8

  mapGimmick = this->fields.mapGimmick;
  if ( !mapGimmick
    || (mMapCtrl_MapGimmickInfo = mapGimmick->fields.mMapCtrl_MapGimmickInfo) == 0LL
    || (mMapCtrl_MapGimmickInfo->fields.dispType = 1, (CS___8__locals15 = this->fields.CS___8__locals15) == 0LL)
    || (this = (QuestAfterAction_StateMain___c__DisplayClass16_15_o *)CS___8__locals15->fields.__4__this) == 0LL )
  {
    sub_1BC3264(this, method);
  }
  ((void (__fastcall *)(QuestAfterAction_StateMain___c__DisplayClass16_15_o *, Il2CppRuntimeInterfaceOffsetPair *))this->klass[1]._1.implementedInterfaces)(
    this,
    this->klass[1]._1.interfaceOffsets);
}


void __fastcall QuestAfterAction_StateMain___c__DisplayClass16_15___UpdateAnim_b__21(
        QuestAfterAction_StateMain___c__DisplayClass16_15_o *this,
        const MethodInfo *method)
{
  struct MapGimmickComponent_o *mapGimmick; // x8
  struct MapControl_MapGimmickInfo_o *mMapCtrl_MapGimmickInfo; // x8
  struct QuestAfterAction_StateMain___c__DisplayClass16_0_o *CS___8__locals15; // x8

  mapGimmick = this->fields.mapGimmick;
  if ( !mapGimmick
    || (mMapCtrl_MapGimmickInfo = mapGimmick->fields.mMapCtrl_MapGimmickInfo) == 0LL
    || (mMapCtrl_MapGimmickInfo->fields.dispType = 0, (CS___8__locals15 = this->fields.CS___8__locals15) == 0LL)
    || (this = (QuestAfterAction_StateMain___c__DisplayClass16_15_o *)CS___8__locals15->fields.__4__this) == 0LL )
  {
    sub_1BC3264(this, method);
  }
  ((void (__fastcall *)(QuestAfterAction_StateMain___c__DisplayClass16_15_o *, Il2CppRuntimeInterfaceOffsetPair *))this->klass[1]._1.implementedInterfaces)(
    this,
    this->klass[1]._1.interfaceOffsets);
}


void __fastcall QuestAfterAction_StateMain___c__DisplayClass16_16___ctor(
        QuestAfterAction_StateMain___c__DisplayClass16_16_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QuestAfterAction_StateMain___c__DisplayClass16_16___UpdateAnim_b__24(
        QuestAfterAction_StateMain___c__DisplayClass16_16_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  QuestEntity_o *questEntity; // x0
  void *image; // x8
  ScrTerminalListTop_o *v12; // x20
  int32_t name_high; // w21
  int namespaze; // w24
  System_Action_o *_9__25; // x22
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  clsQuestCheck_o *v18; // x19
  QuestAfterAction_StateMain___c_c *v19; // x8
  System_Action_o *_9__16_26; // x20
  Il2CppObject *v21; // x21
  struct QuestAfterAction_StateMain___c_StaticFields *static_fields; // x0
  int32_t v23; // w2
  const MethodInfo *v24; // x3

  if ( (byte_4AFECAC & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, result);
    sub_1BC3008(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v4);
    sub_1BC3008(&TerminalPramsManager_TypeInfo, v5);
    sub_1BC3008(&TerminalSceneComponent_TypeInfo, v6);
    sub_1BC3008(&Method_QuestAfterAction_StateMain___c__UpdateAnim_b__16_26__, v7);
    sub_1BC3008(&Method_QuestAfterAction_StateMain___c__DisplayClass16_16__UpdateAnim_b__25__, v8);
    sub_1BC3008(&QuestAfterAction_StateMain___c_TypeInfo, v9);
    byte_4AFECAC = 1;
  }
  questEntity = this->fields.questEntity;
  if ( !questEntity )
    goto LABEL_34;
  if ( QuestEntity__HasFlag(questEntity, 0x800000000000LL, 0LL) )
  {
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    if ( !byte_4AFC38D )
    {
      sub_1BC3008(&TerminalSceneComponent_TypeInfo, result);
      byte_4AFC38D = 1;
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
      v12 = (ScrTerminalListTop_o *)*((_QWORD *)image + 32);
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4AFC46E )
      {
        sub_1BC3008(&TerminalPramsManager_TypeInfo, result);
        byte_4AFC46E = 1;
      }
      questEntity = (QuestEntity_o *)TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        questEntity = (QuestEntity_o *)TerminalPramsManager_TypeInfo;
      }
      name_high = HIDWORD(questEntity[1].klass->_1.name);
      if ( !byte_4AFC46D )
      {
        sub_1BC3008(&TerminalPramsManager_TypeInfo, result);
        questEntity = (QuestEntity_o *)TerminalPramsManager_TypeInfo;
        byte_4AFC46D = 1;
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
        _9__25 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
        System_Action___ctor(
          _9__25,
          (Il2CppObject *)this,
          Method_QuestAfterAction_StateMain___c__DisplayClass16_16__UpdateAnim_b__25__,
          0LL);
        this->fields.__9__25 = _9__25;
        sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.__9__25, (int32_t)_9__25, v16, v17);
      }
      if ( v12 )
      {
        ScrTerminalListTop__StartWindowMessage_35954264(v12, name_high, namespaze + 1, 2, _9__25, 1, 0LL);
        return;
      }
    }
LABEL_34:
    sub_1BC3264(questEntity, result);
  }
  questEntity = (QuestEntity_o *)SingletonTemplate_object___get_Instance((const MethodInfo_38E0168 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  v18 = (clsQuestCheck_o *)questEntity;
  v19 = QuestAfterAction_StateMain___c_TypeInfo;
  if ( !QuestAfterAction_StateMain___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestAfterAction_StateMain___c_TypeInfo);
    v19 = QuestAfterAction_StateMain___c_TypeInfo;
  }
  _9__16_26 = v19->static_fields->__9__16_26;
  if ( !_9__16_26 )
  {
    if ( !v19->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v19);
      v19 = QuestAfterAction_StateMain___c_TypeInfo;
    }
    v21 = (Il2CppObject *)v19->static_fields->__9;
    _9__16_26 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
    System_Action___ctor(_9__16_26, v21, Method_QuestAfterAction_StateMain___c__UpdateAnim_b__16_26__, 0LL);
    static_fields = QuestAfterAction_StateMain___c_TypeInfo->static_fields;
    static_fields->__9__16_26 = _9__16_26;
    sub_1BC2FAC((CGThumbnailListItem_o *)&static_fields->__9__16_26, (int32_t)_9__16_26, v23, v24);
  }
  if ( !v18 )
    goto LABEL_34;
  clsQuestCheck__PlayQuestStartAction(v18, _9__16_26, 0LL);
}


void __fastcall QuestAfterAction_StateMain___c__DisplayClass16_16___UpdateAnim_b__25(
        QuestAfterAction_StateMain___c__DisplayClass16_16_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  ScrTerminalMap_o *_4__this; // x0
  UnityEngine_GameObject_c *klass; // x8
  UnityEngine_GameObject_c *v9; // x8
  UnityEngine_GameObject_c *v10; // x8
  __int64 v11; // x1
  TerminalPramsManager_c *v12; // x0
  int32_t QuestId_k__BackingField; // w21
  __int64 v14; // x1
  TerminalPramsManager_c *v15; // x0
  bool HasFlag; // w0
  __int64 v17; // x1
  TerminalPramsManager_c *v18; // x8
  TerminalPramsManager_c *v19; // x0
  __int64 v20; // x1
  int32_t SpotId; // w21
  struct MapControl_QuestInfo_o *questInfo; // x8
  int32_t questId; // w21
  UnityEngine_GameObject_c *v24; // x8
  bool Effect; // w21
  struct QuestAfterAction_StateMain___c__DisplayClass16_0_o *CS___8__locals16; // x8
  TerminalPramsManager_c *v27; // x0
  int32_t WarId_k__BackingField; // w19
  UnityEngine_GameObject_c *v29; // x8
  ScrTerminalListTop_o *v30; // x19
  int32_t v31; // w21

  if ( (byte_4AFECAD & 1) == 0 )
  {
    sub_1BC3008(&MyRoomParamsManager_TypeInfo, method);
    sub_1BC3008(&TerminalPramsManager_TypeInfo, v3);
    sub_1BC3008(&TerminalSceneComponent_TypeInfo, v4);
    sub_1BC3008(&StringLiteral_16564/*"afterActionBk"*/, v5);
    sub_1BC3008(&StringLiteral_13587/*"TerminalTransitionInfoMissionId"*/, v6);
    byte_4AFECAD = 1;
  }
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4AFC38D )
  {
    sub_1BC3008(&TerminalSceneComponent_TypeInfo, method);
    byte_4AFC38D = 1;
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
  _4__this = *(ScrTerminalMap_o **)&klass->_2.thread_static_fields_offset;
  if ( !_4__this )
    goto LABEL_101;
  if ( !ScrTerminalMap__IsAllMaskActive(_4__this, 0LL) )
    goto LABEL_21;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4AFC38D )
  {
    sub_1BC3008(&TerminalSceneComponent_TypeInfo, method);
    byte_4AFC38D = 1;
  }
  _4__this = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    _4__this = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
  }
  v9 = _4__this->fields.subRootGimmickP->klass;
  if ( !v9 || (_4__this = *(ScrTerminalMap_o **)&v9->_2.thread_static_fields_offset) == 0LL )
LABEL_101:
    sub_1BC3264(_4__this, method);
  ScrTerminalMap__AllMaskEnd(_4__this, 0LL);
LABEL_21:
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4AFC38D )
  {
    sub_1BC3008(&TerminalSceneComponent_TypeInfo, method);
    byte_4AFC38D = 1;
  }
  _4__this = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    _4__this = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
  }
  v10 = _4__this->fields.subRootGimmickP->klass;
  if ( !v10 )
    goto LABEL_101;
  _4__this = *(ScrTerminalMap_o **)&v10->_2.static_fields_size;
  if ( !_4__this )
    goto LABEL_101;
  ScrTerminalListTop__IsAllTouchEnable((ScrTerminalListTop_o *)_4__this, 0, 0LL, 0LL);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4AFC46E )
  {
    sub_1BC3008(&TerminalPramsManager_TypeInfo, v11);
    byte_4AFC46E = 1;
  }
  v12 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v12 = TerminalPramsManager_TypeInfo;
  }
  QuestId_k__BackingField = v12->static_fields->_QuestId_k__BackingField;
  if ( !byte_4AFED58 )
  {
    sub_1BC3008(&TerminalPramsManager_TypeInfo, v11);
    v12 = TerminalPramsManager_TypeInfo;
    byte_4AFED58 = 1;
  }
  if ( !v12->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v12);
    v12 = TerminalPramsManager_TypeInfo;
  }
  v12->static_fields->_LastPlayedQuestId_k__BackingField = QuestId_k__BackingField;
  if ( !byte_4AFC46E )
  {
    sub_1BC3008(&TerminalPramsManager_TypeInfo, v11);
    v12 = TerminalPramsManager_TypeInfo;
    byte_4AFC46E = 1;
  }
  if ( !v12->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v12);
    v12 = TerminalPramsManager_TypeInfo;
  }
  TerminalPramsManager__CheckClearSelectedStoryQuestId(v12->static_fields->_QuestId_k__BackingField, 0LL);
  if ( !byte_4AFC46E )
  {
    sub_1BC3008(&TerminalPramsManager_TypeInfo, v14);
    byte_4AFC46E = 1;
  }
  v15 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v15 = TerminalPramsManager_TypeInfo;
  }
  HasFlag = QuestMaster__HasFlag(v15->static_fields->_QuestId_k__BackingField, 0x8000000000LL, 0LL);
  v18 = TerminalPramsManager_TypeInfo;
  if ( HasFlag )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4AFC46E )
    {
      sub_1BC3008(&TerminalPramsManager_TypeInfo, v17);
      byte_4AFC46E = 1;
    }
    v19 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v19 = TerminalPramsManager_TypeInfo;
    }
    SpotId = QuestMaster__GetSpotId(v19->static_fields->_QuestId_k__BackingField, 0LL);
    if ( !byte_4AFED59 )
    {
      sub_1BC3008(&TerminalPramsManager_TypeInfo, v20);
      byte_4AFED59 = 1;
    }
    v18 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v18 = TerminalPramsManager_TypeInfo;
    }
    v18->static_fields->_LastPlayedFreeQuestSpotId_k__BackingField = SpotId;
  }
  if ( !v18->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v18);
  TerminalPramsManager__PlayQuestSave_SaveData(0LL);
  TerminalPramsManager__Save_SaveData(0LL);
  questInfo = this->fields.questInfo;
  if ( !questInfo )
    goto LABEL_101;
  questId = questInfo->fields.questId;
  if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
  MyRoomParamsManager__SetClearQuestWarEnableMyRoomBgChange(questId, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_16564/*"afterActionBk"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13587/*"TerminalTransitionInfoMissionId"*/, 0LL);
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4AFC38D )
  {
    sub_1BC3008(&TerminalSceneComponent_TypeInfo, method);
    byte_4AFC38D = 1;
  }
  _4__this = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    _4__this = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
  }
  v24 = _4__this->fields.subRootGimmickP->klass;
  if ( !v24 )
    goto LABEL_101;
  _4__this = *(ScrTerminalMap_o **)&v24->_2.static_fields_size;
  if ( !_4__this )
    goto LABEL_101;
  Effect = ScrTerminalListTop__IsDisplayGetEffect((ScrTerminalListTop_o *)_4__this, 0LL);
  if ( !byte_4AFED5A )
  {
    sub_1BC3008(&TerminalPramsManager_TypeInfo, method);
    byte_4AFED5A = 1;
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
  ((void (__fastcall *)(ScrTerminalMap_o *, Il2CppRuntimeInterfaceOffsetPair *))_4__this->klass[1]._1.implementedInterfaces)(
    _4__this,
    _4__this->klass[1]._1.interfaceOffsets);
  if ( !byte_4AFC524 )
  {
    sub_1BC3008(&TerminalPramsManager_TypeInfo, method);
    byte_4AFC524 = 1;
  }
  v27 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v27 = TerminalPramsManager_TypeInfo;
  }
  WarId_k__BackingField = v27->static_fields->_WarId_k__BackingField;
  if ( !byte_4AFEC49 )
  {
    sub_1BC3008(&TerminalPramsManager_TypeInfo, method);
    v27 = TerminalPramsManager_TypeInfo;
    byte_4AFEC49 = 1;
  }
  if ( !v27->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v27);
    v27 = TerminalPramsManager_TypeInfo;
  }
  v27->static_fields->_BeforeQuestStartWarId_k__BackingField = WarId_k__BackingField;
  if ( !byte_4AFC38D )
  {
    sub_1BC3008(&TerminalSceneComponent_TypeInfo, method);
    byte_4AFC38D = 1;
  }
  _4__this = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    _4__this = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
  }
  v29 = _4__this->fields.subRootGimmickP->klass;
  if ( !v29 )
    goto LABEL_101;
  v30 = *(ScrTerminalListTop_o **)&v29->_2.static_fields_size;
  if ( !byte_4AFC46E )
  {
    sub_1BC3008(&TerminalPramsManager_TypeInfo, method);
    byte_4AFC46E = 1;
  }
  _4__this = (ScrTerminalMap_o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    _4__this = (ScrTerminalMap_o *)TerminalPramsManager_TypeInfo;
  }
  v31 = *((_DWORD *)&_4__this->fields.subRootGimmickP->fields + 1);
  if ( !byte_4AFC46D )
  {
    sub_1BC3008(&TerminalPramsManager_TypeInfo, method);
    _4__this = (ScrTerminalMap_o *)TerminalPramsManager_TypeInfo;
    byte_4AFC46D = 1;
  }
  if ( !LODWORD(_4__this->fields.pfbBaseP) )
  {
    j_il2cpp_runtime_class_init_0(_4__this);
    _4__this = (ScrTerminalMap_o *)TerminalPramsManager_TypeInfo;
  }
  if ( !v30 )
    goto LABEL_101;
  ScrTerminalListTop__RequestBattleSecnario(v30, v31, LODWORD(_4__this->fields.subRootGimmickP[1].klass) + 1, 0LL);
}


void __fastcall QuestAfterAction_StateMain___c__DisplayClass16_17___ctor(
        QuestAfterAction_StateMain___c__DisplayClass16_17_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QuestAfterAction_StateMain___c__DisplayClass16_17___UpdateAnim_b__34(
        QuestAfterAction_StateMain___c__DisplayClass16_17_o *this,
        const MethodInfo *method)
{
  QuestAfterAction_StateMain___c__DisplayClass16_17_o *v2; // x19
  __int64 v3; // x1
  QuestAfterAction_StateMain___c__DisplayClass16_0_c *klass; // x8
  ScrTerminalListTop_o *v5; // x20
  float defaultBgmVolume; // s8
  float bgmVolume; // s9
  struct QuestAfterAction_StateMain___c__DisplayClass16_0_o *CS___8__locals17; // x8
  struct QuestAfterAction_StateMain___c__DisplayClass16_0_o *v9; // x8

  v2 = this;
  if ( (byte_4AFECAE & 1) == 0 )
  {
    sub_1BC3008(&QuestAfterAction_TypeInfo, method);
    this = (QuestAfterAction_StateMain___c__DisplayClass16_17_o *)sub_1BC3008(&TerminalSceneComponent_TypeInfo, v3);
    byte_4AFECAE = 1;
  }
  if ( v2->fields.bgmVolume > -1.0 )
  {
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    if ( !byte_4AFC38D )
    {
      sub_1BC3008(&TerminalSceneComponent_TypeInfo, method);
      byte_4AFC38D = 1;
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
    v5 = *(ScrTerminalListTop_o **)&klass->_2.static_fields_size;
    bgmVolume = v2->fields.bgmVolume;
    defaultBgmVolume = v2->fields.defaultBgmVolume;
    this = (QuestAfterAction_StateMain___c__DisplayClass16_17_o *)QuestAfterAction_TypeInfo;
    if ( !QuestAfterAction_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(QuestAfterAction_TypeInfo);
    if ( !v5 )
LABEL_20:
      sub_1BC3264(this, method);
    ScrTerminalListTop__StartEasingBgmMasterVolume(
      v5,
      bgmVolume,
      defaultBgmVolume,
      QuestAfterAction_TypeInfo->static_fields->EventAnimationAfterBgmResetTime,
      2,
      0LL,
      0LL);
  }
  CS___8__locals17 = v2->fields.CS___8__locals17;
  if ( !CS___8__locals17 )
    goto LABEL_20;
  this = (QuestAfterAction_StateMain___c__DisplayClass16_17_o *)CS___8__locals17->fields.__4__this;
  if ( !this )
    goto LABEL_20;
  this = (QuestAfterAction_StateMain___c__DisplayClass16_17_o *)((__int64 (__fastcall *)(QuestAfterAction_StateMain___c__DisplayClass16_17_o *, Il2CppRuntimeInterfaceOffsetPair *))this->klass[1]._1.implementedInterfaces)(
                                                                  this,
                                                                  this->klass[1]._1.interfaceOffsets);
  v9 = v2->fields.CS___8__locals17;
  if ( !v9 )
    goto LABEL_20;
  this = (QuestAfterAction_StateMain___c__DisplayClass16_17_o *)v9->fields.__4__this;
  if ( !this )
    goto LABEL_20;
  ((void (__fastcall *)(QuestAfterAction_StateMain___c__DisplayClass16_17_o *, struct QuestAfterAction_o *, Il2CppClass **))this->klass[1]._1.methods)(
    this,
    v9->fields.that,
    this->klass[1]._1.nestedTypes);
}


void __fastcall QuestAfterAction_StateMain___c__DisplayClass16_2___ctor(
        QuestAfterAction_StateMain___c__DisplayClass16_2_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QuestAfterAction_StateMain___c__DisplayClass16_2___UpdateAnim_b__1(
        QuestAfterAction_StateMain___c__DisplayClass16_2_o *this,
        const MethodInfo *method)
{
  struct SrcSpotBasePrefab_o *spot; // x0
  struct MapControl_SpotInfo_o *mMapCtrl_SpotInfo; // x8
  struct QuestAfterAction_StateMain___c__DisplayClass16_0_o *CS___8__locals2; // x8

  spot = this->fields.spot;
  if ( !spot
    || (mMapCtrl_SpotInfo = spot->fields.mMapCtrl_SpotInfo) == 0LL
    || (mMapCtrl_SpotInfo->fields.dispType = 2,
        SrcSpotBasePrefab__SetTouchType(spot, 1, 0LL),
        (CS___8__locals2 = this->fields.CS___8__locals2) == 0LL)
    || (spot = (struct SrcSpotBasePrefab_o *)CS___8__locals2->fields.__4__this) == 0LL )
  {
    sub_1BC3264(spot, method);
  }
  ((void (__fastcall *)(struct SrcSpotBasePrefab_o *, Il2CppRuntimeInterfaceOffsetPair *))spot->klass[1]._1.implementedInterfaces)(
    spot,
    spot->klass[1]._1.interfaceOffsets);
}


void __fastcall QuestAfterAction_StateMain___c__DisplayClass16_3___ctor(
        QuestAfterAction_StateMain___c__DisplayClass16_3_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QuestAfterAction_StateMain___c__DisplayClass16_3___UpdateAnim_b__2(
        QuestAfterAction_StateMain___c__DisplayClass16_3_o *this,
        const MethodInfo *method)
{
  struct SrcSpotBasePrefab_o *spot; // x0
  struct MapControl_SpotInfo_o *mMapCtrl_SpotInfo; // x8
  struct QuestAfterAction_StateMain___c__DisplayClass16_0_o *CS___8__locals3; // x8

  spot = this->fields.spot;
  if ( !spot
    || (mMapCtrl_SpotInfo = spot->fields.mMapCtrl_SpotInfo) == 0LL
    || (mMapCtrl_SpotInfo->fields.dispType = 1,
        SrcSpotBasePrefab__SetTouchType(spot, 1, 0LL),
        (CS___8__locals3 = this->fields.CS___8__locals3) == 0LL)
    || (spot = (struct SrcSpotBasePrefab_o *)CS___8__locals3->fields.__4__this) == 0LL )
  {
    sub_1BC3264(spot, method);
  }
  ((void (__fastcall *)(struct SrcSpotBasePrefab_o *, Il2CppRuntimeInterfaceOffsetPair *))spot->klass[1]._1.implementedInterfaces)(
    spot,
    spot->klass[1]._1.interfaceOffsets);
}


void __fastcall QuestAfterAction_StateMain___c__DisplayClass16_4___ctor(
        QuestAfterAction_StateMain___c__DisplayClass16_4_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QuestAfterAction_StateMain___c__DisplayClass16_4___UpdateAnim_b__3(
        QuestAfterAction_StateMain___c__DisplayClass16_4_o *this,
        const MethodInfo *method)
{
  struct ModelLineComponent_o *roadModel; // x8
  struct MapControl_SpotRoadInfo_o *SpotRoadInfo_k__BackingField; // x8
  struct QuestAfterAction_StateMain___c__DisplayClass16_0_o *CS___8__locals4; // x8

  roadModel = this->fields.roadModel;
  if ( !roadModel
    || (SpotRoadInfo_k__BackingField = roadModel->fields._SpotRoadInfo_k__BackingField) == 0LL
    || (SpotRoadInfo_k__BackingField->fields.dispType = 0, (CS___8__locals4 = this->fields.CS___8__locals4) == 0LL)
    || (this = (QuestAfterAction_StateMain___c__DisplayClass16_4_o *)CS___8__locals4->fields.__4__this) == 0LL )
  {
    sub_1BC3264(this, method);
  }
  ((void (__fastcall *)(QuestAfterAction_StateMain___c__DisplayClass16_4_o *, Il2CppRuntimeInterfaceOffsetPair *))this->klass[1]._1.implementedInterfaces)(
    this,
    this->klass[1]._1.interfaceOffsets);
}


void __fastcall QuestAfterAction_StateMain___c__DisplayClass16_5___ctor(
        QuestAfterAction_StateMain___c__DisplayClass16_5_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QuestAfterAction_StateMain___c__DisplayClass16_5___UpdateAnim_b__4(
        QuestAfterAction_StateMain___c__DisplayClass16_5_o *this,
        const MethodInfo *method)
{
  struct srcLineSprite_o *roadSprite; // x8
  struct MapControl_SpotRoadInfo_o *mMapCtrl_SpotRoadInfo; // x8
  struct QuestAfterAction_StateMain___c__DisplayClass16_0_o *CS___8__locals5; // x8

  roadSprite = this->fields.roadSprite;
  if ( !roadSprite
    || (mMapCtrl_SpotRoadInfo = roadSprite->fields.mMapCtrl_SpotRoadInfo) == 0LL
    || (mMapCtrl_SpotRoadInfo->fields.dispType = 0, (CS___8__locals5 = this->fields.CS___8__locals5) == 0LL)
    || (this = (QuestAfterAction_StateMain___c__DisplayClass16_5_o *)CS___8__locals5->fields.__4__this) == 0LL )
  {
    sub_1BC3264(this, method);
  }
  ((void (__fastcall *)(QuestAfterAction_StateMain___c__DisplayClass16_5_o *, Il2CppRuntimeInterfaceOffsetPair *))this->klass[1]._1.implementedInterfaces)(
    this,
    this->klass[1]._1.interfaceOffsets);
}


void __fastcall QuestAfterAction_StateMain___c__DisplayClass16_6___ctor(
        QuestAfterAction_StateMain___c__DisplayClass16_6_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QuestAfterAction_StateMain___c__DisplayClass16_6___UpdateAnim_b__5(
        QuestAfterAction_StateMain___c__DisplayClass16_6_o *this,
        const MethodInfo *method)
{
  struct ModelLineComponent_o *roadModel; // x8
  struct MapControl_SpotRoadInfo_o *SpotRoadInfo_k__BackingField; // x8
  struct QuestAfterAction_StateMain___c__DisplayClass16_0_o *CS___8__locals6; // x8

  roadModel = this->fields.roadModel;
  if ( !roadModel
    || (SpotRoadInfo_k__BackingField = roadModel->fields._SpotRoadInfo_k__BackingField) == 0LL
    || (SpotRoadInfo_k__BackingField->fields.dispType = 2, (CS___8__locals6 = this->fields.CS___8__locals6) == 0LL)
    || (this = (QuestAfterAction_StateMain___c__DisplayClass16_6_o *)CS___8__locals6->fields.__4__this) == 0LL )
  {
    sub_1BC3264(this, method);
  }
  ((void (__fastcall *)(QuestAfterAction_StateMain___c__DisplayClass16_6_o *, Il2CppRuntimeInterfaceOffsetPair *))this->klass[1]._1.implementedInterfaces)(
    this,
    this->klass[1]._1.interfaceOffsets);
}


void __fastcall QuestAfterAction_StateMain___c__DisplayClass16_7___ctor(
        QuestAfterAction_StateMain___c__DisplayClass16_7_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QuestAfterAction_StateMain___c__DisplayClass16_7___UpdateAnim_b__6(
        QuestAfterAction_StateMain___c__DisplayClass16_7_o *this,
        const MethodInfo *method)
{
  struct srcLineSprite_o *roadSprite; // x8
  struct MapControl_SpotRoadInfo_o *mMapCtrl_SpotRoadInfo; // x8
  struct QuestAfterAction_StateMain___c__DisplayClass16_0_o *CS___8__locals7; // x8

  roadSprite = this->fields.roadSprite;
  if ( !roadSprite
    || (mMapCtrl_SpotRoadInfo = roadSprite->fields.mMapCtrl_SpotRoadInfo) == 0LL
    || (mMapCtrl_SpotRoadInfo->fields.dispType = 2, (CS___8__locals7 = this->fields.CS___8__locals7) == 0LL)
    || (this = (QuestAfterAction_StateMain___c__DisplayClass16_7_o *)CS___8__locals7->fields.__4__this) == 0LL )
  {
    sub_1BC3264(this, method);
  }
  ((void (__fastcall *)(QuestAfterAction_StateMain___c__DisplayClass16_7_o *, Il2CppRuntimeInterfaceOffsetPair *))this->klass[1]._1.implementedInterfaces)(
    this,
    this->klass[1]._1.interfaceOffsets);
}


void __fastcall QuestAfterAction_StateMain___c__DisplayClass16_8___ctor(
        QuestAfterAction_StateMain___c__DisplayClass16_8_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QuestAfterAction_StateMain___c__DisplayClass16_8___UpdateAnim_b__7(
        QuestAfterAction_StateMain___c__DisplayClass16_8_o *this,
        const MethodInfo *method)
{
  struct ModelLineComponent_o *roadModel; // x8
  struct MapControl_SpotRoadInfo_o *SpotRoadInfo_k__BackingField; // x8
  struct QuestAfterAction_StateMain___c__DisplayClass16_0_o *CS___8__locals8; // x8

  roadModel = this->fields.roadModel;
  if ( !roadModel
    || (SpotRoadInfo_k__BackingField = roadModel->fields._SpotRoadInfo_k__BackingField) == 0LL
    || (SpotRoadInfo_k__BackingField->fields.dispType = 1, (CS___8__locals8 = this->fields.CS___8__locals8) == 0LL)
    || (this = (QuestAfterAction_StateMain___c__DisplayClass16_8_o *)CS___8__locals8->fields.__4__this) == 0LL )
  {
    sub_1BC3264(this, method);
  }
  ((void (__fastcall *)(QuestAfterAction_StateMain___c__DisplayClass16_8_o *, Il2CppRuntimeInterfaceOffsetPair *))this->klass[1]._1.implementedInterfaces)(
    this,
    this->klass[1]._1.interfaceOffsets);
}


void __fastcall QuestAfterAction_StateMain___c__DisplayClass16_9___ctor(
        QuestAfterAction_StateMain___c__DisplayClass16_9_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QuestAfterAction_StateMain___c__DisplayClass16_9___UpdateAnim_b__8(
        QuestAfterAction_StateMain___c__DisplayClass16_9_o *this,
        const MethodInfo *method)
{
  struct srcLineSprite_o *roadSprite; // x8
  struct MapControl_SpotRoadInfo_o *mMapCtrl_SpotRoadInfo; // x8
  struct QuestAfterAction_StateMain___c__DisplayClass16_0_o *CS___8__locals9; // x8

  roadSprite = this->fields.roadSprite;
  if ( !roadSprite
    || (mMapCtrl_SpotRoadInfo = roadSprite->fields.mMapCtrl_SpotRoadInfo) == 0LL
    || (mMapCtrl_SpotRoadInfo->fields.dispType = 1, (CS___8__locals9 = this->fields.CS___8__locals9) == 0LL)
    || (this = (QuestAfterAction_StateMain___c__DisplayClass16_9_o *)CS___8__locals9->fields.__4__this) == 0LL )
  {
    sub_1BC3264(this, method);
  }
  ((void (__fastcall *)(QuestAfterAction_StateMain___c__DisplayClass16_9_o *, Il2CppRuntimeInterfaceOffsetPair *))this->klass[1]._1.implementedInterfaces)(
    this,
    this->klass[1]._1.interfaceOffsets);
}


void __fastcall QuestAfterAction_StateNone___ctor(QuestAfterAction_StateNone_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QuestAfterAction_StateNone__begin(
        QuestAfterAction_StateNone_o *this,
        QuestAfterAction_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall QuestAfterAction_StateNone__end(
        QuestAfterAction_StateNone_o *this,
        QuestAfterAction_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall QuestAfterAction_StateNone__update(
        QuestAfterAction_StateNone_o *this,
        QuestAfterAction_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall QuestAfterAction_TitleInfoControlCallback___ctor(
        QuestAfterAction_TitleInfoControlCallback_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QuestAfterAction_TitleInfoControlCallback__End(
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
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))end->fields.m_target)(
      end->fields.original_method_info,
      *(_QWORD *)&end->fields.extra_arg);
  p_end->klass = 0LL;
  sub_1BC2FAC(p_end, 0, v2, v3);
}


bool __fastcall QuestAfterAction_TitleInfoControlCallback__HasStartCallback(
        QuestAfterAction_TitleInfoControlCallback_o *this,
        const MethodInfo *method)
{
  return this->fields.start != 0LL;
}


void __fastcall QuestAfterAction_TitleInfoControlCallback__SetStartCallback(
        QuestAfterAction_TitleInfoControlCallback_o *this,
        System_Action_QuestAfterAction_TitleInfoControlParam__o *startCallback,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields.start = startCallback;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields, (int32_t)startCallback, (int32_t)method, v3);
}


void __fastcall QuestAfterAction_TitleInfoControlCallback__Start(
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
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, System_Action_o *, const MethodInfo *))end->fields.m_target)(
      end->fields.original_method_info,
      *(_QWORD *)&end->fields.extra_arg,
      endCallback,
      method);
  this->fields.end = endCallback;
  sub_1BC2FAC((CGThumbnailListItem_o *)p_end, (int32_t)endCallback, (int32_t)endCallback, method);
  start = this->fields.start;
  if ( start )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, QuestAfterAction_TitleInfoControlParam_o *, _QWORD))start->fields.m_target)(
      start->fields.original_method_info,
      titleInfoControlParam,
      *(_QWORD *)&start->fields.extra_arg);
  else
    QuestAfterAction_TitleInfoControlCallback__End(this, v9);
}


void __fastcall QuestAfterAction_TitleInfoControlParam___ctor(
        QuestAfterAction_TitleInfoControlParam_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall QuestAfterAction_TitleInfoControlParam__get_TargetId(
        QuestAfterAction_TitleInfoControlParam_o *this,
        const MethodInfo *method)
{
  return this->fields._TargetId_k__BackingField;
}


int32_t __fastcall QuestAfterAction_TitleInfoControlParam__get_TargetType(
        QuestAfterAction_TitleInfoControlParam_o *this,
        const MethodInfo *method)
{
  return this->fields._TargetType_k__BackingField;
}


void __fastcall QuestAfterAction_TitleInfoControlParam__set_TargetId(
        QuestAfterAction_TitleInfoControlParam_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._TargetId_k__BackingField = value;
}


void __fastcall QuestAfterAction_TitleInfoControlParam__set_TargetType(
        QuestAfterAction_TitleInfoControlParam_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._TargetType_k__BackingField = value;
}


void __fastcall QuestAfterAction_VoiceInfo___ctor(
        QuestAfterAction_VoiceInfo_o *this,
        int32_t sId,
        System_String_o *vName,
        const MethodInfo *method)
{
  QuestAfterAction_VoiceInfo_o *v6; // x21
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  v6 = this;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v6->fields.voiceName = vName;
  v6 = (QuestAfterAction_VoiceInfo_o *)((char *)v6 + 24);
  LODWORD(v6[-1].fields.voiceName) = sId;
  sub_1BC2FAC((CGThumbnailListItem_o *)v6, (int32_t)vName, v7, v8);
}


void __fastcall QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__87___ctor(
        QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__87_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
  this->fields.__l__initialThreadId = System_Environment__get_CurrentManagedThreadId(0LL);
}


bool __fastcall QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__87__MoveNext(
        QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__87_o *this,
        const MethodInfo *method)
{
  QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__87_o *v2; // x21
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  int32_t _1__state; // w8
  QuestAfterAction_o *_4__this; // x19
  struct System_Collections_Generic_IEnumerable_QuestAfterAction_Command__o *commandEnumerable; // x20
  System_Collections_Generic_IEnumerable_QuestAfterAction_Command__c *klass; // x8
  __int64 v10; // x9
  int *p_offset; // x10
  __int64 p_method; // x0
  __int64 v13; // x1
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  struct System_Collections_Generic_IEnumerator_QuestAfterAction_Command__o *_7__wrap1; // x20
  System_Collections_Generic_IEnumerator_QuestAfterAction_Command__c *v17; // x8
  __int64 v18; // x9
  int *v19; // x10
  __int64 v20; // x0
  const MethodInfo *v21; // x1
  struct System_Collections_Generic_IEnumerator_QuestAfterAction_Command__o *v22; // x20
  System_Collections_Generic_IEnumerator_QuestAfterAction_Command__c *v23; // x8
  __int64 v24; // x9
  int *v25; // x10
  __int64 v26; // x0
  __int64 v27; // x0
  __int64 v28; // x1
  QuestAfterAction_Command_o *v29; // x20
  int32_t CommandType; // w21
  int32_t CommandTargetId; // w2
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  bool result; // w0
  QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__87_o *v37; // [xsp+18h] [xbp-38h]

  v37 = this;
  v2 = this;
  if ( (byte_4AFECB3 & 1) == 0 )
  {
    sub_1BC3008(&System_Collections_Generic_IEnumerable_QuestAfterAction_Command__TypeInfo, method);
    sub_1BC3008(&System_Collections_Generic_IEnumerator_QuestAfterAction_Command__TypeInfo, v3);
    sub_1BC3008(&System_Collections_IEnumerator_TypeInfo, v4);
    this = (QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__87_o *)sub_1BC3008(
                                                                                    &QuestAfterAction_TypeInfo,
                                                                                    v5);
    byte_4AFECB3 = 1;
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
      sub_1BC3264(this, method);
    klass = commandEnumerable->klass;
    v10 = *(unsigned __int16 *)(&commandEnumerable->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&commandEnumerable->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerable_QuestAfterAction_Command__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_QuestAfterAction_Command__TypeInfo )
      {
        --v10;
        p_offset += 4;
        if ( !v10 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_1C13570(
                   commandEnumerable,
                   System_Collections_Generic_IEnumerable_QuestAfterAction_Command__TypeInfo,
                   0LL);
    }
    v13 = (*(__int64 (__fastcall **)(struct System_Collections_Generic_IEnumerable_QuestAfterAction_Command__o *, _QWORD))p_method)(
            commandEnumerable,
            *(_QWORD *)(p_method + 8));
    v37->fields.__7__wrap1 = (struct System_Collections_Generic_IEnumerator_QuestAfterAction_Command__o *)v13;
    sub_1BC2FAC((CGThumbnailListItem_o *)&v37->fields.__7__wrap1, v13, v14, v15);
    v2 = v37;
  }
  _7__wrap1 = v2->fields.__7__wrap1;
  v2->fields.__1__state = -3;
  if ( !_7__wrap1 )
LABEL_34:
    sub_1BC3264(this, method);
  while ( 1 )
  {
    v17 = _7__wrap1->klass;
    v18 = *(unsigned __int16 *)(&_7__wrap1->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&_7__wrap1->klass->_2.bitflags2 + 3) )
    {
      v19 = &v17->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)v19 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v18;
        v19 += 4;
        if ( !v18 )
          goto LABEL_18;
      }
      v20 = (__int64)&v17->vtable[*v19].method;
    }
    else
    {
LABEL_18:
      v20 = sub_1C13570(_7__wrap1, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(struct System_Collections_Generic_IEnumerator_QuestAfterAction_Command__o *, _QWORD))v20)(
            _7__wrap1,
            *(_QWORD *)(v20 + 8)) & 1) == 0 )
    {
      QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__87____m__Finally1(v37, v21);
      v37->fields.__7__wrap1 = 0LL;
      sub_1BC2FAC((CGThumbnailListItem_o *)&v37->fields.__7__wrap1, 0, v34, v35);
      return 0;
    }
    v22 = v37->fields.__7__wrap1;
    if ( !v22 )
      sub_1BC3264(v37, v21);
    v23 = v22->klass;
    v24 = *(unsigned __int16 *)(&v22->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v22->klass->_2.bitflags2 + 3) )
    {
      v25 = &v23->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_QuestAfterAction_Command__c **)v25 - 1) != System_Collections_Generic_IEnumerator_QuestAfterAction_Command__TypeInfo )
      {
        --v24;
        v25 += 4;
        if ( !v24 )
          goto LABEL_26;
      }
      v26 = (__int64)&v23->vtable[*v25].method;
    }
    else
    {
LABEL_26:
      v26 = sub_1C13570(
              v37->fields.__7__wrap1,
              System_Collections_Generic_IEnumerator_QuestAfterAction_Command__TypeInfo,
              0LL);
    }
    v27 = (*(__int64 (__fastcall **)(struct System_Collections_Generic_IEnumerator_QuestAfterAction_Command__o *, _QWORD))v26)(
            v22,
            *(_QWORD *)(v26 + 8));
    v29 = (QuestAfterAction_Command_o *)v27;
    if ( !v27 )
      sub_1BC3264(0LL, v28);
    if ( !_4__this )
      sub_1BC3264(v27, v28);
    CommandType = QuestAfterAction__GetCommandType(_4__this, *(_DWORD *)(v27 + 16), 0LL);
    if ( !QuestAfterAction_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(QuestAfterAction_TypeInfo);
    CommandTargetId = QuestAfterAction__ExtractCommandTargetId(v29, 0LL);
    this = (QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__87_o *)QuestAfterAction__IsExistCommand(
                                                                                    _4__this,
                                                                                    CommandType,
                                                                                    CommandTargetId,
                                                                                    0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
      break;
    _7__wrap1 = v37->fields.__7__wrap1;
    if ( !_7__wrap1 )
      goto LABEL_34;
  }
  v37->fields.__2__current = v29;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v37->fields.__2__current, (int32_t)v29, v32, v33);
  result = 1;
  v37->fields.__1__state = 1;
  return result;
}


System_Collections_Generic_IEnumerator_QuestAfterAction_Command__o *__fastcall QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__87__System_Collections_Generic_IEnumerable_QuestAfterAction_Command__GetEnumerator(
        QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__87_o *this,
        const MethodInfo *method)
{
  int32_t l__initialThreadId; // w20
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__87_o *v6; // x20
  struct QuestAfterAction_o *_4__this; // x1
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  struct System_Collections_Generic_IEnumerable_QuestAfterAction_Command__o *_3__commandEnumerable; // x1

  if ( (byte_4AFECB5 & 1) == 0 )
  {
    sub_1BC3008(&QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__87_TypeInfo, method);
    byte_4AFECB5 = 1;
  }
  if ( this->fields.__1__state == -2
    && (l__initialThreadId = this->fields.__l__initialThreadId,
        l__initialThreadId == System_Environment__get_CurrentManagedThreadId(0LL)) )
  {
    this->fields.__1__state = 0;
    v6 = this;
  }
  else
  {
    v6 = (QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__87_o *)sub_1BC3254(QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__87_TypeInfo);
    System_Object___ctor((Il2CppObject *)v6, 0LL);
    v6->fields.__1__state = 0;
    v6->fields.__l__initialThreadId = System_Environment__get_CurrentManagedThreadId(0LL);
    _4__this = this->fields.__4__this;
    v6->fields.__4__this = _4__this;
    sub_1BC2FAC((CGThumbnailListItem_o *)&v6->fields.__4__this, (int32_t)_4__this, v8, v9);
  }
  _3__commandEnumerable = this->fields.__3__commandEnumerable;
  v6->fields.commandEnumerable = _3__commandEnumerable;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v6->fields.commandEnumerable, (int32_t)_3__commandEnumerable, v4, v5);
  return (System_Collections_Generic_IEnumerator_QuestAfterAction_Command__o *)v6;
}


QuestAfterAction_Command_o *__fastcall QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__87__System_Collections_Generic_IEnumerator_QuestAfterAction_Command__get_Current(
        QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__87_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__87__System_Collections_IEnumerator_Reset(
        QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__87_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1BC301C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1BC3254(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1BC301C(&Method_QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__87_System_Collections_IEnumerator_Reset__);
  sub_1BC3130(v3, v4);
}


Il2CppObject *__fastcall QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__87__System_Collections_IEnumerator_get_Current(
        QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__87_o *this,
        const MethodInfo *method)
{
  return (Il2CppObject *)this->fields.__2__current;
}


void __fastcall QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__87__System_IDisposable_Dispose(
        QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__87_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w8

  _1__state = this->fields.__1__state;
  if ( _1__state == 1 || _1__state == -3 )
    QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__87____m__Finally1(this, method);
}


void __fastcall QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__87____m__Finally1(
        QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__87_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_IEnumerator_QuestAfterAction_Command__o *_7__wrap1; // x19
  System_Collections_Generic_IEnumerator_QuestAfterAction_Command__c *klass; // x8
  __int64 v5; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0

  if ( (byte_4AFECB4 & 1) == 0 )
  {
    sub_1BC3008(&System_IDisposable_TypeInfo, method);
    byte_4AFECB4 = 1;
  }
  _7__wrap1 = this->fields.__7__wrap1;
  this->fields.__1__state = -1;
  if ( _7__wrap1 )
  {
    klass = _7__wrap1->klass;
    v5 = *(unsigned __int16 *)(&_7__wrap1->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&_7__wrap1->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
      {
        --v5;
        p_offset += 4;
        if ( !v5 )
          goto LABEL_8;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_8:
      p_method = sub_1C13570(_7__wrap1, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(struct System_Collections_Generic_IEnumerator_QuestAfterAction_Command__o *, _QWORD))p_method)(
      _7__wrap1,
      *(_QWORD *)(p_method + 8));
  }
}


void __fastcall QuestAfterAction__WaitWhileMainStateFinished_d__91___ctor(
        QuestAfterAction__WaitWhileMainStateFinished_d__91_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall QuestAfterAction__WaitWhileMainStateFinished_d__91__MoveNext(
        QuestAfterAction__WaitWhileMainStateFinished_d__91_o *this,
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
      sub_1BC3264(this, method);
    if ( _4__this->fields.isKeepingMainStateButFinished )
    {
      this->fields.__2__current = 0LL;
      p__2__current = &this->fields.__2__current;
      sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.__2__current, 0, v2, v3);
      result = 1;
      *((_DWORD *)p__2__current - 2) = 1;
      return result;
    }
    ActionExtensions__Call(this->fields.action, 0LL);
  }
  return 0;
}


Il2CppObject *__fastcall QuestAfterAction__WaitWhileMainStateFinished_d__91__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        QuestAfterAction__WaitWhileMainStateFinished_d__91_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn QuestAfterAction__WaitWhileMainStateFinished_d__91__System_Collections_IEnumerator_Reset(
        QuestAfterAction__WaitWhileMainStateFinished_d__91_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1BC301C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1BC3254(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1BC301C(&Method_QuestAfterAction__WaitWhileMainStateFinished_d__91_System_Collections_IEnumerator_Reset__);
  sub_1BC3130(v3, v4);
}


Il2CppObject *__fastcall QuestAfterAction__WaitWhileMainStateFinished_d__91__System_Collections_IEnumerator_get_Current(
        QuestAfterAction__WaitWhileMainStateFinished_d__91_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall QuestAfterAction__WaitWhileMainStateFinished_d__91__System_IDisposable_Dispose(
        QuestAfterAction__WaitWhileMainStateFinished_d__91_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall QuestAfterAction___c__DisplayClass80_0___ctor(
        QuestAfterAction___c__DisplayClass80_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QuestAfterAction___c__DisplayClass80_0___LoadVoice_b__0(
        QuestAfterAction___c__DisplayClass80_0_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *svtVInfos; // x0

  if ( (byte_4AFECB0 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo__RemoveAt__, method);
    byte_4AFECB0 = 1;
  }
  svtVInfos = (System_Collections_Generic_List_object__o *)this->fields.svtVInfos;
  if ( !svtVInfos
    || (System_Collections_Generic_List_object___RemoveAt(
          svtVInfos,
          0,
          (const MethodInfo_36A2614 *)Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo__RemoveAt__),
        (svtVInfos = (System_Collections_Generic_List_object__o *)this->fields.__4__this) == 0LL) )
  {
    sub_1BC3264(svtVInfos, method);
  }
  QuestAfterAction__LoadVoice_35323288(
    (QuestAfterAction_o *)svtVInfos,
    this->fields.svtVInfos,
    this->fields.endAct,
    0LL);
}


void __fastcall QuestAfterAction___c__DisplayClass84_0___ctor(
        QuestAfterAction___c__DisplayClass84_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QuestAfterAction___c__DisplayClass84_0___Play_b__0(
        QuestAfterAction___c__DisplayClass84_0_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4AFECB1 & 1) == 0 )
  {
    sub_1BC3008(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, method);
    byte_4AFECB1 = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_38E0168 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    sub_1BC3264(0LL, v4);
  MissionNotifyManager__EndPause((MissionNotifyManager_o *)Instance, 0LL);
  ActionExtensions__Call(this->fields.endAct, 0LL);
}


void __fastcall QuestAfterAction___c__DisplayClass85_0___ctor(
        QuestAfterAction___c__DisplayClass85_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QuestAfterAction___c__DisplayClass85_0___PlaySpecifiedAction_b__0(
        QuestAfterAction___c__DisplayClass85_0_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  char *_4__this; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_4AFECB2 & 1) == 0 )
  {
    sub_1BC3008(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, method);
    byte_4AFECB2 = 1;
  }
  _4__this = (char *)this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_8;
  *((_QWORD *)_4__this + 22) = 0LL;
  sub_1BC2FAC((CGThumbnailListItem_o *)(_4__this + 176), 0, v2, v3);
  _4__this = (char *)this->fields.__4__this;
  if ( !_4__this
    || (*((_QWORD *)_4__this + 9) = 0LL,
        sub_1BC2FAC((CGThumbnailListItem_o *)(_4__this + 72), 0, v6, v7),
        (_4__this = (char *)SingletonTemplate_object___get_Instance((const MethodInfo_38E0168 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__)) == 0LL)
    || (MissionNotifyManager__EndPause((MissionNotifyManager_o *)_4__this, 0LL),
        (_4__this = (char *)this->fields.__4__this) == 0LL) )
  {
LABEL_8:
    sub_1BC3264(_4__this, method);
  }
  QuestAfterAction__SetState((QuestAfterAction_o *)_4__this, 0, 0LL);
  ActionExtensions__Call(this->fields.finishCallback, 0LL);
}


void __fastcall QuestAfterAction___c__DisplayClass85_0___PlaySpecifiedAction_b__1(
        QuestAfterAction___c__DisplayClass85_0_o *this,
        const MethodInfo *method)
{
  QuestAfterAction_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1BC3264(0LL, method);
  QuestAfterAction__SetState(_4__this, 2, 0LL);
}