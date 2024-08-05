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
  int32_t v11; // w3
  BlankEarthQuestAfterAction_o *v12; // x20
  int32_t v13; // w2
  int32_t v14; // w3
  System_Collections_Generic_Dictionary_TKey__TValue__o *v15; // x20
  int32_t v16; // w2
  int32_t v17; // w3
  System_Collections_Generic_Dictionary_int__object__o *v18; // x20
  int32_t v19; // w2
  int32_t v20; // w3

  if ( (byte_49FB433 & 1) == 0 )
  {
    sub_1B64870(&BlankEarthQuestAfterAction_TypeInfo, method);
    sub_1B64870(&Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo___ctor__, v3);
    sub_1B64870(&Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int____ctor__, v4);
    sub_1B64870(&System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___TypeInfo, v5);
    sub_1B64870(&System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__TypeInfo, v6);
    sub_1B64870(&Method_SingletonMonoBehaviour_QuestAfterAction___ctor__, v7);
    sub_1B64870(&QuestAfterAction_TitleInfoControlCallback_TypeInfo, v8);
    byte_49FB433 = 1;
  }
  v9 = (Il2CppObject *)sub_1B64ABC(QuestAfterAction_TitleInfoControlCallback_TypeInfo);
  System_Object___ctor(v9, 0LL);
  this->fields._TitleInfoCtrlCallback_k__BackingField = (struct QuestAfterAction_TitleInfoControlCallback_o *)v9;
  sub_1B64814(
    (ServantStatusBattleListViewItem_o *)&this->fields._TitleInfoCtrlCallback_k__BackingField,
    (int32_t)v9,
    v10,
    v11);
  v12 = (BlankEarthQuestAfterAction_o *)sub_1B64ABC(BlankEarthQuestAfterAction_TypeInfo);
  BlankEarthQuestAfterAction___ctor(v12, 0LL);
  this->fields._BlankEarthQuestAfterAction_k__BackingField = v12;
  sub_1B64814(
    (ServantStatusBattleListViewItem_o *)&this->fields._BlankEarthQuestAfterAction_k__BackingField,
    (int32_t)v12,
    v13,
    v14);
  v15 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1B64ABC(System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___TypeInfo);
  System_Collections_Generic_Dictionary_Int32Enum__object____ctor(
    v15,
    (const MethodInfo_3154148 *)Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int____ctor__);
  this->fields.commandTypeIds = (struct System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___o *)v15;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.commandTypeIds, (int32_t)v15, v16, v17);
  v18 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1B64ABC(System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v18,
    (const MethodInfo_312528C *)Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo___ctor__);
  this->fields.svtVoices = (struct System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__o *)v18;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.svtVoices, (int32_t)v18, v19, v20);
  this->fields.MapMoveBeforeFocusSpotId = -1;
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_36EE730 *)Method_SingletonMonoBehaviour_QuestAfterAction___ctor__);
}


void __fastcall QuestAfterAction__CallEndAct(QuestAfterAction_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  ServantStatusBattleListViewItem_o *p_endAct; // x0
  System_Action_o *endAct; // t1

  endAct = this->fields.endAct;
  p_endAct = (ServantStatusBattleListViewItem_o *)&this->fields.endAct;
  p_endAct->klass = 0LL;
  sub_1B64814(p_endAct, 0, v2, v3);
  ActionExtensions__Call(endAct, 0LL);
}


QuestAfterAction_Command_array *__fastcall QuestAfterAction__ConvertValsToCommand(
        QuestAfterAction_o *this,
        System_String_array *actionVals,
        const MethodInfo *method)
{
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
  const MethodInfo *v32; // x1
  const MethodInfo *v33; // x2
  TerminalPramsManager_c *v34; // x0
  int32_t QuestId_k__BackingField; // w21
  System_String_array *v36; // x22
  __int64 v37; // x1
  Il2CppObject *Instance; // x21
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // x0
  System_Collections_Generic_Dictionary_string__DataEntityBase__c *klass; // x8
  System_Collections_Generic_Dictionary_string__DataEntityBase__c *v41; // x8
  const MethodInfo *v42; // x8
  int32_t invoker_method_high; // w24
  System_Collections_Generic_Dictionary_string__DataEntityBase__c *v44; // x8
  const MethodInfo *v45; // x8
  int32_t invoker_method; // w25
  System_Collections_Generic_Dictionary_string__DataEntityBase__c *v47; // x8
  const MethodInfo *v48; // x8
  int32_t MasterName_k__BackingField; // w24
  System_Collections_Generic_Dictionary_string__DataEntityBase__c *v50; // x8
  const MethodInfo *v51; // x8
  int32_t MasterKind_k__BackingField; // w19
  TerminalPramsManager_c *v53; // x0
  TerminalSceneComponent_c *v54; // x0
  TerminalPramsManager_c *v55; // x0
  DataMasterBase_TMaster__TEntity__PKType__o *v56; // x22
  int32_t v57; // w23
  int32_t v58; // w23
  System_String_o *seriazlier; // x23
  bool v60; // w23
  bool v61; // w22
  Il2CppObject *MasterData_object; // x22
  WarEntity_o *QuestId; // x0
  WarEntity_o *v64; // x22
  TerminalPramsManager_c *v65; // x0
  int32_t id; // w19
  bool v67; // w22
  TerminalPramsManager_c *v68; // x0
  TerminalPramsManager_c *v69; // x0
  Il2CppObject *v70; // x22
  int32_t buckets; // w23
  Il2CppObject *v72; // x22
  int32_t v73; // w23
  TerminalPramsManager_c *v74; // x0
  int32_t v75; // w22
  Il2CppObject *v76; // x0
  Il2CppObject *v77; // x21
  int32_t v78; // w23
  const MethodInfo *v79; // x1
  bool IsOverwriteCommandNone; // w0
  __int64 v81; // x8
  __int64 v82; // x0
  unsigned int **p_commandBuf; // x21
  int32_t v84; // w2
  int32_t v85; // w3
  int *commandBuf; // x8
  unsigned __int64 v87; // x23
  il2cpp_array_size_t v88; // w29
  __int64 v89; // x24
  int32_t v90; // w2
  int32_t v91; // w3
  __int64 v92; // x8
  System_String_o *v93; // x1
  System_String_o **v94; // x25
  const MethodInfo *v95; // x2
  int v96; // w8
  int v97; // w8
  System_Collections_Generic_Dictionary_int__object__o *svtVoices; // x26
  DataMasterBase_TMaster__TEntity__PKType__o *v99; // x28
  __int64 v100; // x27
  int32_t v101; // w2
  int32_t v102; // w3
  int v103; // w8
  unsigned int v104; // w8
  System_Collections_Generic_List_int__o *Item; // x26
  const MethodInfo *v106; // x1
  struct System_Int32_array *items; // x8
  _QWORD *v108; // x9
  __int64 size; // x10
  QuestAfterAction_o *v110; // x0
  const MethodInfo *v111; // x2
  System_String_c *v112; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v113; // x25
  unsigned __int64 v114; // x26
  System_String_Fields v115; // x8
  _QWORD *v116; // x9
  __int64 MasterName_k__BackingField_low; // x10
  unsigned int *v118; // x25
  int32_t v119; // w2
  int32_t v120; // w3
  unsigned int *v121; // x0
  TerminalPramsManager_c *v122; // x0
  Il2CppObject *v123; // x20
  TerminalPramsManager_c *v124; // x0
  BalanceConfig_c *v125; // x8
  int32_t WarId_k__BackingField; // w20
  int32_t v127; // w20
  TerminalPramsManager_c *v128; // x0
  TerminalPramsManager_c *v129; // x0
  BalanceConfig_c *v130; // x8
  int32_t v131; // w19
  TerminalPramsManager_c *v132; // x0
  TerminalPramsManager_c *v133; // x0
  __int64 v134; // x0
  int32_t v135; // [xsp+8h] [xbp-78h]
  int32_t svtId; // [xsp+Ch] [xbp-74h] BYREF
  Il2CppObject *v137; // [xsp+10h] [xbp-70h] BYREF
  QuestEntity_o *entity; // [xsp+18h] [xbp-68h] BYREF

  v4 = this;
  if ( (byte_49FB419 & 1) == 0 )
  {
    sub_1B64870(&BalanceConfig_TypeInfo, isBeforeAction);
    sub_1B64870(&bool_TypeInfo, v5);
    sub_1B64870(&QuestAfterAction_Command___TypeInfo, v6);
    sub_1B64870(&QuestAfterAction_Command_TypeInfo, v7);
    sub_1B64870(&Method_DataManager_GetMasterData_EventMissionMaster___, v8);
    sub_1B64870(&Method_DataManager_GetMasterData_QuestMaster___, v9);
    sub_1B64870(&Method_DataManager_GetMasterData_QuestPhaseDetailAddMaster___, v10);
    sub_1B64870(&Method_DataManager_GetMasterData_QuestPhaseDetailMaster___, v11);
    sub_1B64870(&Method_DataManager_GetMasterData_WarMaster___, v12);
    sub_1B64870(&Method_DataManager_GetMaster_BlankEarthSpotMaster___, v13);
    sub_1B64870(&Method_DataManager_GetMaster_QuestBehaviorMaster___, v14);
    sub_1B64870(&Method_DataManager_GetMaster_QuestMaster___, v15);
    sub_1B64870(&Method_DataManager_GetMaster_ShopMaster___, v16);
    sub_1B64870(&Method_DataManager_GetMaster_WarMaster___, v17);
    sub_1B64870(&DataManager_TypeInfo, v18);
    sub_1B64870(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v19);
    sub_1B64870(&Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__, v20);
    sub_1B64870(&Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__GetEntity__, v21);
    sub_1B64870(&Method_DataMasterBase_BlankEarthSpotMaster__BlankEarthSpotEntity__int__TryGetEntity__, v22);
    sub_1B64870(&Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__Add__, v23);
    sub_1B64870(&Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___get_Item__, v24);
    sub_1B64870(&Method_System_Linq_Enumerable_Any_KeyValuePair_int__QuestAfterAction_VoiceInfo____, v25);
    sub_1B64870(&Method_System_Collections_Generic_List_int__Add__, v26);
    sub_1B64870(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v27);
    sub_1B64870(&TerminalPramsManager_TypeInfo, v28);
    sub_1B64870(&TerminalSceneComponent_TypeInfo, v29);
    sub_1B64870(&QuestAfterAction_VoiceInfo_TypeInfo, v30);
    this = (QuestAfterAction_o *)sub_1B64870(&StringLiteral_16642/*"afterActionBk"*/, v31);
    byte_49FB419 = 1;
  }
  v137 = 0LL;
  entity = 0LL;
  svtId = 0;
  *(_WORD *)&v4->fields.isLoadedVoice = 0;
  *(_QWORD *)&v4->fields.ActionMapTargetType = -1LL;
  if ( isBeforeAction )
  {
    if ( System_Linq_Enumerable__Any_KeyValuePair_int__object__(
           (System_Collections_Generic_IEnumerable_TSource__o *)v4->fields.svtVoices,
           (const MethodInfo_2E48078 *)Method_System_Linq_Enumerable_Any_KeyValuePair_int__QuestAfterAction_VoiceInfo____) )
    {
      QuestAfterAction__releaseVoice(v4, v32);
    }
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_49FB134 )
    {
      sub_1B64870(&TerminalPramsManager_TypeInfo, v32);
      byte_49FB134 = 1;
    }
    v34 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v34 = TerminalPramsManager_TypeInfo;
    }
    QuestId_k__BackingField = v34->static_fields->_QuestId_k__BackingField;
    if ( !byte_49FB13F )
    {
      sub_1B64870(&TerminalPramsManager_TypeInfo, v32);
      v34 = TerminalPramsManager_TypeInfo;
      byte_49FB13F = 1;
    }
    if ( !v34->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v34);
      v34 = TerminalPramsManager_TypeInfo;
    }
    v36 = QuestAfterAction__GetBeforeAction(
            QuestId_k__BackingField,
            v34->static_fields->_PhaseCnt_k__BackingField + 1,
            v33);
    goto LABEL_211;
  }
  QuestAfterAction__LoadTerminalTransitionInfo(this, (const MethodInfo *)isBeforeAction);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_49F97AD )
  {
    sub_1B64870(&TerminalSceneComponent_TypeInfo, v37);
    byte_49F97AD = 1;
  }
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalSceneComponent_TypeInfo;
  }
  klass = Master_object[2].fields._lookup->klass;
  if ( !klass )
    goto LABEL_290;
  if ( klass->vtable._9_Add.method )
  {
    if ( !LODWORD(Master_object[3].monitor) )
      j_il2cpp_runtime_class_init_0(Master_object);
    if ( !byte_49F97AD )
    {
      sub_1B64870(&TerminalSceneComponent_TypeInfo, v37);
      byte_49F97AD = 1;
    }
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalSceneComponent_TypeInfo;
    }
    v41 = Master_object[2].fields._lookup->klass;
    if ( !v41 )
      goto LABEL_290;
    v42 = v41->vtable._9_Add.method;
    if ( !v42 )
      goto LABEL_290;
    invoker_method_high = HIDWORD(v42->invoker_method);
    if ( !byte_49F97AD )
    {
      sub_1B64870(&TerminalSceneComponent_TypeInfo, v37);
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalSceneComponent_TypeInfo;
      byte_49F97AD = 1;
    }
    if ( !LODWORD(Master_object[3].monitor) )
    {
      j_il2cpp_runtime_class_init_0(Master_object);
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalSceneComponent_TypeInfo;
    }
    v44 = Master_object[2].fields._lookup->klass;
    if ( !v44 )
      goto LABEL_290;
    v45 = v44->vtable._9_Add.method;
    if ( !v45 )
      goto LABEL_290;
    invoker_method = (int32_t)v45->invoker_method;
    if ( invoker_method < 1 )
    {
      if ( invoker_method_high < 1 )
        goto LABEL_80;
      if ( !LODWORD(Master_object[3].monitor) )
        j_il2cpp_runtime_class_init_0(Master_object);
      if ( !byte_49F97AD )
      {
        sub_1B64870(&TerminalSceneComponent_TypeInfo, v37);
        byte_49F97AD = 1;
      }
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalSceneComponent_TypeInfo;
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalSceneComponent_TypeInfo;
      }
      v50 = Master_object[2].fields._lookup->klass;
      if ( !v50 )
        goto LABEL_290;
      v51 = v50->vtable._9_Add.method;
      if ( !v51 )
        goto LABEL_290;
      v36 = (System_String_array *)v51->klass;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2E3B674 *)Method_DataManager_GetMaster_ShopMaster___);
      if ( !Master_object )
        goto LABEL_290;
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__int___GetEntity(
                                                                      Master_object,
                                                                      invoker_method_high,
                                                                      (const MethodInfo_30D6180 *)Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__);
      if ( !Master_object )
        goto LABEL_290;
      MasterName_k__BackingField = (int32_t)Master_object->fields._MasterName_k__BackingField;
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2E3B674 *)Method_DataManager_GetMaster_WarMaster___);
      if ( !Master_object )
        goto LABEL_290;
    }
    else
    {
      if ( !LODWORD(Master_object[3].monitor) )
        j_il2cpp_runtime_class_init_0(Master_object);
      if ( !byte_49F97AD )
      {
        sub_1B64870(&TerminalSceneComponent_TypeInfo, v37);
        byte_49F97AD = 1;
      }
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalSceneComponent_TypeInfo;
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalSceneComponent_TypeInfo;
      }
      v47 = Master_object[2].fields._lookup->klass;
      if ( !v47 )
        goto LABEL_290;
      v48 = v47->vtable._9_Add.method;
      if ( !v48 )
        goto LABEL_290;
      if ( !Instance )
        goto LABEL_290;
      v36 = (System_String_array *)v48->klass;
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMasterData_object_(
                                                                      (DataManager_o *)Instance,
                                                                      (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_EventMissionMaster___);
      if ( !Master_object )
        goto LABEL_290;
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__int___GetEntity(
                                                                      Master_object,
                                                                      invoker_method,
                                                                      (const MethodInfo_30D6180 *)Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__GetEntity__);
      if ( !Master_object )
        goto LABEL_290;
      MasterName_k__BackingField = HIDWORD(Master_object->fields._MasterName_k__BackingField);
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMasterData_object_(
                                                                      (DataManager_o *)Instance,
                                                                      (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_WarMaster___);
      if ( !Master_object )
        goto LABEL_290;
    }
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)WarMaster__getByEventId(
                                                                    (WarMaster_o *)Master_object,
                                                                    MasterName_k__BackingField,
                                                                    0LL);
    if ( !Master_object )
      goto LABEL_290;
    MasterKind_k__BackingField = Master_object->fields._MasterKind_k__BackingField;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_49FB13E )
    {
      sub_1B64870(&TerminalPramsManager_TypeInfo, v37);
      byte_49FB13E = 1;
    }
    v53 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v53 = TerminalPramsManager_TypeInfo;
    }
    v53->static_fields->_WarId_k__BackingField = MasterKind_k__BackingField;
    if ( !byte_49F97AD )
    {
      sub_1B64870(&TerminalSceneComponent_TypeInfo, v37);
      byte_49F97AD = 1;
    }
    v54 = TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      v54 = TerminalSceneComponent_TypeInfo;
    }
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)v54->static_fields->mInstance;
    if ( !Master_object )
      goto LABEL_290;
    TerminalSceneComponent__CallQuestInformationCloseAtAll((TerminalSceneComponent_o *)Master_object, 0, 0LL);
    if ( v36 )
      goto LABEL_211;
  }
LABEL_80:
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_49FB440 )
  {
    sub_1B64870(&TerminalPramsManager_TypeInfo, v37);
    byte_49FB440 = 1;
  }
  v55 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v55 = TerminalPramsManager_TypeInfo;
  }
  if ( !v55->static_fields->_IsPhaseClear_k__BackingField
    && UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_16642/*"afterActionBk"*/, 0LL) )
  {
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)UnityEngine_PlayerPrefs__GetString_69094192(
                                                                    (System_String_o *)StringLiteral_16642/*"afterActionBk"*/,
                                                                    0LL);
    if ( !Master_object )
      goto LABEL_290;
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)System_String__Split(
                                                                    (System_String_o *)Master_object,
                                                                    0x2Cu,
                                                                    0,
                                                                    0LL);
    if ( !Master_object )
      goto LABEL_290;
    v56 = Master_object;
    if ( !LODWORD(Master_object->fields._MasterName_k__BackingField) )
      goto LABEL_379;
    v57 = System_Int32__Parse((System_String_o *)Master_object->fields.list, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_49FB138 )
    {
      sub_1B64870(&TerminalPramsManager_TypeInfo, v37);
      byte_49FB138 = 1;
    }
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
    }
    LODWORD(Master_object[2].fields._lookup->fields._buckets) = v57;
    if ( LODWORD(v56->fields._MasterName_k__BackingField) <= 1 )
      goto LABEL_379;
    v58 = System_Int32__Parse((System_String_o *)v56->fields._lookup, 0LL);
    if ( !byte_49FB13C )
    {
      sub_1B64870(&TerminalPramsManager_TypeInfo, v37);
      byte_49FB13C = 1;
    }
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
    }
    HIDWORD(Master_object[2].fields._lookup->fields._buckets) = v58;
    if ( LODWORD(v56->fields._MasterName_k__BackingField) <= 2 )
      goto LABEL_379;
    seriazlier = (System_String_o *)v56->fields.seriazlier;
    if ( !bool_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(bool_TypeInfo);
    v60 = System_Boolean__Parse(seriazlier, 0LL);
    if ( !byte_49FB441 )
    {
      sub_1B64870(&TerminalPramsManager_TypeInfo, v37);
      byte_49FB441 = 1;
    }
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
    }
    BYTE4(Master_object[2].fields._lookup[1].fields._buckets) = v60;
    if ( LODWORD(v56->fields._MasterName_k__BackingField) <= 3 )
      goto LABEL_379;
    v61 = System_Boolean__Parse((System_String_o *)v56->fields.sb, 0LL);
    if ( !byte_49FB442 )
    {
      sub_1B64870(&TerminalPramsManager_TypeInfo, v37);
      byte_49FB442 = 1;
    }
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
    }
    BYTE5(Master_object[2].fields._lookup[1].fields._buckets) = v61;
    if ( !byte_49FB443 )
    {
      sub_1B64870(&TerminalPramsManager_TypeInfo, v37);
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
      byte_49FB443 = 1;
    }
    if ( !LODWORD(Master_object[3].monitor) )
    {
      j_il2cpp_runtime_class_init_0(Master_object);
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
    }
    if ( BYTE4(Master_object[2].fields._lookup[1].fields._buckets) )
    {
      if ( !Instance )
        goto LABEL_290;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_WarMaster___);
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_49FB134 )
      {
        sub_1B64870(&TerminalPramsManager_TypeInfo, v37);
        byte_49FB134 = 1;
      }
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
      }
      if ( !MasterData_object )
        goto LABEL_290;
      QuestId = WarMaster__getByLastQuestId(
                  (WarMaster_o *)MasterData_object,
                  (int32_t)Master_object[2].fields._lookup->fields._buckets,
                  0LL);
      if ( QuestId )
      {
        v64 = QuestId;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_49FB444 )
        {
          sub_1B64870(&TerminalPramsManager_TypeInfo, v37);
          byte_49FB444 = 1;
        }
        v65 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v65 = TerminalPramsManager_TypeInfo;
        }
        v65->static_fields->_IsWarClear_k__BackingField = 1;
        id = v64->fields.id;
        if ( !byte_49FB13E )
        {
          sub_1B64870(&TerminalPramsManager_TypeInfo, v37);
          v65 = TerminalPramsManager_TypeInfo;
          byte_49FB13E = 1;
        }
        if ( !v65->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v65);
          v65 = TerminalPramsManager_TypeInfo;
        }
        v65->static_fields->_WarId_k__BackingField = id;
        v67 = TerminalPramsManager__CheckIsOrdealCallWarClear(v64, 0LL);
        if ( !byte_49FB445 )
        {
          sub_1B64870(&TerminalPramsManager_TypeInfo, v37);
          byte_49FB445 = 1;
        }
        v68 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v68 = TerminalPramsManager_TypeInfo;
        }
        v68->static_fields->_IsOrdealCallWarClear_k__BackingField = v67;
      }
    }
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_49FB446 )
  {
    sub_1B64870(&TerminalPramsManager_TypeInfo, v37);
    byte_49FB446 = 1;
  }
  v69 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v69 = TerminalPramsManager_TypeInfo;
  }
  if ( v69->static_fields->_IsWarClear_k__BackingField )
  {
    if ( !v69->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v69);
    if ( !byte_49FB12D )
    {
      sub_1B64870(&TerminalPramsManager_TypeInfo, v37);
      byte_49FB12D = 1;
    }
    v69 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v69 = TerminalPramsManager_TypeInfo;
    }
    if ( !v69->static_fields->_IsOrdealCallWarClear_k__BackingField )
      goto LABEL_210;
  }
  if ( !v69->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v69);
  if ( !byte_49FB440 )
  {
    sub_1B64870(&TerminalPramsManager_TypeInfo, v37);
    byte_49FB440 = 1;
  }
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
  }
  if ( BYTE5(Master_object[2].fields._lookup[1].fields._buckets) )
  {
    if ( !Instance )
      goto LABEL_290;
    v70 = DataManager__GetMasterData_object_(
            (DataManager_o *)Instance,
            (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_QuestPhaseDetailAddMaster___);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_49FB134 )
    {
      sub_1B64870(&TerminalPramsManager_TypeInfo, v37);
      byte_49FB134 = 1;
    }
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
    }
    buckets = (int32_t)Master_object[2].fields._lookup->fields._buckets;
    if ( !byte_49FB13F )
    {
      sub_1B64870(&TerminalPramsManager_TypeInfo, v37);
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
      byte_49FB13F = 1;
    }
    if ( !LODWORD(Master_object[3].monitor) )
    {
      j_il2cpp_runtime_class_init_0(Master_object);
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
    }
    if ( !v70 )
      goto LABEL_290;
    v36 = QuestPhaseDetailAddMaster__GetAfterAction(
            (QuestPhaseDetailAddMaster_o *)v70,
            buckets,
            HIDWORD(Master_object[2].fields._lookup->fields._buckets) + 1,
            0LL);
    if ( v36 )
      goto LABEL_211;
    v72 = DataManager__GetMasterData_object_(
            (DataManager_o *)Instance,
            (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_QuestPhaseDetailMaster___);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_49FB134 )
    {
      sub_1B64870(&TerminalPramsManager_TypeInfo, v37);
      byte_49FB134 = 1;
    }
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
    }
    v73 = (int32_t)Master_object[2].fields._lookup->fields._buckets;
    if ( !byte_49FB13F )
    {
      sub_1B64870(&TerminalPramsManager_TypeInfo, v37);
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
      byte_49FB13F = 1;
    }
    if ( !LODWORD(Master_object[3].monitor) )
    {
      j_il2cpp_runtime_class_init_0(Master_object);
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
    }
    if ( !v72 )
      goto LABEL_290;
    v36 = QuestPhaseDetailMaster__GetAfterAction(
            (QuestPhaseDetailMaster_o *)v72,
            v73,
            HIDWORD(Master_object[2].fields._lookup->fields._buckets) + 1,
            0LL);
    if ( v36 )
      goto LABEL_211;
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
  }
  if ( !LODWORD(Master_object[3].monitor) )
    j_il2cpp_runtime_class_init_0(Master_object);
  if ( !byte_49FB443 )
  {
    sub_1B64870(&TerminalPramsManager_TypeInfo, v37);
    byte_49FB443 = 1;
  }
  v74 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v74 = TerminalPramsManager_TypeInfo;
  }
  if ( !v74->static_fields->_IsQuestClear_k__BackingField )
    goto LABEL_210;
  if ( !v74->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v74);
  v36 = 0LL;
  if ( TerminalPramsManager__get_Debug_IsQuestReleaseAll(0LL) )
    goto LABEL_211;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_49FB134 )
  {
    sub_1B64870(&TerminalPramsManager_TypeInfo, v37);
    byte_49FB134 = 1;
  }
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
  }
  if ( !Instance )
    goto LABEL_290;
  v75 = (int32_t)Master_object[2].fields._lookup->fields._buckets;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMasterData_object_(
                                                                  (DataManager_o *)Instance,
                                                                  (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !Master_object )
    goto LABEL_290;
  v76 = DataMasterBase_object__object__int___GetEntity(
          Master_object,
          v75,
          (const MethodInfo_30D6180 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
  if ( v76 )
    v36 = (System_String_array *)v76[6].klass;
  else
LABEL_210:
    v36 = 0LL;
LABEL_211:
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v77 = DataManager__GetMaster_object_((const MethodInfo_2E3B674 *)Method_DataManager_GetMaster_QuestBehaviorMaster___);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_49FB134 )
  {
    sub_1B64870(&TerminalPramsManager_TypeInfo, v37);
    byte_49FB134 = 1;
  }
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
  }
  v78 = (int32_t)Master_object[2].fields._lookup->fields._buckets;
  if ( !byte_49FB13F )
  {
    sub_1B64870(&TerminalPramsManager_TypeInfo, v37);
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
    byte_49FB13F = 1;
  }
  if ( !LODWORD(Master_object[3].monitor) )
  {
    j_il2cpp_runtime_class_init_0(Master_object);
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
  }
  if ( !v77 )
    goto LABEL_290;
  if ( QuestBehaviorMaster__IsOpenQuestBehaviorCond(
         (QuestBehaviorMaster_o *)v77,
         v78,
         HIDWORD(Master_object[2].fields._lookup->fields._buckets) + 1,
         7,
         0LL)
    || (IsOverwriteCommandNone = QuestAfterAction__IsOverwriteCommandNone(v36, v79), !v36)
    || IsOverwriteCommandNone
    || (v81 = *(_QWORD *)&v36->max_length, (int)v81 < 2)
    || (v81 & 1) != 0 )
  {
    UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_16642/*"afterActionBk"*/, 0LL);
    return;
  }
  v82 = sub_1B64918(QuestAfterAction_Command___TypeInfo, (unsigned int)v81 >> 1);
  v4->fields.commandBuf = (struct QuestAfterAction_Command_array *)v82;
  p_commandBuf = (unsigned int **)&v4->fields.commandBuf;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&v4->fields.commandBuf, v82, v84, v85);
  commandBuf = (int *)v4->fields.commandBuf;
  if ( !commandBuf )
    goto LABEL_290;
  v87 = 0LL;
  v88 = 0;
  while ( (__int64)v87 < commandBuf[6] )
  {
    v89 = sub_1B64ABC(QuestAfterAction_Command_TypeInfo);
    System_Object___ctor((Il2CppObject *)v89, 0LL);
    if ( v88 >= v36->max_length )
      goto LABEL_379;
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)System_Int32__Parse(v36->m_Items[v88], 0LL);
    if ( !v89 )
      goto LABEL_290;
    *(_DWORD *)(v89 + 16) = (_DWORD)Master_object;
    v92 = (int)v88 | 1LL;
    if ( (unsigned int)v92 >= v36->max_length )
      goto LABEL_379;
    v93 = v36->m_Items[v92];
    *(_QWORD *)(v89 + 24) = v93;
    v94 = (System_String_o **)(v89 + 24);
    sub_1B64814((ServantStatusBattleListViewItem_o *)(v89 + 24), (int32_t)v93, v90, v91);
    if ( !v4->fields.hasFadeCommand )
    {
      v96 = *(_DWORD *)(v89 + 16);
      if ( v96 == 520 || v96 == 405 )
        v4->fields.hasFadeCommand = 1;
    }
    if ( !v88 && !v4->fields.isRequestedStopBgm && *(_DWORD *)(v89 + 16) == 850 )
      v4->fields.isRequestedStopBgm = 1;
    if ( (v4->fields.MapMoveBeforeFocusSpotId & 0x80000000) != 0 && *(_DWORD *)(v89 + 16) == 350 )
    {
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)*v94;
      if ( !*v94 )
        goto LABEL_290;
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)System_String__Split(
                                                                      (System_String_o *)Master_object,
                                                                      0x2Cu,
                                                                      0,
                                                                      0LL);
      if ( !Master_object )
        goto LABEL_290;
      if ( SLODWORD(Master_object->fields._MasterName_k__BackingField) >= 4 )
      {
        Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)System_Int32__Parse(
                                                                        (System_String_o *)Master_object->fields.sb,
                                                                        0LL);
        v4->fields.MapMoveBeforeFocusSpotId = (int)Master_object;
      }
    }
    v97 = *(_DWORD *)(v89 + 16);
    if ( v4->fields.IsMoveToEventRewardShop || v97 != 700 )
    {
      if ( v97 == 800 )
      {
        Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)QuestAfterAction_Command__GetAvailableRandomVoice(
                                                                        (QuestAfterAction_Command_o *)v89,
                                                                        &svtId,
                                                                        v95);
        if ( Master_object )
        {
          svtVoices = (System_Collections_Generic_Dictionary_int__object__o *)v4->fields.svtVoices;
          v99 = Master_object;
          v135 = svtId;
          v100 = sub_1B64ABC(QuestAfterAction_VoiceInfo_TypeInfo);
          System_Object___ctor((Il2CppObject *)v100, 0LL);
          *(_DWORD *)(v100 + 16) = v135;
          *(_QWORD *)(v100 + 24) = v99;
          sub_1B64814((ServantStatusBattleListViewItem_o *)(v100 + 24), (int32_t)v99, v101, v102);
          if ( !svtVoices )
            goto LABEL_290;
          System_Collections_Generic_Dictionary_int__object___Add(
            svtVoices,
            v87,
            (Il2CppObject *)v100,
            (const MethodInfo_3125C60 *)Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__Add__);
        }
      }
    }
    else
    {
      v4->fields.IsMoveToEventRewardShop = 1;
    }
    v103 = *(_DWORD *)(v89 + 16);
    if ( v103 <= 114 )
    {
      v104 = v103 - 100;
      if ( v104 >= 0xF || ((0x7C1Fu >> v104) & 1) == 0 )
        goto LABEL_273;
      v37 = 0LL;
    }
    else if ( (unsigned int)(v103 - 200) < 6 )
    {
      v37 = 1LL;
    }
    else if ( (unsigned int)(v103 - 400) < 0xA )
    {
      v37 = 2LL;
    }
    else
    {
      if ( v103 != 550 )
        goto LABEL_273;
      v37 = 3LL;
    }
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)v4->fields.commandTypeIds;
    if ( !Master_object )
      goto LABEL_290;
    Item = (System_Collections_Generic_List_int__o *)System_Collections_Generic_Dictionary_Int32Enum__object___get_Item(
                                                       (System_Collections_Generic_Dictionary_TKey__TValue__o *)Master_object,
                                                       v37,
                                                       (const MethodInfo_3154A7C *)Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___get_Item__);
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)QuestAfterAction__ExtractCommandTargetId(
                                                                    (QuestAfterAction_Command_o *)v89,
                                                                    v106);
    if ( !Item )
      goto LABEL_290;
    items = Item->fields._items;
    v108 = Method_System_Collections_Generic_List_int__Add__;
    ++Item->fields._version;
    if ( !items )
      goto LABEL_290;
    size = Item->fields._size;
    v37 = (unsigned int)Master_object;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_int___AddWithResize(
        Item,
        (int32_t)Master_object,
        *(const MethodInfo_34921B8 **)(*(_QWORD *)(v108[4] + 192LL) + 112LL));
    }
    else
    {
      Item->fields._size = size + 1;
      items->m_Items[size + 1] = (int)Master_object;
    }
LABEL_273:
    if ( v4->fields.ActionMapTargetId <= 0 )
      QuestAfterAction__SetActionMap(v4, (QuestAfterAction_Command_o *)v89, v95);
    if ( *(_DWORD *)(v89 + 16) == 102 )
    {
      v110 = (QuestAfterAction_o *)System_Int32__Parse(*v94, 0LL);
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)QuestAfterAction__GetMapGimmickId(
                                                                      v110,
                                                                      (int32_t)v110,
                                                                      v111);
      if ( !Master_object )
        goto LABEL_290;
      v112 = (System_String_c *)Master_object->fields._MasterName_k__BackingField;
      v113 = Master_object;
      if ( (int)v112 >= 1 )
      {
        v114 = 0LL;
        while ( v114 < (unsigned int)v112 )
        {
          Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)v4->fields.invalidMapGimmickIdList;
          if ( !Master_object )
            goto LABEL_290;
          v37 = *((unsigned int *)&v113->fields.list + v114);
          v115 = *(System_String_Fields *)&Master_object->fields._MasterKind_k__BackingField;
          v116 = Method_System_Collections_Generic_List_int__Add__;
          ++HIDWORD(Master_object->fields._MasterName_k__BackingField);
          if ( !*(_QWORD *)&v115 )
            goto LABEL_290;
          MasterName_k__BackingField_low = SLODWORD(Master_object->fields._MasterName_k__BackingField);
          if ( (unsigned int)MasterName_k__BackingField_low >= *(_DWORD *)(*(_QWORD *)&v115 + 24LL) )
          {
            System_Collections_Generic_List_int___AddWithResize(
              (System_Collections_Generic_List_int__o *)Master_object,
              v37,
              *(const MethodInfo_34921B8 **)(*(_QWORD *)(v116[4] + 192LL) + 112LL));
          }
          else
          {
            LODWORD(Master_object->fields._MasterName_k__BackingField) = MasterName_k__BackingField_low + 1;
            *(_DWORD *)(*(_QWORD *)&v115 + 4 * MasterName_k__BackingField_low + 32) = v37;
          }
          LODWORD(v112) = v113->fields._MasterName_k__BackingField;
          if ( (__int64)++v114 >= (int)v112 )
            goto LABEL_286;
        }
LABEL_379:
        sub_1B64AD4(Master_object, v37);
      }
    }
LABEL_286:
    v118 = *p_commandBuf;
    if ( !*p_commandBuf )
      goto LABEL_290;
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)sub_1B649AC(v89, *(_QWORD *)(*(_QWORD *)v118 + 64LL));
    if ( !Master_object )
    {
      v134 = sub_1B64AF0();
      sub_1B64998(v134, 0LL);
    }
    if ( v87 >= v118[6] )
      goto LABEL_379;
    v121 = &v118[2 * v87];
    *((_QWORD *)v121 + 4) = v89;
    sub_1B64814((ServantStatusBattleListViewItem_o *)(v121 + 8), v89, v119, v120);
    commandBuf = (int *)*p_commandBuf;
    v88 += 2;
    ++v87;
    if ( !*p_commandBuf )
      goto LABEL_290;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_49FB440 )
  {
    sub_1B64870(&TerminalPramsManager_TypeInfo, v37);
    byte_49FB440 = 1;
  }
  v122 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v122 = TerminalPramsManager_TypeInfo;
  }
  if ( v122->static_fields->_IsPhaseClear_k__BackingField )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v123 = DataManager__GetMaster_object_((const MethodInfo_2E3B674 *)Method_DataManager_GetMaster_QuestMaster___);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_49FB134 )
    {
      sub_1B64870(&TerminalPramsManager_TypeInfo, v37);
      byte_49FB134 = 1;
    }
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
    }
    if ( !v123 )
      goto LABEL_290;
    if ( QuestMaster__TryGetQuestEntity(
           (QuestMaster_o *)v123,
           &entity,
           (int32_t)Master_object[2].fields._lookup->fields._buckets,
           0LL) )
    {
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_49FB137 )
      {
        sub_1B64870(&TerminalPramsManager_TypeInfo, v37);
        byte_49FB137 = 1;
      }
      v124 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v124 = TerminalPramsManager_TypeInfo;
      }
      v125 = BalanceConfig_TypeInfo;
      WarId_k__BackingField = v124->static_fields->_WarId_k__BackingField;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v125 = BalanceConfig_TypeInfo;
      }
      if ( WarId_k__BackingField == v125->static_fields->OrdealCallWarId )
      {
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2E3B674 *)Method_DataManager_GetMaster_BlankEarthSpotMaster___);
        if ( entity && Master_object )
        {
          Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__int___TryGetEntity(
                                                                          Master_object,
                                                                          &v137,
                                                                          entity->fields.spotId,
                                                                          (const MethodInfo_30D61D4 *)Method_DataMasterBase_BlankEarthSpotMaster__BlankEarthSpotEntity__int__TryGetEntity__);
          if ( ((unsigned __int8)Master_object & 1) == 0 )
            goto LABEL_330;
          if ( v137 )
          {
            v127 = (int32_t)v137[1].klass;
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            if ( !byte_49FB447 )
            {
              sub_1B64870(&TerminalPramsManager_TypeInfo, v37);
              byte_49FB447 = 1;
            }
            v128 = TerminalPramsManager_TypeInfo;
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
              v128 = TerminalPramsManager_TypeInfo;
            }
            v128->static_fields->_BlankEarthAfterActionFocusSpotId_k__BackingField = v127;
            goto LABEL_330;
          }
        }
LABEL_290:
        sub_1B64ACC(Master_object, v37);
      }
    }
  }
LABEL_330:
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_49F9B2E )
  {
    sub_1B64870(&TerminalPramsManager_TypeInfo, v37);
    byte_49F9B2E = 1;
  }
  v129 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v129 = TerminalPramsManager_TypeInfo;
  }
  v129->static_fields->_IsAutoResume_k__BackingField = 1;
  if ( !byte_49FB13A )
  {
    sub_1B64870(&TerminalPramsManager_TypeInfo, v37);
    v129 = TerminalPramsManager_TypeInfo;
    byte_49FB13A = 1;
  }
  if ( !v129->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v129);
    v129 = TerminalPramsManager_TypeInfo;
  }
  v129->static_fields->_DispState_k__BackingField = 2;
  if ( !byte_49FB137 )
  {
    sub_1B64870(&TerminalPramsManager_TypeInfo, v37);
    v129 = TerminalPramsManager_TypeInfo;
    byte_49FB137 = 1;
  }
  if ( !v129->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v129);
    v129 = TerminalPramsManager_TypeInfo;
  }
  v130 = BalanceConfig_TypeInfo;
  v131 = v129->static_fields->_WarId_k__BackingField;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v130 = BalanceConfig_TypeInfo;
  }
  v132 = TerminalPramsManager_TypeInfo;
  if ( v131 == v130->static_fields->OrdealCallWarId )
    goto LABEL_383;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_49FB12D )
  {
    sub_1B64870(&TerminalPramsManager_TypeInfo, v37);
    byte_49FB12D = 1;
  }
  v132 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v132 = TerminalPramsManager_TypeInfo;
  }
  if ( v132->static_fields->_IsOrdealCallWarClear_k__BackingField )
  {
LABEL_383:
    if ( !v132->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v132);
    if ( !byte_49FB12E )
    {
      sub_1B64870(&TerminalPramsManager_TypeInfo, v37);
      byte_49FB12E = 1;
    }
    v132 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v132 = TerminalPramsManager_TypeInfo;
    }
    v132->static_fields->_BlankEarthSpotId_k__BackingField = 0;
    if ( !byte_49FB12D )
    {
      sub_1B64870(&TerminalPramsManager_TypeInfo, v37);
      v132 = TerminalPramsManager_TypeInfo;
      byte_49FB12D = 1;
    }
    if ( !v132->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v132);
      v132 = TerminalPramsManager_TypeInfo;
    }
    if ( !v132->static_fields->_IsOrdealCallWarClear_k__BackingField )
    {
      if ( !v132->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v132);
      if ( !byte_49FB13A )
      {
        sub_1B64870(&TerminalPramsManager_TypeInfo, v37);
        byte_49FB13A = 1;
      }
      v132 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v132 = TerminalPramsManager_TypeInfo;
      }
      v132->static_fields->_DispState_k__BackingField = 3;
    }
  }
  if ( !v132->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v132);
  if ( !byte_49FB13D )
  {
    sub_1B64870(&TerminalPramsManager_TypeInfo, v37);
    byte_49FB13D = 1;
  }
  v133 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v133 = TerminalPramsManager_TypeInfo;
  }
  v133->static_fields->_SpotId_k__BackingField = -1;
}


void __fastcall QuestAfterAction__DeleteContinueData(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_49FB417 & 1) == 0 )
  {
    sub_1B64870(&StringLiteral_16642/*"afterActionBk"*/, v1);
    byte_49FB417 = 1;
  }
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_16642/*"afterActionBk"*/, 0LL);
}


int32_t __fastcall QuestAfterAction__ExtractCommandTargetId(
        QuestAfterAction_Command_o *command,
        const MethodInfo *method)
{
  QuestAfterAction_Command_o *v2; // x19
  QuestAfterAction_Command_c *param; // x8

  v2 = command;
  if ( (byte_49FB41A & 1) == 0 )
  {
    command = (QuestAfterAction_Command_o *)sub_1B64870(&StringLiteral_869/*","*/, method);
    byte_49FB41A = 1;
  }
  if ( !v2 )
    goto LABEL_11;
  command = (QuestAfterAction_Command_o *)v2->fields.param;
  if ( !command )
    goto LABEL_11;
  command = (QuestAfterAction_Command_o *)System_String__Contains(
                                            (System_String_o *)command,
                                            (System_String_o *)StringLiteral_869/*","*/,
                                            0LL);
  param = (QuestAfterAction_Command_c *)v2->fields.param;
  if ( ((unsigned __int8)command & 1) == 0 )
    return System_Int32__Parse((System_String_o *)param, 0LL);
  if ( !param || (command = (QuestAfterAction_Command_o *)System_String__Split(v2->fields.param, 0x2Cu, 0, 0LL)) == 0LL )
LABEL_11:
    sub_1B64ACC(command, method);
  if ( !LODWORD(command->fields.param) )
    sub_1B64AD4(command, method);
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
  int32_t v9; // w3
  int32_t v10; // w2
  int32_t v11; // w3

  if ( (byte_49FB427 & 1) == 0 )
  {
    sub_1B64870(&QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__74_TypeInfo, commandEnumerable);
    byte_49FB427 = 1;
  }
  v5 = sub_1B64ABC(QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__74_TypeInfo);
  QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__74___ctor(
    (QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__74_o *)v5,
    -2,
    0LL);
  if ( !v5 )
    sub_1B64ACC(v6, v7);
  *(_QWORD *)(v5 + 56) = this;
  sub_1B64814((ServantStatusBattleListViewItem_o *)(v5 + 56), (int32_t)this, v8, v9);
  *(_QWORD *)(v5 + 48) = commandEnumerable;
  sub_1B64814((ServantStatusBattleListViewItem_o *)(v5 + 48), (int32_t)commandEnumerable, v10, v11);
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
  _QWORD *v7; // x19
  __int64 v8; // x8
  __int64 v9; // x0
  __int64 v10; // x0
  QuestAfterAction_Command_array *v11; // x20
  __int64 v12; // x22
  unsigned __int64 v13; // x23
  __int64 v14; // x24
  il2cpp_array_size_t v15; // w25
  __int64 v16; // x21
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x1
  int32_t v20; // w2
  int32_t v21; // w3
  __int64 v23; // x0

  if ( (byte_49FB41B & 1) == 0 )
  {
    sub_1B64870(&Method_System_Array_Empty_QuestAfterAction_Command___, method);
    sub_1B64870(&QuestAfterAction_Command___TypeInfo, v3);
    sub_1B64870(&QuestAfterAction_Command_TypeInfo, v4);
    byte_49FB41B = 1;
  }
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)actionVals, 0LL);
  if ( (IsNullOrEmpty & 1) != 0 )
  {
    v7 = Method_System_Array_Empty_QuestAfterAction_Command___;
    v8 = *((_QWORD *)Method_System_Array_Empty_QuestAfterAction_Command___ + 7);
    if ( !v8 )
    {
      sub_1BB67A8(Method_System_Array_Empty_QuestAfterAction_Command___);
      v8 = v7[7];
    }
    v9 = *(_QWORD *)(v8 + 16);
    if ( (*(_BYTE *)(v9 + 309) & 1) == 0 )
      v9 = sub_1BB674C(v9);
    if ( !*(_DWORD *)(v9 + 224) )
      j_il2cpp_runtime_class_init_0(v9);
    v10 = *(_QWORD *)(v7[7] + 16LL);
    if ( (*(_BYTE *)(v10 + 309) & 1) == 0 )
      v10 = sub_1BB674C(v10);
    return **(QuestAfterAction_Command_array ***)(v10 + 184);
  }
  else
  {
    if ( !actionVals
      || (IsNullOrEmpty = sub_1B64918(
                            QuestAfterAction_Command___TypeInfo,
                            (unsigned int)((signed int)actionVals->max_length / 2))) == 0 )
    {
LABEL_25:
      sub_1B64ACC(IsNullOrEmpty, v6);
    }
    v11 = (QuestAfterAction_Command_array *)IsNullOrEmpty;
    if ( *(int *)(IsNullOrEmpty + 24) >= 1 )
    {
      v12 = 0LL;
      v13 = 0LL;
      v14 = IsNullOrEmpty + 32;
      v15 = 1;
      do
      {
        v16 = sub_1B64ABC(QuestAfterAction_Command_TypeInfo);
        System_Object___ctor((Il2CppObject *)v16, 0LL);
        if ( v15 - 1 >= actionVals->max_length )
          goto LABEL_24;
        IsNullOrEmpty = System_Int32__Parse(actionVals->m_Items[v15 - 1], 0LL);
        if ( !v16 )
          goto LABEL_25;
        *(_DWORD *)(v16 + 16) = IsNullOrEmpty;
        if ( v15 >= actionVals->max_length )
          goto LABEL_24;
        v19 = actionVals->m_Items[v15];
        *(_QWORD *)(v16 + 24) = v19;
        sub_1B64814((ServantStatusBattleListViewItem_o *)(v16 + 24), (int32_t)v19, v17, v18);
        IsNullOrEmpty = sub_1B649AC(v16, v11->obj.klass->_1.element_class);
        if ( !IsNullOrEmpty )
        {
          v23 = sub_1B64AF0();
          sub_1B64998(v23, 0LL);
        }
        if ( v13 >= v11->max_length )
LABEL_24:
          sub_1B64AD4(IsNullOrEmpty, v6);
        *(_QWORD *)(v14 + 8 * v13) = v16;
        sub_1B64814((ServantStatusBattleListViewItem_o *)(v14 + v12), v16, v20, v21);
        ++v13;
        v15 += 2;
        v12 += 8LL;
      }
      while ( (__int64)v13 < (int)v11->max_length );
    }
  }
  return v11;
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
  DataManager_o *Instance; // x0
  __int64 v12; // x1
  Il2CppObject *MasterData_object; // x22
  int32_t v14; // w23
  System_String_array *v15; // x22
  const MethodInfo *v16; // x1
  bool IsOverwriteCommandNone; // w8
  System_String_array *result; // x0
  Il2CppObject *v19; // x20
  System_String_array *v20; // x19

  if ( (byte_49FB432 & 1) == 0 )
  {
    sub_1B64870(&Method_DataManager_GetMasterData_QuestMaster___, *(_QWORD *)&phase);
    sub_1B64870(&Method_DataManager_GetMasterData_QuestPhaseDetailAddMaster___, v5);
    sub_1B64870(&Method_DataManager_GetMasterData_QuestPhaseDetailMaster___, v6);
    sub_1B64870(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v7);
    sub_1B64870(&Method_System_Linq_Enumerable_Any_string___, v8);
    sub_1B64870(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    sub_1B64870(&TerminalPramsManager_TypeInfo, v10);
    byte_49FB432 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_33;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_QuestPhaseDetailAddMaster___);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_49FB134 )
  {
    sub_1B64870(&TerminalPramsManager_TypeInfo, v12);
    byte_49FB134 = 1;
  }
  Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  }
  v14 = *(_DWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 16LL);
  if ( !byte_49FB13F )
  {
    sub_1B64870(&TerminalPramsManager_TypeInfo, v12);
    Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
    byte_49FB13F = 1;
  }
  if ( !LODWORD(Instance[1].fields.saveDataMapList) )
  {
    j_il2cpp_runtime_class_init_0(Instance);
    Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  }
  if ( !MasterData_object )
    goto LABEL_33;
  v15 = QuestPhaseDetailAddMaster__GetAfterAction(
          (QuestPhaseDetailAddMaster_o *)MasterData_object,
          v14,
          *(_DWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 20LL) + 1,
          0LL);
  IsOverwriteCommandNone = QuestAfterAction__IsOverwriteCommandNone(v15, v16);
  result = 0LL;
  if ( IsOverwriteCommandNone )
    return result;
  result = v15;
  if ( v15 )
    return result;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_33;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_QuestPhaseDetailMaster___);
  if ( !Instance )
    goto LABEL_33;
  result = QuestPhaseDetailMaster__GetAfterAction((QuestPhaseDetailMaster_o *)Instance, questId, phase, 0LL);
  if ( result )
    return result;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_33;
  v19 = DataManager__GetMasterData_object_(
          Instance,
          (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_49FB134 )
  {
    sub_1B64870(&TerminalPramsManager_TypeInfo, v12);
    byte_49FB134 = 1;
  }
  Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  }
  if ( !v19 )
LABEL_33:
    sub_1B64ACC(Instance, v12);
  result = (System_String_array *)DataMasterBase_object__object__int___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)v19,
                                    *(_DWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 16LL),
                                    (const MethodInfo_30D6180 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
  if ( result )
  {
    v20 = result;
    if ( System_Linq_Enumerable__Any_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)result->m_Items[8],
           (const MethodInfo_2E48D70 *)Method_System_Linq_Enumerable_Any_string___) )
    {
      return (System_String_array *)v20->m_Items[8];
    }
    else
    {
      return 0LL;
    }
  }
  return result;
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
  DataManager_o *Instance; // x0
  __int64 v12; // x1
  Il2CppObject *MasterData_object; // x22
  int32_t v14; // w23
  System_String_array *v15; // x22
  const MethodInfo *v16; // x1
  bool IsOverwriteCommandNone; // w8
  System_String_array *result; // x0
  Il2CppObject *v19; // x20
  System_String_array *v20; // x19

  if ( (byte_49FB431 & 1) == 0 )
  {
    sub_1B64870(&Method_DataManager_GetMasterData_QuestMaster___, *(_QWORD *)&phase);
    sub_1B64870(&Method_DataManager_GetMasterData_QuestPhaseDetailAddMaster___, v5);
    sub_1B64870(&Method_DataManager_GetMasterData_QuestPhaseDetailMaster___, v6);
    sub_1B64870(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v7);
    sub_1B64870(&Method_System_Linq_Enumerable_Any_string___, v8);
    sub_1B64870(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    sub_1B64870(&TerminalPramsManager_TypeInfo, v10);
    byte_49FB431 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_33;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_QuestPhaseDetailAddMaster___);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_49FB134 )
  {
    sub_1B64870(&TerminalPramsManager_TypeInfo, v12);
    byte_49FB134 = 1;
  }
  Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  }
  v14 = *(_DWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 16LL);
  if ( !byte_49FB13F )
  {
    sub_1B64870(&TerminalPramsManager_TypeInfo, v12);
    Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
    byte_49FB13F = 1;
  }
  if ( !LODWORD(Instance[1].fields.saveDataMapList) )
  {
    j_il2cpp_runtime_class_init_0(Instance);
    Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  }
  if ( !MasterData_object )
    goto LABEL_33;
  v15 = QuestPhaseDetailAddMaster__GetBeforeAction(
          (QuestPhaseDetailAddMaster_o *)MasterData_object,
          v14,
          *(_DWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 20LL) + 1,
          0LL);
  IsOverwriteCommandNone = QuestAfterAction__IsOverwriteCommandNone(v15, v16);
  result = 0LL;
  if ( IsOverwriteCommandNone )
    return result;
  result = v15;
  if ( v15 )
    return result;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_33;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_QuestPhaseDetailMaster___);
  if ( !Instance )
    goto LABEL_33;
  result = QuestPhaseDetailMaster__GetBeforeAction((QuestPhaseDetailMaster_o *)Instance, questId, phase, 0LL);
  if ( result )
    return result;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_33;
  v19 = DataManager__GetMasterData_object_(
          Instance,
          (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_49FB134 )
  {
    sub_1B64870(&TerminalPramsManager_TypeInfo, v12);
    byte_49FB134 = 1;
  }
  Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  }
  if ( !v19 )
LABEL_33:
    sub_1B64ACC(Instance, v12);
  result = (System_String_array *)DataMasterBase_object__object__int___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)v19,
                                    *(_DWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 16LL),
                                    (const MethodInfo_30D6180 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
  if ( result )
  {
    v20 = result;
    if ( System_Linq_Enumerable__Any_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)result->m_Items[7],
           (const MethodInfo_2E48D70 *)Method_System_Linq_Enumerable_Any_string___) )
    {
      return (System_String_array *)v20->m_Items[7];
    }
    else
    {
      return 0LL;
    }
  }
  return result;
}


int32_t __fastcall QuestAfterAction__GetCommandType(
        QuestAfterAction_o *this,
        int32_t commandId,
        const MethodInfo *method)
{
  if ( commandId <= 114 )
  {
    if ( (unsigned int)(commandId - 100) < 0xF )
      return dword_BDC8F4[commandId - 100];
    return -1;
  }
  if ( (unsigned int)(commandId - 200) < 6 )
    return 1;
  if ( (unsigned int)(commandId - 400) >= 0xA )
  {
    if ( commandId == 550 )
      return 3;
    return -1;
  }
  return 2;
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
        const MethodInfo_2ECAFFC *method)
{
  UnityEngine_Object_o *MapGameObject; // x20
  _BOOL8 v11; // x0
  __int64 v12; // x1

  if ( !method->rgctx_data )
  {
    sub_1B64870(&UnityEngine_Object_TypeInfo, *(_QWORD *)&comType);
    if ( !method->rgctx_data )
      sub_1BB67A8();
  }
  MapGameObject = (UnityEngine_Object_o *)QuestAfterAction__GetMapGameObject(this, comType, id, state, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v11 = UnityEngine_Object__op_Equality(MapGameObject, 0LL, 0LL);
  if ( v11 )
    return 0LL;
  if ( !MapGameObject )
    sub_1B64ACC(v11, v12);
  return UnityEngine_GameObject__GetComponent_object_(
           (UnityEngine_GameObject_o *)MapGameObject,
           (const MethodInfo_2E8A1B4 *)method->rgctx_data->_0_UnityEngine_GameObject_GetComponent_T_);
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
  const MethodInfo *v12; // x1
  const MethodInfo *v13; // x3

  v8 = this;
  if ( (byte_49FB42D & 1) == 0 )
  {
    sub_1B64870(&UnityEngine_Object_TypeInfo, *(_QWORD *)&comType);
    this = (QuestAfterAction_o *)sub_1B64870(&SrcSpotBasePrefab_TypeInfo, v9);
    byte_49FB42D = 1;
  }
  if ( comType == 2 )
  {
    if ( !state )
      goto LABEL_40;
    if ( state->fields.IsMapModel )
    {
      this = (QuestAfterAction_o *)QuestAfterAction_StateMain__get_SubGimmickRoot(
                                     (QuestAfterAction_StateMain_o *)this,
                                     *(const MethodInfo **)&comType);
      if ( !this )
        goto LABEL_40;
    }
    else
    {
      this = (QuestAfterAction_o *)v8->fields.mGimmickRoot;
      if ( !this )
        goto LABEL_40;
    }
    transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
    this = (QuestAfterAction_o *)MapGimmickComponent__GetGobjName(id, v12);
    if ( !transform )
LABEL_40:
      sub_1B64ACC(this, *(_QWORD *)&comType);
  }
  else if ( comType == 1 )
  {
    if ( !state )
      goto LABEL_40;
    if ( state->fields.IsMapModel )
    {
      this = (QuestAfterAction_o *)v8->fields.subRoadRoot;
      if ( !this )
        goto LABEL_40;
    }
    else
    {
      this = (QuestAfterAction_o *)v8->fields.mRoadRoot;
      if ( !this )
        goto LABEL_40;
    }
    transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
    this = (QuestAfterAction_o *)srcLineSprite__GetGobjName(id, 0LL);
    if ( !transform )
      goto LABEL_40;
  }
  else
  {
    if ( comType )
    {
      v10 = 0LL;
      goto LABEL_30;
    }
    if ( !state )
      goto LABEL_40;
    if ( state->fields.IsMapModel )
    {
      this = (QuestAfterAction_o *)v8->fields.subSpotRoot;
      if ( !this )
        goto LABEL_40;
    }
    else
    {
      this = (QuestAfterAction_o *)v8->fields.mSpotRoot;
      if ( !this )
        goto LABEL_40;
    }
    transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
    if ( !SrcSpotBasePrefab_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SrcSpotBasePrefab_TypeInfo);
    this = (QuestAfterAction_o *)SrcSpotBasePrefab__GetGobjName(id, 0LL);
    if ( !transform )
      goto LABEL_40;
  }
  v10 = (UnityEngine_Object_o *)UnityEngine_Transform__Find(transform, (System_String_o *)this, 0LL);
LABEL_30:
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (QuestAfterAction_o *)UnityEngine_Object__op_Equality(v10, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    this = (QuestAfterAction_o *)QuestAfterAction__IsMapChangeable(this, *(const MethodInfo **)&comType);
    if ( !state )
      goto LABEL_40;
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      state->fields.IsAnimDoing = 0;
      QuestAfterAction__RequestMapChange(v8, comType, id, v13);
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
      goto LABEL_40;
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
  int max_length; // w8
  System_Object_array *v14; // x21
  unsigned int v15; // w23
  Il2CppClass **v16; // x8
  Il2CppClass *v17; // x22
  struct System_Int32_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10

  if ( (byte_49FB41C & 1) == 0 )
  {
    sub_1B64870(&Method_DataManager_GetMasterData_MapGimmickMaster___, *(_QWORD *)&spotId);
    sub_1B64870(&Method_DataMasterBase_getEntitys_MapGimmickEntity___, v4);
    sub_1B64870(&Method_System_Collections_Generic_List_int__Add__, v5);
    sub_1B64870(&Method_System_Collections_Generic_List_int__ToArray__, v6);
    sub_1B64870(&Method_System_Collections_Generic_List_int___ctor__, v7);
    sub_1B64870(&System_Collections_Generic_List_int__TypeInfo, v8);
    sub_1B64870(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_49FB41C = 1;
  }
  v10 = (System_Collections_Generic_List_int__o *)sub_1B64ABC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v10,
    (const MethodInfo_3491964 *)Method_System_Collections_Generic_List_int___ctor__);
  Instance = (System_Object_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  Instance = (System_Object_array *)DataManager__GetMasterData_object_(
                                      (DataManager_o *)Instance,
                                      (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_MapGimmickMaster___);
  if ( !Instance )
    goto LABEL_19;
  Instance = DataMasterBase__getEntitys_object_(
               (DataMasterBase_o *)Instance,
               (const MethodInfo_2E3BF5C *)Method_DataMasterBase_getEntitys_MapGimmickEntity___);
  if ( !Instance )
    goto LABEL_19;
  max_length = Instance->max_length;
  v14 = Instance;
  if ( max_length >= 1 )
  {
    v15 = 0;
    while ( 1 )
    {
      if ( v15 >= max_length )
        sub_1B64AD4(Instance, name_low);
      v16 = &v14->obj.klass + (int)v15;
      v17 = v16[4];
      if ( !v17 )
        break;
      Instance = (System_Object_array *)MapGimmickEntity__GetRaidDispSpotIdFromScript((MapGimmickEntity_o *)v16[4], 0LL);
      if ( (_DWORD)Instance == spotId )
      {
        if ( !v10 )
          break;
        name_low = LODWORD(v17->_1.name);
        items = v10->fields._items;
        v19 = Method_System_Collections_Generic_List_int__Add__;
        ++v10->fields._version;
        if ( !items )
          break;
        size = v10->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v10,
            name_low,
            *(const MethodInfo_34921B8 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
        }
        else
        {
          v10->fields._size = size + 1;
          items->m_Items[size + 1] = name_low;
        }
      }
      max_length = v14->max_length;
      if ( (int)++v15 >= max_length )
        goto LABEL_17;
    }
LABEL_19:
    sub_1B64ACC(Instance, name_low);
  }
LABEL_17:
  if ( !v10 )
    goto LABEL_19;
  return System_Collections_Generic_List_int___ToArray(
           v10,
           (const MethodInfo_3493D10 *)Method_System_Collections_Generic_List_int__ToArray__);
}


int32_t __fastcall QuestAfterAction__GetState(QuestAfterAction_o *this, const MethodInfo *method)
{
  struct CStateManager_QuestAfterAction__o *fsm; // x8

  if ( (byte_49FB42B & 1) == 0 )
  {
    sub_1B64870(&Method_CStateManager_QuestAfterAction__getState__, method);
    byte_49FB42B = 1;
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
  int32_t v20; // w3
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
  int32_t v32; // w3
  int32_t v33; // w20
  System_Collections_Generic_Dictionary_TKey__TValue__o *v34; // x21
  int v35; // w8
  System_Collections_Generic_List_int__o *v36; // x22
  Il2CppObject *Component_object; // x0
  int32_t v38; // w2
  int32_t v39; // w3
  int32_t v40; // w2
  int32_t v41; // w3
  System_Collections_Generic_List_int__o *v42; // x20
  struct System_Collections_Generic_List_int__o **p_invalidMapGimmickIdList; // x19
  int32_t v44; // w2
  int32_t v45; // w3

  if ( (byte_49FB418 & 1) == 0 )
  {
    sub_1B64870(&Method_CStateManager_QuestAfterAction___ctor__, method);
    sub_1B64870(&Method_CStateManager_QuestAfterAction__add__, v4);
    sub_1B64870(&CStateManager_QuestAfterAction__TypeInfo, v5);
    sub_1B64870(
      &Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___ContainsKey__,
      v6);
    sub_1B64870(&Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___get_Item__, v7);
    sub_1B64870(&Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___set_Item__, v8);
    sub_1B64870(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___, v9);
    sub_1B64870(&Method_System_Collections_Generic_List_int__Clear__, v10);
    sub_1B64870(&Method_System_Collections_Generic_List_int___ctor__, v11);
    sub_1B64870(&System_Collections_Generic_List_int__TypeInfo, v12);
    sub_1B64870(&QuestAfterAction_StateAdditional_TypeInfo, v13);
    sub_1B64870(&QuestAfterAction_StateInstant_TypeInfo, v14);
    sub_1B64870(&QuestAfterAction_StateMain_TypeInfo, v15);
    sub_1B64870(&QuestAfterAction_StateNone_TypeInfo, v16);
    byte_49FB418 = 1;
  }
  p_fsm = &this->fields.fsm;
  if ( !this->fields.fsm )
  {
    v18 = (CStateManager_T__o *)sub_1B64ABC(CStateManager_QuestAfterAction__TypeInfo);
    CStateManager_object____ctor(
      v18,
      (Il2CppObject *)this,
      4,
      (const MethodInfo_3063598 *)Method_CStateManager_QuestAfterAction___ctor__);
    this->fields.fsm = (struct CStateManager_QuestAfterAction__o *)v18;
    sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.fsm, (int32_t)v18, v19, v20);
    fsm = (CStateManager_T__o *)this->fields.fsm;
    v22 = (Il2CppObject *)sub_1B64ABC(QuestAfterAction_StateNone_TypeInfo);
    System_Object___ctor(v22, 0LL);
    if ( !fsm )
      goto LABEL_21;
    CStateManager_object___add(
      fsm,
      0,
      (IState_T__o *)v22,
      (const MethodInfo_3063640 *)Method_CStateManager_QuestAfterAction__add__);
    v25 = (CStateManager_T__o *)*p_fsm;
    v26 = (Il2CppObject *)sub_1B64ABC(QuestAfterAction_StateMain_TypeInfo);
    System_Object___ctor(v26, 0LL);
    if ( !v25 )
      goto LABEL_21;
    CStateManager_object___add(
      v25,
      1,
      (IState_T__o *)v26,
      (const MethodInfo_3063640 *)Method_CStateManager_QuestAfterAction__add__);
    v27 = (CStateManager_T__o *)*p_fsm;
    v28 = (QuestAfterAction_StateAdditional_o *)sub_1B64ABC(QuestAfterAction_StateAdditional_TypeInfo);
    QuestAfterAction_StateAdditional___ctor(v28, 0LL);
    if ( !v27 )
      goto LABEL_21;
    CStateManager_object___add(
      v27,
      2,
      (IState_T__o *)v28,
      (const MethodInfo_3063640 *)Method_CStateManager_QuestAfterAction__add__);
    v29 = (CStateManager_T__o *)*p_fsm;
    v30 = (QuestAfterAction_StateInstant_o *)sub_1B64ABC(QuestAfterAction_StateInstant_TypeInfo);
    QuestAfterAction_StateInstant___ctor(v30, 0LL);
    if ( !v29 )
      goto LABEL_21;
    CStateManager_object___add(
      v29,
      3,
      (IState_T__o *)v30,
      (const MethodInfo_3063640 *)Method_CStateManager_QuestAfterAction__add__);
  }
  QuestAfterAction__SetState(this, 0, v2);
  this->fields.commandBuf = 0LL;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.commandBuf, 0, v31, v32);
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
                                                                                (const MethodInfo_3154D10 *)Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___ContainsKey__);
    v34 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.commandTypeIds;
    if ( ((unsigned __int8)commandTypeIds & 1) != 0 )
    {
      if ( !v34 )
        goto LABEL_21;
      commandTypeIds = (System_Collections_Generic_Dictionary_TKey__TValue__o *)System_Collections_Generic_Dictionary_Int32Enum__object___get_Item(
                                                                                  (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.commandTypeIds,
                                                                                  v33,
                                                                                  (const MethodInfo_3154A7C *)Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___get_Item__);
      if ( !commandTypeIds )
        goto LABEL_21;
      v35 = HIDWORD(commandTypeIds->fields._entries) + 1;
      LODWORD(commandTypeIds->fields._entries) = 0;
      HIDWORD(commandTypeIds->fields._entries) = v35;
    }
    else
    {
      v36 = (System_Collections_Generic_List_int__o *)sub_1B64ABC(System_Collections_Generic_List_int__TypeInfo);
      System_Collections_Generic_List_int____ctor(
        v36,
        (const MethodInfo_3491964 *)Method_System_Collections_Generic_List_int___ctor__);
      if ( !v34 )
        goto LABEL_21;
      System_Collections_Generic_Dictionary_Int32Enum__object___set_Item(
        v34,
        v33,
        (Il2CppObject *)v36,
        (const MethodInfo_3154B08 *)Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___set_Item__);
    }
    ++v33;
  }
  while ( v33 != 4 );
  commandTypeIds = (System_Collections_Generic_Dictionary_TKey__TValue__o *)UnityEngine_Component__get_gameObject(
                                                                              (UnityEngine_Component_o *)this,
                                                                              0LL);
  if ( !commandTypeIds
    || (Component_object = UnityEngine_GameObject__GetComponent_object_(
                             (UnityEngine_GameObject_o *)commandTypeIds,
                             (const MethodInfo_2E8A1B4 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___),
        this->fields.screenCollider = (struct UnityEngine_BoxCollider_o *)Component_object,
        sub_1B64814(
          (ServantStatusBattleListViewItem_o *)&this->fields.screenCollider,
          (int32_t)Component_object,
          v38,
          v39),
        (commandTypeIds = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.screenCollider) == 0LL) )
  {
LABEL_21:
    sub_1B64ACC(commandTypeIds, v24);
  }
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)commandTypeIds, 0, 0LL);
  this->fields.lastDispSpot = 0LL;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.lastDispSpot, 0, v40, v41);
  v42 = (System_Collections_Generic_List_int__o *)sub_1B64ABC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v42,
    (const MethodInfo_3491964 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.invalidMapGimmickIdList = v42;
  p_invalidMapGimmickIdList = &this->fields.invalidMapGimmickIdList;
  sub_1B64814((ServantStatusBattleListViewItem_o *)p_invalidMapGimmickIdList, (int32_t)v42, v44, v45);
  *((_WORD *)p_invalidMapGimmickIdList + 76) = 0;
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

  if ( (byte_49FB41F & 1) == 0 )
  {
    sub_1B64870(
      &Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___ContainsKey__,
      *(_QWORD *)&commandType);
    sub_1B64870(&Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___get_Item__, v7);
    sub_1B64870(&Method_System_Collections_Generic_List_int__Contains__, v8);
    byte_49FB41F = 1;
  }
  commandTypeIds = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.commandTypeIds;
  if ( !commandTypeIds )
    goto LABEL_9;
  if ( System_Collections_Generic_Dictionary_Int32Enum__object___ContainsKey(
         commandTypeIds,
         commandType,
         (const MethodInfo_3154D10 *)Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___ContainsKey__) )
  {
    commandTypeIds = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.commandTypeIds;
    if ( commandTypeIds )
    {
      commandTypeIds = (System_Collections_Generic_Dictionary_TKey__TValue__o *)System_Collections_Generic_Dictionary_Int32Enum__object___get_Item(
                                                                                  commandTypeIds,
                                                                                  commandType,
                                                                                  (const MethodInfo_3154A7C *)Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___get_Item__);
      if ( commandTypeIds )
        return System_Collections_Generic_List_int___Contains(
                 (System_Collections_Generic_List_int__o *)commandTypeIds,
                 commandTypeId,
                 (const MethodInfo_3492530 *)Method_System_Collections_Generic_List_int__Contains__);
    }
LABEL_9:
    sub_1B64ACC(commandTypeIds, *(_QWORD *)&commandType);
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
      sub_1B64AD4(this, *(_QWORD *)&spotId);
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
    sub_1B64ACC(this, *(_QWORD *)&spotId);
  }
  return v8;
}


bool __fastcall QuestAfterAction__IsGimmickDispCommand(int32_t cmd, const MethodInfo *method)
{
  return (cmd & 0xFFFFFFFD) == 401;
}


bool __fastcall QuestAfterAction__IsMapChangeable(QuestAfterAction_o *this, const MethodInfo *method)
{
  ScrTerminalMap_o *v2; // x0
  UnityEngine_GameObject_c *klass; // x8

  if ( (byte_49FB430 & 1) == 0 )
  {
    sub_1B64870(&TerminalSceneComponent_TypeInfo, method);
    byte_49FB430 = 1;
  }
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_49F97AD )
  {
    sub_1B64870(&TerminalSceneComponent_TypeInfo, method);
    byte_49F97AD = 1;
  }
  v2 = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v2 = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
  }
  klass = v2->fields.rootEffectP->klass;
  if ( !klass || (v2 = *(ScrTerminalMap_o **)&klass->_2.thread_static_fields_offset) == 0LL )
    sub_1B64ACC(v2, method);
  return ScrTerminalMap__IsMapChangeable(v2, 0LL);
}


bool __fastcall QuestAfterAction__IsNoWaitCommand(int32_t cmd, const MethodInfo *method)
{
  bool result; // w0

  if ( cmd > 205 )
    return (cmd & 0xFFFFFFFE) == 402;
  result = 1;
  if ( (unsigned int)(cmd - 110) >= 5 && (unsigned int)(cmd - 203) >= 3 )
    return 0;
  return result;
}


bool __fastcall QuestAfterAction__IsOverwriteCommandNone(System_String_array *actionCommand, const MethodInfo *method)
{
  __int64 v2; // x8

  if ( actionCommand )
  {
    v2 = *(_QWORD *)&actionCommand->max_length;
    if ( v2 )
    {
      if ( !(_DWORD)v2 )
        sub_1B64AD4(actionCommand, method);
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

  if ( (byte_49FB42B & 1) == 0 )
  {
    sub_1B64870(&Method_CStateManager_QuestAfterAction__getState__, method);
    byte_49FB42B = 1;
  }
  fsm = this->fields.fsm;
  return fsm && fsm->fields.m_state == 1;
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
  int32_t v38; // w3
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
  int32_t v51; // w3
  struct System_String_array *vals; // x1
  struct TerminalTransitionInfo_o *v53; // x8
  System_Collections_Generic_List_Enumerator_object__o v54; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v55; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_49FB423 & 1) == 0 )
  {
    sub_1B64870(&Method_DataManager_GetMasterData_EventMaster___, method);
    sub_1B64870(&Method_DataManager_GetMasterData_EventMissionActionAddMaster___, v2);
    sub_1B64870(&Method_DataManager_GetMasterData_EventMissionActionMaster___, v3);
    sub_1B64870(&Method_DataManager_GetMasterData_EventMissionMaster___, v4);
    sub_1B64870(&Method_DataManager_GetMaster_EventMaster___, v5);
    sub_1B64870(&Method_DataManager_GetMaster_ShopActionMaster___, v6);
    sub_1B64870(&Method_DataManager_GetMaster_ShopMaster___, v7);
    sub_1B64870(&DataManager_TypeInfo, v8);
    sub_1B64870(&Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__, v9);
    sub_1B64870(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v10);
    sub_1B64870(&Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__GetEntity__, v11);
    sub_1B64870(&Method_System_Collections_Generic_List_Enumerator_ShopActionEntity__Dispose__, v12);
    sub_1B64870(&Method_System_Collections_Generic_List_Enumerator_ShopActionEntity__MoveNext__, v13);
    sub_1B64870(&Method_System_Collections_Generic_List_Enumerator_ShopActionEntity__get_Current__, v14);
    sub_1B64870(&EventMissionActionInfo_TypeInfo, v15);
    sub_1B64870(&Method_System_Collections_Generic_List_ShopActionEntity__GetEnumerator__, v16);
    sub_1B64870(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    sub_1B64870(&TerminalPramsManager_TypeInfo, v18);
    sub_1B64870(&TerminalSceneComponent_TypeInfo, v19);
    byte_49FB423 = 1;
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
  if ( !byte_49F97AD )
  {
    sub_1B64870(&TerminalSceneComponent_TypeInfo, v21);
    byte_49F97AD = 1;
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
      Master_object = (char *)DataManager__GetMaster_object_((const MethodInfo_2E3B674 *)Method_DataManager_GetMaster_ShopMaster___);
      if ( !Master_object )
        goto LABEL_67;
      Entity = DataMasterBase_object__object__int___GetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                 v22->fields.shopId,
                 (const MethodInfo_30D6180 *)Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__);
      if ( Entity )
      {
        v30 = Entity;
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Master_object = (char *)DataManager__GetMaster_object_((const MethodInfo_2E3B674 *)Method_DataManager_GetMaster_EventMaster___);
        if ( !Master_object )
          goto LABEL_67;
        v31 = DataMasterBase_object__object__int___GetEntity(
                (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                (int32_t)v30[1].monitor,
                (const MethodInfo_30D6180 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
        if ( !v31 || !EventEntity__IsEventPeriod((EventEntity_o *)v31, 0LL, 0LL) )
          goto LABEL_66;
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Master_object = (char *)DataManager__GetMaster_object_((const MethodInfo_2E3B674 *)Method_DataManager_GetMaster_ShopActionMaster___);
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
          (const MethodInfo_34B0548 *)Method_System_Collections_Generic_List_ShopActionEntity__GetEnumerator__);
        v55 = v54;
        while ( 1 )
        {
          v32 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v55,
                  (const MethodInfo_322C38C *)Method_System_Collections_Generic_List_Enumerator_ShopActionEntity__MoveNext__);
          if ( !v32 )
            break;
          current = v55.fields._current;
          if ( !v55.fields._current )
            sub_1B64ACC(v32, v33);
          if ( LODWORD(v55.fields._current[1].monitor) == 4 )
          {
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            if ( !byte_49FB448 )
            {
              sub_1B64870(&TerminalPramsManager_TypeInfo, v33);
              byte_49FB448 = 1;
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
              sub_1B64ACC(0LL, v36);
            klass = current[2].klass;
            TransitionInfo_k__BackingField->fields.afterActionVals = (struct System_String_array *)klass;
            sub_1B64814(
              (ServantStatusBattleListViewItem_o *)&TransitionInfo_k__BackingField->fields.afterActionVals,
              (int32_t)klass,
              v37,
              v38);
            v43 = v24->fields._TransitionInfo_k__BackingField;
            if ( !v43 )
              sub_1B64ACC(v41, v42);
            v43->fields.optionId = (int32_t)current[2].monitor;
            break;
          }
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v55,
          (const MethodInfo_322C388 *)Method_System_Collections_Generic_List_Enumerator_ShopActionEntity__Dispose__);
      }
    }
  }
  else
  {
    Master_object = (char *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Master_object )
      goto LABEL_67;
    v25 = (DataManager_o *)Master_object;
    Master_object = (char *)DataManager__GetMasterData_object_(
                              (DataManager_o *)Master_object,
                              (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_EventMissionActionAddMaster___);
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
      v28 = (EventMissionActionInfo_o *)sub_1B64ABC(EventMissionActionInfo_TypeInfo);
      EventMissionActionInfo___ctor_42000560(v28, v27, 0LL);
    }
    else
    {
      Master_object = (char *)DataManager__GetMasterData_object_(
                                v25,
                                (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_EventMissionActionMaster___);
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
      v28 = (EventMissionActionInfo_o *)sub_1B64ABC(EventMissionActionInfo_TypeInfo);
      EventMissionActionInfo___ctor(v28, v45, 0LL);
    }
    Master_object = (char *)DataManager__GetMasterData_object_(
                              v25,
                              (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_EventMissionMaster___);
    if ( !Master_object )
      goto LABEL_67;
    v46 = DataMasterBase_object__object__int___GetEntity(
            (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
            v22->fields.missionId,
            (const MethodInfo_30D6180 *)Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__GetEntity__);
    if ( v46 )
    {
      v47 = v46;
      Master_object = (char *)DataManager__GetMasterData_object_(
                                v25,
                                (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_EventMaster___);
      if ( !Master_object )
        goto LABEL_67;
      Master_object = (char *)DataMasterBase_object__object__int___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                HIDWORD(v47[1].monitor),
                                (const MethodInfo_30D6180 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
      if ( !Master_object )
        goto LABEL_67;
      if ( EventEntity__IsEventPeriod((EventEntity_o *)Master_object, 0LL, 0LL) )
      {
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_49FB448 )
        {
          sub_1B64870(&TerminalPramsManager_TypeInfo, v48);
          byte_49FB448 = 1;
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
            sub_1B64814((ServantStatusBattleListViewItem_o *)(Master_object + 32), (int32_t)vals, v50, v51);
            v53 = v24->fields._TransitionInfo_k__BackingField;
            if ( v53 )
            {
              v53->fields.optionId = v28->fields.optionId;
              return;
            }
          }
        }
LABEL_67:
        sub_1B64ACC(Master_object, v21);
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

  if ( (byte_49FB420 & 1) == 0 )
  {
    sub_1B64870(&Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__get_Values__, endAct);
    sub_1B64870(&Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo___ctor__, v5);
    sub_1B64870(&System_Collections_Generic_List_QuestAfterAction_VoiceInfo__TypeInfo, v6);
    byte_49FB420 = 1;
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
      sub_1B64ACC(0LL, endAct);
    Values = System_Collections_Generic_Dictionary_int__object___get_Values(
               (System_Collections_Generic_Dictionary_int__object__o *)svtVoices,
               (const MethodInfo_3125A70 *)Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__get_Values__);
    v9 = (System_Collections_Generic_List_object__o *)sub_1B64ABC(System_Collections_Generic_List_QuestAfterAction_VoiceInfo__TypeInfo);
    System_Collections_Generic_List_object____ctor_55243428(
      v9,
      (System_Collections_Generic_IEnumerable_T__o *)Values,
      (const MethodInfo_34AF2A4 *)Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo___ctor__);
    QuestAfterAction__LoadVoice_33551588(
      this,
      (System_Collections_Generic_List_QuestAfterAction_VoiceInfo__o *)v9,
      endAct,
      v10);
  }
}


void __fastcall QuestAfterAction__LoadVoice_33551588(
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
  int32_t v18; // w3
  CommonUI_o **v19; // x28
  int32_t v20; // w2
  int32_t v21; // w3
  System_Action_o **v22; // x19
  int32_t v23; // w2
  int32_t v24; // w3
  System_String_o *VoiceAssetName_39441004; // x19
  Il2CppObject *v26; // x20
  System_Action_o *v27; // x22

  v5 = svtVInfos;
  while ( 1 )
  {
    if ( (byte_49FB421 & 1) == 0 )
    {
      sub_1B64870(&System_Action_TypeInfo, svtVInfos);
      sub_1B64870(&Method_System_Linq_Enumerable_Any_QuestAfterAction_VoiceInfo___, v7);
      sub_1B64870(&Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo__RemoveAt__, v8);
      sub_1B64870(&Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo__get_Item__, v9);
      sub_1B64870(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v10);
      sub_1B64870(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__, v11);
      sub_1B64870(&Method_QuestAfterAction___c__DisplayClass67_0__LoadVoice_b__0__, v12);
      sub_1B64870(&QuestAfterAction___c__DisplayClass67_0_TypeInfo, v13);
      byte_49FB421 = 1;
    }
    v14 = sub_1B64ABC(QuestAfterAction___c__DisplayClass67_0_TypeInfo);
    QuestAfterAction___c__DisplayClass67_0___ctor((QuestAfterAction___c__DisplayClass67_0_o *)v14, 0LL);
    if ( !v14 )
      goto LABEL_18;
    *(_QWORD *)(v14 + 16) = v5;
    v19 = (CommonUI_o **)(v14 + 16);
    sub_1B64814((ServantStatusBattleListViewItem_o *)(v14 + 16), (int32_t)v5, v17, v18);
    *(_QWORD *)(v14 + 24) = this;
    sub_1B64814((ServantStatusBattleListViewItem_o *)(v14 + 24), (int32_t)this, v20, v21);
    *(_QWORD *)(v14 + 32) = endAct;
    v22 = (System_Action_o **)(v14 + 32);
    sub_1B64814((ServantStatusBattleListViewItem_o *)(v14 + 32), (int32_t)endAct, v23, v24);
    if ( !System_Linq_Enumerable__Any_object_(
            *(System_Collections_Generic_IEnumerable_TSource__o **)(v14 + 16),
            (const MethodInfo_2E48D70 *)Method_System_Linq_Enumerable_Any_QuestAfterAction_VoiceInfo___) )
    {
      Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( Instance )
      {
        CommonUI__SetLoadMode(Instance, 0, 0LL);
        ActionExtensions__Call(*v22, 0LL);
        return;
      }
LABEL_18:
      sub_1B64ACC(Instance, v16);
    }
    Instance = *v19;
    if ( !*v19 )
      goto LABEL_18;
    Instance = (CommonUI_o *)System_Collections_Generic_List_object___get_Item(
                               (System_Collections_Generic_List_object__o *)Instance,
                               0,
                               (const MethodInfo_34AF6E0 *)Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo__get_Item__);
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
      (const MethodInfo_34B1224 *)Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo__RemoveAt__);
    v5 = (System_Collections_Generic_List_QuestAfterAction_VoiceInfo__o *)*v19;
    endAct = *v22;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  CommonUI__SetLoadMode(Instance, 1, 0LL);
  Instance = *v19;
  if ( !*v19 )
    goto LABEL_18;
  Instance = (CommonUI_o *)System_Collections_Generic_List_object___get_Item(
                             (System_Collections_Generic_List_object__o *)Instance,
                             0,
                             (const MethodInfo_34AF6E0 *)Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo__get_Item__);
  if ( !Instance )
    goto LABEL_18;
  VoiceAssetName_39441004 = ServantVoiceEntity__getVoiceAssetName_39441004(Instance->fields.m_CachedPtr, 0LL);
  v26 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
  v27 = (System_Action_o *)sub_1B64ABC(System_Action_TypeInfo);
  System_Action___ctor(v27, (Il2CppObject *)v14, Method_QuestAfterAction___c__DisplayClass67_0__LoadVoice_b__0__, 0LL);
  if ( !v26 )
    goto LABEL_18;
  SoundManager__LoadAudioAssetStorage((SoundManager_o *)v26, VoiceAssetName_39441004, v27, 1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall QuestAfterAction__MapObjName(
        QuestAfterAction_o *this,
        int32_t comType,
        int32_t id,
        const MethodInfo *method)
{
  __int64 v6; // x1

  if ( (byte_49FB42F & 1) == 0 )
  {
    sub_1B64870(&SrcSpotBasePrefab_TypeInfo, *(_QWORD *)&comType);
    sub_1B64870(&StringLiteral_1/*""*/, v6);
    byte_49FB42F = 1;
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

  if ( (byte_49FB429 & 1) == 0 )
  {
    sub_1B64870(&Method_System_Collections_Generic_List_int__Clear__, method);
    byte_49FB429 = 1;
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
    sub_1B64ACC(screenCollider, v4);
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
  int32_t v12; // w3
  System_Action_o *v13; // x22
  int32_t v14; // w2
  int32_t v15; // w3
  const MethodInfo *v16; // x2

  if ( (byte_49FB425 & 1) == 0 )
  {
    sub_1B64870(&System_Action_TypeInfo, endAct);
    sub_1B64870(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v5);
    sub_1B64870(&Method_QuestAfterAction___c__DisplayClass71_0__Play_b__0__, v6);
    sub_1B64870(&QuestAfterAction___c__DisplayClass71_0_TypeInfo, v7);
    byte_49FB425 = 1;
  }
  v8 = sub_1B64ABC(QuestAfterAction___c__DisplayClass71_0_TypeInfo);
  QuestAfterAction___c__DisplayClass71_0___ctor((QuestAfterAction___c__DisplayClass71_0_o *)v8, 0LL);
  if ( !v8
    || (*(_QWORD *)(v8 + 16) = endAct,
        sub_1B64814((ServantStatusBattleListViewItem_o *)(v8 + 16), (int32_t)endAct, v11, v12),
        (Instance = SingletonTemplate_object___get_Instance((const MethodInfo_36EE738 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__)) == 0LL) )
  {
    sub_1B64ACC(Instance, v10);
  }
  MissionNotifyManager__StartPause((MissionNotifyManager_o *)Instance, 0LL);
  v13 = (System_Action_o *)sub_1B64ABC(System_Action_TypeInfo);
  System_Action___ctor(v13, (Il2CppObject *)v8, Method_QuestAfterAction___c__DisplayClass71_0__Play_b__0__, 0LL);
  this->fields.endAct = v13;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.endAct, (int32_t)v13, v14, v15);
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
  __int64 v11; // x20
  Il2CppObject *Instance; // x0
  __int64 v13; // x1
  int32_t v14; // w2
  int32_t v15; // w3
  int32_t v16; // w2
  int32_t v17; // w3
  const MethodInfo *v18; // x1
  struct QuestAfterAction_Command_array *CommandBuf; // x0
  int32_t v20; // w2
  int32_t v21; // w3
  System_Action_o *v22; // x21
  int32_t v23; // w2
  int32_t v24; // w3
  System_Action_o *v25; // x21
  const MethodInfo *v26; // x2
  System_Collections_IEnumerator_o *v27; // x1

  if ( (byte_49FB426 & 1) == 0 )
  {
    sub_1B64870(&System_Action_TypeInfo, actionVals);
    sub_1B64870(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v7);
    sub_1B64870(&Method_QuestAfterAction___c__DisplayClass72_0__PlaySpecifiedAction_b__0__, v8);
    sub_1B64870(&Method_QuestAfterAction___c__DisplayClass72_0__PlaySpecifiedAction_b__1__, v9);
    sub_1B64870(&QuestAfterAction___c__DisplayClass72_0_TypeInfo, v10);
    byte_49FB426 = 1;
  }
  v11 = sub_1B64ABC(QuestAfterAction___c__DisplayClass72_0_TypeInfo);
  QuestAfterAction___c__DisplayClass72_0___ctor((QuestAfterAction___c__DisplayClass72_0_o *)v11, 0LL);
  if ( !v11 )
    goto LABEL_8;
  *(_QWORD *)(v11 + 16) = this;
  sub_1B64814((ServantStatusBattleListViewItem_o *)(v11 + 16), (int32_t)this, v14, v15);
  *(_QWORD *)(v11 + 24) = finishCallback;
  sub_1B64814((ServantStatusBattleListViewItem_o *)(v11 + 24), (int32_t)finishCallback, v16, v17);
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)actionVals, 0LL) )
  {
    ActionExtensions__Call(*(System_Action_o **)(v11 + 24), 0LL);
    return;
  }
  CommandBuf = QuestAfterAction__GenerateCommandBuf(actionVals, v18);
  this->fields.temporaryCommandBuf = CommandBuf;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.temporaryCommandBuf, (int32_t)CommandBuf, v20, v21);
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_36EE738 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
LABEL_8:
    sub_1B64ACC(Instance, v13);
  MissionNotifyManager__StartPause((MissionNotifyManager_o *)Instance, 0LL);
  v22 = (System_Action_o *)sub_1B64ABC(System_Action_TypeInfo);
  System_Action___ctor(
    v22,
    (Il2CppObject *)v11,
    Method_QuestAfterAction___c__DisplayClass72_0__PlaySpecifiedAction_b__0__,
    0LL);
  this->fields.endAct = v22;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.endAct, (int32_t)v22, v23, v24);
  v25 = (System_Action_o *)sub_1B64ABC(System_Action_TypeInfo);
  System_Action___ctor(
    v25,
    (Il2CppObject *)v11,
    Method_QuestAfterAction___c__DisplayClass72_0__PlaySpecifiedAction_b__1__,
    0LL);
  v27 = QuestAfterAction__WaitWhileMainStateFinished(this, v25, v26);
  UnityEngine_MonoBehaviour__StartCoroutine_69121188((UnityEngine_MonoBehaviour_o *)this, v27, 0LL);
}


void __fastcall QuestAfterAction__PlaySpecifiedActionInstantly(
        QuestAfterAction_o *this,
        QuestAfterAction_Command_array *commandArray,
        const MethodInfo *method)
{
  __int64 v5; // x1
  int32_t v6; // w2
  int32_t v7; // w3
  System_Action_o *v8; // x20
  int32_t v9; // w2
  int32_t v10; // w3
  const MethodInfo *v11; // x2

  if ( (byte_49FB428 & 1) == 0 )
  {
    sub_1B64870(&System_Action_TypeInfo, commandArray);
    sub_1B64870(&Method_QuestAfterAction__PlaySpecifiedActionInstantly_b__75_0__, v5);
    byte_49FB428 = 1;
  }
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)commandArray, 0LL) )
  {
    this->fields.temporaryCommandBuf = commandArray;
    sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.temporaryCommandBuf, (int32_t)commandArray, v6, v7);
    v8 = (System_Action_o *)sub_1B64ABC(System_Action_TypeInfo);
    System_Action___ctor(v8, (Il2CppObject *)this, Method_QuestAfterAction__PlaySpecifiedActionInstantly_b__75_0__, 0LL);
    this->fields.endAct = v8;
    sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.endAct, (int32_t)v8, v9, v10);
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

  if ( (byte_49FB42E & 1) == 0 )
  {
    sub_1B64870(&TerminalPramsManager_TypeInfo, *(_QWORD *)&cType);
    sub_1B64870(&TerminalSceneComponent_TypeInfo, v7);
    byte_49FB42E = 1;
  }
  this->fields.ActionMapTargetType = cType;
  this->fields.ActionMapTargetId = cTarget;
  QuestAfterAction__SetState(this, 0, *(const MethodInfo **)&cTarget);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_49F9B2E )
  {
    sub_1B64870(&TerminalPramsManager_TypeInfo, v8);
    byte_49F9B2E = 1;
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
  if ( !byte_49F97AD )
  {
    sub_1B64870(&TerminalSceneComponent_TypeInfo, v8);
    byte_49F97AD = 1;
  }
  v10 = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v10 = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
  }
  klass = v10->fields.rootEffectP->klass;
  if ( !klass || (v10 = *(ScrTerminalMap_o **)&klass->_2.thread_static_fields_offset) == 0LL )
    sub_1B64ACC(v10, v8);
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
  int m_CancellationTokenSource; // w8
  System_String_o *TitleInfoCtrlCallback_k__BackingField; // x0
  int32_t SpotId; // w0
  Il2CppObject *MasterData_object; // x0
  System_String_o *param; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v16; // x20

  v4 = this;
  if ( (byte_49FB41E & 1) == 0 )
  {
    sub_1B64870(&Method_DataManager_GetMasterData_QuestMaster___, com);
    sub_1B64870(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v5);
    this = (QuestAfterAction_o *)sub_1B64870(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_49FB41E = 1;
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
                sub_1B64AD4(this, com);
              TitleInfoCtrlCallback_k__BackingField = (System_String_o *)this->fields.invalidMapGimmickIdList;
              goto LABEL_29;
            }
          }
LABEL_42:
          sub_1B64ACC(this, com);
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
      if ( (unsigned int)(id - 400) > 9 )
      {
        if ( id == 500 )
        {
          v4->fields.ActionMapTargetType = 0;
          this = (QuestAfterAction_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( this )
          {
            MasterData_object = DataManager__GetMasterData_object_(
                                  (DataManager_o *)this,
                                  (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_QuestMaster___);
            param = com->fields.param;
            v16 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
            this = (QuestAfterAction_o *)System_Int32__Parse(param, 0LL);
            if ( v16 )
            {
              this = (QuestAfterAction_o *)DataMasterBase_object__object__int___GetEntity(
                                             v16,
                                             (int32_t)this,
                                             (const MethodInfo_30D6180 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
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

  if ( (byte_49FB42C & 1) == 0 )
  {
    sub_1B64870(&Method_CStateManager_QuestAfterAction__setState__, *(_QWORD *)&state);
    byte_49FB42C = 1;
  }
  fsm = (CStateManager_T__o *)this->fields.fsm;
  if ( !fsm )
    sub_1B64ACC(0LL, *(_QWORD *)&state);
  CStateManager_object___setState(
    fsm,
    state,
    (const MethodInfo_30636CC *)Method_CStateManager_QuestAfterAction__setState__);
}


void __fastcall QuestAfterAction__SkipToNextAction(QuestAfterAction_o *this, const MethodInfo *method)
{
  this->fields.isSkippedNext = 1;
}


void __fastcall QuestAfterAction__Update(QuestAfterAction_o *this, const MethodInfo *method)
{
  CStateManager_T__o *fsm; // x0

  if ( (byte_49FB424 & 1) == 0 )
  {
    sub_1B64870(&Method_CStateManager_QuestAfterAction__update__, method);
    byte_49FB424 = 1;
  }
  fsm = (CStateManager_T__o *)this->fields.fsm;
  if ( fsm )
    CStateManager_object___update(fsm, (const MethodInfo_30636A8 *)Method_CStateManager_QuestAfterAction__update__);
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
  int32_t v9; // w3
  int32_t v10; // w2
  int32_t v11; // w3

  if ( (byte_49FB42A & 1) == 0 )
  {
    sub_1B64870(&QuestAfterAction__WaitWhileMainStateFinished_d__78_TypeInfo, action);
    byte_49FB42A = 1;
  }
  v5 = sub_1B64ABC(QuestAfterAction__WaitWhileMainStateFinished_d__78_TypeInfo);
  QuestAfterAction__WaitWhileMainStateFinished_d__78___ctor(
    (QuestAfterAction__WaitWhileMainStateFinished_d__78_o *)v5,
    0,
    0LL);
  if ( !v5 )
    sub_1B64ACC(v6, v7);
  *(_QWORD *)(v5 + 32) = this;
  sub_1B64814((ServantStatusBattleListViewItem_o *)(v5 + 32), (int32_t)this, v8, v9);
  *(_QWORD *)(v5 + 40) = action;
  sub_1B64814((ServantStatusBattleListViewItem_o *)(v5 + 40), (int32_t)action, v10, v11);
  return (System_Collections_IEnumerator_o *)v5;
}


void __fastcall QuestAfterAction___PlaySpecifiedActionInstantly_b__75_0(
        QuestAfterAction_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  int32_t v5; // w2
  int32_t v6; // w3
  const MethodInfo *v7; // x2

  this->fields.endAct = 0LL;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.endAct, 0, v2, v3);
  this->fields.temporaryCommandBuf = 0LL;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.temporaryCommandBuf, 0, v5, v6);
  QuestAfterAction__SetState(this, 0, v7);
}


System_Int32_array *__fastcall QuestAfterAction__getMapGmkOffIdList(QuestAfterAction_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *invalidMapGimmickIdList; // x0

  if ( (byte_49FB41D & 1) == 0 )
  {
    sub_1B64870(&Method_System_Collections_Generic_List_int__ToArray__, method);
    byte_49FB41D = 1;
  }
  invalidMapGimmickIdList = this->fields.invalidMapGimmickIdList;
  if ( !invalidMapGimmickIdList )
    sub_1B64ACC(0LL, method);
  return System_Collections_Generic_List_int___ToArray(
           invalidMapGimmickIdList,
           (const MethodInfo_3493D10 *)Method_System_Collections_Generic_List_int__ToArray__);
}


BlankEarthQuestAfterAction_o *__fastcall QuestAfterAction__get_BlankEarthQuestAfterAction(
        QuestAfterAction_o *this,
        const MethodInfo *method)
{
  return this->fields._BlankEarthQuestAfterAction_k__BackingField;
}


bool __fastcall QuestAfterAction__get_HasFadeCommand(QuestAfterAction_o *this, const MethodInfo *method)
{
  return this->fields.hasFadeCommand;
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
  System_String_o *VoiceAssetName_39441004; // x20
  System_Collections_Generic_List_Enumerator_object__o v17; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_49FB422 & 1) == 0 )
  {
    sub_1B64870(&Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__Clear__, method);
    sub_1B64870(&Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__get_Values__, v3);
    sub_1B64870(&Method_System_Collections_Generic_List_Enumerator_QuestAfterAction_VoiceInfo__Dispose__, v4);
    sub_1B64870(&Method_System_Collections_Generic_List_Enumerator_QuestAfterAction_VoiceInfo__MoveNext__, v5);
    sub_1B64870(&Method_System_Collections_Generic_List_Enumerator_QuestAfterAction_VoiceInfo__get_Current__, v6);
    sub_1B64870(&Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo__GetEnumerator__, v7);
    sub_1B64870(&Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo___ctor__, v8);
    sub_1B64870(&System_Collections_Generic_List_QuestAfterAction_VoiceInfo__TypeInfo, v9);
    sub_1B64870(&SoundManager_TypeInfo, v10);
    byte_49FB422 = 1;
  }
  memset(&v17, 0, sizeof(v17));
  svtVoices = this->fields.svtVoices;
  if ( !svtVoices )
    goto LABEL_14;
  Values = System_Collections_Generic_Dictionary_int__object___get_Values(
             (System_Collections_Generic_Dictionary_int__object__o *)svtVoices,
             (const MethodInfo_3125A70 *)Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__get_Values__);
  v13 = (System_Collections_Generic_List_object__o *)sub_1B64ABC(System_Collections_Generic_List_QuestAfterAction_VoiceInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor_55243428(
    v13,
    (System_Collections_Generic_IEnumerable_T__o *)Values,
    (const MethodInfo_34AF2A4 *)Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo___ctor__);
  if ( !v13 )
    goto LABEL_14;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v17,
    v13,
    (const MethodInfo_34B0548 *)Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo__GetEnumerator__);
  while ( 1 )
  {
    v14 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v17,
            (const MethodInfo_322C38C *)Method_System_Collections_Generic_List_Enumerator_QuestAfterAction_VoiceInfo__MoveNext__);
    if ( !v14 )
      break;
    if ( !v17.fields._current )
      sub_1B64ACC(v14, v15);
    VoiceAssetName_39441004 = ServantVoiceEntity__getVoiceAssetName_39441004((int32_t)v17.fields._current[1].klass, 0LL);
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    SoundManager__releaseAudioAssetStorage(VoiceAssetName_39441004, 0LL);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v17,
    (const MethodInfo_322C388 *)Method_System_Collections_Generic_List_Enumerator_QuestAfterAction_VoiceInfo__Dispose__);
  svtVoices = this->fields.svtVoices;
  if ( !svtVoices )
LABEL_14:
    sub_1B64ACC(svtVoices, method);
  System_Collections_Generic_Dictionary_int__object___Clear(
    (System_Collections_Generic_Dictionary_int__object__o *)svtVoices,
    (const MethodInfo_3125DE8 *)Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__Clear__);
  this->fields.isLoadedVoice = 0;
}


void __fastcall QuestAfterAction__set_HasFadeCommand(QuestAfterAction_o *this, bool value, const MethodInfo *method)
{
  this->fields.hasFadeCommand = value;
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
  int v29; // w8
  void *v30; // x21
  int32_t result; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_49FB434 & 1) == 0 )
  {
    sub_1B64870(&Method_DataManager_GetMasterData_VoicePlayCondMaster___, svtId);
    sub_1B64870(&Method_System_Collections_Generic_List_string__RemoveAt__, v5);
    sub_1B64870(&Method_System_Collections_Generic_List_string___ctor___75676632, v6);
    sub_1B64870(&Method_System_Collections_Generic_List_string__get_Count__, v7);
    sub_1B64870(&Method_System_Collections_Generic_List_string__get_Item__, v8);
    sub_1B64870(&System_Collections_Generic_List_string__TypeInfo, v9);
    sub_1B64870(&System_Random_TypeInfo, v10);
    sub_1B64870(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_1B64870(&TerminalSceneComponent_TypeInfo, v12);
    sub_1B64870(&StringLiteral_16056/*"_"*/, v13);
    byte_49FB434 = 1;
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
    param = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( param )
    {
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)param,
                            (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_VoicePlayCondMaster___);
      v17 = (System_Collections_Generic_List_object__o *)sub_1B64ABC(System_Collections_Generic_List_string__TypeInfo);
      System_Collections_Generic_List_object____ctor_55243428(
        v17,
        v15,
        (const MethodInfo_34AF2A4 *)Method_System_Collections_Generic_List_string___ctor___75676632);
      result = 0;
      v18 = (System_Random_o *)sub_1B64ABC(System_Random_TypeInfo);
      System_Random___ctor(v18, 0LL);
      if ( v17 )
      {
        if ( v18 )
        {
          size = (unsigned int)v17->fields._size;
          while ( 1 )
          {
            v20 = ((__int64 (__fastcall *)(System_Random_o *, __int64, Il2CppMethodPointer))v18->klass->vtable._7_Next.method)(
                    v18,
                    size,
                    v18->klass->vtable._8_NextDouble.methodPtr);
            result = 0;
            param = System_Collections_Generic_List_object___get_Item(
                      v17,
                      v20,
                      (const MethodInfo_34AF6E0 *)Method_System_Collections_Generic_List_string__get_Item__);
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
              param = System_String__Concat_61394836(
                        *((System_String_o **)v22 + 5),
                        (System_String_o *)StringLiteral_16056/*"_"*/,
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
                       (const MethodInfo_34AF6E0 *)Method_System_Collections_Generic_List_string__get_Item__);
              if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
              if ( !byte_49F97AD )
              {
                sub_1B64870(&TerminalSceneComponent_TypeInfo, svtId);
                byte_49F97AD = 1;
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
              v25 = *(_QWORD *)(v24 + 456);
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
                   0LL) )
            {
              *svtId = result;
              return (System_String_o *)Item;
            }
LABEL_29:
            System_Collections_Generic_List_object___RemoveAt(
              v17,
              v20,
              (const MethodInfo_34B1224 *)Method_System_Collections_Generic_List_string__RemoveAt__);
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
    sub_1B64ACC(param, svtId);
  }
  param = this->fields.param;
  if ( !param )
    goto LABEL_41;
  param = System_String__Split((System_String_o *)param, 0x5Fu, 0, 0LL);
  if ( !param )
    goto LABEL_41;
  v29 = *((_DWORD *)param + 6);
  v30 = param;
  if ( v29 != 3 )
  {
    if ( v29 == 2 )
      return this->fields.param;
    return 0LL;
  }
  v27 = System_Int32__TryParse(*((System_String_o **)param + 4), svtId, 0LL);
  if ( *((_DWORD *)v30 + 6) < 3u )
LABEL_42:
    sub_1B64AD4(v27, v28);
  return System_String__Concat_61394836(
           *((System_String_o **)v30 + 5),
           (System_String_o *)StringLiteral_16056/*"_"*/,
           *((System_String_o **)v30 + 6),
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

  if ( (byte_49FB436 & 1) == 0 )
  {
    sub_1B64870(&Method_DataManager_GetMasterData_BgmMaster___, method);
    sub_1B64870(&Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__, v3);
    sub_1B64870(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_49FB436 = 1;
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
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_12;
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_BgmMaster___);
      if ( !Instance )
        goto LABEL_12;
      Instance = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                   (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                   &entity,
                                   result,
                                   (const MethodInfo_30D61D4 *)Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( entity )
          return (System_String_o *)entity[1].monitor;
LABEL_12:
        sub_1B64ACC(Instance, v8);
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
    sub_1B64ACC(v3, str);
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
  if ( (byte_49FB435 & 1) == 0 )
  {
    this = (QuestAfterAction_Command_o *)sub_1B64870(&StringLiteral_16056/*"_"*/, str);
    byte_49FB435 = 1;
  }
  if ( v4->fields.id == 800 )
  {
    if ( !v3 || (this = (QuestAfterAction_Command_o *)System_String__Split(v3, 0x5Fu, 0, 0LL)) == 0LL )
      sub_1B64ACC(this, str);
    param = (int)this->fields.param;
    if ( param == 2 )
      return v3;
    if ( param == 3 )
      return System_String__Concat_61394836(
               (System_String_o *)this[1].monitor,
               (System_String_o *)StringLiteral_16056/*"_"*/,
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
    sub_1B64ACC(this, method);
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
    sub_1B64ACC(screenCollider, v5);
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
  if ( !cmd )
    sub_1B64ACC(this, 0LL);
  return QuestAfterAction__IsNoWaitCommand(cmd->fields.id, 0LL);
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
    sub_1B64ACC(0LL, v7);
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
    sub_1B64ACC(0LL, v7);
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
  __int64 v8; // x8
  QuestAfterAction_StateMain_o *v9; // x20
  unsigned __int64 v10; // x22
  struct QuestAfterAction_o *v11; // x8
  int32_t v12; // w21
  Il2CppObject *MapComponent_object; // x21
  Il2CppClass *klass; // x8
  float AnimTime; // s0
  const MethodInfo *v16; // x3

  v2 = this;
  if ( (byte_49FB43B & 1) == 0 )
  {
    sub_1B64870(&Method_System_Collections_Generic_List_int__Remove__, method);
    sub_1B64870(&Method_System_Collections_Generic_List_int__ToArray__, v3);
    sub_1B64870(&UnityEngine_Object_TypeInfo, v4);
    sub_1B64870(&Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___, v5);
    this = (QuestAfterAction_StateMain_o *)sub_1B64870(&Method_SingletonTemplate_QuestTree__get_Instance__, v6);
    byte_49FB43B = 1;
  }
  that = v2->fields.that;
  if ( !that )
    goto LABEL_22;
  this = (QuestAfterAction_StateMain_o *)that->fields.invalidMapGimmickIdList;
  if ( !this )
    goto LABEL_22;
  this = (QuestAfterAction_StateMain_o *)System_Collections_Generic_List_int___ToArray(
                                           (System_Collections_Generic_List_int__o *)this,
                                           (const MethodInfo_3493D10 *)Method_System_Collections_Generic_List_int__ToArray__);
  if ( !this )
    goto LABEL_22;
  v8 = *(_QWORD *)&this->fields.IsAnimDoing;
  v9 = this;
  if ( (int)v8 >= 1 )
  {
    v10 = 0LL;
    while ( 1 )
    {
      if ( v10 >= (unsigned int)v8 )
        sub_1B64AD4(this, method);
      v11 = v2->fields.that;
      if ( !v11 )
        break;
      this = (QuestAfterAction_StateMain_o *)v11->fields.invalidMapGimmickIdList;
      if ( !this )
        break;
      v12 = *((_DWORD *)&v9->fields.waitTime + v10);
      System_Collections_Generic_List_int___Remove(
        (System_Collections_Generic_List_int__o *)this,
        v12,
        (const MethodInfo_3493754 *)Method_System_Collections_Generic_List_int__Remove__);
      this = (QuestAfterAction_StateMain_o *)v2->fields.that;
      if ( !this )
        break;
      MapComponent_object = QuestAfterAction__GetMapComponent_object_(
                              (QuestAfterAction_o *)this,
                              2,
                              v12,
                              v2,
                              (const MethodInfo_2ECAFFC *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (QuestAfterAction_StateMain_o *)UnityEngine_Object__op_Inequality(
                                               (UnityEngine_Object_o *)MapComponent_object,
                                               0LL,
                                               0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        this = (QuestAfterAction_StateMain_o *)SingletonTemplate_object___get_Instance((const MethodInfo_36EE738 *)Method_SingletonTemplate_QuestTree__get_Instance__);
        if ( !MapComponent_object || !this )
          break;
        this = (QuestAfterAction_StateMain_o *)QuestTree__CheckMapGimmickCond_33829484(
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
          MapGimmickComponent__SetDispAnim_33510716((MapGimmickComponent_o *)MapComponent_object, 1, AnimTime, 1, v16);
        }
      }
      LODWORD(v8) = *(_DWORD *)&v9->fields.IsAnimDoing;
      if ( (__int64)++v10 >= (int)v8 )
        return;
    }
LABEL_22:
    sub_1B64ACC(this, method);
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
  __int64 v98; // x21
  __int64 updated; // x0
  const MethodInfo *v100; // x1
  int32_t v101; // w2
  int32_t v102; // w3
  QuestAfterAction_o **v103; // x20
  int32_t v104; // w2
  int32_t v105; // w3
  QuestAfterAction_StateMain_c *klass; // x8
  __int64 v107; // x22
  QuestAfterAction_Command_o *v108; // x22
  QuestAfterAction_o *v109; // x23
  BlankEarthQuestAfterAction_o *BlankEarthQuestAfterAction_k__BackingField; // x24
  System_Action_o *v111; // x25
  int id; // w8
  float v113; // s0
  __int64 v114; // x1
  float DEFAULT_FADE_TIME; // s8
  AvalonSceneManager_c *v116; // x0
  TerminalSceneComponent_c *v117; // x0
  TerminalSceneComponent_o *mInstance; // x19
  System_Action_o *v119; // x20
  TerminalSceneComponent_o *v120; // x0
  float v121; // s0
  System_Action_o *v122; // x1
  System_String_o *v123; // x19
  System_String_o *v124; // x20
  System_String_o *v125; // x20
  Il2CppObject *Instance; // x22
  System_Action_o *v127; // x23
  __int64 v128; // x8
  __int64 v129; // x24
  float v130; // s0
  System_String_o *param; // x21
  _QWORD *v132; // x0
  System_Reflection_MethodBase_o *v133; // x0
  __int64 v134; // x20
  int32_t v135; // w2
  int32_t v136; // w3
  __int64 v137; // x23
  __int64 v138; // x8
  __int64 v139; // x22
  int32_t v140; // w21
  bool v141; // w24
  bool v142; // w25
  __int64 v143; // x23
  int32_t v144; // w21
  int32_t v145; // w22
  int32_t v146; // w23
  __int64 v147; // x20
  int32_t v148; // w2
  int32_t v149; // w3
  __int64 v150; // x8
  QuestAfterAction_o *v151; // x21
  Il2CppObject *v152; // x0
  int32_t v153; // w2
  int32_t v154; // w3
  UnityEngine_Object_o *v155; // x19
  SrcSpotBasePrefab_o *v156; // x19
  System_Action_o *v157; // x21
  int32_t v158; // w1
  __int64 v159; // x23
  float v160; // s0
  float v161; // s9
  float v162; // s0
  float v163; // s10
  float v164; // s0
  float v165; // s11
  float v166; // s0
  float v167; // s8
  int32_t v168; // w19
  __int64 v169; // x8
  float v170; // s8
  const MethodInfo_35D42EC *v171; // x2
  float v172; // s0
  float v173; // s1
  float v174; // s2
  float v175; // s10
  float v176; // s9
  float v177; // s11
  MapCamera_o *mMapCamera; // x20
  System_Action_o *v179; // x0
  __int64 *v180; // x8
  System_Action_o *v181; // x22
  MapCamera_o *v182; // x0
  float v183; // s0
  float v184; // s1
  float v185; // s2
  float v186; // s3
  int32_t v187; // w1
  System_Action_o *v188; // x2
  __int64 v189; // x20
  int32_t v190; // w2
  int32_t v191; // w3
  __int64 v192; // x8
  QuestAfterAction_o *v193; // x21
  Il2CppObject *v194; // x0
  int32_t v195; // w2
  int32_t v196; // w3
  UnityEngine_Object_o *v197; // x19
  ModelLineComponent_o *v198; // x19
  System_Action_o *v199; // x21
  const MethodInfo *v200; // x3
  int32_t v201; // w1
  __int64 v202; // x8
  const MethodInfo *v203; // x2
  QuestAfterAction_o *v204; // x8
  QuestAfterAction_TitleInfoControlCallback_o *TitleInfoCtrlCallback_k__BackingField; // x21
  int32_t v206; // w20
  Il2CppObject *v207; // x22
  const MethodInfo *v208; // x2
  __int64 v209; // x21
  __int64 v210; // x1
  TerminalPramsManager_c *v211; // x0
  int32_t v212; // w20
  clsQuestCheck_o *v213; // x19
  QuestAfterAction_StateMain___c_c *v214; // x8
  System_Action_o *_9__16_33; // x20
  Il2CppObject *v216; // x21
  struct QuestAfterAction_StateMain___c_StaticFields *v217; // x0
  int32_t v218; // w2
  int32_t v219; // w3
  TerminalSceneComponent_c *v220; // x0
  TerminalSceneComponent_o *v221; // x21
  __int64 v222; // x8
  PlayMakerFSM_o *v223; // x20
  System_String_o *ActiveStateName; // x0
  __int64 v225; // x8
  __int64 v226; // x8
  QuestBoardListViewManager_o *v227; // x21
  System_Action_o *v228; // x22
  Il2CppObject *v229; // x23
  struct QuestAfterAction_StateMain___c_StaticFields *static_fields; // x0
  int32_t v231; // w2
  int32_t v232; // w3
  TerminalSceneComponent_c *v233; // x0
  __int64 v234; // x22
  int v235; // w23
  float v236; // s8
  int32_t v237; // w21
  __int64 v238; // x21
  int32_t v239; // w20
  int32_t v240; // w22
  QuestAfterAction_o *v241; // x8
  __int64 v242; // x8
  __int64 v243; // x8
  __int64 v244; // x8
  System_String_o *v245; // x20
  System_String_o *v246; // x21
  SeManager_c *v247; // x0
  float DEFAULT_VOLUME; // s8
  TerminalPramsManager_c *v249; // x0
  __int64 v250; // x8
  __int64 v251; // x1
  const MethodInfo *v252; // x2
  TerminalPramsManager_c *v253; // x0
  System_String_o *v254; // x23
  int32_t v255; // w2
  int32_t v256; // w3
  System_String_array *v257; // x20
  int32_t v258; // w1
  int v259; // w8
  System_String_o *v260; // x19
  System_String_o *v261; // x20
  System_String_o *v262; // x19
  System_String_o *v263; // x20
  System_String_o *v264; // x20
  Il2CppObject *v265; // x22
  System_Action_o *v266; // x23
  System_String_o *v267; // x23
  int32_t v268; // w2
  int32_t v269; // w3
  System_String_array *v270; // x20
  int32_t v271; // w1
  int v272; // w8
  System_String_o *v273; // x19
  System_String_o *v274; // x20
  System_String_o *v275; // x20
  Il2CppObject *v276; // x22
  System_Action_o *v277; // x23
  Il2CppObject *MapComponent_object; // x22
  Il2CppObject *v279; // x20
  __int64 v280; // x8
  ScrTerminalMap_o *v281; // x23
  __int64 v282; // x8
  ScrTerminalMap_o *v283; // x20
  UnityEngine_GameObject_o *gameObject; // x22
  System_Action_o *v285; // x23
  SceneJumpInfo_o *v286; // x21
  __int64 v287; // x8
  __int64 v288; // x23
  float v289; // s0
  __int64 v290; // x8
  __int64 v291; // x24
  float v292; // s0
  __int64 v293; // x23
  float v294; // s0
  __int64 v295; // x8
  ScrTerminalMap_o *v296; // x24
  float v297; // s0
  float v298; // s9
  float v299; // s0
  const MethodInfo_35D42EC *v300; // x2
  float v301; // s0
  float v302; // s1
  float v303; // s2
  __int64 v304; // x22
  int32_t v305; // w0
  int32_t v306; // w20
  float v307; // s8
  int32_t v308; // w19
  __int64 v309; // x20
  int32_t v310; // w2
  int32_t v311; // w3
  __int64 v312; // x8
  QuestAfterAction_o *v313; // x21
  Il2CppObject *v314; // x0
  int32_t v315; // w2
  int32_t v316; // w3
  UnityEngine_Object_o *v317; // x19
  __int64 v318; // x23
  int32_t v319; // w2
  int32_t v320; // w3
  __int64 v321; // x20
  QuestAfterAction_o *v322; // x21
  Il2CppObject *v323; // x0
  __int64 *v324; // x19
  int32_t v325; // w2
  int32_t v326; // w3
  UnityEngine_Object_o *v327; // x21
  SrcSpotBasePrefab_o *v328; // x21
  System_Action_o *v329; // x22
  int32_t v330; // w2
  int32_t v331; // w3
  __int64 v332; // x1
  ServantStatusBattleListViewItem_o *v333; // x0
  __int64 v334; // x22
  QuestAfterAction_o *v335; // x21
  Il2CppObject *v336; // x21
  System_Action_o *v337; // x22
  QuestAfterAction_o *v338; // x21
  Il2CppObject *v339; // x21
  _DWORD *monitor; // x8
  SrcSpotBasePrefab_o *v341; // x0
  int32_t v342; // w1
  QuestAfterAction_o *v343; // x21
  Il2CppObject *v344; // x21
  _DWORD *v345; // x8
  QuestAfterAction_o *v346; // x21
  _DWORD *v347; // x8
  __int64 v348; // x21
  QuestAfterAction_o *v349; // x22
  Il2CppObject *v350; // x22
  __int64 v351; // x1
  int32_t v352; // w21
  TerminalPramsManager_c *v353; // x0
  QuestAfterAction_o *v354; // x20
  Il2CppObject *v355; // x20
  __int64 v356; // x1
  TerminalPramsManager_c *v357; // x0
  MapCamera_o *v358; // x20
  float v359; // s0
  System_Action_o *v360; // x0
  __int64 *v361; // x8
  System_Action_o *v362; // x22
  MapCamera_o *v363; // x0
  float v364; // s0
  int32_t v365; // w4
  System_Action_o *v366; // x5
  int v367; // w23
  __int64 v368; // x22
  float v369; // s0
  float v370; // s8
  float v371; // s0
  MapCamera_o *v372; // x19
  float v373; // s0
  float v374; // s9
  int32_t v375; // w20
  __int64 v376; // x20
  int32_t v377; // w2
  int32_t v378; // w3
  __int64 v379; // x8
  QuestAfterAction_o *v380; // x21
  Il2CppObject *v381; // x0
  int32_t v382; // w2
  int32_t v383; // w3
  UnityEngine_Object_o *v384; // x19
  __int64 v385; // x20
  int32_t v386; // w2
  int32_t v387; // w3
  __int64 v388; // x8
  QuestAfterAction_o *v389; // x21
  Il2CppObject *v390; // x0
  int32_t v391; // w2
  int32_t v392; // w3
  UnityEngine_Object_o *v393; // x19
  _BOOL4 IsMapModel; // w23
  QuestAfterAction_o *v395; // x21
  UnityEngine_Object_o *v396; // x21
  const MethodInfo *v397; // x2
  _DWORD *v398; // x8
  _BOOL4 v399; // w23
  QuestAfterAction_o *v400; // x21
  UnityEngine_Object_o *v401; // x21
  const MethodInfo *v402; // x2
  const MethodInfo *v403; // x2
  _DWORD *v404; // x8
  _BOOL4 v405; // w23
  QuestAfterAction_o *v406; // x21
  UnityEngine_Object_o *v407; // x21
  const MethodInfo *v408; // x2
  const MethodInfo *v409; // x2
  System_Action_o *v410; // x20
  const MethodInfo *v411; // x2
  System_String_o *v412; // x20
  int32_t v413; // w2
  int32_t v414; // w3
  __int64 v415; // x23
  __int64 v416; // x8
  __int64 v417; // x22
  int32_t v418; // w21
  bool v419; // w24
  bool v420; // w25
  __int64 v421; // x8
  __int64 v422; // x22
  int32_t v423; // w21
  bool v424; // w22
  __int64 v425; // x8
  __int64 v426; // x22
  int32_t v427; // w21
  bool v428; // w22
  __int64 v429; // x22
  float v430; // s0
  QuestAfterAction_o *v431; // x20
  float v432; // s8
  Il2CppObject *v433; // x19
  __int64 v434; // x8
  ScrTerminalMap_o *v435; // x20
  float v436; // s0
  float v437; // s9
  float v438; // s0
  float v439; // s0
  float v440; // s1
  float v441; // s2
  float v442; // s9
  float v443; // s10
  float v444; // s11
  int32_t v445; // w20
  System_Action_o *v446; // x22
  const MethodInfo *v447; // x3
  __int64 v448; // x20
  int32_t v449; // w2
  int32_t v450; // w3
  __int64 v451; // x8
  QuestAfterAction_o *v452; // x21
  Il2CppObject *v453; // x0
  int32_t v454; // w2
  int32_t v455; // w3
  UnityEngine_Object_o *v456; // x19
  MapGimmickComponent_o *v457; // x19
  System_Action_o *v458; // x21
  const MethodInfo *v459; // x3
  TerminalSceneComponent_o *v460; // x19
  __int64 v461; // x20
  int32_t v462; // w2
  int32_t v463; // w3
  System_String_array *v464; // x0
  __int64 *v465; // x21
  int32_t v466; // w2
  int32_t v467; // w3
  __int64 v468; // x8
  __int64 v469; // x9
  QuestAfterAction_o *v470; // x21
  Il2CppObject *v471; // x0
  int32_t v472; // w2
  int32_t v473; // w3
  UnityEngine_Object_o *v474; // x19
  MapGimmickComponent_o *v475; // x19
  System_Action_o *v476; // x0
  __int64 *v477; // x8
  System_Action_o *v478; // x21
  __int64 v479; // x21
  QuestAfterAction_o *v480; // x20
  Il2CppObject *v481; // x20
  UIWidget_o *v482; // x20
  int32_t v483; // w2
  int32_t v484; // w3
  __int64 v485; // x8
  QuestAfterAction_o *v486; // x21
  Il2CppObject *v487; // x0
  __int64 v488; // x19
  int32_t v489; // w2
  int32_t v490; // w3
  UnityEngine_Object_o *v491; // x21
  bool v492; // w0
  bool v493; // w22
  const MethodInfo *v494; // x3
  int32_t v495; // w1
  __int64 v496; // x8
  __int64 v497; // x22
  int32_t v498; // w21
  bool v499; // w22
  Il2CppObject *v500; // x22
  System_Action_o *v501; // x23
  float v502; // s0
  int v503; // w23
  float v504; // s0
  float v505; // s0
  QuestAfterAction_o *v506; // x25
  const MethodInfo *v507; // x4
  UnityEngine_Object_o *MapGameObject; // x25
  float x; // s9
  float y; // s8
  float z; // s10
  __int64 v512; // x8
  const MethodInfo_35D42EC *v513; // x2
  System_String_o *v514; // x19
  QuestAfterAction_o *v515; // x24
  const MethodInfo *v516; // x4
  UnityEngine_Object_o *v517; // x24
  float v518; // s8
  float v519; // s9
  float v520; // s10
  __int64 v521; // x8
  float v522; // s0
  float v523; // s1
  float v524; // s2
  QuestAfterAction_o *v525; // x25
  const MethodInfo *v526; // x4
  UnityEngine_Object_o *v527; // x25
  const MethodInfo_35D42EC *v528; // x2
  __int64 v529; // x8
  MapCamera_o *v530; // x19
  System_Action_o *v531; // x0
  __int64 *v532; // x8
  __int64 v533; // x20
  int32_t v534; // w2
  int32_t v535; // w3
  __int64 v536; // x8
  QuestAfterAction_o *v537; // x21
  Il2CppObject *v538; // x0
  int32_t v539; // w2
  int32_t v540; // w3
  UnityEngine_Object_o *v541; // x19
  srcLineSprite_o *v542; // x19
  System_Action_o *v543; // x21
  int32_t v544; // w1
  __int64 v545; // x20
  int32_t v546; // w2
  int32_t v547; // w3
  __int64 v548; // x8
  QuestAfterAction_o *v549; // x21
  Il2CppObject *v550; // x0
  int32_t v551; // w2
  int32_t v552; // w3
  UnityEngine_Object_o *v553; // x19
  __int64 v554; // x20
  int32_t v555; // w2
  int32_t v556; // w3
  __int64 v557; // x8
  QuestAfterAction_o *v558; // x21
  Il2CppObject *v559; // x0
  int32_t v560; // w2
  int32_t v561; // w3
  UnityEngine_Object_o *v562; // x19
  UnityEngine_Object_o *v563; // x21
  UnityEngine_Object_o *v564; // x21
  int v565; // w9
  UnityEngine_Object_o *v566; // x21
  Il2CppObject *v567; // x0
  int32_t v568; // w2
  int32_t v569; // w3
  UnityEngine_Object_o *v570; // x22
  MapGimmickComponent_o *v571; // x21
  System_Action_o *v572; // x0
  System_Action_o *v573; // x22
  Il2CppObject *v574; // x0
  int32_t v575; // w2
  int32_t v576; // w3
  UnityEngine_Object_o *v577; // x22
  System_Action_o *v578; // x0
  MapGimmickComponent_o *v579; // x0
  System_Action_o *v580; // x2
  Il2CppObject *v581; // x21
  const MethodInfo *v582; // x3
  Il2CppObject *v583; // x21
  const MethodInfo *v584; // x3
  Il2CppClass *v585; // x8
  Il2CppObject *v586; // x21
  float AnimTime; // s0
  const MethodInfo *v588; // x3
  Il2CppClass *v589; // x8
  QuestAfterAction_StateMain_c *v590; // x8
  int v591; // w0
  System_Action_o *v592; // x22
  float v593; // s8
  float v594; // s10
  float v595; // s9
  const MethodInfo_35D42EC *v596; // x2
  System_String_o *v597; // x19
  __int64 v598; // x8
  ScrTerminalMap_o *v599; // x22
  System_Action_o *v600; // x23
  const MethodInfo *v601; // x3
  int32_t v602; // w1
  __int64 v603; // x8
  System_Action_o *v604; // x20
  MapCamera_o *v605; // x19
  float v606; // s0
  System_Action_o *v607; // x0
  __int64 *v608; // x8
  MapCamera_o *v609; // x19
  float v610; // s0
  System_Action_o *v611; // x20
  MapCamera_o *v612; // x19
  float v613; // s0
  float v614; // s0
  int32_t onClickOkSeKind; // [xsp+10h] [xbp-E0h]
  int32_t easeType; // [xsp+38h] [xbp-B8h]
  float sec; // [xsp+3Ch] [xbp-B4h]
  float seca; // [xsp+3Ch] [xbp-B4h]
  System_Nullable_float__o size; // [xsp+40h] [xbp-B0h] BYREF
  System_Nullable_Vector3__o v620; // [xsp+48h] [xbp-A8h] BYREF
  Il2CppObject *value; // [xsp+58h] [xbp-98h] BYREF
  Il2CppObject *entity; // [xsp+60h] [xbp-90h] BYREF
  UnityEngine_Color_o color; // [xsp+68h] [xbp-88h] BYREF
  bool isQuickUpdate; // [xsp+7Ch] [xbp-74h] BYREF
  System_Nullable_float__o p_size; // 0:x0.8
  System_Nullable_float__o v626; // 0:x0.8
  System_Nullable_float__o v627; // 0:x0.8
  System_Nullable_float__o v628; // 0:x0.8
  System_Nullable_float__o v629; // 0:x0.8
  System_Nullable_float__o v630; // 0:x3.8
  System_Nullable_Vector3__o v631; // 0:x0.16
  System_Nullable_Vector3__o v632; // 0:x0.16
  System_Nullable_Vector3__o v633; // 0:x0.16
  System_Nullable_Vector3__o v634; // 0:x0.16
  System_Nullable_Vector3__o v635; // 0:x0.16
  System_Nullable_Vector3__o v636; // 0:x1.16
  UnityEngine_Vector3_o v637; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v638; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v640; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v641; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o Position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v643; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v644; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v645; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v646; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v647; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v648; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v649; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_49FB439 & 1) == 0 )
  {
    sub_1B64870(&System_Action_TypeInfo, that);
    sub_1B64870(&AvalonSceneManager_TypeInfo, v5);
    sub_1B64870(&Method_DataManager_GetMasterData_QuestMaster___, v6);
    sub_1B64870(&Method_DataManager_GetMaster_QuestMaster___, v7);
    sub_1B64870(&DataManager_TypeInfo, v8);
    sub_1B64870(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v9);
    sub_1B64870(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__, v10);
    sub_1B64870(&Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__TryGetValue__, v11);
    sub_1B64870(&FSUtility_TypeInfo, v12);
    sub_1B64870(&Method_UnityEngine_GameObject_GetComponentInChildren_UISprite___, v13);
    sub_1B64870(&Method_UnityEngine_GameObject_GetComponent_ModelLineComponent___, v14);
    sub_1B64870(&LocalizationManager_TypeInfo, v15);
    sub_1B64870(&Method_System_Nullable_Vector3___ctor__, v16);
    sub_1B64870(&Method_System_Nullable_float___ctor__, v17);
    sub_1B64870(&UnityEngine_Object_TypeInfo, v18);
    sub_1B64870(&Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___, v19);
    sub_1B64870(&Method_QuestAfterAction_GetMapComponent_ModelLineComponent___, v20);
    sub_1B64870(&Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___, v21);
    sub_1B64870(&Method_QuestAfterAction_GetMapComponent_srcLineSprite___, v22);
    sub_1B64870(&SceneJumpInfo_TypeInfo, v23);
    sub_1B64870(&SeManager_TypeInfo, v24);
    sub_1B64870(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v25);
    sub_1B64870(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v26);
    sub_1B64870(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v27);
    sub_1B64870(&Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__, v28);
    sub_1B64870(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v29);
    sub_1B64870(&Method_SingletonTemplate_QuestTree__get_Instance__, v30);
    sub_1B64870(&SoundManager_TypeInfo, v31);
    sub_1B64870(&Method_QuestAfterAction_StateMain_UpdateAnim__, v32);
    sub_1B64870(&string___TypeInfo, v33);
    sub_1B64870(&TerminalPramsManager_TypeInfo, v34);
    sub_1B64870(&TerminalSceneComponent_TypeInfo, v35);
    sub_1B64870(&Method_QuestAfterAction_StateMain___c__UpdateAnim_b__16_31__, v36);
    sub_1B64870(&Method_QuestAfterAction_StateMain___c__UpdateAnim_b__16_33__, v37);
    sub_1B64870(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__10__, v38);
    sub_1B64870(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__11__, v39);
    sub_1B64870(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__12__, v40);
    sub_1B64870(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__13__, v41);
    sub_1B64870(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__14__, v42);
    sub_1B64870(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__15__, v43);
    sub_1B64870(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__16__, v44);
    sub_1B64870(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__17__, v45);
    sub_1B64870(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__18__, v46);
    sub_1B64870(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__19__, v47);
    sub_1B64870(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__20__, v48);
    sub_1B64870(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__25__, v49);
    sub_1B64870(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__32__, v50);
    sub_1B64870(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__36__, v51);
    sub_1B64870(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__37__, v52);
    sub_1B64870(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__38__, v53);
    sub_1B64870(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__39__, v54);
    sub_1B64870(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__40__, v55);
    sub_1B64870(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__9__, v56);
    sub_1B64870(&QuestAfterAction_StateMain___c__DisplayClass16_0_TypeInfo, v57);
    sub_1B64870(&Method_QuestAfterAction_StateMain___c__DisplayClass16_10__UpdateAnim_b__21__, v58);
    sub_1B64870(&Method_QuestAfterAction_StateMain___c__DisplayClass16_10__UpdateAnim_b__22__, v59);
    sub_1B64870(&QuestAfterAction_StateMain___c__DisplayClass16_10_TypeInfo, v60);
    sub_1B64870(&Method_QuestAfterAction_StateMain___c__DisplayClass16_11__UpdateAnim_b__23__, v61);
    sub_1B64870(&Method_QuestAfterAction_StateMain___c__DisplayClass16_11__UpdateAnim_b__24__, v62);
    sub_1B64870(&QuestAfterAction_StateMain___c__DisplayClass16_11_TypeInfo, v63);
    sub_1B64870(&Method_QuestAfterAction_StateMain___c__DisplayClass16_12__UpdateAnim_b__26__, v64);
    sub_1B64870(&QuestAfterAction_StateMain___c__DisplayClass16_12_TypeInfo, v65);
    sub_1B64870(&Method_QuestAfterAction_StateMain___c__DisplayClass16_13__UpdateAnim_b__27__, v66);
    sub_1B64870(&QuestAfterAction_StateMain___c__DisplayClass16_13_TypeInfo, v67);
    sub_1B64870(&Method_QuestAfterAction_StateMain___c__DisplayClass16_15__UpdateAnim_b__29__, v68);
    sub_1B64870(&Method_QuestAfterAction_StateMain___c__DisplayClass16_15__UpdateAnim_b__30__, v69);
    sub_1B64870(&QuestAfterAction_StateMain___c__DisplayClass16_15_TypeInfo, v70);
    sub_1B64870(&Method_QuestAfterAction_StateMain___c__DisplayClass16_1__UpdateAnim_b__0__, v71);
    sub_1B64870(&QuestAfterAction_StateMain___c__DisplayClass16_1_TypeInfo, v72);
    sub_1B64870(&Method_QuestAfterAction_StateMain___c__DisplayClass16_2__UpdateAnim_b__1__, v73);
    sub_1B64870(&QuestAfterAction_StateMain___c__DisplayClass16_2_TypeInfo, v74);
    sub_1B64870(&Method_QuestAfterAction_StateMain___c__DisplayClass16_3__UpdateAnim_b__2__, v75);
    sub_1B64870(&QuestAfterAction_StateMain___c__DisplayClass16_3_TypeInfo, v76);
    sub_1B64870(&Method_QuestAfterAction_StateMain___c__DisplayClass16_4__UpdateAnim_b__3__, v77);
    sub_1B64870(&QuestAfterAction_StateMain___c__DisplayClass16_4_TypeInfo, v78);
    sub_1B64870(&Method_QuestAfterAction_StateMain___c__DisplayClass16_5__UpdateAnim_b__4__, v79);
    sub_1B64870(&QuestAfterAction_StateMain___c__DisplayClass16_5_TypeInfo, v80);
    sub_1B64870(&Method_QuestAfterAction_StateMain___c__DisplayClass16_6__UpdateAnim_b__5__, v81);
    sub_1B64870(&QuestAfterAction_StateMain___c__DisplayClass16_6_TypeInfo, v82);
    sub_1B64870(&Method_QuestAfterAction_StateMain___c__DisplayClass16_7__UpdateAnim_b__6__, v83);
    sub_1B64870(&QuestAfterAction_StateMain___c__DisplayClass16_7_TypeInfo, v84);
    sub_1B64870(&Method_QuestAfterAction_StateMain___c__DisplayClass16_8__UpdateAnim_b__7__, v85);
    sub_1B64870(&QuestAfterAction_StateMain___c__DisplayClass16_8_TypeInfo, v86);
    sub_1B64870(&Method_QuestAfterAction_StateMain___c__DisplayClass16_9__UpdateAnim_b__8__, v87);
    sub_1B64870(&QuestAfterAction_StateMain___c__DisplayClass16_9_TypeInfo, v88);
    sub_1B64870(&QuestAfterAction_StateMain___c_TypeInfo, v89);
    sub_1B64870(&StringLiteral_89/*"\r\n"*/, v90);
    sub_1B64870(&StringLiteral_1479/*"30101"*/, v91);
    sub_1B64870(&StringLiteral_10772/*"QUEST_AFTER_ACTION_MESSAGE_"*/, v92);
    sub_1B64870(&StringLiteral_1480/*"30102"*/, v93);
    sub_1B64870(&StringLiteral_1404/*"10703"*/, v94);
    sub_1B64870(&StringLiteral_3384/*"CAPTER WAIT"*/, v95);
    sub_1B64870(&StringLiteral_1/*""*/, v96);
    sub_1B64870(&StringLiteral_19738/*"gevINFOBAR_BACK"*/, v97);
    byte_49FB439 = 1;
  }
  isQuickUpdate = 0;
  *(_QWORD *)&color.fields.r = 0LL;
  *(_QWORD *)&color.fields.b = 0LL;
  value = 0LL;
  entity = 0LL;
  v98 = sub_1B64ABC(QuestAfterAction_StateMain___c__DisplayClass16_0_TypeInfo);
  QuestAfterAction_StateMain___c__DisplayClass16_0___ctor(
    (QuestAfterAction_StateMain___c__DisplayClass16_0_o *)v98,
    0LL);
  if ( !v98 )
    goto LABEL_863;
  *(_QWORD *)(v98 + 16) = this;
  sub_1B64814((ServantStatusBattleListViewItem_o *)(v98 + 16), (int32_t)this, v101, v102);
  *(_QWORD *)(v98 + 24) = that;
  v103 = (QuestAfterAction_o **)(v98 + 24);
  sub_1B64814((ServantStatusBattleListViewItem_o *)(v98 + 24), (int32_t)that, v104, v105);
  if ( this->fields.IsAnimDoing )
    return;
  updated = ((__int64 (__fastcall *)(QuestAfterAction_StateMain_o *, Il2CppMethodPointer))this->klass->vtable._10_get_CommandBuf.method)(
              this,
              this->klass->vtable._11_get_CommandIndex.methodPtr);
  if ( !updated )
    return;
  if ( !*v103 )
    goto LABEL_863;
  if ( (*v103)->fields.isSkippedNext )
  {
    updated = ((__int64 (__fastcall *)(QuestAfterAction_StateMain_o *, Il2CppMethodPointer))this->klass->vtable._14_EndAnim.method)(
                this,
                this->klass->vtable._15_onEnd.methodPtr);
    if ( *v103 )
    {
      (*v103)->fields.isSkippedNext = 0;
      return;
    }
LABEL_863:
    sub_1B64ACC(updated, v100);
  }
  klass = this->klass;
  this->fields.IsAnimDoing = 1;
  v107 = ((__int64 (__fastcall *)(QuestAfterAction_StateMain_o *, Il2CppMethodPointer))klass->vtable._10_get_CommandBuf.method)(
           this,
           klass->vtable._11_get_CommandIndex.methodPtr);
  updated = ((__int64 (__fastcall *)(QuestAfterAction_StateMain_o *, Il2CppMethodPointer))this->klass->vtable._11_get_CommandIndex.method)(
              this,
              this->klass->vtable._12_set_CommandIndex.methodPtr);
  if ( !v107 )
    goto LABEL_863;
  if ( (unsigned int)updated >= *(_DWORD *)(v107 + 24) )
    goto LABEL_864;
  v108 = *(QuestAfterAction_Command_o **)(v107 + 8LL * (int)updated + 32);
  updated = ((__int64 (__fastcall *)(QuestAfterAction_StateMain_o *, QuestAfterAction_Command_o *, Il2CppMethodPointer))this->klass->vtable._9_IsUsableCommand.method)(
              this,
              v108,
              this->klass->vtable._10_get_CommandBuf.methodPtr);
  if ( (updated & 1) == 0 )
    goto LABEL_330;
  v109 = *v103;
  if ( !*v103 )
    goto LABEL_863;
  BlankEarthQuestAfterAction_k__BackingField = v109->fields._BlankEarthQuestAfterAction_k__BackingField;
  v111 = (System_Action_o *)sub_1B64ABC(System_Action_TypeInfo);
  System_Action___ctor(v111, (Il2CppObject *)this, (intptr_t)this->klass->vtable._15_onEnd.methodPtr, 0LL);
  if ( !BlankEarthQuestAfterAction_k__BackingField )
    goto LABEL_863;
  updated = BlankEarthQuestAfterAction__UpdateAnim(
              BlankEarthQuestAfterAction_k__BackingField,
              v109,
              v108,
              v111,
              &isQuickUpdate,
              0LL);
  if ( (updated & 1) != 0 )
  {
    if ( isQuickUpdate )
    {
LABEL_18:
      ((void (__fastcall *)(QuestAfterAction_StateMain_o *, Il2CppMethodPointer))this->klass->vtable._14_EndAnim.method)(
        this,
        this->klass->vtable._15_onEnd.methodPtr);
LABEL_19:
      ((void (__fastcall *)(QuestAfterAction_StateMain_o *, QuestAfterAction_o *, Il2CppMethodPointer))this->klass->vtable._13_UpdateAnim.method)(
        this,
        *v103,
        this->klass->vtable._14_EndAnim.methodPtr);
      return;
    }
    return;
  }
  if ( !v108 )
    goto LABEL_863;
  id = v108->fields.id;
  if ( id <= 520 )
  {
    if ( id > 350 )
    {
      if ( id > 500 )
      {
        if ( id == 501 )
        {
          if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          if ( !byte_49F97AD )
          {
            sub_1B64870(&TerminalSceneComponent_TypeInfo, v100);
            byte_49F97AD = 1;
          }
          updated = (__int64)TerminalSceneComponent_TypeInfo;
          if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            updated = (__int64)TerminalSceneComponent_TypeInfo;
          }
          v222 = **(_QWORD **)(updated + 184);
          if ( !v222 )
            goto LABEL_863;
          updated = *(_QWORD *)(v222 + 256);
          if ( !updated )
            goto LABEL_863;
          updated = (__int64)ScrTerminalListTop__mfGetMyFsmP((ScrTerminalListTop_o *)updated, 0LL);
          if ( !updated )
            goto LABEL_863;
          v223 = (PlayMakerFSM_o *)updated;
          ActiveStateName = PlayMakerFSM__get_ActiveStateName((PlayMakerFSM_o *)updated, 0LL);
          if ( System_String__op_Equality(ActiveStateName, (System_String_o *)StringLiteral_3384/*"CAPTER WAIT"*/, 0LL) )
          {
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            if ( !byte_49F97AD )
            {
              sub_1B64870(&TerminalSceneComponent_TypeInfo, v100);
              byte_49F97AD = 1;
            }
            updated = (__int64)TerminalSceneComponent_TypeInfo;
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
              updated = (__int64)TerminalSceneComponent_TypeInfo;
            }
            v225 = **(_QWORD **)(updated + 184);
            if ( !v225 )
              goto LABEL_863;
            v226 = *(_QWORD *)(v225 + 256);
            if ( !v226 )
              goto LABEL_863;
            v227 = *(QuestBoardListViewManager_o **)(v226 + 296);
            updated = (__int64)QuestAfterAction_StateMain___c_TypeInfo;
            if ( !QuestAfterAction_StateMain___c_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(QuestAfterAction_StateMain___c_TypeInfo);
              updated = (__int64)QuestAfterAction_StateMain___c_TypeInfo;
            }
            v228 = *(System_Action_o **)(*(_QWORD *)(updated + 184) + 8LL);
            if ( !v228 )
            {
              if ( !*(_DWORD *)(updated + 224) )
              {
                j_il2cpp_runtime_class_init_0(updated);
                updated = (__int64)QuestAfterAction_StateMain___c_TypeInfo;
              }
              v229 = **(Il2CppObject ***)(updated + 184);
              v228 = (System_Action_o *)sub_1B64ABC(System_Action_TypeInfo);
              System_Action___ctor(v228, v229, Method_QuestAfterAction_StateMain___c__UpdateAnim_b__16_31__, 0LL);
              static_fields = QuestAfterAction_StateMain___c_TypeInfo->static_fields;
              static_fields->__9__16_31 = v228;
              sub_1B64814((ServantStatusBattleListViewItem_o *)&static_fields->__9__16_31, (int32_t)v228, v231, v232);
            }
            if ( !v227 )
              goto LABEL_863;
            QuestBoardListViewManager__SetMode(v227, 4, v228, 0, 0, 0LL);
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            if ( !byte_49F97AD )
            {
              sub_1B64870(&TerminalSceneComponent_TypeInfo, v100);
              byte_49F97AD = 1;
            }
            v233 = TerminalSceneComponent_TypeInfo;
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
              v233 = TerminalSceneComponent_TypeInfo;
            }
            updated = (__int64)v233->static_fields->mInstance;
            if ( !updated )
              goto LABEL_863;
            TerminalSceneComponent__CallQuestInformationClose((TerminalSceneComponent_o *)updated, 0LL);
            PlayMakerFSM__SendEvent(v223, (System_String_o *)StringLiteral_19738/*"gevINFOBAR_BACK"*/, 0LL);
          }
          goto LABEL_330;
        }
        if ( id != 510 )
        {
          if ( id == 520 )
          {
            DEFAULT_FADE_TIME = System_Single__Parse(v108->fields.param, 0LL);
            if ( DEFAULT_FADE_TIME <= 0.0 )
            {
              v116 = AvalonSceneManager_TypeInfo;
              if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
                v116 = AvalonSceneManager_TypeInfo;
              }
              DEFAULT_FADE_TIME = v116->static_fields->DEFAULT_FADE_TIME;
            }
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            if ( !byte_49F97AD )
            {
              sub_1B64870(&TerminalSceneComponent_TypeInfo, v114);
              byte_49F97AD = 1;
            }
            v117 = TerminalSceneComponent_TypeInfo;
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
              v117 = TerminalSceneComponent_TypeInfo;
            }
            mInstance = v117->static_fields->mInstance;
            v119 = (System_Action_o *)sub_1B64ABC(System_Action_TypeInfo);
            System_Action___ctor(
              v119,
              (Il2CppObject *)v98,
              Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__32__,
              0LL);
            if ( !mInstance )
              goto LABEL_863;
            v120 = mInstance;
            v121 = DEFAULT_FADE_TIME;
            v122 = v119;
LABEL_46:
            TerminalSceneComponent__Fadein_MapDisp(v120, v121, v122, 0LL);
          }
          return;
        }
        updated = (__int64)v108->fields.param;
        if ( !updated )
          goto LABEL_863;
        updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
        if ( !updated )
          goto LABEL_863;
        v234 = updated;
        if ( *(_DWORD *)(updated + 24) )
        {
          v235 = System_Int32__Parse(*(System_String_o **)(updated + 32), 0LL);
          v236 = 0.5;
          if ( *(int *)(v234 + 24) >= 2 )
          {
            v237 = System_Int32__Parse(*(System_String_o **)(v234 + 40), 0LL);
            if ( *(int *)(v234 + 24) >= 3 )
              v236 = System_Single__Parse(*(System_String_o **)(v234 + 48), 0LL);
          }
          else
          {
            v237 = v235;
            v235 = -1;
          }
          updated = (__int64)*v103;
          if ( !*v103 )
            goto LABEL_863;
          MapComponent_object = QuestAfterAction__GetMapComponent_object_(
                                  (QuestAfterAction_o *)updated,
                                  0,
                                  v237,
                                  this,
                                  (const MethodInfo_2ECAFFC *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)MapComponent_object, 0LL, 0LL) )
          {
            if ( v235 >= 1 )
            {
              updated = (__int64)*v103;
              if ( !*v103 )
                goto LABEL_863;
              v279 = QuestAfterAction__GetMapComponent_object_(
                       (QuestAfterAction_o *)updated,
                       0,
                       v235,
                       this,
                       (const MethodInfo_2ECAFFC *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v279, 0LL, 0LL) )
              {
                if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
                if ( !byte_49F97AD )
                {
                  sub_1B64870(&TerminalSceneComponent_TypeInfo, v100);
                  byte_49F97AD = 1;
                }
                updated = (__int64)TerminalSceneComponent_TypeInfo;
                if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
                  updated = (__int64)TerminalSceneComponent_TypeInfo;
                }
                v280 = **(_QWORD **)(updated + 184);
                if ( !v280 )
                  goto LABEL_863;
                if ( !v279 )
                  goto LABEL_863;
                v281 = *(ScrTerminalMap_o **)(v280 + 264);
                updated = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v279, 0LL);
                if ( !v281 )
                  goto LABEL_863;
                ScrTerminalMap__SetPlayerIcon(v281, (UnityEngine_GameObject_o *)updated, 0LL);
              }
            }
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            if ( !byte_49F97AD )
            {
              sub_1B64870(&TerminalSceneComponent_TypeInfo, v100);
              byte_49F97AD = 1;
            }
            updated = (__int64)TerminalSceneComponent_TypeInfo;
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
              updated = (__int64)TerminalSceneComponent_TypeInfo;
            }
            v282 = **(_QWORD **)(updated + 184);
            if ( !v282 )
              goto LABEL_863;
            if ( !MapComponent_object )
              goto LABEL_863;
            v283 = *(ScrTerminalMap_o **)(v282 + 264);
            gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)MapComponent_object, 0LL);
            v285 = (System_Action_o *)sub_1B64ABC(System_Action_TypeInfo);
            System_Action___ctor(v285, (Il2CppObject *)this, (intptr_t)this->klass->vtable._15_onEnd.methodPtr, 0LL);
            if ( !v283 )
              goto LABEL_863;
            ScrTerminalMap__MovePlayerIcon(v283, gameObject, v237, v285, v236, 0LL);
          }
          return;
        }
        goto LABEL_864;
      }
      if ( (unsigned int)(id - 351) >= 2 )
      {
        switch ( id )
        {
          case 400:
            v134 = sub_1B64ABC(QuestAfterAction_StateMain___c__DisplayClass16_10_TypeInfo);
            QuestAfterAction_StateMain___c__DisplayClass16_10___ctor(
              (QuestAfterAction_StateMain___c__DisplayClass16_10_o *)v134,
              0LL);
            if ( !v134 )
              goto LABEL_863;
            *(_QWORD *)(v134 + 24) = v98;
            v137 = v134 + 24;
            sub_1B64814((ServantStatusBattleListViewItem_o *)(v134 + 24), v98, v135, v136);
            updated = (__int64)v108->fields.param;
            if ( !updated )
              goto LABEL_863;
            updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
            if ( !updated )
              goto LABEL_863;
            v138 = *(_QWORD *)(updated + 24);
            v139 = updated;
            if ( v138 )
            {
              if ( !(_DWORD)v138 )
                goto LABEL_864;
              updated = System_Int32__Parse(*(System_String_o **)(updated + 32), 0LL);
              v140 = updated;
              if ( *(int *)(v139 + 24) >= 2 )
              {
                updated = System_Int32__Parse(*(System_String_o **)(v139 + 40), 0LL);
                v141 = (int)updated < 1;
                if ( *(int *)(v139 + 24) < 3 )
                {
                  v142 = 0;
                }
                else
                {
                  updated = System_Int32__Parse(*(System_String_o **)(v139 + 48), 0LL);
                  v142 = (int)updated > 0;
                }
                goto LABEL_752;
              }
            }
            else
            {
              v140 = 0;
            }
            v142 = 0;
            v141 = 1;
LABEL_752:
            if ( !*(_QWORD *)v137 )
              goto LABEL_863;
            updated = *(_QWORD *)(*(_QWORD *)v137 + 24LL);
            if ( !updated )
              goto LABEL_863;
            v567 = QuestAfterAction__GetMapComponent_object_(
                     (QuestAfterAction_o *)updated,
                     2,
                     v140,
                     this,
                     (const MethodInfo_2ECAFFC *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
            *(_QWORD *)(v134 + 16) = v567;
            sub_1B64814((ServantStatusBattleListViewItem_o *)(v134 + 16), (int32_t)v567, v568, v569);
            v570 = *(UnityEngine_Object_o **)(v134 + 16);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            updated = UnityEngine_Object__op_Equality(v570, 0LL, 0LL);
            if ( (updated & 1) != 0 )
              return;
            v571 = *(MapGimmickComponent_o **)(v134 + 16);
            if ( !v571 )
              goto LABEL_863;
            v571->fields.isForceNotActive = v142;
            v572 = (System_Action_o *)sub_1B64ABC(System_Action_TypeInfo);
            v573 = v572;
            if ( v141 )
            {
              System_Action___ctor(
                v572,
                (Il2CppObject *)v134,
                Method_QuestAfterAction_StateMain___c__DisplayClass16_10__UpdateAnim_b__22__,
                0LL);
              v495 = 2;
              goto LABEL_770;
            }
            System_Action___ctor(
              v572,
              (Il2CppObject *)v134,
              Method_QuestAfterAction_StateMain___c__DisplayClass16_10__UpdateAnim_b__21__,
              0LL);
            v602 = 2;
            goto LABEL_825;
          case 401:
            v134 = sub_1B64ABC(QuestAfterAction_StateMain___c__DisplayClass16_11_TypeInfo);
            QuestAfterAction_StateMain___c__DisplayClass16_11___ctor(
              (QuestAfterAction_StateMain___c__DisplayClass16_11_o *)v134,
              0LL);
            if ( !v134 )
              goto LABEL_863;
            *(_QWORD *)(v134 + 24) = v98;
            v415 = v134 + 24;
            sub_1B64814((ServantStatusBattleListViewItem_o *)(v134 + 24), v98, v413, v414);
            updated = (__int64)v108->fields.param;
            if ( !updated )
              goto LABEL_863;
            updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
            if ( !updated )
              goto LABEL_863;
            v416 = *(_QWORD *)(updated + 24);
            v417 = updated;
            if ( v416 )
            {
              if ( !(_DWORD)v416 )
                goto LABEL_864;
              updated = System_Int32__Parse(*(System_String_o **)(updated + 32), 0LL);
              v418 = updated;
              if ( *(int *)(v417 + 24) >= 2 )
              {
                updated = System_Int32__Parse(*(System_String_o **)(v417 + 40), 0LL);
                v419 = (int)updated < 1;
                if ( *(int *)(v417 + 24) < 3 )
                {
                  v420 = 0;
                }
                else
                {
                  updated = System_Int32__Parse(*(System_String_o **)(v417 + 48), 0LL);
                  v420 = (int)updated > 0;
                }
                goto LABEL_762;
              }
            }
            else
            {
              v418 = 0;
            }
            v420 = 0;
            v419 = 1;
LABEL_762:
            if ( !*(_QWORD *)v415 )
              goto LABEL_863;
            updated = *(_QWORD *)(*(_QWORD *)v415 + 24LL);
            if ( !updated )
              goto LABEL_863;
            v574 = QuestAfterAction__GetMapComponent_object_(
                     (QuestAfterAction_o *)updated,
                     2,
                     v418,
                     this,
                     (const MethodInfo_2ECAFFC *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
            *(_QWORD *)(v134 + 16) = v574;
            sub_1B64814((ServantStatusBattleListViewItem_o *)(v134 + 16), (int32_t)v574, v575, v576);
            v577 = *(UnityEngine_Object_o **)(v134 + 16);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            updated = UnityEngine_Object__op_Equality(v577, 0LL, 0LL);
            if ( (updated & 1) != 0 )
              return;
            v571 = *(MapGimmickComponent_o **)(v134 + 16);
            if ( !v571 )
              goto LABEL_863;
            v571->fields.isForceLoop = v420;
            v571->fields.isForceNotActive = 0;
            v578 = (System_Action_o *)sub_1B64ABC(System_Action_TypeInfo);
            v573 = v578;
            if ( v419 )
            {
              System_Action___ctor(
                v578,
                (Il2CppObject *)v134,
                Method_QuestAfterAction_StateMain___c__DisplayClass16_11__UpdateAnim_b__24__,
                0LL);
              v495 = 3;
LABEL_770:
              v579 = v571;
              v580 = v573;
LABEL_822:
              MapGimmickComponent__SetState(v579, v495, v580, v494);
              return;
            }
            System_Action___ctor(
              v578,
              (Il2CppObject *)v134,
              Method_QuestAfterAction_StateMain___c__DisplayClass16_11__UpdateAnim_b__23__,
              0LL);
            v602 = 3;
LABEL_825:
            MapGimmickComponent__SetState(v571, v602, v573, v601);
            updated = ((__int64 (__fastcall *)(QuestAfterAction_StateMain_o *, Il2CppMethodPointer))this->klass->vtable._14_EndAnim.method)(
                        this,
                        this->klass->vtable._15_onEnd.methodPtr);
            v603 = *(_QWORD *)(v134 + 24);
            if ( !v603 )
              goto LABEL_863;
            ((void (__fastcall *)(QuestAfterAction_StateMain_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._13_UpdateAnim.method)(
              this,
              *(_QWORD *)(v603 + 24),
              this->klass->vtable._14_EndAnim.methodPtr);
            return;
          case 402:
            updated = (__int64)v108->fields.param;
            if ( !updated )
              goto LABEL_863;
            updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
            if ( !updated )
              goto LABEL_863;
            v421 = *(_QWORD *)(updated + 24);
            v422 = updated;
            if ( v421 )
            {
              if ( !(_DWORD)v421 )
                goto LABEL_864;
              v423 = System_Int32__Parse(*(System_String_o **)(updated + 32), 0LL);
              if ( *(int *)(v422 + 24) >= 2 )
              {
                v424 = System_Int32__Parse(*(System_String_o **)(v422 + 40), 0LL) > 0;
                goto LABEL_773;
              }
            }
            else
            {
              v423 = 0;
            }
            v424 = 0;
LABEL_773:
            updated = (__int64)*v103;
            if ( !*v103 )
              goto LABEL_863;
            v581 = QuestAfterAction__GetMapComponent_object_(
                     (QuestAfterAction_o *)updated,
                     2,
                     v423,
                     this,
                     (const MethodInfo_2ECAFFC *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            updated = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v581, 0LL, 0LL);
            if ( (updated & 1) == 0 )
            {
              if ( !v581 )
                goto LABEL_863;
              BYTE1(v581[6].monitor) = v424;
              MapGimmickComponent__SetDispAnim_33510716((MapGimmickComponent_o *)v581, 0, 0.0, 0, v582);
              v398 = v581[7].klass;
              if ( !v398 )
                goto LABEL_863;
LABEL_779:
              v398[4] = 0;
              goto LABEL_18;
            }
            return;
          case 403:
            updated = (__int64)v108->fields.param;
            if ( !updated )
              goto LABEL_863;
            updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
            if ( !updated )
              goto LABEL_863;
            v425 = *(_QWORD *)(updated + 24);
            v426 = updated;
            if ( v425 )
            {
              if ( !(_DWORD)v425 )
                goto LABEL_864;
              v427 = System_Int32__Parse(*(System_String_o **)(updated + 32), 0LL);
              if ( *(int *)(v426 + 24) >= 2 )
              {
                v428 = System_Int32__Parse(*(System_String_o **)(v426 + 40), 0LL) > 0;
                goto LABEL_782;
              }
            }
            else
            {
              v427 = 0;
            }
            v428 = 0;
LABEL_782:
            updated = (__int64)*v103;
            if ( !*v103 )
              goto LABEL_863;
            v583 = QuestAfterAction__GetMapComponent_object_(
                     (QuestAfterAction_o *)updated,
                     2,
                     v427,
                     this,
                     (const MethodInfo_2ECAFFC *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            updated = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v583, 0LL, 0LL);
            if ( (updated & 1) == 0 )
            {
              if ( !v583 )
                goto LABEL_863;
              LOBYTE(v583[6].monitor) = v428;
              BYTE1(v583[6].monitor) = 0;
              MapGimmickComponent__SetDispAnim_33510716((MapGimmickComponent_o *)v583, 1, 0.0, 0, v584);
              v585 = v583[7].klass;
              if ( !v585 )
                goto LABEL_863;
              LODWORD(v585->_1.name) = 1;
              goto LABEL_18;
            }
            return;
          case 404:
            updated = (__int64)v108->fields.param;
            if ( !updated )
              goto LABEL_863;
            updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
            if ( !updated )
              goto LABEL_863;
            v429 = updated;
            if ( *(int *)(updated + 24) <= 4 )
              goto LABEL_330;
            v430 = System_Single__Parse(*(System_String_o **)(updated + 56), 0LL);
            if ( !*(_DWORD *)(v429 + 24) )
              goto LABEL_864;
            v431 = *v103;
            v432 = v430;
            updated = System_Int32__Parse(*(System_String_o **)(v429 + 32), 0LL);
            if ( !v431 )
              goto LABEL_863;
            v433 = QuestAfterAction__GetMapComponent_object_(
                     v431,
                     2,
                     updated,
                     this,
                     (const MethodInfo_2ECAFFC *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v433, 0LL, 0LL) )
              return;
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            if ( !byte_49F97AD )
            {
              sub_1B64870(&TerminalSceneComponent_TypeInfo, v100);
              byte_49F97AD = 1;
            }
            updated = (__int64)TerminalSceneComponent_TypeInfo;
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
              updated = (__int64)TerminalSceneComponent_TypeInfo;
            }
            v434 = **(_QWORD **)(updated + 184);
            if ( !v434 )
              goto LABEL_863;
            if ( *(_DWORD *)(v429 + 24) <= 1u )
              goto LABEL_864;
            v435 = *(ScrTerminalMap_o **)(v434 + 264);
            v436 = System_Single__Parse(*(System_String_o **)(v429 + 40), 0LL);
            if ( *(_DWORD *)(v429 + 24) <= 2u )
              goto LABEL_864;
            v437 = v436;
            v438 = System_Single__Parse(*(System_String_o **)(v429 + 48), 0LL);
            if ( !v435 )
              goto LABEL_863;
            *(UnityEngine_Vector3_o *)&v439 = ScrTerminalMap__LocalPosFromCoord(v435, v437, v438, 0.0, 0.0, 0LL);
            if ( *(_DWORD *)(v429 + 24) <= 4u )
              goto LABEL_864;
            v442 = v439;
            v443 = v440;
            v444 = v441;
            v445 = System_Int32__Parse(*(System_String_o **)(v429 + 64), 0LL);
            v446 = (System_Action_o *)sub_1B64ABC(System_Action_TypeInfo);
            System_Action___ctor(
              v446,
              (Il2CppObject *)v98,
              Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__25__,
              0LL);
            if ( !v433 )
              goto LABEL_863;
            v638.fields.y = v443;
            v638.fields.z = v444;
            v638.fields.x = v442;
            MapGimmickComponent__SetMoveAnim((MapGimmickComponent_o *)v433, v638, v432 * 0.001, v445, v446, v447);
            return;
          case 405:
            v448 = sub_1B64ABC(QuestAfterAction_StateMain___c__DisplayClass16_12_TypeInfo);
            QuestAfterAction_StateMain___c__DisplayClass16_12___ctor(
              (QuestAfterAction_StateMain___c__DisplayClass16_12_o *)v448,
              0LL);
            if ( !v448 )
              goto LABEL_863;
            *(_QWORD *)(v448 + 24) = v98;
            sub_1B64814((ServantStatusBattleListViewItem_o *)(v448 + 24), v98, v449, v450);
            v451 = *(_QWORD *)(v448 + 24);
            if ( !v451 )
              goto LABEL_863;
            v452 = *(QuestAfterAction_o **)(v451 + 24);
            updated = System_Int32__Parse(v108->fields.param, 0LL);
            if ( !v452 )
              goto LABEL_863;
            v453 = QuestAfterAction__GetMapComponent_object_(
                     v452,
                     2,
                     updated,
                     this,
                     (const MethodInfo_2ECAFFC *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
            *(_QWORD *)(v448 + 16) = v453;
            sub_1B64814((ServantStatusBattleListViewItem_o *)(v448 + 16), (int32_t)v453, v454, v455);
            v456 = *(UnityEngine_Object_o **)(v448 + 16);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Equality(v456, 0LL, 0LL) )
              return;
            v457 = *(MapGimmickComponent_o **)(v448 + 16);
            v458 = (System_Action_o *)sub_1B64ABC(System_Action_TypeInfo);
            System_Action___ctor(
              v458,
              (Il2CppObject *)v448,
              Method_QuestAfterAction_StateMain___c__DisplayClass16_12__UpdateAnim_b__26__,
              0LL);
            if ( !v457 )
              goto LABEL_863;
            MapGimmickComponent__SetState(v457, 3, v458, v459);
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            if ( !byte_49F97AD )
            {
              sub_1B64870(&TerminalSceneComponent_TypeInfo, v100);
              byte_49F97AD = 1;
            }
            updated = (__int64)TerminalSceneComponent_TypeInfo;
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
              updated = (__int64)TerminalSceneComponent_TypeInfo;
            }
            v460 = **(TerminalSceneComponent_o ***)(updated + 184);
            if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
            if ( !v460 )
              goto LABEL_863;
            v120 = v460;
            v122 = 0LL;
            v121 = AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME;
            goto LABEL_46;
          case 406:
            v461 = sub_1B64ABC(QuestAfterAction_StateMain___c__DisplayClass16_13_TypeInfo);
            QuestAfterAction_StateMain___c__DisplayClass16_13___ctor(
              (QuestAfterAction_StateMain___c__DisplayClass16_13_o *)v461,
              0LL);
            if ( !v461 )
              goto LABEL_863;
            *(_QWORD *)(v461 + 32) = v98;
            sub_1B64814((ServantStatusBattleListViewItem_o *)(v461 + 32), v98, v462, v463);
            updated = (__int64)v108->fields.param;
            if ( !updated )
              goto LABEL_863;
            v464 = System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
            *(_QWORD *)(v461 + 24) = v464;
            v465 = (__int64 *)(v461 + 24);
            sub_1B64814((ServantStatusBattleListViewItem_o *)(v461 + 24), (int32_t)v464, v466, v467);
            v468 = *(_QWORD *)(v461 + 32);
            if ( !v468 )
              goto LABEL_863;
            v469 = *v465;
            if ( !*v465 )
              goto LABEL_863;
            if ( !*(_DWORD *)(v469 + 24) )
              goto LABEL_864;
            v470 = *(QuestAfterAction_o **)(v468 + 24);
            updated = System_Int32__Parse(*(System_String_o **)(v469 + 32), 0LL);
            if ( !v470 )
              goto LABEL_863;
            v471 = QuestAfterAction__GetMapComponent_object_(
                     v470,
                     2,
                     updated,
                     this,
                     (const MethodInfo_2ECAFFC *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
            *(_QWORD *)(v461 + 16) = v471;
            sub_1B64814((ServantStatusBattleListViewItem_o *)(v461 + 16), (int32_t)v471, v472, v473);
            v474 = *(UnityEngine_Object_o **)(v461 + 16);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Equality(v474, 0LL, 0LL) )
              return;
            v475 = *(MapGimmickComponent_o **)(v461 + 16);
            v476 = (System_Action_o *)sub_1B64ABC(System_Action_TypeInfo);
            v477 = &Method_QuestAfterAction_StateMain___c__DisplayClass16_13__UpdateAnim_b__27__;
            v478 = v476;
            goto LABEL_622;
          case 407:
            updated = (__int64)v108->fields.param;
            if ( !updated )
              goto LABEL_863;
            updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
            if ( !updated )
              goto LABEL_863;
            v479 = updated;
            if ( !*(_DWORD *)(updated + 24) )
              goto LABEL_864;
            v480 = *v103;
            updated = System_Int32__Parse(*(System_String_o **)(updated + 32), 0LL);
            if ( !v480 )
              goto LABEL_863;
            v481 = QuestAfterAction__GetMapComponent_object_(
                     v480,
                     2,
                     updated,
                     this,
                     (const MethodInfo_2ECAFFC *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            updated = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v481, 0LL, 0LL);
            if ( (updated & 1) != 0 )
              return;
            if ( !v481 )
              goto LABEL_863;
            updated = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v481, 0LL);
            if ( !updated )
              goto LABEL_863;
            updated = (__int64)UnityEngine_GameObject__GetComponentInChildren_object_(
                                 (UnityEngine_GameObject_o *)updated,
                                 (const MethodInfo_2E8A418 *)Method_UnityEngine_GameObject_GetComponentInChildren_UISprite___);
            if ( *(_DWORD *)(v479 + 24) <= 1u )
              goto LABEL_864;
            v482 = (UIWidget_o *)updated;
            updated = UnityEngine_ColorUtility__TryParseHtmlString(*(System_String_o **)(v479 + 40), &color, 0LL);
            if ( !v482 )
              goto LABEL_863;
            UIWidget__set_color(v482, color, 0LL);
            goto LABEL_330;
          case 408:
            v461 = sub_1B64ABC(QuestAfterAction_StateMain___c__DisplayClass16_15_TypeInfo);
            QuestAfterAction_StateMain___c__DisplayClass16_15___ctor(
              (QuestAfterAction_StateMain___c__DisplayClass16_15_o *)v461,
              0LL);
            if ( !v461 )
              goto LABEL_863;
            *(_QWORD *)(v461 + 24) = v98;
            sub_1B64814((ServantStatusBattleListViewItem_o *)(v461 + 24), v98, v483, v484);
            v485 = *(_QWORD *)(v461 + 24);
            if ( !v485 )
              goto LABEL_863;
            v486 = *(QuestAfterAction_o **)(v485 + 24);
            updated = System_Int32__Parse(v108->fields.param, 0LL);
            if ( !v486 )
              goto LABEL_863;
            v487 = QuestAfterAction__GetMapComponent_object_(
                     v486,
                     2,
                     updated,
                     this,
                     (const MethodInfo_2ECAFFC *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
            *(_QWORD *)(v461 + 16) = v487;
            v488 = v461 + 16;
            sub_1B64814((ServantStatusBattleListViewItem_o *)(v461 + 16), (int32_t)v487, v489, v490);
            v491 = *(UnityEngine_Object_o **)(v461 + 16);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Equality(v491, 0LL, 0LL) )
              return;
            updated = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_36EE738 *)Method_SingletonTemplate_QuestTree__get_Instance__);
            if ( !*(_QWORD *)v488 || !updated )
              goto LABEL_863;
            v492 = QuestTree__CheckMapGimmickCond_33829484(
                     (QuestTree_o *)updated,
                     *(MapControl_MapGimmickInfo_o **)(*(_QWORD *)v488 + 112LL),
                     0LL);
            v475 = *(MapGimmickComponent_o **)v488;
            v493 = v492;
            v476 = (System_Action_o *)sub_1B64ABC(System_Action_TypeInfo);
            v478 = v476;
            if ( v493 )
            {
              v477 = &Method_QuestAfterAction_StateMain___c__DisplayClass16_15__UpdateAnim_b__29__;
LABEL_622:
              System_Action___ctor(v476, (Il2CppObject *)v461, *v477, 0LL);
              if ( !v475 )
                goto LABEL_863;
              v495 = 3;
            }
            else
            {
              System_Action___ctor(
                v476,
                (Il2CppObject *)v461,
                Method_QuestAfterAction_StateMain___c__DisplayClass16_15__UpdateAnim_b__30__,
                0LL);
              if ( !v475 )
                goto LABEL_863;
              v495 = 2;
            }
            v579 = v475;
            v580 = v478;
            goto LABEL_822;
          case 409:
            updated = (__int64)v108->fields.param;
            if ( !updated )
              goto LABEL_863;
            updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
            if ( !updated )
              goto LABEL_863;
            v496 = *(_QWORD *)(updated + 24);
            v497 = updated;
            if ( v496 )
            {
              if ( !(_DWORD)v496 )
                goto LABEL_864;
              v498 = System_Int32__Parse(*(System_String_o **)(updated + 32), 0LL);
              if ( *(int *)(v497 + 24) >= 2 )
              {
                v499 = System_Int32__Parse(*(System_String_o **)(v497 + 40), 0LL) > 0;
                goto LABEL_791;
              }
            }
            else
            {
              v498 = 0;
            }
            v499 = 0;
LABEL_791:
            updated = (__int64)*v103;
            if ( !*v103 )
              goto LABEL_863;
            v586 = QuestAfterAction__GetMapComponent_object_(
                     (QuestAfterAction_o *)updated,
                     2,
                     v498,
                     this,
                     (const MethodInfo_2ECAFFC *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            updated = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v586, 0LL, 0LL);
            if ( (updated & 1) == 0 )
            {
              if ( !v586 )
                goto LABEL_863;
              LOBYTE(v586[6].monitor) = v499;
              BYTE1(v586[6].monitor) = 0;
              AnimTime = MapGimmickComponent__GetAnimTime((MapGimmickComponent_o *)v586, v100);
              MapGimmickComponent__SetDispAnim_33510716((MapGimmickComponent_o *)v586, 1, AnimTime, 1, v588);
              v589 = v586[7].klass;
              if ( !v589 )
                goto LABEL_863;
              LODWORD(v589->_1.name) = 1;
              v590 = this->klass;
              this->fields.IsAnimDoing = 0;
              v591 = ((__int64 (__fastcall *)(QuestAfterAction_StateMain_o *, Il2CppMethodPointer))v590->vtable._11_get_CommandIndex.method)(
                       this,
                       v590->vtable._12_set_CommandIndex.methodPtr);
              ((void (__fastcall *)(QuestAfterAction_StateMain_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._12_set_CommandIndex.method)(
                this,
                (unsigned int)(v591 + 1),
                this->klass->vtable._13_UpdateAnim.methodPtr);
              goto LABEL_19;
            }
            return;
          default:
            if ( id != 500 )
              return;
            v352 = System_Int32__Parse(v108->fields.param, 0LL);
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            if ( !byte_49FB44A )
            {
              sub_1B64870(&TerminalPramsManager_TypeInfo, v351);
              byte_49FB44A = 1;
            }
            v353 = TerminalPramsManager_TypeInfo;
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
              v353 = TerminalPramsManager_TypeInfo;
            }
            v353->static_fields->_AfterActionFocusQuestId_k__BackingField = v352;
            if ( !DataManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
            updated = (__int64)DataManager__GetMaster_object_((const MethodInfo_2E3B674 *)Method_DataManager_GetMaster_QuestMaster___);
            if ( !updated )
              goto LABEL_863;
            if ( !DataMasterBase_object__object__int___TryGetEntity(
                    (DataMasterBase_TMaster__TEntity__PKType__o *)updated,
                    &entity,
                    v352,
                    (const MethodInfo_30D61D4 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__) )
              goto LABEL_330;
            updated = (__int64)entity;
            if ( !entity )
              goto LABEL_863;
            v354 = *v103;
            updated = QuestEntity__getSpotId((QuestEntity_o *)entity, 0LL);
            if ( !v354 )
              goto LABEL_863;
            v355 = QuestAfterAction__GetMapComponent_object_(
                     v354,
                     0,
                     updated,
                     this,
                     (const MethodInfo_2ECAFFC *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            updated = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v355, 0LL, 0LL);
            if ( (updated & 1) == 0 )
              goto LABEL_330;
            if ( !v355 )
              goto LABEL_863;
            SrcSpotBasePrefab__SelectSpot((SrcSpotBasePrefab_o *)v355, 0, 0LL);
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            if ( !byte_49FB44B )
            {
              sub_1B64870(&TerminalPramsManager_TypeInfo, v356);
              byte_49FB44B = 1;
            }
            v357 = TerminalPramsManager_TypeInfo;
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
              v357 = TerminalPramsManager_TypeInfo;
            }
            v357->static_fields->_IsBackQuestBoardDisable_k__BackingField = 1;
            goto LABEL_330;
        }
      }
      updated = (__int64)v108->fields.param;
      if ( !updated )
        goto LABEL_863;
      updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
      if ( !updated )
        goto LABEL_863;
      v159 = updated;
      if ( *(int *)(updated + 24) <= 4 )
        goto LABEL_330;
      v160 = System_Single__Parse(*(System_String_o **)(updated + 32), 0LL);
      if ( *(_DWORD *)(v159 + 24) <= 1u )
        goto LABEL_864;
      v161 = v160;
      v162 = System_Single__Parse(*(System_String_o **)(v159 + 40), 0LL);
      if ( *(_DWORD *)(v159 + 24) <= 2u )
        goto LABEL_864;
      v163 = v162;
      v164 = System_Single__Parse(*(System_String_o **)(v159 + 48), 0LL);
      if ( *(_DWORD *)(v159 + 24) <= 3u )
        goto LABEL_864;
      v165 = v164;
      v166 = System_Single__Parse(*(System_String_o **)(v159 + 56), 0LL);
      if ( *(_DWORD *)(v159 + 24) <= 4u )
        goto LABEL_864;
      v167 = v166;
      v168 = System_Int32__Parse(*(System_String_o **)(v159 + 64), 0LL);
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      if ( !byte_49F97AD )
      {
        sub_1B64870(&TerminalSceneComponent_TypeInfo, v100);
        byte_49F97AD = 1;
      }
      updated = (__int64)TerminalSceneComponent_TypeInfo;
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        updated = (__int64)TerminalSceneComponent_TypeInfo;
      }
      v169 = **(_QWORD **)(updated + 184);
      if ( !v169 )
        goto LABEL_863;
      updated = *(_QWORD *)(v169 + 264);
      if ( !updated )
        goto LABEL_863;
      v637.fields.y = v163;
      v637.fields.z = v165;
      v170 = v167 * 0.001;
      v637.fields.x = v161;
      *(UnityEngine_Vector3_o *)&v172 = ScrTerminalMap__ConvertLocalToScreenPosition(
                                          (ScrTerminalMap_o *)updated,
                                          v637,
                                          0LL);
      v175 = v172;
      v176 = v173;
      v177 = v174;
      if ( v108->fields.id != 352 || *(int *)(v159 + 24) < 6 )
      {
        if ( !*v103 )
          goto LABEL_863;
        mMapCamera = (*v103)->fields.mMapCamera;
        v179 = (System_Action_o *)sub_1B64ABC(System_Action_TypeInfo);
        v180 = &Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__20__;
LABEL_112:
        v181 = v179;
        System_Action___ctor(v179, (Il2CppObject *)v98, *v180, 0LL);
        if ( !mMapCamera )
          goto LABEL_863;
        v182 = mMapCamera;
        v183 = v175;
        v184 = v176;
        v185 = v177;
        v186 = v170;
        v187 = v168;
        v188 = v181;
        goto LABEL_846;
      }
      if ( !*v103 )
        goto LABEL_863;
      v358 = (*v103)->fields.mMapCamera;
      *(_QWORD *)&v631.fields.hasValue = &v620;
      *(_QWORD *)&v631.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
      *(_QWORD *)&v620.fields.hasValue = 0LL;
      *(_QWORD *)&v620.fields.value.fields.y = 0LL;
      System_Nullable_Vector3____ctor(v631, *(UnityEngine_Vector3_o *)&v172, v171);
      if ( *(_DWORD *)(v159 + 24) <= 5u )
        goto LABEL_864;
      v359 = System_Single__Parse(*(System_String_o **)(v159 + 72), 0LL);
      p_size = (System_Nullable_float__o)&size;
      size = 0LL;
      System_Nullable_float____ctor(p_size, v359, (const MethodInfo_35D2288 *)Method_System_Nullable_float___ctor__);
      v360 = (System_Action_o *)sub_1B64ABC(System_Action_TypeInfo);
      v361 = &Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__19__;
LABEL_468:
      v362 = v360;
      System_Action___ctor(v360, (Il2CppObject *)v98, *v361, 0LL);
      if ( !v358 )
        goto LABEL_863;
      v636 = v620;
      v630 = size;
      v363 = v358;
      v364 = v170;
      v365 = v168;
      v366 = v362;
LABEL_857:
      MapCamera__StartAutoWork(v363, v364, v636, v630, v365, v366, 0LL);
      return;
    }
    if ( id <= 113 )
    {
      switch ( id )
      {
        case 'd':
          v147 = sub_1B64ABC(QuestAfterAction_StateMain___c__DisplayClass16_1_TypeInfo);
          QuestAfterAction_StateMain___c__DisplayClass16_1___ctor(
            (QuestAfterAction_StateMain___c__DisplayClass16_1_o *)v147,
            0LL);
          if ( !v147 )
            goto LABEL_863;
          *(_QWORD *)(v147 + 24) = v98;
          sub_1B64814((ServantStatusBattleListViewItem_o *)(v147 + 24), v98, v148, v149);
          v150 = *(_QWORD *)(v147 + 24);
          if ( !v150 )
            goto LABEL_863;
          v151 = *(QuestAfterAction_o **)(v150 + 24);
          updated = System_Int32__Parse(v108->fields.param, 0LL);
          if ( !v151 )
            goto LABEL_863;
          v152 = QuestAfterAction__GetMapComponent_object_(
                   v151,
                   0,
                   updated,
                   this,
                   (const MethodInfo_2ECAFFC *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
          *(_QWORD *)(v147 + 16) = v152;
          sub_1B64814((ServantStatusBattleListViewItem_o *)(v147 + 16), (int32_t)v152, v153, v154);
          v155 = *(UnityEngine_Object_o **)(v147 + 16);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Equality(v155, 0LL, 0LL) )
            return;
          v156 = *(SrcSpotBasePrefab_o **)(v147 + 16);
          v157 = (System_Action_o *)sub_1B64ABC(System_Action_TypeInfo);
          System_Action___ctor(
            v157,
            (Il2CppObject *)v147,
            Method_QuestAfterAction_StateMain___c__DisplayClass16_1__UpdateAnim_b__0__,
            0LL);
          if ( !v156 )
            goto LABEL_863;
          v158 = 2;
          goto LABEL_385;
        case 'e':
          v309 = sub_1B64ABC(QuestAfterAction_StateMain___c__DisplayClass16_2_TypeInfo);
          QuestAfterAction_StateMain___c__DisplayClass16_2___ctor(
            (QuestAfterAction_StateMain___c__DisplayClass16_2_o *)v309,
            0LL);
          if ( !v309 )
            goto LABEL_863;
          *(_QWORD *)(v309 + 24) = v98;
          sub_1B64814((ServantStatusBattleListViewItem_o *)(v309 + 24), v98, v310, v311);
          v312 = *(_QWORD *)(v309 + 24);
          if ( !v312 )
            goto LABEL_863;
          v313 = *(QuestAfterAction_o **)(v312 + 24);
          updated = System_Int32__Parse(v108->fields.param, 0LL);
          if ( !v313 )
            goto LABEL_863;
          v314 = QuestAfterAction__GetMapComponent_object_(
                   v313,
                   0,
                   updated,
                   this,
                   (const MethodInfo_2ECAFFC *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
          *(_QWORD *)(v309 + 16) = v314;
          sub_1B64814((ServantStatusBattleListViewItem_o *)(v309 + 16), (int32_t)v314, v315, v316);
          v317 = *(UnityEngine_Object_o **)(v309 + 16);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Equality(v317, 0LL, 0LL) )
            return;
          v156 = *(SrcSpotBasePrefab_o **)(v309 + 16);
          v157 = (System_Action_o *)sub_1B64ABC(System_Action_TypeInfo);
          System_Action___ctor(
            v157,
            (Il2CppObject *)v309,
            Method_QuestAfterAction_StateMain___c__DisplayClass16_2__UpdateAnim_b__1__,
            0LL);
          if ( !v156 )
            goto LABEL_863;
          v158 = 3;
LABEL_385:
          SrcSpotBasePrefab__SetState(v156, v158, v157, 0LL);
          return;
        case 'f':
          v318 = sub_1B64ABC(QuestAfterAction_StateMain___c__DisplayClass16_3_TypeInfo);
          QuestAfterAction_StateMain___c__DisplayClass16_3___ctor(
            (QuestAfterAction_StateMain___c__DisplayClass16_3_o *)v318,
            0LL);
          if ( !v318 )
            goto LABEL_863;
          *(_QWORD *)(v318 + 24) = v98;
          v321 = v318 + 24;
          sub_1B64814((ServantStatusBattleListViewItem_o *)(v318 + 24), v98, v319, v320);
          if ( !*(_QWORD *)(v318 + 24) )
            goto LABEL_863;
          v322 = *(QuestAfterAction_o **)(*(_QWORD *)(v318 + 24) + 24LL);
          updated = System_Int32__Parse(v108->fields.param, 0LL);
          if ( !v322 )
            goto LABEL_863;
          v323 = QuestAfterAction__GetMapComponent_object_(
                   v322,
                   0,
                   updated,
                   this,
                   (const MethodInfo_2ECAFFC *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
          *(_QWORD *)(v318 + 16) = v323;
          v324 = (__int64 *)(v318 + 16);
          sub_1B64814((ServantStatusBattleListViewItem_o *)(v318 + 16), (int32_t)v323, v325, v326);
          v327 = *(UnityEngine_Object_o **)(v318 + 16);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Equality(v327, 0LL, 0LL) )
            return;
          v328 = *(SrcSpotBasePrefab_o **)(v318 + 16);
          v329 = (System_Action_o *)sub_1B64ABC(System_Action_TypeInfo);
          System_Action___ctor(
            v329,
            (Il2CppObject *)v318,
            Method_QuestAfterAction_StateMain___c__DisplayClass16_3__UpdateAnim_b__2__,
            0LL);
          if ( !v328 )
            goto LABEL_863;
          SrcSpotBasePrefab__SetState(v328, 4, v329, 0LL);
          if ( !*(_QWORD *)v321 )
            goto LABEL_863;
          updated = *(_QWORD *)(*(_QWORD *)v321 + 24LL);
          if ( !updated )
            goto LABEL_863;
          v332 = *v324;
          *(_QWORD *)(updated + 176) = *v324;
          v333 = (ServantStatusBattleListViewItem_o *)(updated + 176);
          goto LABEL_407;
        case 'g':
          updated = (__int64)v108->fields.param;
          if ( !updated )
            goto LABEL_863;
          updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
          if ( !updated )
            goto LABEL_863;
          v334 = updated;
          if ( *(int *)(updated + 24) <= 1 )
            goto LABEL_330;
          v335 = *v103;
          updated = System_Int32__Parse(*(System_String_o **)(updated + 32), 0LL);
          if ( !v335 )
            goto LABEL_863;
          v336 = QuestAfterAction__GetMapComponent_object_(
                   v335,
                   0,
                   updated,
                   this,
                   (const MethodInfo_2ECAFFC *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          updated = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v336, 0LL, 0LL);
          if ( (updated & 1) != 0 )
            return;
          if ( *(_DWORD *)(v334 + 24) <= 1u )
            goto LABEL_864;
          updated = System_Int32__Parse(*(System_String_o **)(v334 + 40), 0LL);
          if ( !v336 )
            goto LABEL_863;
          LODWORD(v336[14].klass) = updated;
          v337 = (System_Action_o *)sub_1B64ABC(System_Action_TypeInfo);
          System_Action___ctor(v337, (Il2CppObject *)this, (intptr_t)this->klass->vtable._15_onEnd.methodPtr, 0LL);
          SrcSpotBasePrefab__SetState((SrcSpotBasePrefab_o *)v336, 5, v337, 0LL);
          updated = (__int64)*v103;
          if ( !*v103 )
            goto LABEL_863;
          *(_QWORD *)(updated + 176) = v336;
          v333 = (ServantStatusBattleListViewItem_o *)(updated + 176);
          LODWORD(v332) = (_DWORD)v336;
LABEL_407:
          sub_1B64814(v333, v332, v330, v331);
          return;
        case 'h':
        case 'i':
        case 'j':
        case 'k':
        case 'l':
        case 'm':
          return;
        case 'n':
          v338 = *v103;
          updated = System_Int32__Parse(v108->fields.param, 0LL);
          if ( !v338 )
            goto LABEL_863;
          v339 = QuestAfterAction__GetMapComponent_object_(
                   v338,
                   0,
                   updated,
                   this,
                   (const MethodInfo_2ECAFFC *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          updated = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v339, 0LL, 0LL);
          if ( (updated & 1) != 0 )
            return;
          if ( !v339 )
            goto LABEL_863;
          SrcSpotBasePrefab__SetQaaScaleAnimQuick((SrcSpotBasePrefab_o *)v339, 0, 0LL);
          monitor = v339[14].monitor;
          if ( !monitor )
            goto LABEL_863;
          monitor[5] = 0;
          v341 = (SrcSpotBasePrefab_o *)v339;
          v342 = 0;
          goto LABEL_430;
        case 'o':
          v343 = *v103;
          updated = System_Int32__Parse(v108->fields.param, 0LL);
          if ( !v343 )
            goto LABEL_863;
          v344 = QuestAfterAction__GetMapComponent_object_(
                   v343,
                   0,
                   updated,
                   this,
                   (const MethodInfo_2ECAFFC *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          updated = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v344, 0LL, 0LL);
          if ( (updated & 1) != 0 )
            return;
          if ( !v344 )
            goto LABEL_863;
          SrcSpotBasePrefab__SetQaaScaleAnimQuick((SrcSpotBasePrefab_o *)v344, 1, 0LL);
          SrcSpotBasePrefab__SetQaaColorAnimQuick((SrcSpotBasePrefab_o *)v344, 0, 0LL);
          v345 = v344[14].monitor;
          if ( !v345 )
            goto LABEL_863;
          v345[5] = 2;
          goto LABEL_429;
        case 'p':
          v346 = *v103;
          updated = System_Int32__Parse(v108->fields.param, 0LL);
          if ( !v346 )
            goto LABEL_863;
          v344 = QuestAfterAction__GetMapComponent_object_(
                   v346,
                   0,
                   updated,
                   this,
                   (const MethodInfo_2ECAFFC *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          updated = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v344, 0LL, 0LL);
          if ( (updated & 1) != 0 )
            return;
          if ( !v344 )
            goto LABEL_863;
          SrcSpotBasePrefab__SetQaaScaleAnimQuick((SrcSpotBasePrefab_o *)v344, 1, 0LL);
          SrcSpotBasePrefab__SetQaaColorAnimQuick((SrcSpotBasePrefab_o *)v344, 1, 0LL);
          v347 = v344[14].monitor;
          if ( !v347 )
            goto LABEL_863;
          v347[5] = 1;
LABEL_429:
          v342 = 1;
          v341 = (SrcSpotBasePrefab_o *)v344;
LABEL_430:
          SrcSpotBasePrefab__SetTouchType(v341, v342, 0LL);
          goto LABEL_18;
        case 'q':
          updated = (__int64)v108->fields.param;
          if ( !updated )
            goto LABEL_863;
          updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
          if ( !updated )
            goto LABEL_863;
          v348 = updated;
          if ( *(int *)(updated + 24) <= 1 )
            goto LABEL_330;
          v349 = *v103;
          updated = System_Int32__Parse(*(System_String_o **)(updated + 32), 0LL);
          if ( !v349 )
            goto LABEL_863;
          v350 = QuestAfterAction__GetMapComponent_object_(
                   v349,
                   0,
                   updated,
                   this,
                   (const MethodInfo_2ECAFFC *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          updated = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v350, 0LL, 0LL);
          if ( (updated & 1) != 0 )
            return;
          if ( *(_DWORD *)(v348 + 24) <= 1u )
            goto LABEL_864;
          updated = System_Int32__Parse(*(System_String_o **)(v348 + 40), 0LL);
          if ( !v350 )
            goto LABEL_863;
          LODWORD(v350[14].klass) = updated;
          SrcSpotBasePrefab__UpdateDisp((SrcSpotBasePrefab_o *)v350, 1, 0LL);
          break;
        default:
          if ( id )
            return;
          goto LABEL_18;
      }
      goto LABEL_18;
    }
    switch ( id )
    {
      case 300:
      case 305:
        updated = (__int64)v108->fields.param;
        if ( !updated )
          goto LABEL_863;
        updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
        if ( !updated )
          goto LABEL_863;
        v128 = *(_QWORD *)(updated + 24);
        v129 = updated;
        if ( (int)v128 <= 0 )
          goto LABEL_330;
        if ( (int)v128 > 2 )
        {
          v502 = System_Single__Parse(*(System_String_o **)(updated + 48), 0LL);
          v128 = *(_QWORD *)(v129 + 24);
          v130 = v502 * 0.001;
        }
        else
        {
          v130 = 0.5;
        }
        sec = v130;
        if ( (int)v128 >= 2 )
        {
          updated = System_Int32__Parse(*(System_String_o **)(v129 + 40), 0LL);
          v128 = *(_QWORD *)(v129 + 24);
          v503 = updated;
        }
        else
        {
          v503 = 15;
        }
        if ( !(_DWORD)v128 )
          goto LABEL_864;
        v506 = *v103;
        updated = System_Int32__Parse(*(System_String_o **)(v129 + 32), 0LL);
        if ( !v506 )
          goto LABEL_863;
        MapGameObject = (UnityEngine_Object_o *)QuestAfterAction__GetMapGameObject(v506, 0, updated, this, v507);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Equality(MapGameObject, 0LL, 0LL) )
          return;
        LocalPosition = GameObjectExtensions__GetLocalPosition((UnityEngine_GameObject_o *)MapGameObject, 0LL);
        x = LocalPosition.fields.x;
        y = LocalPosition.fields.y;
        z = LocalPosition.fields.z;
        if ( !this->fields.IsMapModel )
          goto LABEL_662;
        if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        if ( !byte_49F97AD )
        {
          sub_1B64870(&TerminalSceneComponent_TypeInfo, v100);
          byte_49F97AD = 1;
        }
        updated = (__int64)TerminalSceneComponent_TypeInfo;
        if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          updated = (__int64)TerminalSceneComponent_TypeInfo;
        }
        v512 = **(_QWORD **)(updated + 184);
        if ( !v512 )
          goto LABEL_863;
        updated = *(_QWORD *)(v512 + 264);
        if ( !updated )
          goto LABEL_863;
        v640.fields.x = x;
        v640.fields.y = y;
        v640.fields.z = z;
        v641 = ScrTerminalMap__ConvertLocalToScreenPosition((ScrTerminalMap_o *)updated, v640, 0LL);
        x = v641.fields.x;
        y = v641.fields.y;
        z = v641.fields.z;
LABEL_662:
        if ( !FSUtility_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
        updated = FSUtility__IsUnderVista(0LL);
        if ( (updated & 1) != 0 )
          goto LABEL_829;
        if ( !*(_DWORD *)(v129 + 24) )
          goto LABEL_864;
        v514 = *(System_String_o **)(v129 + 32);
        updated = System_String__op_Equality(v514, (System_String_o *)StringLiteral_1404/*"10703"*/, 0LL);
        if ( (updated & 1) != 0 )
        {
          y = y + -50.0;
        }
        else
        {
          updated = System_String__op_Equality(v514, (System_String_o *)StringLiteral_1479/*"30101"*/, 0LL);
          if ( (updated & 1) != 0 )
            y = y + -50.0;
        }
LABEL_829:
        if ( v108->fields.id != 305 || *(int *)(v129 + 24) < 4 )
        {
          if ( !*v103 )
            goto LABEL_863;
          v530 = (*v103)->fields.mMapCamera;
          v531 = (System_Action_o *)sub_1B64ABC(System_Action_TypeInfo);
          v532 = &Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__10__;
          goto LABEL_833;
        }
        if ( !*v103 )
          goto LABEL_863;
        v605 = (*v103)->fields.mMapCamera;
        *(_QWORD *)&v633.fields.hasValue = &v620;
        v648.fields.x = x;
        v648.fields.y = y;
        *(_QWORD *)&v633.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
        v648.fields.z = z;
        v620 = (System_Nullable_Vector3__o)0LL;
        System_Nullable_Vector3____ctor(v633, v648, v513);
        if ( *(_DWORD *)(v129 + 24) <= 3u )
          goto LABEL_864;
        v610 = System_Single__Parse(*(System_String_o **)(v129 + 56), 0LL);
        v627 = (System_Nullable_float__o)&size;
        size = 0LL;
        System_Nullable_float____ctor(v627, v610, (const MethodInfo_35D2288 *)Method_System_Nullable_float___ctor__);
        v607 = (System_Action_o *)sub_1B64ABC(System_Action_TypeInfo);
        v608 = &Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__9__;
        break;
      case 301:
      case 306:
        updated = (__int64)v108->fields.param;
        if ( !updated )
          goto LABEL_863;
        updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
        if ( !updated )
          goto LABEL_863;
        v287 = *(_QWORD *)(updated + 24);
        v288 = updated;
        if ( (int)v287 <= 0 )
          goto LABEL_330;
        if ( (int)v287 > 2 )
        {
          v504 = System_Single__Parse(*(System_String_o **)(updated + 48), 0LL);
          v287 = *(_QWORD *)(v288 + 24);
          v289 = v504 * 0.001;
        }
        else
        {
          v289 = 0.5;
        }
        seca = v289;
        if ( (int)v287 >= 2 )
        {
          updated = System_Int32__Parse(*(System_String_o **)(v288 + 40), 0LL);
          v287 = *(_QWORD *)(v288 + 24);
        }
        else
        {
          updated = 15LL;
        }
        easeType = updated;
        if ( !(_DWORD)v287 )
          goto LABEL_864;
        v515 = *v103;
        updated = System_Int32__Parse(*(System_String_o **)(v288 + 32), 0LL);
        if ( !v515 )
          goto LABEL_863;
        v517 = (UnityEngine_Object_o *)QuestAfterAction__GetMapGameObject(v515, 1, updated, this, v516);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        updated = UnityEngine_Object__op_Equality(v517, 0LL, 0LL);
        if ( (updated & 1) != 0 )
          return;
        if ( this->fields.IsMapModel )
        {
          if ( !v517 )
            goto LABEL_863;
          updated = (__int64)UnityEngine_GameObject__GetComponent_object_(
                               (UnityEngine_GameObject_o *)v517,
                               (const MethodInfo_2E8A1B4 *)Method_UnityEngine_GameObject_GetComponent_ModelLineComponent___);
          if ( !updated )
            goto LABEL_863;
          Position = GameObjectExtensions__GetPosition((UnityEngine_GameObject_o *)*(_QWORD *)(updated + 32), 0LL);
          v518 = Position.fields.x;
          v519 = Position.fields.y;
          v520 = Position.fields.z;
          if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          if ( !byte_49F97AD )
          {
            sub_1B64870(&TerminalSceneComponent_TypeInfo, v100);
            byte_49F97AD = 1;
          }
          updated = (__int64)TerminalSceneComponent_TypeInfo;
          if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            updated = (__int64)TerminalSceneComponent_TypeInfo;
          }
          v521 = **(_QWORD **)(updated + 184);
          if ( !v521 )
            goto LABEL_863;
          updated = *(_QWORD *)(v521 + 264);
          if ( !updated )
            goto LABEL_863;
          v643.fields.x = v518;
          v643.fields.y = v519;
          v643.fields.z = v520;
          *(UnityEngine_Vector3_o *)&v522 = ScrTerminalMap__ConvertWorldToScreenPosition(
                                              (ScrTerminalMap_o *)updated,
                                              v643,
                                              0LL);
        }
        else
        {
          *(UnityEngine_Vector3_o *)&v522 = GameObjectExtensions__GetLocalPosition(
                                              (UnityEngine_GameObject_o *)v517,
                                              0LL);
        }
        v593 = v522;
        v594 = v523;
        v595 = v524;
        if ( !FSUtility_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
        updated = FSUtility__IsUnderVista(0LL);
        if ( (updated & 1) != 0 )
          goto LABEL_840;
        if ( !*(_DWORD *)(v288 + 24) )
          goto LABEL_864;
        v597 = *(System_String_o **)(v288 + 32);
        updated = System_String__op_Equality(v597, (System_String_o *)StringLiteral_1404/*"10703"*/, 0LL);
        if ( (updated & 1) != 0 )
        {
          v594 = v594 + -95.0;
        }
        else
        {
          updated = System_String__op_Equality(v597, (System_String_o *)StringLiteral_1480/*"30102"*/, 0LL);
          if ( (updated & 1) != 0 )
            v594 = v594 + 45.0;
        }
LABEL_840:
        if ( v108->fields.id != 306 || *(int *)(v288 + 24) < 4 )
        {
          if ( !*v103 )
            goto LABEL_863;
          v609 = (*v103)->fields.mMapCamera;
          v604 = (System_Action_o *)sub_1B64ABC(System_Action_TypeInfo);
          System_Action___ctor(
            v604,
            (Il2CppObject *)v98,
            Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__12__,
            0LL);
          if ( !v609 )
            goto LABEL_863;
          v186 = seca;
          v187 = easeType;
          v182 = v609;
          v183 = v593;
          v184 = v594;
          v185 = v595;
          goto LABEL_845;
        }
        if ( !*v103 )
          goto LABEL_863;
        v612 = (*v103)->fields.mMapCamera;
        *(_QWORD *)&v634.fields.hasValue = &v620;
        v649.fields.x = v593;
        v649.fields.y = v594;
        *(_QWORD *)&v634.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
        v649.fields.z = v595;
        v620 = (System_Nullable_Vector3__o)0LL;
        System_Nullable_Vector3____ctor(v634, v649, v596);
        if ( *(_DWORD *)(v288 + 24) <= 3u )
          goto LABEL_864;
        v613 = System_Single__Parse(*(System_String_o **)(v288 + 56), 0LL);
        v628 = (System_Nullable_float__o)&size;
        size = 0LL;
        System_Nullable_float____ctor(v628, v613, (const MethodInfo_35D2288 *)Method_System_Nullable_float___ctor__);
        v611 = (System_Action_o *)sub_1B64ABC(System_Action_TypeInfo);
        System_Action___ctor(
          v611,
          (Il2CppObject *)v98,
          Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__11__,
          0LL);
        if ( !v612 )
          goto LABEL_863;
        v636 = v620;
        v630 = size;
        v364 = seca;
        v365 = easeType;
        v363 = v612;
        goto LABEL_856;
      case 302:
      case 307:
        updated = (__int64)v108->fields.param;
        if ( !updated )
          goto LABEL_863;
        updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
        if ( !updated )
          goto LABEL_863;
        v290 = *(_QWORD *)(updated + 24);
        v291 = updated;
        if ( (int)v290 <= 0 )
          goto LABEL_330;
        if ( (int)v290 > 2 )
        {
          v505 = System_Single__Parse(*(System_String_o **)(updated + 48), 0LL);
          v290 = *(_QWORD *)(v291 + 24);
          v292 = v505 * 0.001;
        }
        else
        {
          v292 = 0.5;
        }
        sec = v292;
        if ( (int)v290 >= 2 )
        {
          updated = System_Int32__Parse(*(System_String_o **)(v291 + 40), 0LL);
          v290 = *(_QWORD *)(v291 + 24);
          v503 = updated;
        }
        else
        {
          v503 = 15;
        }
        if ( !(_DWORD)v290 )
          goto LABEL_864;
        v525 = *v103;
        updated = System_Int32__Parse(*(System_String_o **)(v291 + 32), 0LL);
        if ( !v525 )
          goto LABEL_863;
        v527 = (UnityEngine_Object_o *)QuestAfterAction__GetMapGameObject(v525, 2, updated, this, v526);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Equality(v527, 0LL, 0LL) )
          return;
        v644 = GameObjectExtensions__GetLocalPosition((UnityEngine_GameObject_o *)v527, 0LL);
        x = v644.fields.x;
        y = v644.fields.y;
        z = v644.fields.z;
        if ( !this->fields.IsMapModel )
          goto LABEL_702;
        if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        if ( !byte_49F97AD )
        {
          sub_1B64870(&TerminalSceneComponent_TypeInfo, v100);
          byte_49F97AD = 1;
        }
        updated = (__int64)TerminalSceneComponent_TypeInfo;
        if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          updated = (__int64)TerminalSceneComponent_TypeInfo;
        }
        v529 = **(_QWORD **)(updated + 184);
        if ( !v529 )
          goto LABEL_863;
        updated = *(_QWORD *)(v529 + 264);
        if ( !updated )
          goto LABEL_863;
        v645.fields.x = x;
        v645.fields.y = y;
        v645.fields.z = z;
        v646 = ScrTerminalMap__ConvertLocalToScreenPosition((ScrTerminalMap_o *)updated, v645, 0LL);
        x = v646.fields.x;
        y = v646.fields.y;
        z = v646.fields.z;
LABEL_702:
        if ( v108->fields.id != 307 || *(int *)(v291 + 24) < 4 )
        {
          if ( !*v103 )
            goto LABEL_863;
          v530 = (*v103)->fields.mMapCamera;
          v531 = (System_Action_o *)sub_1B64ABC(System_Action_TypeInfo);
          v532 = &Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__14__;
LABEL_833:
          v604 = v531;
          System_Action___ctor(v531, (Il2CppObject *)v98, *v532, 0LL);
          if ( !v530 )
            goto LABEL_863;
          v186 = sec;
          v182 = v530;
          v183 = x;
          v184 = y;
          v185 = z;
          v187 = v503;
LABEL_845:
          v188 = v604;
LABEL_846:
          MapCamera__StartAutoMove(v182, *(UnityEngine_Vector3_o *)&v183, v186, v187, v188, 0LL);
          return;
        }
        if ( !*v103 )
          goto LABEL_863;
        v605 = (*v103)->fields.mMapCamera;
        *(_QWORD *)&v632.fields.hasValue = &v620;
        v647.fields.x = x;
        v647.fields.y = y;
        *(_QWORD *)&v632.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
        v647.fields.z = z;
        v620 = (System_Nullable_Vector3__o)0LL;
        System_Nullable_Vector3____ctor(v632, v647, v528);
        if ( *(_DWORD *)(v291 + 24) <= 3u )
          goto LABEL_864;
        v606 = System_Single__Parse(*(System_String_o **)(v291 + 56), 0LL);
        v626 = (System_Nullable_float__o)&size;
        size = 0LL;
        System_Nullable_float____ctor(v626, v606, (const MethodInfo_35D2288 *)Method_System_Nullable_float___ctor__);
        v607 = (System_Action_o *)sub_1B64ABC(System_Action_TypeInfo);
        v608 = &Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__13__;
        break;
      case 303:
      case 308:
        updated = (__int64)v108->fields.param;
        if ( !updated )
          goto LABEL_863;
        updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
        if ( !updated )
          goto LABEL_863;
        v293 = updated;
        if ( *(int *)(updated + 24) < 4 )
          goto LABEL_330;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_49FB449 )
        {
          sub_1B64870(&TerminalPramsManager_TypeInfo, v100);
          byte_49FB449 = 1;
        }
        updated = (__int64)TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          updated = (__int64)TerminalPramsManager_TypeInfo;
        }
        if ( *(_BYTE *)(*(_QWORD *)(updated + 184) + 104LL) )
          goto LABEL_330;
        if ( *(_DWORD *)(v293 + 24) <= 2u )
          goto LABEL_864;
        v294 = System_Single__Parse(*(System_String_o **)(v293 + 48), 0LL) * 0.001;
        v170 = v294 >= 0.0 ? v294 : 0.5;
        if ( *(_DWORD *)(v293 + 24) <= 3u )
          goto LABEL_864;
        v168 = System_Int32__Parse(*(System_String_o **)(v293 + 56), 0LL);
        if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        if ( !byte_49F97AD )
        {
          sub_1B64870(&TerminalSceneComponent_TypeInfo, v100);
          byte_49F97AD = 1;
        }
        updated = (__int64)TerminalSceneComponent_TypeInfo;
        if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          updated = (__int64)TerminalSceneComponent_TypeInfo;
        }
        v295 = **(_QWORD **)(updated + 184);
        if ( !v295 )
          goto LABEL_863;
        if ( !*(_DWORD *)(v293 + 24) )
          goto LABEL_864;
        v296 = *(ScrTerminalMap_o **)(v295 + 264);
        v297 = System_Single__Parse(*(System_String_o **)(v293 + 32), 0LL);
        if ( *(_DWORD *)(v293 + 24) <= 1u )
          goto LABEL_864;
        v298 = v297;
        v299 = System_Single__Parse(*(System_String_o **)(v293 + 40), 0LL);
        if ( !v296 )
          goto LABEL_863;
        *(UnityEngine_Vector3_o *)&v301 = ScrTerminalMap__LocalPosFromCoord(v296, v298, v299, 0.0, 0.0, 0LL);
        v175 = v301;
        v176 = v302;
        v177 = v303;
        if ( v108->fields.id != 308 || *(int *)(v293 + 24) < 5 )
        {
          if ( !*v103 )
            goto LABEL_863;
          mMapCamera = (*v103)->fields.mMapCamera;
          v179 = (System_Action_o *)sub_1B64ABC(System_Action_TypeInfo);
          v180 = &Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__16__;
          goto LABEL_112;
        }
        if ( !*v103 )
          goto LABEL_863;
        v358 = (*v103)->fields.mMapCamera;
        *(_QWORD *)&v635.fields.hasValue = &v620;
        *(_QWORD *)&v635.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
        v620 = (System_Nullable_Vector3__o)0LL;
        System_Nullable_Vector3____ctor(v635, *(UnityEngine_Vector3_o *)&v301, v300);
        if ( *(_DWORD *)(v293 + 24) <= 4u )
          goto LABEL_864;
        v614 = System_Single__Parse(*(System_String_o **)(v293 + 64), 0LL);
        v629 = (System_Nullable_float__o)&size;
        size = 0LL;
        System_Nullable_float____ctor(v629, v614, (const MethodInfo_35D2288 *)Method_System_Nullable_float___ctor__);
        v360 = (System_Action_o *)sub_1B64ABC(System_Action_TypeInfo);
        v361 = &Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__15__;
        goto LABEL_468;
      case 304:
        updated = (__int64)v108->fields.param;
        if ( !updated )
          goto LABEL_863;
        updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
        if ( !updated )
          goto LABEL_863;
        v367 = *(_DWORD *)(updated + 24);
        v368 = updated;
        if ( v367 <= 1 )
          goto LABEL_330;
        v369 = System_Single__Parse(*(System_String_o **)(updated + 32), 0LL);
        if ( *(_DWORD *)(v368 + 24) <= 1u )
          goto LABEL_864;
        v370 = v369;
        v371 = System_Single__Parse(*(System_String_o **)(v368 + 40), 0LL);
        if ( !*v103 )
          goto LABEL_863;
        v372 = (*v103)->fields.mMapCamera;
        v373 = v371 * 0.001;
        if ( v373 >= 0.0 )
          v374 = v373;
        else
          v374 = 0.5;
        if ( v367 < 3 )
        {
          v375 = 5;
        }
        else
        {
          if ( *(_DWORD *)(v368 + 24) <= 2u )
            goto LABEL_864;
          v375 = System_Int32__Parse(*(System_String_o **)(v368 + 48), 0LL);
        }
        v592 = (System_Action_o *)sub_1B64ABC(System_Action_TypeInfo);
        System_Action___ctor(
          v592,
          (Il2CppObject *)v98,
          Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__17__,
          0LL);
        if ( !v372 )
          goto LABEL_863;
        MapCamera__StartAutoZoom(v372, v370, v374, v375, v592, 0LL);
        return;
      default:
        switch ( id )
        {
          case 200:
            if ( this->fields.IsMapModel )
            {
              v189 = sub_1B64ABC(QuestAfterAction_StateMain___c__DisplayClass16_4_TypeInfo);
              QuestAfterAction_StateMain___c__DisplayClass16_4___ctor(
                (QuestAfterAction_StateMain___c__DisplayClass16_4_o *)v189,
                0LL);
              if ( !v189 )
                goto LABEL_863;
              *(_QWORD *)(v189 + 24) = v98;
              sub_1B64814((ServantStatusBattleListViewItem_o *)(v189 + 24), v98, v190, v191);
              v192 = *(_QWORD *)(v189 + 24);
              if ( !v192 )
                goto LABEL_863;
              v193 = *(QuestAfterAction_o **)(v192 + 24);
              updated = System_Int32__Parse(v108->fields.param, 0LL);
              if ( !v193 )
                goto LABEL_863;
              v194 = QuestAfterAction__GetMapComponent_object_(
                       v193,
                       1,
                       updated,
                       this,
                       (const MethodInfo_2ECAFFC *)Method_QuestAfterAction_GetMapComponent_ModelLineComponent___);
              *(_QWORD *)(v189 + 16) = v194;
              sub_1B64814((ServantStatusBattleListViewItem_o *)(v189 + 16), (int32_t)v194, v195, v196);
              v197 = *(UnityEngine_Object_o **)(v189 + 16);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              if ( !UnityEngine_Object__op_Equality(v197, 0LL, 0LL) )
              {
                v198 = *(ModelLineComponent_o **)(v189 + 16);
                v199 = (System_Action_o *)sub_1B64ABC(System_Action_TypeInfo);
                System_Action___ctor(
                  v199,
                  (Il2CppObject *)v189,
                  Method_QuestAfterAction_StateMain___c__DisplayClass16_4__UpdateAnim_b__3__,
                  0LL);
                if ( !v198 )
                  goto LABEL_863;
                v201 = 2;
                goto LABEL_499;
              }
            }
            else
            {
              v533 = sub_1B64ABC(QuestAfterAction_StateMain___c__DisplayClass16_5_TypeInfo);
              QuestAfterAction_StateMain___c__DisplayClass16_5___ctor(
                (QuestAfterAction_StateMain___c__DisplayClass16_5_o *)v533,
                0LL);
              if ( !v533 )
                goto LABEL_863;
              *(_QWORD *)(v533 + 24) = v98;
              sub_1B64814((ServantStatusBattleListViewItem_o *)(v533 + 24), v98, v534, v535);
              v536 = *(_QWORD *)(v533 + 24);
              if ( !v536 )
                goto LABEL_863;
              v537 = *(QuestAfterAction_o **)(v536 + 24);
              updated = System_Int32__Parse(v108->fields.param, 0LL);
              if ( !v537 )
                goto LABEL_863;
              v538 = QuestAfterAction__GetMapComponent_object_(
                       v537,
                       1,
                       updated,
                       this,
                       (const MethodInfo_2ECAFFC *)Method_QuestAfterAction_GetMapComponent_srcLineSprite___);
              *(_QWORD *)(v533 + 16) = v538;
              sub_1B64814((ServantStatusBattleListViewItem_o *)(v533 + 16), (int32_t)v538, v539, v540);
              v541 = *(UnityEngine_Object_o **)(v533 + 16);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              if ( !UnityEngine_Object__op_Equality(v541, 0LL, 0LL) )
              {
                v542 = *(srcLineSprite_o **)(v533 + 16);
                v543 = (System_Action_o *)sub_1B64ABC(System_Action_TypeInfo);
                System_Action___ctor(
                  v543,
                  (Il2CppObject *)v533,
                  Method_QuestAfterAction_StateMain___c__DisplayClass16_5__UpdateAnim_b__4__,
                  0LL);
                if ( !v542 )
                  goto LABEL_863;
                v544 = 2;
                goto LABEL_730;
              }
            }
            return;
          case 201:
            if ( this->fields.IsMapModel )
            {
              v376 = sub_1B64ABC(QuestAfterAction_StateMain___c__DisplayClass16_6_TypeInfo);
              QuestAfterAction_StateMain___c__DisplayClass16_6___ctor(
                (QuestAfterAction_StateMain___c__DisplayClass16_6_o *)v376,
                0LL);
              if ( !v376 )
                goto LABEL_863;
              *(_QWORD *)(v376 + 24) = v98;
              sub_1B64814((ServantStatusBattleListViewItem_o *)(v376 + 24), v98, v377, v378);
              v379 = *(_QWORD *)(v376 + 24);
              if ( !v379 )
                goto LABEL_863;
              v380 = *(QuestAfterAction_o **)(v379 + 24);
              updated = System_Int32__Parse(v108->fields.param, 0LL);
              if ( !v380 )
                goto LABEL_863;
              v381 = QuestAfterAction__GetMapComponent_object_(
                       v380,
                       1,
                       updated,
                       this,
                       (const MethodInfo_2ECAFFC *)Method_QuestAfterAction_GetMapComponent_ModelLineComponent___);
              *(_QWORD *)(v376 + 16) = v381;
              sub_1B64814((ServantStatusBattleListViewItem_o *)(v376 + 16), (int32_t)v381, v382, v383);
              v384 = *(UnityEngine_Object_o **)(v376 + 16);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              if ( !UnityEngine_Object__op_Equality(v384, 0LL, 0LL) )
              {
                v198 = *(ModelLineComponent_o **)(v376 + 16);
                v199 = (System_Action_o *)sub_1B64ABC(System_Action_TypeInfo);
                System_Action___ctor(
                  v199,
                  (Il2CppObject *)v376,
                  Method_QuestAfterAction_StateMain___c__DisplayClass16_6__UpdateAnim_b__5__,
                  0LL);
                if ( !v198 )
                  goto LABEL_863;
                v201 = 3;
                goto LABEL_499;
              }
            }
            else
            {
              v545 = sub_1B64ABC(QuestAfterAction_StateMain___c__DisplayClass16_7_TypeInfo);
              QuestAfterAction_StateMain___c__DisplayClass16_7___ctor(
                (QuestAfterAction_StateMain___c__DisplayClass16_7_o *)v545,
                0LL);
              if ( !v545 )
                goto LABEL_863;
              *(_QWORD *)(v545 + 24) = v98;
              sub_1B64814((ServantStatusBattleListViewItem_o *)(v545 + 24), v98, v546, v547);
              v548 = *(_QWORD *)(v545 + 24);
              if ( !v548 )
                goto LABEL_863;
              v549 = *(QuestAfterAction_o **)(v548 + 24);
              updated = System_Int32__Parse(v108->fields.param, 0LL);
              if ( !v549 )
                goto LABEL_863;
              v550 = QuestAfterAction__GetMapComponent_object_(
                       v549,
                       1,
                       updated,
                       this,
                       (const MethodInfo_2ECAFFC *)Method_QuestAfterAction_GetMapComponent_srcLineSprite___);
              *(_QWORD *)(v545 + 16) = v550;
              sub_1B64814((ServantStatusBattleListViewItem_o *)(v545 + 16), (int32_t)v550, v551, v552);
              v553 = *(UnityEngine_Object_o **)(v545 + 16);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              if ( !UnityEngine_Object__op_Equality(v553, 0LL, 0LL) )
              {
                v542 = *(srcLineSprite_o **)(v545 + 16);
                v543 = (System_Action_o *)sub_1B64ABC(System_Action_TypeInfo);
                System_Action___ctor(
                  v543,
                  (Il2CppObject *)v545,
                  Method_QuestAfterAction_StateMain___c__DisplayClass16_7__UpdateAnim_b__6__,
                  0LL);
                if ( !v542 )
                  goto LABEL_863;
                v544 = 3;
                goto LABEL_730;
              }
            }
            return;
          case 202:
            if ( this->fields.IsMapModel )
            {
              v385 = sub_1B64ABC(QuestAfterAction_StateMain___c__DisplayClass16_8_TypeInfo);
              QuestAfterAction_StateMain___c__DisplayClass16_8___ctor(
                (QuestAfterAction_StateMain___c__DisplayClass16_8_o *)v385,
                0LL);
              if ( !v385 )
                goto LABEL_863;
              *(_QWORD *)(v385 + 24) = v98;
              sub_1B64814((ServantStatusBattleListViewItem_o *)(v385 + 24), v98, v386, v387);
              v388 = *(_QWORD *)(v385 + 24);
              if ( !v388 )
                goto LABEL_863;
              v389 = *(QuestAfterAction_o **)(v388 + 24);
              updated = System_Int32__Parse(v108->fields.param, 0LL);
              if ( !v389 )
                goto LABEL_863;
              v390 = QuestAfterAction__GetMapComponent_object_(
                       v389,
                       1,
                       updated,
                       this,
                       (const MethodInfo_2ECAFFC *)Method_QuestAfterAction_GetMapComponent_ModelLineComponent___);
              *(_QWORD *)(v385 + 16) = v390;
              sub_1B64814((ServantStatusBattleListViewItem_o *)(v385 + 16), (int32_t)v390, v391, v392);
              v393 = *(UnityEngine_Object_o **)(v385 + 16);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              if ( !UnityEngine_Object__op_Equality(v393, 0LL, 0LL) )
              {
                v198 = *(ModelLineComponent_o **)(v385 + 16);
                v199 = (System_Action_o *)sub_1B64ABC(System_Action_TypeInfo);
                System_Action___ctor(
                  v199,
                  (Il2CppObject *)v385,
                  Method_QuestAfterAction_StateMain___c__DisplayClass16_8__UpdateAnim_b__7__,
                  0LL);
                if ( !v198 )
                  goto LABEL_863;
                v201 = 4;
LABEL_499:
                ModelLineComponent__SetState(v198, v201, v199, v200);
              }
            }
            else
            {
              v554 = sub_1B64ABC(QuestAfterAction_StateMain___c__DisplayClass16_9_TypeInfo);
              QuestAfterAction_StateMain___c__DisplayClass16_9___ctor(
                (QuestAfterAction_StateMain___c__DisplayClass16_9_o *)v554,
                0LL);
              if ( !v554 )
                goto LABEL_863;
              *(_QWORD *)(v554 + 24) = v98;
              sub_1B64814((ServantStatusBattleListViewItem_o *)(v554 + 24), v98, v555, v556);
              v557 = *(_QWORD *)(v554 + 24);
              if ( !v557 )
                goto LABEL_863;
              v558 = *(QuestAfterAction_o **)(v557 + 24);
              updated = System_Int32__Parse(v108->fields.param, 0LL);
              if ( !v558 )
                goto LABEL_863;
              v559 = QuestAfterAction__GetMapComponent_object_(
                       v558,
                       1,
                       updated,
                       this,
                       (const MethodInfo_2ECAFFC *)Method_QuestAfterAction_GetMapComponent_srcLineSprite___);
              *(_QWORD *)(v554 + 16) = v559;
              sub_1B64814((ServantStatusBattleListViewItem_o *)(v554 + 16), (int32_t)v559, v560, v561);
              v562 = *(UnityEngine_Object_o **)(v554 + 16);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              if ( !UnityEngine_Object__op_Equality(v562, 0LL, 0LL) )
              {
                v542 = *(srcLineSprite_o **)(v554 + 16);
                v543 = (System_Action_o *)sub_1B64ABC(System_Action_TypeInfo);
                System_Action___ctor(
                  v543,
                  (Il2CppObject *)v554,
                  Method_QuestAfterAction_StateMain___c__DisplayClass16_9__UpdateAnim_b__8__,
                  0LL);
                if ( !v542 )
                  goto LABEL_863;
                v544 = 4;
LABEL_730:
                srcLineSprite__SetState(v542, v544, v543, 0LL);
              }
            }
            return;
          case 203:
            IsMapModel = this->fields.IsMapModel;
            v395 = *v103;
            updated = System_Int32__Parse(v108->fields.param, 0LL);
            if ( !v395 )
              goto LABEL_863;
            if ( IsMapModel )
            {
              v396 = (UnityEngine_Object_o *)QuestAfterAction__GetMapComponent_object_(
                                               v395,
                                               1,
                                               updated,
                                               this,
                                               (const MethodInfo_2ECAFFC *)Method_QuestAfterAction_GetMapComponent_ModelLineComponent___);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              updated = UnityEngine_Object__op_Equality(v396, 0LL, 0LL);
              if ( (updated & 1) != 0 )
                return;
              if ( !v396 )
                goto LABEL_863;
              ModelLineComponent__SetQuestAfterActionScaleAnim_33535264((ModelLineComponent_o *)v396, 0, 0.0, v397);
              v398 = v396[3].klass;
              if ( !v398 )
                goto LABEL_863;
            }
            else
            {
              v563 = (UnityEngine_Object_o *)QuestAfterAction__GetMapComponent_object_(
                                               v395,
                                               1,
                                               updated,
                                               this,
                                               (const MethodInfo_2ECAFFC *)Method_QuestAfterAction_GetMapComponent_srcLineSprite___);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              updated = UnityEngine_Object__op_Equality(v563, 0LL, 0LL);
              if ( (updated & 1) != 0 )
                return;
              if ( !v563 )
                goto LABEL_863;
              srcLineSprite__SetQaaScaleAnimQuick((srcLineSprite_o *)v563, 0, 0LL);
              v398 = v563[5].monitor;
              if ( !v398 )
                goto LABEL_863;
            }
            goto LABEL_779;
          case 204:
            v399 = this->fields.IsMapModel;
            v400 = *v103;
            updated = System_Int32__Parse(v108->fields.param, 0LL);
            if ( !v400 )
              goto LABEL_863;
            if ( v399 )
            {
              v401 = (UnityEngine_Object_o *)QuestAfterAction__GetMapComponent_object_(
                                               v400,
                                               1,
                                               updated,
                                               this,
                                               (const MethodInfo_2ECAFFC *)Method_QuestAfterAction_GetMapComponent_ModelLineComponent___);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              updated = UnityEngine_Object__op_Equality(v401, 0LL, 0LL);
              if ( (updated & 1) != 0 )
                return;
              if ( !v401 )
                goto LABEL_863;
              ModelLineComponent__SetQuestAfterActionScaleAnim_33535264((ModelLineComponent_o *)v401, 1, 0.0, v402);
              ModelLineComponent__SetQuestAfterActionColorAnim_33535740((ModelLineComponent_o *)v401, 0, 0.0, v403);
              v404 = v401[3].klass;
              if ( !v404 )
                goto LABEL_863;
            }
            else
            {
              v564 = (UnityEngine_Object_o *)QuestAfterAction__GetMapComponent_object_(
                                               v400,
                                               1,
                                               updated,
                                               this,
                                               (const MethodInfo_2ECAFFC *)Method_QuestAfterAction_GetMapComponent_srcLineSprite___);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              updated = UnityEngine_Object__op_Equality(v564, 0LL, 0LL);
              if ( (updated & 1) != 0 )
                return;
              if ( !v564 )
                goto LABEL_863;
              srcLineSprite__SetQaaScaleAnimQuick((srcLineSprite_o *)v564, 1, 0LL);
              srcLineSprite__SetQaaColorAnimQuick((srcLineSprite_o *)v564, 0, 0LL);
              v404 = v564[5].monitor;
              if ( !v404 )
                goto LABEL_863;
            }
            v565 = 2;
            goto LABEL_749;
          case 205:
            v405 = this->fields.IsMapModel;
            v406 = *v103;
            updated = System_Int32__Parse(v108->fields.param, 0LL);
            if ( !v406 )
              goto LABEL_863;
            if ( v405 )
            {
              v407 = (UnityEngine_Object_o *)QuestAfterAction__GetMapComponent_object_(
                                               v406,
                                               1,
                                               updated,
                                               this,
                                               (const MethodInfo_2ECAFFC *)Method_QuestAfterAction_GetMapComponent_ModelLineComponent___);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              updated = UnityEngine_Object__op_Equality(v407, 0LL, 0LL);
              if ( (updated & 1) != 0 )
                return;
              if ( !v407 )
                goto LABEL_863;
              ModelLineComponent__SetQuestAfterActionScaleAnim_33535264((ModelLineComponent_o *)v407, 1, 0.0, v408);
              ModelLineComponent__SetQuestAfterActionColorAnim_33535740((ModelLineComponent_o *)v407, 1, 0.0, v409);
              v404 = v407[3].klass;
              if ( !v404 )
                goto LABEL_863;
            }
            else
            {
              v566 = (UnityEngine_Object_o *)QuestAfterAction__GetMapComponent_object_(
                                               v406,
                                               1,
                                               updated,
                                               this,
                                               (const MethodInfo_2ECAFFC *)Method_QuestAfterAction_GetMapComponent_srcLineSprite___);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              updated = UnityEngine_Object__op_Equality(v566, 0LL, 0LL);
              if ( (updated & 1) != 0 )
                return;
              if ( !v566 )
                goto LABEL_863;
              srcLineSprite__SetQaaScaleAnimQuick((srcLineSprite_o *)v566, 1, 0LL);
              srcLineSprite__SetQaaColorAnimQuick((srcLineSprite_o *)v566, 1, 0LL);
              v404 = v566[5].monitor;
              if ( !v404 )
                goto LABEL_863;
            }
            v565 = 1;
LABEL_749:
            v404[4] = v565;
            goto LABEL_18;
          default:
            if ( id != 350 )
              return;
            updated = (__int64)v108->fields.param;
            if ( !updated )
              goto LABEL_863;
            updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
            if ( !updated )
              goto LABEL_863;
            v304 = updated;
            if ( *(int *)(updated + 24) <= 0 )
              goto LABEL_330;
            v305 = System_Int32__Parse(*(System_String_o **)(updated + 32), 0LL);
            if ( v305 < 1 )
              goto LABEL_330;
            v306 = v305;
            v307 = 0.5;
            if ( *(int *)(v304 + 24) > 1 )
            {
              v308 = System_Int32__Parse(*(System_String_o **)(v304 + 40), 0LL);
              if ( *(int *)(v304 + 24) >= 3 )
                v307 = System_Single__Parse(*(System_String_o **)(v304 + 48), 0LL) * 0.001;
            }
            else
            {
              v308 = 15;
            }
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            if ( !byte_49F97AD )
            {
              sub_1B64870(&TerminalSceneComponent_TypeInfo, v100);
              byte_49F97AD = 1;
            }
            updated = (__int64)TerminalSceneComponent_TypeInfo;
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
              updated = (__int64)TerminalSceneComponent_TypeInfo;
            }
            v598 = **(_QWORD **)(updated + 184);
            if ( !v598 )
              goto LABEL_863;
            v599 = *(ScrTerminalMap_o **)(v598 + 264);
            v600 = (System_Action_o *)sub_1B64ABC(System_Action_TypeInfo);
            System_Action___ctor(
              v600,
              (Il2CppObject *)v98,
              Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__18__,
              0LL);
            if ( !v599 )
              goto LABEL_863;
            ScrTerminalMap__RequestMapMove_34185764(v599, v306, v307, v308, v600, 0LL);
            return;
        }
    }
    v611 = v607;
    System_Action___ctor(v607, (Il2CppObject *)v98, *v608, 0LL);
    if ( !v605 )
      goto LABEL_863;
    v636 = v620;
    v630 = size;
    v364 = sec;
    v363 = v605;
    v365 = v503;
LABEL_856:
    v366 = v611;
    goto LABEL_857;
  }
  if ( id <= 604 )
  {
    if ( id > 540 )
    {
      switch ( id )
      {
        case 600:
          v123 = (System_String_o *)StringLiteral_1/*""*/;
          v124 = System_String__Concat_61383576((System_String_o *)StringLiteral_10772/*"QUEST_AFTER_ACTION_MESSAGE_"*/, v108->fields.param, 0LL);
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v125 = LocalizationManager__Get(v124, 0LL);
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v127 = (System_Action_o *)sub_1B64ABC(System_Action_TypeInfo);
          System_Action___ctor(
            v127,
            (Il2CppObject *)v98,
            Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__36__,
            0LL);
          if ( !Instance )
            goto LABEL_863;
          CommonUI__OpenNotificationDialog(
            (CommonUI_o *)Instance,
            v123,
            v125,
            v127,
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
            0LL);
          return;
        case 601:
          v254 = (System_String_o *)StringLiteral_1/*""*/;
          updated = sub_1B64918(string___TypeInfo, 1LL);
          if ( !updated )
            goto LABEL_863;
          v257 = (System_String_array *)updated;
          if ( !*(_DWORD *)(updated + 24) )
            goto LABEL_864;
          v258 = StringLiteral_89/*"\r\n"*/;
          *(_QWORD *)(updated + 32) = StringLiteral_89/*"\r\n"*/;
          sub_1B64814((ServantStatusBattleListViewItem_o *)(updated + 32), v258, v255, v256);
          updated = (__int64)v108->fields.param;
          if ( !updated )
            goto LABEL_863;
          updated = (__int64)System_String__Split_61409800((System_String_o *)updated, v257, 0, 0LL);
          if ( !updated )
            goto LABEL_863;
          v259 = *(_DWORD *)(updated + 24);
          if ( v259 <= 0 )
            goto LABEL_330;
          v260 = *(System_String_o **)(updated + 32);
          if ( v259 == 1 )
          {
            v261 = *(System_String_o **)(updated + 32);
            v260 = v254;
          }
          else
          {
            v261 = *(System_String_o **)(updated + 40);
          }
          v500 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v501 = (System_Action_o *)sub_1B64ABC(System_Action_TypeInfo);
          System_Action___ctor(
            v501,
            (Il2CppObject *)v98,
            Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__37__,
            0LL);
          if ( !v500 )
            goto LABEL_863;
          CommonUI__OpenNotificationDialog(
            (CommonUI_o *)v500,
            v260,
            v261,
            v501,
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
            0LL);
          return;
        case 602:
          v262 = (System_String_o *)StringLiteral_1/*""*/;
          v263 = System_String__Concat_61383576((System_String_o *)StringLiteral_10772/*"QUEST_AFTER_ACTION_MESSAGE_"*/, v108->fields.param, 0LL);
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v264 = LocalizationManager__Get(v263, 0LL);
          v265 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v266 = (System_Action_o *)sub_1B64ABC(System_Action_TypeInfo);
          System_Action___ctor(
            v266,
            (Il2CppObject *)v98,
            Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__38__,
            0LL);
          if ( !v265 )
            goto LABEL_863;
          onClickOkSeKind = 0;
          goto LABEL_636;
        case 603:
          v267 = (System_String_o *)StringLiteral_1/*""*/;
          updated = sub_1B64918(string___TypeInfo, 1LL);
          if ( !updated )
            goto LABEL_863;
          v270 = (System_String_array *)updated;
          if ( !*(_DWORD *)(updated + 24) )
            goto LABEL_864;
          v271 = StringLiteral_89/*"\r\n"*/;
          *(_QWORD *)(updated + 32) = StringLiteral_89/*"\r\n"*/;
          sub_1B64814((ServantStatusBattleListViewItem_o *)(updated + 32), v271, v268, v269);
          updated = (__int64)v108->fields.param;
          if ( !updated )
            goto LABEL_863;
          updated = (__int64)System_String__Split_61409800((System_String_o *)updated, v270, 0, 0LL);
          if ( !updated )
            goto LABEL_863;
          v272 = *(_DWORD *)(updated + 24);
          if ( v272 <= 0 )
            goto LABEL_330;
          v262 = *(System_String_o **)(updated + 32);
          if ( v272 == 1 )
          {
            v264 = *(System_String_o **)(updated + 32);
            v262 = v267;
          }
          else
          {
            v264 = *(System_String_o **)(updated + 40);
          }
          v265 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v266 = (System_Action_o *)sub_1B64ABC(System_Action_TypeInfo);
          System_Action___ctor(
            v266,
            (Il2CppObject *)v98,
            Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__39__,
            0LL);
          if ( !v265 )
            goto LABEL_863;
          onClickOkSeKind = 1;
LABEL_636:
          CommonUI__OpenNotificationDialog_30348220(
            (CommonUI_o *)v265,
            v262,
            v264,
            v266,
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
            0LL);
          return;
        case 604:
          v273 = (System_String_o *)StringLiteral_1/*""*/;
          v274 = System_String__Concat_61383576((System_String_o *)StringLiteral_10772/*"QUEST_AFTER_ACTION_MESSAGE_"*/, v108->fields.param, 0LL);
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v275 = LocalizationManager__Get(v274, 0LL);
          v276 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v277 = (System_Action_o *)sub_1B64ABC(System_Action_TypeInfo);
          System_Action___ctor(
            v277,
            (Il2CppObject *)v98,
            Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__40__,
            0LL);
          if ( !v276 )
            goto LABEL_863;
          CommonUI__OpenNotificationDialog_30348220(
            (CommonUI_o *)v276,
            v273,
            v275,
            v277,
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
            0LL);
          return;
        default:
          if ( id == 550 )
            goto LABEL_18;
          if ( id != 560 )
            return;
          updated = (__int64)v108->fields.param;
          if ( !updated )
            goto LABEL_863;
          updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
          if ( !updated )
            goto LABEL_863;
          v202 = *(_QWORD *)(updated + 24);
          if ( v202 )
          {
            if ( !(_DWORD)v202 )
              goto LABEL_864;
            updated = System_Int32__Parse(*(System_String_o **)(updated + 32), 0LL);
            v204 = *v103;
            if ( !*v103 )
              goto LABEL_863;
            TitleInfoCtrlCallback_k__BackingField = v204->fields._TitleInfoCtrlCallback_k__BackingField;
            if ( (int)updated >= 1 )
            {
              if ( !TitleInfoCtrlCallback_k__BackingField )
                goto LABEL_863;
              QuestAfterAction_TitleInfoControlCallback__Start(
                v204->fields._TitleInfoCtrlCallback_k__BackingField,
                0LL,
                v203);
              goto LABEL_18;
            }
          }
          else
          {
            if ( !*v103 )
              goto LABEL_863;
            TitleInfoCtrlCallback_k__BackingField = (*v103)->fields._TitleInfoCtrlCallback_k__BackingField;
          }
          v410 = (System_Action_o *)sub_1B64ABC(System_Action_TypeInfo);
          System_Action___ctor(v410, (Il2CppObject *)this, (intptr_t)this->klass->vtable._15_onEnd.methodPtr, 0LL);
          if ( !TitleInfoCtrlCallback_k__BackingField )
            goto LABEL_863;
          QuestAfterAction_TitleInfoControlCallback__Start(TitleInfoCtrlCallback_k__BackingField, v410, v411);
          return;
      }
    }
    if ( id == 530 )
    {
      v206 = System_Int32__Parse(v108->fields.param, 0LL);
      updated = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !updated )
        goto LABEL_863;
      updated = (__int64)DataManager__GetMasterData_object_(
                           (DataManager_o *)updated,
                           (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_QuestMaster___);
      if ( !updated )
        goto LABEL_863;
      v207 = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)updated,
               v206,
               (const MethodInfo_30D6180 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
      updated = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_36EE738 *)Method_SingletonTemplate_QuestTree__get_Instance__);
      if ( !updated )
        goto LABEL_863;
      updated = (__int64)QuestTree__GetQuestInfo((QuestTree_o *)updated, v206, 0LL);
      if ( !updated )
        goto LABEL_863;
      v209 = updated;
      if ( *(_DWORD *)(updated + 32) == 1 )
      {
        if ( !v207 )
          goto LABEL_863;
        if ( QuestEntity__HasFlag((QuestEntity_o *)v207, 2LL, 0LL) )
        {
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          if ( !byte_49FB138 )
          {
            sub_1B64870(&TerminalPramsManager_TypeInfo, v210);
            byte_49FB138 = 1;
          }
          v211 = TerminalPramsManager_TypeInfo;
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            v211 = TerminalPramsManager_TypeInfo;
          }
          v211->static_fields->_QuestId_k__BackingField = v206;
          v212 = *(_DWORD *)(v209 + 44);
          if ( !byte_49FB13C )
          {
            sub_1B64870(&TerminalPramsManager_TypeInfo, v210);
            v211 = TerminalPramsManager_TypeInfo;
            byte_49FB13C = 1;
          }
          if ( !v211->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v211);
            v211 = TerminalPramsManager_TypeInfo;
          }
          v211->static_fields->_PhaseCnt_k__BackingField = v212;
          updated = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_36EE738 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
          v213 = (clsQuestCheck_o *)updated;
          v214 = QuestAfterAction_StateMain___c_TypeInfo;
          if ( !QuestAfterAction_StateMain___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(QuestAfterAction_StateMain___c_TypeInfo);
            v214 = QuestAfterAction_StateMain___c_TypeInfo;
          }
          _9__16_33 = v214->static_fields->__9__16_33;
          if ( !_9__16_33 )
          {
            if ( !v214->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v214);
              v214 = QuestAfterAction_StateMain___c_TypeInfo;
            }
            v216 = (Il2CppObject *)v214->static_fields->__9;
            _9__16_33 = (System_Action_o *)sub_1B64ABC(System_Action_TypeInfo);
            System_Action___ctor(_9__16_33, v216, Method_QuestAfterAction_StateMain___c__UpdateAnim_b__16_33__, 0LL);
            v217 = QuestAfterAction_StateMain___c_TypeInfo->static_fields;
            v217->__9__16_33 = _9__16_33;
            sub_1B64814((ServantStatusBattleListViewItem_o *)&v217->__9__16_33, (int32_t)_9__16_33, v218, v219);
          }
          if ( !v213 )
            goto LABEL_863;
          clsQuestCheck__PlayQuestStartAction(v213, _9__16_33, 0LL);
        }
      }
      else
      {
        QuestAfterAction_StateMain__ForceEndAnim(this, 1, v208);
      }
      return;
    }
    if ( id != 540 )
      return;
    updated = (__int64)v108->fields.param;
    if ( !updated )
      goto LABEL_863;
    updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
    if ( !updated )
      goto LABEL_863;
    v143 = updated;
    if ( !*(_DWORD *)(updated + 24) )
LABEL_864:
      sub_1B64AD4(updated, v100);
    v144 = System_Int32__Parse(*(System_String_o **)(updated + 32), 0LL);
    if ( *(int *)(v143 + 24) < 2 )
    {
      v145 = -1;
    }
    else
    {
      v145 = System_Int32__Parse(*(System_String_o **)(v143 + 40), 0LL);
      if ( *(int *)(v143 + 24) >= 3 )
      {
        v146 = System_Int32__Parse(*(System_String_o **)(v143 + 48), 0LL);
LABEL_247:
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_49F9B2E )
        {
          sub_1B64870(&TerminalPramsManager_TypeInfo, v100);
          byte_49F9B2E = 1;
        }
        v249 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v249 = TerminalPramsManager_TypeInfo;
        }
        v249->static_fields->_IsAutoResume_k__BackingField = 1;
        if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        if ( !byte_49F97AD )
        {
          sub_1B64870(&TerminalSceneComponent_TypeInfo, v100);
          byte_49F97AD = 1;
        }
        updated = (__int64)TerminalSceneComponent_TypeInfo;
        if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          updated = (__int64)TerminalSceneComponent_TypeInfo;
        }
        v250 = **(_QWORD **)(updated + 184);
        if ( !v250 )
          goto LABEL_863;
        updated = *(_QWORD *)(v250 + 264);
        if ( !updated )
          goto LABEL_863;
        if ( !ScrTerminalMap__RequestMapChange((ScrTerminalMap_o *)updated, v144, v145, v146, 0LL) )
        {
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          if ( !byte_49F9B2E )
          {
            sub_1B64870(&TerminalPramsManager_TypeInfo, v251);
            byte_49F9B2E = 1;
          }
          v253 = TerminalPramsManager_TypeInfo;
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            v253 = TerminalPramsManager_TypeInfo;
          }
          v253->static_fields->_IsAutoResume_k__BackingField = 0;
          goto LABEL_18;
        }
        ((void (__fastcall *)(QuestAfterAction_StateMain_o *, Il2CppMethodPointer))this->klass->vtable._14_EndAnim.method)(
          this,
          this->klass->vtable._15_onEnd.methodPtr);
        updated = (__int64)*v103;
        if ( !*v103 )
          goto LABEL_863;
        QuestAfterAction__SetState((QuestAfterAction_o *)updated, 0, v252);
        return;
      }
    }
    v146 = -1;
    goto LABEL_247;
  }
  if ( id <= 801 )
  {
    if ( id != 700 )
    {
      if ( id != 800 )
      {
        if ( id == 801 )
        {
          param = v108->fields.param;
          v132 = Method_QuestAfterAction_StateMain_UpdateAnim__;
          if ( (*((_BYTE *)Method_QuestAfterAction_StateMain_UpdateAnim__ + 83) & 2) != 0 )
            v132 = (_QWORD *)sub_1B64888(Method_QuestAfterAction_StateMain_UpdateAnim__);
          v133 = (System_Reflection_MethodBase_o *)sub_1B64854(v132, v132[4]);
          OverwriteAssetSoundName__PlaySe(v133, param, 0LL);
          goto LABEL_18;
        }
        return;
      }
      v241 = *v103;
      if ( !*v103 )
        goto LABEL_863;
      updated = (__int64)v241->fields.svtVoices;
      if ( !updated )
        goto LABEL_863;
      if ( System_Collections_Generic_Dictionary_int__object___TryGetValue(
             (System_Collections_Generic_Dictionary_int__object__o *)updated,
             v241->fields.commandIdx,
             &value,
             (const MethodInfo_31273EC *)Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__TryGetValue__) )
      {
        updated = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
        if ( !updated )
          goto LABEL_863;
        AutomatedAction__TerminateMissionAction((AutomatedAction_o *)updated, 0LL);
        if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        if ( !byte_49F97AD )
        {
          sub_1B64870(&TerminalSceneComponent_TypeInfo, v100);
          byte_49F97AD = 1;
        }
        updated = (__int64)TerminalSceneComponent_TypeInfo;
        if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          updated = (__int64)TerminalSceneComponent_TypeInfo;
        }
        v242 = **(_QWORD **)(updated + 184);
        if ( !v242 )
          goto LABEL_863;
        if ( !*(_QWORD *)(v242 + 456) )
          goto LABEL_236;
        if ( !*(_DWORD *)(updated + 224) )
          j_il2cpp_runtime_class_init_0(updated);
        if ( !byte_49F97AD )
        {
          sub_1B64870(&TerminalSceneComponent_TypeInfo, v100);
          byte_49F97AD = 1;
        }
        updated = (__int64)TerminalSceneComponent_TypeInfo;
        if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          updated = (__int64)TerminalSceneComponent_TypeInfo;
        }
        v243 = **(_QWORD **)(updated + 184);
        if ( !v243 )
          goto LABEL_863;
        v244 = *(_QWORD *)(v243 + 456);
        if ( !v244 )
          goto LABEL_863;
        updated = *(unsigned int *)(v244 + 48);
        if ( !(_DWORD)updated )
        {
LABEL_236:
          if ( !value )
            goto LABEL_863;
          updated = LODWORD(value[1].klass);
        }
        if ( (int)updated < 1 )
        {
          if ( !value )
            goto LABEL_863;
          v412 = (System_String_o *)value[1].monitor;
          if ( !SoundManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
          SoundManager__playVoice(v412, 0LL);
        }
        else
        {
          updated = (__int64)ServantVoiceEntity__getVoiceAssetName_39441004(updated, 0LL);
          if ( !value )
            goto LABEL_863;
          v245 = (System_String_o *)updated;
          v246 = (System_String_o *)value[1].monitor;
          v247 = SeManager_TypeInfo;
          if ( !SeManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
            v247 = SeManager_TypeInfo;
          }
          DEFAULT_VOLUME = v247->static_fields->DEFAULT_VOLUME;
          if ( !SoundManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
          SoundManager__playVoice_38391544(v245, v246, DEFAULT_VOLUME, 0LL, 0LL);
        }
      }
LABEL_330:
      ((void (__fastcall *)(QuestAfterAction_StateMain_o *, Il2CppMethodPointer))this->klass->vtable._14_EndAnim.method)(
        this,
        this->klass->vtable._15_onEnd.methodPtr);
      return;
    }
    updated = (__int64)v108->fields.param;
    if ( !updated )
      goto LABEL_863;
    updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
    if ( !updated )
      goto LABEL_863;
    v238 = updated;
    if ( *(_DWORD *)(updated + 24) )
    {
      v239 = System_Int32__Parse(*(System_String_o **)(updated + 32), 0LL);
      if ( *(int *)(v238 + 24) >= 2 )
        v240 = System_Int32__Parse(*(System_String_o **)(v238 + 40), 0LL) + 1;
      else
        v240 = 0;
      v286 = (SceneJumpInfo_o *)sub_1B64ABC(SceneJumpInfo_TypeInfo);
      SceneJumpInfo___ctor_38279168(v286, (System_String_o *)StringLiteral_1/*""*/, v239, v240, 0LL);
      updated = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      if ( !updated )
        goto LABEL_863;
      AvalonSceneManager__transitionScene((AvalonSceneManager_o *)updated, 72, 1, (Il2CppObject *)v286, 0LL);
      goto LABEL_330;
    }
    goto LABEL_864;
  }
  switch ( id )
  {
    case 850:
      if ( !SoundManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      SoundManager__stopBgm(0LL);
      if ( !*v103 )
        goto LABEL_863;
      (*v103)->fields.isRequestedStopBgm = 1;
      goto LABEL_18;
    case 851:
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      if ( !byte_49F97AD )
      {
        sub_1B64870(&TerminalSceneComponent_TypeInfo, v100);
        byte_49F97AD = 1;
      }
      v220 = TerminalSceneComponent_TypeInfo;
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        v220 = TerminalSceneComponent_TypeInfo;
      }
      v221 = v220->static_fields->mInstance;
      updated = (__int64)QuestAfterAction_Command__GetBgmName(v108, v100);
      if ( !v221 )
        goto LABEL_863;
      TerminalSceneComponent__playBgm(v221, (System_String_o *)updated, 0LL);
      if ( !*v103 )
        goto LABEL_863;
      (*v103)->fields.isRequestedStopBgm = 0;
      goto LABEL_18;
    case 900:
      v113 = (float)System_Int32__Parse(v108->fields.param, 0LL) / 1000.0;
      if ( v113 <= 0.0 )
        goto LABEL_18;
      this->fields.waitTime = v113;
      this->fields.waitStartTime = UnityEngine_Time__get_realtimeSinceStartup(0LL);
      break;
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
  int32_t v3; // w3
  TerminalSceneComponent_c *screenCollider; // x0
  __int64 v7; // x1
  struct QuestAfterAction_o *v8; // x8
  struct TerminalSceneComponent_o *mInstance; // x8

  if ( (byte_49FB438 & 1) == 0 )
  {
    sub_1B64870(&TerminalSceneComponent_TypeInfo, that);
    byte_49FB438 = 1;
  }
  this->fields.that = that;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)that, (int32_t)method, v3);
  v8 = this->fields.that;
  if ( !v8 )
    goto LABEL_14;
  screenCollider = (TerminalSceneComponent_c *)v8->fields.screenCollider;
  if ( !screenCollider )
    goto LABEL_14;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)screenCollider, 1, 0LL);
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_49F97AD )
  {
    sub_1B64870(&TerminalSceneComponent_TypeInfo, v7);
    byte_49F97AD = 1;
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
    sub_1B64ACC(screenCollider, v7);
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
    sub_1B64ACC(this, method);
  return that->fields.commandBuf;
}


int32_t __fastcall QuestAfterAction_StateMain__get_CommandIndex(
        QuestAfterAction_StateMain_o *this,
        const MethodInfo *method)
{
  struct QuestAfterAction_o *that; // x8

  that = this->fields.that;
  if ( !that )
    sub_1B64ACC(this, method);
  return that->fields.commandIdx;
}


UnityEngine_GameObject_o *__fastcall QuestAfterAction_StateMain__get_SubGimmickRoot(
        QuestAfterAction_StateMain_o *this,
        const MethodInfo *method)
{
  TerminalSceneComponent_c *v2; // x0
  struct TerminalSceneComponent_o *mInstance; // x8
  struct ScrTerminalMap_o *mTerminalMap; // x8

  if ( (byte_49FB437 & 1) == 0 )
  {
    sub_1B64870(&TerminalSceneComponent_TypeInfo, method);
    byte_49FB437 = 1;
  }
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_49F97AD )
  {
    sub_1B64870(&TerminalSceneComponent_TypeInfo, method);
    byte_49F97AD = 1;
  }
  v2 = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v2 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = v2->static_fields->mInstance;
  if ( !mInstance || (mTerminalMap = mInstance->fields.mTerminalMap) == 0LL )
    sub_1B64ACC(v2, method);
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

  if ( (byte_49FB43A & 1) == 0 )
  {
    sub_1B64870(&TerminalSceneComponent_TypeInfo, deleteKey);
    sub_1B64870(&StringLiteral_16642/*"afterActionBk"*/, v5);
    byte_49FB43A = 1;
  }
  if ( deleteKey )
    UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_16642/*"afterActionBk"*/, 0LL);
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_49F97AD )
  {
    sub_1B64870(&TerminalSceneComponent_TypeInfo, deleteKey);
    byte_49F97AD = 1;
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
    sub_1B64ACC(mInstance, deleteKey);
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
    sub_1B64ACC(this, value);
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
  int32_t v4; // w3

  if ( (byte_49FB497 & 1) == 0 )
  {
    sub_1B64870(&QuestAfterAction_StateMain___c_TypeInfo, v1);
    byte_49FB497 = 1;
  }
  v2 = (Il2CppObject *)sub_1B64ABC(QuestAfterAction_StateMain___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  QuestAfterAction_StateMain___c_TypeInfo->static_fields->__9 = (struct QuestAfterAction_StateMain___c_o *)v2;
  sub_1B64814(
    (ServantStatusBattleListViewItem_o *)QuestAfterAction_StateMain___c_TypeInfo->static_fields,
    (int32_t)v2,
    v3,
    v4);
}


void __fastcall QuestAfterAction_StateMain___c___ctor(QuestAfterAction_StateMain___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QuestAfterAction_StateMain___c___UpdateAnim_b__16_31(
        QuestAfterAction_StateMain___c_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall QuestAfterAction_StateMain___c___UpdateAnim_b__16_33(
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
  ScriptManager_CallbackFunc_o *_9__16_34; // x21
  Il2CppObject *v12; // x22
  struct QuestAfterAction_StateMain___c_StaticFields *static_fields; // x0
  int32_t v14; // w2
  int32_t v15; // w3

  if ( (byte_49FB498 & 1) == 0 )
  {
    sub_1B64870(&ScriptManager_CallbackFunc_TypeInfo, method);
    sub_1B64870(&ScriptManager_TypeInfo, v2);
    sub_1B64870(&TerminalPramsManager_TypeInfo, v3);
    sub_1B64870(&Method_QuestAfterAction_StateMain___c__UpdateAnim_b__16_34__, v4);
    sub_1B64870(&QuestAfterAction_StateMain___c_TypeInfo, v5);
    byte_49FB498 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_49FB137 )
  {
    sub_1B64870(&TerminalPramsManager_TypeInfo, method);
    byte_49FB137 = 1;
  }
  v6 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v6 = TerminalPramsManager_TypeInfo;
  }
  WarId_k__BackingField = v6->static_fields->_WarId_k__BackingField;
  if ( !byte_49FB134 )
  {
    sub_1B64870(&TerminalPramsManager_TypeInfo, method);
    v6 = TerminalPramsManager_TypeInfo;
    byte_49FB134 = 1;
  }
  if ( !v6->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v6);
    v6 = TerminalPramsManager_TypeInfo;
  }
  QuestId_k__BackingField = v6->static_fields->_QuestId_k__BackingField;
  if ( !byte_49FB13F )
  {
    sub_1B64870(&TerminalPramsManager_TypeInfo, method);
    v6 = TerminalPramsManager_TypeInfo;
    byte_49FB13F = 1;
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
  _9__16_34 = v9->static_fields->__9__16_34;
  if ( !_9__16_34 )
  {
    if ( !v9->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v9);
      v9 = QuestAfterAction_StateMain___c_TypeInfo;
    }
    v12 = (Il2CppObject *)v9->static_fields->__9;
    _9__16_34 = (ScriptManager_CallbackFunc_o *)sub_1B64ABC(ScriptManager_CallbackFunc_TypeInfo);
    ScriptManager_CallbackFunc___ctor(_9__16_34, v12, Method_QuestAfterAction_StateMain___c__UpdateAnim_b__16_34__, 0LL);
    static_fields = QuestAfterAction_StateMain___c_TypeInfo->static_fields;
    static_fields->__9__16_34 = _9__16_34;
    sub_1B64814((ServantStatusBattleListViewItem_o *)&static_fields->__9__16_34, (int32_t)_9__16_34, v14, v15);
  }
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  ScriptManager__PlayBattleStart(
    WarId_k__BackingField,
    QuestId_k__BackingField,
    PhaseCnt_k__BackingField + 1,
    _9__16_34,
    0,
    0LL,
    -1,
    0,
    0,
    0LL,
    0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestAfterAction_StateMain___c___UpdateAnim_b__16_34(
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
  NetworkManager_ResultCallbackFunc_o *_9__16_35; // x19
  Il2CppObject *v11; // x20
  struct QuestAfterAction_StateMain___c_StaticFields *static_fields; // x0
  int32_t v13; // w2
  int32_t v14; // w3
  __int64 v15; // x1
  Il2CppObject *Request_object; // x19
  TerminalPramsManager_c *v17; // x0
  int32_t QuestId_k__BackingField; // w21
  int32_t PhaseCnt_k__BackingField; // w20
  System_Int32_array *SelectRouteArray; // x0
  __int64 v21; // x1

  if ( (byte_49FB499 & 1) == 0 )
  {
    sub_1B64870(&Method_NetworkManager_getRequest_BattleScenarioRequest___, isExit);
    sub_1B64870(&NetworkManager_TypeInfo, v3);
    sub_1B64870(&NetworkManager_ResultCallbackFunc_TypeInfo, v4);
    sub_1B64870(&ScriptManager_TypeInfo, v5);
    sub_1B64870(&TerminalPramsManager_TypeInfo, v6);
    sub_1B64870(&Method_QuestAfterAction_StateMain___c__UpdateAnim_b__16_35__, v7);
    sub_1B64870(&QuestAfterAction_StateMain___c_TypeInfo, v8);
    byte_49FB499 = 1;
  }
  v9 = QuestAfterAction_StateMain___c_TypeInfo;
  if ( !QuestAfterAction_StateMain___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestAfterAction_StateMain___c_TypeInfo);
    v9 = QuestAfterAction_StateMain___c_TypeInfo;
  }
  _9__16_35 = v9->static_fields->__9__16_35;
  if ( !_9__16_35 )
  {
    if ( !v9->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v9);
      v9 = QuestAfterAction_StateMain___c_TypeInfo;
    }
    v11 = (Il2CppObject *)v9->static_fields->__9;
    _9__16_35 = (NetworkManager_ResultCallbackFunc_o *)sub_1B64ABC(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      _9__16_35,
      v11,
      Method_QuestAfterAction_StateMain___c__UpdateAnim_b__16_35__,
      0LL);
    static_fields = QuestAfterAction_StateMain___c_TypeInfo->static_fields;
    static_fields->__9__16_35 = _9__16_35;
    sub_1B64814((ServantStatusBattleListViewItem_o *)&static_fields->__9__16_35, (int32_t)_9__16_35, v13, v14);
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     _9__16_35,
                     (const MethodInfo_2EBCCAC *)Method_NetworkManager_getRequest_BattleScenarioRequest___);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_49FB134 )
  {
    sub_1B64870(&TerminalPramsManager_TypeInfo, v15);
    byte_49FB134 = 1;
  }
  v17 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v17 = TerminalPramsManager_TypeInfo;
  }
  QuestId_k__BackingField = v17->static_fields->_QuestId_k__BackingField;
  if ( !byte_49FB13F )
  {
    sub_1B64870(&TerminalPramsManager_TypeInfo, v15);
    v17 = TerminalPramsManager_TypeInfo;
    byte_49FB13F = 1;
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
    sub_1B64ACC(SelectRouteArray, v21);
  BattleScenarioRequest__beginRequest(
    (BattleScenarioRequest_o *)Request_object,
    QuestId_k__BackingField,
    PhaseCnt_k__BackingField + 1,
    SelectRouteArray,
    0LL);
}


void __fastcall QuestAfterAction_StateMain___c___UpdateAnim_b__16_35(
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
  Il2CppObject *v11; // x19
  System_Object_array *v12; // x19
  __int64 v13; // x1
  TerminalPramsManager_c *v14; // x0
  Il2CppObject *Instance; // x0
  __int64 v16; // x1

  if ( (byte_49FB49A & 1) == 0 )
  {
    sub_1B64870(&Method_JsonManager_DeserializeArray_BattleResultComponent_resultData___, jsonstr);
    sub_1B64870(&JsonManager_TypeInfo, v4);
    sub_1B64870(&ScriptManager_TypeInfo, v5);
    sub_1B64870(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v6);
    sub_1B64870(&TerminalPramsManager_TypeInfo, v7);
    sub_1B64870(&StringLiteral_16642/*"afterActionBk"*/, v8);
    sub_1B64870(&StringLiteral_15746/*"["*/, v9);
    sub_1B64870(&StringLiteral_16002/*"]"*/, v10);
    byte_49FB49A = 1;
  }
  v11 = (Il2CppObject *)System_String__Concat_61394836(
                          (System_String_o *)StringLiteral_15746/*"["*/,
                          jsonstr,
                          (System_String_o *)StringLiteral_16002/*"]"*/,
                          0LL);
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v12 = JsonManager__DeserializeArray_object_(
          v11,
          (const MethodInfo_2EA119C *)Method_JsonManager_DeserializeArray_BattleResultComponent_resultData___);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_16642/*"afterActionBk"*/, 0LL);
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  ScriptManager__ClearSelectRouteArray(0LL);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  TerminalPramsManager__ReceiveQuestEndResultInfo((BattleResultComponent_resultData_array *)v12, 1, 0LL);
  if ( !byte_49F9B2E )
  {
    sub_1B64870(&TerminalPramsManager_TypeInfo, v13);
    byte_49F9B2E = 1;
  }
  v14 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v14 = TerminalPramsManager_TypeInfo;
  }
  v14->static_fields->_IsAutoResume_k__BackingField = 1;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1B64ACC(0LL, v16);
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
    sub_1B64ACC(0LL, method);
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
    sub_1B64ACC(0LL, method);
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
    sub_1B64ACC(0LL, method);
  ((void (__fastcall *)(struct QuestAfterAction_StateMain_o *, Il2CppMethodPointer))_4__this->klass->vtable._14_EndAnim.method)(
    _4__this,
    _4__this->klass->vtable._15_onEnd.methodPtr);
}


void __fastcall QuestAfterAction_StateMain___c__DisplayClass16_0___UpdateAnim_b__13(
        QuestAfterAction_StateMain___c__DisplayClass16_0_o *this,
        const MethodInfo *method)
{
  struct QuestAfterAction_StateMain_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1B64ACC(0LL, method);
  ((void (__fastcall *)(struct QuestAfterAction_StateMain_o *, Il2CppMethodPointer))_4__this->klass->vtable._14_EndAnim.method)(
    _4__this,
    _4__this->klass->vtable._15_onEnd.methodPtr);
}


void __fastcall QuestAfterAction_StateMain___c__DisplayClass16_0___UpdateAnim_b__14(
        QuestAfterAction_StateMain___c__DisplayClass16_0_o *this,
        const MethodInfo *method)
{
  struct QuestAfterAction_StateMain_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1B64ACC(0LL, method);
  ((void (__fastcall *)(struct QuestAfterAction_StateMain_o *, Il2CppMethodPointer))_4__this->klass->vtable._14_EndAnim.method)(
    _4__this,
    _4__this->klass->vtable._15_onEnd.methodPtr);
}


void __fastcall QuestAfterAction_StateMain___c__DisplayClass16_0___UpdateAnim_b__15(
        QuestAfterAction_StateMain___c__DisplayClass16_0_o *this,
        const MethodInfo *method)
{
  struct QuestAfterAction_StateMain_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1B64ACC(0LL, method);
  ((void (__fastcall *)(struct QuestAfterAction_StateMain_o *, Il2CppMethodPointer))_4__this->klass->vtable._14_EndAnim.method)(
    _4__this,
    _4__this->klass->vtable._15_onEnd.methodPtr);
}


void __fastcall QuestAfterAction_StateMain___c__DisplayClass16_0___UpdateAnim_b__16(
        QuestAfterAction_StateMain___c__DisplayClass16_0_o *this,
        const MethodInfo *method)
{
  struct QuestAfterAction_StateMain_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1B64ACC(0LL, method);
  ((void (__fastcall *)(struct QuestAfterAction_StateMain_o *, Il2CppMethodPointer))_4__this->klass->vtable._14_EndAnim.method)(
    _4__this,
    _4__this->klass->vtable._15_onEnd.methodPtr);
}


void __fastcall QuestAfterAction_StateMain___c__DisplayClass16_0___UpdateAnim_b__17(
        QuestAfterAction_StateMain___c__DisplayClass16_0_o *this,
        const MethodInfo *method)
{
  struct QuestAfterAction_StateMain_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1B64ACC(0LL, method);
  ((void (__fastcall *)(struct QuestAfterAction_StateMain_o *, Il2CppMethodPointer))_4__this->klass->vtable._14_EndAnim.method)(
    _4__this,
    _4__this->klass->vtable._15_onEnd.methodPtr);
}


void __fastcall QuestAfterAction_StateMain___c__DisplayClass16_0___UpdateAnim_b__18(
        QuestAfterAction_StateMain___c__DisplayClass16_0_o *this,
        const MethodInfo *method)
{
  struct QuestAfterAction_StateMain_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1B64ACC(0LL, method);
  ((void (__fastcall *)(struct QuestAfterAction_StateMain_o *, Il2CppMethodPointer))_4__this->klass->vtable._14_EndAnim.method)(
    _4__this,
    _4__this->klass->vtable._15_onEnd.methodPtr);
}


void __fastcall QuestAfterAction_StateMain___c__DisplayClass16_0___UpdateAnim_b__19(
        QuestAfterAction_StateMain___c__DisplayClass16_0_o *this,
        const MethodInfo *method)
{
  struct QuestAfterAction_StateMain_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1B64ACC(0LL, method);
  ((void (__fastcall *)(struct QuestAfterAction_StateMain_o *, Il2CppMethodPointer))_4__this->klass->vtable._14_EndAnim.method)(
    _4__this,
    _4__this->klass->vtable._15_onEnd.methodPtr);
}


void __fastcall QuestAfterAction_StateMain___c__DisplayClass16_0___UpdateAnim_b__20(
        QuestAfterAction_StateMain___c__DisplayClass16_0_o *this,
        const MethodInfo *method)
{
  struct QuestAfterAction_StateMain_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1B64ACC(0LL, method);
  ((void (__fastcall *)(struct QuestAfterAction_StateMain_o *, Il2CppMethodPointer))_4__this->klass->vtable._14_EndAnim.method)(
    _4__this,
    _4__this->klass->vtable._15_onEnd.methodPtr);
}


void __fastcall QuestAfterAction_StateMain___c__DisplayClass16_0___UpdateAnim_b__25(
        QuestAfterAction_StateMain___c__DisplayClass16_0_o *this,
        const MethodInfo *method)
{
  struct QuestAfterAction_StateMain_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1B64ACC(0LL, method);
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
  if ( !_4__this
    || (((void (__fastcall *)(struct QuestAfterAction_StateMain_o *, Il2CppMethodPointer))_4__this->klass->vtable._14_EndAnim.method)(
          _4__this,
          _4__this->klass->vtable._15_onEnd.methodPtr),
        (_4__this = this->fields.__4__this) == 0LL) )
  {
    sub_1B64ACC(_4__this, method);
  }
  ((void (__fastcall *)(struct QuestAfterAction_StateMain_o *, struct QuestAfterAction_o *, Il2CppMethodPointer))_4__this->klass->vtable._13_UpdateAnim.method)(
    _4__this,
    this->fields.that,
    _4__this->klass->vtable._14_EndAnim.methodPtr);
}


void __fastcall QuestAfterAction_StateMain___c__DisplayClass16_0___UpdateAnim_b__36(
        QuestAfterAction_StateMain___c__DisplayClass16_0_o *this,
        const MethodInfo *method)
{
  struct QuestAfterAction_StateMain_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1B64ACC(0LL, method);
  ((void (__fastcall *)(struct QuestAfterAction_StateMain_o *, Il2CppMethodPointer))_4__this->klass->vtable._14_EndAnim.method)(
    _4__this,
    _4__this->klass->vtable._15_onEnd.methodPtr);
}


void __fastcall QuestAfterAction_StateMain___c__DisplayClass16_0___UpdateAnim_b__37(
        QuestAfterAction_StateMain___c__DisplayClass16_0_o *this,
        const MethodInfo *method)
{
  struct QuestAfterAction_StateMain_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1B64ACC(0LL, method);
  ((void (__fastcall *)(struct QuestAfterAction_StateMain_o *, Il2CppMethodPointer))_4__this->klass->vtable._14_EndAnim.method)(
    _4__this,
    _4__this->klass->vtable._15_onEnd.methodPtr);
}


void __fastcall QuestAfterAction_StateMain___c__DisplayClass16_0___UpdateAnim_b__38(
        QuestAfterAction_StateMain___c__DisplayClass16_0_o *this,
        const MethodInfo *method)
{
  struct QuestAfterAction_StateMain_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1B64ACC(0LL, method);
  ((void (__fastcall *)(struct QuestAfterAction_StateMain_o *, Il2CppMethodPointer))_4__this->klass->vtable._14_EndAnim.method)(
    _4__this,
    _4__this->klass->vtable._15_onEnd.methodPtr);
}


void __fastcall QuestAfterAction_StateMain___c__DisplayClass16_0___UpdateAnim_b__39(
        QuestAfterAction_StateMain___c__DisplayClass16_0_o *this,
        const MethodInfo *method)
{
  struct QuestAfterAction_StateMain_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1B64ACC(0LL, method);
  ((void (__fastcall *)(struct QuestAfterAction_StateMain_o *, Il2CppMethodPointer))_4__this->klass->vtable._14_EndAnim.method)(
    _4__this,
    _4__this->klass->vtable._15_onEnd.methodPtr);
}


void __fastcall QuestAfterAction_StateMain___c__DisplayClass16_0___UpdateAnim_b__40(
        QuestAfterAction_StateMain___c__DisplayClass16_0_o *this,
        const MethodInfo *method)
{
  struct QuestAfterAction_StateMain_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1B64ACC(0LL, method);
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
    sub_1B64ACC(0LL, method);
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
    sub_1B64ACC(spot, method);
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


void __fastcall QuestAfterAction_StateMain___c__DisplayClass16_10___UpdateAnim_b__21(
        QuestAfterAction_StateMain___c__DisplayClass16_10_o *this,
        const MethodInfo *method)
{
  struct MapGimmickComponent_o *mapGimmick; // x8
  struct MapControl_MapGimmickInfo_o *mMapCtrl_MapGimmickInfo; // x8

  mapGimmick = this->fields.mapGimmick;
  if ( !mapGimmick || (mMapCtrl_MapGimmickInfo = mapGimmick->fields.mMapCtrl_MapGimmickInfo) == 0LL )
    sub_1B64ACC(this, method);
  mMapCtrl_MapGimmickInfo->fields.dispType = 0;
}


void __fastcall QuestAfterAction_StateMain___c__DisplayClass16_10___UpdateAnim_b__22(
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
    sub_1B64ACC(this, method);
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


void __fastcall QuestAfterAction_StateMain___c__DisplayClass16_11___UpdateAnim_b__23(
        QuestAfterAction_StateMain___c__DisplayClass16_11_o *this,
        const MethodInfo *method)
{
  struct MapGimmickComponent_o *mapGimmick; // x8
  struct MapControl_MapGimmickInfo_o *mMapCtrl_MapGimmickInfo; // x8

  mapGimmick = this->fields.mapGimmick;
  if ( !mapGimmick || (mMapCtrl_MapGimmickInfo = mapGimmick->fields.mMapCtrl_MapGimmickInfo) == 0LL )
    sub_1B64ACC(this, method);
  mMapCtrl_MapGimmickInfo->fields.dispType = 1;
}


void __fastcall QuestAfterAction_StateMain___c__DisplayClass16_11___UpdateAnim_b__24(
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
    sub_1B64ACC(this, method);
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


void __fastcall QuestAfterAction_StateMain___c__DisplayClass16_12___UpdateAnim_b__26(
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
    sub_1B64ACC(this, method);
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


void __fastcall QuestAfterAction_StateMain___c__DisplayClass16_13___UpdateAnim_b__27(
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
  int32_t v11; // w3
  UnityEngine_Component_o *v12; // x22
  Il2CppObject *v13; // x0
  UnityEngine_Color_o **v14; // x21
  int32_t v15; // w2
  int32_t v16; // w3
  struct System_String_array *paramsStr; // x8
  struct System_String_array *v18; // x8
  UnityEngine_Color_o *v19; // x20
  float v20; // s0
  UITweener_o *v21; // x20
  EventDelegate_Callback_o *v22; // x21
  UnityEngine_Color_o color; // [xsp+10h] [xbp-40h] BYREF

  if ( (byte_49FB49B & 1) == 0 )
  {
    sub_1B64870(&EventDelegate_Callback_TypeInfo, method);
    sub_1B64870(&Method_UnityEngine_GameObject_AddComponent_TweenColor___, v3);
    sub_1B64870(&Method_UnityEngine_GameObject_GetComponentInChildren_UISprite___, v4);
    sub_1B64870(&Method_QuestAfterAction_StateMain___c__DisplayClass16_14__UpdateAnim_b__28__, v5);
    sub_1B64870(&QuestAfterAction_StateMain___c__DisplayClass16_14_TypeInfo, v6);
    byte_49FB49B = 1;
  }
  *(_QWORD *)&color.fields.r = 0LL;
  *(_QWORD *)&color.fields.b = 0LL;
  v7 = sub_1B64ABC(QuestAfterAction_StateMain___c__DisplayClass16_14_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7 )
    goto LABEL_18;
  *(_QWORD *)(v7 + 24) = this;
  sub_1B64814((ServantStatusBattleListViewItem_o *)(v7 + 24), (int32_t)this, v10, v11);
  mapGimmick = (UnityEngine_Component_o *)this->fields.mapGimmick;
  if ( !mapGimmick )
    goto LABEL_18;
  mapGimmick = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mapGimmick, 0LL);
  if ( !mapGimmick )
    goto LABEL_18;
  mapGimmick = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponentInChildren_object_(
                                            (UnityEngine_GameObject_o *)mapGimmick,
                                            (const MethodInfo_2E8A418 *)Method_UnityEngine_GameObject_GetComponentInChildren_UISprite___);
  if ( !mapGimmick )
    goto LABEL_18;
  v12 = mapGimmick;
  mapGimmick = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mapGimmick, 0LL);
  if ( !mapGimmick )
    goto LABEL_18;
  v13 = UnityEngine_GameObject__AddComponent_object_(
          (UnityEngine_GameObject_o *)mapGimmick,
          (const MethodInfo_2E8A0CC *)Method_UnityEngine_GameObject_AddComponent_TweenColor___);
  *(_QWORD *)(v7 + 16) = v13;
  v14 = (UnityEngine_Color_o **)(v7 + 16);
  sub_1B64814((ServantStatusBattleListViewItem_o *)(v7 + 16), (int32_t)v13, v15, v16);
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
    || ((*v14)[9] = color, (v18 = this->fields.paramsStr) == 0LL) )
  {
LABEL_18:
    sub_1B64ACC(mapGimmick, v9);
  }
  if ( v18->max_length <= 2 )
LABEL_19:
    sub_1B64AD4(mapGimmick, v9);
  v19 = *v14;
  v20 = System_Single__Parse(v18->m_Items[2], 0LL);
  if ( !v19 )
    goto LABEL_18;
  v19[3].fields.b = v20;
  mapGimmick = (UnityEngine_Component_o *)*v14;
  if ( !*v14 )
    goto LABEL_18;
  UITweener__PlayForward((UITweener_o *)mapGimmick, 0LL);
  v21 = *(UITweener_o **)(v7 + 16);
  v22 = (EventDelegate_Callback_o *)sub_1B64ABC(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(
    v22,
    (Il2CppObject *)v7,
    Method_QuestAfterAction_StateMain___c__DisplayClass16_14__UpdateAnim_b__28__,
    0LL);
  if ( !v21 )
    goto LABEL_18;
  UITweener__SetOnFinished(v21, v22, 0LL);
}


void __fastcall QuestAfterAction_StateMain___c__DisplayClass16_14___ctor(
        QuestAfterAction_StateMain___c__DisplayClass16_14_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QuestAfterAction_StateMain___c__DisplayClass16_14___UpdateAnim_b__28(
        QuestAfterAction_StateMain___c__DisplayClass16_14_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *tween; // x20
  struct QuestAfterAction_StateMain_o *_4__this; // x0
  __int64 v5; // x1
  struct QuestAfterAction_StateMain___c__DisplayClass16_13_o *CS___8__locals14; // x8
  struct QuestAfterAction_StateMain___c__DisplayClass16_0_o *CS___8__locals13; // x8

  if ( (byte_49FB49C & 1) == 0 )
  {
    sub_1B64870(&UnityEngine_Object_TypeInfo, method);
    byte_49FB49C = 1;
  }
  tween = (UnityEngine_Object_o *)this->fields.tween;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_69135916(tween, 0LL);
  CS___8__locals14 = this->fields.CS___8__locals14;
  if ( !CS___8__locals14
    || (CS___8__locals13 = CS___8__locals14->fields.CS___8__locals13) == 0LL
    || (_4__this = CS___8__locals13->fields.__4__this) == 0LL )
  {
    sub_1B64ACC(_4__this, v5);
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


void __fastcall QuestAfterAction_StateMain___c__DisplayClass16_15___UpdateAnim_b__29(
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
    sub_1B64ACC(this, method);
  }
  ((void (__fastcall *)(QuestAfterAction_StateMain___c__DisplayClass16_15_o *, Il2CppRuntimeInterfaceOffsetPair *))this->klass[1]._1.implementedInterfaces)(
    this,
    this->klass[1]._1.interfaceOffsets);
}


void __fastcall QuestAfterAction_StateMain___c__DisplayClass16_15___UpdateAnim_b__30(
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
    sub_1B64ACC(this, method);
  }
  ((void (__fastcall *)(QuestAfterAction_StateMain___c__DisplayClass16_15_o *, Il2CppRuntimeInterfaceOffsetPair *))this->klass[1]._1.implementedInterfaces)(
    this,
    this->klass[1]._1.interfaceOffsets);
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
    sub_1B64ACC(spot, method);
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
    sub_1B64ACC(spot, method);
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
    sub_1B64ACC(this, method);
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
    sub_1B64ACC(this, method);
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
    sub_1B64ACC(this, method);
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
    sub_1B64ACC(this, method);
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
    sub_1B64ACC(this, method);
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
    sub_1B64ACC(this, method);
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
  int32_t v3; // w3
  struct System_Action_o *end; // x8
  ServantStatusBattleListViewItem_o *p_end; // x19

  p_end = (ServantStatusBattleListViewItem_o *)&this->fields.end;
  end = this->fields.end;
  if ( end )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))end->fields.m_target)(
      end->fields.original_method_info,
      *(_QWORD *)&end->fields.extra_arg);
  p_end->klass = 0LL;
  sub_1B64814(p_end, 0, v2, v3);
}


bool __fastcall QuestAfterAction_TitleInfoControlCallback__HasStartCallback(
        QuestAfterAction_TitleInfoControlCallback_o *this,
        const MethodInfo *method)
{
  return this->fields.start != 0LL;
}


void __fastcall QuestAfterAction_TitleInfoControlCallback__SetStartCallback(
        QuestAfterAction_TitleInfoControlCallback_o *this,
        System_Action_o *startCallback,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields.start = startCallback;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)startCallback, (int32_t)method, v3);
}


void __fastcall QuestAfterAction_TitleInfoControlCallback__Start(
        QuestAfterAction_TitleInfoControlCallback_o *this,
        System_Action_o *endCallback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  struct System_Action_o *end; // x8
  struct System_Action_o **p_end; // x20
  const MethodInfo *v8; // x1
  struct System_Action_o *start; // x8

  p_end = &this->fields.end;
  end = this->fields.end;
  if ( end )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, const MethodInfo *))end->fields.m_target)(
      end->fields.original_method_info,
      *(_QWORD *)&end->fields.extra_arg,
      method);
  this->fields.end = endCallback;
  sub_1B64814((ServantStatusBattleListViewItem_o *)p_end, (int32_t)endCallback, (int32_t)method, v3);
  start = this->fields.start;
  if ( start )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))start->fields.m_target)(
      start->fields.original_method_info,
      *(_QWORD *)&start->fields.extra_arg);
  else
    QuestAfterAction_TitleInfoControlCallback__End(this, v8);
}


void __fastcall QuestAfterAction_VoiceInfo___ctor(
        QuestAfterAction_VoiceInfo_o *this,
        int32_t sId,
        System_String_o *vName,
        const MethodInfo *method)
{
  QuestAfterAction_VoiceInfo_o *v6; // x21
  int32_t v7; // w2
  int32_t v8; // w3

  v6 = this;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v6->fields.voiceName = vName;
  v6 = (QuestAfterAction_VoiceInfo_o *)((char *)v6 + 24);
  LODWORD(v6[-1].fields.voiceName) = sId;
  sub_1B64814((ServantStatusBattleListViewItem_o *)v6, (int32_t)vName, v7, v8);
}


void __fastcall QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__74___ctor(
        QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__74_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
  this->fields.__l__initialThreadId = System_Environment__get_CurrentManagedThreadId(0LL);
}


bool __fastcall QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__74__MoveNext(
        QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__74_o *this,
        const MethodInfo *method)
{
  QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__74_o *v2; // x21
  __int64 v3; // x1
  __int64 v4; // x1
  int32_t _1__state; // w8
  QuestAfterAction_o *_4__this; // x19
  struct System_Collections_Generic_IEnumerable_QuestAfterAction_Command__o *commandEnumerable; // x20
  System_Collections_Generic_IEnumerable_QuestAfterAction_Command__c *klass; // x8
  __int64 v9; // x9
  int *p_offset; // x10
  __int64 p_method; // x0
  __int64 v12; // x1
  int32_t v13; // w2
  int32_t v14; // w3
  struct System_Collections_Generic_IEnumerator_QuestAfterAction_Command__o *_7__wrap1; // x20
  System_Collections_Generic_IEnumerator_QuestAfterAction_Command__c *v16; // x8
  __int64 v17; // x9
  int *v18; // x10
  __int64 v19; // x0
  const MethodInfo *v20; // x1
  struct System_Collections_Generic_IEnumerator_QuestAfterAction_Command__o *v21; // x20
  System_Collections_Generic_IEnumerator_QuestAfterAction_Command__c *v22; // x8
  __int64 v23; // x9
  int *v24; // x10
  __int64 v25; // x0
  __int64 v26; // x0
  __int64 v27; // x1
  QuestAfterAction_Command_o *v28; // x20
  int32_t CommandType; // w21
  int32_t CommandTargetId; // w2
  int32_t v31; // w2
  int32_t v32; // w3
  int32_t v33; // w2
  int32_t v34; // w3
  bool result; // w0
  QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__74_o *v36; // [xsp+18h] [xbp-38h]

  v2 = this;
  v36 = this;
  if ( (byte_49FB4A0 & 1) == 0 )
  {
    sub_1B64870(&System_Collections_Generic_IEnumerable_QuestAfterAction_Command__TypeInfo, method);
    sub_1B64870(&System_Collections_Generic_IEnumerator_QuestAfterAction_Command__TypeInfo, v3);
    this = (QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__74_o *)sub_1B64870(
                                                                                    &System_Collections_IEnumerator_TypeInfo,
                                                                                    v4);
    byte_49FB4A0 = 1;
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
      sub_1B64ACC(this, method);
    klass = commandEnumerable->klass;
    v9 = *(unsigned __int16 *)(&commandEnumerable->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&commandEnumerable->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerable_QuestAfterAction_Command__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_QuestAfterAction_Command__TypeInfo )
      {
        --v9;
        p_offset += 4;
        if ( !v9 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_1BB6850(
                   commandEnumerable,
                   System_Collections_Generic_IEnumerable_QuestAfterAction_Command__TypeInfo,
                   0LL);
    }
    v12 = (*(__int64 (__fastcall **)(struct System_Collections_Generic_IEnumerable_QuestAfterAction_Command__o *, _QWORD))p_method)(
            commandEnumerable,
            *(_QWORD *)(p_method + 8));
    v36->fields.__7__wrap1 = (struct System_Collections_Generic_IEnumerator_QuestAfterAction_Command__o *)v12;
    sub_1B64814((ServantStatusBattleListViewItem_o *)&v36->fields.__7__wrap1, v12, v13, v14);
    v2 = v36;
  }
  _7__wrap1 = v2->fields.__7__wrap1;
  v2->fields.__1__state = -3;
  if ( !_7__wrap1 )
LABEL_32:
    sub_1B64ACC(this, method);
  while ( 1 )
  {
    v16 = _7__wrap1->klass;
    v17 = *(unsigned __int16 *)(&_7__wrap1->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&_7__wrap1->klass->_2.bitflags2 + 3) )
    {
      v18 = &v16->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)v18 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v17;
        v18 += 4;
        if ( !v17 )
          goto LABEL_18;
      }
      v19 = (__int64)&v16->vtable[*v18].method;
    }
    else
    {
LABEL_18:
      v19 = sub_1BB6850(_7__wrap1, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(struct System_Collections_Generic_IEnumerator_QuestAfterAction_Command__o *, _QWORD))v19)(
            _7__wrap1,
            *(_QWORD *)(v19 + 8)) & 1) == 0 )
    {
      QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__74____m__Finally1(v36, v20);
      v36->fields.__7__wrap1 = 0LL;
      sub_1B64814((ServantStatusBattleListViewItem_o *)&v36->fields.__7__wrap1, 0, v33, v34);
      return 0;
    }
    v21 = v36->fields.__7__wrap1;
    if ( !v21 )
      sub_1B64ACC(v36, v20);
    v22 = v21->klass;
    v23 = *(unsigned __int16 *)(&v21->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v21->klass->_2.bitflags2 + 3) )
    {
      v24 = &v22->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_QuestAfterAction_Command__c **)v24 - 1) != System_Collections_Generic_IEnumerator_QuestAfterAction_Command__TypeInfo )
      {
        --v23;
        v24 += 4;
        if ( !v23 )
          goto LABEL_26;
      }
      v25 = (__int64)&v22->vtable[*v24].method;
    }
    else
    {
LABEL_26:
      v25 = sub_1BB6850(
              v36->fields.__7__wrap1,
              System_Collections_Generic_IEnumerator_QuestAfterAction_Command__TypeInfo,
              0LL);
    }
    v26 = (*(__int64 (__fastcall **)(struct System_Collections_Generic_IEnumerator_QuestAfterAction_Command__o *, _QWORD))v25)(
            v21,
            *(_QWORD *)(v25 + 8));
    v28 = (QuestAfterAction_Command_o *)v26;
    if ( !v26 )
      sub_1B64ACC(0LL, v27);
    if ( !_4__this )
      sub_1B64ACC(v26, v27);
    CommandType = QuestAfterAction__GetCommandType(_4__this, *(_DWORD *)(v26 + 16), 0LL);
    CommandTargetId = QuestAfterAction__ExtractCommandTargetId(v28, 0LL);
    this = (QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__74_o *)QuestAfterAction__IsExistCommand(
                                                                                    _4__this,
                                                                                    CommandType,
                                                                                    CommandTargetId,
                                                                                    0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
      break;
    _7__wrap1 = v36->fields.__7__wrap1;
    if ( !_7__wrap1 )
      goto LABEL_32;
  }
  v36->fields.__2__current = v28;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&v36->fields.__2__current, (int32_t)v28, v31, v32);
  result = 1;
  v36->fields.__1__state = 1;
  return result;
}


System_Collections_Generic_IEnumerator_QuestAfterAction_Command__o *__fastcall QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__74__System_Collections_Generic_IEnumerable_QuestAfterAction_Command__GetEnumerator(
        QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__74_o *this,
        const MethodInfo *method)
{
  int32_t l__initialThreadId; // w20
  int32_t v4; // w2
  int32_t v5; // w3
  QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__74_o *v6; // x20
  struct QuestAfterAction_o *_4__this; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  struct System_Collections_Generic_IEnumerable_QuestAfterAction_Command__o *_3__commandEnumerable; // x1

  if ( (byte_49FB4A2 & 1) == 0 )
  {
    sub_1B64870(&QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__74_TypeInfo, method);
    byte_49FB4A2 = 1;
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
    v6 = (QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__74_o *)sub_1B64ABC(QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__74_TypeInfo);
    System_Object___ctor((Il2CppObject *)v6, 0LL);
    v6->fields.__1__state = 0;
    v6->fields.__l__initialThreadId = System_Environment__get_CurrentManagedThreadId(0LL);
    _4__this = this->fields.__4__this;
    v6->fields.__4__this = _4__this;
    sub_1B64814((ServantStatusBattleListViewItem_o *)&v6->fields.__4__this, (int32_t)_4__this, v8, v9);
  }
  _3__commandEnumerable = this->fields.__3__commandEnumerable;
  v6->fields.commandEnumerable = _3__commandEnumerable;
  sub_1B64814(
    (ServantStatusBattleListViewItem_o *)&v6->fields.commandEnumerable,
    (int32_t)_3__commandEnumerable,
    v4,
    v5);
  return (System_Collections_Generic_IEnumerator_QuestAfterAction_Command__o *)v6;
}


QuestAfterAction_Command_o *__fastcall QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__74__System_Collections_Generic_IEnumerator_QuestAfterAction_Command__get_Current(
        QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__74_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__74__System_Collections_IEnumerator_Reset(
        QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__74_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1B64884(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B64ABC(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B64884(&Method_QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__74_System_Collections_IEnumerator_Reset__);
  sub_1B64998(v3, v4);
}


Il2CppObject *__fastcall QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__74__System_Collections_IEnumerator_get_Current(
        QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__74_o *this,
        const MethodInfo *method)
{
  return (Il2CppObject *)this->fields.__2__current;
}


void __fastcall QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__74__System_IDisposable_Dispose(
        QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__74_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w8

  _1__state = this->fields.__1__state;
  if ( _1__state == 1 || _1__state == -3 )
    QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__74____m__Finally1(this, method);
}


void __fastcall QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__74____m__Finally1(
        QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__74_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_IEnumerator_QuestAfterAction_Command__o *_7__wrap1; // x19
  System_Collections_Generic_IEnumerator_QuestAfterAction_Command__c *klass; // x8
  __int64 v5; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0

  if ( (byte_49FB4A1 & 1) == 0 )
  {
    sub_1B64870(&System_IDisposable_TypeInfo, method);
    byte_49FB4A1 = 1;
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
      p_method = sub_1BB6850(_7__wrap1, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(struct System_Collections_Generic_IEnumerator_QuestAfterAction_Command__o *, _QWORD))p_method)(
      _7__wrap1,
      *(_QWORD *)(p_method + 8));
  }
}


void __fastcall QuestAfterAction__WaitWhileMainStateFinished_d__78___ctor(
        QuestAfterAction__WaitWhileMainStateFinished_d__78_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall QuestAfterAction__WaitWhileMainStateFinished_d__78__MoveNext(
        QuestAfterAction__WaitWhileMainStateFinished_d__78_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  struct QuestAfterAction_o *_4__this; // x8
  Il2CppObject **p__2__current; // x19
  bool result; // w0

  if ( this->fields.__1__state < 2u )
  {
    _4__this = this->fields.__4__this;
    this->fields.__1__state = -1;
    if ( !_4__this )
      sub_1B64ACC(this, method);
    if ( _4__this->fields.isKeepingMainStateButFinished )
    {
      this->fields.__2__current = 0LL;
      p__2__current = &this->fields.__2__current;
      sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.__2__current, 0, v2, v3);
      result = 1;
      *((_DWORD *)p__2__current - 2) = 1;
      return result;
    }
    ActionExtensions__Call(this->fields.action, 0LL);
  }
  return 0;
}


Il2CppObject *__fastcall QuestAfterAction__WaitWhileMainStateFinished_d__78__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        QuestAfterAction__WaitWhileMainStateFinished_d__78_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn QuestAfterAction__WaitWhileMainStateFinished_d__78__System_Collections_IEnumerator_Reset(
        QuestAfterAction__WaitWhileMainStateFinished_d__78_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1B64884(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B64ABC(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B64884(&Method_QuestAfterAction__WaitWhileMainStateFinished_d__78_System_Collections_IEnumerator_Reset__);
  sub_1B64998(v3, v4);
}


Il2CppObject *__fastcall QuestAfterAction__WaitWhileMainStateFinished_d__78__System_Collections_IEnumerator_get_Current(
        QuestAfterAction__WaitWhileMainStateFinished_d__78_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall QuestAfterAction__WaitWhileMainStateFinished_d__78__System_IDisposable_Dispose(
        QuestAfterAction__WaitWhileMainStateFinished_d__78_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall QuestAfterAction___c__DisplayClass67_0___ctor(
        QuestAfterAction___c__DisplayClass67_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QuestAfterAction___c__DisplayClass67_0___LoadVoice_b__0(
        QuestAfterAction___c__DisplayClass67_0_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *svtVInfos; // x0

  if ( (byte_49FB49D & 1) == 0 )
  {
    sub_1B64870(&Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo__RemoveAt__, method);
    byte_49FB49D = 1;
  }
  svtVInfos = (System_Collections_Generic_List_object__o *)this->fields.svtVInfos;
  if ( !svtVInfos
    || (System_Collections_Generic_List_object___RemoveAt(
          svtVInfos,
          0,
          (const MethodInfo_34B1224 *)Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo__RemoveAt__),
        (svtVInfos = (System_Collections_Generic_List_object__o *)this->fields.__4__this) == 0LL) )
  {
    sub_1B64ACC(svtVInfos, method);
  }
  QuestAfterAction__LoadVoice_33551588(
    (QuestAfterAction_o *)svtVInfos,
    this->fields.svtVInfos,
    this->fields.endAct,
    0LL);
}


void __fastcall QuestAfterAction___c__DisplayClass71_0___ctor(
        QuestAfterAction___c__DisplayClass71_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QuestAfterAction___c__DisplayClass71_0___Play_b__0(
        QuestAfterAction___c__DisplayClass71_0_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_49FB49E & 1) == 0 )
  {
    sub_1B64870(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, method);
    byte_49FB49E = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_36EE738 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    sub_1B64ACC(0LL, v4);
  MissionNotifyManager__EndPause((MissionNotifyManager_o *)Instance, 0LL);
  ActionExtensions__Call(this->fields.endAct, 0LL);
}


void __fastcall QuestAfterAction___c__DisplayClass72_0___ctor(
        QuestAfterAction___c__DisplayClass72_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QuestAfterAction___c__DisplayClass72_0___PlaySpecifiedAction_b__0(
        QuestAfterAction___c__DisplayClass72_0_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  char *_4__this; // x0
  int32_t v6; // w2
  int32_t v7; // w3

  if ( (byte_49FB49F & 1) == 0 )
  {
    sub_1B64870(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, method);
    byte_49FB49F = 1;
  }
  _4__this = (char *)this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_8;
  *((_QWORD *)_4__this + 21) = 0LL;
  sub_1B64814((ServantStatusBattleListViewItem_o *)_4__this + 1, 0, v2, v3);
  _4__this = (char *)this->fields.__4__this;
  if ( !_4__this
    || (*((_QWORD *)_4__this + 9) = 0LL,
        sub_1B64814((ServantStatusBattleListViewItem_o *)(_4__this + 72), 0, v6, v7),
        (_4__this = (char *)SingletonTemplate_object___get_Instance((const MethodInfo_36EE738 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__)) == 0LL)
    || (MissionNotifyManager__EndPause((MissionNotifyManager_o *)_4__this, 0LL),
        (_4__this = (char *)this->fields.__4__this) == 0LL) )
  {
LABEL_8:
    sub_1B64ACC(_4__this, method);
  }
  QuestAfterAction__SetState((QuestAfterAction_o *)_4__this, 0, 0LL);
  ActionExtensions__Call(this->fields.finishCallback, 0LL);
}


void __fastcall QuestAfterAction___c__DisplayClass72_0___PlaySpecifiedAction_b__1(
        QuestAfterAction___c__DisplayClass72_0_o *this,
        const MethodInfo *method)
{
  QuestAfterAction_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1B64ACC(0LL, method);
  QuestAfterAction__SetState(_4__this, 2, 0LL);
}