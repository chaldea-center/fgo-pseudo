void QuestAfterAction___cctor(const MethodInfo *method)
{
  if ( (byte_4C23E86 & 1) == 0 )
  {
    sub_1C2D490(&QuestAfterAction_TypeInfo);
    byte_4C23E86 = 1;
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

  if ( (byte_4C23E85 & 1) == 0 )
  {
    sub_1C2D490(&BlankEarthQuestAfterAction_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int____ctor__);
    sub_1C2D490(&System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___TypeInfo);
    sub_1C2D490(&System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_QuestAfterAction___ctor__);
    sub_1C2D490(&QuestAfterAction_TitleInfoControlCallback_TypeInfo);
    byte_4C23E85 = 1;
  }
  v3 = (Il2CppObject *)sub_1C2D6DC(QuestAfterAction_TitleInfoControlCallback_TypeInfo);
  System_Object___ctor(v3, 0);
  this->fields._TitleInfoCtrlCallback_k__BackingField = (struct QuestAfterAction_TitleInfoControlCallback_o *)v3;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields._TitleInfoCtrlCallback_k__BackingField, (int32_t)v3, v4, v5);
  v6 = (BlankEarthQuestAfterAction_o *)sub_1C2D6DC(BlankEarthQuestAfterAction_TypeInfo);
  BlankEarthQuestAfterAction___ctor(v6, 0);
  this->fields._BlankEarthQuestAfterAction_k__BackingField = v6;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields._BlankEarthQuestAfterAction_k__BackingField, (int32_t)v6, v7, v8);
  v9 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1C2D6DC(System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___TypeInfo);
  System_Collections_Generic_Dictionary_Int32Enum__object____ctor(
    v9,
    (const MethodInfo_3413944 *)Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int____ctor__);
  this->fields.commandTypeIds = (struct System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___o *)v9;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.commandTypeIds, (int32_t)v9, v10, v11);
  v12 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C2D6DC(System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v12,
    (const MethodInfo_33E08A8 *)Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo___ctor__);
  this->fields.svtVoices = (struct System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__o *)v12;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.svtVoices, (int32_t)v12, v13, v14);
  this->fields.MapMoveBeforeFocusSpotId = -1;
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_39D40E4 *)Method_SingletonMonoBehaviour_QuestAfterAction___ctor__);
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
  sub_1C2D434(p_endAct, 0, v2, v3);
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
  __int64 v21; // x2
  const MethodInfo *v22; // x3
  __int64 v23; // x1
  const MethodInfo *v24; // x3
  __int64 v25; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4C23E69 & 1) == 0 )
  {
    sub_1C2D490(&QuestAfterAction_Command___TypeInfo);
    sub_1C2D490(&QuestAfterAction_Command_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_QuestPhaseDetailAddMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_QuestPhaseDetailMaster___);
    sub_1C2D490(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    sub_1C2D490(&StringLiteral_1172/*"1"*/);
    byte_4C23E69 = 1;
  }
  entity = 0;
  if ( this->fields.BlankEarthTargetWarId > 0 )
    return 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C23E90 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C23E90 = 1;
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
                          (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_QuestPhaseDetailAddMaster___);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C21464 )
    {
      sub_1C2D490(&TerminalPramsManager_TypeInfo);
      byte_4C21464 = 1;
    }
    v6 = (__int64)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v6 = (__int64)TerminalPramsManager_TypeInfo;
    }
    v8 = *(_DWORD *)(*(_QWORD *)(v6 + 184) + 20LL);
    if ( !byte_4C21463 )
    {
      sub_1C2D490(&TerminalPramsManager_TypeInfo);
      v6 = (__int64)TerminalPramsManager_TypeInfo;
      byte_4C21463 = 1;
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
            (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_QuestPhaseDetailMaster___);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C21464 )
    {
      sub_1C2D490(&TerminalPramsManager_TypeInfo);
      byte_4C21464 = 1;
    }
    v6 = (__int64)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v6 = (__int64)TerminalPramsManager_TypeInfo;
    }
    v11 = *(_DWORD *)(*(_QWORD *)(v6 + 184) + 20LL);
    if ( !byte_4C21463 )
    {
      sub_1C2D490(&TerminalPramsManager_TypeInfo);
      v6 = (__int64)TerminalPramsManager_TypeInfo;
      byte_4C21463 = 1;
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
  if ( !byte_4C23E93 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C23E93 = 1;
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
  if ( !byte_4C21464 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C21464 = 1;
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
                         (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_QuestMaster___)) == 0) )
  {
LABEL_76:
    sub_1C2D6EC(v6, v4);
  }
  v6 = DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)v6,
         &entity,
         v13,
         (const MethodInfo_3387DE4 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
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
  v6 = sub_1C2D538(QuestAfterAction_Command___TypeInfo, (unsigned int)v14 >> 1);
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
    v20 = sub_1C2D6DC(QuestAfterAction_Command_TypeInfo);
    System_Object___ctor((Il2CppObject *)v20, 0);
    if ( (unsigned int)(i - 1) >= *((_DWORD *)p_image + 6) )
      goto LABEL_75;
    v6 = System_Int32__Parse((System_String_o *)p_image[i + 3], 0);
    if ( !v20 )
      goto LABEL_76;
    *(_DWORD *)(v20 + 16) = v6;
    if ( (unsigned int)i >= *((_DWORD *)p_image + 6) )
LABEL_75:
      sub_1C2D6F4(v6, v4, v21);
    v23 = p_image[i + 4];
    *(_QWORD *)(v20 + 24) = v23;
    sub_1C2D434((CGThumbnailListItem_o *)(v20 + 24), v23, v21, v22);
    if ( *(_DWORD *)(v20 + 16) == 701
      && System_String__op_Equality(*(System_String_o **)(v20 + 24), (System_String_o *)StringLiteral_1172/*"1"*/, 0) )
    {
      break;
    }
    v6 = sub_1C2D5CC(v20, *(_QWORD *)(*(_QWORD *)v15 + 64LL));
    if ( !v6 )
    {
      v25 = sub_1C2D710();
      sub_1C2D5B8(v25, 0);
    }
    if ( v17 >= v15[6] )
      goto LABEL_75;
    *(_QWORD *)(v18 + 8 * v17) = v20;
    sub_1C2D434((CGThumbnailListItem_o *)(v18 + v16), v20, v21, v24);
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
  const MethodInfo *v5; // x3

  if ( (byte_4C23E82 & 1) == 0 )
  {
    sub_1C2D490(&QuestAfterAction_TypeInfo);
    byte_4C23E82 = 1;
  }
  v3 = QuestAfterAction_TypeInfo;
  if ( !QuestAfterAction_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(QuestAfterAction_TypeInfo);
  QuestAfterAction__DeleteContinueData((const MethodInfo *)v3);
  this->fields.commandBuf = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.commandBuf, 0, v4, v5);
}


QuestAfterAction_Command_array *QuestAfterAction__ConvertValsToCommand(
        QuestAfterAction_o *this,
        System_String_array *actionVals,
        const MethodInfo *method)
{
  if ( (byte_4C23E77 & 1) == 0 )
  {
    sub_1C2D490(&QuestAfterAction_TypeInfo);
    byte_4C23E77 = 1;
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
  const MethodInfo *v30; // x2
  DataMasterBase_TMaster__TEntity__PKType__o *v31; // x23
  int32_t v32; // w24
  int32_t v33; // w24
  System_String_o *lookup; // x24
  bool v35; // w24
  bool v36; // w23
  Il2CppObject *v37; // x23
  WarEntity_o *QuestId; // x0
  WarEntity_o *v39; // x23
  BalanceConfig_c *v40; // x0
  bool v41; // w0
  uint32_t cctor_finished; // w9
  TerminalPramsManager_c *v43; // x0
  TerminalPramsManager_c *v44; // x0
  int32_t id; // w19
  bool v46; // w23
  TerminalPramsManager_c *v47; // x0
  Il2CppObject *Master_object; // x23
  WarReleaseEntity_o *OpenEntity; // x24
  Il2CppObject *v50; // x23
  bool QuestEntity; // w0
  TerminalPramsManager_c *v52; // x0
  Il2CppObject *v53; // x23
  int32_t items_high; // w24
  Il2CppObject *v55; // x22
  int32_t v56; // w23
  TerminalPramsManager_c *v57; // x0
  Il2CppObject *v58; // x22
  int32_t v59; // w24
  bool IsOverwriteCommandNone; // w0
  il2cpp_array_size_t max_length; // x8
  __int64 v62; // x0
  unsigned int **p_commandBuf; // x21
  int32_t v64; // w2
  const MethodInfo *v65; // x3
  int *commandBuf; // x8
  unsigned __int64 v67; // x22
  unsigned int v68; // w29
  __int64 v69; // x24
  const MethodInfo *v70; // x3
  __int64 v71; // x8
  System_String_o *v72; // x1
  System_String_o **v73; // x25
  int v74; // w8
  bool v75; // w8
  System_Collections_Generic_Dictionary_int__object__o *svtVoices; // x26
  int32_t v77; // w21
  DataMasterBase_TMaster__TEntity__PKType__o *v78; // x28
  __int64 v79; // x27
  int32_t v80; // w2
  const MethodInfo *v81; // x3
  System_String_c *MasterName_k__BackingField; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v83; // x26
  int32_t v84; // w26
  BalanceConfig_c *v85; // x8
  int klass_high; // w27
  int v87; // w8
  unsigned int v88; // w8
  const MethodInfo *v89; // x1
  System_Collections_Generic_List_int__o *Item; // x26
  struct System_Int32_array *items; // x8
  _QWORD *v92; // x9
  __int64 size; // x10
  QuestAfterAction_o *v94; // x0
  const MethodInfo *v95; // x2
  System_String_c *v96; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v97; // x25
  unsigned __int64 v98; // x26
  System_String_Fields v99; // x8
  _QWORD *v100; // x9
  __int64 MasterName_k__BackingField_low; // x10
  unsigned int *v102; // x25
  const MethodInfo *v103; // x3
  unsigned int *v104; // x0
  TerminalPramsManager_c *v105; // x0
  TerminalPramsManager_c *v106; // x0
  int32_t BeforeQuestStartWarId_k__BackingField; // w19
  TerminalSceneComponent_c *v108; // x0
  Il2CppObject *v109; // x21
  TerminalPramsManager_c *v110; // x0
  TerminalPramsManager_c *v111; // x0
  Il2CppObject *v112; // x20
  TerminalPramsManager_c *v113; // x0
  BalanceConfig_c *v114; // x8
  int32_t WarId_k__BackingField; // w19
  int32_t v116; // w19
  TerminalPramsManager_c *v117; // x0
  TerminalPramsManager_c *v118; // x0
  TerminalPramsManager_c *v119; // x0
  BalanceConfig_c *v120; // x8
  int32_t v121; // w20
  TerminalPramsManager_c *v122; // x0
  __int64 v123; // x0
  char v124; // [xsp+Ch] [xbp-94h]
  int32_t svtId; // [xsp+1Ch] [xbp-84h] BYREF
  Il2CppObject *v126; // [xsp+20h] [xbp-80h] BYREF
  QuestEntity_o *entity; // [xsp+28h] [xbp-78h] BYREF
  Il2CppObject *v128; // [xsp+30h] [xbp-70h] BYREF
  QuestEntity_o *v129; // [xsp+38h] [xbp-68h] BYREF

  v4 = this;
  if ( (byte_4C23E68 & 1) == 0 )
  {
    sub_1C2D490(&BalanceConfig_TypeInfo);
    sub_1C2D490(&bool_TypeInfo);
    sub_1C2D490(&QuestAfterAction_Command___TypeInfo);
    sub_1C2D490(&QuestAfterAction_Command_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMasterData_EventMissionMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_QuestPhaseDetailAddMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_QuestPhaseDetailMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_WarMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_BlankEarthSpotMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_QuestBehaviorMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_QuestMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_ShopMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_WarMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_WarReleaseMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__);
    sub_1C2D490(&Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__GetEntity__);
    sub_1C2D490(&Method_DataMasterBase_BlankEarthSpotMaster__BlankEarthSpotEntity__int__TryGetEntity__);
    sub_1C2D490(&Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___get_Item__);
    sub_1C2D490(&Method_System_Linq_Enumerable_Any_KeyValuePair_int__QuestAfterAction_VoiceInfo____);
    sub_1C2D490(&Method_System_Linq_Enumerable_Contains_int___);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C2D490(&QuestAfterAction_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    sub_1C2D490(&TerminalSceneComponent_TypeInfo);
    sub_1C2D490(&QuestAfterAction_VoiceInfo_TypeInfo);
    sub_1C2D490(&StringLiteral_16709/*"afterActionBk"*/);
    this = (QuestAfterAction_o *)sub_1C2D490(&StringLiteral_811/*","*/);
    byte_4C23E68 = 1;
  }
  v128 = 0;
  v129 = 0;
  v126 = 0;
  entity = 0;
  svtId = 0;
  *(_WORD *)&v4->fields.isLoadedVoice = 0;
  *(_QWORD *)&v4->fields.ActionMapTargetType = -1;
  if ( isBeforeAction )
  {
    if ( System_Linq_Enumerable__Any_KeyValuePair_int__object__(
           (System_Collections_Generic_IEnumerable_TSource__o *)v4->fields.svtVoices,
           (const MethodInfo_30D97D0 *)Method_System_Linq_Enumerable_Any_KeyValuePair_int__QuestAfterAction_VoiceInfo____) )
    {
      QuestAfterAction__releaseVoice(v4, v5);
    }
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C21464 )
    {
      sub_1C2D490(&TerminalPramsManager_TypeInfo);
      byte_4C21464 = 1;
    }
    v7 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v7 = TerminalPramsManager_TypeInfo;
    }
    QuestId_k__BackingField = v7->static_fields->_QuestId_k__BackingField;
    if ( !byte_4C21463 )
    {
      sub_1C2D490(&TerminalPramsManager_TypeInfo);
      v7 = TerminalPramsManager_TypeInfo;
      byte_4C21463 = 1;
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
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4C21383 )
  {
    sub_1C2D490(&TerminalSceneComponent_TypeInfo);
    byte_4C21383 = 1;
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
  if ( !byte_4C21383 )
  {
    sub_1C2D490(&TerminalSceneComponent_TypeInfo);
    byte_4C21383 = 1;
  }
  MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalSceneComponent_TypeInfo;
  }
  v15 = MasterData_object[2].fields.list->klass;
  if ( !v15 )
    goto LABEL_343;
  v16 = v15->vtable._9_unknown.method;
  if ( !v16 )
    goto LABEL_343;
  invoker_method_high = HIDWORD(v16->invoker_method);
  if ( !byte_4C21383 )
  {
    sub_1C2D490(&TerminalSceneComponent_TypeInfo);
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalSceneComponent_TypeInfo;
    byte_4C21383 = 1;
  }
  if ( !LODWORD(MasterData_object[3].monitor) )
  {
    j_il2cpp_runtime_class_init_0(MasterData_object);
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalSceneComponent_TypeInfo;
  }
  v18 = MasterData_object[2].fields.list->klass;
  if ( !v18 )
    goto LABEL_343;
  v19 = v18->vtable._9_unknown.method;
  if ( !v19 )
    goto LABEL_343;
  invoker_method = (int32_t)v19->invoker_method;
  if ( invoker_method >= 1 )
  {
    if ( !LODWORD(MasterData_object[3].monitor) )
      j_il2cpp_runtime_class_init_0(MasterData_object);
    if ( !byte_4C21383 )
    {
      sub_1C2D490(&TerminalSceneComponent_TypeInfo);
      byte_4C21383 = 1;
    }
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalSceneComponent_TypeInfo;
    }
    v21 = MasterData_object[2].fields.list->klass;
    if ( !v21 )
      goto LABEL_343;
    v22 = v21->vtable._9_unknown.method;
    if ( !v22 )
      goto LABEL_343;
    if ( !Instance )
      goto LABEL_343;
    afterActionVals = (System_String_array *)v22->klass;
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMasterData_object_(
                                                                        (DataManager_o *)Instance,
                                                                        (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_EventMissionMaster___);
    if ( !MasterData_object )
      goto LABEL_343;
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__int___GetEntity(
                                                                        MasterData_object,
                                                                        invoker_method,
                                                                        (const MethodInfo_3387D98 *)Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__GetEntity__);
    if ( !MasterData_object )
      goto LABEL_343;
    MasterName_k__BackingField_high = HIDWORD(MasterData_object->fields._MasterName_k__BackingField);
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMasterData_object_(
                                                                        (DataManager_o *)Instance,
                                                                        (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_WarMaster___);
    if ( !MasterData_object )
      goto LABEL_343;
    goto LABEL_69;
  }
  if ( invoker_method_high >= 1 )
  {
    if ( !LODWORD(MasterData_object[3].monitor) )
      j_il2cpp_runtime_class_init_0(MasterData_object);
    if ( !byte_4C21383 )
    {
      sub_1C2D490(&TerminalSceneComponent_TypeInfo);
      byte_4C21383 = 1;
    }
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalSceneComponent_TypeInfo;
    }
    v24 = MasterData_object[2].fields.list->klass;
    if ( !v24 )
      goto LABEL_343;
    v25 = v24->vtable._9_unknown.method;
    if ( !v25 )
      goto LABEL_343;
    afterActionVals = (System_String_array *)v25->klass;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_ShopMaster___);
    if ( !MasterData_object )
      goto LABEL_343;
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__int___GetEntity(
                                                                        MasterData_object,
                                                                        invoker_method_high,
                                                                        (const MethodInfo_3387D98 *)Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__);
    if ( !MasterData_object )
      goto LABEL_343;
    MasterName_k__BackingField_high = (int32_t)MasterData_object->fields._MasterName_k__BackingField;
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_WarMaster___);
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
    if ( !byte_4C23BE7 )
    {
      sub_1C2D490(&TerminalPramsManager_TypeInfo);
      byte_4C23BE7 = 1;
    }
    v27 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v27 = TerminalPramsManager_TypeInfo;
    }
    v27->static_fields->_WarId_k__BackingField = MasterKind_k__BackingField;
    if ( !byte_4C21383 )
    {
      sub_1C2D490(&TerminalSceneComponent_TypeInfo);
      byte_4C21383 = 1;
    }
    v28 = TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      v28 = TerminalSceneComponent_TypeInfo;
    }
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)v28->static_fields->mInstance;
    if ( !MasterData_object )
      goto LABEL_343;
    TerminalSceneComponent__CallQuestInformationCloseAtAll((TerminalSceneComponent_o *)MasterData_object, 0, 0);
    if ( afterActionVals )
      goto LABEL_234;
  }
LABEL_82:
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C23E90 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C23E90 = 1;
  }
  v29 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v29 = TerminalPramsManager_TypeInfo;
  }
  if ( !v29->static_fields->_IsPhaseClear_k__BackingField
    && UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_16709/*"afterActionBk"*/, 0) )
  {
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)UnityEngine_PlayerPrefs__GetString_71122516(
                                                                        (System_String_o *)StringLiteral_16709/*"afterActionBk"*/,
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
    v31 = MasterData_object;
    if ( !LODWORD(MasterData_object->fields._MasterName_k__BackingField) )
      goto LABEL_483;
    v32 = System_Int32__Parse(*(System_String_o **)&MasterData_object->fields.revision, 0);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C23BE1 )
    {
      sub_1C2D490(&TerminalPramsManager_TypeInfo);
      byte_4C23BE1 = 1;
    }
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
    }
    HIDWORD(MasterData_object[2].fields.list->fields.items) = v32;
    if ( LODWORD(v31->fields._MasterName_k__BackingField) <= 1 )
      goto LABEL_483;
    v33 = System_Int32__Parse((System_String_o *)v31->fields.list, 0);
    if ( !byte_4C23BE5 )
    {
      sub_1C2D490(&TerminalPramsManager_TypeInfo);
      byte_4C23BE5 = 1;
    }
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
    }
    LODWORD(MasterData_object[2].fields.list->fields._monitor) = v33;
    if ( LODWORD(v31->fields._MasterName_k__BackingField) <= 2 )
      goto LABEL_483;
    lookup = (System_String_o *)v31->fields._lookup;
    if ( !bool_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(bool_TypeInfo);
    v35 = System_Boolean__Parse(lookup, 0);
    if ( !byte_4C23E91 )
    {
      sub_1C2D490(&TerminalPramsManager_TypeInfo);
      byte_4C23E91 = 1;
    }
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
    }
    BYTE5(MasterData_object[2].fields.list[1].fields.CollectionChanged) = v35;
    if ( LODWORD(v31->fields._MasterName_k__BackingField) <= 3 )
      goto LABEL_483;
    v36 = System_Boolean__Parse((System_String_o *)v31->fields.seriazlier, 0);
    if ( !byte_4C23E92 )
    {
      sub_1C2D490(&TerminalPramsManager_TypeInfo);
      byte_4C23E92 = 1;
    }
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
    }
    BYTE6(MasterData_object[2].fields.list[1].fields.CollectionChanged) = v36;
    if ( !byte_4C23E93 )
    {
      sub_1C2D490(&TerminalPramsManager_TypeInfo);
      MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
      byte_4C23E93 = 1;
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
      v37 = DataManager__GetMasterData_object_(
              (DataManager_o *)Instance,
              (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_WarMaster___);
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4C21464 )
      {
        sub_1C2D490(&TerminalPramsManager_TypeInfo);
        byte_4C21464 = 1;
      }
      MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
      }
      if ( !v37 )
        goto LABEL_343;
      QuestId = WarMaster__getByLastQuestId(
                  (WarMaster_o *)v37,
                  HIDWORD(MasterData_object[2].fields.list->fields.items),
                  0);
      if ( QuestId )
      {
        v39 = QuestId;
        v40 = BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v40 = BalanceConfig_TypeInfo;
        }
        v41 = System_Linq_Enumerable__Contains_int_(
                (System_Collections_Generic_IEnumerable_TSource__o *)v40->static_fields->MainInterludeMapReturnWarIds,
                v39->fields.id,
                (const MethodInfo_30EB900 *)Method_System_Linq_Enumerable_Contains_int___);
        cctor_finished = TerminalPramsManager_TypeInfo->_2.cctor_finished;
        if ( v41 )
        {
          if ( !cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          if ( !byte_4C23E94 )
          {
            sub_1C2D490(&TerminalPramsManager_TypeInfo);
            byte_4C23E94 = 1;
          }
          v43 = TerminalPramsManager_TypeInfo;
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            v43 = TerminalPramsManager_TypeInfo;
          }
          v43->static_fields->_IsWarClear_k__BackingField = 0;
        }
        else
        {
          if ( !cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          if ( !byte_4C23E94 )
          {
            sub_1C2D490(&TerminalPramsManager_TypeInfo);
            byte_4C23E94 = 1;
          }
          v44 = TerminalPramsManager_TypeInfo;
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            v44 = TerminalPramsManager_TypeInfo;
          }
          v44->static_fields->_IsWarClear_k__BackingField = 1;
          id = v39->fields.id;
          if ( !byte_4C23BE7 )
          {
            sub_1C2D490(&TerminalPramsManager_TypeInfo);
            v44 = TerminalPramsManager_TypeInfo;
            byte_4C23BE7 = 1;
          }
          if ( !v44->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v44);
            v44 = TerminalPramsManager_TypeInfo;
          }
          v44->static_fields->_WarId_k__BackingField = id;
          v46 = TerminalPramsManager__CheckIsOrdealCallWarClear(v39, 0);
          if ( !byte_4C23E95 )
          {
            sub_1C2D490(&TerminalPramsManager_TypeInfo);
            byte_4C23E95 = 1;
          }
          v47 = TerminalPramsManager_TypeInfo;
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            v47 = TerminalPramsManager_TypeInfo;
          }
          v47->static_fields->_IsOrdealCallWarClear_k__BackingField = v46;
        }
      }
    }
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_WarReleaseMaster___);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C216DE )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C216DE = 1;
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
  if ( !byte_4C23E96 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C23E96 = 1;
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
    if ( !byte_4C23B24 )
    {
      sub_1C2D490(&TerminalPramsManager_TypeInfo);
      byte_4C23B24 = 1;
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
  v50 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C21464 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C21464 = 1;
  }
  MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
  }
  if ( !v50 )
    goto LABEL_343;
  QuestEntity = QuestMaster__TryGetQuestEntity(
                  (QuestMaster_o *)v50,
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
    if ( !byte_4C23E90 )
    {
      sub_1C2D490(&TerminalPramsManager_TypeInfo);
      byte_4C23E90 = 1;
    }
    v52 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v52 = TerminalPramsManager_TypeInfo;
    }
    if ( v52->static_fields->_IsPhaseClear_k__BackingField )
    {
      v53 = DataManager__GetMasterData_object_(
              (DataManager_o *)Instance,
              (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_QuestPhaseDetailAddMaster___);
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4C21464 )
      {
        sub_1C2D490(&TerminalPramsManager_TypeInfo);
        byte_4C21464 = 1;
      }
      MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
      }
      items_high = HIDWORD(MasterData_object[2].fields.list->fields.items);
      if ( !byte_4C21463 )
      {
        sub_1C2D490(&TerminalPramsManager_TypeInfo);
        MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
        byte_4C21463 = 1;
      }
      if ( !LODWORD(MasterData_object[3].monitor) )
      {
        j_il2cpp_runtime_class_init_0(MasterData_object);
        MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
      }
      if ( !v53 )
        goto LABEL_343;
      afterActionVals = QuestPhaseDetailAddMaster__GetAfterAction(
                          (QuestPhaseDetailAddMaster_o *)v53,
                          items_high,
                          LODWORD(MasterData_object[2].fields.list->fields._monitor) + 1,
                          0);
      if ( afterActionVals )
        goto LABEL_234;
      v55 = DataManager__GetMasterData_object_(
              (DataManager_o *)Instance,
              (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_QuestPhaseDetailMaster___);
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4C21464 )
      {
        sub_1C2D490(&TerminalPramsManager_TypeInfo);
        byte_4C21464 = 1;
      }
      MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
      }
      v56 = HIDWORD(MasterData_object[2].fields.list->fields.items);
      if ( !byte_4C21463 )
      {
        sub_1C2D490(&TerminalPramsManager_TypeInfo);
        MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
        byte_4C21463 = 1;
      }
      if ( !LODWORD(MasterData_object[3].monitor) )
      {
        j_il2cpp_runtime_class_init_0(MasterData_object);
        MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
      }
      if ( !v55 )
        goto LABEL_343;
      afterActionVals = QuestPhaseDetailMaster__GetAfterAction(
                          (QuestPhaseDetailMaster_o *)v55,
                          v56,
                          LODWORD(MasterData_object[2].fields.list->fields._monitor) + 1,
                          0);
      if ( afterActionVals )
        goto LABEL_234;
      v52 = TerminalPramsManager_TypeInfo;
    }
    if ( !v52->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v52);
    if ( !byte_4C23E93 )
    {
      sub_1C2D490(&TerminalPramsManager_TypeInfo);
      byte_4C23E93 = 1;
    }
    v57 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v57 = TerminalPramsManager_TypeInfo;
    }
    if ( v57->static_fields->_IsQuestClear_k__BackingField )
    {
      if ( !v57->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v57);
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
  v58 = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_QuestBehaviorMaster___);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C21464 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C21464 = 1;
  }
  MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
  }
  v59 = HIDWORD(MasterData_object[2].fields.list->fields.items);
  if ( !byte_4C21463 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
    byte_4C21463 = 1;
  }
  if ( !LODWORD(MasterData_object[3].monitor) )
  {
    j_il2cpp_runtime_class_init_0(MasterData_object);
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
  }
  if ( !v58 )
    goto LABEL_343;
  if ( QuestBehaviorMaster__IsOpenQuestBehaviorCond(
         (QuestBehaviorMaster_o *)v58,
         v59,
         LODWORD(MasterData_object[2].fields.list->fields._monitor) + 1,
         7,
         0) )
  {
    goto LABEL_487;
  }
  if ( !QuestAfterAction_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(QuestAfterAction_TypeInfo);
  IsOverwriteCommandNone = QuestAfterAction__IsOverwriteCommandNone(afterActionVals, (const MethodInfo *)v11);
  if ( !afterActionVals
    || IsOverwriteCommandNone
    || (max_length = afterActionVals->max_length, (int)max_length < 2)
    || (max_length & 1) != 0 )
  {
LABEL_487:
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C23E97 )
    {
      sub_1C2D490(&TerminalPramsManager_TypeInfo);
      byte_4C23E97 = 1;
    }
    v105 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v105 = TerminalPramsManager_TypeInfo;
    }
    if ( v105->static_fields->_BeforeQuestStartWarId_k__BackingField >= 1 )
    {
      if ( !v105->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v105);
      if ( !byte_4C21ACD )
      {
        sub_1C2D490(&TerminalPramsManager_TypeInfo);
        byte_4C21ACD = 1;
      }
      v106 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v106 = TerminalPramsManager_TypeInfo;
      }
      v106->static_fields->_IsAutoResume_k__BackingField = 1;
      if ( !byte_4C23BE3 )
      {
        sub_1C2D490(&TerminalPramsManager_TypeInfo);
        v106 = TerminalPramsManager_TypeInfo;
        byte_4C23BE3 = 1;
      }
      if ( !v106->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v106);
        v106 = TerminalPramsManager_TypeInfo;
      }
      v106->static_fields->_DispState_k__BackingField = 2;
      if ( !byte_4C23E97 )
      {
        sub_1C2D490(&TerminalPramsManager_TypeInfo);
        v106 = TerminalPramsManager_TypeInfo;
        byte_4C23E97 = 1;
      }
      if ( !v106->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v106);
        v106 = TerminalPramsManager_TypeInfo;
      }
      BeforeQuestStartWarId_k__BackingField = v106->static_fields->_BeforeQuestStartWarId_k__BackingField;
      if ( !byte_4C23BE7 )
      {
        sub_1C2D490(&TerminalPramsManager_TypeInfo);
        v106 = TerminalPramsManager_TypeInfo;
        byte_4C23BE7 = 1;
      }
      if ( !v106->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v106);
        v106 = TerminalPramsManager_TypeInfo;
      }
      v106->static_fields->_WarId_k__BackingField = BeforeQuestStartWarId_k__BackingField;
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      if ( !byte_4C21383 )
      {
        sub_1C2D490(&TerminalSceneComponent_TypeInfo);
        byte_4C21383 = 1;
      }
      v108 = TerminalSceneComponent_TypeInfo;
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        v108 = TerminalSceneComponent_TypeInfo;
      }
      MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)v108->static_fields->mInstance;
      if ( !MasterData_object )
        goto LABEL_343;
      TerminalSceneComponent__CallQuestInformationCloseAtAll((TerminalSceneComponent_o *)MasterData_object, 0, 0);
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      v109 = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_WarMaster___);
      if ( !byte_4C216DE )
      {
        sub_1C2D490(&TerminalPramsManager_TypeInfo);
        byte_4C216DE = 1;
      }
      MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
      }
      if ( !v109 )
        goto LABEL_343;
      if ( DataMasterBase_object__object__int___TryGetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)v109,
             &v126,
             HIDWORD(MasterData_object[2].fields.list->klass),
             (const MethodInfo_3387DE4 *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__) )
      {
        MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)v126;
        if ( !v126 )
          goto LABEL_343;
        v4->fields.ActionMapTargetId = WarEntity__GetBaseMap((WarEntity_o *)v126, 0);
      }
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4C23E98 )
      {
        sub_1C2D490(&TerminalPramsManager_TypeInfo);
        byte_4C23E98 = 1;
      }
      v110 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v110 = TerminalPramsManager_TypeInfo;
      }
      v110->static_fields->_BeforeQuestStartWarId_k__BackingField = 0;
    }
    UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_16709/*"afterActionBk"*/, 0);
    return;
  }
  v62 = sub_1C2D538(QuestAfterAction_Command___TypeInfo, (unsigned int)max_length >> 1);
  v4->fields.commandBuf = (struct QuestAfterAction_Command_array *)v62;
  p_commandBuf = (unsigned int **)&v4->fields.commandBuf;
  sub_1C2D434((CGThumbnailListItem_o *)&v4->fields.commandBuf, v62, v64, v65);
  commandBuf = (int *)v4->fields.commandBuf;
  if ( !commandBuf )
    goto LABEL_343;
  v124 = 0;
  v67 = 0;
  v68 = 0;
  while ( (__int64)v67 < commandBuf[6] )
  {
    v69 = sub_1C2D6DC(QuestAfterAction_Command_TypeInfo);
    System_Object___ctor((Il2CppObject *)v69, 0);
    if ( v68 >= LODWORD(afterActionVals->max_length) )
      goto LABEL_483;
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)System_Int32__Parse(
                                                                        afterActionVals->m_Items[v68],
                                                                        0);
    if ( !v69 )
      goto LABEL_343;
    *(_DWORD *)(v69 + 16) = (_DWORD)MasterData_object;
    v71 = (int)v68 | 1LL;
    if ( (unsigned int)v71 >= LODWORD(afterActionVals->max_length) )
      goto LABEL_483;
    v72 = afterActionVals->m_Items[v71];
    *(_QWORD *)(v69 + 24) = v72;
    v73 = (System_String_o **)(v69 + 24);
    sub_1C2D434((CGThumbnailListItem_o *)(v69 + 24), (int32_t)v72, (int32_t)v30, v70);
    if ( !v68 && !v4->fields.isRequestedStopBgm && *(_DWORD *)(v69 + 16) == 850 )
      v4->fields.isRequestedStopBgm = 1;
    if ( v4->fields.MapMoveBeforeFocusSpotId < 0 && *(_DWORD *)(v69 + 16) == 350 )
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
    v74 = *(_DWORD *)(v69 + 16);
    if ( v4->fields.IsMoveToEventRewardShop || v74 != 700 )
    {
      if ( v74 == 703 )
      {
        MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)*v73;
        if ( !*v73 )
          goto LABEL_343;
        MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)System_String__Split_63509756(
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
          v75 = (int)MasterData_object > 0;
        }
        else
        {
          v75 = 0;
        }
        v4->fields.IsMoveBeforeFadeIn = v75;
        v4->fields.IsMoveToClassScore = 1;
        v74 = *(_DWORD *)(v69 + 16);
      }
      if ( v74 == 800 )
      {
        MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)QuestAfterAction_Command__GetAvailableRandomVoice(
                                                                            (QuestAfterAction_Command_o *)v69,
                                                                            &svtId,
                                                                            v30);
        if ( MasterData_object )
        {
          svtVoices = (System_Collections_Generic_Dictionary_int__object__o *)v4->fields.svtVoices;
          v77 = svtId;
          v78 = MasterData_object;
          v79 = sub_1C2D6DC(QuestAfterAction_VoiceInfo_TypeInfo);
          System_Object___ctor((Il2CppObject *)v79, 0);
          *(_DWORD *)(v79 + 16) = v77;
          *(_QWORD *)(v79 + 24) = v78;
          sub_1C2D434((CGThumbnailListItem_o *)(v79 + 24), (int32_t)v78, v80, v81);
          if ( !svtVoices )
            goto LABEL_343;
          System_Collections_Generic_Dictionary_int__object___Add(
            svtVoices,
            v67,
            (Il2CppObject *)v79,
            (const MethodInfo_33E127C *)Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__Add__);
          p_commandBuf = (unsigned int **)&v4->fields.commandBuf;
        }
        v74 = *(_DWORD *)(v69 + 16);
      }
      if ( v74 == 702 )
      {
        MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)*v73;
        if ( !*v73 )
          goto LABEL_343;
        MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)System_String__Split_63509756(
                                                                            (System_String_o *)MasterData_object,
                                                                            (System_String_o *)StringLiteral_811/*","*/,
                                                                            0,
                                                                            0);
        if ( !MasterData_object )
          goto LABEL_343;
        MasterName_k__BackingField = (System_String_c *)MasterData_object->fields._MasterName_k__BackingField;
        v83 = MasterData_object;
        if ( MasterName_k__BackingField )
        {
          if ( !(_DWORD)MasterName_k__BackingField )
            goto LABEL_483;
          MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)System_Int32__Parse(
                                                                              *(System_String_o **)&MasterData_object->fields.revision,
                                                                              0);
          if ( (int)MasterData_object >= 1 )
          {
            if ( SLODWORD(v83->fields._MasterName_k__BackingField) < 2 )
              v84 = 0;
            else
              v84 = System_Int32__Parse((System_String_o *)v83->fields.list, 0);
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            TerminalPramsManager__SetAutoResumeForFolder(v84, 0);
            if ( !byte_4C216DE )
            {
              sub_1C2D490(&TerminalPramsManager_TypeInfo);
              byte_4C216DE = 1;
            }
            MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
              MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
            }
            v85 = BalanceConfig_TypeInfo;
            klass_high = HIDWORD(MasterData_object[2].fields.list->klass);
            if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
              v85 = BalanceConfig_TypeInfo;
            }
            p_commandBuf = (unsigned int **)&v4->fields.commandBuf;
            if ( klass_high == v85->static_fields->OrdealCallWarId )
            {
              v4->fields.BlankEarthTargetWarId = v84;
              v124 = 1;
            }
          }
        }
      }
    }
    else
    {
      v4->fields.IsMoveToEventRewardShop = 1;
    }
    v87 = *(_DWORD *)(v69 + 16);
    if ( v87 <= 205 )
    {
      if ( (unsigned int)(v87 - 100) < 0xF && ((0x7C1Fu >> (v87 - 100)) & 1) != 0 )
      {
        v11 = 0;
      }
      else
      {
        if ( (unsigned int)(v87 - 200) > 5 )
          goto LABEL_326;
        v11 = 1;
      }
    }
    else if ( v87 <= 550 )
    {
      if ( (unsigned int)(v87 - 400) < 0xD )
      {
        v11 = 2;
      }
      else
      {
        if ( v87 != 550 )
          goto LABEL_326;
        v11 = 3;
      }
    }
    else
    {
      v88 = v87 - 1000;
      if ( v88 >= 0xD || ((0x1C07u >> v88) & 1) == 0 )
        goto LABEL_326;
      v11 = 4;
    }
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)v4->fields.commandTypeIds;
    if ( !MasterData_object )
      goto LABEL_343;
    Item = (System_Collections_Generic_List_int__o *)System_Collections_Generic_Dictionary_Int32Enum__object___get_Item(
                                                       (System_Collections_Generic_Dictionary_TKey__TValue__o *)MasterData_object,
                                                       v11,
                                                       (const MethodInfo_3414278 *)Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___get_Item__);
    if ( !QuestAfterAction_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(QuestAfterAction_TypeInfo);
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)QuestAfterAction__ExtractCommandTargetId(
                                                                        (QuestAfterAction_Command_o *)v69,
                                                                        v89);
    if ( !Item )
      goto LABEL_343;
    items = Item->fields._items;
    v92 = Method_System_Collections_Generic_List_int__Add__;
    ++Item->fields._version;
    if ( !items )
      goto LABEL_343;
    size = Item->fields._size;
    v11 = (unsigned int)MasterData_object;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_int___AddWithResize(
        Item,
        (int32_t)MasterData_object,
        *(const MethodInfo_376CB60 **)(*(_QWORD *)(v92[4] + 192LL) + 112LL));
    }
    else
    {
      Item->fields._size = size + 1;
      items->m_Items[size] = (int)MasterData_object;
    }
LABEL_326:
    if ( v4->fields.ActionMapTargetId <= 0 )
      QuestAfterAction__SetActionMap(v4, (QuestAfterAction_Command_o *)v69, v30);
    if ( *(_DWORD *)(v69 + 16) == 102 )
    {
      v94 = (QuestAfterAction_o *)System_Int32__Parse(*v73, 0);
      MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)QuestAfterAction__GetMapGimmickId(
                                                                          v94,
                                                                          (int32_t)v94,
                                                                          v95);
      if ( !MasterData_object )
        goto LABEL_343;
      v96 = (System_String_c *)MasterData_object->fields._MasterName_k__BackingField;
      v97 = MasterData_object;
      if ( (int)v96 >= 1 )
      {
        v98 = 0;
        while ( v98 < (unsigned int)v96 )
        {
          MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)v4->fields.invalidMapGimmickIdList;
          if ( !MasterData_object )
            goto LABEL_343;
          v11 = *((unsigned int *)&v97->fields.revision + v98);
          v99 = *(System_String_Fields *)&MasterData_object->fields._MasterKind_k__BackingField;
          v100 = Method_System_Collections_Generic_List_int__Add__;
          ++HIDWORD(MasterData_object->fields._MasterName_k__BackingField);
          if ( !*(_QWORD *)&v99 )
            goto LABEL_343;
          MasterName_k__BackingField_low = SLODWORD(MasterData_object->fields._MasterName_k__BackingField);
          if ( (unsigned int)MasterName_k__BackingField_low >= *(_DWORD *)(*(_QWORD *)&v99 + 24LL) )
          {
            System_Collections_Generic_List_int___AddWithResize(
              (System_Collections_Generic_List_int__o *)MasterData_object,
              v11,
              *(const MethodInfo_376CB60 **)(*(_QWORD *)(v100[4] + 192LL) + 112LL));
          }
          else
          {
            LODWORD(MasterData_object->fields._MasterName_k__BackingField) = MasterName_k__BackingField_low + 1;
            *(_DWORD *)(*(_QWORD *)&v99 + 4 * MasterName_k__BackingField_low + 32) = v11;
          }
          LODWORD(v96) = v97->fields._MasterName_k__BackingField;
          if ( (__int64)++v98 >= (int)v96 )
            goto LABEL_339;
        }
LABEL_483:
        sub_1C2D6F4(MasterData_object, v11, v30);
      }
    }
LABEL_339:
    v102 = *p_commandBuf;
    if ( !*p_commandBuf )
      goto LABEL_343;
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)sub_1C2D5CC(
                                                                        v69,
                                                                        *(_QWORD *)(*(_QWORD *)v102 + 64LL));
    if ( !MasterData_object )
    {
      v123 = sub_1C2D710();
      sub_1C2D5B8(v123, 0);
    }
    if ( v67 >= v102[6] )
      goto LABEL_483;
    v104 = &v102[2 * v67];
    *((_QWORD *)v104 + 4) = v69;
    sub_1C2D434((CGThumbnailListItem_o *)(v104 + 8), v69, (int32_t)v30, v103);
    commandBuf = (int *)*p_commandBuf;
    v68 += 2;
    ++v67;
    if ( !*p_commandBuf )
      goto LABEL_343;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C23E90 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C23E90 = 1;
  }
  v111 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v111 = TerminalPramsManager_TypeInfo;
  }
  if ( v111->static_fields->_IsPhaseClear_k__BackingField )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v112 = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_QuestMaster___);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C21464 )
    {
      sub_1C2D490(&TerminalPramsManager_TypeInfo);
      byte_4C21464 = 1;
    }
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
    }
    if ( !v112 )
      goto LABEL_343;
    if ( QuestMaster__TryGetQuestEntity(
           (QuestMaster_o *)v112,
           &v129,
           HIDWORD(MasterData_object[2].fields.list->fields.items),
           0) )
    {
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4C216DE )
      {
        sub_1C2D490(&TerminalPramsManager_TypeInfo);
        byte_4C216DE = 1;
      }
      v113 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v113 = TerminalPramsManager_TypeInfo;
      }
      v114 = BalanceConfig_TypeInfo;
      WarId_k__BackingField = v113->static_fields->_WarId_k__BackingField;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v114 = BalanceConfig_TypeInfo;
      }
      if ( WarId_k__BackingField == v114->static_fields->OrdealCallWarId )
      {
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_BlankEarthSpotMaster___);
        if ( v129 && MasterData_object )
        {
          MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__int___TryGetEntity(
                                                                              MasterData_object,
                                                                              &v128,
                                                                              v129->fields.spotId,
                                                                              (const MethodInfo_3387DE4 *)Method_DataMasterBase_BlankEarthSpotMaster__BlankEarthSpotEntity__int__TryGetEntity__);
          if ( ((unsigned __int8)MasterData_object & 1) == 0 )
            goto LABEL_433;
          if ( v128 )
          {
            v116 = (int32_t)v128[1].klass;
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            if ( !byte_4C23E99 )
            {
              sub_1C2D490(&TerminalPramsManager_TypeInfo);
              byte_4C23E99 = 1;
            }
            v117 = TerminalPramsManager_TypeInfo;
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
              v117 = TerminalPramsManager_TypeInfo;
            }
            v117->static_fields->_BlankEarthAfterActionFocusSpotId_k__BackingField = v116;
            goto LABEL_433;
          }
        }
LABEL_343:
        sub_1C2D6EC(MasterData_object, v11);
      }
    }
  }
LABEL_433:
  v118 = TerminalPramsManager_TypeInfo;
  if ( (v124 & 1) == 0 )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C21ACD )
    {
      sub_1C2D490(&TerminalPramsManager_TypeInfo);
      byte_4C21ACD = 1;
    }
    v119 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v119 = TerminalPramsManager_TypeInfo;
    }
    v119->static_fields->_IsAutoResume_k__BackingField = 1;
    if ( !byte_4C23BE3 )
    {
      sub_1C2D490(&TerminalPramsManager_TypeInfo);
      v119 = TerminalPramsManager_TypeInfo;
      byte_4C23BE3 = 1;
    }
    if ( !v119->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v119);
      v119 = TerminalPramsManager_TypeInfo;
    }
    v119->static_fields->_DispState_k__BackingField = 2;
    if ( !byte_4C216DE )
    {
      sub_1C2D490(&TerminalPramsManager_TypeInfo);
      v119 = TerminalPramsManager_TypeInfo;
      byte_4C216DE = 1;
    }
    if ( !v119->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v119);
      v119 = TerminalPramsManager_TypeInfo;
    }
    v120 = BalanceConfig_TypeInfo;
    v121 = v119->static_fields->_WarId_k__BackingField;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v120 = BalanceConfig_TypeInfo;
    }
    v118 = TerminalPramsManager_TypeInfo;
    if ( v121 == v120->static_fields->OrdealCallWarId )
      goto LABEL_488;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C23B24 )
    {
      sub_1C2D490(&TerminalPramsManager_TypeInfo);
      byte_4C23B24 = 1;
    }
    v118 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v118 = TerminalPramsManager_TypeInfo;
    }
    if ( v118->static_fields->_IsOrdealCallWarClear_k__BackingField )
    {
LABEL_488:
      if ( !v118->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v118);
      if ( !byte_4C23B25 )
      {
        sub_1C2D490(&TerminalPramsManager_TypeInfo);
        byte_4C23B25 = 1;
      }
      v118 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v118 = TerminalPramsManager_TypeInfo;
      }
      v118->static_fields->_BlankEarthSpotId_k__BackingField = 0;
      if ( !byte_4C23B24 )
      {
        sub_1C2D490(&TerminalPramsManager_TypeInfo);
        v118 = TerminalPramsManager_TypeInfo;
        byte_4C23B24 = 1;
      }
      if ( !v118->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v118);
        v118 = TerminalPramsManager_TypeInfo;
      }
      if ( !v118->static_fields->_IsOrdealCallWarClear_k__BackingField )
      {
        if ( !v118->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v118);
        if ( !byte_4C23BE3 )
        {
          sub_1C2D490(&TerminalPramsManager_TypeInfo);
          byte_4C23BE3 = 1;
        }
        v118 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v118 = TerminalPramsManager_TypeInfo;
        }
        v118->static_fields->_DispState_k__BackingField = 3;
      }
    }
  }
  if ( !v118->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v118);
  if ( !byte_4C23BE6 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C23BE6 = 1;
  }
  v122 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v122 = TerminalPramsManager_TypeInfo;
  }
  v122->static_fields->_SpotId_k__BackingField = -1;
}


void QuestAfterAction__DeleteContinueData(const MethodInfo *method)
{
  if ( (byte_4C23E66 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_16709/*"afterActionBk"*/);
    byte_4C23E66 = 1;
  }
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_16709/*"afterActionBk"*/, 0);
}


int32_t QuestAfterAction__ExtractCommandTargetId(QuestAfterAction_Command_o *command, const MethodInfo *method)
{
  QuestAfterAction_Command_o *v2; // x19
  QuestAfterAction_Command_c *param; // x8
  __int64 v4; // x2

  v2 = command;
  if ( (byte_4C23E6A & 1) == 0 )
  {
    command = (QuestAfterAction_Command_o *)sub_1C2D490(&StringLiteral_811/*","*/);
    byte_4C23E6A = 1;
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
    sub_1C2D6EC(command, method);
  if ( !LODWORD(command->fields.param) )
    sub_1C2D6F4(command, method, v4);
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
  const MethodInfo *v9; // x3
  int32_t v10; // w2
  const MethodInfo *v11; // x3

  if ( (byte_4C23E78 & 1) == 0 )
  {
    sub_1C2D490(&QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__89_TypeInfo);
    byte_4C23E78 = 1;
  }
  v5 = sub_1C2D6DC(QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__89_TypeInfo);
  QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__89___ctor(
    (QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__89_o *)v5,
    -2,
    0);
  if ( !v5 )
    sub_1C2D6EC(v6, v7);
  *(_QWORD *)(v5 + 56) = this;
  sub_1C2D434((CGThumbnailListItem_o *)(v5 + 56), (int32_t)this, v8, v9);
  *(_QWORD *)(v5 + 48) = commandEnumerable;
  sub_1C2D434((CGThumbnailListItem_o *)(v5 + 48), (int32_t)commandEnumerable, v10, v11);
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
  __int64 v16; // x2
  const MethodInfo *v17; // x3
  System_String_o *v18; // x1
  const MethodInfo *v19; // x3
  __int64 v21; // x0

  if ( (byte_4C23E6B & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Array_Empty_QuestAfterAction_Command___);
    sub_1C2D490(&QuestAfterAction_Command___TypeInfo);
    sub_1C2D490(&QuestAfterAction_Command_TypeInfo);
    byte_4C23E6B = 1;
  }
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)actionVals, 0);
  if ( (IsNullOrEmpty & 1) != 0 )
  {
    v6 = Method_System_Array_Empty_QuestAfterAction_Command___;
    v7 = *((_QWORD *)Method_System_Array_Empty_QuestAfterAction_Command___ + 7);
    if ( !v7 )
    {
      sub_1C7DC00(Method_System_Array_Empty_QuestAfterAction_Command___);
      v7 = v6[7];
    }
    v8 = *(_QWORD *)(v7 + 16);
    if ( (*(_BYTE *)(v8 + 309) & 1) == 0 )
      v8 = sub_1C7DBA4(inited);
    if ( !*(_DWORD *)(v8 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v8);
    v9 = *(_QWORD *)(v6[7] + 16LL);
    if ( (*(_BYTE *)(v9 + 309) & 1) == 0 )
      v9 = sub_1C7DBA4(inited);
    return **(QuestAfterAction_Command_array ***)(v9 + 184);
  }
  else
  {
    if ( !actionVals
      || (IsNullOrEmpty = sub_1C2D538(
                            QuestAfterAction_Command___TypeInfo,
                            (unsigned int)(SLODWORD(actionVals->max_length) / 2))) == 0 )
    {
LABEL_25:
      sub_1C2D6EC(IsNullOrEmpty, v4);
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
        v15 = sub_1C2D6DC(QuestAfterAction_Command_TypeInfo);
        System_Object___ctor((Il2CppObject *)v15, 0);
        if ( v14 - 1 >= LODWORD(actionVals->max_length) )
          goto LABEL_24;
        IsNullOrEmpty = System_Int32__Parse(actionVals->m_Items[v14 - 1], 0);
        if ( !v15 )
          goto LABEL_25;
        *(_DWORD *)(v15 + 16) = IsNullOrEmpty;
        if ( v14 >= LODWORD(actionVals->max_length) )
          goto LABEL_24;
        v18 = actionVals->m_Items[v14];
        *(_QWORD *)(v15 + 24) = v18;
        sub_1C2D434((CGThumbnailListItem_o *)(v15 + 24), (int32_t)v18, v16, v17);
        IsNullOrEmpty = sub_1C2D5CC(v15, *(_QWORD *)(*(_QWORD *)v10 + 64LL));
        if ( !IsNullOrEmpty )
        {
          v21 = sub_1C2D710();
          sub_1C2D5B8(v21, 0);
        }
        if ( v12 >= v10[6] )
LABEL_24:
          sub_1C2D6F4(IsNullOrEmpty, v4, v16);
        *(_QWORD *)(v13 + 8 * v12) = v15;
        sub_1C2D434((CGThumbnailListItem_o *)(v13 + v11), v15, v16, v19);
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

  if ( (byte_4C23E84 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_QuestPhaseDetailAddMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_QuestPhaseDetailMaster___);
    sub_1C2D490(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    sub_1C2D490(&Method_System_Linq_Enumerable_Any_string___);
    sub_1C2D490(&QuestAfterAction_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C23E84 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_35;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_QuestPhaseDetailAddMaster___);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C21464 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C21464 = 1;
  }
  Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  }
  v8 = *(_DWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 20LL);
  if ( !byte_4C21463 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
    byte_4C21463 = 1;
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
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_QuestPhaseDetailMaster___);
      if ( Instance )
      {
        v10 = QuestPhaseDetailMaster__GetAfterAction((QuestPhaseDetailMaster_o *)Instance, questId, phase, 0);
        if ( v10 )
          return v10;
        Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( Instance )
        {
          v12 = DataManager__GetMasterData_object_(
                  Instance,
                  (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_QuestMaster___);
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          if ( !byte_4C21464 )
          {
            sub_1C2D490(&TerminalPramsManager_TypeInfo);
            byte_4C21464 = 1;
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
                       (const MethodInfo_3387D98 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
            if ( Entity )
            {
              v14 = Entity;
              if ( System_Linq_Enumerable__Any_object_(
                     (System_Collections_Generic_IEnumerable_TSource__o *)Entity[6].klass,
                     (const MethodInfo_30DA4C8 *)Method_System_Linq_Enumerable_Any_string___) )
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
    sub_1C2D6EC(Instance, v6);
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

  if ( (byte_4C23E83 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_QuestPhaseDetailAddMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_QuestPhaseDetailMaster___);
    sub_1C2D490(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    sub_1C2D490(&Method_System_Linq_Enumerable_Any_string___);
    sub_1C2D490(&QuestAfterAction_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C23E83 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_35;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_QuestPhaseDetailAddMaster___);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C21464 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C21464 = 1;
  }
  Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  }
  v8 = *(_DWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 20LL);
  if ( !byte_4C21463 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
    byte_4C21463 = 1;
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
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_QuestPhaseDetailMaster___);
      if ( Instance )
      {
        v10 = QuestPhaseDetailMaster__GetBeforeAction((QuestPhaseDetailMaster_o *)Instance, questId, phase, 0);
        if ( v10 )
          return v10;
        Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( Instance )
        {
          v12 = DataManager__GetMasterData_object_(
                  Instance,
                  (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_QuestMaster___);
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          if ( !byte_4C21464 )
          {
            sub_1C2D490(&TerminalPramsManager_TypeInfo);
            byte_4C21464 = 1;
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
                       (const MethodInfo_3387D98 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
            if ( Entity )
            {
              v14 = Entity;
              if ( System_Linq_Enumerable__Any_object_(
                     (System_Collections_Generic_IEnumerable_TSource__o *)Entity[5].monitor,
                     (const MethodInfo_30DA4C8 *)Method_System_Linq_Enumerable_Any_string___) )
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
    sub_1C2D6EC(Instance, v6);
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
        return dword_C425E8[commandId - 1000];
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
        const MethodInfo_316755C *method)
{
  UnityEngine_Object_o *MapGameObject; // x20
  _BOOL8 v11; // x0
  __int64 v12; // x1

  if ( !method->rgctx_data )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    if ( !method->rgctx_data )
      sub_1C7DC00();
  }
  MapGameObject = (UnityEngine_Object_o *)QuestAfterAction__GetMapGameObject(this, comType, id, state, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v11 = UnityEngine_Object__op_Equality(MapGameObject, 0, 0);
  if ( v11 )
    return 0;
  if ( !MapGameObject )
    sub_1C2D6EC(v11, v12);
  return UnityEngine_GameObject__GetComponent_object_(
           (UnityEngine_GameObject_o *)MapGameObject,
           (const MethodInfo_3125ED0 *)method->rgctx_data->_0_UnityEngine_GameObject_GetComponent_T_);
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
  if ( (byte_4C23E7E & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    this = (QuestAfterAction_o *)sub_1C2D490(&SrcSpotBasePrefab_TypeInfo);
    byte_4C23E7E = 1;
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
        sub_1C2D6EC(this, *(_QWORD *)&comType);
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
  __int64 v7; // x2
  int max_length; // w8
  System_Object_array *v9; // x21
  unsigned int v10; // w23
  Il2CppClass **v11; // x8
  Il2CppClass *v12; // x22
  struct System_Int32_array *items; // x8
  _QWORD *v14; // x9
  __int64 size; // x10

  if ( (byte_4C23E6C & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_MapGimmickMaster___);
    sub_1C2D490(&Method_DataMasterBase_MapGimmickMaster__MapGimmickEntity__int__getEntitys__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C23E6C = 1;
  }
  v4 = (System_Collections_Generic_List_int__o *)sub_1C2D6DC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v4,
    (const MethodInfo_376C30C *)Method_System_Collections_Generic_List_int___ctor__);
  Instance = (System_Object_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  Instance = (System_Object_array *)DataManager__GetMasterData_object_(
                                      (DataManager_o *)Instance,
                                      (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_MapGimmickMaster___);
  if ( !Instance )
    goto LABEL_19;
  Instance = DataMasterBase_object__object__int___getEntitys(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
               (const MethodInfo_338701C *)Method_DataMasterBase_MapGimmickMaster__MapGimmickEntity__int__getEntitys__);
  if ( !Instance )
    goto LABEL_19;
  max_length = Instance->max_length;
  v9 = Instance;
  if ( max_length >= 1 )
  {
    v10 = 0;
    while ( 1 )
    {
      if ( v10 >= max_length )
        sub_1C2D6F4(Instance, name_low, v7);
      v11 = &v9->obj.klass + (int)v10;
      v12 = v11[4];
      if ( !v12 )
        break;
      Instance = (System_Object_array *)MapGimmickEntity__GetRaidDispSpotIdFromScript((MapGimmickEntity_o *)v11[4], 0);
      if ( (_DWORD)Instance == spotId )
      {
        if ( !v4 )
          break;
        name_low = LODWORD(v12->_1.name);
        items = v4->fields._items;
        v14 = Method_System_Collections_Generic_List_int__Add__;
        ++v4->fields._version;
        if ( !items )
          break;
        size = v4->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v4,
            name_low,
            *(const MethodInfo_376CB60 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
        }
        else
        {
          v4->fields._size = size + 1;
          items->m_Items[size] = name_low;
        }
      }
      max_length = v9->max_length;
      if ( (int)++v10 >= max_length )
        goto LABEL_17;
    }
LABEL_19:
    sub_1C2D6EC(Instance, name_low);
  }
LABEL_17:
  if ( !v4 )
    goto LABEL_19;
  return System_Collections_Generic_List_int___ToArray(
           v4,
           (const MethodInfo_376E618 *)Method_System_Collections_Generic_List_int__ToArray__);
}


int32_t QuestAfterAction__GetState(QuestAfterAction_o *this, const MethodInfo *method)
{
  struct CStateManager_QuestAfterAction__o *fsm; // x8

  if ( (byte_4C23E7C & 1) == 0 )
  {
    sub_1C2D490(&Method_CStateManager_QuestAfterAction__getState__);
    byte_4C23E7C = 1;
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
  __int64 v11; // x1
  CStateManager_T__o *v12; // x21
  Il2CppObject *v13; // x22
  CStateManager_T__o *v14; // x21
  QuestAfterAction_StateAdditional_o *v15; // x22
  CStateManager_T__o *v16; // x20
  QuestAfterAction_StateInstant_o *v17; // x21
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  int32_t v20; // w20
  System_Collections_Generic_Dictionary_TKey__TValue__o *v21; // x21
  int v22; // w8
  System_Collections_Generic_List_int__o *v23; // x22
  Il2CppObject *Component_object; // x0
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  System_Collections_Generic_List_int__o *v29; // x20
  struct System_Collections_Generic_List_int__o **p_invalidMapGimmickIdList; // x19
  int32_t v31; // w2
  const MethodInfo *v32; // x3

  if ( (byte_4C23E67 & 1) == 0 )
  {
    sub_1C2D490(&Method_CStateManager_QuestAfterAction___ctor__);
    sub_1C2D490(&Method_CStateManager_QuestAfterAction__add__);
    sub_1C2D490(&CStateManager_QuestAfterAction__TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___ContainsKey__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___get_Item__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___set_Item__);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__Clear__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C2D490(&QuestAfterAction_StateAdditional_TypeInfo);
    sub_1C2D490(&QuestAfterAction_StateInstant_TypeInfo);
    sub_1C2D490(&QuestAfterAction_StateMain_TypeInfo);
    sub_1C2D490(&QuestAfterAction_StateNone_TypeInfo);
    byte_4C23E67 = 1;
  }
  p_fsm = &this->fields.fsm;
  if ( !this->fields.fsm )
  {
    v5 = (CStateManager_T__o *)sub_1C2D6DC(CStateManager_QuestAfterAction__TypeInfo);
    CStateManager_object____ctor(
      v5,
      (Il2CppObject *)this,
      4,
      (const MethodInfo_3313C68 *)Method_CStateManager_QuestAfterAction___ctor__);
    this->fields.fsm = (struct CStateManager_QuestAfterAction__o *)v5;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.fsm, (int32_t)v5, v6, v7);
    fsm = (CStateManager_T__o *)this->fields.fsm;
    v9 = (Il2CppObject *)sub_1C2D6DC(QuestAfterAction_StateNone_TypeInfo);
    System_Object___ctor(v9, 0);
    if ( !fsm )
      goto LABEL_21;
    CStateManager_object___add(
      fsm,
      0,
      (IState_T__o *)v9,
      (const MethodInfo_3313D10 *)Method_CStateManager_QuestAfterAction__add__);
    v12 = (CStateManager_T__o *)*p_fsm;
    v13 = (Il2CppObject *)sub_1C2D6DC(QuestAfterAction_StateMain_TypeInfo);
    System_Object___ctor(v13, 0);
    if ( !v12 )
      goto LABEL_21;
    CStateManager_object___add(
      v12,
      1,
      (IState_T__o *)v13,
      (const MethodInfo_3313D10 *)Method_CStateManager_QuestAfterAction__add__);
    v14 = (CStateManager_T__o *)*p_fsm;
    v15 = (QuestAfterAction_StateAdditional_o *)sub_1C2D6DC(QuestAfterAction_StateAdditional_TypeInfo);
    QuestAfterAction_StateAdditional___ctor(v15, 0);
    if ( !v14 )
      goto LABEL_21;
    CStateManager_object___add(
      v14,
      2,
      (IState_T__o *)v15,
      (const MethodInfo_3313D10 *)Method_CStateManager_QuestAfterAction__add__);
    v16 = (CStateManager_T__o *)*p_fsm;
    v17 = (QuestAfterAction_StateInstant_o *)sub_1C2D6DC(QuestAfterAction_StateInstant_TypeInfo);
    QuestAfterAction_StateInstant___ctor(v17, 0);
    if ( !v16 )
      goto LABEL_21;
    CStateManager_object___add(
      v16,
      3,
      (IState_T__o *)v17,
      (const MethodInfo_3313D10 *)Method_CStateManager_QuestAfterAction__add__);
  }
  QuestAfterAction__SetState(this, 0, v2);
  this->fields.commandBuf = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.commandBuf, 0, v18, v19);
  v20 = 0;
  this->fields.commandIdx = 0;
  do
  {
    commandTypeIds = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.commandTypeIds;
    if ( !commandTypeIds )
      goto LABEL_21;
    commandTypeIds = (System_Collections_Generic_Dictionary_TKey__TValue__o *)System_Collections_Generic_Dictionary_Int32Enum__object___ContainsKey(
                                                                                commandTypeIds,
                                                                                v20,
                                                                                (const MethodInfo_341450C *)Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___ContainsKey__);
    v21 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.commandTypeIds;
    if ( ((unsigned __int8)commandTypeIds & 1) != 0 )
    {
      if ( !v21 )
        goto LABEL_21;
      commandTypeIds = (System_Collections_Generic_Dictionary_TKey__TValue__o *)System_Collections_Generic_Dictionary_Int32Enum__object___get_Item(
                                                                                  (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.commandTypeIds,
                                                                                  v20,
                                                                                  (const MethodInfo_3414278 *)Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___get_Item__);
      if ( !commandTypeIds )
        goto LABEL_21;
      v22 = HIDWORD(commandTypeIds->fields._entries) + 1;
      LODWORD(commandTypeIds->fields._entries) = 0;
      HIDWORD(commandTypeIds->fields._entries) = v22;
    }
    else
    {
      v23 = (System_Collections_Generic_List_int__o *)sub_1C2D6DC(System_Collections_Generic_List_int__TypeInfo);
      System_Collections_Generic_List_int____ctor(
        v23,
        (const MethodInfo_376C30C *)Method_System_Collections_Generic_List_int___ctor__);
      if ( !v21 )
        goto LABEL_21;
      System_Collections_Generic_Dictionary_Int32Enum__object___set_Item(
        v21,
        v20,
        (Il2CppObject *)v23,
        (const MethodInfo_3414304 *)Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___set_Item__);
    }
    ++v20;
  }
  while ( v20 != 5 );
  commandTypeIds = (System_Collections_Generic_Dictionary_TKey__TValue__o *)UnityEngine_Component__get_gameObject(
                                                                              (UnityEngine_Component_o *)this,
                                                                              0);
  if ( !commandTypeIds
    || (Component_object = UnityEngine_GameObject__GetComponent_object_(
                             (UnityEngine_GameObject_o *)commandTypeIds,
                             (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___),
        this->fields.screenCollider = (struct UnityEngine_BoxCollider_o *)Component_object,
        sub_1C2D434((CGThumbnailListItem_o *)&this->fields.screenCollider, (int32_t)Component_object, v25, v26),
        (commandTypeIds = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.screenCollider) == 0) )
  {
LABEL_21:
    sub_1C2D6EC(commandTypeIds, v11);
  }
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)commandTypeIds, 0, 0);
  this->fields.lastDispSpot = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.lastDispSpot, 0, v27, v28);
  v29 = (System_Collections_Generic_List_int__o *)sub_1C2D6DC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v29,
    (const MethodInfo_376C30C *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.invalidMapGimmickIdList = v29;
  p_invalidMapGimmickIdList = &this->fields.invalidMapGimmickIdList;
  sub_1C2D434((CGThumbnailListItem_o *)p_invalidMapGimmickIdList, (int32_t)v29, v31, v32);
  *((_BYTE *)p_invalidMapGimmickIdList + 160) = 0;
}


bool QuestAfterAction__IsActiveCommand(QuestAfterAction_o *this, const MethodInfo *method)
{
  return this->fields.commandBuf != 0;
}


// local variable allocation has failed, the output may be wrong!
bool QuestAfterAction__IsExistCommand(
        QuestAfterAction_o *this,
        int32_t commandType,
        int32_t commandTypeId,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_TKey__TValue__o *commandTypeIds; // x0

  if ( (byte_4C23E6F & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___ContainsKey__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___get_Item__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__Contains__);
    byte_4C23E6F = 1;
  }
  commandTypeIds = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.commandTypeIds;
  if ( !commandTypeIds )
    goto LABEL_9;
  if ( System_Collections_Generic_Dictionary_Int32Enum__object___ContainsKey(
         commandTypeIds,
         commandType,
         (const MethodInfo_341450C *)Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___ContainsKey__) )
  {
    commandTypeIds = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.commandTypeIds;
    if ( commandTypeIds )
    {
      commandTypeIds = (System_Collections_Generic_Dictionary_TKey__TValue__o *)System_Collections_Generic_Dictionary_Int32Enum__object___get_Item(
                                                                                  commandTypeIds,
                                                                                  commandType,
                                                                                  (const MethodInfo_3414278 *)Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___get_Item__);
      if ( commandTypeIds )
        return System_Collections_Generic_List_int___Contains(
                 (System_Collections_Generic_List_int__o *)commandTypeIds,
                 commandTypeId,
                 (const MethodInfo_376CED8 *)Method_System_Collections_Generic_List_int__Contains__);
    }
LABEL_9:
    sub_1C2D6EC(commandTypeIds, *(_QWORD *)&commandType);
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
      sub_1C2D6F4(this, *(_QWORD *)&spotId, method);
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
    sub_1C2D6EC(this, *(_QWORD *)&spotId);
  }
  return v8;
}


bool QuestAfterAction__IsExistTerminalTransition(QuestAfterAction_o *this, const MethodInfo *method)
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
    v5 = 0;
    m_Items = commandBuf->m_Items;
    do
    {
      if ( (unsigned int)v5 >= max_length )
        sub_1C2D6F4(this, method, v2);
      v7 = m_Items[v5];
      if ( !v7 )
        sub_1C2D6EC(this, method);
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


bool QuestAfterAction__IsGimmickDispCommand(int32_t cmd, const MethodInfo *method)
{
  return (cmd & 0xFFFFFFFD) == 401;
}


bool QuestAfterAction__IsMapChangeable(QuestAfterAction_o *this, const MethodInfo *method)
{
  ScrTerminalMap_o *v2; // x0
  UnityEngine_GameObject_c *klass; // x8

  if ( (byte_4C23E81 & 1) == 0 )
  {
    sub_1C2D490(&TerminalSceneComponent_TypeInfo);
    byte_4C23E81 = 1;
  }
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4C21383 )
  {
    sub_1C2D490(&TerminalSceneComponent_TypeInfo);
    byte_4C21383 = 1;
  }
  v2 = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v2 = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
  }
  klass = v2->fields.subRootGimmickP->klass;
  if ( !klass || (v2 = *(ScrTerminalMap_o **)&klass->_2.static_fields_size) == 0 )
    sub_1C2D6EC(v2, method);
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
  __int64 v2; // x2
  il2cpp_array_size_t max_length; // x8

  if ( actionCommand )
  {
    max_length = actionCommand->max_length;
    if ( max_length )
    {
      if ( !(_DWORD)max_length )
        sub_1C2D6F4(actionCommand, method, v2);
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

  if ( (byte_4C23E7C & 1) == 0 )
  {
    sub_1C2D490(&Method_CStateManager_QuestAfterAction__getState__);
    byte_4C23E7C = 1;
  }
  fsm = this->fields.fsm;
  return fsm && fsm->fields.m_state == 1;
}


bool QuestAfterAction__IsPlayingAction(QuestAfterAction_o *this, const MethodInfo *method)
{
  struct CStateManager_QuestAfterAction__o *fsm; // x8

  if ( (byte_4C23E7C & 1) == 0 )
  {
    sub_1C2D490(&Method_CStateManager_QuestAfterAction__getState__);
    byte_4C23E7C = 1;
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
  __int64 v2; // x2
  bool result; // w0
  struct QuestAfterAction_Command_array *commandBuf; // x10
  int32_t commandIdx; // w8
  int32_t max_length; // w9
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
      sub_1C2D6F4(1, method, v2);
    if ( !*(_QWORD *)v7 )
      sub_1C2D6EC(1, method);
    v8 = *(_DWORD *)(*(_QWORD *)v7 + 16LL);
    if ( v8 == 405 || v8 == 520 )
      break;
    ++commandIdx;
    v7 += 8;
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
  const MethodInfo *v20; // x3
  struct TerminalTransitionInfo_o *TransitionInfo_k__BackingField; // x0
  Il2CppClass *klass; // x1
  __int64 v23; // x0
  __int64 v24; // x1
  struct TerminalTransitionInfo_o *v25; // x8
  EventMissionActionEntity_o *v26; // x0
  EventMissionActionEntity_o *v27; // x23
  Il2CppObject *v28; // x0
  Il2CppObject *v29; // x23
  TerminalPramsManager_c *v30; // x0
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  struct System_String_array *vals; // x1
  struct TerminalTransitionInfo_o *v34; // x8
  System_Collections_Generic_List_Enumerator_object__o v35; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v36; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4C23E73 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_EventMissionActionAddMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_EventMissionActionMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_EventMissionMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_EventMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_ShopActionMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_ShopMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__);
    sub_1C2D490(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
    sub_1C2D490(&Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__GetEntity__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_ShopActionEntity__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_ShopActionEntity__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_ShopActionEntity__get_Current__);
    sub_1C2D490(&EventMissionActionInfo_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_ShopActionEntity__GetEnumerator__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    sub_1C2D490(&TerminalSceneComponent_TypeInfo);
    byte_4C23E73 = 1;
  }
  memset(&v36, 0, sizeof(v36));
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  TerminalTransitionInfoData = TerminalPramsManager__Load_TerminalTransitionInfoData(0);
  if ( !TerminalTransitionInfoData )
    return;
  v4 = TerminalTransitionInfoData;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4C21383 )
  {
    sub_1C2D490(&TerminalSceneComponent_TypeInfo);
    byte_4C21383 = 1;
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
      Master_object = (char *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_ShopMaster___);
      if ( !Master_object )
        goto LABEL_67;
      Entity = DataMasterBase_object__object__int___GetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                 v4->fields.shopId,
                 (const MethodInfo_3387D98 *)Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__);
      if ( Entity )
      {
        v12 = Entity;
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Master_object = (char *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_EventMaster___);
        if ( !Master_object )
          goto LABEL_67;
        v13 = DataMasterBase_object__object__int___GetEntity(
                (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                (int32_t)v12[1].monitor,
                (const MethodInfo_3387D98 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
        if ( !v13 || !EventEntity__IsEventPeriod((EventEntity_o *)v13, 0, 0) )
          goto LABEL_66;
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Master_object = (char *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_ShopActionMaster___);
        if ( !Master_object )
          goto LABEL_67;
        Master_object = (char *)ShopActionMaster__GetEntityList(
                                  (ShopActionMaster_o *)Master_object,
                                  (int32_t)v12[1].klass,
                                  0);
        if ( !Master_object )
          goto LABEL_67;
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v35,
          (System_Collections_Generic_List_object__o *)Master_object,
          (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_ShopActionEntity__GetEnumerator__);
        v36 = v35;
        while ( 1 )
        {
          v14 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v36,
                  (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_ShopActionEntity__MoveNext__);
          if ( !v14 )
            break;
          current = v36.fields._current;
          if ( !v36.fields._current )
            sub_1C2D6EC(v14, v15);
          if ( LODWORD(v36.fields._current[1].monitor) == 4 )
          {
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            if ( !byte_4C23E9A )
            {
              sub_1C2D490(&TerminalPramsManager_TypeInfo);
              byte_4C23E9A = 1;
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
              sub_1C2D6EC(0, v18);
            klass = current[2].klass;
            TransitionInfo_k__BackingField->fields.afterActionVals = (struct System_String_array *)klass;
            sub_1C2D434(
              (CGThumbnailListItem_o *)&TransitionInfo_k__BackingField->fields.afterActionVals,
              (int32_t)klass,
              v19,
              v20);
            v25 = v6->fields._TransitionInfo_k__BackingField;
            if ( !v25 )
              sub_1C2D6EC(v23, v24);
            v25->fields.optionId = (int32_t)current[2].monitor;
            break;
          }
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v36,
          (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_ShopActionEntity__Dispose__);
      }
    }
  }
  else
  {
    Master_object = (char *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Master_object )
      goto LABEL_67;
    v7 = (DataManager_o *)Master_object;
    Master_object = (char *)DataManager__GetMasterData_object_(
                              (DataManager_o *)Master_object,
                              (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_EventMissionActionAddMaster___);
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
      v10 = (EventMissionActionInfo_o *)sub_1C2D6DC(EventMissionActionInfo_TypeInfo);
      EventMissionActionInfo___ctor_44517668(v10, v9, 0);
    }
    else
    {
      Master_object = (char *)DataManager__GetMasterData_object_(
                                v7,
                                (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_EventMissionActionMaster___);
      if ( !Master_object )
        goto LABEL_67;
      v26 = EventMissionActionMaster__getEntityFromIdProgressTypeAndActionType(
              (EventMissionActionMaster_o *)Master_object,
              v4->fields.missionId,
              5,
              4,
              0);
      if ( !v26 )
        return;
      v27 = v26;
      v10 = (EventMissionActionInfo_o *)sub_1C2D6DC(EventMissionActionInfo_TypeInfo);
      EventMissionActionInfo___ctor(v10, v27, 0);
    }
    Master_object = (char *)DataManager__GetMasterData_object_(
                              v7,
                              (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_EventMissionMaster___);
    if ( !Master_object )
      goto LABEL_67;
    v28 = DataMasterBase_object__object__int___GetEntity(
            (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
            v4->fields.missionId,
            (const MethodInfo_3387D98 *)Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__GetEntity__);
    if ( v28 )
    {
      v29 = v28;
      Master_object = (char *)DataManager__GetMasterData_object_(
                                v7,
                                (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_EventMaster___);
      if ( !Master_object )
        goto LABEL_67;
      Master_object = (char *)DataMasterBase_object__object__int___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                HIDWORD(v29[1].monitor),
                                (const MethodInfo_3387D98 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
      if ( !Master_object )
        goto LABEL_67;
      if ( EventEntity__IsEventPeriod((EventEntity_o *)Master_object, 0, 0) )
      {
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_4C23E9A )
        {
          sub_1C2D490(&TerminalPramsManager_TypeInfo);
          byte_4C23E9A = 1;
        }
        v30 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v30 = TerminalPramsManager_TypeInfo;
        }
        v30->static_fields->meSceneStatus = 2;
        TerminalSceneComponent__CreateTransitionInfo(v6, v4, 0);
        if ( v10 )
        {
          Master_object = (char *)v6->fields._TransitionInfo_k__BackingField;
          if ( Master_object )
          {
            vals = v10->fields.vals;
            *((_QWORD *)Master_object + 4) = vals;
            sub_1C2D434((CGThumbnailListItem_o *)(Master_object + 32), (int32_t)vals, v31, v32);
            v34 = v6->fields._TransitionInfo_k__BackingField;
            if ( v34 )
            {
              v34->fields.optionId = v10->fields.optionId;
              return;
            }
          }
        }
LABEL_67:
        sub_1C2D6EC(Master_object, v3);
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

  if ( (byte_4C23E70 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__get_Values__);
    sub_1C2D490(&Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_QuestAfterAction_VoiceInfo__TypeInfo);
    byte_4C23E70 = 1;
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
      sub_1C2D6EC(0, endAct);
    Values = System_Collections_Generic_Dictionary_int__object___get_Values(
               (System_Collections_Generic_Dictionary_int__object__o *)svtVoices,
               (const MethodInfo_33E108C *)Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__get_Values__);
    v7 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_QuestAfterAction_VoiceInfo__TypeInfo);
    System_Collections_Generic_List_object____ctor_58233976(
      v7,
      (System_Collections_Generic_IEnumerable_T__o *)Values,
      (const MethodInfo_3789478 *)Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo___ctor__);
    QuestAfterAction__LoadVoice_36030156(
      this,
      (System_Collections_Generic_List_QuestAfterAction_VoiceInfo__o *)v7,
      endAct,
      v8);
  }
}


void QuestAfterAction__LoadVoice_36030156(
        QuestAfterAction_o *this,
        System_Collections_Generic_List_QuestAfterAction_VoiceInfo__o *svtVInfos,
        System_Action_o *endAct,
        const MethodInfo *method)
{
  __int64 v7; // x21
  System_Collections_Generic_List_QuestAfterAction_VoiceInfo__o *Instance; // x0
  __int64 v9; // x1
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  System_Collections_Generic_List_QuestAfterAction_VoiceInfo__o **v12; // x28
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  System_Action_o **v15; // x19
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  System_String_o *VoiceAssetName_42560796; // x19
  Il2CppObject *v19; // x20
  System_Action_o *v20; // x22

  while ( 1 )
  {
    if ( (byte_4C23E71 & 1) == 0 )
    {
      sub_1C2D490(&System_Action_TypeInfo);
      sub_1C2D490(&Method_System_Linq_Enumerable_Any_QuestAfterAction_VoiceInfo___);
      sub_1C2D490(&Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo__RemoveAt__);
      sub_1C2D490(&Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo__get_Item__);
      sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      sub_1C2D490(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
      sub_1C2D490(&Method_QuestAfterAction___c__DisplayClass82_0__LoadVoice_b__0__);
      sub_1C2D490(&QuestAfterAction___c__DisplayClass82_0_TypeInfo);
      byte_4C23E71 = 1;
    }
    v7 = sub_1C2D6DC(QuestAfterAction___c__DisplayClass82_0_TypeInfo);
    QuestAfterAction___c__DisplayClass82_0___ctor((QuestAfterAction___c__DisplayClass82_0_o *)v7, 0);
    if ( !v7 )
      goto LABEL_17;
    *(_QWORD *)(v7 + 16) = svtVInfos;
    v12 = (System_Collections_Generic_List_QuestAfterAction_VoiceInfo__o **)(v7 + 16);
    sub_1C2D434((CGThumbnailListItem_o *)(v7 + 16), (int32_t)svtVInfos, v10, v11);
    *(_QWORD *)(v7 + 24) = this;
    sub_1C2D434((CGThumbnailListItem_o *)(v7 + 24), (int32_t)this, v13, v14);
    *(_QWORD *)(v7 + 32) = endAct;
    v15 = (System_Action_o **)(v7 + 32);
    sub_1C2D434((CGThumbnailListItem_o *)(v7 + 32), (int32_t)endAct, v16, v17);
    if ( !System_Linq_Enumerable__Any_object_(
            *(System_Collections_Generic_IEnumerable_TSource__o **)(v7 + 16),
            (const MethodInfo_30DA4C8 *)Method_System_Linq_Enumerable_Any_QuestAfterAction_VoiceInfo___) )
    {
      Instance = (System_Collections_Generic_List_QuestAfterAction_VoiceInfo__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( Instance )
      {
        CommonUI__SetLoadMode((CommonUI_o *)Instance, 0, 0);
        ActionExtensions__Call(*v15, 0);
        return;
      }
LABEL_17:
      sub_1C2D6EC(Instance, v9);
    }
    Instance = *v12;
    if ( !*v12 )
      goto LABEL_17;
    Instance = (System_Collections_Generic_List_QuestAfterAction_VoiceInfo__o *)System_Collections_Generic_List_object___get_Item(
                                                                                  (System_Collections_Generic_List_object__o *)Instance,
                                                                                  0,
                                                                                  (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo__get_Item__);
    if ( !Instance )
      goto LABEL_17;
    if ( LODWORD(Instance->fields._items) )
      break;
    Instance = *v12;
    if ( !*v12 )
      goto LABEL_17;
    System_Collections_Generic_List_object___RemoveAt(
      (System_Collections_Generic_List_object__o *)Instance,
      0,
      (const MethodInfo_378B358 *)Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo__RemoveAt__);
    svtVInfos = *v12;
    endAct = *v15;
  }
  Instance = (System_Collections_Generic_List_QuestAfterAction_VoiceInfo__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  CommonUI__SetLoadMode((CommonUI_o *)Instance, 1, 0);
  Instance = *v12;
  if ( !*v12 )
    goto LABEL_17;
  Instance = (System_Collections_Generic_List_QuestAfterAction_VoiceInfo__o *)System_Collections_Generic_List_object___get_Item(
                                                                                (System_Collections_Generic_List_object__o *)Instance,
                                                                                0,
                                                                                (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo__get_Item__);
  if ( !Instance )
    goto LABEL_17;
  VoiceAssetName_42560796 = ServantVoiceEntity__getVoiceAssetName_42560796((int32_t)Instance->fields._items, 0);
  v19 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
  v20 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(v20, (Il2CppObject *)v7, Method_QuestAfterAction___c__DisplayClass82_0__LoadVoice_b__0__, 0);
  if ( !v19 )
    goto LABEL_17;
  SoundManager__LoadAudioAssetStorage((SoundManager_o *)v19, VoiceAssetName_42560796, v20, 1, 0);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *QuestAfterAction__MapObjName(
        QuestAfterAction_o *this,
        int32_t comType,
        int32_t id,
        const MethodInfo *method)
{
  if ( (byte_4C23E80 & 1) == 0 )
  {
    sub_1C2D490(&SrcSpotBasePrefab_TypeInfo);
    sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C23E80 = 1;
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

  if ( (byte_4C23E7A & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_int__Clear__);
    byte_4C23E7A = 1;
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
    sub_1C2D6EC(screenCollider, v4);
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
  const MethodInfo *v9; // x3
  System_Action_o *v10; // x22
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  const MethodInfo *v13; // x2

  if ( (byte_4C23E75 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_1C2D490(&Method_QuestAfterAction___c__DisplayClass86_0__Play_b__0__);
    sub_1C2D490(&QuestAfterAction___c__DisplayClass86_0_TypeInfo);
    byte_4C23E75 = 1;
  }
  v5 = sub_1C2D6DC(QuestAfterAction___c__DisplayClass86_0_TypeInfo);
  QuestAfterAction___c__DisplayClass86_0___ctor((QuestAfterAction___c__DisplayClass86_0_o *)v5, 0);
  if ( !v5
    || (*(_QWORD *)(v5 + 16) = endAct,
        sub_1C2D434((CGThumbnailListItem_o *)(v5 + 16), (int32_t)endAct, v8, v9),
        (Instance = SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__)) == 0) )
  {
    sub_1C2D6EC(Instance, v7);
  }
  MissionNotifyManager__StartPause((MissionNotifyManager_o *)Instance, 0);
  v10 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(v10, (Il2CppObject *)v5, Method_QuestAfterAction___c__DisplayClass86_0__Play_b__0__, 0);
  this->fields.endAct = v10;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.endAct, (int32_t)v10, v11, v12);
  if ( this->fields.commandBuf )
    QuestAfterAction__SetState(this, 1, v13);
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
  const MethodInfo *v11; // x3
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  const MethodInfo *v14; // x1
  struct QuestAfterAction_Command_array *CommandBuf; // x0
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  System_Action_o *v18; // x21
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  System_Action_o *v21; // x21
  const MethodInfo *v22; // x2
  System_Collections_IEnumerator_o *v23; // x1

  if ( (byte_4C23E76 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&QuestAfterAction_TypeInfo);
    sub_1C2D490(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_1C2D490(&Method_QuestAfterAction___c__DisplayClass87_0__PlaySpecifiedAction_b__0__);
    sub_1C2D490(&Method_QuestAfterAction___c__DisplayClass87_0__PlaySpecifiedAction_b__1__);
    sub_1C2D490(&QuestAfterAction___c__DisplayClass87_0_TypeInfo);
    byte_4C23E76 = 1;
  }
  v7 = sub_1C2D6DC(QuestAfterAction___c__DisplayClass87_0_TypeInfo);
  QuestAfterAction___c__DisplayClass87_0___ctor((QuestAfterAction___c__DisplayClass87_0_o *)v7, 0);
  if ( !v7 )
    goto LABEL_10;
  *(_QWORD *)(v7 + 16) = this;
  sub_1C2D434((CGThumbnailListItem_o *)(v7 + 16), (int32_t)this, v10, v11);
  *(_QWORD *)(v7 + 24) = finishCallback;
  sub_1C2D434((CGThumbnailListItem_o *)(v7 + 24), (int32_t)finishCallback, v12, v13);
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)actionVals, 0) )
  {
    ActionExtensions__Call(*(System_Action_o **)(v7 + 24), 0);
    return;
  }
  if ( !QuestAfterAction_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(QuestAfterAction_TypeInfo);
  CommandBuf = QuestAfterAction__GenerateCommandBuf(actionVals, v14);
  this->fields.temporaryCommandBuf = CommandBuf;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.temporaryCommandBuf, (int32_t)CommandBuf, v16, v17);
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
LABEL_10:
    sub_1C2D6EC(Instance, v9);
  MissionNotifyManager__StartPause((MissionNotifyManager_o *)Instance, 0);
  v18 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(
    v18,
    (Il2CppObject *)v7,
    Method_QuestAfterAction___c__DisplayClass87_0__PlaySpecifiedAction_b__0__,
    0);
  this->fields.endAct = v18;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.endAct, (int32_t)v18, v19, v20);
  v21 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(
    v21,
    (Il2CppObject *)v7,
    Method_QuestAfterAction___c__DisplayClass87_0__PlaySpecifiedAction_b__1__,
    0);
  v23 = QuestAfterAction__WaitWhileMainStateFinished(this, v21, v22);
  UnityEngine_MonoBehaviour__StartCoroutine_71149276((UnityEngine_MonoBehaviour_o *)this, v23, 0);
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

  if ( (byte_4C23E79 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_QuestAfterAction__PlaySpecifiedActionInstantly_b__90_0__);
    byte_4C23E79 = 1;
  }
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)commandArray, 0) )
  {
    this->fields.temporaryCommandBuf = commandArray;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.temporaryCommandBuf, (int32_t)commandArray, v5, v6);
    v7 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
    System_Action___ctor(v7, (Il2CppObject *)this, Method_QuestAfterAction__PlaySpecifiedActionInstantly_b__90_0__, 0);
    this->fields.endAct = v7;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.endAct, (int32_t)v7, v8, v9);
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
  __int64 v7; // x1
  TerminalPramsManager_c *v8; // x0
  ScrTerminalMap_o *v9; // x0
  UnityEngine_GameObject_c *klass; // x8

  if ( (byte_4C23E7F & 1) == 0 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    sub_1C2D490(&TerminalSceneComponent_TypeInfo);
    byte_4C23E7F = 1;
  }
  this->fields.ActionMapTargetType = cType;
  this->fields.ActionMapTargetId = cTarget;
  QuestAfterAction__SetState(this, 0, *(const MethodInfo **)&cTarget);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C21ACD )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C21ACD = 1;
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
  if ( !byte_4C21383 )
  {
    sub_1C2D490(&TerminalSceneComponent_TypeInfo);
    byte_4C21383 = 1;
  }
  v9 = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v9 = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
  }
  klass = v9->fields.subRootGimmickP->klass;
  if ( !klass || (v9 = *(ScrTerminalMap_o **)&klass->_2.static_fields_size) == 0 )
    sub_1C2D6EC(v9, v7);
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
  __int64 v9; // x2
  int m_CancellationTokenSource; // w8
  System_String_o *TitleInfoCtrlCallback_k__BackingField; // x0
  int32_t SpotId; // w0
  Il2CppObject *MasterData_object; // x0
  System_String_o *param; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v15; // x20

  v4 = this;
  if ( (byte_4C23E6E & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1C2D490(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    this = (QuestAfterAction_o *)sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C23E6E = 1;
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
                sub_1C2D6F4(this, com, v9);
              TitleInfoCtrlCallback_k__BackingField = (System_String_o *)this->fields.invalidMapGimmickIdList;
              goto LABEL_29;
            }
          }
LABEL_42:
          sub_1C2D6EC(this, com);
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
          this = (QuestAfterAction_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( this )
          {
            MasterData_object = DataManager__GetMasterData_object_(
                                  (DataManager_o *)this,
                                  (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_QuestMaster___);
            param = com->fields.param;
            v15 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
            this = (QuestAfterAction_o *)System_Int32__Parse(param, 0);
            if ( v15 )
            {
              this = (QuestAfterAction_o *)DataMasterBase_object__object__int___GetEntity(
                                             v15,
                                             (int32_t)this,
                                             (const MethodInfo_3387D98 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
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

  if ( (byte_4C23E7D & 1) == 0 )
  {
    sub_1C2D490(&Method_CStateManager_QuestAfterAction__setState__);
    byte_4C23E7D = 1;
  }
  fsm = (CStateManager_T__o *)this->fields.fsm;
  if ( !fsm )
    sub_1C2D6EC(0, *(_QWORD *)&state);
  CStateManager_object___setState(
    fsm,
    state,
    (const MethodInfo_3313D9C *)Method_CStateManager_QuestAfterAction__setState__);
}


void QuestAfterAction__SkipToNextAction(QuestAfterAction_o *this, const MethodInfo *method)
{
  this->fields.isSkippedNext = 1;
}


void QuestAfterAction__Update(QuestAfterAction_o *this, const MethodInfo *method)
{
  CStateManager_T__o *fsm; // x0

  if ( (byte_4C23E74 & 1) == 0 )
  {
    sub_1C2D490(&Method_CStateManager_QuestAfterAction__update__);
    byte_4C23E74 = 1;
  }
  fsm = (CStateManager_T__o *)this->fields.fsm;
  if ( fsm )
    CStateManager_object___update(fsm, (const MethodInfo_3313D78 *)Method_CStateManager_QuestAfterAction__update__);
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
  const MethodInfo *v9; // x3
  int32_t v10; // w2
  const MethodInfo *v11; // x3

  if ( (byte_4C23E7B & 1) == 0 )
  {
    sub_1C2D490(&QuestAfterAction__WaitWhileMainStateFinished_d__93_TypeInfo);
    byte_4C23E7B = 1;
  }
  v5 = sub_1C2D6DC(QuestAfterAction__WaitWhileMainStateFinished_d__93_TypeInfo);
  QuestAfterAction__WaitWhileMainStateFinished_d__93___ctor(
    (QuestAfterAction__WaitWhileMainStateFinished_d__93_o *)v5,
    0,
    0);
  if ( !v5 )
    sub_1C2D6EC(v6, v7);
  *(_QWORD *)(v5 + 32) = this;
  sub_1C2D434((CGThumbnailListItem_o *)(v5 + 32), (int32_t)this, v8, v9);
  *(_QWORD *)(v5 + 40) = action;
  sub_1C2D434((CGThumbnailListItem_o *)(v5 + 40), (int32_t)action, v10, v11);
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
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.endAct, 0, v2, v3);
  this->fields.temporaryCommandBuf = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.temporaryCommandBuf, 0, v5, v6);
  QuestAfterAction__SetState(this, 0, v7);
}


System_Int32_array *QuestAfterAction__getMapGmkOffIdList(QuestAfterAction_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *invalidMapGimmickIdList; // x0

  if ( (byte_4C23E6D & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_int__ToArray__);
    byte_4C23E6D = 1;
  }
  invalidMapGimmickIdList = this->fields.invalidMapGimmickIdList;
  if ( !invalidMapGimmickIdList )
    sub_1C2D6EC(0, method);
  return System_Collections_Generic_List_int___ToArray(
           invalidMapGimmickIdList,
           (const MethodInfo_376E618 *)Method_System_Collections_Generic_List_int__ToArray__);
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
  System_String_o *VoiceAssetName_42560796; // x20
  System_Collections_Generic_List_Enumerator_object__o v9; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4C23E72 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__Clear__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__get_Values__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_QuestAfterAction_VoiceInfo__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_QuestAfterAction_VoiceInfo__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_QuestAfterAction_VoiceInfo__get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo__GetEnumerator__);
    sub_1C2D490(&Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_QuestAfterAction_VoiceInfo__TypeInfo);
    sub_1C2D490(&SoundManager_TypeInfo);
    byte_4C23E72 = 1;
  }
  memset(&v9, 0, sizeof(v9));
  svtVoices = this->fields.svtVoices;
  if ( !svtVoices )
    goto LABEL_14;
  Values = System_Collections_Generic_Dictionary_int__object___get_Values(
             (System_Collections_Generic_Dictionary_int__object__o *)svtVoices,
             (const MethodInfo_33E108C *)Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__get_Values__);
  v5 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_QuestAfterAction_VoiceInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor_58233976(
    v5,
    (System_Collections_Generic_IEnumerable_T__o *)Values,
    (const MethodInfo_3789478 *)Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo___ctor__);
  if ( !v5 )
    goto LABEL_14;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v9,
    v5,
    (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo__GetEnumerator__);
  while ( 1 )
  {
    v6 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v9,
           (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_QuestAfterAction_VoiceInfo__MoveNext__);
    if ( !v6 )
      break;
    if ( !v9.fields._current )
      sub_1C2D6EC(v6, v7);
    VoiceAssetName_42560796 = ServantVoiceEntity__getVoiceAssetName_42560796(
                                *(_DWORD *)((char *)&v9.fields._current->klass + (unsigned __int64)&word_10),
                                0);
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    SoundManager__releaseAudioAssetStorage(VoiceAssetName_42560796, 0);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v9,
    (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_QuestAfterAction_VoiceInfo__Dispose__);
  svtVoices = this->fields.svtVoices;
  if ( !svtVoices )
LABEL_14:
    sub_1C2D6EC(svtVoices, method);
  System_Collections_Generic_Dictionary_int__object___Clear(
    (System_Collections_Generic_Dictionary_int__object__o *)svtVoices,
    (const MethodInfo_33E1404 *)Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__Clear__);
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
  __int64 v19; // x1
  __int64 v20; // x2
  int v21; // w8
  void *v22; // x21
  int32_t result; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_4C23E87 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_VoicePlayCondMaster___);
    sub_1C2D490(&Method_System_Collections_Generic_List_string__RemoveAt__);
    sub_1C2D490(&Method_System_Collections_Generic_List_string___ctor___77956528);
    sub_1C2D490(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_1C2D490(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C2D490(&System_Random_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&TerminalSceneComponent_TypeInfo);
    sub_1C2D490(&StringLiteral_16105/*"_"*/);
    byte_4C23E87 = 1;
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
    param = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( param )
    {
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)param,
                            (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_VoicePlayCondMaster___);
      v8 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_string__TypeInfo);
      System_Collections_Generic_List_object____ctor_58233976(
        v8,
        v6,
        (const MethodInfo_3789478 *)Method_System_Collections_Generic_List_string___ctor___77956528);
      result = 0;
      v9 = (System_Random_o *)sub_1C2D6DC(System_Random_TypeInfo);
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
                      (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_string__get_Item__);
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
              param = System_String__Concat_63496112(
                        *((System_String_o **)v13 + 5),
                        (System_String_o *)StringLiteral_16105/*"_"*/,
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
                       (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_string__get_Item__);
              if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
              if ( !byte_4C21383 )
              {
                sub_1C2D490(&TerminalSceneComponent_TypeInfo);
                byte_4C21383 = 1;
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
              (const MethodInfo_378B358 *)Method_System_Collections_Generic_List_string__RemoveAt__);
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
    sub_1C2D6EC(param, svtId);
  }
  param = this->fields.param;
  if ( !param )
    goto LABEL_41;
  param = System_String__Split((System_String_o *)param, 0x5Fu, 0, 0);
  if ( !param )
    goto LABEL_41;
  v21 = *((_DWORD *)param + 6);
  v22 = param;
  if ( v21 != 3 )
  {
    if ( v21 == 2 )
      return this->fields.param;
    return 0;
  }
  v18 = System_Int32__TryParse(*((System_String_o **)param + 4), svtId, 0);
  if ( *((_DWORD *)v22 + 6) <= 2u )
LABEL_42:
    sub_1C2D6F4(v18, v19, v20);
  return System_String__Concat_63496112(
           *((System_String_o **)v22 + 5),
           (System_String_o *)StringLiteral_16105/*"_"*/,
           *((System_String_o **)v22 + 6),
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

  if ( (byte_4C23E89 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_BgmMaster___);
    sub_1C2D490(&Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C23E89 = 1;
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
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_12;
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_BgmMaster___);
      if ( !Instance )
        goto LABEL_12;
      Instance = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                   (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                   &entity,
                                   result,
                                   (const MethodInfo_3387DE4 *)Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( entity )
          return (System_String_o *)entity[1].monitor;
LABEL_12:
        sub_1C2D6EC(Instance, v6);
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
    sub_1C2D6EC(v3, str);
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
  if ( (byte_4C23E88 & 1) == 0 )
  {
    this = (QuestAfterAction_Command_o *)sub_1C2D490(&StringLiteral_16105/*"_"*/);
    byte_4C23E88 = 1;
  }
  if ( v4->fields.id == 800 )
  {
    if ( !v3 || (this = (QuestAfterAction_Command_o *)System_String__Split(v3, 0x5Fu, 0, 0)) == 0 )
      sub_1C2D6EC(this, str);
    param = (int)this->fields.param;
    if ( param == 2 )
      return v3;
    if ( param == 3 )
      return System_String__Concat_63496112(
               (System_String_o *)this[1].monitor,
               (System_String_o *)StringLiteral_16105/*"_"*/,
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
    sub_1C2D6EC(this, method);
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
    sub_1C2D6EC(screenCollider, v5);
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

  if ( (byte_4C23EFE & 1) == 0 )
  {
    this = (QuestAfterAction_StateInstant_o *)sub_1C2D490(&QuestAfterAction_TypeInfo);
    byte_4C23EFE = 1;
  }
  if ( !cmd )
    sub_1C2D6EC(this, cmd);
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
    sub_1C2D6EC(0, v7);
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
    sub_1C2D6EC(0, v7);
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
  __int64 v4; // x2
  __int64 v5; // x8
  QuestAfterAction_StateMain_o *v6; // x20
  unsigned __int64 v7; // x22
  struct QuestAfterAction_o *v8; // x8
  int32_t v9; // w21
  Il2CppObject *MapComponent_object; // x21
  Il2CppClass *klass; // x8
  float AnimTime; // s0
  const MethodInfo *v13; // x3

  v2 = this;
  if ( (byte_4C23E8E & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_int__Remove__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
    this = (QuestAfterAction_StateMain_o *)sub_1C2D490(&Method_SingletonTemplate_QuestTree__get_Instance__);
    byte_4C23E8E = 1;
  }
  that = v2->fields.that;
  if ( !that )
    goto LABEL_22;
  this = (QuestAfterAction_StateMain_o *)that->fields.invalidMapGimmickIdList;
  if ( !this )
    goto LABEL_22;
  this = (QuestAfterAction_StateMain_o *)System_Collections_Generic_List_int___ToArray(
                                           (System_Collections_Generic_List_int__o *)this,
                                           (const MethodInfo_376E618 *)Method_System_Collections_Generic_List_int__ToArray__);
  if ( !this )
    goto LABEL_22;
  v5 = *(_QWORD *)&this->fields.IsAnimDoing;
  v6 = this;
  if ( (int)v5 >= 1 )
  {
    v7 = 0;
    while ( 1 )
    {
      if ( v7 >= (unsigned int)v5 )
        sub_1C2D6F4(this, method, v4);
      v8 = v2->fields.that;
      if ( !v8 )
        break;
      this = (QuestAfterAction_StateMain_o *)v8->fields.invalidMapGimmickIdList;
      if ( !this )
        break;
      v9 = *((_DWORD *)&v6->fields.waitTime + v7);
      System_Collections_Generic_List_int___Remove(
        (System_Collections_Generic_List_int__o *)this,
        v9,
        (const MethodInfo_376E05C *)Method_System_Collections_Generic_List_int__Remove__);
      this = (QuestAfterAction_StateMain_o *)v2->fields.that;
      if ( !this )
        break;
      MapComponent_object = QuestAfterAction__GetMapComponent_object_(
                              (QuestAfterAction_o *)this,
                              2,
                              v9,
                              v2,
                              (const MethodInfo_316755C *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (QuestAfterAction_StateMain_o *)UnityEngine_Object__op_Inequality(
                                               (UnityEngine_Object_o *)MapComponent_object,
                                               0,
                                               0);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        this = (QuestAfterAction_StateMain_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_QuestTree__get_Instance__);
        if ( !MapComponent_object || !this )
          break;
        this = (QuestAfterAction_StateMain_o *)QuestTree__CheckMapGimmickCond_36417004(
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
          MapGimmickComponent__SetDispAnim_35985868((MapGimmickComponent_o *)MapComponent_object, 1, AnimTime, 1, v13);
        }
      }
      LODWORD(v5) = *(_DWORD *)&v6->fields.IsAnimDoing;
      if ( (__int64)++v7 >= (int)v5 )
        return;
    }
LABEL_22:
    sub_1C2D6EC(this, method);
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
  const MethodInfo *v9; // x3
  QuestAfterAction_o **v10; // x20
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  QuestAfterAction_StateMain_c *klass; // x8
  __int64 v14; // x21
  const MethodInfo_38B3EC8 *v15; // x2
  QuestAfterAction_Command_o *v16; // x21
  QuestAfterAction_o *v17; // x23
  BlankEarthQuestAfterAction_o *BlankEarthQuestAfterAction_k__BackingField; // x24
  System_Action_o *v19; // x25
  int id; // w8
  __int64 v21; // x21
  int v22; // w22
  int32_t v23; // w21
  __int64 v24; // x8
  bool v25; // w2
  bool v26; // w3
  int32_t v27; // w1
  __int64 v28; // x20
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  __int64 v31; // x23
  int32_t v32; // w21
  Il2CppObject *v33; // x0
  __int64 *v34; // x24
  int32_t v35; // w2
  const MethodInfo *v36; // x3
  MapControl_QuestInfo_o *QuestInfo; // x0
  __int64 v38; // x22
  int32_t v39; // w2
  const MethodInfo *v40; // x3
  const MethodInfo *v41; // x2
  int v42; // w21
  __int64 v43; // x8
  NetworkManager_ResultCallbackFunc_o *v44; // x21
  Il2CppObject *Request_object; // x20
  int32_t v46; // w21
  __int64 v47; // x21
  int32_t v48; // w20
  int32_t v49; // w22
  __int64 v50; // x8
  __int64 v51; // x23
  float v52; // s8
  TerminalSceneComponent_c *v53; // x0
  TerminalSceneComponent_o *mInstance; // x22
  __int64 v55; // x20
  int32_t v56; // w2
  const MethodInfo *v57; // x3
  __int64 v58; // x23
  __int64 v59; // x8
  __int64 v60; // x22
  int32_t v61; // w21
  bool v62; // w24
  bool v63; // w25
  __int64 v64; // x8
  __int64 v65; // x22
  _BOOL4 v66; // w23
  __int64 v67; // x20
  int32_t v68; // w2
  const MethodInfo *v69; // x3
  __int64 v70; // x8
  QuestAfterAction_o *v71; // x22
  Il2CppObject *v72; // x0
  int32_t v73; // w2
  const MethodInfo *v74; // x3
  UnityEngine_Object_o *v75; // x19
  SrcSpotBasePrefab_o *v76; // x19
  System_Action_o *v77; // x21
  int32_t v78; // w1
  __int64 v79; // x20
  int32_t v80; // w2
  const MethodInfo *v81; // x3
  __int64 v82; // x8
  QuestAfterAction_o *v83; // x22
  Il2CppObject *v84; // x0
  int32_t v85; // w2
  const MethodInfo *v86; // x3
  UnityEngine_Object_o *v87; // x19
  ModelLineComponent_o *v88; // x19
  System_Action_o *v89; // x21
  const MethodInfo *v90; // x3
  int32_t v91; // w1
  System_String_o *v92; // x19
  System_String_o *v93; // x20
  System_String_o *v94; // x20
  Il2CppObject *Instance; // x21
  System_Action_o *v96; // x23
  float v97; // s0
  __int64 v98; // x19
  int32_t v99; // w2
  const MethodInfo *v100; // x3
  __int64 v101; // x22
  int32_t v102; // w20
  int32_t v103; // w21
  BgmManager_c *v104; // x0
  float v105; // s0
  float masterVolume; // s1
  float v107; // s0
  __int64 v108; // x8
  ScrTerminalListTop_o *v109; // x22
  float v110; // s8
  float v111; // s9
  __int64 v112; // x8
  ScrTerminalListTop_o *v113; // x22
  System_Action_o *v114; // x23
  __int64 v115; // x22
  int v116; // w23
  float v117; // s8
  int32_t v118; // w21
  float DEFAULT_FADE_TIME; // s8
  AvalonSceneManager_c *v120; // x0
  TerminalSceneComponent_c *v121; // x0
  TerminalSceneComponent_o *v122; // x19
  System_Action_o *v123; // x20
  TerminalSceneComponent_o *v124; // x0
  float v125; // s0
  System_Action_o *v126; // x1
  System_String_o *param; // x21
  _QWORD *v128; // x0
  System_Reflection_MethodBase_o *v129; // x0
  __int64 v130; // x23
  int32_t v131; // w21
  int32_t v132; // w22
  int32_t v133; // w23
  __int64 v134; // x8
  PlayMakerFSM_o *v135; // x20
  System_String_o *ActiveStateName; // x0
  __int64 v137; // x8
  __int64 v138; // x8
  QuestBoardListViewManager_o *v139; // x21
  System_Action_o *v140; // x22
  Il2CppObject *v141; // x23
  struct QuestAfterAction_StateMain___c_StaticFields *static_fields; // x0
  int32_t v143; // w2
  const MethodInfo *v144; // x3
  TerminalSceneComponent_c *v145; // x0
  QuestAfterAction_o *v146; // x8
  __int64 v147; // x8
  __int64 v148; // x8
  __int64 v149; // x8
  System_String_o *v150; // x20
  System_String_o *v151; // x21
  SeManager_c *v152; // x0
  float DEFAULT_VOLUME; // s8
  __int64 v154; // x21
  int32_t v155; // w0
  int32_t v156; // w20
  float v157; // s8
  int32_t v158; // w19
  __int64 v159; // x8
  __int64 v160; // x8
  __int64 v161; // x23
  float v162; // s0
  int32_t v163; // w22
  __int64 v164; // x8
  ScrTerminalMap_o *v165; // x24
  float v166; // s0
  float v167; // s9
  float v168; // s0
  const MethodInfo_38B3EC8 *v169; // x2
  int v170; // w8
  float v171; // s10
  float v172; // s9
  float v173; // s11
  MapCamera_o *mMapCamera; // x20
  Il2CppObject *MapComponent_object; // x22
  Il2CppObject *v176; // x20
  __int64 v177; // x8
  ScrTerminalMap_o *v178; // x23
  __int64 v179; // x8
  ScrTerminalMap_o *v180; // x20
  UnityEngine_GameObject_o *gameObject; // x22
  System_Action_o *v182; // x23
  TerminalPramsManager_c *v183; // x0
  __int64 v184; // x8
  const MethodInfo *v185; // x2
  TerminalPramsManager_c *v186; // x0
  __int64 v187; // x21
  const MethodInfo *v188; // x3
  QuestAfterAction_o *v189; // x8
  QuestAfterAction_TitleInfoControlCallback_o *TitleInfoCtrlCallback_k__BackingField; // x22
  System_Action_o *v191; // x20
  const MethodInfo *v192; // x3
  TerminalPramsManager_c *v193; // x0
  __int64 v194; // x8
  __int64 v195; // x21
  int32_t v196; // w20
  __int64 v197; // x8
  __int64 v198; // x21
  int32_t v199; // w0
  int32_t v200; // w20
  System_String_o *v201; // x21
  int v202; // w23
  __int64 v203; // x21
  float v204; // s0
  float v205; // s8
  float v206; // s0
  MapCamera_o *v207; // x19
  float v208; // s0
  float v209; // s9
  int32_t v210; // w20
  __int64 v211; // x23
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
  const MethodInfo *v224; // x3
  System_String_array *v225; // x20
  int32_t v226; // w1
  int v227; // w8
  System_String_o *v228; // x19
  System_String_o *v229; // x20
  System_String_o *v230; // x20
  Il2CppObject *v231; // x21
  System_Action_o *v232; // x23
  __int64 v233; // x23
  float v234; // s0
  float v235; // s9
  float v236; // s0
  float v237; // s10
  float v238; // s0
  float v239; // s11
  float v240; // s0
  float v241; // s8
  int32_t v242; // w19
  __int64 v243; // x8
  float v244; // s8
  const MethodInfo_38B3EC8 *v245; // x2
  float v246; // s10
  float v247; // s9
  float v248; // s11
  MapCamera_o *v249; // x20
  System_Action_o *v250; // x21
  MapCamera_o *v251; // x0
  float v252; // s0 OVERLAPPED
  float v253; // s1
  float v254; // s2
  float v255; // s3
  int32_t v256; // w1
  __int64 v257; // x20
  int32_t v258; // w2
  const MethodInfo *v259; // x3
  __int64 v260; // x8
  QuestAfterAction_o *v261; // x22
  Il2CppObject *v262; // x0
  int32_t v263; // w2
  const MethodInfo *v264; // x3
  UnityEngine_Object_o *v265; // x19
  __int64 v266; // x23
  int32_t v267; // w2
  const MethodInfo *v268; // x3
  __int64 v269; // x20
  QuestAfterAction_o *v270; // x22
  Il2CppObject *v271; // x0
  __int64 *v272; // x19
  int32_t v273; // w2
  const MethodInfo *v274; // x3
  UnityEngine_Object_o *v275; // x21
  SrcSpotBasePrefab_o *v276; // x21
  System_Action_o *v277; // x22
  int32_t v278; // w2
  const MethodInfo *v279; // x3
  __int64 v280; // x1
  CGThumbnailListItem_o *v281; // x0
  __int64 v282; // x22
  QuestAfterAction_o *v283; // x21
  Il2CppObject *v284; // x21
  System_Action_o *v285; // x22
  QuestAfterAction_o *v286; // x22
  UnityEngine_Object_o *v287; // x21
  intptr_t m_CachedPtr; // x8
  SrcSpotBasePrefab_o *v289; // x0
  int32_t v290; // w1
  QuestAfterAction_o *v291; // x22
  UnityEngine_Object_o *v292; // x21
  intptr_t v293; // x8
  QuestAfterAction_o *v294; // x22
  intptr_t v295; // x8
  __int64 v296; // x21
  QuestAfterAction_o *v297; // x22
  Il2CppObject *v298; // x22
  __int64 v299; // x23
  int32_t v300; // w2
  const MethodInfo *v301; // x3
  __int64 v302; // x20
  __int64 v303; // x8
  __int64 v304; // x21
  int32_t v305; // w22
  bool v306; // w25
  bool v307; // w27
  __int64 v308; // x8
  __int64 v309; // x22
  int32_t v310; // w21
  bool v311; // w22
  __int64 v312; // x8
  __int64 v313; // x22
  int32_t v314; // w21
  bool v315; // w22
  __int64 v316; // x21
  float v317; // s0
  QuestAfterAction_o *v318; // x20
  float v319; // s8
  Il2CppObject *v320; // x20
  _BOOL4 v321; // w23
  __int64 v322; // x20
  int32_t v323; // w2
  const MethodInfo *v324; // x3
  __int64 v325; // x8
  QuestAfterAction_o *v326; // x22
  Il2CppObject *v327; // x0
  int32_t v328; // w2
  const MethodInfo *v329; // x3
  UnityEngine_Object_o *v330; // x19
  MapGimmickComponent_o *v331; // x19
  System_Action_o *v332; // x21
  const MethodInfo *v333; // x3
  TerminalSceneComponent_o *v334; // x19
  __int64 v335; // x20
  int32_t v336; // w2
  const MethodInfo *v337; // x3
  System_String_array *v338; // x0
  __int64 *v339; // x21
  int32_t v340; // w2
  const MethodInfo *v341; // x3
  __int64 v342; // x8
  __int64 v343; // x9
  QuestAfterAction_o *v344; // x21
  Il2CppObject *v345; // x0
  int32_t v346; // w2
  const MethodInfo *v347; // x3
  UnityEngine_Object_o *v348; // x19
  MapGimmickComponent_o *v349; // x19
  System_Action_o *v350; // x0
  intptr_t *v351; // x8
  System_Action_o *v352; // x21
  __int64 v353; // x21
  QuestAfterAction_o *v354; // x20
  Il2CppObject *v355; // x20
  UIWidget_o *v356; // x20
  int32_t v357; // w2
  const MethodInfo *v358; // x3
  __int64 v359; // x8
  QuestAfterAction_o *v360; // x22
  Il2CppObject *v361; // x0
  __int64 v362; // x19
  int32_t v363; // w2
  const MethodInfo *v364; // x3
  UnityEngine_Object_o *v365; // x21
  bool v366; // w0
  bool v367; // w22
  const MethodInfo *v368; // x3
  int32_t v369; // w1
  __int64 v370; // x8
  __int64 v371; // x22
  int32_t v372; // w21
  bool v373; // w22
  __int64 v374; // x21
  QuestAfterAction_o *v375; // x22
  Il2CppObject *v376; // x22
  QuestAfterAction_o *v377; // x23
  const MethodInfo *v378; // x4
  int32_t v379; // w2
  QuestAfterAction_o *v380; // x0
  int32_t v381; // w1
  QuestAfterAction_o *v382; // x22
  QuestAfterAction_o *v383; // x23
  const MethodInfo *v384; // x4
  UnityEngine_Object_o *MapGameObject; // x23
  float v386; // s9
  float v387; // s8
  float v388; // s10
  QuestAfterAction_o *v389; // x22
  QuestAfterAction_o *v390; // x23
  UnityEngine_Object_o *v391; // x23
  __int64 v392; // x8
  float v393; // s0
  float v394; // s11
  int32_t v395; // w23
  const MethodInfo *v396; // x3
  int32_t v397; // w21
  TerminalPramsManager_c *v398; // x0
  QuestAfterAction_o *v399; // x20
  Il2CppObject *v400; // x20
  TerminalPramsManager_c *v401; // x0
  __int64 v402; // x8
  __int64 v403; // x8
  __int64 v404; // x20
  int32_t v405; // w2
  const MethodInfo *v406; // x3
  __int64 v407; // x8
  QuestAfterAction_o *v408; // x22
  Il2CppObject *v409; // x0
  int32_t v410; // w2
  const MethodInfo *v411; // x3
  UnityEngine_Object_o *v412; // x19
  __int64 v413; // x20
  int32_t v414; // w2
  const MethodInfo *v415; // x3
  __int64 v416; // x8
  QuestAfterAction_o *v417; // x22
  Il2CppObject *v418; // x0
  int32_t v419; // w2
  const MethodInfo *v420; // x3
  UnityEngine_Object_o *v421; // x19
  _BOOL4 IsMapModel; // w23
  QuestAfterAction_o *v423; // x22
  UnityEngine_Object_o *v424; // x21
  const MethodInfo *v425; // x2
  _DWORD *v426; // x8
  _BOOL4 v427; // w23
  QuestAfterAction_o *v428; // x22
  UnityEngine_Object_o *v429; // x21
  const MethodInfo *v430; // x2
  const MethodInfo *v431; // x2
  _DWORD *v432; // x8
  _BOOL4 v433; // w23
  QuestAfterAction_o *v434; // x22
  UnityEngine_Object_o *v435; // x21
  const MethodInfo *v436; // x2
  const MethodInfo *v437; // x2
  float v438; // s0
  float v439; // s0
  float v440; // s0
  QuestAfterAction_o *v441; // x24
  const MethodInfo *v442; // x4
  UnityEngine_Object_o *v443; // x24
  float v444; // s11
  float v445; // s9
  float v446; // s10
  __int64 v447; // x8
  System_String_o *v448; // x24
  QuestAfterAction_o *v449; // x24
  const MethodInfo *v450; // x4
  UnityEngine_Object_o *v451; // x24
  float v452; // s9
  float v453; // s10
  float v454; // s11
  __int64 v455; // x8
  QuestAfterAction_o *v456; // x24
  const MethodInfo *v457; // x4
  UnityEngine_Object_o *v458; // x24
  __int64 v459; // x8
  int v460; // w8
  QuestAfterAction_o *v461; // x8
  MapCamera_o *v462; // x20
  MapCamera_o *v463; // x0
  float v464; // s0 OVERLAPPED
  float v465; // s1
  float v466; // s2
  int32_t v467; // w1
  Il2CppObject *v468; // x3
  SceneJumpInfo_o *v469; // x21
  TerminalPramsManager_c *v470; // x0
  TerminalPramsManager_c *v471; // x0
  Il2CppObject *v472; // x21
  System_Action_o *v473; // x23
  Il2CppObject *v474; // x21
  const MethodInfo *v475; // x3
  Il2CppObject *v476; // x21
  const MethodInfo *v477; // x3
  Il2CppClass *v478; // x8
  Il2CppObject *v479; // x21
  float AnimTime; // s0
  const MethodInfo *v481; // x3
  Il2CppClass *v482; // x8
  QuestAfterAction_StateMain_c *v483; // x8
  int v484; // w0
  Il2CppObject *v485; // x0
  int32_t v486; // w2
  const MethodInfo *v487; // x3
  UnityEngine_Object_o *v488; // x22
  MapGimmickComponent_o *v489; // x21
  System_Action_o *v490; // x0
  System_Action_o *v491; // x22
  MapGimmickComponent_o *v492; // x0
  System_Action_o *v493; // x2
  Il2CppObject *v494; // x0
  MapGimmickComponent_o **v495; // x22
  int32_t v496; // w2
  const MethodInfo *v497; // x3
  UnityEngine_Object_o *v498; // x24
  MapGimmickComponent_o *v499; // x24
  const MethodInfo *v500; // x3
  System_Action_o *v501; // x0
  System_Action_o *v502; // x21
  __int64 v503; // x20
  int32_t v504; // w2
  const MethodInfo *v505; // x3
  __int64 v506; // x8
  QuestAfterAction_o *v507; // x22
  Il2CppObject *v508; // x0
  int32_t v509; // w2
  const MethodInfo *v510; // x3
  UnityEngine_Object_o *v511; // x19
  srcLineSprite_o *v512; // x19
  System_Action_o *v513; // x21
  int32_t v514; // w1
  __int64 v515; // x20
  int32_t v516; // w2
  const MethodInfo *v517; // x3
  __int64 v518; // x8
  QuestAfterAction_o *v519; // x22
  Il2CppObject *v520; // x0
  int32_t v521; // w2
  const MethodInfo *v522; // x3
  UnityEngine_Object_o *v523; // x19
  __int64 v524; // x20
  int32_t v525; // w2
  const MethodInfo *v526; // x3
  __int64 v527; // x8
  QuestAfterAction_o *v528; // x22
  Il2CppObject *v529; // x0
  int32_t v530; // w2
  const MethodInfo *v531; // x3
  UnityEngine_Object_o *v532; // x19
  UnityEngine_Object_o *v533; // x21
  UnityEngine_Object_o *v534; // x21
  int v535; // w9
  UnityEngine_Object_o *v536; // x21
  float v537; // s11
  float v538; // s10
  float v539; // s9
  System_String_o *v540; // x24
  __int64 v541; // x8
  ScrTerminalMap_o *v542; // x21
  System_Action_o *v543; // x23
  int32_t v544; // w0
  int32_t v545; // w23
  SceneJumpInfo_o *v546; // x22
  System_String_o *monitor; // x20
  MapCamera_o *v548; // x20
  System_Action_o *v549; // x20
  const MethodInfo *v550; // x3
  MapGimmickComponent_o *v551; // x0
  float v552; // s0 OVERLAPPED
  float v553; // s1
  float v554; // s2
  float v555; // s3
  int32_t v556; // w1
  System_Action_o *v557; // x2
  const MethodInfo *v558; // x3
  __int64 v559; // x8
  const MethodInfo *v560; // x3
  int v561; // w8
  MapCamera_o *v562; // x20
  float v563; // s0 OVERLAPPED
  float v564; // s1
  System_Nullable_Vector3__o v565; // x0
  float v566; // s2
  float v567; // s0 OVERLAPPED
  float v568; // s1
  System_Nullable_Vector3__o v569; // x0
  float v570; // s2
  QuestAfterAction_o *v571; // x8
  QuestAfterAction_o *v572; // x8
  __int64 v573; // x8
  ScrTerminalMap_o *v574; // x22
  float v575; // s0
  float v576; // s9
  float v577; // s0
  float x; // s10
  float y; // s9
  float z; // s11
  float v581; // s8
  const MethodInfo *v582; // x3
  int32_t v583; // w21
  System_Action_o *v584; // x22
  System_String_o *v585; // x0
  float v586; // s0
  System_Nullable_float__o p_size; // x0
  System_Nullable_float__o v588; // x3
  System_String_o *v589; // x0
  float v590; // s0
  System_Nullable_float__o v591; // x0
  System_Action_o *v592; // x21
  System_Nullable_Vector3__o v593; // x1 OVERLAPPED
  System_Nullable_float__o v594; // x3
  MapCamera_o *v595; // x0
  float v596; // s0
  int32_t v597; // w4
  MapCamera_o *v598; // x20
  float v599; // s0
  System_Nullable_float__o v600; // x0
  int32_t onClickOkSeKind; // [xsp+10h] [xbp-E0h]
  System_Nullable_float__o size; // [xsp+40h] [xbp-B0h] BYREF
  System_Nullable_Vector3__o v603; // [xsp+48h] [xbp-A8h] BYREF
  Il2CppObject *value; // [xsp+58h] [xbp-98h] BYREF
  Il2CppObject *entity; // [xsp+60h] [xbp-90h] BYREF
  UnityEngine_Color_o color; // [xsp+68h] [xbp-88h] BYREF
  bool isQuickUpdate; // [xsp+7Ch] [xbp-74h] BYREF
  System_Nullable_Vector3__o v608; // 0:x0.16
  System_Nullable_Vector3__o v609; // 0:x0.16
  System_Nullable_Vector3__o v610; // 0:x0.16
  UnityEngine_Vector3_o v611; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v612; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v613; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v615; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v616; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v617; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v618; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v619; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v620; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v621; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o Position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v623; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v624; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v625; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v626; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v627; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v628; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v629; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v630; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v631; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C23E8C & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&AvalonSceneManager_TypeInfo);
    sub_1C2D490(&BgmManager_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_QuestMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    sub_1C2D490(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__TryGetValue__);
    sub_1C2D490(&FSUtility_TypeInfo);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponentInChildren_UISprite___);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_ModelLineComponent___);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&Method_NetworkManager_getRequest_BattleSetupScenarioRequest___);
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&Method_System_Nullable_Vector3___ctor__);
    sub_1C2D490(&Method_System_Nullable_float___ctor__);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
    sub_1C2D490(&Method_QuestAfterAction_GetMapComponent_ModelLineComponent___);
    sub_1C2D490(&Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
    sub_1C2D490(&Method_QuestAfterAction_GetMapComponent_srcLineSprite___);
    sub_1C2D490(&QuestAfterAction_TypeInfo);
    sub_1C2D490(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1C2D490(&SceneJumpInfo_TypeInfo);
    sub_1C2D490(&SeManager_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
    sub_1C2D490(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_1C2D490(&SoundManager_TypeInfo);
    sub_1C2D490(&Method_QuestAfterAction_StateMain_UpdateAnim__);
    sub_1C2D490(&string___TypeInfo);
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    sub_1C2D490(&TerminalSceneComponent_TypeInfo);
    sub_1C2D490(&QuestAfterAction_TitleInfoControlParam_TypeInfo);
    sub_1C2D490(&Method_QuestAfterAction_StateMain___c__UpdateAnim_b__16_22__);
    sub_1C2D490(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__10__);
    sub_1C2D490(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__11__);
    sub_1C2D490(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__12__);
    sub_1C2D490(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__23__);
    sub_1C2D490(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__29__);
    sub_1C2D490(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__30__);
    sub_1C2D490(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__31__);
    sub_1C2D490(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__32__);
    sub_1C2D490(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__33__);
    sub_1C2D490(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__9__);
    sub_1C2D490(&QuestAfterAction_StateMain___c__DisplayClass16_0_TypeInfo);
    sub_1C2D490(&Method_QuestAfterAction_StateMain___c__DisplayClass16_10__UpdateAnim_b__13__);
    sub_1C2D490(&Method_QuestAfterAction_StateMain___c__DisplayClass16_10__UpdateAnim_b__14__);
    sub_1C2D490(&QuestAfterAction_StateMain___c__DisplayClass16_10_TypeInfo);
    sub_1C2D490(&Method_QuestAfterAction_StateMain___c__DisplayClass16_11__UpdateAnim_b__15__);
    sub_1C2D490(&Method_QuestAfterAction_StateMain___c__DisplayClass16_11__UpdateAnim_b__16__);
    sub_1C2D490(&QuestAfterAction_StateMain___c__DisplayClass16_11_TypeInfo);
    sub_1C2D490(&Method_QuestAfterAction_StateMain___c__DisplayClass16_12__UpdateAnim_b__17__);
    sub_1C2D490(&QuestAfterAction_StateMain___c__DisplayClass16_12_TypeInfo);
    sub_1C2D490(&Method_QuestAfterAction_StateMain___c__DisplayClass16_13__UpdateAnim_b__18__);
    sub_1C2D490(&QuestAfterAction_StateMain___c__DisplayClass16_13_TypeInfo);
    sub_1C2D490(&Method_QuestAfterAction_StateMain___c__DisplayClass16_15__UpdateAnim_b__20__);
    sub_1C2D490(&Method_QuestAfterAction_StateMain___c__DisplayClass16_15__UpdateAnim_b__21__);
    sub_1C2D490(&QuestAfterAction_StateMain___c__DisplayClass16_15_TypeInfo);
    sub_1C2D490(&Method_QuestAfterAction_StateMain___c__DisplayClass16_16__UpdateAnim_b__24__);
    sub_1C2D490(&QuestAfterAction_StateMain___c__DisplayClass16_16_TypeInfo);
    sub_1C2D490(&Method_QuestAfterAction_StateMain___c__DisplayClass16_17__UpdateAnim_b__34__);
    sub_1C2D490(&QuestAfterAction_StateMain___c__DisplayClass16_17_TypeInfo);
    sub_1C2D490(&Method_QuestAfterAction_StateMain___c__DisplayClass16_1__UpdateAnim_b__0__);
    sub_1C2D490(&QuestAfterAction_StateMain___c__DisplayClass16_1_TypeInfo);
    sub_1C2D490(&Method_QuestAfterAction_StateMain___c__DisplayClass16_2__UpdateAnim_b__1__);
    sub_1C2D490(&QuestAfterAction_StateMain___c__DisplayClass16_2_TypeInfo);
    sub_1C2D490(&Method_QuestAfterAction_StateMain___c__DisplayClass16_3__UpdateAnim_b__2__);
    sub_1C2D490(&QuestAfterAction_StateMain___c__DisplayClass16_3_TypeInfo);
    sub_1C2D490(&Method_QuestAfterAction_StateMain___c__DisplayClass16_4__UpdateAnim_b__3__);
    sub_1C2D490(&QuestAfterAction_StateMain___c__DisplayClass16_4_TypeInfo);
    sub_1C2D490(&Method_QuestAfterAction_StateMain___c__DisplayClass16_5__UpdateAnim_b__4__);
    sub_1C2D490(&QuestAfterAction_StateMain___c__DisplayClass16_5_TypeInfo);
    sub_1C2D490(&Method_QuestAfterAction_StateMain___c__DisplayClass16_6__UpdateAnim_b__5__);
    sub_1C2D490(&QuestAfterAction_StateMain___c__DisplayClass16_6_TypeInfo);
    sub_1C2D490(&Method_QuestAfterAction_StateMain___c__DisplayClass16_7__UpdateAnim_b__6__);
    sub_1C2D490(&QuestAfterAction_StateMain___c__DisplayClass16_7_TypeInfo);
    sub_1C2D490(&Method_QuestAfterAction_StateMain___c__DisplayClass16_8__UpdateAnim_b__7__);
    sub_1C2D490(&QuestAfterAction_StateMain___c__DisplayClass16_8_TypeInfo);
    sub_1C2D490(&Method_QuestAfterAction_StateMain___c__DisplayClass16_9__UpdateAnim_b__8__);
    sub_1C2D490(&QuestAfterAction_StateMain___c__DisplayClass16_9_TypeInfo);
    sub_1C2D490(&QuestAfterAction_StateMain___c_TypeInfo);
    sub_1C2D490(&StringLiteral_87/*"\r\n"*/);
    sub_1C2D490(&StringLiteral_1380/*"30101"*/);
    sub_1C2D490(&StringLiteral_10814/*"QUEST_AFTER_ACTION_MESSAGE_"*/);
    sub_1C2D490(&StringLiteral_1381/*"30102"*/);
    sub_1C2D490(&StringLiteral_1307/*"10703"*/);
    sub_1C2D490(&StringLiteral_811/*","*/);
    sub_1C2D490(&StringLiteral_3290/*"CAPTER WAIT"*/);
    sub_1C2D490(&StringLiteral_1/*""*/);
    sub_1C2D490(&StringLiteral_19850/*"gevINFOBAR_BACK"*/);
    sub_1C2D490(&StringLiteral_1122/*"0"*/);
    byte_4C23E8C = 1;
  }
  isQuickUpdate = 0;
  *(_QWORD *)&color.fields.r = 0;
  *(_QWORD *)&color.fields.b = 0;
  value = 0;
  entity = 0;
  v5 = sub_1C2D6DC(QuestAfterAction_StateMain___c__DisplayClass16_0_TypeInfo);
  QuestAfterAction_StateMain___c__DisplayClass16_0___ctor((QuestAfterAction_StateMain___c__DisplayClass16_0_o *)v5, 0);
  if ( !v5 )
    goto LABEL_1104;
  *(_QWORD *)(v5 + 16) = this;
  sub_1C2D434((CGThumbnailListItem_o *)(v5 + 16), (int32_t)this, v8, v9);
  *(_QWORD *)(v5 + 24) = that;
  v10 = (QuestAfterAction_o **)(v5 + 24);
  sub_1C2D434((CGThumbnailListItem_o *)(v5 + 24), (int32_t)that, v11, v12);
  if ( this->fields.IsAnimDoing )
    return;
  updated = ((__int64 (__fastcall *)(QuestAfterAction_StateMain_o *, const MethodInfo *))this->klass->vtable._10_get_CommandBuf.methodPtr)(
              this,
              this->klass->vtable._10_get_CommandBuf.method);
  if ( !updated )
    return;
  if ( !*v10 )
    goto LABEL_1104;
  if ( (*v10)->fields.isSkippedNext )
  {
    updated = ((__int64 (__fastcall *)(QuestAfterAction_StateMain_o *, const MethodInfo *))this->klass->vtable._14_EndAnim.methodPtr)(
                this,
                this->klass->vtable._14_EndAnim.method);
    if ( *v10 )
    {
      (*v10)->fields.isSkippedNext = 0;
      return;
    }
LABEL_1104:
    sub_1C2D6EC(updated, v7);
  }
  klass = this->klass;
  this->fields.IsAnimDoing = 1;
  v14 = ((__int64 (__fastcall *)(QuestAfterAction_StateMain_o *, const MethodInfo *))klass->vtable._10_get_CommandBuf.methodPtr)(
          this,
          klass->vtable._10_get_CommandBuf.method);
  updated = ((__int64 (__fastcall *)(QuestAfterAction_StateMain_o *, const MethodInfo *))this->klass->vtable._11_get_CommandIndex.methodPtr)(
              this,
              this->klass->vtable._11_get_CommandIndex.method);
  if ( !v14 )
    goto LABEL_1104;
  if ( (unsigned int)updated >= *(_DWORD *)(v14 + 24) )
    goto LABEL_1105;
  v16 = *(QuestAfterAction_Command_o **)(v14 + 8LL * (int)updated + 32);
  updated = ((__int64 (__fastcall *)(QuestAfterAction_StateMain_o *, QuestAfterAction_Command_o *, const MethodInfo *))this->klass->vtable._9_IsUsableCommand.methodPtr)(
              this,
              v16,
              this->klass->vtable._9_IsUsableCommand.method);
  if ( (updated & 1) == 0 )
    goto LABEL_999;
  v17 = *v10;
  if ( !*v10 )
    goto LABEL_1104;
  BlankEarthQuestAfterAction_k__BackingField = v17->fields._BlankEarthQuestAfterAction_k__BackingField;
  v19 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(v19, (Il2CppObject *)this, (intptr_t)this->klass->vtable._14_EndAnim.method, 0);
  if ( !BlankEarthQuestAfterAction_k__BackingField )
    goto LABEL_1104;
  updated = BlankEarthQuestAfterAction__UpdateAnim(
              BlankEarthQuestAfterAction_k__BackingField,
              v17,
              v16,
              v19,
              &isQuickUpdate,
              0);
  if ( (updated & 1) == 0 )
  {
    if ( !v16 )
      goto LABEL_1104;
    id = v16->fields.id;
    if ( id > 530 )
    {
      if ( id > 800 )
      {
        if ( id <= 851 )
        {
          switch ( id )
          {
            case 801:
              param = v16->fields.param;
              v128 = Method_QuestAfterAction_StateMain_UpdateAnim__;
              if ( (*((_BYTE *)Method_QuestAfterAction_StateMain_UpdateAnim__ + 83) & 2) != 0 )
                v128 = (_QWORD *)sub_1C2D4A8(Method_QuestAfterAction_StateMain_UpdateAnim__);
              v129 = (System_Reflection_MethodBase_o *)sub_1C2D474(v128, v128[4]);
              OverwriteAssetSoundName__PlaySe(v129, param, 0, 0);
              goto LABEL_18;
            case 850:
              if ( !SoundManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
              SoundManager__stopBgm(0);
              if ( !*v10 )
                goto LABEL_1104;
              (*v10)->fields.isRequestedStopBgm = 1;
              goto LABEL_18;
            case 851:
              if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
              if ( !byte_4C21383 )
              {
                sub_1C2D490(&TerminalSceneComponent_TypeInfo);
                byte_4C21383 = 1;
              }
              v53 = TerminalSceneComponent_TypeInfo;
              if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
                v53 = TerminalSceneComponent_TypeInfo;
              }
              mInstance = v53->static_fields->mInstance;
              updated = (__int64)QuestAfterAction_Command__GetBgmName(v16, v7);
              if ( !mInstance )
                goto LABEL_1104;
              TerminalSceneComponent__playBgm(mInstance, (System_String_o *)updated, 0, 0);
              if ( !*v10 )
                goto LABEL_1104;
              (*v10)->fields.isRequestedStopBgm = 0;
              goto LABEL_18;
          }
          return;
        }
        switch ( id )
        {
          case 900:
            v97 = (float)System_Int32__Parse(v16->fields.param, 0) / 1000.0;
            if ( v97 <= 0.0 )
              goto LABEL_18;
            this->fields.waitTime = v97;
            this->fields.waitStartTime = UnityEngine_Time__get_realtimeSinceStartup(0);
            return;
          case 1100:
            v98 = sub_1C2D6DC(QuestAfterAction_StateMain___c__DisplayClass16_17_TypeInfo);
            QuestAfterAction_StateMain___c__DisplayClass16_17___ctor(
              (QuestAfterAction_StateMain___c__DisplayClass16_17_o *)v98,
              0);
            if ( !v98 )
              goto LABEL_1104;
            *(_QWORD *)(v98 + 24) = v5;
            sub_1C2D434((CGThumbnailListItem_o *)(v98 + 24), v5, v99, v100);
            updated = (__int64)v16->fields.param;
            if ( !updated )
              goto LABEL_1104;
            updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0);
            if ( !updated )
              goto LABEL_1104;
            v101 = updated;
            if ( *(_DWORD *)(updated + 24) )
            {
              updated = System_Int32__Parse(*(System_String_o **)(updated + 32), 0);
              if ( *(_DWORD *)(v101 + 24) > 1u )
              {
                v102 = updated;
                v103 = System_Int32__Parse(*(System_String_o **)(v101 + 40), 0);
                if ( !BgmManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
                if ( !byte_4C22146 )
                {
                  sub_1C2D490(&BgmManager_TypeInfo);
                  byte_4C22146 = 1;
                }
                v104 = BgmManager_TypeInfo;
                if ( !BgmManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
                  v104 = BgmManager_TypeInfo;
                }
                v105 = -1.0;
                masterVolume = v104->static_fields->masterVolume;
                *(float *)(v98 + 20) = masterVolume;
                if ( *(int *)(v101 + 24) >= 3 )
                {
                  v105 = System_Single__Parse(*(System_String_o **)(v101 + 48), 0);
                  masterVolume = *(float *)(v98 + 20);
                }
                v107 = v105 * masterVolume;
                *(float *)(v98 + 16) = v107;
                if ( v107 > -1.0 )
                {
                  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
                  if ( !byte_4C21383 )
                  {
                    sub_1C2D490(&TerminalSceneComponent_TypeInfo);
                    byte_4C21383 = 1;
                  }
                  updated = (__int64)TerminalSceneComponent_TypeInfo;
                  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
                    updated = (__int64)TerminalSceneComponent_TypeInfo;
                  }
                  v108 = **(_QWORD **)(updated + 184);
                  if ( !v108 )
                    goto LABEL_1104;
                  v109 = *(ScrTerminalListTop_o **)(v108 + 256);
                  v110 = *(float *)(v98 + 16);
                  v111 = *(float *)(v98 + 20);
                  updated = (__int64)QuestAfterAction_TypeInfo;
                  if ( !QuestAfterAction_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(QuestAfterAction_TypeInfo);
                  if ( !v109 )
                    goto LABEL_1104;
                  ScrTerminalListTop__StartEasingBgmMasterVolume(
                    v109,
                    v111,
                    v110,
                    QuestAfterAction_TypeInfo->static_fields->EventAnimationAfterBgmResetTime,
                    2,
                    0,
                    0);
                }
                if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
                if ( !byte_4C21383 )
                {
                  sub_1C2D490(&TerminalSceneComponent_TypeInfo);
                  byte_4C21383 = 1;
                }
                updated = (__int64)TerminalSceneComponent_TypeInfo;
                if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
                  updated = (__int64)TerminalSceneComponent_TypeInfo;
                }
                v112 = **(_QWORD **)(updated + 184);
                if ( !v112 )
                  goto LABEL_1104;
                v113 = *(ScrTerminalListTop_o **)(v112 + 256);
                v114 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
                System_Action___ctor(
                  v114,
                  (Il2CppObject *)v98,
                  Method_QuestAfterAction_StateMain___c__DisplayClass16_17__UpdateAnim_b__34__,
                  0);
                if ( !v113 )
                  goto LABEL_1104;
                ScrTerminalListTop__StartEventEffect(v113, v102, v103, v114, 0, 0);
                return;
              }
            }
            break;
          case 1200:
            updated = (__int64)v16->fields.param;
            if ( !updated )
              goto LABEL_1104;
            updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0);
            if ( !updated )
              goto LABEL_1104;
            v21 = updated;
            if ( *(_DWORD *)(updated + 24) )
            {
              updated = System_Int32__Parse(*(System_String_o **)(updated + 32), 0);
              if ( *(_DWORD *)(v21 + 24) > 1u )
              {
                v22 = updated;
                v23 = System_Int32__Parse(*(System_String_o **)(v21 + 40), 0);
                if ( v22 == 2 )
                {
                  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
                  if ( !byte_4C21383 )
                  {
                    sub_1C2D490(&TerminalSceneComponent_TypeInfo);
                    byte_4C21383 = 1;
                  }
                  updated = (__int64)TerminalSceneComponent_TypeInfo;
                  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
                    updated = (__int64)TerminalSceneComponent_TypeInfo;
                  }
                  v402 = **(_QWORD **)(updated + 184);
                  if ( !v402 )
                    goto LABEL_1104;
                  updated = *(_QWORD *)(v402 + 256);
                  if ( !updated )
                    goto LABEL_1104;
                  v25 = 1;
                  v27 = v23;
                }
                else
                {
                  if ( v22 != 1 )
                  {
                    if ( v22 )
                      goto LABEL_18;
                    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
                    if ( !byte_4C21383 )
                    {
                      sub_1C2D490(&TerminalSceneComponent_TypeInfo);
                      byte_4C21383 = 1;
                    }
                    updated = (__int64)TerminalSceneComponent_TypeInfo;
                    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
                      updated = (__int64)TerminalSceneComponent_TypeInfo;
                    }
                    v24 = **(_QWORD **)(updated + 184);
                    if ( !v24 )
                      goto LABEL_1104;
                    updated = *(_QWORD *)(v24 + 256);
                    if ( !updated )
                      goto LABEL_1104;
                    v25 = 1;
                    v26 = 1;
                    v27 = v23;
LABEL_733:
                    ScrTerminalListTop__SetQuestStateForEventEffect((ScrTerminalListTop_o *)updated, v27, v25, v26, 0);
                    goto LABEL_18;
                  }
                  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
                  if ( !byte_4C21383 )
                  {
                    sub_1C2D490(&TerminalSceneComponent_TypeInfo);
                    byte_4C21383 = 1;
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
                  v27 = v23;
                  v25 = 0;
                }
                v26 = 0;
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
            v92 = (System_String_o *)StringLiteral_1/*""*/;
            v93 = System_String__Concat_63457864((System_String_o *)StringLiteral_10814/*"QUEST_AFTER_ACTION_MESSAGE_"*/, v16->fields.param, 0);
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v94 = LocalizationManager__Get(v93, 0);
            Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            v96 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
            System_Action___ctor(
              v96,
              (Il2CppObject *)v5,
              Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__29__,
              0);
            if ( !Instance )
              goto LABEL_1104;
            CommonUI__OpenNotificationDialog(
              (CommonUI_o *)Instance,
              v92,
              v94,
              v96,
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
            v211 = StringLiteral_1/*""*/;
            updated = sub_1C2D538(string___TypeInfo, 1);
            if ( !updated )
              goto LABEL_1104;
            v213 = (System_String_array *)updated;
            if ( !*(_DWORD *)(updated + 24) )
              goto LABEL_1105;
            v214 = StringLiteral_87/*"\r\n"*/;
            *(_QWORD *)(updated + 32) = StringLiteral_87/*"\r\n"*/;
            sub_1C2D434((CGThumbnailListItem_o *)(updated + 32), v214, (int32_t)v15, v212);
            updated = (__int64)v16->fields.param;
            if ( !updated )
              goto LABEL_1104;
            updated = (__int64)System_String__Split_63510896((System_String_o *)updated, v213, 0, 0);
            if ( !updated )
              goto LABEL_1104;
            v215 = *(_DWORD *)(updated + 24);
            if ( v215 <= 0 )
              goto LABEL_999;
            v216 = *(System_String_o **)(updated + 32);
            if ( v215 == 1 )
            {
              v217 = *(System_String_o **)(updated + 32);
              v216 = (System_String_o *)v211;
            }
            else
            {
              v217 = *(System_String_o **)(updated + 40);
            }
            v472 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            v473 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
            System_Action___ctor(
              v473,
              (Il2CppObject *)v5,
              Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__30__,
              0);
            if ( !v472 )
              goto LABEL_1104;
            CommonUI__OpenNotificationDialog(
              (CommonUI_o *)v472,
              v216,
              v217,
              v473,
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
            v219 = System_String__Concat_63457864((System_String_o *)StringLiteral_10814/*"QUEST_AFTER_ACTION_MESSAGE_"*/, v16->fields.param, 0);
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v220 = LocalizationManager__Get(v219, 0);
            v221 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            v222 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
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
            updated = sub_1C2D538(string___TypeInfo, 1);
            if ( !updated )
              goto LABEL_1104;
            v225 = (System_String_array *)updated;
            if ( !*(_DWORD *)(updated + 24) )
              goto LABEL_1105;
            v226 = StringLiteral_87/*"\r\n"*/;
            *(_QWORD *)(updated + 32) = StringLiteral_87/*"\r\n"*/;
            sub_1C2D434((CGThumbnailListItem_o *)(updated + 32), v226, (int32_t)v15, v224);
            updated = (__int64)v16->fields.param;
            if ( !updated )
              goto LABEL_1104;
            updated = (__int64)System_String__Split_63510896((System_String_o *)updated, v225, 0, 0);
            if ( !updated )
              goto LABEL_1104;
            v227 = *(_DWORD *)(updated + 24);
            if ( v227 <= 0 )
              goto LABEL_999;
            v218 = *(System_String_o **)(updated + 32);
            if ( v227 == 1 )
            {
              v220 = *(System_String_o **)(updated + 32);
              v218 = (System_String_o *)v223;
            }
            else
            {
              v220 = *(System_String_o **)(updated + 40);
            }
            v221 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            v222 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
            System_Action___ctor(
              v222,
              (Il2CppObject *)v5,
              Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__32__,
              0);
            if ( !v221 )
              goto LABEL_1104;
            onClickOkSeKind = 1;
LABEL_876:
            CommonUI__OpenNotificationDialog_31168676(
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
            v228 = (System_String_o *)StringLiteral_1/*""*/;
            v229 = System_String__Concat_63457864((System_String_o *)StringLiteral_10814/*"QUEST_AFTER_ACTION_MESSAGE_"*/, v16->fields.param, 0);
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v230 = LocalizationManager__Get(v229, 0);
            v231 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            v232 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
            System_Action___ctor(
              v232,
              (Il2CppObject *)v5,
              Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__33__,
              0);
            if ( !v231 )
              goto LABEL_1104;
            CommonUI__OpenNotificationDialog_31168676(
              (CommonUI_o *)v231,
              v228,
              v230,
              v232,
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
                updated = (__int64)v16->fields.param;
                if ( !updated )
                  goto LABEL_1104;
                updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0);
                if ( !updated )
                  goto LABEL_1104;
                v47 = updated;
                if ( !*(_DWORD *)(updated + 24) )
                  goto LABEL_1105;
                v48 = System_Int32__Parse(*(System_String_o **)(updated + 32), 0);
                if ( *(int *)(v47 + 24) >= 2 )
                  v49 = System_Int32__Parse(*(System_String_o **)(v47 + 40), 0) + 1;
                else
                  v49 = 0;
                v469 = (SceneJumpInfo_o *)sub_1C2D6DC(SceneJumpInfo_TypeInfo);
                SceneJumpInfo___ctor_41257448(v469, (System_String_o *)StringLiteral_1/*""*/, v48, v49, 0);
                updated = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
                if ( !updated )
                  goto LABEL_1104;
                v467 = 72;
                v468 = (Il2CppObject *)v469;
                goto LABEL_998;
              case 701:
                if ( !System_String__op_Equality(v16->fields.param, (System_String_o *)StringLiteral_1122/*"0"*/, 0) )
                  goto LABEL_18;
                if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                if ( !byte_4C23E9E )
                {
                  sub_1C2D490(&TerminalPramsManager_TypeInfo);
                  byte_4C23E9E = 1;
                }
                v193 = TerminalPramsManager_TypeInfo;
                if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                  v193 = TerminalPramsManager_TypeInfo;
                }
                v193->static_fields->_IsTransOrdealCall_k__BackingField = 1;
                goto LABEL_868;
              case 702:
                updated = (__int64)v16->fields.param;
                if ( !updated )
                  goto LABEL_1104;
                updated = (__int64)System_String__Split_63509756(
                                     (System_String_o *)updated,
                                     (System_String_o *)StringLiteral_811/*","*/,
                                     0,
                                     0);
                if ( !updated )
                  goto LABEL_1104;
                v194 = *(_QWORD *)(updated + 24);
                v195 = updated;
                if ( !v194 )
                  goto LABEL_853;
                if ( !(_DWORD)v194 )
                  goto LABEL_1105;
                if ( System_Int32__Parse(*(System_String_o **)(updated + 32), 0) > 0 )
                  goto LABEL_18;
                if ( *(int *)(v195 + 24) < 2 )
LABEL_853:
                  v196 = 0;
                else
                  v196 = System_Int32__Parse(*(System_String_o **)(v195 + 40), 0);
                if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                TerminalPramsManager__SetAutoResumeForFolder(v196, 0);
                if ( !byte_4C23DDC )
                {
                  sub_1C2D490(&TerminalPramsManager_TypeInfo);
                  byte_4C23DDC = 1;
                }
                v470 = TerminalPramsManager_TypeInfo;
                if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                  v470 = TerminalPramsManager_TypeInfo;
                }
                if ( v470->static_fields->_DispState_k__BackingField == 3 )
                {
                  if ( !v470->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(v470);
                  if ( !byte_4C23E9F )
                  {
                    sub_1C2D490(&TerminalPramsManager_TypeInfo);
                    byte_4C23E9F = 1;
                  }
                  v471 = TerminalPramsManager_TypeInfo;
                  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                    v471 = TerminalPramsManager_TypeInfo;
                  }
                  v471->static_fields->_IsMoveFolderByQuestAfterAction_k__BackingField = 1;
                }
LABEL_868:
                updated = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
                if ( !updated )
                  goto LABEL_1104;
                AvalonSceneManager__transitionSceneRefresh((AvalonSceneManager_o *)updated, 34, 1, 0, 0, 0);
                goto LABEL_999;
              case 703:
                updated = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
                if ( !updated )
                  goto LABEL_1104;
                *(_BYTE *)(updated + 195) = 0;
                updated = (__int64)v16->fields.param;
                if ( !updated )
                  goto LABEL_1104;
                updated = (__int64)System_String__Split_63509756(
                                     (System_String_o *)updated,
                                     (System_String_o *)StringLiteral_811/*","*/,
                                     0,
                                     0);
                if ( !updated )
                  goto LABEL_1104;
                v197 = *(_QWORD *)(updated + 24);
                v198 = updated;
                if ( !v197 )
                  goto LABEL_848;
                if ( !(_DWORD)v197 )
                  goto LABEL_1105;
                v199 = System_Int32__Parse(*(System_String_o **)(updated + 32), 0);
                if ( v199 < 1 )
                {
LABEL_848:
                  updated = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
                  if ( !updated )
                    goto LABEL_1104;
                  v467 = 91;
                  v468 = 0;
                  goto LABEL_998;
                }
                v200 = v199;
                if ( *(int *)(v198 + 24) > 1 )
                {
                  v544 = System_Int32__Parse(*(System_String_o **)(v198 + 40), 0);
                  v201 = (System_String_o *)StringLiteral_1/*""*/;
                  if ( v544 >= 1 )
                  {
                    v545 = 1;
                    goto LABEL_996;
                  }
                }
                else
                {
                  v201 = (System_String_o *)StringLiteral_1/*""*/;
                }
                v545 = 0;
LABEL_996:
                v546 = (SceneJumpInfo_o *)sub_1C2D6DC(SceneJumpInfo_TypeInfo);
                SceneJumpInfo___ctor_41257448(v546, v201, v200, v545, 0);
                updated = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
                if ( !updated )
                  goto LABEL_1104;
                v467 = 91;
                v468 = (Il2CppObject *)v546;
LABEL_998:
                AvalonSceneManager__transitionScene((AvalonSceneManager_o *)updated, v467, 1, v468, 0);
                goto LABEL_999;
              default:
                if ( id != 800 )
                  return;
                v146 = *v10;
                if ( !*v10 )
                  goto LABEL_1104;
                updated = (__int64)v146->fields.svtVoices;
                if ( !updated )
                  goto LABEL_1104;
                if ( !System_Collections_Generic_Dictionary_int__object___TryGetValue(
                        (System_Collections_Generic_Dictionary_int__object__o *)updated,
                        v146->fields.commandIdx,
                        &value,
                        (const MethodInfo_33E2A08 *)Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__TryGetValue__) )
                  goto LABEL_999;
                updated = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
                if ( !updated )
                  goto LABEL_1104;
                AutomatedAction__TerminateMissionAction((AutomatedAction_o *)updated, 0);
                if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
                if ( !byte_4C21383 )
                {
                  sub_1C2D490(&TerminalSceneComponent_TypeInfo);
                  byte_4C21383 = 1;
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
                if ( !*(_QWORD *)(v147 + 464) )
                  goto LABEL_273;
                if ( !*(_DWORD *)(updated + 224) )
                  j_il2cpp_runtime_class_init_0(updated);
                if ( !byte_4C21383 )
                {
                  sub_1C2D490(&TerminalSceneComponent_TypeInfo);
                  byte_4C21383 = 1;
                }
                updated = (__int64)TerminalSceneComponent_TypeInfo;
                if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
                  updated = (__int64)TerminalSceneComponent_TypeInfo;
                }
                v148 = **(_QWORD **)(updated + 184);
                if ( !v148 )
                  goto LABEL_1104;
                v149 = *(_QWORD *)(v148 + 464);
                if ( !v149 )
                  goto LABEL_1104;
                updated = *(unsigned int *)(v149 + 48);
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
                  updated = (__int64)ServantVoiceEntity__getVoiceAssetName_42560796(updated, 0);
                  if ( !value )
                    goto LABEL_1104;
                  v150 = (System_String_o *)updated;
                  v151 = (System_String_o *)value[1].monitor;
                  v152 = SeManager_TypeInfo;
                  if ( !SeManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
                    v152 = SeManager_TypeInfo;
                  }
                  DEFAULT_VOLUME = v152->static_fields->DEFAULT_VOLUME;
                  if ( !SoundManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
                  SoundManager__playVoice_41296680(v150, v151, DEFAULT_VOLUME, 0, 0, 0);
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
        updated = (__int64)v16->fields.param;
        if ( !updated )
          goto LABEL_1104;
        updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0);
        if ( !updated )
          goto LABEL_1104;
        v64 = *(_QWORD *)(updated + 24);
        v65 = updated;
        if ( v64 )
        {
          if ( !(_DWORD)v64 )
            goto LABEL_1105;
          v66 = System_Int32__Parse(*(System_String_o **)(updated + 32), 0) > 0;
        }
        else
        {
          v66 = 0;
        }
        v187 = sub_1C2D6DC(QuestAfterAction_TitleInfoControlParam_TypeInfo);
        System_Object___ctor((Il2CppObject *)v187, 0);
        if ( *(int *)(v65 + 24) >= 2 )
        {
          updated = System_Int32__Parse(*(System_String_o **)(v65 + 40), 0);
          if ( (int)updated >= 1 )
          {
            if ( *(_DWORD *)(v65 + 24) <= 1u )
              goto LABEL_1105;
            updated = System_Int32__Parse(*(System_String_o **)(v65 + 40), 0);
            if ( !v187 )
              goto LABEL_1104;
            *(_DWORD *)(v187 + 16) = updated;
          }
        }
        if ( *(int *)(v65 + 24) > 2 )
        {
          updated = System_Int32__Parse(*(System_String_o **)(v65 + 48), 0);
          if ( (int)updated >= 1 )
          {
            if ( *(_DWORD *)(v65 + 24) <= 2u )
              goto LABEL_1105;
            updated = System_Int32__Parse(*(System_String_o **)(v65 + 48), 0);
            if ( !v187 )
              goto LABEL_1104;
            *(_DWORD *)(v187 + 20) = updated;
          }
        }
        v189 = *v10;
        if ( !*v10 )
          goto LABEL_1104;
        TitleInfoCtrlCallback_k__BackingField = v189->fields._TitleInfoCtrlCallback_k__BackingField;
        if ( v66 )
        {
          if ( !TitleInfoCtrlCallback_k__BackingField )
            goto LABEL_1104;
          QuestAfterAction_TitleInfoControlCallback__Start(
            v189->fields._TitleInfoCtrlCallback_k__BackingField,
            (QuestAfterAction_TitleInfoControlParam_o *)v187,
            0,
            v188);
          goto LABEL_18;
        }
        v191 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
        System_Action___ctor(v191, (Il2CppObject *)this, (intptr_t)this->klass->vtable._14_EndAnim.method, 0);
        if ( !TitleInfoCtrlCallback_k__BackingField )
          goto LABEL_1104;
        QuestAfterAction_TitleInfoControlCallback__Start(
          TitleInfoCtrlCallback_k__BackingField,
          (QuestAfterAction_TitleInfoControlParam_o *)v187,
          v191,
          v192);
        return;
      }
      updated = (__int64)v16->fields.param;
      if ( !updated )
        goto LABEL_1104;
      updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0);
      if ( !updated )
        goto LABEL_1104;
      v130 = updated;
      if ( !*(_DWORD *)(updated + 24) )
LABEL_1105:
        sub_1C2D6F4(updated, v7, v15);
      v131 = System_Int32__Parse(*(System_String_o **)(updated + 32), 0);
      if ( *(int *)(v130 + 24) < 2 )
      {
        v132 = -1;
      }
      else
      {
        v132 = System_Int32__Parse(*(System_String_o **)(v130 + 40), 0);
        if ( *(int *)(v130 + 24) >= 3 )
        {
          v133 = System_Int32__Parse(*(System_String_o **)(v130 + 48), 0);
LABEL_363:
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          if ( !byte_4C21ACD )
          {
            sub_1C2D490(&TerminalPramsManager_TypeInfo);
            byte_4C21ACD = 1;
          }
          v183 = TerminalPramsManager_TypeInfo;
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            v183 = TerminalPramsManager_TypeInfo;
          }
          v183->static_fields->_IsAutoResume_k__BackingField = 1;
          if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          if ( !byte_4C21383 )
          {
            sub_1C2D490(&TerminalSceneComponent_TypeInfo);
            byte_4C21383 = 1;
          }
          updated = (__int64)TerminalSceneComponent_TypeInfo;
          if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            updated = (__int64)TerminalSceneComponent_TypeInfo;
          }
          v184 = **(_QWORD **)(updated + 184);
          if ( !v184 )
            goto LABEL_1104;
          updated = *(_QWORD *)(v184 + 264);
          if ( !updated )
            goto LABEL_1104;
          if ( !ScrTerminalMap__RequestMapChange((ScrTerminalMap_o *)updated, v131, v132, v133, 0) )
          {
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            if ( !byte_4C21ACD )
            {
              sub_1C2D490(&TerminalPramsManager_TypeInfo);
              byte_4C21ACD = 1;
            }
            v186 = TerminalPramsManager_TypeInfo;
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
              v186 = TerminalPramsManager_TypeInfo;
            }
            v186->static_fields->_IsAutoResume_k__BackingField = 0;
            goto LABEL_18;
          }
          ((void (__fastcall *)(QuestAfterAction_StateMain_o *, const MethodInfo *))this->klass->vtable._14_EndAnim.methodPtr)(
            this,
            this->klass->vtable._14_EndAnim.method);
          updated = (__int64)*v10;
          if ( !*v10 )
            goto LABEL_1104;
          QuestAfterAction__SetState((QuestAfterAction_o *)updated, 0, v185);
          return;
        }
      }
      v133 = -1;
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
            DEFAULT_FADE_TIME = System_Single__Parse(v16->fields.param, 0);
            if ( DEFAULT_FADE_TIME <= 0.0 )
            {
              v120 = AvalonSceneManager_TypeInfo;
              if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
                v120 = AvalonSceneManager_TypeInfo;
              }
              DEFAULT_FADE_TIME = v120->static_fields->DEFAULT_FADE_TIME;
            }
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            if ( !byte_4C21383 )
            {
              sub_1C2D490(&TerminalSceneComponent_TypeInfo);
              byte_4C21383 = 1;
            }
            v121 = TerminalSceneComponent_TypeInfo;
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
              v121 = TerminalSceneComponent_TypeInfo;
            }
            v122 = v121->static_fields->mInstance;
            v123 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
            System_Action___ctor(
              v123,
              (Il2CppObject *)v5,
              Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__23__,
              0);
            if ( !v122 )
              goto LABEL_1104;
            v124 = v122;
            v125 = DEFAULT_FADE_TIME;
            v126 = v123;
LABEL_202:
            TerminalSceneComponent__Fadein_MapDisp(v124, v125, v126, 0);
          }
          else if ( id == 530 )
          {
            v28 = sub_1C2D6DC(QuestAfterAction_StateMain___c__DisplayClass16_16_TypeInfo);
            QuestAfterAction_StateMain___c__DisplayClass16_16___ctor(
              (QuestAfterAction_StateMain___c__DisplayClass16_16_o *)v28,
              0);
            if ( !v28 )
              goto LABEL_1104;
            *(_QWORD *)(v28 + 32) = v5;
            v31 = v28 + 32;
            sub_1C2D434((CGThumbnailListItem_o *)(v28 + 32), v5, v29, v30);
            v32 = System_Int32__Parse(v16->fields.param, 0);
            updated = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( !updated )
              goto LABEL_1104;
            updated = (__int64)DataManager__GetMasterData_object_(
                                 (DataManager_o *)updated,
                                 (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_QuestMaster___);
            if ( !updated )
              goto LABEL_1104;
            v33 = DataMasterBase_object__object__int___GetEntity(
                    (DataMasterBase_TMaster__TEntity__PKType__o *)updated,
                    v32,
                    (const MethodInfo_3387D98 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
            *(_QWORD *)(v28 + 16) = v33;
            v34 = (__int64 *)(v28 + 16);
            sub_1C2D434((CGThumbnailListItem_o *)(v28 + 16), (int32_t)v33, v35, v36);
            updated = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_QuestTree__get_Instance__);
            if ( !updated )
              goto LABEL_1104;
            QuestInfo = QuestTree__GetQuestInfo((QuestTree_o *)updated, v32, 0);
            *(_QWORD *)(v28 + 24) = QuestInfo;
            v38 = v28 + 24;
            sub_1C2D434((CGThumbnailListItem_o *)(v28 + 24), (int32_t)QuestInfo, v39, v40);
            if ( !*(_QWORD *)(v28 + 24) )
              goto LABEL_1104;
            if ( *(_DWORD *)(*(_QWORD *)(v28 + 24) + 32LL) == 1 )
            {
              updated = *v34;
              if ( !*v34 )
                goto LABEL_1104;
              if ( QuestEntity__HasFlag((QuestEntity_o *)updated, 2, 0) )
              {
                if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                if ( !byte_4C23BE1 )
                {
                  sub_1C2D490(&TerminalPramsManager_TypeInfo);
                  byte_4C23BE1 = 1;
                }
                updated = (__int64)TerminalPramsManager_TypeInfo;
                if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                  updated = (__int64)TerminalPramsManager_TypeInfo;
                }
                *(_DWORD *)(*(_QWORD *)(updated + 184) + 20LL) = v32;
                if ( !*(_QWORD *)v38 )
                  goto LABEL_1104;
                v42 = *(_DWORD *)(*(_QWORD *)v38 + 44LL);
                if ( !byte_4C23BE5 )
                {
                  sub_1C2D490(&TerminalPramsManager_TypeInfo);
                  updated = (__int64)TerminalPramsManager_TypeInfo;
                  byte_4C23BE5 = 1;
                }
                if ( !*(_DWORD *)(updated + 224) )
                {
                  j_il2cpp_runtime_class_init_0(updated);
                  updated = (__int64)TerminalPramsManager_TypeInfo;
                }
                *(_DWORD *)(*(_QWORD *)(updated + 184) + 24LL) = v42;
                if ( !*(_QWORD *)v31 )
                  goto LABEL_1104;
                v43 = *(_QWORD *)(*(_QWORD *)v31 + 24LL);
                if ( !v43 )
                  goto LABEL_1104;
                *(_BYTE *)(v43 + 196) = 1;
                v44 = (NetworkManager_ResultCallbackFunc_o *)sub_1C2D6DC(NetworkManager_ResultCallbackFunc_TypeInfo);
                NetworkManager_ResultCallbackFunc___ctor(
                  v44,
                  (Il2CppObject *)v28,
                  Method_QuestAfterAction_StateMain___c__DisplayClass16_16__UpdateAnim_b__24__,
                  0);
                if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                Request_object = NetworkManager__getRequest_object_(
                                   v44,
                                   (const MethodInfo_31599E8 *)Method_NetworkManager_getRequest_BattleSetupScenarioRequest___);
                if ( !byte_4C21464 )
                {
                  sub_1C2D490(&TerminalPramsManager_TypeInfo);
                  byte_4C21464 = 1;
                }
                updated = (__int64)TerminalPramsManager_TypeInfo;
                if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                  updated = (__int64)TerminalPramsManager_TypeInfo;
                }
                v46 = *(_DWORD *)(*(_QWORD *)(updated + 184) + 20LL);
                if ( !byte_4C21463 )
                {
                  sub_1C2D490(&TerminalPramsManager_TypeInfo);
                  updated = (__int64)TerminalPramsManager_TypeInfo;
                  byte_4C21463 = 1;
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
                  v46,
                  *(_DWORD *)(*(_QWORD *)(updated + 184) + 24LL) + 1,
                  0);
              }
            }
            else
            {
              QuestAfterAction_StateMain__ForceEndAnim(this, 1, v41);
            }
          }
          return;
        }
        updated = (__int64)v16->fields.param;
        if ( !updated )
          goto LABEL_1104;
        updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0);
        if ( !updated )
          goto LABEL_1104;
        v115 = updated;
        if ( *(_DWORD *)(updated + 24) )
        {
          v116 = System_Int32__Parse(*(System_String_o **)(updated + 32), 0);
          v117 = 0.5;
          if ( *(int *)(v115 + 24) >= 2 )
          {
            v118 = System_Int32__Parse(*(System_String_o **)(v115 + 40), 0);
            if ( *(int *)(v115 + 24) >= 3 )
              v117 = System_Single__Parse(*(System_String_o **)(v115 + 48), 0);
          }
          else
          {
            v118 = v116;
            v116 = -1;
          }
          updated = (__int64)*v10;
          if ( !*v10 )
            goto LABEL_1104;
          MapComponent_object = QuestAfterAction__GetMapComponent_object_(
                                  (QuestAfterAction_o *)updated,
                                  0,
                                  v118,
                                  this,
                                  (const MethodInfo_316755C *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)MapComponent_object, 0, 0) )
          {
            if ( v116 >= 1 )
            {
              updated = (__int64)*v10;
              if ( !*v10 )
                goto LABEL_1104;
              v176 = QuestAfterAction__GetMapComponent_object_(
                       (QuestAfterAction_o *)updated,
                       0,
                       v116,
                       this,
                       (const MethodInfo_316755C *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v176, 0, 0) )
              {
                if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
                if ( !byte_4C21383 )
                {
                  sub_1C2D490(&TerminalSceneComponent_TypeInfo);
                  byte_4C21383 = 1;
                }
                updated = (__int64)TerminalSceneComponent_TypeInfo;
                if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
                  updated = (__int64)TerminalSceneComponent_TypeInfo;
                }
                v177 = **(_QWORD **)(updated + 184);
                if ( !v177 )
                  goto LABEL_1104;
                if ( !v176 )
                  goto LABEL_1104;
                v178 = *(ScrTerminalMap_o **)(v177 + 264);
                updated = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v176, 0);
                if ( !v178 )
                  goto LABEL_1104;
                ScrTerminalMap__SetPlayerIcon(v178, (UnityEngine_GameObject_o *)updated, 0);
              }
            }
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            if ( !byte_4C21383 )
            {
              sub_1C2D490(&TerminalSceneComponent_TypeInfo);
              byte_4C21383 = 1;
            }
            updated = (__int64)TerminalSceneComponent_TypeInfo;
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
              updated = (__int64)TerminalSceneComponent_TypeInfo;
            }
            v179 = **(_QWORD **)(updated + 184);
            if ( !v179 )
              goto LABEL_1104;
            if ( !MapComponent_object )
              goto LABEL_1104;
            v180 = *(ScrTerminalMap_o **)(v179 + 264);
            gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)MapComponent_object, 0);
            v182 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
            System_Action___ctor(v182, (Il2CppObject *)this, (intptr_t)this->klass->vtable._14_EndAnim.method, 0);
            if ( !v180 )
              goto LABEL_1104;
            ScrTerminalMap__MovePlayerIcon(v180, gameObject, v118, v182, v117, 0);
          }
          return;
        }
        goto LABEL_1105;
      }
      switch ( id )
      {
        case 400:
          v55 = sub_1C2D6DC(QuestAfterAction_StateMain___c__DisplayClass16_10_TypeInfo);
          QuestAfterAction_StateMain___c__DisplayClass16_10___ctor(
            (QuestAfterAction_StateMain___c__DisplayClass16_10_o *)v55,
            0);
          if ( !v55 )
            goto LABEL_1104;
          *(_QWORD *)(v55 + 24) = v5;
          v58 = v55 + 24;
          sub_1C2D434((CGThumbnailListItem_o *)(v55 + 24), v5, v56, v57);
          updated = (__int64)v16->fields.param;
          if ( !updated )
            goto LABEL_1104;
          updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0);
          if ( !updated )
            goto LABEL_1104;
          v59 = *(_QWORD *)(updated + 24);
          v60 = updated;
          if ( v59 )
          {
            if ( !(_DWORD)v59 )
              goto LABEL_1105;
            updated = System_Int32__Parse(*(System_String_o **)(updated + 32), 0);
            v61 = updated;
            if ( *(int *)(v60 + 24) >= 2 )
            {
              updated = System_Int32__Parse(*(System_String_o **)(v60 + 40), 0);
              v62 = (int)updated < 1;
              if ( *(int *)(v60 + 24) < 3 )
              {
                v63 = 0;
              }
              else
              {
                updated = System_Int32__Parse(*(System_String_o **)(v60 + 48), 0);
                v63 = (int)updated > 0;
              }
              goto LABEL_906;
            }
          }
          else
          {
            v61 = 0;
          }
          v63 = 0;
          v62 = 1;
LABEL_906:
          if ( !*(_QWORD *)v58 )
            goto LABEL_1104;
          updated = *(_QWORD *)(*(_QWORD *)v58 + 24LL);
          if ( !updated )
            goto LABEL_1104;
          v485 = QuestAfterAction__GetMapComponent_object_(
                   (QuestAfterAction_o *)updated,
                   2,
                   v61,
                   this,
                   (const MethodInfo_316755C *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
          *(_QWORD *)(v55 + 16) = v485;
          sub_1C2D434((CGThumbnailListItem_o *)(v55 + 16), (int32_t)v485, v486, v487);
          v488 = *(UnityEngine_Object_o **)(v55 + 16);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          updated = UnityEngine_Object__op_Equality(v488, 0, 0);
          if ( (updated & 1) != 0 )
            return;
          v489 = *(MapGimmickComponent_o **)(v55 + 16);
          if ( !v489 )
            goto LABEL_1104;
          v489->fields.isForceNotActive = v63;
          v490 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
          v491 = v490;
          if ( v62 )
          {
            System_Action___ctor(
              v490,
              (Il2CppObject *)v55,
              Method_QuestAfterAction_StateMain___c__DisplayClass16_10__UpdateAnim_b__14__,
              0);
            v369 = 2;
            v492 = v489;
            v493 = v491;
LABEL_1015:
            MapGimmickComponent__SetState(v492, v369, v493, v368);
            return;
          }
          System_Action___ctor(
            v490,
            (Il2CppObject *)v55,
            Method_QuestAfterAction_StateMain___c__DisplayClass16_10__UpdateAnim_b__13__,
            0);
          MapGimmickComponent__SetState(v489, 2, v491, v558);
          updated = ((__int64 (__fastcall *)(QuestAfterAction_StateMain_o *, const MethodInfo *))this->klass->vtable._14_EndAnim.methodPtr)(
                      this,
                      this->klass->vtable._14_EndAnim.method);
          v559 = *(_QWORD *)(v55 + 24);
          if ( !v559 )
            goto LABEL_1104;
          goto LABEL_1020;
        case 401:
          v299 = sub_1C2D6DC(QuestAfterAction_StateMain___c__DisplayClass16_11_TypeInfo);
          QuestAfterAction_StateMain___c__DisplayClass16_11___ctor(
            (QuestAfterAction_StateMain___c__DisplayClass16_11_o *)v299,
            0);
          if ( !v299 )
            goto LABEL_1104;
          *(_QWORD *)(v299 + 24) = v5;
          v302 = v299 + 24;
          sub_1C2D434((CGThumbnailListItem_o *)(v299 + 24), v5, v300, v301);
          updated = (__int64)v16->fields.param;
          if ( !updated )
            goto LABEL_1104;
          updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0);
          if ( !updated )
            goto LABEL_1104;
          v303 = *(_QWORD *)(updated + 24);
          v304 = updated;
          if ( v303 )
          {
            if ( !(_DWORD)v303 )
              goto LABEL_1105;
            updated = System_Int32__Parse(*(System_String_o **)(updated + 32), 0);
            v305 = updated;
            if ( *(int *)(v304 + 24) >= 2 )
            {
              updated = System_Int32__Parse(*(System_String_o **)(v304 + 40), 0);
              v306 = (int)updated < 1;
              if ( *(int *)(v304 + 24) < 3 )
              {
                v307 = 0;
              }
              else
              {
                updated = System_Int32__Parse(*(System_String_o **)(v304 + 48), 0);
                v307 = (int)updated > 0;
              }
              goto LABEL_916;
            }
          }
          else
          {
            v305 = 0;
          }
          v307 = 0;
          v306 = 1;
LABEL_916:
          if ( !*(_QWORD *)v302 )
            goto LABEL_1104;
          updated = *(_QWORD *)(*(_QWORD *)v302 + 24LL);
          if ( !updated )
            goto LABEL_1104;
          v494 = QuestAfterAction__GetMapComponent_object_(
                   (QuestAfterAction_o *)updated,
                   2,
                   v305,
                   this,
                   (const MethodInfo_316755C *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
          *(_QWORD *)(v299 + 16) = v494;
          v495 = (MapGimmickComponent_o **)(v299 + 16);
          sub_1C2D434((CGThumbnailListItem_o *)(v299 + 16), (int32_t)v494, v496, v497);
          v498 = *(UnityEngine_Object_o **)(v299 + 16);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          updated = UnityEngine_Object__op_Equality(v498, 0, 0);
          if ( (updated & 1) != 0 )
            return;
          v499 = *v495;
          if ( !*v495 )
            goto LABEL_1104;
          v499->fields.isForceLoop = v307;
          v499->fields.isForceNotActive = 0;
          if ( *(int *)(v304 + 24) >= 4 )
          {
            updated = System_Int32__Parse(*(System_String_o **)(v304 + 56), 0);
            if ( !*v495 )
              goto LABEL_1104;
            MapGimmickComponent__SetUseAnimNum(*v495, updated, 1, v500);
            v499 = *v495;
          }
          v501 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
          v352 = v501;
          if ( v306 )
          {
            System_Action___ctor(
              v501,
              (Il2CppObject *)v299,
              Method_QuestAfterAction_StateMain___c__DisplayClass16_11__UpdateAnim_b__16__,
              0);
            if ( !v499 )
              goto LABEL_1104;
            v369 = 3;
            v492 = v499;
LABEL_1014:
            v493 = v352;
            goto LABEL_1015;
          }
          System_Action___ctor(
            v501,
            (Il2CppObject *)v299,
            Method_QuestAfterAction_StateMain___c__DisplayClass16_11__UpdateAnim_b__15__,
            0);
          if ( !v499 )
            goto LABEL_1104;
          MapGimmickComponent__SetState(v499, 3, v352, v560);
          updated = ((__int64 (__fastcall *)(QuestAfterAction_StateMain_o *, const MethodInfo *))this->klass->vtable._14_EndAnim.methodPtr)(
                      this,
                      this->klass->vtable._14_EndAnim.method);
          v559 = *(_QWORD *)v302;
          if ( !*(_QWORD *)v302 )
            goto LABEL_1104;
LABEL_1020:
          ((void (__fastcall *)(QuestAfterAction_StateMain_o *, _QWORD, const MethodInfo *))this->klass->vtable._13_UpdateAnim.methodPtr)(
            this,
            *(_QWORD *)(v559 + 24),
            this->klass->vtable._13_UpdateAnim.method);
          return;
        case 402:
          updated = (__int64)v16->fields.param;
          if ( !updated )
            goto LABEL_1104;
          updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0);
          if ( !updated )
            goto LABEL_1104;
          v308 = *(_QWORD *)(updated + 24);
          v309 = updated;
          if ( v308 )
          {
            if ( !(_DWORD)v308 )
              goto LABEL_1105;
            v310 = System_Int32__Parse(*(System_String_o **)(updated + 32), 0);
            if ( *(int *)(v309 + 24) >= 2 )
            {
              v311 = System_Int32__Parse(*(System_String_o **)(v309 + 40), 0) > 0;
              goto LABEL_879;
            }
          }
          else
          {
            v310 = 0;
          }
          v311 = 0;
LABEL_879:
          updated = (__int64)*v10;
          if ( !*v10 )
            goto LABEL_1104;
          v474 = QuestAfterAction__GetMapComponent_object_(
                   (QuestAfterAction_o *)updated,
                   2,
                   v310,
                   this,
                   (const MethodInfo_316755C *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          updated = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v474, 0, 0);
          if ( (updated & 1) == 0 )
          {
            if ( !v474 )
              goto LABEL_1104;
            BYTE1(v474[6].monitor) = v311;
            MapGimmickComponent__SetDispAnim_35985868((MapGimmickComponent_o *)v474, 0, 0.0, 0, v475);
            v426 = v474[7].klass;
            if ( !v426 )
              goto LABEL_1104;
LABEL_961:
            v426[4] = 0;
            goto LABEL_18;
          }
          return;
        case 403:
          updated = (__int64)v16->fields.param;
          if ( !updated )
            goto LABEL_1104;
          updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0);
          if ( !updated )
            goto LABEL_1104;
          v312 = *(_QWORD *)(updated + 24);
          v313 = updated;
          if ( v312 )
          {
            if ( !(_DWORD)v312 )
              goto LABEL_1105;
            v314 = System_Int32__Parse(*(System_String_o **)(updated + 32), 0);
            if ( *(int *)(v313 + 24) >= 2 )
            {
              v315 = System_Int32__Parse(*(System_String_o **)(v313 + 40), 0) > 0;
              goto LABEL_888;
            }
          }
          else
          {
            v314 = 0;
          }
          v315 = 0;
LABEL_888:
          updated = (__int64)*v10;
          if ( !*v10 )
            goto LABEL_1104;
          v476 = QuestAfterAction__GetMapComponent_object_(
                   (QuestAfterAction_o *)updated,
                   2,
                   v314,
                   this,
                   (const MethodInfo_316755C *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          updated = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v476, 0, 0);
          if ( (updated & 1) == 0 )
          {
            if ( !v476 )
              goto LABEL_1104;
            LOBYTE(v476[6].monitor) = v315;
            BYTE1(v476[6].monitor) = 0;
            MapGimmickComponent__SetDispAnim_35985868((MapGimmickComponent_o *)v476, 1, 0.0, 0, v477);
            v478 = v476[7].klass;
            if ( !v478 )
              goto LABEL_1104;
            LODWORD(v478->_1.name) = 1;
            goto LABEL_18;
          }
          return;
        case 404:
          updated = (__int64)v16->fields.param;
          if ( !updated )
            goto LABEL_1104;
          updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0);
          if ( !updated )
            goto LABEL_1104;
          v316 = updated;
          if ( *(int *)(updated + 24) <= 4 )
            goto LABEL_999;
          v317 = System_Single__Parse(*(System_String_o **)(updated + 56), 0);
          if ( !*(_DWORD *)(v316 + 24) )
            goto LABEL_1105;
          v318 = *v10;
          v319 = v317;
          updated = System_Int32__Parse(*(System_String_o **)(v316 + 32), 0);
          if ( !v318 )
            goto LABEL_1104;
          v320 = QuestAfterAction__GetMapComponent_object_(
                   v318,
                   2,
                   updated,
                   this,
                   (const MethodInfo_316755C *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v320, 0, 0) )
            return;
          v321 = *(int *)(v316 + 24) >= 6 && System_Int32__Parse(*(System_String_o **)(v316 + 72), 0) > 0;
          if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          if ( !byte_4C21383 )
          {
            sub_1C2D490(&TerminalSceneComponent_TypeInfo);
            byte_4C21383 = 1;
          }
          updated = (__int64)TerminalSceneComponent_TypeInfo;
          if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            updated = (__int64)TerminalSceneComponent_TypeInfo;
          }
          v573 = **(_QWORD **)(updated + 184);
          if ( !v573 )
            goto LABEL_1104;
          if ( *(_DWORD *)(v316 + 24) <= 1u )
            goto LABEL_1105;
          v574 = *(ScrTerminalMap_o **)(v573 + 264);
          v575 = System_Single__Parse(*(System_String_o **)(v316 + 40), 0);
          if ( *(_DWORD *)(v316 + 24) <= 2u )
            goto LABEL_1105;
          v576 = v575;
          v577 = System_Single__Parse(*(System_String_o **)(v316 + 48), 0);
          if ( !v574 )
            goto LABEL_1104;
          v628 = ScrTerminalMap__LocalPosFromCoord(v574, v576, v577, 0.0, 0.0, 0);
          if ( *(_DWORD *)(v316 + 24) <= 4u )
            goto LABEL_1105;
          x = v628.fields.x;
          y = v628.fields.y;
          z = v628.fields.z;
          v581 = v319 * 0.001;
          updated = System_Int32__Parse(*(System_String_o **)(v316 + 64), 0);
          v583 = updated;
          if ( v321 )
          {
            if ( !v320 )
              goto LABEL_1104;
            v629.fields.x = x;
            v629.fields.y = y;
            v629.fields.z = z;
            MapGimmickComponent__SetMoveAnim((MapGimmickComponent_o *)v320, v629, v581, updated, 0, v582);
            goto LABEL_999;
          }
          v584 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
          System_Action___ctor(v584, (Il2CppObject *)this, (intptr_t)this->klass->vtable._14_EndAnim.method, 0);
          if ( !v320 )
            goto LABEL_1104;
          v551 = (MapGimmickComponent_o *)v320;
          v552 = x;
          v553 = y;
          v554 = z;
          v555 = v581;
          v556 = v583;
          v557 = v584;
LABEL_1080:
          MapGimmickComponent__SetMoveAnim(v551, *(UnityEngine_Vector3_o *)&v552, v555, v556, v557, v550);
          return;
        case 405:
          v322 = sub_1C2D6DC(QuestAfterAction_StateMain___c__DisplayClass16_12_TypeInfo);
          QuestAfterAction_StateMain___c__DisplayClass16_12___ctor(
            (QuestAfterAction_StateMain___c__DisplayClass16_12_o *)v322,
            0);
          if ( !v322 )
            goto LABEL_1104;
          *(_QWORD *)(v322 + 24) = v5;
          sub_1C2D434((CGThumbnailListItem_o *)(v322 + 24), v5, v323, v324);
          v325 = *(_QWORD *)(v322 + 24);
          if ( !v325 )
            goto LABEL_1104;
          v326 = *(QuestAfterAction_o **)(v325 + 24);
          updated = System_Int32__Parse(v16->fields.param, 0);
          if ( !v326 )
            goto LABEL_1104;
          v327 = QuestAfterAction__GetMapComponent_object_(
                   v326,
                   2,
                   updated,
                   this,
                   (const MethodInfo_316755C *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
          *(_QWORD *)(v322 + 16) = v327;
          sub_1C2D434((CGThumbnailListItem_o *)(v322 + 16), (int32_t)v327, v328, v329);
          v330 = *(UnityEngine_Object_o **)(v322 + 16);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Equality(v330, 0, 0) )
            return;
          v331 = *(MapGimmickComponent_o **)(v322 + 16);
          v332 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
          System_Action___ctor(
            v332,
            (Il2CppObject *)v322,
            Method_QuestAfterAction_StateMain___c__DisplayClass16_12__UpdateAnim_b__17__,
            0);
          if ( !v331 )
            goto LABEL_1104;
          MapGimmickComponent__SetState(v331, 3, v332, v333);
          if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          if ( !byte_4C21383 )
          {
            sub_1C2D490(&TerminalSceneComponent_TypeInfo);
            byte_4C21383 = 1;
          }
          updated = (__int64)TerminalSceneComponent_TypeInfo;
          if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            updated = (__int64)TerminalSceneComponent_TypeInfo;
          }
          v334 = **(TerminalSceneComponent_o ***)(updated + 184);
          if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
          if ( !v334 )
            goto LABEL_1104;
          v124 = v334;
          v126 = 0;
          v125 = AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME;
          goto LABEL_202;
        case 406:
          v335 = sub_1C2D6DC(QuestAfterAction_StateMain___c__DisplayClass16_13_TypeInfo);
          QuestAfterAction_StateMain___c__DisplayClass16_13___ctor(
            (QuestAfterAction_StateMain___c__DisplayClass16_13_o *)v335,
            0);
          if ( !v335 )
            goto LABEL_1104;
          *(_QWORD *)(v335 + 32) = v5;
          sub_1C2D434((CGThumbnailListItem_o *)(v335 + 32), v5, v336, v337);
          updated = (__int64)v16->fields.param;
          if ( !updated )
            goto LABEL_1104;
          v338 = System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0);
          *(_QWORD *)(v335 + 24) = v338;
          v339 = (__int64 *)(v335 + 24);
          sub_1C2D434((CGThumbnailListItem_o *)(v335 + 24), (int32_t)v338, v340, v341);
          v342 = *(_QWORD *)(v335 + 32);
          if ( !v342 )
            goto LABEL_1104;
          v343 = *v339;
          if ( !*v339 )
            goto LABEL_1104;
          if ( !*(_DWORD *)(v343 + 24) )
            goto LABEL_1105;
          v344 = *(QuestAfterAction_o **)(v342 + 24);
          updated = System_Int32__Parse(*(System_String_o **)(v343 + 32), 0);
          if ( !v344 )
            goto LABEL_1104;
          v345 = QuestAfterAction__GetMapComponent_object_(
                   v344,
                   2,
                   updated,
                   this,
                   (const MethodInfo_316755C *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
          *(_QWORD *)(v335 + 16) = v345;
          sub_1C2D434((CGThumbnailListItem_o *)(v335 + 16), (int32_t)v345, v346, v347);
          v348 = *(UnityEngine_Object_o **)(v335 + 16);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Equality(v348, 0, 0) )
            return;
          v349 = *(MapGimmickComponent_o **)(v335 + 16);
          v350 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
          v351 = &Method_QuestAfterAction_StateMain___c__DisplayClass16_13__UpdateAnim_b__18__;
          v352 = v350;
          goto LABEL_627;
        case 407:
          updated = (__int64)v16->fields.param;
          if ( !updated )
            goto LABEL_1104;
          updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0);
          if ( !updated )
            goto LABEL_1104;
          v353 = updated;
          if ( !*(_DWORD *)(updated + 24) )
            goto LABEL_1105;
          v354 = *v10;
          updated = System_Int32__Parse(*(System_String_o **)(updated + 32), 0);
          if ( !v354 )
            goto LABEL_1104;
          v355 = QuestAfterAction__GetMapComponent_object_(
                   v354,
                   2,
                   updated,
                   this,
                   (const MethodInfo_316755C *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          updated = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v355, 0, 0);
          if ( (updated & 1) != 0 )
            return;
          if ( !v355 )
            goto LABEL_1104;
          updated = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v355, 0);
          if ( !updated )
            goto LABEL_1104;
          updated = (__int64)UnityEngine_GameObject__GetComponentInChildren_object_(
                               (UnityEngine_GameObject_o *)updated,
                               (const MethodInfo_3126134 *)Method_UnityEngine_GameObject_GetComponentInChildren_UISprite___);
          if ( *(_DWORD *)(v353 + 24) <= 1u )
            goto LABEL_1105;
          v356 = (UIWidget_o *)updated;
          updated = UnityEngine_ColorUtility__TryParseHtmlString(*(System_String_o **)(v353 + 40), &color, 0);
          if ( !v356 )
            goto LABEL_1104;
          UIWidget__set_color(v356, color, 0);
          goto LABEL_999;
        case 408:
          v335 = sub_1C2D6DC(QuestAfterAction_StateMain___c__DisplayClass16_15_TypeInfo);
          QuestAfterAction_StateMain___c__DisplayClass16_15___ctor(
            (QuestAfterAction_StateMain___c__DisplayClass16_15_o *)v335,
            0);
          if ( !v335 )
            goto LABEL_1104;
          *(_QWORD *)(v335 + 24) = v5;
          sub_1C2D434((CGThumbnailListItem_o *)(v335 + 24), v5, v357, v358);
          v359 = *(_QWORD *)(v335 + 24);
          if ( !v359 )
            goto LABEL_1104;
          v360 = *(QuestAfterAction_o **)(v359 + 24);
          updated = System_Int32__Parse(v16->fields.param, 0);
          if ( !v360 )
            goto LABEL_1104;
          v361 = QuestAfterAction__GetMapComponent_object_(
                   v360,
                   2,
                   updated,
                   this,
                   (const MethodInfo_316755C *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
          *(_QWORD *)(v335 + 16) = v361;
          v362 = v335 + 16;
          sub_1C2D434((CGThumbnailListItem_o *)(v335 + 16), (int32_t)v361, v363, v364);
          v365 = *(UnityEngine_Object_o **)(v335 + 16);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Equality(v365, 0, 0) )
            return;
          updated = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_QuestTree__get_Instance__);
          if ( !*(_QWORD *)v362 || !updated )
            goto LABEL_1104;
          v366 = QuestTree__CheckMapGimmickCond_36417004(
                   (QuestTree_o *)updated,
                   *(MapControl_MapGimmickInfo_o **)(*(_QWORD *)v362 + 112LL),
                   0);
          v349 = *(MapGimmickComponent_o **)v362;
          v367 = v366;
          v350 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
          v352 = v350;
          if ( v367 )
          {
            v351 = &Method_QuestAfterAction_StateMain___c__DisplayClass16_15__UpdateAnim_b__20__;
LABEL_627:
            System_Action___ctor(v350, (Il2CppObject *)v335, *v351, 0);
            if ( !v349 )
              goto LABEL_1104;
            v369 = 3;
          }
          else
          {
            System_Action___ctor(
              v350,
              (Il2CppObject *)v335,
              Method_QuestAfterAction_StateMain___c__DisplayClass16_15__UpdateAnim_b__21__,
              0);
            if ( !v349 )
              goto LABEL_1104;
            v369 = 2;
          }
          v492 = v349;
          goto LABEL_1014;
        case 409:
          updated = (__int64)v16->fields.param;
          if ( !updated )
            goto LABEL_1104;
          updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0);
          if ( !updated )
            goto LABEL_1104;
          v370 = *(_QWORD *)(updated + 24);
          v371 = updated;
          if ( v370 )
          {
            if ( !(_DWORD)v370 )
              goto LABEL_1105;
            v372 = System_Int32__Parse(*(System_String_o **)(updated + 32), 0);
            if ( *(int *)(v371 + 24) >= 2 )
            {
              v373 = System_Int32__Parse(*(System_String_o **)(v371 + 40), 0) > 0;
              goto LABEL_897;
            }
          }
          else
          {
            v372 = 0;
          }
          v373 = 0;
LABEL_897:
          updated = (__int64)*v10;
          if ( !*v10 )
            goto LABEL_1104;
          v479 = QuestAfterAction__GetMapComponent_object_(
                   (QuestAfterAction_o *)updated,
                   2,
                   v372,
                   this,
                   (const MethodInfo_316755C *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          updated = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v479, 0, 0);
          if ( (updated & 1) == 0 )
          {
            if ( !v479 )
              goto LABEL_1104;
            LOBYTE(v479[6].monitor) = v373;
            BYTE1(v479[6].monitor) = 0;
            AnimTime = MapGimmickComponent__GetAnimTime((MapGimmickComponent_o *)v479, v7);
            MapGimmickComponent__SetDispAnim_35985868((MapGimmickComponent_o *)v479, 1, AnimTime, 1, v481);
            v482 = v479[7].klass;
            if ( !v482 )
              goto LABEL_1104;
            LODWORD(v482->_1.name) = 1;
            v483 = this->klass;
            this->fields.IsAnimDoing = 0;
            v484 = ((__int64 (__fastcall *)(QuestAfterAction_StateMain_o *, const MethodInfo *))v483->vtable._11_get_CommandIndex.methodPtr)(
                     this,
                     v483->vtable._11_get_CommandIndex.method);
            ((void (__fastcall *)(QuestAfterAction_StateMain_o *, _QWORD, const MethodInfo *))this->klass->vtable._12_set_CommandIndex.methodPtr)(
              this,
              (unsigned int)(v484 + 1),
              this->klass->vtable._12_set_CommandIndex.method);
            goto LABEL_19;
          }
          return;
        case 410:
          updated = (__int64)v16->fields.param;
          if ( !updated )
            goto LABEL_1104;
          updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0);
          if ( !updated )
            goto LABEL_1104;
          v374 = updated;
          if ( *(int *)(updated + 24) <= 2 )
            goto LABEL_999;
          v375 = *v10;
          updated = System_Int32__Parse(*(System_String_o **)(updated + 32), 0);
          if ( !v375 )
            goto LABEL_1104;
          v376 = QuestAfterAction__GetMapComponent_object_(
                   v375,
                   2,
                   updated,
                   this,
                   (const MethodInfo_316755C *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          updated = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v376, 0, 0);
          if ( (updated & 1) != 0 )
            return;
          if ( *(_DWORD *)(v374 + 24) <= 1u )
            goto LABEL_1105;
          v377 = *v10;
          updated = System_Int32__Parse(*(System_String_o **)(v374 + 40), 0);
          if ( !v377 )
            goto LABEL_1104;
          v379 = updated;
          v380 = v377;
          v381 = 0;
          goto LABEL_669;
        case 411:
          updated = (__int64)v16->fields.param;
          if ( !updated )
            goto LABEL_1104;
          updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0);
          if ( !updated )
            goto LABEL_1104;
          v374 = updated;
          if ( *(int *)(updated + 24) <= 2 )
            goto LABEL_999;
          v382 = *v10;
          updated = System_Int32__Parse(*(System_String_o **)(updated + 32), 0);
          if ( !v382 )
            goto LABEL_1104;
          v376 = QuestAfterAction__GetMapComponent_object_(
                   v382,
                   2,
                   updated,
                   this,
                   (const MethodInfo_316755C *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          updated = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v376, 0, 0);
          if ( (updated & 1) != 0 )
            return;
          if ( *(_DWORD *)(v374 + 24) <= 1u )
            goto LABEL_1105;
          v383 = *v10;
          updated = System_Int32__Parse(*(System_String_o **)(v374 + 40), 0);
          if ( !v383 )
            goto LABEL_1104;
          MapGameObject = (UnityEngine_Object_o *)QuestAfterAction__GetMapGameObject(v383, 2, updated, this, v384);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Equality(MapGameObject, 0, 0) )
            return;
          LocalPosition = GameObjectExtensions__GetLocalPosition((UnityEngine_GameObject_o *)MapGameObject, 0);
          if ( *(_DWORD *)(v374 + 24) <= 2u )
            goto LABEL_1105;
          v386 = LocalPosition.fields.x;
          v387 = LocalPosition.fields.y;
          v388 = LocalPosition.fields.z;
          goto LABEL_683;
        case 412:
          updated = (__int64)v16->fields.param;
          if ( !updated )
            goto LABEL_1104;
          updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0);
          if ( !updated )
            goto LABEL_1104;
          v374 = updated;
          if ( *(int *)(updated + 24) <= 2 )
            goto LABEL_999;
          v389 = *v10;
          updated = System_Int32__Parse(*(System_String_o **)(updated + 32), 0);
          if ( !v389 )
            goto LABEL_1104;
          v376 = QuestAfterAction__GetMapComponent_object_(
                   v389,
                   2,
                   updated,
                   this,
                   (const MethodInfo_316755C *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          updated = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v376, 0, 0);
          if ( (updated & 1) != 0 )
            return;
          if ( *(_DWORD *)(v374 + 24) <= 1u )
            goto LABEL_1105;
          v390 = *v10;
          updated = System_Int32__Parse(*(System_String_o **)(v374 + 40), 0);
          if ( !v390 )
            goto LABEL_1104;
          v379 = updated;
          v381 = 1;
          v380 = v390;
LABEL_669:
          v391 = (UnityEngine_Object_o *)QuestAfterAction__GetMapGameObject(v380, v381, v379, this, v378);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Equality(v391, 0, 0) )
            return;
          v615 = GameObjectExtensions__GetLocalPosition((UnityEngine_GameObject_o *)v391, 0);
          v386 = v615.fields.x;
          v387 = v615.fields.y;
          v388 = v615.fields.z;
          if ( !this->fields.IsMapModel )
            goto LABEL_682;
          if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          if ( !byte_4C21383 )
          {
            sub_1C2D490(&TerminalSceneComponent_TypeInfo);
            byte_4C21383 = 1;
          }
          updated = (__int64)TerminalSceneComponent_TypeInfo;
          if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            updated = (__int64)TerminalSceneComponent_TypeInfo;
          }
          v392 = **(_QWORD **)(updated + 184);
          if ( !v392 )
            goto LABEL_1104;
          updated = *(_QWORD *)(v392 + 264);
          if ( !updated )
            goto LABEL_1104;
          v616.fields.x = v386;
          v616.fields.y = v387;
          v616.fields.z = v388;
          v617 = ScrTerminalMap__ConvertLocalToScreenPosition((ScrTerminalMap_o *)updated, v616, 0);
          v386 = v617.fields.x;
          v387 = v617.fields.y;
          v388 = v617.fields.z;
LABEL_682:
          if ( *(_DWORD *)(v374 + 24) <= 2u )
            goto LABEL_1105;
LABEL_683:
          v393 = System_Single__Parse(*(System_String_o **)(v374 + 48), 0) * 0.001;
          if ( v393 >= 0.0 )
            v394 = v393;
          else
            v394 = 0.5;
          if ( *(_DWORD *)(v374 + 24) <= 3u )
            goto LABEL_1105;
          v395 = System_Int32__Parse(*(System_String_o **)(v374 + 56), 0);
          if ( *(int *)(v374 + 24) >= 5 )
          {
            updated = System_Int32__Parse(*(System_String_o **)(v374 + 64), 0);
            if ( (int)updated >= 1 )
            {
              if ( !v376 )
                goto LABEL_1104;
              v618.fields.x = v386;
              v618.fields.y = v387;
              v618.fields.z = v388;
              MapGimmickComponent__SetMoveAnim((MapGimmickComponent_o *)v376, v618, v394, v395, 0, v396);
              goto LABEL_18;
            }
          }
          v549 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
          System_Action___ctor(v549, (Il2CppObject *)this, (intptr_t)this->klass->vtable._14_EndAnim.method, 0);
          if ( !v376 )
            goto LABEL_1104;
          v551 = (MapGimmickComponent_o *)v376;
          v552 = v386;
          v553 = v387;
          v554 = v388;
          v555 = v394;
          v556 = v395;
          v557 = v549;
          goto LABEL_1080;
        default:
          if ( id == 500 )
          {
            v397 = System_Int32__Parse(v16->fields.param, 0);
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            if ( !byte_4C23E9C )
            {
              sub_1C2D490(&TerminalPramsManager_TypeInfo);
              byte_4C23E9C = 1;
            }
            v398 = TerminalPramsManager_TypeInfo;
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
              v398 = TerminalPramsManager_TypeInfo;
            }
            v398->static_fields->_AfterActionFocusQuestId_k__BackingField = v397;
            if ( !DataManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
            updated = (__int64)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_QuestMaster___);
            if ( !updated )
              goto LABEL_1104;
            if ( DataMasterBase_object__object__int___TryGetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)updated,
                   &entity,
                   v397,
                   (const MethodInfo_3387DE4 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__) )
            {
              updated = (__int64)entity;
              if ( !entity )
                goto LABEL_1104;
              v399 = *v10;
              updated = QuestEntity__getSpotId((QuestEntity_o *)entity, 0);
              if ( !v399 )
                goto LABEL_1104;
              v400 = QuestAfterAction__GetMapComponent_object_(
                       v399,
                       0,
                       updated,
                       this,
                       (const MethodInfo_316755C *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              updated = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v400, 0, 0);
              if ( (updated & 1) != 0 )
              {
                if ( !v400 )
                  goto LABEL_1104;
                SrcSpotBasePrefab__SelectSpot((SrcSpotBasePrefab_o *)v400, 0, 0);
                if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                if ( !byte_4C23E9D )
                {
                  sub_1C2D490(&TerminalPramsManager_TypeInfo);
                  byte_4C23E9D = 1;
                }
                v401 = TerminalPramsManager_TypeInfo;
                if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                  v401 = TerminalPramsManager_TypeInfo;
                }
                v401->static_fields->_IsBackQuestBoardDisable_k__BackingField = 1;
              }
            }
          }
          else
          {
            if ( id != 501 )
              return;
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            if ( !byte_4C21383 )
            {
              sub_1C2D490(&TerminalSceneComponent_TypeInfo);
              byte_4C21383 = 1;
            }
            updated = (__int64)TerminalSceneComponent_TypeInfo;
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
              updated = (__int64)TerminalSceneComponent_TypeInfo;
            }
            v134 = **(_QWORD **)(updated + 184);
            if ( !v134 )
              goto LABEL_1104;
            updated = *(_QWORD *)(v134 + 256);
            if ( !updated )
              goto LABEL_1104;
            updated = (__int64)ScrTerminalListTop__mfGetMyFsmP((ScrTerminalListTop_o *)updated, 0);
            if ( !updated )
              goto LABEL_1104;
            v135 = (PlayMakerFSM_o *)updated;
            ActiveStateName = PlayMakerFSM__get_ActiveStateName((PlayMakerFSM_o *)updated, 0);
            if ( System_String__op_Equality(ActiveStateName, (System_String_o *)StringLiteral_3290/*"CAPTER WAIT"*/, 0) )
            {
              if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
              if ( !byte_4C21383 )
              {
                sub_1C2D490(&TerminalSceneComponent_TypeInfo);
                byte_4C21383 = 1;
              }
              updated = (__int64)TerminalSceneComponent_TypeInfo;
              if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
                updated = (__int64)TerminalSceneComponent_TypeInfo;
              }
              v137 = **(_QWORD **)(updated + 184);
              if ( !v137 )
                goto LABEL_1104;
              v138 = *(_QWORD *)(v137 + 256);
              if ( !v138 )
                goto LABEL_1104;
              v139 = *(QuestBoardListViewManager_o **)(v138 + 320);
              updated = (__int64)QuestAfterAction_StateMain___c_TypeInfo;
              if ( !QuestAfterAction_StateMain___c_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(QuestAfterAction_StateMain___c_TypeInfo);
                updated = (__int64)QuestAfterAction_StateMain___c_TypeInfo;
              }
              v140 = *(System_Action_o **)(*(_QWORD *)(updated + 184) + 8LL);
              if ( !v140 )
              {
                if ( !*(_DWORD *)(updated + 224) )
                {
                  j_il2cpp_runtime_class_init_0(updated);
                  updated = (__int64)QuestAfterAction_StateMain___c_TypeInfo;
                }
                v141 = **(Il2CppObject ***)(updated + 184);
                v140 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
                System_Action___ctor(v140, v141, Method_QuestAfterAction_StateMain___c__UpdateAnim_b__16_22__, 0);
                static_fields = QuestAfterAction_StateMain___c_TypeInfo->static_fields;
                static_fields->__9__16_22 = v140;
                sub_1C2D434((CGThumbnailListItem_o *)&static_fields->__9__16_22, (int32_t)v140, v143, v144);
              }
              if ( !v139 )
                goto LABEL_1104;
              QuestBoardListViewManager__SetMode(v139, 4, v140, 0, 0, 0, 0);
              if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
              if ( !byte_4C21383 )
              {
                sub_1C2D490(&TerminalSceneComponent_TypeInfo);
                byte_4C21383 = 1;
              }
              v145 = TerminalSceneComponent_TypeInfo;
              if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
                v145 = TerminalSceneComponent_TypeInfo;
              }
              updated = (__int64)v145->static_fields->mInstance;
              if ( !updated )
                goto LABEL_1104;
              TerminalSceneComponent__CallQuestInformationClose((TerminalSceneComponent_o *)updated, 0);
              PlayMakerFSM__SendEvent(v135, (System_String_o *)StringLiteral_19850/*"gevINFOBAR_BACK"*/, 0);
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
          v67 = sub_1C2D6DC(QuestAfterAction_StateMain___c__DisplayClass16_1_TypeInfo);
          QuestAfterAction_StateMain___c__DisplayClass16_1___ctor(
            (QuestAfterAction_StateMain___c__DisplayClass16_1_o *)v67,
            0);
          if ( !v67 )
            goto LABEL_1104;
          *(_QWORD *)(v67 + 24) = v5;
          sub_1C2D434((CGThumbnailListItem_o *)(v67 + 24), v5, v68, v69);
          v70 = *(_QWORD *)(v67 + 24);
          if ( !v70 )
            goto LABEL_1104;
          v71 = *(QuestAfterAction_o **)(v70 + 24);
          updated = System_Int32__Parse(v16->fields.param, 0);
          if ( !v71 )
            goto LABEL_1104;
          v72 = QuestAfterAction__GetMapComponent_object_(
                  v71,
                  0,
                  updated,
                  this,
                  (const MethodInfo_316755C *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
          *(_QWORD *)(v67 + 16) = v72;
          sub_1C2D434((CGThumbnailListItem_o *)(v67 + 16), (int32_t)v72, v73, v74);
          v75 = *(UnityEngine_Object_o **)(v67 + 16);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Equality(v75, 0, 0) )
            return;
          v76 = *(SrcSpotBasePrefab_o **)(v67 + 16);
          v77 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
          System_Action___ctor(
            v77,
            (Il2CppObject *)v67,
            Method_QuestAfterAction_StateMain___c__DisplayClass16_1__UpdateAnim_b__0__,
            0);
          if ( !v76 )
            goto LABEL_1104;
          v78 = 2;
          goto LABEL_492;
        case 'e':
          v257 = sub_1C2D6DC(QuestAfterAction_StateMain___c__DisplayClass16_2_TypeInfo);
          QuestAfterAction_StateMain___c__DisplayClass16_2___ctor(
            (QuestAfterAction_StateMain___c__DisplayClass16_2_o *)v257,
            0);
          if ( !v257 )
            goto LABEL_1104;
          *(_QWORD *)(v257 + 24) = v5;
          sub_1C2D434((CGThumbnailListItem_o *)(v257 + 24), v5, v258, v259);
          v260 = *(_QWORD *)(v257 + 24);
          if ( !v260 )
            goto LABEL_1104;
          v261 = *(QuestAfterAction_o **)(v260 + 24);
          updated = System_Int32__Parse(v16->fields.param, 0);
          if ( !v261 )
            goto LABEL_1104;
          v262 = QuestAfterAction__GetMapComponent_object_(
                   v261,
                   0,
                   updated,
                   this,
                   (const MethodInfo_316755C *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
          *(_QWORD *)(v257 + 16) = v262;
          sub_1C2D434((CGThumbnailListItem_o *)(v257 + 16), (int32_t)v262, v263, v264);
          v265 = *(UnityEngine_Object_o **)(v257 + 16);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Equality(v265, 0, 0) )
            return;
          v76 = *(SrcSpotBasePrefab_o **)(v257 + 16);
          v77 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
          System_Action___ctor(
            v77,
            (Il2CppObject *)v257,
            Method_QuestAfterAction_StateMain___c__DisplayClass16_2__UpdateAnim_b__1__,
            0);
          if ( !v76 )
            goto LABEL_1104;
          v78 = 3;
LABEL_492:
          SrcSpotBasePrefab__SetState(v76, v78, v77, 0);
          return;
        case 'f':
          v266 = sub_1C2D6DC(QuestAfterAction_StateMain___c__DisplayClass16_3_TypeInfo);
          QuestAfterAction_StateMain___c__DisplayClass16_3___ctor(
            (QuestAfterAction_StateMain___c__DisplayClass16_3_o *)v266,
            0);
          if ( !v266 )
            goto LABEL_1104;
          *(_QWORD *)(v266 + 24) = v5;
          v269 = v266 + 24;
          sub_1C2D434((CGThumbnailListItem_o *)(v266 + 24), v5, v267, v268);
          if ( !*(_QWORD *)(v266 + 24) )
            goto LABEL_1104;
          v270 = *(QuestAfterAction_o **)(*(_QWORD *)(v266 + 24) + 24LL);
          updated = System_Int32__Parse(v16->fields.param, 0);
          if ( !v270 )
            goto LABEL_1104;
          v271 = QuestAfterAction__GetMapComponent_object_(
                   v270,
                   0,
                   updated,
                   this,
                   (const MethodInfo_316755C *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
          *(_QWORD *)(v266 + 16) = v271;
          v272 = (__int64 *)(v266 + 16);
          sub_1C2D434((CGThumbnailListItem_o *)(v266 + 16), (int32_t)v271, v273, v274);
          v275 = *(UnityEngine_Object_o **)(v266 + 16);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Equality(v275, 0, 0) )
            return;
          v276 = *(SrcSpotBasePrefab_o **)(v266 + 16);
          v277 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
          System_Action___ctor(
            v277,
            (Il2CppObject *)v266,
            Method_QuestAfterAction_StateMain___c__DisplayClass16_3__UpdateAnim_b__2__,
            0);
          if ( !v276 )
            goto LABEL_1104;
          SrcSpotBasePrefab__SetState(v276, 4, v277, 0);
          if ( !*(_QWORD *)v269 )
            goto LABEL_1104;
          updated = *(_QWORD *)(*(_QWORD *)v269 + 24LL);
          if ( !updated )
            goto LABEL_1104;
          v280 = *v272;
          *(_QWORD *)(updated + 184) = *v272;
          v281 = (CGThumbnailListItem_o *)(updated + 184);
          goto LABEL_514;
        case 'g':
          updated = (__int64)v16->fields.param;
          if ( !updated )
            goto LABEL_1104;
          updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0);
          if ( !updated )
            goto LABEL_1104;
          v282 = updated;
          if ( *(int *)(updated + 24) <= 1 )
            goto LABEL_999;
          v283 = *v10;
          updated = System_Int32__Parse(*(System_String_o **)(updated + 32), 0);
          if ( !v283 )
            goto LABEL_1104;
          v284 = QuestAfterAction__GetMapComponent_object_(
                   v283,
                   0,
                   updated,
                   this,
                   (const MethodInfo_316755C *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          updated = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v284, 0, 0);
          if ( (updated & 1) != 0 )
            return;
          if ( *(_DWORD *)(v282 + 24) <= 1u )
            goto LABEL_1105;
          updated = System_Int32__Parse(*(System_String_o **)(v282 + 40), 0);
          if ( !v284 )
            goto LABEL_1104;
          LODWORD(v284[14].klass) = updated;
          v285 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
          System_Action___ctor(v285, (Il2CppObject *)this, (intptr_t)this->klass->vtable._14_EndAnim.method, 0);
          SrcSpotBasePrefab__SetState((SrcSpotBasePrefab_o *)v284, 5, v285, 0);
          updated = (__int64)*v10;
          if ( !*v10 )
            goto LABEL_1104;
          *(_QWORD *)(updated + 184) = v284;
          v281 = (CGThumbnailListItem_o *)(updated + 184);
          LODWORD(v280) = (_DWORD)v284;
LABEL_514:
          sub_1C2D434(v281, v280, v278, v279);
          return;
        case 'h':
        case 'i':
        case 'j':
        case 'k':
        case 'l':
        case 'm':
          return;
        case 'n':
          v286 = *v10;
          updated = System_Int32__Parse(v16->fields.param, 0);
          if ( !v286 )
            goto LABEL_1104;
          v287 = (UnityEngine_Object_o *)QuestAfterAction__GetMapComponent_object_(
                                           v286,
                                           0,
                                           updated,
                                           this,
                                           (const MethodInfo_316755C *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          updated = UnityEngine_Object__op_Equality(v287, 0, 0);
          if ( (updated & 1) != 0 )
            return;
          if ( !v287 )
            goto LABEL_1104;
          SrcSpotBasePrefab__SetQaaScaleAnimQuick((SrcSpotBasePrefab_o *)v287, 0, 0);
          m_CachedPtr = v287[9].fields.m_CachedPtr;
          if ( !m_CachedPtr )
            goto LABEL_1104;
          *(_DWORD *)(m_CachedPtr + 20) = 0;
          v289 = (SrcSpotBasePrefab_o *)v287;
          v290 = 0;
          goto LABEL_537;
        case 'o':
          v291 = *v10;
          updated = System_Int32__Parse(v16->fields.param, 0);
          if ( !v291 )
            goto LABEL_1104;
          v292 = (UnityEngine_Object_o *)QuestAfterAction__GetMapComponent_object_(
                                           v291,
                                           0,
                                           updated,
                                           this,
                                           (const MethodInfo_316755C *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          updated = UnityEngine_Object__op_Equality(v292, 0, 0);
          if ( (updated & 1) != 0 )
            return;
          if ( !v292 )
            goto LABEL_1104;
          SrcSpotBasePrefab__SetQaaScaleAnimQuick((SrcSpotBasePrefab_o *)v292, 1, 0);
          SrcSpotBasePrefab__SetQaaColorAnimQuick((SrcSpotBasePrefab_o *)v292, 0, 0);
          v293 = v292[9].fields.m_CachedPtr;
          if ( !v293 )
            goto LABEL_1104;
          *(_DWORD *)(v293 + 20) = 2;
          goto LABEL_536;
        case 'p':
          v294 = *v10;
          updated = System_Int32__Parse(v16->fields.param, 0);
          if ( !v294 )
            goto LABEL_1104;
          v292 = (UnityEngine_Object_o *)QuestAfterAction__GetMapComponent_object_(
                                           v294,
                                           0,
                                           updated,
                                           this,
                                           (const MethodInfo_316755C *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          updated = UnityEngine_Object__op_Equality(v292, 0, 0);
          if ( (updated & 1) != 0 )
            return;
          if ( !v292 )
            goto LABEL_1104;
          SrcSpotBasePrefab__SetQaaScaleAnimQuick((SrcSpotBasePrefab_o *)v292, 1, 0);
          SrcSpotBasePrefab__SetQaaColorAnimQuick((SrcSpotBasePrefab_o *)v292, 1, 0);
          v295 = v292[9].fields.m_CachedPtr;
          if ( !v295 )
            goto LABEL_1104;
          *(_DWORD *)(v295 + 20) = 1;
LABEL_536:
          v290 = 1;
          v289 = (SrcSpotBasePrefab_o *)v292;
LABEL_537:
          SrcSpotBasePrefab__SetTouchType(v289, v290, 0);
          goto LABEL_18;
        case 'q':
          updated = (__int64)v16->fields.param;
          if ( !updated )
            goto LABEL_1104;
          updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0);
          if ( !updated )
            goto LABEL_1104;
          v296 = updated;
          if ( *(int *)(updated + 24) <= 1 )
            goto LABEL_999;
          v297 = *v10;
          updated = System_Int32__Parse(*(System_String_o **)(updated + 32), 0);
          if ( !v297 )
            goto LABEL_1104;
          v298 = QuestAfterAction__GetMapComponent_object_(
                   v297,
                   0,
                   updated,
                   this,
                   (const MethodInfo_316755C *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          updated = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v298, 0, 0);
          if ( (updated & 1) != 0 )
            return;
          if ( *(_DWORD *)(v296 + 24) <= 1u )
            goto LABEL_1105;
          updated = System_Int32__Parse(*(System_String_o **)(v296 + 40), 0);
          if ( !v298 )
            goto LABEL_1104;
          LODWORD(v298[14].klass) = updated;
          SrcSpotBasePrefab__UpdateDisp((SrcSpotBasePrefab_o *)v298, 1, 0);
          goto LABEL_18;
        default:
          switch ( id )
          {
            case 200:
              if ( this->fields.IsMapModel )
              {
                v79 = sub_1C2D6DC(QuestAfterAction_StateMain___c__DisplayClass16_4_TypeInfo);
                QuestAfterAction_StateMain___c__DisplayClass16_4___ctor(
                  (QuestAfterAction_StateMain___c__DisplayClass16_4_o *)v79,
                  0);
                if ( !v79 )
                  goto LABEL_1104;
                *(_QWORD *)(v79 + 24) = v5;
                sub_1C2D434((CGThumbnailListItem_o *)(v79 + 24), v5, v80, v81);
                v82 = *(_QWORD *)(v79 + 24);
                if ( !v82 )
                  goto LABEL_1104;
                v83 = *(QuestAfterAction_o **)(v82 + 24);
                updated = System_Int32__Parse(v16->fields.param, 0);
                if ( !v83 )
                  goto LABEL_1104;
                v84 = QuestAfterAction__GetMapComponent_object_(
                        v83,
                        1,
                        updated,
                        this,
                        (const MethodInfo_316755C *)Method_QuestAfterAction_GetMapComponent_ModelLineComponent___);
                *(_QWORD *)(v79 + 16) = v84;
                sub_1C2D434((CGThumbnailListItem_o *)(v79 + 16), (int32_t)v84, v85, v86);
                v87 = *(UnityEngine_Object_o **)(v79 + 16);
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                if ( !UnityEngine_Object__op_Equality(v87, 0, 0) )
                {
                  v88 = *(ModelLineComponent_o **)(v79 + 16);
                  v89 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
                  System_Action___ctor(
                    v89,
                    (Il2CppObject *)v79,
                    Method_QuestAfterAction_StateMain___c__DisplayClass16_4__UpdateAnim_b__3__,
                    0);
                  if ( !v88 )
                    goto LABEL_1104;
                  v91 = 2;
                  goto LABEL_752;
                }
              }
              else
              {
                v503 = sub_1C2D6DC(QuestAfterAction_StateMain___c__DisplayClass16_5_TypeInfo);
                QuestAfterAction_StateMain___c__DisplayClass16_5___ctor(
                  (QuestAfterAction_StateMain___c__DisplayClass16_5_o *)v503,
                  0);
                if ( !v503 )
                  goto LABEL_1104;
                *(_QWORD *)(v503 + 24) = v5;
                sub_1C2D434((CGThumbnailListItem_o *)(v503 + 24), v5, v504, v505);
                v506 = *(_QWORD *)(v503 + 24);
                if ( !v506 )
                  goto LABEL_1104;
                v507 = *(QuestAfterAction_o **)(v506 + 24);
                updated = System_Int32__Parse(v16->fields.param, 0);
                if ( !v507 )
                  goto LABEL_1104;
                v508 = QuestAfterAction__GetMapComponent_object_(
                         v507,
                         1,
                         updated,
                         this,
                         (const MethodInfo_316755C *)Method_QuestAfterAction_GetMapComponent_srcLineSprite___);
                *(_QWORD *)(v503 + 16) = v508;
                sub_1C2D434((CGThumbnailListItem_o *)(v503 + 16), (int32_t)v508, v509, v510);
                v511 = *(UnityEngine_Object_o **)(v503 + 16);
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                if ( !UnityEngine_Object__op_Equality(v511, 0, 0) )
                {
                  v512 = *(srcLineSprite_o **)(v503 + 16);
                  v513 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
                  System_Action___ctor(
                    v513,
                    (Il2CppObject *)v503,
                    Method_QuestAfterAction_StateMain___c__DisplayClass16_5__UpdateAnim_b__4__,
                    0);
                  if ( !v512 )
                    goto LABEL_1104;
                  v514 = 2;
                  goto LABEL_955;
                }
              }
              return;
            case 201:
              if ( this->fields.IsMapModel )
              {
                v404 = sub_1C2D6DC(QuestAfterAction_StateMain___c__DisplayClass16_6_TypeInfo);
                QuestAfterAction_StateMain___c__DisplayClass16_6___ctor(
                  (QuestAfterAction_StateMain___c__DisplayClass16_6_o *)v404,
                  0);
                if ( !v404 )
                  goto LABEL_1104;
                *(_QWORD *)(v404 + 24) = v5;
                sub_1C2D434((CGThumbnailListItem_o *)(v404 + 24), v5, v405, v406);
                v407 = *(_QWORD *)(v404 + 24);
                if ( !v407 )
                  goto LABEL_1104;
                v408 = *(QuestAfterAction_o **)(v407 + 24);
                updated = System_Int32__Parse(v16->fields.param, 0);
                if ( !v408 )
                  goto LABEL_1104;
                v409 = QuestAfterAction__GetMapComponent_object_(
                         v408,
                         1,
                         updated,
                         this,
                         (const MethodInfo_316755C *)Method_QuestAfterAction_GetMapComponent_ModelLineComponent___);
                *(_QWORD *)(v404 + 16) = v409;
                sub_1C2D434((CGThumbnailListItem_o *)(v404 + 16), (int32_t)v409, v410, v411);
                v412 = *(UnityEngine_Object_o **)(v404 + 16);
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                if ( !UnityEngine_Object__op_Equality(v412, 0, 0) )
                {
                  v88 = *(ModelLineComponent_o **)(v404 + 16);
                  v89 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
                  System_Action___ctor(
                    v89,
                    (Il2CppObject *)v404,
                    Method_QuestAfterAction_StateMain___c__DisplayClass16_6__UpdateAnim_b__5__,
                    0);
                  if ( !v88 )
                    goto LABEL_1104;
                  v91 = 3;
                  goto LABEL_752;
                }
              }
              else
              {
                v515 = sub_1C2D6DC(QuestAfterAction_StateMain___c__DisplayClass16_7_TypeInfo);
                QuestAfterAction_StateMain___c__DisplayClass16_7___ctor(
                  (QuestAfterAction_StateMain___c__DisplayClass16_7_o *)v515,
                  0);
                if ( !v515 )
                  goto LABEL_1104;
                *(_QWORD *)(v515 + 24) = v5;
                sub_1C2D434((CGThumbnailListItem_o *)(v515 + 24), v5, v516, v517);
                v518 = *(_QWORD *)(v515 + 24);
                if ( !v518 )
                  goto LABEL_1104;
                v519 = *(QuestAfterAction_o **)(v518 + 24);
                updated = System_Int32__Parse(v16->fields.param, 0);
                if ( !v519 )
                  goto LABEL_1104;
                v520 = QuestAfterAction__GetMapComponent_object_(
                         v519,
                         1,
                         updated,
                         this,
                         (const MethodInfo_316755C *)Method_QuestAfterAction_GetMapComponent_srcLineSprite___);
                *(_QWORD *)(v515 + 16) = v520;
                sub_1C2D434((CGThumbnailListItem_o *)(v515 + 16), (int32_t)v520, v521, v522);
                v523 = *(UnityEngine_Object_o **)(v515 + 16);
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                if ( !UnityEngine_Object__op_Equality(v523, 0, 0) )
                {
                  v512 = *(srcLineSprite_o **)(v515 + 16);
                  v513 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
                  System_Action___ctor(
                    v513,
                    (Il2CppObject *)v515,
                    Method_QuestAfterAction_StateMain___c__DisplayClass16_7__UpdateAnim_b__6__,
                    0);
                  if ( !v512 )
                    goto LABEL_1104;
                  v514 = 3;
                  goto LABEL_955;
                }
              }
              return;
            case 202:
              if ( this->fields.IsMapModel )
              {
                v413 = sub_1C2D6DC(QuestAfterAction_StateMain___c__DisplayClass16_8_TypeInfo);
                QuestAfterAction_StateMain___c__DisplayClass16_8___ctor(
                  (QuestAfterAction_StateMain___c__DisplayClass16_8_o *)v413,
                  0);
                if ( !v413 )
                  goto LABEL_1104;
                *(_QWORD *)(v413 + 24) = v5;
                sub_1C2D434((CGThumbnailListItem_o *)(v413 + 24), v5, v414, v415);
                v416 = *(_QWORD *)(v413 + 24);
                if ( !v416 )
                  goto LABEL_1104;
                v417 = *(QuestAfterAction_o **)(v416 + 24);
                updated = System_Int32__Parse(v16->fields.param, 0);
                if ( !v417 )
                  goto LABEL_1104;
                v418 = QuestAfterAction__GetMapComponent_object_(
                         v417,
                         1,
                         updated,
                         this,
                         (const MethodInfo_316755C *)Method_QuestAfterAction_GetMapComponent_ModelLineComponent___);
                *(_QWORD *)(v413 + 16) = v418;
                sub_1C2D434((CGThumbnailListItem_o *)(v413 + 16), (int32_t)v418, v419, v420);
                v421 = *(UnityEngine_Object_o **)(v413 + 16);
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                if ( !UnityEngine_Object__op_Equality(v421, 0, 0) )
                {
                  v88 = *(ModelLineComponent_o **)(v413 + 16);
                  v89 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
                  System_Action___ctor(
                    v89,
                    (Il2CppObject *)v413,
                    Method_QuestAfterAction_StateMain___c__DisplayClass16_8__UpdateAnim_b__7__,
                    0);
                  if ( !v88 )
                    goto LABEL_1104;
                  v91 = 4;
LABEL_752:
                  ModelLineComponent__SetState(v88, v91, v89, v90);
                }
              }
              else
              {
                v524 = sub_1C2D6DC(QuestAfterAction_StateMain___c__DisplayClass16_9_TypeInfo);
                QuestAfterAction_StateMain___c__DisplayClass16_9___ctor(
                  (QuestAfterAction_StateMain___c__DisplayClass16_9_o *)v524,
                  0);
                if ( !v524 )
                  goto LABEL_1104;
                *(_QWORD *)(v524 + 24) = v5;
                sub_1C2D434((CGThumbnailListItem_o *)(v524 + 24), v5, v525, v526);
                v527 = *(_QWORD *)(v524 + 24);
                if ( !v527 )
                  goto LABEL_1104;
                v528 = *(QuestAfterAction_o **)(v527 + 24);
                updated = System_Int32__Parse(v16->fields.param, 0);
                if ( !v528 )
                  goto LABEL_1104;
                v529 = QuestAfterAction__GetMapComponent_object_(
                         v528,
                         1,
                         updated,
                         this,
                         (const MethodInfo_316755C *)Method_QuestAfterAction_GetMapComponent_srcLineSprite___);
                *(_QWORD *)(v524 + 16) = v529;
                sub_1C2D434((CGThumbnailListItem_o *)(v524 + 16), (int32_t)v529, v530, v531);
                v532 = *(UnityEngine_Object_o **)(v524 + 16);
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                if ( !UnityEngine_Object__op_Equality(v532, 0, 0) )
                {
                  v512 = *(srcLineSprite_o **)(v524 + 16);
                  v513 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
                  System_Action___ctor(
                    v513,
                    (Il2CppObject *)v524,
                    Method_QuestAfterAction_StateMain___c__DisplayClass16_9__UpdateAnim_b__8__,
                    0);
                  if ( !v512 )
                    goto LABEL_1104;
                  v514 = 4;
LABEL_955:
                  srcLineSprite__SetState(v512, v514, v513, 0);
                }
              }
              return;
            case 203:
              IsMapModel = this->fields.IsMapModel;
              v423 = *v10;
              updated = System_Int32__Parse(v16->fields.param, 0);
              if ( !v423 )
                goto LABEL_1104;
              if ( IsMapModel )
              {
                v424 = (UnityEngine_Object_o *)QuestAfterAction__GetMapComponent_object_(
                                                 v423,
                                                 1,
                                                 updated,
                                                 this,
                                                 (const MethodInfo_316755C *)Method_QuestAfterAction_GetMapComponent_ModelLineComponent___);
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                updated = UnityEngine_Object__op_Equality(v424, 0, 0);
                if ( (updated & 1) != 0 )
                  return;
                if ( !v424 )
                  goto LABEL_1104;
                ModelLineComponent__SetQuestAfterActionScaleAnim_36010580((ModelLineComponent_o *)v424, 0, 0.0, v425);
                v426 = v424[3].klass;
                if ( !v426 )
                  goto LABEL_1104;
              }
              else
              {
                v533 = (UnityEngine_Object_o *)QuestAfterAction__GetMapComponent_object_(
                                                 v423,
                                                 1,
                                                 updated,
                                                 this,
                                                 (const MethodInfo_316755C *)Method_QuestAfterAction_GetMapComponent_srcLineSprite___);
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                updated = UnityEngine_Object__op_Equality(v533, 0, 0);
                if ( (updated & 1) != 0 )
                  return;
                if ( !v533 )
                  goto LABEL_1104;
                srcLineSprite__SetQaaScaleAnimQuick((srcLineSprite_o *)v533, 0, 0);
                v426 = v533[5].monitor;
                if ( !v426 )
                  goto LABEL_1104;
              }
              goto LABEL_961;
            case 204:
              v427 = this->fields.IsMapModel;
              v428 = *v10;
              updated = System_Int32__Parse(v16->fields.param, 0);
              if ( !v428 )
                goto LABEL_1104;
              if ( v427 )
              {
                v429 = (UnityEngine_Object_o *)QuestAfterAction__GetMapComponent_object_(
                                                 v428,
                                                 1,
                                                 updated,
                                                 this,
                                                 (const MethodInfo_316755C *)Method_QuestAfterAction_GetMapComponent_ModelLineComponent___);
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                updated = UnityEngine_Object__op_Equality(v429, 0, 0);
                if ( (updated & 1) != 0 )
                  return;
                if ( !v429 )
                  goto LABEL_1104;
                ModelLineComponent__SetQuestAfterActionScaleAnim_36010580((ModelLineComponent_o *)v429, 1, 0.0, v430);
                ModelLineComponent__SetQuestAfterActionColorAnim_36011056((ModelLineComponent_o *)v429, 0, 0.0, v431);
                v432 = v429[3].klass;
                if ( !v432 )
                  goto LABEL_1104;
              }
              else
              {
                v534 = (UnityEngine_Object_o *)QuestAfterAction__GetMapComponent_object_(
                                                 v428,
                                                 1,
                                                 updated,
                                                 this,
                                                 (const MethodInfo_316755C *)Method_QuestAfterAction_GetMapComponent_srcLineSprite___);
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                updated = UnityEngine_Object__op_Equality(v534, 0, 0);
                if ( (updated & 1) != 0 )
                  return;
                if ( !v534 )
                  goto LABEL_1104;
                srcLineSprite__SetQaaScaleAnimQuick((srcLineSprite_o *)v534, 1, 0);
                srcLineSprite__SetQaaColorAnimQuick((srcLineSprite_o *)v534, 0, 0);
                v432 = v534[5].monitor;
                if ( !v432 )
                  goto LABEL_1104;
              }
              v535 = 2;
              goto LABEL_974;
            case 205:
              v433 = this->fields.IsMapModel;
              v434 = *v10;
              updated = System_Int32__Parse(v16->fields.param, 0);
              if ( !v434 )
                goto LABEL_1104;
              if ( v433 )
              {
                v435 = (UnityEngine_Object_o *)QuestAfterAction__GetMapComponent_object_(
                                                 v434,
                                                 1,
                                                 updated,
                                                 this,
                                                 (const MethodInfo_316755C *)Method_QuestAfterAction_GetMapComponent_ModelLineComponent___);
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                updated = UnityEngine_Object__op_Equality(v435, 0, 0);
                if ( (updated & 1) != 0 )
                  return;
                if ( !v435 )
                  goto LABEL_1104;
                ModelLineComponent__SetQuestAfterActionScaleAnim_36010580((ModelLineComponent_o *)v435, 1, 0.0, v436);
                ModelLineComponent__SetQuestAfterActionColorAnim_36011056((ModelLineComponent_o *)v435, 1, 0.0, v437);
                v432 = v435[3].klass;
                if ( !v432 )
                  goto LABEL_1104;
              }
              else
              {
                v536 = (UnityEngine_Object_o *)QuestAfterAction__GetMapComponent_object_(
                                                 v434,
                                                 1,
                                                 updated,
                                                 this,
                                                 (const MethodInfo_316755C *)Method_QuestAfterAction_GetMapComponent_srcLineSprite___);
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                updated = UnityEngine_Object__op_Equality(v536, 0, 0);
                if ( (updated & 1) != 0 )
                  return;
                if ( !v536 )
                  goto LABEL_1104;
                srcLineSprite__SetQaaScaleAnimQuick((srcLineSprite_o *)v536, 1, 0);
                srcLineSprite__SetQaaColorAnimQuick((srcLineSprite_o *)v536, 1, 0);
                v432 = v536[5].monitor;
                if ( !v432 )
                  goto LABEL_1104;
              }
              v535 = 1;
LABEL_974:
              v432[4] = v535;
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
        updated = (__int64)v16->fields.param;
        if ( !updated )
          goto LABEL_1104;
        updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0);
        if ( !updated )
          goto LABEL_1104;
        v50 = *(_QWORD *)(updated + 24);
        v51 = updated;
        if ( (int)v50 <= 0 )
          break;
        if ( (int)v50 > 2 )
        {
          v438 = System_Single__Parse(*(System_String_o **)(updated + 48), 0);
          v50 = *(_QWORD *)(v51 + 24);
          v52 = v438 * 0.001;
        }
        else
        {
          v52 = 0.5;
        }
        if ( (int)v50 >= 2 )
        {
          updated = System_Int32__Parse(*(System_String_o **)(v51 + 40), 0);
          v50 = *(_QWORD *)(v51 + 24);
          v163 = updated;
        }
        else
        {
          v163 = 15;
        }
        if ( !(_DWORD)v50 )
          goto LABEL_1105;
        v441 = *v10;
        updated = System_Int32__Parse(*(System_String_o **)(v51 + 32), 0);
        if ( !v441 )
          goto LABEL_1104;
        v443 = (UnityEngine_Object_o *)QuestAfterAction__GetMapGameObject(v441, 0, updated, this, v442);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Equality(v443, 0, 0) )
          return;
        v619 = GameObjectExtensions__GetLocalPosition((UnityEngine_GameObject_o *)v443, 0);
        v444 = v619.fields.x;
        v445 = v619.fields.y;
        v446 = v619.fields.z;
        if ( !this->fields.IsMapModel )
          goto LABEL_802;
        if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        if ( !byte_4C21383 )
        {
          sub_1C2D490(&TerminalSceneComponent_TypeInfo);
          byte_4C21383 = 1;
        }
        updated = (__int64)TerminalSceneComponent_TypeInfo;
        if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          updated = (__int64)TerminalSceneComponent_TypeInfo;
        }
        v447 = **(_QWORD **)(updated + 184);
        if ( !v447 )
          goto LABEL_1104;
        updated = *(_QWORD *)(v447 + 264);
        if ( !updated )
          goto LABEL_1104;
        v620.fields.x = v444;
        v620.fields.y = v445;
        v620.fields.z = v446;
        v621 = ScrTerminalMap__ConvertLocalToScreenPosition((ScrTerminalMap_o *)updated, v620, 0);
        v444 = v621.fields.x;
        v445 = v621.fields.y;
        v446 = v621.fields.z;
LABEL_802:
        if ( !FSUtility_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
        updated = FSUtility__IsUnderVista(0);
        if ( (updated & 1) != 0 )
          goto LABEL_1023;
        if ( !*(_DWORD *)(v51 + 24) )
          goto LABEL_1105;
        v448 = *(System_String_o **)(v51 + 32);
        updated = System_String__op_Equality(v448, (System_String_o *)StringLiteral_1307/*"10703"*/, 0);
        if ( (updated & 1) != 0 )
        {
          v445 = v445 + -50.0;
        }
        else
        {
          updated = System_String__op_Equality(v448, (System_String_o *)StringLiteral_1380/*"30101"*/, 0);
          if ( (updated & 1) != 0 )
            v445 = v445 + -50.0;
        }
LABEL_1023:
        v460 = *(_DWORD *)(v51 + 24);
        if ( v16->fields.id == 305 )
        {
LABEL_1024:
          if ( v460 < 4 )
            goto LABEL_1025;
          if ( v460 == 4 )
          {
            if ( !*v10 )
              goto LABEL_1104;
            mMapCamera = (*v10)->fields.mMapCamera;
          }
          else
          {
            updated = System_Int32__Parse(*(System_String_o **)(v51 + 64), 0);
            if ( !*v10 )
              goto LABEL_1104;
            mMapCamera = (*v10)->fields.mMapCamera;
            if ( (int)updated >= 1 )
            {
              *(_QWORD *)&v565.fields.hasValue = &v603;
              v563 = v444;
              v564 = v445;
              *(_QWORD *)&v565.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
              v566 = v446;
              *(_QWORD *)&v603.fields.hasValue = 0;
              *(_QWORD *)&v603.fields.value.fields.y = 0;
LABEL_1084:
              System_Nullable_Vector3____ctor(v565, *(UnityEngine_Vector3_o *)&v563, v15);
              if ( *(_DWORD *)(v51 + 24) <= 3u )
                goto LABEL_1105;
              v585 = *(System_String_o **)(v51 + 56);
LABEL_1086:
              v586 = System_Single__Parse(v585, 0);
              p_size = (System_Nullable_float__o)&size;
              size = 0;
              System_Nullable_float____ctor(
                p_size,
                v586,
                (const MethodInfo_38B1A04 *)Method_System_Nullable_float___ctor__);
              if ( !mMapCamera )
                goto LABEL_1104;
              v588 = size;
              MapCamera__StartAutoWork(mMapCamera, v52, v603, v588, v163, 0, 0);
              break;
            }
          }
          *(_QWORD *)&v569.fields.hasValue = &v603;
          v567 = v444;
          v568 = v445;
          *(_QWORD *)&v569.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
          v570 = v446;
          *(_QWORD *)&v603.fields.hasValue = 0;
          *(_QWORD *)&v603.fields.value.fields.y = 0;
LABEL_1089:
          System_Nullable_Vector3____ctor(v569, *(UnityEngine_Vector3_o *)&v567, v15);
          if ( *(_DWORD *)(v51 + 24) <= 3u )
            goto LABEL_1105;
          v589 = *(System_String_o **)(v51 + 56);
LABEL_1091:
          v590 = System_Single__Parse(v589, 0);
          v591 = (System_Nullable_float__o)&size;
          size = 0;
          System_Nullable_float____ctor(v591, v590, (const MethodInfo_38B1A04 *)Method_System_Nullable_float___ctor__);
          v592 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
          System_Action___ctor(v592, (Il2CppObject *)this, (intptr_t)this->klass->vtable._14_EndAnim.method, 0);
          if ( !mMapCamera )
            goto LABEL_1104;
          v593 = v603;
          v594 = size;
          v595 = mMapCamera;
          v596 = v52;
          v597 = v163;
          goto LABEL_1093;
        }
LABEL_843:
        if ( v460 < 4 )
        {
LABEL_1025:
          if ( !*v10 )
            goto LABEL_1104;
          v462 = (*v10)->fields.mMapCamera;
          goto LABEL_1027;
        }
        updated = System_Int32__Parse(*(System_String_o **)(v51 + 56), 0);
        v461 = *v10;
        if ( !*v10 )
          goto LABEL_1104;
        v462 = v461->fields.mMapCamera;
        if ( (int)updated < 1 )
        {
LABEL_1027:
          v250 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
          System_Action___ctor(v250, (Il2CppObject *)this, (intptr_t)this->klass->vtable._14_EndAnim.method, 0);
          if ( !v462 )
            goto LABEL_1104;
          v251 = v462;
          v252 = v444;
          v253 = v445;
          v254 = v446;
          goto LABEL_1046;
        }
        if ( !v462 )
          goto LABEL_1104;
        v463 = v461->fields.mMapCamera;
        v464 = v444;
        v465 = v445;
        v466 = v446;
        goto LABEL_1062;
      case 301:
      case 306:
        updated = (__int64)v16->fields.param;
        if ( !updated )
          goto LABEL_1104;
        updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0);
        if ( !updated )
          goto LABEL_1104;
        v159 = *(_QWORD *)(updated + 24);
        v51 = updated;
        if ( (int)v159 <= 0 )
          break;
        if ( (int)v159 > 2 )
        {
          v439 = System_Single__Parse(*(System_String_o **)(updated + 48), 0);
          v159 = *(_QWORD *)(v51 + 24);
          v52 = v439 * 0.001;
        }
        else
        {
          v52 = 0.5;
        }
        if ( (int)v159 >= 2 )
        {
          updated = System_Int32__Parse(*(System_String_o **)(v51 + 40), 0);
          v159 = *(_QWORD *)(v51 + 24);
          v163 = updated;
        }
        else
        {
          v163 = 15;
        }
        if ( !(_DWORD)v159 )
          goto LABEL_1105;
        v449 = *v10;
        updated = System_Int32__Parse(*(System_String_o **)(v51 + 32), 0);
        if ( !v449 )
          goto LABEL_1104;
        v451 = (UnityEngine_Object_o *)QuestAfterAction__GetMapGameObject(v449, 1, updated, this, v450);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        updated = UnityEngine_Object__op_Equality(v451, 0, 0);
        if ( (updated & 1) != 0 )
          return;
        if ( this->fields.IsMapModel )
        {
          if ( !v451 )
            goto LABEL_1104;
          updated = (__int64)UnityEngine_GameObject__GetComponent_object_(
                               (UnityEngine_GameObject_o *)v451,
                               (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_ModelLineComponent___);
          if ( !updated )
            goto LABEL_1104;
          Position = GameObjectExtensions__GetPosition((UnityEngine_GameObject_o *)*(_QWORD *)(updated + 32), 0);
          v452 = Position.fields.x;
          v453 = Position.fields.y;
          v454 = Position.fields.z;
          if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          if ( !byte_4C21383 )
          {
            sub_1C2D490(&TerminalSceneComponent_TypeInfo);
            byte_4C21383 = 1;
          }
          updated = (__int64)TerminalSceneComponent_TypeInfo;
          if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            updated = (__int64)TerminalSceneComponent_TypeInfo;
          }
          v455 = **(_QWORD **)(updated + 184);
          if ( !v455 )
            goto LABEL_1104;
          updated = *(_QWORD *)(v455 + 264);
          if ( !updated )
            goto LABEL_1104;
          v623.fields.x = v452;
          v623.fields.y = v453;
          v623.fields.z = v454;
          v624 = ScrTerminalMap__ConvertWorldToScreenPosition((ScrTerminalMap_o *)updated, v623, 0);
        }
        else
        {
          v624 = GameObjectExtensions__GetLocalPosition((UnityEngine_GameObject_o *)v451, 0);
        }
        v537 = v624.fields.x;
        v538 = v624.fields.y;
        v539 = v624.fields.z;
        if ( !FSUtility_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
        updated = FSUtility__IsUnderVista(0);
        if ( (updated & 1) != 0 )
          goto LABEL_1035;
        if ( !*(_DWORD *)(v51 + 24) )
          goto LABEL_1105;
        v540 = *(System_String_o **)(v51 + 32);
        updated = System_String__op_Equality(v540, (System_String_o *)StringLiteral_1307/*"10703"*/, 0);
        if ( (updated & 1) != 0 )
        {
          v538 = v538 + -95.0;
        }
        else
        {
          updated = System_String__op_Equality(v540, (System_String_o *)StringLiteral_1381/*"30102"*/, 0);
          if ( (updated & 1) != 0 )
            v538 = v538 + 45.0;
        }
LABEL_1035:
        v561 = *(_DWORD *)(v51 + 24);
        if ( v16->fields.id == 306 )
        {
          if ( v561 >= 4 )
          {
            if ( v561 == 4 )
            {
              if ( !*v10 )
                goto LABEL_1104;
              mMapCamera = (*v10)->fields.mMapCamera;
            }
            else
            {
              updated = System_Int32__Parse(*(System_String_o **)(v51 + 64), 0);
              if ( !*v10 )
                goto LABEL_1104;
              mMapCamera = (*v10)->fields.mMapCamera;
              if ( (int)updated >= 1 )
              {
                *(_QWORD *)&v603.fields.hasValue = 0;
                *(_QWORD *)&v603.fields.value.fields.y = 0;
                *(_QWORD *)&v565.fields.hasValue = &v603;
                v563 = v537;
                *(_QWORD *)&v565.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
                v564 = v538;
                v566 = v539;
                goto LABEL_1084;
              }
            }
            v603 = (System_Nullable_Vector3__o)0LL;
            *(_QWORD *)&v569.fields.hasValue = &v603;
            v567 = v537;
            *(_QWORD *)&v569.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
            v568 = v538;
            v570 = v539;
            goto LABEL_1089;
          }
          goto LABEL_1042;
        }
        if ( v561 < 4 )
        {
LABEL_1042:
          if ( !*v10 )
            goto LABEL_1104;
          v562 = (*v10)->fields.mMapCamera;
LABEL_1044:
          v250 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
          System_Action___ctor(v250, (Il2CppObject *)this, (intptr_t)this->klass->vtable._14_EndAnim.method, 0);
          if ( !v562 )
            goto LABEL_1104;
          v251 = v562;
          v252 = v537;
          v253 = v538;
          v254 = v539;
          goto LABEL_1046;
        }
        updated = System_Int32__Parse(*(System_String_o **)(v51 + 56), 0);
        v571 = *v10;
        if ( !*v10 )
          goto LABEL_1104;
        v562 = v571->fields.mMapCamera;
        if ( (int)updated < 1 )
          goto LABEL_1044;
        if ( !v562 )
          goto LABEL_1104;
        v463 = v571->fields.mMapCamera;
        v464 = v537;
        v465 = v538;
        v466 = v539;
        goto LABEL_1062;
      case 302:
      case 307:
        updated = (__int64)v16->fields.param;
        if ( !updated )
          goto LABEL_1104;
        updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0);
        if ( !updated )
          goto LABEL_1104;
        v160 = *(_QWORD *)(updated + 24);
        v51 = updated;
        if ( (int)v160 <= 0 )
          break;
        if ( (int)v160 > 2 )
        {
          v440 = System_Single__Parse(*(System_String_o **)(updated + 48), 0);
          v160 = *(_QWORD *)(v51 + 24);
          v52 = v440 * 0.001;
        }
        else
        {
          v52 = 0.5;
        }
        if ( (int)v160 >= 2 )
        {
          updated = System_Int32__Parse(*(System_String_o **)(v51 + 40), 0);
          v160 = *(_QWORD *)(v51 + 24);
          v163 = updated;
        }
        else
        {
          v163 = 15;
        }
        if ( !(_DWORD)v160 )
          goto LABEL_1105;
        v456 = *v10;
        updated = System_Int32__Parse(*(System_String_o **)(v51 + 32), 0);
        if ( !v456 )
          goto LABEL_1104;
        v458 = (UnityEngine_Object_o *)QuestAfterAction__GetMapGameObject(v456, 2, updated, this, v457);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Equality(v458, 0, 0) )
          return;
        v625 = GameObjectExtensions__GetLocalPosition((UnityEngine_GameObject_o *)v458, 0);
        v444 = v625.fields.x;
        v445 = v625.fields.y;
        v446 = v625.fields.z;
        if ( !this->fields.IsMapModel )
          goto LABEL_842;
        if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        if ( !byte_4C21383 )
        {
          sub_1C2D490(&TerminalSceneComponent_TypeInfo);
          byte_4C21383 = 1;
        }
        updated = (__int64)TerminalSceneComponent_TypeInfo;
        if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          updated = (__int64)TerminalSceneComponent_TypeInfo;
        }
        v459 = **(_QWORD **)(updated + 184);
        if ( !v459 )
          goto LABEL_1104;
        updated = *(_QWORD *)(v459 + 264);
        if ( !updated )
          goto LABEL_1104;
        v626.fields.x = v444;
        v626.fields.y = v445;
        v626.fields.z = v446;
        v627 = ScrTerminalMap__ConvertLocalToScreenPosition((ScrTerminalMap_o *)updated, v626, 0);
        v444 = v627.fields.x;
        v445 = v627.fields.y;
        v446 = v627.fields.z;
LABEL_842:
        v460 = *(_DWORD *)(v51 + 24);
        if ( v16->fields.id != 307 )
          goto LABEL_843;
        goto LABEL_1024;
      case 303:
      case 308:
        updated = (__int64)v16->fields.param;
        if ( !updated )
          goto LABEL_1104;
        updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0);
        if ( !updated )
          goto LABEL_1104;
        v161 = updated;
        if ( *(int *)(updated + 24) < 4 )
          break;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_4C23E9B )
        {
          sub_1C2D490(&TerminalPramsManager_TypeInfo);
          byte_4C23E9B = 1;
        }
        updated = (__int64)TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          updated = (__int64)TerminalPramsManager_TypeInfo;
        }
        if ( *(_BYTE *)(*(_QWORD *)(updated + 184) + 105LL) )
          break;
        if ( *(_DWORD *)(v161 + 24) <= 2u )
          goto LABEL_1105;
        v162 = System_Single__Parse(*(System_String_o **)(v161 + 48), 0) * 0.001;
        v52 = v162 >= 0.0 ? v162 : 0.5;
        if ( *(_DWORD *)(v161 + 24) <= 3u )
          goto LABEL_1105;
        v163 = System_Int32__Parse(*(System_String_o **)(v161 + 56), 0);
        if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        if ( !byte_4C21383 )
        {
          sub_1C2D490(&TerminalSceneComponent_TypeInfo);
          byte_4C21383 = 1;
        }
        updated = (__int64)TerminalSceneComponent_TypeInfo;
        if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          updated = (__int64)TerminalSceneComponent_TypeInfo;
        }
        v164 = **(_QWORD **)(updated + 184);
        if ( !v164 )
          goto LABEL_1104;
        if ( !*(_DWORD *)(v161 + 24) )
          goto LABEL_1105;
        v165 = *(ScrTerminalMap_o **)(v164 + 264);
        v166 = System_Single__Parse(*(System_String_o **)(v161 + 32), 0);
        if ( *(_DWORD *)(v161 + 24) <= 1u )
          goto LABEL_1105;
        v167 = v166;
        v168 = System_Single__Parse(*(System_String_o **)(v161 + 40), 0);
        if ( !v165 )
          goto LABEL_1104;
        v611 = ScrTerminalMap__LocalPosFromCoord(v165, v167, v168, 0.0, 0.0, 0);
        v170 = *(_DWORD *)(v161 + 24);
        v171 = v611.fields.x;
        v172 = v611.fields.y;
        v173 = v611.fields.z;
        if ( v16->fields.id == 308 )
        {
          if ( v170 >= 5 )
          {
            if ( v170 == 5 )
            {
              if ( !*v10 )
                goto LABEL_1104;
              mMapCamera = (*v10)->fields.mMapCamera;
            }
            else
            {
              updated = System_Int32__Parse(*(System_String_o **)(v161 + 72), 0);
              if ( !*v10 )
                goto LABEL_1104;
              mMapCamera = (*v10)->fields.mMapCamera;
              if ( (int)updated >= 1 )
              {
                *(_QWORD *)&v609.fields.hasValue = &v603;
                v630.fields.x = v171;
                v630.fields.y = v172;
                *(_QWORD *)&v609.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
                v630.fields.z = v173;
                v603 = (System_Nullable_Vector3__o)0LL;
                System_Nullable_Vector3____ctor(v609, v630, v169);
                if ( *(_DWORD *)(v161 + 24) <= 4u )
                  goto LABEL_1105;
                v585 = *(System_String_o **)(v161 + 64);
                goto LABEL_1086;
              }
            }
            *(_QWORD *)&v610.fields.hasValue = &v603;
            v631.fields.x = v171;
            v631.fields.y = v172;
            *(_QWORD *)&v610.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
            v631.fields.z = v173;
            v603 = (System_Nullable_Vector3__o)0LL;
            System_Nullable_Vector3____ctor(v610, v631, v169);
            if ( *(_DWORD *)(v161 + 24) <= 4u )
              goto LABEL_1105;
            v589 = *(System_String_o **)(v161 + 64);
            goto LABEL_1091;
          }
          goto LABEL_1005;
        }
        if ( v170 < 5 )
        {
LABEL_1005:
          if ( !*v10 )
            goto LABEL_1104;
          v548 = (*v10)->fields.mMapCamera;
LABEL_1007:
          v250 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
          System_Action___ctor(v250, (Il2CppObject *)this, (intptr_t)this->klass->vtable._14_EndAnim.method, 0);
          if ( !v548 )
            goto LABEL_1104;
          v251 = v548;
          v252 = v171;
          v253 = v172;
          v254 = v173;
LABEL_1046:
          v255 = v52;
          v256 = v163;
LABEL_1047:
          MapCamera__StartAutoMove(v251, *(UnityEngine_Vector3_o *)&v252, v255, v256, v250, 0);
          return;
        }
        updated = System_Int32__Parse(*(System_String_o **)(v161 + 64), 0);
        v572 = *v10;
        if ( !*v10 )
          goto LABEL_1104;
        v548 = v572->fields.mMapCamera;
        if ( (int)updated < 1 )
          goto LABEL_1007;
        if ( !v548 )
          goto LABEL_1104;
        v463 = v572->fields.mMapCamera;
        v464 = v171;
        v465 = v172;
        v466 = v173;
LABEL_1062:
        MapCamera__StartAutoMove(v463, *(UnityEngine_Vector3_o *)&v464, v52, v163, 0, 0);
        break;
      case 304:
        updated = (__int64)v16->fields.param;
        if ( !updated )
          goto LABEL_1104;
        updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0);
        if ( !updated )
          goto LABEL_1104;
        v202 = *(_DWORD *)(updated + 24);
        v203 = updated;
        if ( v202 <= 1 )
          break;
        v204 = System_Single__Parse(*(System_String_o **)(updated + 32), 0);
        if ( *(_DWORD *)(v203 + 24) <= 1u )
          goto LABEL_1105;
        v205 = v204;
        v206 = System_Single__Parse(*(System_String_o **)(v203 + 40), 0);
        if ( !*v10 )
          goto LABEL_1104;
        v207 = (*v10)->fields.mMapCamera;
        v208 = v206 * 0.001;
        if ( v208 >= 0.0 )
          v209 = v208;
        else
          v209 = 0.5;
        if ( v202 < 3 )
        {
          v210 = 5;
        }
        else
        {
          if ( *(_DWORD *)(v203 + 24) <= 2u )
            goto LABEL_1105;
          v210 = System_Int32__Parse(*(System_String_o **)(v203 + 48), 0);
        }
        v502 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
        System_Action___ctor(
          v502,
          (Il2CppObject *)v5,
          Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__9__,
          0);
        if ( !v207 )
          goto LABEL_1104;
        MapCamera__StartAutoZoom(v207, v205, v209, v210, v502, 0);
        return;
      default:
        if ( id == 350 )
        {
          updated = (__int64)v16->fields.param;
          if ( !updated )
            goto LABEL_1104;
          updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0);
          if ( !updated )
            goto LABEL_1104;
          v154 = updated;
          if ( *(int *)(updated + 24) > 0 )
          {
            v155 = System_Int32__Parse(*(System_String_o **)(updated + 32), 0);
            if ( v155 >= 1 )
            {
              v156 = v155;
              v157 = 0.5;
              if ( *(int *)(v154 + 24) > 1 )
              {
                v158 = System_Int32__Parse(*(System_String_o **)(v154 + 40), 0);
                if ( *(int *)(v154 + 24) >= 3 )
                  v157 = System_Single__Parse(*(System_String_o **)(v154 + 48), 0) * 0.001;
              }
              else
              {
                v158 = 15;
              }
              if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
              if ( !byte_4C21383 )
              {
                sub_1C2D490(&TerminalSceneComponent_TypeInfo);
                byte_4C21383 = 1;
              }
              updated = (__int64)TerminalSceneComponent_TypeInfo;
              if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
                updated = (__int64)TerminalSceneComponent_TypeInfo;
              }
              v541 = **(_QWORD **)(updated + 184);
              if ( !v541 )
                goto LABEL_1104;
              v542 = *(ScrTerminalMap_o **)(v541 + 264);
              v543 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
              System_Action___ctor(
                v543,
                (Il2CppObject *)v5,
                Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__10__,
                0);
              if ( !v542 )
                goto LABEL_1104;
              ScrTerminalMap__RequestMapMove_36894008(v542, v156, v157, v158, v543, 0);
              return;
            }
          }
        }
        else
        {
          if ( (unsigned int)(id - 351) >= 2 )
            return;
          updated = (__int64)v16->fields.param;
          if ( !updated )
            goto LABEL_1104;
          updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0);
          if ( !updated )
            goto LABEL_1104;
          v233 = updated;
          if ( *(int *)(updated + 24) > 4 )
          {
            v234 = System_Single__Parse(*(System_String_o **)(updated + 32), 0);
            if ( *(_DWORD *)(v233 + 24) <= 1u )
              goto LABEL_1105;
            v235 = v234;
            v236 = System_Single__Parse(*(System_String_o **)(v233 + 40), 0);
            if ( *(_DWORD *)(v233 + 24) <= 2u )
              goto LABEL_1105;
            v237 = v236;
            v238 = System_Single__Parse(*(System_String_o **)(v233 + 48), 0);
            if ( *(_DWORD *)(v233 + 24) <= 3u )
              goto LABEL_1105;
            v239 = v238;
            v240 = System_Single__Parse(*(System_String_o **)(v233 + 56), 0);
            if ( *(_DWORD *)(v233 + 24) <= 4u )
              goto LABEL_1105;
            v241 = v240;
            v242 = System_Int32__Parse(*(System_String_o **)(v233 + 64), 0);
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            if ( !byte_4C21383 )
            {
              sub_1C2D490(&TerminalSceneComponent_TypeInfo);
              byte_4C21383 = 1;
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
            updated = *(_QWORD *)(v243 + 264);
            if ( !updated )
              goto LABEL_1104;
            v612.fields.y = v237;
            v612.fields.z = v239;
            v244 = v241 * 0.001;
            v612.fields.x = v235;
            v613 = ScrTerminalMap__ConvertLocalToScreenPosition((ScrTerminalMap_o *)updated, v612, 0);
            v246 = v613.fields.x;
            v247 = v613.fields.y;
            v248 = v613.fields.z;
            if ( v16->fields.id != 352 || *(int *)(v233 + 24) < 6 )
            {
              if ( !*v10 )
                goto LABEL_1104;
              v249 = (*v10)->fields.mMapCamera;
              v250 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
              System_Action___ctor(
                v250,
                (Il2CppObject *)v5,
                Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__12__,
                0);
              if ( !v249 )
                goto LABEL_1104;
              v251 = v249;
              v252 = v246;
              v253 = v247;
              v254 = v248;
              v255 = v244;
              v256 = v242;
              goto LABEL_1047;
            }
            if ( !*v10 )
              goto LABEL_1104;
            v598 = (*v10)->fields.mMapCamera;
            *(_QWORD *)&v608.fields.hasValue = &v603;
            *(_QWORD *)&v608.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
            v603 = (System_Nullable_Vector3__o)0LL;
            System_Nullable_Vector3____ctor(v608, v613, v245);
            if ( *(_DWORD *)(v233 + 24) <= 5u )
              goto LABEL_1105;
            v599 = System_Single__Parse(*(System_String_o **)(v233 + 72), 0);
            v600 = (System_Nullable_float__o)&size;
            size = 0;
            System_Nullable_float____ctor(v600, v599, (const MethodInfo_38B1A04 *)Method_System_Nullable_float___ctor__);
            v592 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
            System_Action___ctor(
              v592,
              (Il2CppObject *)v5,
              Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__11__,
              0);
            if ( !v598 )
              goto LABEL_1104;
            v593 = v603;
            v594 = size;
            v595 = v598;
            v596 = v244;
            v597 = v242;
LABEL_1093:
            MapCamera__StartAutoWork(v595, v596, v593, v594, v597, v592, 0);
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
      *v10,
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
  __int64 v7; // x1
  struct QuestAfterAction_o *v8; // x8
  struct TerminalSceneComponent_o *mInstance; // x8

  if ( (byte_4C23E8B & 1) == 0 )
  {
    sub_1C2D490(&TerminalSceneComponent_TypeInfo);
    byte_4C23E8B = 1;
  }
  this->fields.that = that;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields, (int32_t)that, (int32_t)method, v3);
  v8 = this->fields.that;
  if ( !v8 )
    goto LABEL_14;
  screenCollider = (TerminalSceneComponent_c *)v8->fields.screenCollider;
  if ( !screenCollider )
    goto LABEL_14;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)screenCollider, 1, 0);
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4C21383 )
  {
    sub_1C2D490(&TerminalSceneComponent_TypeInfo);
    byte_4C21383 = 1;
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
    sub_1C2D6EC(screenCollider, v7);
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
    sub_1C2D6EC(this, method);
  return that->fields.commandBuf;
}


int32_t QuestAfterAction_StateMain__get_CommandIndex(QuestAfterAction_StateMain_o *this, const MethodInfo *method)
{
  struct QuestAfterAction_o *that; // x8

  that = this->fields.that;
  if ( !that )
    sub_1C2D6EC(this, method);
  return that->fields.commandIdx;
}


UnityEngine_GameObject_o *QuestAfterAction_StateMain__get_SubGimmickRoot(
        QuestAfterAction_StateMain_o *this,
        const MethodInfo *method)
{
  TerminalSceneComponent_c *v2; // x0
  struct TerminalSceneComponent_o *mInstance; // x8
  struct ScrTerminalMap_o *mTerminalMap; // x8

  if ( (byte_4C23E8A & 1) == 0 )
  {
    sub_1C2D490(&TerminalSceneComponent_TypeInfo);
    byte_4C23E8A = 1;
  }
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4C21383 )
  {
    sub_1C2D490(&TerminalSceneComponent_TypeInfo);
    byte_4C21383 = 1;
  }
  v2 = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v2 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = v2->static_fields->mInstance;
  if ( !mInstance || (mTerminalMap = mInstance->fields.mTerminalMap) == 0 )
    sub_1C2D6EC(v2, method);
  return mTerminalMap->fields.subRootGimmickP;
}


// local variable allocation has failed, the output may be wrong!
void QuestAfterAction_StateMain__onEnd(QuestAfterAction_StateMain_o *this, bool deleteKey, const MethodInfo *method)
{
  TerminalSceneComponent_c *v5; // x0
  TerminalSceneComponent_o *mInstance; // x0
  const MethodInfo *v7; // x1

  if ( (byte_4C23E8D & 1) == 0 )
  {
    sub_1C2D490(&TerminalSceneComponent_TypeInfo);
    sub_1C2D490(&StringLiteral_16709/*"afterActionBk"*/);
    byte_4C23E8D = 1;
  }
  if ( deleteKey )
    UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_16709/*"afterActionBk"*/, 0);
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4C21383 )
  {
    sub_1C2D490(&TerminalSceneComponent_TypeInfo);
    byte_4C21383 = 1;
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
    sub_1C2D6EC(mInstance, deleteKey);
  }
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
    sub_1C2D6EC(this, value);
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

  if ( (byte_4C23EF5 & 1) == 0 )
  {
    sub_1C2D490(&QuestAfterAction_StateMain___c_TypeInfo);
    byte_4C23EF5 = 1;
  }
  v1 = (Il2CppObject *)sub_1C2D6DC(QuestAfterAction_StateMain___c_TypeInfo);
  System_Object___ctor(v1, 0);
  QuestAfterAction_StateMain___c_TypeInfo->static_fields->__9 = (struct QuestAfterAction_StateMain___c_o *)v1;
  sub_1C2D434((CGThumbnailListItem_o *)QuestAfterAction_StateMain___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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

  if ( (byte_4C23EF6 & 1) == 0 )
  {
    sub_1C2D490(&ScriptManager_CallbackFunc_TypeInfo);
    sub_1C2D490(&ScriptManager_TypeInfo);
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    sub_1C2D490(&Method_QuestAfterAction_StateMain___c__UpdateAnim_b__16_27__);
    sub_1C2D490(&QuestAfterAction_StateMain___c_TypeInfo);
    byte_4C23EF6 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C216DE )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C216DE = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  WarId_k__BackingField = v2->static_fields->_WarId_k__BackingField;
  if ( !byte_4C21464 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
    byte_4C21464 = 1;
  }
  if ( !v2->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v2);
    v2 = TerminalPramsManager_TypeInfo;
  }
  QuestId_k__BackingField = v2->static_fields->_QuestId_k__BackingField;
  if ( !byte_4C21463 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
    byte_4C21463 = 1;
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
    _9__16_27 = (ScriptManager_CallbackFunc_o *)sub_1C2D6DC(ScriptManager_CallbackFunc_TypeInfo);
    ScriptManager_CallbackFunc___ctor(_9__16_27, v8, Method_QuestAfterAction_StateMain___c__UpdateAnim_b__16_27__, 0);
    static_fields = QuestAfterAction_StateMain___c_TypeInfo->static_fields;
    static_fields->__9__16_27 = _9__16_27;
    sub_1C2D434((CGThumbnailListItem_o *)&static_fields->__9__16_27, (int32_t)_9__16_27, v10, v11);
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
  __int64 v14; // x1

  if ( (byte_4C23EF7 & 1) == 0 )
  {
    sub_1C2D490(&Method_NetworkManager_getRequest_BattleScenarioRequest___);
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1C2D490(&ScriptManager_TypeInfo);
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    sub_1C2D490(&Method_QuestAfterAction_StateMain___c__UpdateAnim_b__16_28__);
    sub_1C2D490(&QuestAfterAction_StateMain___c_TypeInfo);
    byte_4C23EF7 = 1;
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
    _9__16_28 = (NetworkManager_ResultCallbackFunc_o *)sub_1C2D6DC(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      _9__16_28,
      v5,
      Method_QuestAfterAction_StateMain___c__UpdateAnim_b__16_28__,
      0);
    static_fields = QuestAfterAction_StateMain___c_TypeInfo->static_fields;
    static_fields->__9__16_28 = _9__16_28;
    sub_1C2D434((CGThumbnailListItem_o *)&static_fields->__9__16_28, (int32_t)_9__16_28, v7, v8);
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     _9__16_28,
                     (const MethodInfo_31599E8 *)Method_NetworkManager_getRequest_BattleScenarioRequest___);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C21464 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C21464 = 1;
  }
  v10 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v10 = TerminalPramsManager_TypeInfo;
  }
  QuestId_k__BackingField = v10->static_fields->_QuestId_k__BackingField;
  if ( !byte_4C21463 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    v10 = TerminalPramsManager_TypeInfo;
    byte_4C21463 = 1;
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
    sub_1C2D6EC(SelectRouteArray, v14);
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

  if ( (byte_4C23EF8 & 1) == 0 )
  {
    sub_1C2D490(&Method_JsonManager_DeserializeArray_BattleResultComponent_resultData___);
    sub_1C2D490(&JsonManager_TypeInfo);
    sub_1C2D490(&ScriptManager_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    sub_1C2D490(&StringLiteral_16709/*"afterActionBk"*/);
    sub_1C2D490(&StringLiteral_15801/*"["*/);
    sub_1C2D490(&StringLiteral_16055/*"]"*/);
    sub_1C2D490(&StringLiteral_13713/*"TerminalTransitionInfoMissionId"*/);
    byte_4C23EF8 = 1;
  }
  v4 = (Il2CppObject *)System_String__Concat_63496112(
                         (System_String_o *)StringLiteral_15801/*"["*/,
                         jsonstr,
                         (System_String_o *)StringLiteral_16055/*"]"*/,
                         0);
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v5 = JsonManager__DeserializeArray_object_(
         v4,
         (const MethodInfo_313DDBC *)Method_JsonManager_DeserializeArray_BattleResultComponent_resultData___);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_16709/*"afterActionBk"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13713/*"TerminalTransitionInfoMissionId"*/, 0);
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  ScriptManager__ClearSelectRouteArray(0);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  TerminalPramsManager__ReceiveQuestEndResultInfo((BattleResultComponent_resultData_array *)v5, 1, 0);
  if ( !byte_4C21ACD )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C21ACD = 1;
  }
  v6 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v6 = TerminalPramsManager_TypeInfo;
  }
  v6->static_fields->_IsAutoResume_k__BackingField = 1;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1C2D6EC(0, v8);
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
    sub_1C2D6EC(0, method);
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
    sub_1C2D6EC(0, method);
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
    sub_1C2D6EC(0, method);
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
    sub_1C2D6EC(_4__this, method);
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
    sub_1C2D6EC(0, method);
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
    sub_1C2D6EC(0, method);
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
    sub_1C2D6EC(0, method);
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
    sub_1C2D6EC(0, method);
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
    sub_1C2D6EC(0, method);
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
    sub_1C2D6EC(0, method);
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
    sub_1C2D6EC(spot, method);
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
    sub_1C2D6EC(this, method);
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
    sub_1C2D6EC(this, method);
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
    sub_1C2D6EC(this, method);
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
    sub_1C2D6EC(this, method);
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
    sub_1C2D6EC(this, method);
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
  const MethodInfo *v7; // x3
  UnityEngine_Component_o *v8; // x22
  Il2CppObject *v9; // x0
  UnityEngine_Color_o **v10; // x21
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  __int64 v13; // x2
  struct System_String_array *paramsStr; // x8
  struct System_String_array *v15; // x8
  UnityEngine_Color_o *v16; // x20
  float v17; // s0
  UITweener_o *v18; // x20
  EventDelegate_Callback_o *v19; // x21
  UnityEngine_Color_o color; // [xsp+10h] [xbp-40h] BYREF

  if ( (byte_4C23EF9 & 1) == 0 )
  {
    sub_1C2D490(&EventDelegate_Callback_TypeInfo);
    sub_1C2D490(&Method_UnityEngine_GameObject_AddComponent_TweenColor___);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponentInChildren_UISprite___);
    sub_1C2D490(&Method_QuestAfterAction_StateMain___c__DisplayClass16_14__UpdateAnim_b__19__);
    sub_1C2D490(&QuestAfterAction_StateMain___c__DisplayClass16_14_TypeInfo);
    byte_4C23EF9 = 1;
  }
  *(_QWORD *)&color.fields.r = 0;
  *(_QWORD *)&color.fields.b = 0;
  v3 = sub_1C2D6DC(QuestAfterAction_StateMain___c__DisplayClass16_14_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !v3 )
    goto LABEL_18;
  *(_QWORD *)(v3 + 24) = this;
  sub_1C2D434((CGThumbnailListItem_o *)(v3 + 24), (int32_t)this, v6, v7);
  mapGimmick = (UnityEngine_Component_o *)this->fields.mapGimmick;
  if ( !mapGimmick )
    goto LABEL_18;
  mapGimmick = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mapGimmick, 0);
  if ( !mapGimmick )
    goto LABEL_18;
  mapGimmick = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponentInChildren_object_(
                                            (UnityEngine_GameObject_o *)mapGimmick,
                                            (const MethodInfo_3126134 *)Method_UnityEngine_GameObject_GetComponentInChildren_UISprite___);
  if ( !mapGimmick )
    goto LABEL_18;
  v8 = mapGimmick;
  mapGimmick = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mapGimmick, 0);
  if ( !mapGimmick )
    goto LABEL_18;
  v9 = UnityEngine_GameObject__AddComponent_object_(
         (UnityEngine_GameObject_o *)mapGimmick,
         (const MethodInfo_3125DE8 *)Method_UnityEngine_GameObject_AddComponent_TweenColor___);
  *(_QWORD *)(v3 + 16) = v9;
  v10 = (UnityEngine_Color_o **)(v3 + 16);
  sub_1C2D434((CGThumbnailListItem_o *)(v3 + 16), (int32_t)v9, v11, v12);
  paramsStr = this->fields.paramsStr;
  if ( !paramsStr )
    goto LABEL_18;
  if ( LODWORD(paramsStr->max_length) <= 1 )
    goto LABEL_19;
  mapGimmick = (UnityEngine_Component_o *)UnityEngine_ColorUtility__TryParseHtmlString(paramsStr->m_Items[1], &color, 0);
  if ( !*v10
    || ((*v10)[8] = *(UnityEngine_Color_o *)((char *)&v8[6].klass + 4), !*v10)
    || ((*v10)[9] = color, (v15 = this->fields.paramsStr) == 0) )
  {
LABEL_18:
    sub_1C2D6EC(mapGimmick, v5);
  }
  if ( LODWORD(v15->max_length) <= 2 )
LABEL_19:
    sub_1C2D6F4(mapGimmick, v5, v13);
  v16 = *v10;
  v17 = System_Single__Parse(v15->m_Items[2], 0);
  if ( !v16 )
    goto LABEL_18;
  v16[3].fields.b = v17;
  mapGimmick = (UnityEngine_Component_o *)*v10;
  if ( !*v10 )
    goto LABEL_18;
  UITweener__PlayForward((UITweener_o *)mapGimmick, 0);
  v18 = *(UITweener_o **)(v3 + 16);
  v19 = (EventDelegate_Callback_o *)sub_1C2D6DC(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(
    v19,
    (Il2CppObject *)v3,
    Method_QuestAfterAction_StateMain___c__DisplayClass16_14__UpdateAnim_b__19__,
    0);
  if ( !v18 )
    goto LABEL_18;
  UITweener__SetOnFinished(v18, v19, 0);
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

  if ( (byte_4C23EFA & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C23EFA = 1;
  }
  tween = (UnityEngine_Object_o *)this->fields.tween;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_71163704(tween, 0);
  CS___8__locals14 = this->fields.CS___8__locals14;
  if ( !CS___8__locals14
    || (CS___8__locals13 = CS___8__locals14->fields.CS___8__locals13) == 0
    || (_4__this = CS___8__locals13->fields.__4__this) == 0 )
  {
    sub_1C2D6EC(_4__this, v5);
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
    sub_1C2D6EC(this, method);
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
    sub_1C2D6EC(this, method);
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

  if ( (byte_4C23EFB & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    sub_1C2D490(&TerminalSceneComponent_TypeInfo);
    sub_1C2D490(&Method_QuestAfterAction_StateMain___c__UpdateAnim_b__16_26__);
    sub_1C2D490(&Method_QuestAfterAction_StateMain___c__DisplayClass16_16__UpdateAnim_b__25__);
    sub_1C2D490(&QuestAfterAction_StateMain___c_TypeInfo);
    byte_4C23EFB = 1;
  }
  questEntity = this->fields.questEntity;
  if ( !questEntity )
    goto LABEL_34;
  if ( QuestEntity__HasFlag(questEntity, 0x800000000000LL, 0) )
  {
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    if ( !byte_4C21383 )
    {
      sub_1C2D490(&TerminalSceneComponent_TypeInfo);
      byte_4C21383 = 1;
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
      if ( !byte_4C21464 )
      {
        sub_1C2D490(&TerminalPramsManager_TypeInfo);
        byte_4C21464 = 1;
      }
      questEntity = (QuestEntity_o *)TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        questEntity = (QuestEntity_o *)TerminalPramsManager_TypeInfo;
      }
      name_high = HIDWORD(questEntity[1].klass->_1.name);
      if ( !byte_4C21463 )
      {
        sub_1C2D490(&TerminalPramsManager_TypeInfo);
        questEntity = (QuestEntity_o *)TerminalPramsManager_TypeInfo;
        byte_4C21463 = 1;
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
        _9__25 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
        System_Action___ctor(
          _9__25,
          (Il2CppObject *)this,
          Method_QuestAfterAction_StateMain___c__DisplayClass16_16__UpdateAnim_b__25__,
          0);
        this->fields.__9__25 = _9__25;
        sub_1C2D434((CGThumbnailListItem_o *)&this->fields.__9__25, (int32_t)_9__25, v10, v11);
      }
      if ( v6 )
      {
        ScrTerminalListTop__StartWindowMessage_36738636(v6, name_high, namespaze + 1, 2, _9__25, 1, 0);
        return;
      }
    }
LABEL_34:
    sub_1C2D6EC(questEntity, result);
  }
  questEntity = (QuestEntity_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
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
    _9__16_26 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
    System_Action___ctor(_9__16_26, v15, Method_QuestAfterAction_StateMain___c__UpdateAnim_b__16_26__, 0);
    static_fields = QuestAfterAction_StateMain___c_TypeInfo->static_fields;
    static_fields->__9__16_26 = _9__16_26;
    sub_1C2D434((CGThumbnailListItem_o *)&static_fields->__9__16_26, (int32_t)_9__16_26, v17, v18);
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

  if ( (byte_4C23EFC & 1) == 0 )
  {
    sub_1C2D490(&MyRoomParamsManager_TypeInfo);
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    sub_1C2D490(&TerminalSceneComponent_TypeInfo);
    sub_1C2D490(&StringLiteral_16709/*"afterActionBk"*/);
    sub_1C2D490(&StringLiteral_13713/*"TerminalTransitionInfoMissionId"*/);
    byte_4C23EFC = 1;
  }
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4C21383 )
  {
    sub_1C2D490(&TerminalSceneComponent_TypeInfo);
    byte_4C21383 = 1;
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
  if ( !byte_4C21383 )
  {
    sub_1C2D490(&TerminalSceneComponent_TypeInfo);
    byte_4C21383 = 1;
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
    sub_1C2D6EC(_4__this, method);
  ScrTerminalMap__AllMaskEnd(_4__this, 0);
LABEL_21:
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4C21383 )
  {
    sub_1C2D490(&TerminalSceneComponent_TypeInfo);
    byte_4C21383 = 1;
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
  if ( !byte_4C21464 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C21464 = 1;
  }
  v7 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v7 = TerminalPramsManager_TypeInfo;
  }
  QuestId_k__BackingField = v7->static_fields->_QuestId_k__BackingField;
  if ( !byte_4C23FA7 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    v7 = TerminalPramsManager_TypeInfo;
    byte_4C23FA7 = 1;
  }
  if ( !v7->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v7);
    v7 = TerminalPramsManager_TypeInfo;
  }
  v7->static_fields->_LastPlayedQuestId_k__BackingField = QuestId_k__BackingField;
  if ( !byte_4C21464 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    v7 = TerminalPramsManager_TypeInfo;
    byte_4C21464 = 1;
  }
  if ( !v7->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v7);
    v7 = TerminalPramsManager_TypeInfo;
  }
  TerminalPramsManager__CheckClearSelectedStoryQuestId(v7->static_fields->_QuestId_k__BackingField, 0);
  if ( !byte_4C21464 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C21464 = 1;
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
    if ( !byte_4C21464 )
    {
      sub_1C2D490(&TerminalPramsManager_TypeInfo);
      byte_4C21464 = 1;
    }
    v12 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v12 = TerminalPramsManager_TypeInfo;
    }
    SpotId = QuestMaster__GetSpotId(v12->static_fields->_QuestId_k__BackingField, 0);
    if ( !byte_4C23FA8 )
    {
      sub_1C2D490(&TerminalPramsManager_TypeInfo);
      byte_4C23FA8 = 1;
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
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_16709/*"afterActionBk"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13713/*"TerminalTransitionInfoMissionId"*/, 0);
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4C21383 )
  {
    sub_1C2D490(&TerminalSceneComponent_TypeInfo);
    byte_4C21383 = 1;
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
  if ( !byte_4C23FA9 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C23FA9 = 1;
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
  if ( !byte_4C216DE )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C216DE = 1;
  }
  v19 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v19 = TerminalPramsManager_TypeInfo;
  }
  WarId_k__BackingField = v19->static_fields->_WarId_k__BackingField;
  if ( !byte_4C23E98 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    v19 = TerminalPramsManager_TypeInfo;
    byte_4C23E98 = 1;
  }
  if ( !v19->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v19);
    v19 = TerminalPramsManager_TypeInfo;
  }
  v19->static_fields->_BeforeQuestStartWarId_k__BackingField = WarId_k__BackingField;
  if ( !byte_4C21383 )
  {
    sub_1C2D490(&TerminalSceneComponent_TypeInfo);
    byte_4C21383 = 1;
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
  if ( !byte_4C21464 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C21464 = 1;
  }
  _4__this = (ScrTerminalMap_o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    _4__this = (ScrTerminalMap_o *)TerminalPramsManager_TypeInfo;
  }
  m_CachedPtr_high = HIDWORD(_4__this->fields.subRootGimmickP->fields.m_CachedPtr);
  if ( !byte_4C21463 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    _4__this = (ScrTerminalMap_o *)TerminalPramsManager_TypeInfo;
    byte_4C21463 = 1;
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
  if ( (byte_4C23EFD & 1) == 0 )
  {
    sub_1C2D490(&QuestAfterAction_TypeInfo);
    this = (QuestAfterAction_StateMain___c__DisplayClass16_17_o *)sub_1C2D490(&TerminalSceneComponent_TypeInfo);
    byte_4C23EFD = 1;
  }
  if ( v2->fields.bgmVolume > -1.0 )
  {
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    if ( !byte_4C21383 )
    {
      sub_1C2D490(&TerminalSceneComponent_TypeInfo);
      byte_4C21383 = 1;
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
      sub_1C2D6EC(this, method);
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
    sub_1C2D6EC(spot, method);
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
    sub_1C2D6EC(spot, method);
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
    sub_1C2D6EC(this, method);
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
    sub_1C2D6EC(this, method);
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
    sub_1C2D6EC(this, method);
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
    sub_1C2D6EC(this, method);
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
    sub_1C2D6EC(this, method);
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
    sub_1C2D6EC(this, method);
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
  sub_1C2D434(p_end, 0, v2, v3);
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
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields, (int32_t)startCallback, (int32_t)method, v3);
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
  sub_1C2D434((CGThumbnailListItem_o *)p_end, (int32_t)endCallback, (int32_t)endCallback, method);
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
  sub_1C2D434((CGThumbnailListItem_o *)v6, (int32_t)vName, v7, v8);
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
  __int64 v25; // x1
  QuestAfterAction_Command_o *v26; // x20
  int32_t CommandType; // w21
  int32_t CommandTargetId; // w2
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  bool result; // w0
  QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__89_o *v34; // [xsp+18h] [xbp-38h]

  v34 = this;
  v2 = this;
  if ( (byte_4C23F02 & 1) == 0 )
  {
    sub_1C2D490(&System_Collections_Generic_IEnumerable_QuestAfterAction_Command__TypeInfo);
    sub_1C2D490(&System_Collections_Generic_IEnumerator_QuestAfterAction_Command__TypeInfo);
    sub_1C2D490(&System_Collections_IEnumerator_TypeInfo);
    this = (QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__89_o *)sub_1C2D490(&QuestAfterAction_TypeInfo);
    byte_4C23F02 = 1;
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
      sub_1C2D6EC(this, method);
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
      v9 = sub_1C7DCA8(commandEnumerable, System_Collections_Generic_IEnumerable_QuestAfterAction_Command__TypeInfo, 0);
    }
    v10 = (*(__int64 (__fastcall **)(struct System_Collections_Generic_IEnumerable_QuestAfterAction_Command__o *, _QWORD))v9)(
            commandEnumerable,
            *(_QWORD *)(v9 + 8));
    v34->fields.__7__wrap1 = (struct System_Collections_Generic_IEnumerator_QuestAfterAction_Command__o *)v10;
    sub_1C2D434((CGThumbnailListItem_o *)&v34->fields.__7__wrap1, v10, v11, v12);
    v2 = v34;
  }
  _7__wrap1 = v2->fields.__7__wrap1;
  v2->fields.__1__state = -3;
  if ( !_7__wrap1 )
LABEL_34:
    sub_1C2D6EC(this, method);
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
      v17 = sub_1C7DCA8(_7__wrap1, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(struct System_Collections_Generic_IEnumerator_QuestAfterAction_Command__o *, _QWORD))v17)(
            _7__wrap1,
            *(_QWORD *)(v17 + 8))
        & 1) == 0 )
    {
      QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__89____m__Finally1(v34, v18);
      v34->fields.__7__wrap1 = 0;
      sub_1C2D434((CGThumbnailListItem_o *)&v34->fields.__7__wrap1, 0, v31, v32);
      return 0;
    }
    v19 = v34->fields.__7__wrap1;
    if ( !v19 )
      sub_1C2D6EC(v34, v18);
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
      v23 = sub_1C7DCA8(
              v34->fields.__7__wrap1,
              System_Collections_Generic_IEnumerator_QuestAfterAction_Command__TypeInfo,
              0);
    }
    v24 = (*(__int64 (__fastcall **)(struct System_Collections_Generic_IEnumerator_QuestAfterAction_Command__o *, _QWORD))v23)(
            v19,
            *(_QWORD *)(v23 + 8));
    v26 = (QuestAfterAction_Command_o *)v24;
    if ( !v24 )
      sub_1C2D6EC(0, v25);
    if ( !_4__this )
      sub_1C2D6EC(v24, v25);
    CommandType = QuestAfterAction__GetCommandType(_4__this, *(_DWORD *)(v24 + 16), 0);
    if ( !QuestAfterAction_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(QuestAfterAction_TypeInfo);
    CommandTargetId = QuestAfterAction__ExtractCommandTargetId(v26, 0);
    this = (QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__89_o *)QuestAfterAction__IsExistCommand(
                                                                                    _4__this,
                                                                                    CommandType,
                                                                                    CommandTargetId,
                                                                                    0);
    if ( ((unsigned __int8)this & 1) == 0 )
      break;
    _7__wrap1 = v34->fields.__7__wrap1;
    if ( !_7__wrap1 )
      goto LABEL_34;
  }
  v34->fields.__2__current = v26;
  sub_1C2D434((CGThumbnailListItem_o *)&v34->fields.__2__current, (int32_t)v26, v29, v30);
  result = 1;
  v34->fields.__1__state = 1;
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

  if ( (byte_4C23F04 & 1) == 0 )
  {
    sub_1C2D490(&QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__89_TypeInfo);
    byte_4C23F04 = 1;
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
    v6 = (QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__89_o *)sub_1C2D6DC(QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__89_TypeInfo);
    System_Object___ctor((Il2CppObject *)v6, 0);
    v6->fields.__1__state = 0;
    v6->fields.__l__initialThreadId = System_Environment__get_CurrentManagedThreadId(0);
    _4__this = this->fields.__4__this;
    v6->fields.__4__this = _4__this;
    sub_1C2D434((CGThumbnailListItem_o *)&v6->fields.__4__this, (int32_t)_4__this, v8, v9);
  }
  _3__commandEnumerable = this->fields.__3__commandEnumerable;
  v6->fields.commandEnumerable = _3__commandEnumerable;
  sub_1C2D434((CGThumbnailListItem_o *)&v6->fields.commandEnumerable, (int32_t)_3__commandEnumerable, v4, v5);
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

  v2 = sub_1C2D4A4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C2D6DC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C2D4A4(&Method_QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__89_System_Collections_IEnumerator_Reset__);
  sub_1C2D5B8(v3, v4);
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

  if ( (byte_4C23F03 & 1) == 0 )
  {
    sub_1C2D490(&System_IDisposable_TypeInfo);
    byte_4C23F03 = 1;
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
      v7 = sub_1C7DCA8(_7__wrap1, System_IDisposable_TypeInfo, 0);
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
      sub_1C2D6EC(this, method);
    if ( _4__this->fields.isKeepingMainStateButFinished )
    {
      this->fields.__2__current = 0;
      p__2__current = &this->fields.__2__current;
      sub_1C2D434((CGThumbnailListItem_o *)&this->fields.__2__current, 0, v2, v3);
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

  v2 = sub_1C2D4A4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C2D6DC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C2D4A4(&Method_QuestAfterAction__WaitWhileMainStateFinished_d__93_System_Collections_IEnumerator_Reset__);
  sub_1C2D5B8(v3, v4);
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

  if ( (byte_4C23EFF & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo__RemoveAt__);
    byte_4C23EFF = 1;
  }
  svtVInfos = (System_Collections_Generic_List_object__o *)this->fields.svtVInfos;
  if ( !svtVInfos
    || (System_Collections_Generic_List_object___RemoveAt(
          svtVInfos,
          0,
          (const MethodInfo_378B358 *)Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo__RemoveAt__),
        (svtVInfos = (System_Collections_Generic_List_object__o *)this->fields.__4__this) == 0) )
  {
    sub_1C2D6EC(svtVInfos, method);
  }
  QuestAfterAction__LoadVoice_36030156((QuestAfterAction_o *)svtVInfos, this->fields.svtVInfos, this->fields.endAct, 0);
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
  __int64 v4; // x1

  if ( (byte_4C23F00 & 1) == 0 )
  {
    sub_1C2D490(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    byte_4C23F00 = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    sub_1C2D6EC(0, v4);
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

  if ( (byte_4C23F01 & 1) == 0 )
  {
    sub_1C2D490(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    byte_4C23F01 = 1;
  }
  _4__this = (char *)this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_8;
  *((_QWORD *)_4__this + 22) = 0;
  sub_1C2D434((CGThumbnailListItem_o *)(_4__this + 176), 0, v2, v3);
  _4__this = (char *)this->fields.__4__this;
  if ( !_4__this
    || (*((_QWORD *)_4__this + 9) = 0,
        sub_1C2D434((CGThumbnailListItem_o *)(_4__this + 72), 0, v6, v7),
        (_4__this = (char *)SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__)) == 0)
    || (MissionNotifyManager__EndPause((MissionNotifyManager_o *)_4__this, 0),
        (_4__this = (char *)this->fields.__4__this) == 0) )
  {
LABEL_8:
    sub_1C2D6EC(_4__this, method);
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
    sub_1C2D6EC(0, method);
  QuestAfterAction__SetState(_4__this, 2, 0);
}