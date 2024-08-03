void __fastcall QuestAfterAction___ctor(QuestAfterAction_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  Il2CppObject *v10; // x20
  int32_t v11; // w2
  int32_t v12; // w3
  __int64 v13; // x1
  __int64 v14; // x2
  BlankEarthQuestAfterAction_o *v15; // x20
  int32_t v16; // w2
  int32_t v17; // w3
  __int64 v18; // x1
  __int64 v19; // x2
  System_Collections_Generic_Dictionary_TKey__TValue__o *v20; // x20
  int32_t v21; // w2
  int32_t v22; // w3
  __int64 v23; // x1
  __int64 v24; // x2
  System_Collections_Generic_Dictionary_int__object__o *v25; // x20
  int32_t v26; // w2
  int32_t v27; // w3

  if ( (byte_49F9344 & 1) == 0 )
  {
    sub_1B640C8(&BlankEarthQuestAfterAction_TypeInfo, method);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo___ctor__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int____ctor__, v5);
    sub_1B640C8(&System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___TypeInfo, v6);
    sub_1B640C8(&System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__TypeInfo, v7);
    sub_1B640C8(&Method_SingletonMonoBehaviour_QuestAfterAction___ctor__, v8);
    sub_1B640C8(&QuestAfterAction_TitleInfoControlCallback_TypeInfo, v9);
    byte_49F9344 = 1;
  }
  v10 = (Il2CppObject *)sub_1B64314(QuestAfterAction_TitleInfoControlCallback_TypeInfo, method, v2);
  System_Object___ctor(v10, 0LL);
  this->fields._TitleInfoCtrlCallback_k__BackingField = (struct QuestAfterAction_TitleInfoControlCallback_o *)v10;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields._TitleInfoCtrlCallback_k__BackingField,
    (int32_t)v10,
    v11,
    v12);
  v15 = (BlankEarthQuestAfterAction_o *)sub_1B64314(BlankEarthQuestAfterAction_TypeInfo, v13, v14);
  BlankEarthQuestAfterAction___ctor(v15, 0LL);
  this->fields._BlankEarthQuestAfterAction_k__BackingField = v15;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields._BlankEarthQuestAfterAction_k__BackingField,
    (int32_t)v15,
    v16,
    v17);
  v20 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1B64314(
                                                                   System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___TypeInfo,
                                                                   v18,
                                                                   v19);
  System_Collections_Generic_Dictionary_Int32Enum__object____ctor(
    v20,
    (const MethodInfo_3151E6C *)Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int____ctor__);
  this->fields.commandTypeIds = (struct System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___o *)v20;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.commandTypeIds, (int32_t)v20, v21, v22);
  v25 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1B64314(
                                                                  System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__TypeInfo,
                                                                  v23,
                                                                  v24);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v25,
    (const MethodInfo_3122FB0 *)Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo___ctor__);
  this->fields.svtVoices = (struct System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__o *)v25;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.svtVoices, (int32_t)v25, v26, v27);
  this->fields.MapMoveBeforeFocusSpotId = -1;
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_36EC454 *)Method_SingletonMonoBehaviour_QuestAfterAction___ctor__);
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
  sub_1B6406C(p_endAct, 0, v2, v3);
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
  __int64 v52; // x1
  int32_t MasterKind_k__BackingField; // w19
  TerminalPramsManager_c *v54; // x0
  TerminalSceneComponent_c *v55; // x0
  TerminalPramsManager_c *v56; // x0
  __int64 v57; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v58; // x22
  int32_t v59; // w23
  int32_t v60; // w23
  System_String_o *seriazlier; // x23
  bool v62; // w23
  bool v63; // w22
  __int64 v64; // x1
  Il2CppObject *MasterData_object; // x22
  WarEntity_o *QuestId; // x0
  WarEntity_o *v67; // x22
  TerminalPramsManager_c *v68; // x0
  int32_t id; // w19
  bool v70; // w22
  TerminalPramsManager_c *v71; // x0
  TerminalPramsManager_c *v72; // x0
  __int64 v73; // x1
  Il2CppObject *v74; // x22
  int32_t buckets; // w23
  __int64 v76; // x1
  Il2CppObject *v77; // x22
  int32_t v78; // w23
  TerminalPramsManager_c *v79; // x0
  __int64 v80; // x1
  int32_t v81; // w22
  Il2CppObject *v82; // x0
  __int64 v83; // x1
  Il2CppObject *v84; // x21
  int32_t v85; // w23
  const MethodInfo *v86; // x1
  bool IsOverwriteCommandNone; // w0
  __int64 v88; // x8
  __int64 v89; // x0
  unsigned int **p_commandBuf; // x21
  int32_t v91; // w2
  int32_t v92; // w3
  __int64 v93; // x1
  __int64 v94; // x2
  int *commandBuf; // x8
  unsigned __int64 v96; // x23
  il2cpp_array_size_t v97; // w29
  __int64 v98; // x24
  int32_t v99; // w2
  int32_t v100; // w3
  __int64 v101; // x8
  System_String_o *v102; // x1
  System_String_o **v103; // x25
  const MethodInfo *v104; // x2
  int v105; // w8
  int v106; // w8
  __int64 v107; // x1
  System_Collections_Generic_Dictionary_int__object__o *svtVoices; // x26
  DataMasterBase_TMaster__TEntity__PKType__o *v109; // x28
  __int64 v110; // x27
  int32_t v111; // w2
  int32_t v112; // w3
  int v113; // w8
  int32_t v114; // w1
  unsigned int v115; // w8
  System_Collections_Generic_List_int__o *Item; // x26
  const MethodInfo *v117; // x1
  struct System_Int32_array *items; // x8
  _QWORD *v119; // x9
  __int64 size; // x10
  QuestAfterAction_o *v121; // x0
  const MethodInfo *v122; // x2
  System_String_c *v123; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v124; // x25
  unsigned __int64 v125; // x26
  System_String_Fields v126; // x8
  _QWORD *v127; // x9
  __int64 MasterName_k__BackingField_low; // x10
  unsigned int *v129; // x25
  int32_t v130; // w2
  int32_t v131; // w3
  unsigned int *v132; // x0
  TerminalPramsManager_c *v133; // x0
  __int64 v134; // x1
  Il2CppObject *v135; // x20
  TerminalPramsManager_c *v136; // x0
  BalanceConfig_c *v137; // x8
  int32_t WarId_k__BackingField; // w20
  int32_t v139; // w20
  TerminalPramsManager_c *v140; // x0
  TerminalPramsManager_c *v141; // x0
  BalanceConfig_c *v142; // x8
  int32_t v143; // w19
  TerminalPramsManager_c *v144; // x0
  TerminalPramsManager_c *v145; // x0
  __int64 v146; // x0
  int32_t v147; // [xsp+8h] [xbp-78h]
  int32_t svtId; // [xsp+Ch] [xbp-74h] BYREF
  Il2CppObject *v149; // [xsp+10h] [xbp-70h] BYREF
  QuestEntity_o *entity; // [xsp+18h] [xbp-68h] BYREF

  v4 = this;
  if ( (byte_49F932A & 1) == 0 )
  {
    sub_1B640C8(&BalanceConfig_TypeInfo, isBeforeAction);
    sub_1B640C8(&bool_TypeInfo, v5);
    sub_1B640C8(&QuestAfterAction_Command___TypeInfo, v6);
    sub_1B640C8(&QuestAfterAction_Command_TypeInfo, v7);
    sub_1B640C8(&Method_DataManager_GetMasterData_EventMissionMaster___, v8);
    sub_1B640C8(&Method_DataManager_GetMasterData_QuestMaster___, v9);
    sub_1B640C8(&Method_DataManager_GetMasterData_QuestPhaseDetailAddMaster___, v10);
    sub_1B640C8(&Method_DataManager_GetMasterData_QuestPhaseDetailMaster___, v11);
    sub_1B640C8(&Method_DataManager_GetMasterData_WarMaster___, v12);
    sub_1B640C8(&Method_DataManager_GetMaster_BlankEarthSpotMaster___, v13);
    sub_1B640C8(&Method_DataManager_GetMaster_QuestBehaviorMaster___, v14);
    sub_1B640C8(&Method_DataManager_GetMaster_QuestMaster___, v15);
    sub_1B640C8(&Method_DataManager_GetMaster_ShopMaster___, v16);
    sub_1B640C8(&Method_DataManager_GetMaster_WarMaster___, v17);
    sub_1B640C8(&DataManager_TypeInfo, v18);
    sub_1B640C8(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v19);
    sub_1B640C8(&Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__, v20);
    sub_1B640C8(&Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__GetEntity__, v21);
    sub_1B640C8(&Method_DataMasterBase_BlankEarthSpotMaster__BlankEarthSpotEntity__int__TryGetEntity__, v22);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__Add__, v23);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___get_Item__, v24);
    sub_1B640C8(&Method_System_Linq_Enumerable_Any_KeyValuePair_int__QuestAfterAction_VoiceInfo____, v25);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Add__, v26);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v27);
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v28);
    sub_1B640C8(&TerminalSceneComponent_TypeInfo, v29);
    sub_1B640C8(&QuestAfterAction_VoiceInfo_TypeInfo, v30);
    this = (QuestAfterAction_o *)sub_1B640C8(&StringLiteral_16640/*"afterActionBk"*/, v31);
    byte_49F932A = 1;
  }
  v149 = 0LL;
  entity = 0LL;
  svtId = 0;
  *(_WORD *)&v4->fields.isLoadedVoice = 0;
  *(_QWORD *)&v4->fields.ActionMapTargetType = -1LL;
  if ( isBeforeAction )
  {
    if ( System_Linq_Enumerable__Any_KeyValuePair_int__object__(
           (System_Collections_Generic_IEnumerable_TSource__o *)v4->fields.svtVoices,
           (const MethodInfo_2E45D9C *)Method_System_Linq_Enumerable_Any_KeyValuePair_int__QuestAfterAction_VoiceInfo____) )
    {
      QuestAfterAction__releaseVoice(v4, v32);
    }
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_49F9045 )
    {
      sub_1B640C8(&TerminalPramsManager_TypeInfo, v32);
      byte_49F9045 = 1;
    }
    v34 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v34 = TerminalPramsManager_TypeInfo;
    }
    QuestId_k__BackingField = v34->static_fields->_QuestId_k__BackingField;
    if ( !byte_49F9050 )
    {
      sub_1B640C8(&TerminalPramsManager_TypeInfo, v32);
      v34 = TerminalPramsManager_TypeInfo;
      byte_49F9050 = 1;
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
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_49F76BD )
  {
    sub_1B640C8(&TerminalSceneComponent_TypeInfo, v37);
    byte_49F76BD = 1;
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
    if ( !byte_49F76BD )
    {
      sub_1B640C8(&TerminalSceneComponent_TypeInfo, v37);
      byte_49F76BD = 1;
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
    if ( !byte_49F76BD )
    {
      sub_1B640C8(&TerminalSceneComponent_TypeInfo, v37);
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalSceneComponent_TypeInfo;
      byte_49F76BD = 1;
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
      if ( !byte_49F76BD )
      {
        sub_1B640C8(&TerminalSceneComponent_TypeInfo, v37);
        byte_49F76BD = 1;
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
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_ShopMaster___);
      if ( !Master_object )
        goto LABEL_290;
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__int___GetEntity(
                                                                      Master_object,
                                                                      invoker_method_high,
                                                                      (const MethodInfo_30D3EA4 *)Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__);
      if ( !Master_object )
        goto LABEL_290;
      MasterName_k__BackingField = (int32_t)Master_object->fields._MasterName_k__BackingField;
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_WarMaster___);
      if ( !Master_object )
        goto LABEL_290;
    }
    else
    {
      if ( !LODWORD(Master_object[3].monitor) )
        j_il2cpp_runtime_class_init_0(Master_object);
      if ( !byte_49F76BD )
      {
        sub_1B640C8(&TerminalSceneComponent_TypeInfo, v37);
        byte_49F76BD = 1;
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
                                                                      (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_EventMissionMaster___);
      if ( !Master_object )
        goto LABEL_290;
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__int___GetEntity(
                                                                      Master_object,
                                                                      invoker_method,
                                                                      (const MethodInfo_30D3EA4 *)Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__GetEntity__);
      if ( !Master_object )
        goto LABEL_290;
      MasterName_k__BackingField = HIDWORD(Master_object->fields._MasterName_k__BackingField);
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMasterData_object_(
                                                                      (DataManager_o *)Instance,
                                                                      (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_WarMaster___);
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
    if ( !byte_49F904F )
    {
      sub_1B640C8(&TerminalPramsManager_TypeInfo, v52);
      byte_49F904F = 1;
    }
    v54 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v54 = TerminalPramsManager_TypeInfo;
    }
    v54->static_fields->_WarId_k__BackingField = MasterKind_k__BackingField;
    if ( !byte_49F76BD )
    {
      sub_1B640C8(&TerminalSceneComponent_TypeInfo, v52);
      byte_49F76BD = 1;
    }
    v55 = TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      v55 = TerminalSceneComponent_TypeInfo;
    }
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)v55->static_fields->mInstance;
    if ( !Master_object )
      goto LABEL_290;
    TerminalSceneComponent__CallQuestInformationCloseAtAll((TerminalSceneComponent_o *)Master_object, 0, 0LL);
    if ( v36 )
      goto LABEL_211;
  }
LABEL_80:
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_49F9351 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v37);
    byte_49F9351 = 1;
  }
  v56 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v56 = TerminalPramsManager_TypeInfo;
  }
  if ( !v56->static_fields->_IsPhaseClear_k__BackingField
    && UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_16640/*"afterActionBk"*/, 0LL) )
  {
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)UnityEngine_PlayerPrefs__GetString_69086012(
                                                                    (System_String_o *)StringLiteral_16640/*"afterActionBk"*/,
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
    v58 = Master_object;
    if ( !LODWORD(Master_object->fields._MasterName_k__BackingField) )
      goto LABEL_379;
    v59 = System_Int32__Parse((System_String_o *)Master_object->fields.list, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_49F9049 )
    {
      sub_1B640C8(&TerminalPramsManager_TypeInfo, v57);
      byte_49F9049 = 1;
    }
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
    }
    LODWORD(Master_object[2].fields._lookup->fields._buckets) = v59;
    if ( LODWORD(v58->fields._MasterName_k__BackingField) <= 1 )
      goto LABEL_379;
    v60 = System_Int32__Parse((System_String_o *)v58->fields._lookup, 0LL);
    if ( !byte_49F904D )
    {
      sub_1B640C8(&TerminalPramsManager_TypeInfo, v57);
      byte_49F904D = 1;
    }
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
    }
    HIDWORD(Master_object[2].fields._lookup->fields._buckets) = v60;
    if ( LODWORD(v58->fields._MasterName_k__BackingField) <= 2 )
      goto LABEL_379;
    seriazlier = (System_String_o *)v58->fields.seriazlier;
    if ( !bool_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(bool_TypeInfo);
    v62 = System_Boolean__Parse(seriazlier, 0LL);
    if ( !byte_49F9352 )
    {
      sub_1B640C8(&TerminalPramsManager_TypeInfo, v57);
      byte_49F9352 = 1;
    }
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
    }
    BYTE4(Master_object[2].fields._lookup[1].fields._buckets) = v62;
    if ( LODWORD(v58->fields._MasterName_k__BackingField) <= 3 )
      goto LABEL_379;
    v63 = System_Boolean__Parse((System_String_o *)v58->fields.sb, 0LL);
    if ( !byte_49F9353 )
    {
      sub_1B640C8(&TerminalPramsManager_TypeInfo, v37);
      byte_49F9353 = 1;
    }
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
    }
    BYTE5(Master_object[2].fields._lookup[1].fields._buckets) = v63;
    if ( !byte_49F9354 )
    {
      sub_1B640C8(&TerminalPramsManager_TypeInfo, v37);
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
      byte_49F9354 = 1;
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
                            (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_WarMaster___);
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_49F9045 )
      {
        sub_1B640C8(&TerminalPramsManager_TypeInfo, v64);
        byte_49F9045 = 1;
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
        v67 = QuestId;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_49F9355 )
        {
          sub_1B640C8(&TerminalPramsManager_TypeInfo, v37);
          byte_49F9355 = 1;
        }
        v68 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v68 = TerminalPramsManager_TypeInfo;
        }
        v68->static_fields->_IsWarClear_k__BackingField = 1;
        id = v67->fields.id;
        if ( !byte_49F904F )
        {
          sub_1B640C8(&TerminalPramsManager_TypeInfo, v37);
          v68 = TerminalPramsManager_TypeInfo;
          byte_49F904F = 1;
        }
        if ( !v68->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v68);
          v68 = TerminalPramsManager_TypeInfo;
        }
        v68->static_fields->_WarId_k__BackingField = id;
        v70 = TerminalPramsManager__CheckIsOrdealCallWarClear(v67, 0LL);
        if ( !byte_49F9356 )
        {
          sub_1B640C8(&TerminalPramsManager_TypeInfo, v37);
          byte_49F9356 = 1;
        }
        v71 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v71 = TerminalPramsManager_TypeInfo;
        }
        v71->static_fields->_IsOrdealCallWarClear_k__BackingField = v70;
      }
    }
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_49F9357 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v37);
    byte_49F9357 = 1;
  }
  v72 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v72 = TerminalPramsManager_TypeInfo;
  }
  if ( v72->static_fields->_IsWarClear_k__BackingField )
  {
    if ( !v72->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v72);
    if ( !byte_49F903E )
    {
      sub_1B640C8(&TerminalPramsManager_TypeInfo, v37);
      byte_49F903E = 1;
    }
    v72 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v72 = TerminalPramsManager_TypeInfo;
    }
    if ( !v72->static_fields->_IsOrdealCallWarClear_k__BackingField )
      goto LABEL_210;
  }
  if ( !v72->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v72);
  if ( !byte_49F9351 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v37);
    byte_49F9351 = 1;
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
    v74 = DataManager__GetMasterData_object_(
            (DataManager_o *)Instance,
            (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_QuestPhaseDetailAddMaster___);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_49F9045 )
    {
      sub_1B640C8(&TerminalPramsManager_TypeInfo, v73);
      byte_49F9045 = 1;
    }
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
    }
    buckets = (int32_t)Master_object[2].fields._lookup->fields._buckets;
    if ( !byte_49F9050 )
    {
      sub_1B640C8(&TerminalPramsManager_TypeInfo, v73);
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
      byte_49F9050 = 1;
    }
    if ( !LODWORD(Master_object[3].monitor) )
    {
      j_il2cpp_runtime_class_init_0(Master_object);
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
    }
    if ( !v74 )
      goto LABEL_290;
    v36 = QuestPhaseDetailAddMaster__GetAfterAction(
            (QuestPhaseDetailAddMaster_o *)v74,
            buckets,
            HIDWORD(Master_object[2].fields._lookup->fields._buckets) + 1,
            0LL);
    if ( v36 )
      goto LABEL_211;
    v77 = DataManager__GetMasterData_object_(
            (DataManager_o *)Instance,
            (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_QuestPhaseDetailMaster___);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_49F9045 )
    {
      sub_1B640C8(&TerminalPramsManager_TypeInfo, v76);
      byte_49F9045 = 1;
    }
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
    }
    v78 = (int32_t)Master_object[2].fields._lookup->fields._buckets;
    if ( !byte_49F9050 )
    {
      sub_1B640C8(&TerminalPramsManager_TypeInfo, v76);
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
      byte_49F9050 = 1;
    }
    if ( !LODWORD(Master_object[3].monitor) )
    {
      j_il2cpp_runtime_class_init_0(Master_object);
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
    }
    if ( !v77 )
      goto LABEL_290;
    v36 = QuestPhaseDetailMaster__GetAfterAction(
            (QuestPhaseDetailMaster_o *)v77,
            v78,
            HIDWORD(Master_object[2].fields._lookup->fields._buckets) + 1,
            0LL);
    if ( v36 )
      goto LABEL_211;
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
  }
  if ( !LODWORD(Master_object[3].monitor) )
    j_il2cpp_runtime_class_init_0(Master_object);
  if ( !byte_49F9354 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v37);
    byte_49F9354 = 1;
  }
  v79 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v79 = TerminalPramsManager_TypeInfo;
  }
  if ( !v79->static_fields->_IsQuestClear_k__BackingField )
    goto LABEL_210;
  if ( !v79->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v79);
  v36 = 0LL;
  if ( TerminalPramsManager__get_Debug_IsQuestReleaseAll(0LL) )
    goto LABEL_211;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_49F9045 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v80);
    byte_49F9045 = 1;
  }
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
  }
  if ( !Instance )
    goto LABEL_290;
  v81 = (int32_t)Master_object[2].fields._lookup->fields._buckets;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMasterData_object_(
                                                                  (DataManager_o *)Instance,
                                                                  (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !Master_object )
    goto LABEL_290;
  v82 = DataMasterBase_object__object__int___GetEntity(
          Master_object,
          v81,
          (const MethodInfo_30D3EA4 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
  if ( v82 )
    v36 = (System_String_array *)v82[6].klass;
  else
LABEL_210:
    v36 = 0LL;
LABEL_211:
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v84 = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_QuestBehaviorMaster___);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_49F9045 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v83);
    byte_49F9045 = 1;
  }
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
  }
  v85 = (int32_t)Master_object[2].fields._lookup->fields._buckets;
  if ( !byte_49F9050 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v83);
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
    byte_49F9050 = 1;
  }
  if ( !LODWORD(Master_object[3].monitor) )
  {
    j_il2cpp_runtime_class_init_0(Master_object);
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
  }
  if ( !v84 )
    goto LABEL_290;
  if ( QuestBehaviorMaster__IsOpenQuestBehaviorCond(
         (QuestBehaviorMaster_o *)v84,
         v85,
         HIDWORD(Master_object[2].fields._lookup->fields._buckets) + 1,
         7,
         0LL)
    || (IsOverwriteCommandNone = QuestAfterAction__IsOverwriteCommandNone(v36, v86), !v36)
    || IsOverwriteCommandNone
    || (v88 = *(_QWORD *)&v36->max_length, (int)v88 < 2)
    || (v88 & 1) != 0 )
  {
    UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_16640/*"afterActionBk"*/, 0LL);
    return;
  }
  v89 = sub_1B64170(QuestAfterAction_Command___TypeInfo, (unsigned int)v88 >> 1);
  v4->fields.commandBuf = (struct QuestAfterAction_Command_array *)v89;
  p_commandBuf = (unsigned int **)&v4->fields.commandBuf;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v4->fields.commandBuf, v89, v91, v92);
  commandBuf = (int *)v4->fields.commandBuf;
  if ( !commandBuf )
    goto LABEL_290;
  v96 = 0LL;
  v97 = 0;
  while ( (__int64)v96 < commandBuf[6] )
  {
    v98 = sub_1B64314(QuestAfterAction_Command_TypeInfo, v93, v94);
    System_Object___ctor((Il2CppObject *)v98, 0LL);
    if ( v97 >= v36->max_length )
      goto LABEL_379;
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)System_Int32__Parse(v36->m_Items[v97], 0LL);
    if ( !v98 )
      goto LABEL_290;
    *(_DWORD *)(v98 + 16) = (_DWORD)Master_object;
    v101 = (int)v97 | 1LL;
    if ( (unsigned int)v101 >= v36->max_length )
      goto LABEL_379;
    v102 = v36->m_Items[v101];
    *(_QWORD *)(v98 + 24) = v102;
    v103 = (System_String_o **)(v98 + 24);
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v98 + 24), (int32_t)v102, v99, v100);
    if ( !v4->fields.hasFadeCommand )
    {
      v105 = *(_DWORD *)(v98 + 16);
      if ( v105 == 520 || v105 == 405 )
        v4->fields.hasFadeCommand = 1;
    }
    if ( !v97 && !v4->fields.isRequestedStopBgm && *(_DWORD *)(v98 + 16) == 850 )
      v4->fields.isRequestedStopBgm = 1;
    if ( (v4->fields.MapMoveBeforeFocusSpotId & 0x80000000) != 0 && *(_DWORD *)(v98 + 16) == 350 )
    {
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)*v103;
      if ( !*v103 )
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
    v106 = *(_DWORD *)(v98 + 16);
    if ( v4->fields.IsMoveToEventRewardShop || v106 != 700 )
    {
      if ( v106 == 800 )
      {
        Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)QuestAfterAction_Command__GetAvailableRandomVoice(
                                                                        (QuestAfterAction_Command_o *)v98,
                                                                        &svtId,
                                                                        v104);
        if ( Master_object )
        {
          svtVoices = (System_Collections_Generic_Dictionary_int__object__o *)v4->fields.svtVoices;
          v109 = Master_object;
          v147 = svtId;
          v110 = sub_1B64314(QuestAfterAction_VoiceInfo_TypeInfo, v107, v104);
          System_Object___ctor((Il2CppObject *)v110, 0LL);
          *(_DWORD *)(v110 + 16) = v147;
          *(_QWORD *)(v110 + 24) = v109;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v110 + 24), (int32_t)v109, v111, v112);
          if ( !svtVoices )
            goto LABEL_290;
          System_Collections_Generic_Dictionary_int__object___Add(
            svtVoices,
            v96,
            (Il2CppObject *)v110,
            (const MethodInfo_3123984 *)Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__Add__);
        }
      }
    }
    else
    {
      v4->fields.IsMoveToEventRewardShop = 1;
    }
    v113 = *(_DWORD *)(v98 + 16);
    if ( v113 <= 114 )
    {
      v115 = v113 - 100;
      if ( v115 >= 0xF || ((0x7C1Fu >> v115) & 1) == 0 )
        goto LABEL_273;
      v114 = 0;
    }
    else if ( (unsigned int)(v113 - 200) < 6 )
    {
      v114 = 1;
    }
    else if ( (unsigned int)(v113 - 400) < 0xA )
    {
      v114 = 2;
    }
    else
    {
      if ( v113 != 550 )
        goto LABEL_273;
      v114 = 3;
    }
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)v4->fields.commandTypeIds;
    if ( !Master_object )
      goto LABEL_290;
    Item = (System_Collections_Generic_List_int__o *)System_Collections_Generic_Dictionary_Int32Enum__object___get_Item(
                                                       (System_Collections_Generic_Dictionary_TKey__TValue__o *)Master_object,
                                                       v114,
                                                       (const MethodInfo_31527A0 *)Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___get_Item__);
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)QuestAfterAction__ExtractCommandTargetId(
                                                                    (QuestAfterAction_Command_o *)v98,
                                                                    v117);
    if ( !Item )
      goto LABEL_290;
    items = Item->fields._items;
    v119 = Method_System_Collections_Generic_List_int__Add__;
    ++Item->fields._version;
    if ( !items )
      goto LABEL_290;
    size = Item->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_int___AddWithResize(
        Item,
        (int32_t)Master_object,
        *(const MethodInfo_348FEDC **)(*(_QWORD *)(v119[4] + 192LL) + 112LL));
    }
    else
    {
      Item->fields._size = size + 1;
      items->m_Items[size + 1] = (int)Master_object;
    }
LABEL_273:
    if ( v4->fields.ActionMapTargetId <= 0 )
      QuestAfterAction__SetActionMap(v4, (QuestAfterAction_Command_o *)v98, v104);
    if ( *(_DWORD *)(v98 + 16) == 102 )
    {
      v121 = (QuestAfterAction_o *)System_Int32__Parse(*v103, 0LL);
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)QuestAfterAction__GetMapGimmickId(
                                                                      v121,
                                                                      (int32_t)v121,
                                                                      v122);
      if ( !Master_object )
        goto LABEL_290;
      v123 = (System_String_c *)Master_object->fields._MasterName_k__BackingField;
      v124 = Master_object;
      if ( (int)v123 >= 1 )
      {
        v125 = 0LL;
        while ( v125 < (unsigned int)v123 )
        {
          Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)v4->fields.invalidMapGimmickIdList;
          if ( !Master_object )
            goto LABEL_290;
          v57 = *((unsigned int *)&v124->fields.list + v125);
          v126 = *(System_String_Fields *)&Master_object->fields._MasterKind_k__BackingField;
          v127 = Method_System_Collections_Generic_List_int__Add__;
          ++HIDWORD(Master_object->fields._MasterName_k__BackingField);
          if ( !*(_QWORD *)&v126 )
            goto LABEL_290;
          MasterName_k__BackingField_low = SLODWORD(Master_object->fields._MasterName_k__BackingField);
          if ( (unsigned int)MasterName_k__BackingField_low >= *(_DWORD *)(*(_QWORD *)&v126 + 24LL) )
          {
            System_Collections_Generic_List_int___AddWithResize(
              (System_Collections_Generic_List_int__o *)Master_object,
              v57,
              *(const MethodInfo_348FEDC **)(*(_QWORD *)(v127[4] + 192LL) + 112LL));
          }
          else
          {
            LODWORD(Master_object->fields._MasterName_k__BackingField) = MasterName_k__BackingField_low + 1;
            *(_DWORD *)(*(_QWORD *)&v126 + 4 * MasterName_k__BackingField_low + 32) = v57;
          }
          LODWORD(v123) = v124->fields._MasterName_k__BackingField;
          if ( (__int64)++v125 >= (int)v123 )
            goto LABEL_286;
        }
LABEL_379:
        sub_1B6432C(Master_object, v57);
      }
    }
LABEL_286:
    v129 = *p_commandBuf;
    if ( !*p_commandBuf )
      goto LABEL_290;
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)sub_1B64204(v98, *(_QWORD *)(*(_QWORD *)v129 + 64LL));
    if ( !Master_object )
    {
      v146 = sub_1B64348();
      sub_1B641F0(v146, 0LL);
    }
    if ( v96 >= v129[6] )
      goto LABEL_379;
    v132 = &v129[2 * v96];
    *((_QWORD *)v132 + 4) = v98;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v132 + 8), v98, v130, v131);
    commandBuf = (int *)*p_commandBuf;
    v97 += 2;
    ++v96;
    if ( !*p_commandBuf )
      goto LABEL_290;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_49F9351 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v93);
    byte_49F9351 = 1;
  }
  v133 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v133 = TerminalPramsManager_TypeInfo;
  }
  if ( v133->static_fields->_IsPhaseClear_k__BackingField )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v135 = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_QuestMaster___);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_49F9045 )
    {
      sub_1B640C8(&TerminalPramsManager_TypeInfo, v134);
      byte_49F9045 = 1;
    }
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
    }
    if ( !v135 )
      goto LABEL_290;
    if ( QuestMaster__TryGetQuestEntity(
           (QuestMaster_o *)v135,
           &entity,
           (int32_t)Master_object[2].fields._lookup->fields._buckets,
           0LL) )
    {
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_49F9048 )
      {
        sub_1B640C8(&TerminalPramsManager_TypeInfo, v93);
        byte_49F9048 = 1;
      }
      v136 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v136 = TerminalPramsManager_TypeInfo;
      }
      v137 = BalanceConfig_TypeInfo;
      WarId_k__BackingField = v136->static_fields->_WarId_k__BackingField;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v137 = BalanceConfig_TypeInfo;
      }
      if ( WarId_k__BackingField == v137->static_fields->OrdealCallWarId )
      {
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_BlankEarthSpotMaster___);
        if ( entity && Master_object )
        {
          Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__int___TryGetEntity(
                                                                          Master_object,
                                                                          &v149,
                                                                          entity->fields.spotId,
                                                                          (const MethodInfo_30D3EF8 *)Method_DataMasterBase_BlankEarthSpotMaster__BlankEarthSpotEntity__int__TryGetEntity__);
          if ( ((unsigned __int8)Master_object & 1) == 0 )
            goto LABEL_330;
          if ( v149 )
          {
            v139 = (int32_t)v149[1].klass;
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            if ( !byte_49F9358 )
            {
              sub_1B640C8(&TerminalPramsManager_TypeInfo, v93);
              byte_49F9358 = 1;
            }
            v140 = TerminalPramsManager_TypeInfo;
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
              v140 = TerminalPramsManager_TypeInfo;
            }
            v140->static_fields->_BlankEarthAfterActionFocusSpotId_k__BackingField = v139;
            goto LABEL_330;
          }
        }
LABEL_290:
        sub_1B64324(Master_object);
      }
    }
  }
LABEL_330:
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_49F7A3E )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v93);
    byte_49F7A3E = 1;
  }
  v141 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v141 = TerminalPramsManager_TypeInfo;
  }
  v141->static_fields->_IsAutoResume_k__BackingField = 1;
  if ( !byte_49F904B )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v93);
    v141 = TerminalPramsManager_TypeInfo;
    byte_49F904B = 1;
  }
  if ( !v141->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v141);
    v141 = TerminalPramsManager_TypeInfo;
  }
  v141->static_fields->_DispState_k__BackingField = 2;
  if ( !byte_49F9048 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v93);
    v141 = TerminalPramsManager_TypeInfo;
    byte_49F9048 = 1;
  }
  if ( !v141->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v141);
    v141 = TerminalPramsManager_TypeInfo;
  }
  v142 = BalanceConfig_TypeInfo;
  v143 = v141->static_fields->_WarId_k__BackingField;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v142 = BalanceConfig_TypeInfo;
  }
  v144 = TerminalPramsManager_TypeInfo;
  if ( v143 == v142->static_fields->OrdealCallWarId )
    goto LABEL_383;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_49F903E )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v93);
    byte_49F903E = 1;
  }
  v144 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v144 = TerminalPramsManager_TypeInfo;
  }
  if ( v144->static_fields->_IsOrdealCallWarClear_k__BackingField )
  {
LABEL_383:
    if ( !v144->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v144);
    if ( !byte_49F903F )
    {
      sub_1B640C8(&TerminalPramsManager_TypeInfo, v93);
      byte_49F903F = 1;
    }
    v144 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v144 = TerminalPramsManager_TypeInfo;
    }
    v144->static_fields->_BlankEarthSpotId_k__BackingField = 0;
    if ( !byte_49F903E )
    {
      sub_1B640C8(&TerminalPramsManager_TypeInfo, v93);
      v144 = TerminalPramsManager_TypeInfo;
      byte_49F903E = 1;
    }
    if ( !v144->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v144);
      v144 = TerminalPramsManager_TypeInfo;
    }
    if ( !v144->static_fields->_IsOrdealCallWarClear_k__BackingField )
    {
      if ( !v144->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v144);
      if ( !byte_49F904B )
      {
        sub_1B640C8(&TerminalPramsManager_TypeInfo, v93);
        byte_49F904B = 1;
      }
      v144 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v144 = TerminalPramsManager_TypeInfo;
      }
      v144->static_fields->_DispState_k__BackingField = 3;
    }
  }
  if ( !v144->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v144);
  if ( !byte_49F904E )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v93);
    byte_49F904E = 1;
  }
  v145 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v145 = TerminalPramsManager_TypeInfo;
  }
  v145->static_fields->_SpotId_k__BackingField = -1;
}


void __fastcall QuestAfterAction__DeleteContinueData(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_49F9328 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_16640/*"afterActionBk"*/, v1);
    byte_49F9328 = 1;
  }
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_16640/*"afterActionBk"*/, 0LL);
}


int32_t __fastcall QuestAfterAction__ExtractCommandTargetId(
        QuestAfterAction_Command_o *command,
        const MethodInfo *method)
{
  QuestAfterAction_Command_o *v2; // x19
  QuestAfterAction_Command_c *param; // x8
  __int64 v4; // x1

  v2 = command;
  if ( (byte_49F932B & 1) == 0 )
  {
    command = (QuestAfterAction_Command_o *)sub_1B640C8(&StringLiteral_869/*","*/, method);
    byte_49F932B = 1;
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
    sub_1B64324(command);
  if ( !LODWORD(command->fields.param) )
    sub_1B6432C(command, v4);
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
  int32_t v7; // w2
  int32_t v8; // w3
  int32_t v9; // w2
  int32_t v10; // w3

  if ( (byte_49F9338 & 1) == 0 )
  {
    sub_1B640C8(&QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__74_TypeInfo, commandEnumerable);
    byte_49F9338 = 1;
  }
  v5 = sub_1B64314(
         QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__74_TypeInfo,
         commandEnumerable,
         method);
  QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__74___ctor(
    (QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__74_o *)v5,
    -2,
    0LL);
  if ( !v5 )
    sub_1B64324(v6);
  *(_QWORD *)(v5 + 56) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v5 + 56), (int32_t)this, v7, v8);
  *(_QWORD *)(v5 + 48) = commandEnumerable;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v5 + 48), (int32_t)commandEnumerable, v9, v10);
  return (System_Collections_Generic_IEnumerable_QuestAfterAction_Command__o *)v5;
}


QuestAfterAction_Command_array *__fastcall QuestAfterAction__GenerateCommandBuf(
        System_String_array *actionVals,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 IsNullOrEmpty; // x0
  _QWORD *v6; // x19
  __int64 v7; // x8
  __int64 v8; // x0
  __int64 v9; // x0
  QuestAfterAction_Command_array *v10; // x20
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x22
  unsigned __int64 v14; // x23
  __int64 v15; // x24
  il2cpp_array_size_t v16; // w25
  __int64 v17; // x21
  __int64 v18; // x1
  int32_t v19; // w2
  int32_t v20; // w3
  System_String_o *v21; // x1
  int32_t v22; // w2
  int32_t v23; // w3
  __int64 v25; // x0

  if ( (byte_49F932C & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Array_Empty_QuestAfterAction_Command___, method);
    sub_1B640C8(&QuestAfterAction_Command___TypeInfo, v3);
    sub_1B640C8(&QuestAfterAction_Command_TypeInfo, v4);
    byte_49F932C = 1;
  }
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)actionVals, 0LL);
  if ( (IsNullOrEmpty & 1) != 0 )
  {
    v6 = Method_System_Array_Empty_QuestAfterAction_Command___;
    v7 = *((_QWORD *)Method_System_Array_Empty_QuestAfterAction_Command___ + 7);
    if ( !v7 )
    {
      sub_1BB6000(Method_System_Array_Empty_QuestAfterAction_Command___);
      v7 = v6[7];
    }
    v8 = *(_QWORD *)(v7 + 16);
    if ( (*(_BYTE *)(v8 + 309) & 1) == 0 )
      v8 = sub_1BB5FA4(v8);
    if ( !*(_DWORD *)(v8 + 224) )
      j_il2cpp_runtime_class_init_0(v8);
    v9 = *(_QWORD *)(v6[7] + 16LL);
    if ( (*(_BYTE *)(v9 + 309) & 1) == 0 )
      v9 = sub_1BB5FA4(v9);
    return **(QuestAfterAction_Command_array ***)(v9 + 184);
  }
  else
  {
    if ( !actionVals
      || (IsNullOrEmpty = sub_1B64170(
                            QuestAfterAction_Command___TypeInfo,
                            (unsigned int)((signed int)actionVals->max_length / 2))) == 0 )
    {
LABEL_25:
      sub_1B64324(IsNullOrEmpty);
    }
    v10 = (QuestAfterAction_Command_array *)IsNullOrEmpty;
    if ( *(int *)(IsNullOrEmpty + 24) >= 1 )
    {
      v13 = 0LL;
      v14 = 0LL;
      v15 = IsNullOrEmpty + 32;
      v16 = 1;
      do
      {
        v17 = sub_1B64314(QuestAfterAction_Command_TypeInfo, v11, v12);
        System_Object___ctor((Il2CppObject *)v17, 0LL);
        if ( v16 - 1 >= actionVals->max_length )
          goto LABEL_24;
        IsNullOrEmpty = System_Int32__Parse(actionVals->m_Items[v16 - 1], 0LL);
        if ( !v17 )
          goto LABEL_25;
        *(_DWORD *)(v17 + 16) = IsNullOrEmpty;
        if ( v16 >= actionVals->max_length )
          goto LABEL_24;
        v21 = actionVals->m_Items[v16];
        *(_QWORD *)(v17 + 24) = v21;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v17 + 24), (int32_t)v21, v19, v20);
        IsNullOrEmpty = sub_1B64204(v17, v10->obj.klass->_1.element_class);
        if ( !IsNullOrEmpty )
        {
          v25 = sub_1B64348();
          sub_1B641F0(v25, 0LL);
        }
        if ( v14 >= v10->max_length )
LABEL_24:
          sub_1B6432C(IsNullOrEmpty, v18);
        *(_QWORD *)(v15 + 8 * v14) = v17;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v15 + v13), v17, v22, v23);
        ++v14;
        v16 += 2;
        v13 += 8LL;
      }
      while ( (__int64)v14 < (int)v10->max_length );
    }
  }
  return v10;
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
  __int64 v19; // x1
  Il2CppObject *v20; // x20
  System_String_array *v21; // x19

  if ( (byte_49F9343 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_QuestMaster___, *(_QWORD *)&phase);
    sub_1B640C8(&Method_DataManager_GetMasterData_QuestPhaseDetailAddMaster___, v5);
    sub_1B640C8(&Method_DataManager_GetMasterData_QuestPhaseDetailMaster___, v6);
    sub_1B640C8(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v7);
    sub_1B640C8(&Method_System_Linq_Enumerable_Any_string___, v8);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v10);
    byte_49F9343 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_33;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_QuestPhaseDetailAddMaster___);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_49F9045 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v12);
    byte_49F9045 = 1;
  }
  Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  }
  v14 = *(_DWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 16LL);
  if ( !byte_49F9050 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v12);
    Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
    byte_49F9050 = 1;
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
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_33;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_QuestPhaseDetailMaster___);
  if ( !Instance )
    goto LABEL_33;
  result = QuestPhaseDetailMaster__GetAfterAction((QuestPhaseDetailMaster_o *)Instance, questId, phase, 0LL);
  if ( result )
    return result;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_33;
  v20 = DataManager__GetMasterData_object_(
          Instance,
          (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_49F9045 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v19);
    byte_49F9045 = 1;
  }
  Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  }
  if ( !v20 )
LABEL_33:
    sub_1B64324(Instance);
  result = (System_String_array *)DataMasterBase_object__object__int___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)v20,
                                    *(_DWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 16LL),
                                    (const MethodInfo_30D3EA4 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
  if ( result )
  {
    v21 = result;
    if ( System_Linq_Enumerable__Any_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)result->m_Items[8],
           (const MethodInfo_2E46A94 *)Method_System_Linq_Enumerable_Any_string___) )
    {
      return (System_String_array *)v21->m_Items[8];
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
  __int64 v19; // x1
  Il2CppObject *v20; // x20
  System_String_array *v21; // x19

  if ( (byte_49F9342 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_QuestMaster___, *(_QWORD *)&phase);
    sub_1B640C8(&Method_DataManager_GetMasterData_QuestPhaseDetailAddMaster___, v5);
    sub_1B640C8(&Method_DataManager_GetMasterData_QuestPhaseDetailMaster___, v6);
    sub_1B640C8(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v7);
    sub_1B640C8(&Method_System_Linq_Enumerable_Any_string___, v8);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v10);
    byte_49F9342 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_33;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_QuestPhaseDetailAddMaster___);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_49F9045 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v12);
    byte_49F9045 = 1;
  }
  Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  }
  v14 = *(_DWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 16LL);
  if ( !byte_49F9050 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v12);
    Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
    byte_49F9050 = 1;
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
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_33;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_QuestPhaseDetailMaster___);
  if ( !Instance )
    goto LABEL_33;
  result = QuestPhaseDetailMaster__GetBeforeAction((QuestPhaseDetailMaster_o *)Instance, questId, phase, 0LL);
  if ( result )
    return result;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_33;
  v20 = DataManager__GetMasterData_object_(
          Instance,
          (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_49F9045 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v19);
    byte_49F9045 = 1;
  }
  Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  }
  if ( !v20 )
LABEL_33:
    sub_1B64324(Instance);
  result = (System_String_array *)DataMasterBase_object__object__int___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)v20,
                                    *(_DWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 16LL),
                                    (const MethodInfo_30D3EA4 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
  if ( result )
  {
    v21 = result;
    if ( System_Linq_Enumerable__Any_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)result->m_Items[7],
           (const MethodInfo_2E46A94 *)Method_System_Linq_Enumerable_Any_string___) )
    {
      return (System_String_array *)v21->m_Items[7];
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
      return dword_BDC568[commandId - 100];
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
        const MethodInfo_2EC8D20 *method)
{
  UnityEngine_Object_o *MapGameObject; // x20
  _BOOL8 v11; // x0

  if ( !method->rgctx_data )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, *(_QWORD *)&comType);
    if ( !method->rgctx_data )
      sub_1BB6000();
  }
  MapGameObject = (UnityEngine_Object_o *)QuestAfterAction__GetMapGameObject(this, comType, id, state, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v11 = UnityEngine_Object__op_Equality(MapGameObject, 0LL, 0LL);
  if ( v11 )
    return 0LL;
  if ( !MapGameObject )
    sub_1B64324(v11);
  return UnityEngine_GameObject__GetComponent_object_(
           (UnityEngine_GameObject_o *)MapGameObject,
           (const MethodInfo_2E87ED8 *)method->rgctx_data->_0_UnityEngine_GameObject_GetComponent_T_);
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
  const MethodInfo *v13; // x1
  const MethodInfo *v14; // x3

  v8 = this;
  if ( (byte_49F933E & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, *(_QWORD *)&comType);
    this = (QuestAfterAction_o *)sub_1B640C8(&SrcSpotBasePrefab_TypeInfo, v9);
    byte_49F933E = 1;
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
      sub_1B64324(this);
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
    this = (QuestAfterAction_o *)QuestAfterAction__IsMapChangeable(this, v13);
    if ( !state )
      goto LABEL_40;
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      state->fields.IsAnimDoing = 0;
      QuestAfterAction__RequestMapChange(v8, comType, id, v14);
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

  if ( (byte_49F932D & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_MapGimmickMaster___, *(_QWORD *)&spotId);
    sub_1B640C8(&Method_DataMasterBase_getEntitys_MapGimmickEntity___, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Add__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__ToArray__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_int___ctor__, v7);
    sub_1B640C8(&System_Collections_Generic_List_int__TypeInfo, v8);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_49F932D = 1;
  }
  v10 = (System_Collections_Generic_List_int__o *)sub_1B64314(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    *(_QWORD *)&spotId,
                                                    method);
  System_Collections_Generic_List_int____ctor(
    v10,
    (const MethodInfo_348F688 *)Method_System_Collections_Generic_List_int___ctor__);
  Instance = (System_Object_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  Instance = (System_Object_array *)DataManager__GetMasterData_object_(
                                      (DataManager_o *)Instance,
                                      (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_MapGimmickMaster___);
  if ( !Instance )
    goto LABEL_19;
  Instance = DataMasterBase__getEntitys_object_(
               (DataMasterBase_o *)Instance,
               (const MethodInfo_2E39C80 *)Method_DataMasterBase_getEntitys_MapGimmickEntity___);
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
        sub_1B6432C(Instance, name_low);
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
            *(const MethodInfo_348FEDC **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
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
    sub_1B64324(Instance);
  }
LABEL_17:
  if ( !v10 )
    goto LABEL_19;
  return System_Collections_Generic_List_int___ToArray(
           v10,
           (const MethodInfo_3491A34 *)Method_System_Collections_Generic_List_int__ToArray__);
}


int32_t __fastcall QuestAfterAction__GetState(QuestAfterAction_o *this, const MethodInfo *method)
{
  struct CStateManager_QuestAfterAction__o *fsm; // x8

  if ( (byte_49F933C & 1) == 0 )
  {
    sub_1B640C8(&Method_CStateManager_QuestAfterAction__getState__, method);
    byte_49F933C = 1;
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
  __int64 v22; // x1
  __int64 v23; // x2
  Il2CppObject *v24; // x22
  System_Collections_Generic_Dictionary_TKey__TValue__o *commandTypeIds; // x0
  CStateManager_T__o *v26; // x21
  __int64 v27; // x1
  __int64 v28; // x2
  Il2CppObject *v29; // x22
  CStateManager_T__o *v30; // x21
  __int64 v31; // x1
  __int64 v32; // x2
  QuestAfterAction_StateAdditional_o *v33; // x22
  CStateManager_T__o *v34; // x20
  __int64 v35; // x1
  __int64 v36; // x2
  QuestAfterAction_StateInstant_o *v37; // x21
  int32_t v38; // w2
  int32_t v39; // w3
  int32_t v40; // w20
  __int64 v41; // x1
  __int64 v42; // x2
  System_Collections_Generic_Dictionary_TKey__TValue__o *v43; // x21
  int v44; // w8
  System_Collections_Generic_List_int__o *v45; // x22
  Il2CppObject *Component_object; // x0
  int32_t v47; // w2
  int32_t v48; // w3
  int32_t v49; // w2
  int32_t v50; // w3
  __int64 v51; // x1
  __int64 v52; // x2
  System_Collections_Generic_List_int__o *v53; // x20
  struct System_Collections_Generic_List_int__o **p_invalidMapGimmickIdList; // x19
  int32_t v55; // w2
  int32_t v56; // w3

  if ( (byte_49F9329 & 1) == 0 )
  {
    sub_1B640C8(&Method_CStateManager_QuestAfterAction___ctor__, method);
    sub_1B640C8(&Method_CStateManager_QuestAfterAction__add__, v4);
    sub_1B640C8(&CStateManager_QuestAfterAction__TypeInfo, v5);
    sub_1B640C8(
      &Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___ContainsKey__,
      v6);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___get_Item__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___set_Item__, v8);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Clear__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_int___ctor__, v11);
    sub_1B640C8(&System_Collections_Generic_List_int__TypeInfo, v12);
    sub_1B640C8(&QuestAfterAction_StateAdditional_TypeInfo, v13);
    sub_1B640C8(&QuestAfterAction_StateInstant_TypeInfo, v14);
    sub_1B640C8(&QuestAfterAction_StateMain_TypeInfo, v15);
    sub_1B640C8(&QuestAfterAction_StateNone_TypeInfo, v16);
    byte_49F9329 = 1;
  }
  p_fsm = &this->fields.fsm;
  if ( !this->fields.fsm )
  {
    v18 = (CStateManager_T__o *)sub_1B64314(CStateManager_QuestAfterAction__TypeInfo, method, v2);
    CStateManager_object____ctor(
      v18,
      (Il2CppObject *)this,
      4,
      (const MethodInfo_30612BC *)Method_CStateManager_QuestAfterAction___ctor__);
    this->fields.fsm = (struct CStateManager_QuestAfterAction__o *)v18;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.fsm, (int32_t)v18, v19, v20);
    fsm = (CStateManager_T__o *)this->fields.fsm;
    v24 = (Il2CppObject *)sub_1B64314(QuestAfterAction_StateNone_TypeInfo, v22, v23);
    System_Object___ctor(v24, 0LL);
    if ( !fsm )
      goto LABEL_21;
    CStateManager_object___add(
      fsm,
      0,
      (IState_T__o *)v24,
      (const MethodInfo_3061364 *)Method_CStateManager_QuestAfterAction__add__);
    v26 = (CStateManager_T__o *)*p_fsm;
    v29 = (Il2CppObject *)sub_1B64314(QuestAfterAction_StateMain_TypeInfo, v27, v28);
    System_Object___ctor(v29, 0LL);
    if ( !v26 )
      goto LABEL_21;
    CStateManager_object___add(
      v26,
      1,
      (IState_T__o *)v29,
      (const MethodInfo_3061364 *)Method_CStateManager_QuestAfterAction__add__);
    v30 = (CStateManager_T__o *)*p_fsm;
    v33 = (QuestAfterAction_StateAdditional_o *)sub_1B64314(QuestAfterAction_StateAdditional_TypeInfo, v31, v32);
    QuestAfterAction_StateAdditional___ctor(v33, 0LL);
    if ( !v30 )
      goto LABEL_21;
    CStateManager_object___add(
      v30,
      2,
      (IState_T__o *)v33,
      (const MethodInfo_3061364 *)Method_CStateManager_QuestAfterAction__add__);
    v34 = (CStateManager_T__o *)*p_fsm;
    v37 = (QuestAfterAction_StateInstant_o *)sub_1B64314(QuestAfterAction_StateInstant_TypeInfo, v35, v36);
    QuestAfterAction_StateInstant___ctor(v37, 0LL);
    if ( !v34 )
      goto LABEL_21;
    CStateManager_object___add(
      v34,
      3,
      (IState_T__o *)v37,
      (const MethodInfo_3061364 *)Method_CStateManager_QuestAfterAction__add__);
  }
  QuestAfterAction__SetState(this, 0, v2);
  this->fields.commandBuf = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.commandBuf, 0, v38, v39);
  v40 = 0;
  this->fields.commandIdx = 0;
  do
  {
    commandTypeIds = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.commandTypeIds;
    if ( !commandTypeIds )
      goto LABEL_21;
    commandTypeIds = (System_Collections_Generic_Dictionary_TKey__TValue__o *)System_Collections_Generic_Dictionary_Int32Enum__object___ContainsKey(
                                                                                commandTypeIds,
                                                                                v40,
                                                                                (const MethodInfo_3152A34 *)Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___ContainsKey__);
    v43 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.commandTypeIds;
    if ( ((unsigned __int8)commandTypeIds & 1) != 0 )
    {
      if ( !v43 )
        goto LABEL_21;
      commandTypeIds = (System_Collections_Generic_Dictionary_TKey__TValue__o *)System_Collections_Generic_Dictionary_Int32Enum__object___get_Item(
                                                                                  (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.commandTypeIds,
                                                                                  v40,
                                                                                  (const MethodInfo_31527A0 *)Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___get_Item__);
      if ( !commandTypeIds )
        goto LABEL_21;
      v44 = HIDWORD(commandTypeIds->fields._entries) + 1;
      LODWORD(commandTypeIds->fields._entries) = 0;
      HIDWORD(commandTypeIds->fields._entries) = v44;
    }
    else
    {
      v45 = (System_Collections_Generic_List_int__o *)sub_1B64314(
                                                        System_Collections_Generic_List_int__TypeInfo,
                                                        v41,
                                                        v42);
      System_Collections_Generic_List_int____ctor(
        v45,
        (const MethodInfo_348F688 *)Method_System_Collections_Generic_List_int___ctor__);
      if ( !v43 )
        goto LABEL_21;
      System_Collections_Generic_Dictionary_Int32Enum__object___set_Item(
        v43,
        v40,
        (Il2CppObject *)v45,
        (const MethodInfo_315282C *)Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___set_Item__);
    }
    ++v40;
  }
  while ( v40 != 4 );
  commandTypeIds = (System_Collections_Generic_Dictionary_TKey__TValue__o *)UnityEngine_Component__get_gameObject(
                                                                              (UnityEngine_Component_o *)this,
                                                                              0LL);
  if ( !commandTypeIds
    || (Component_object = UnityEngine_GameObject__GetComponent_object_(
                             (UnityEngine_GameObject_o *)commandTypeIds,
                             (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___),
        this->fields.screenCollider = (struct UnityEngine_BoxCollider_o *)Component_object,
        sub_1B6406C(
          (ServantStatusBattleListViewItem_o *)&this->fields.screenCollider,
          (int32_t)Component_object,
          v47,
          v48),
        (commandTypeIds = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.screenCollider) == 0LL) )
  {
LABEL_21:
    sub_1B64324(commandTypeIds);
  }
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)commandTypeIds, 0, 0LL);
  this->fields.lastDispSpot = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.lastDispSpot, 0, v49, v50);
  v53 = (System_Collections_Generic_List_int__o *)sub_1B64314(System_Collections_Generic_List_int__TypeInfo, v51, v52);
  System_Collections_Generic_List_int____ctor(
    v53,
    (const MethodInfo_348F688 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.invalidMapGimmickIdList = v53;
  p_invalidMapGimmickIdList = &this->fields.invalidMapGimmickIdList;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)p_invalidMapGimmickIdList, (int32_t)v53, v55, v56);
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

  if ( (byte_49F9330 & 1) == 0 )
  {
    sub_1B640C8(
      &Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___ContainsKey__,
      *(_QWORD *)&commandType);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___get_Item__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Contains__, v8);
    byte_49F9330 = 1;
  }
  commandTypeIds = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.commandTypeIds;
  if ( !commandTypeIds )
    goto LABEL_9;
  if ( System_Collections_Generic_Dictionary_Int32Enum__object___ContainsKey(
         commandTypeIds,
         commandType,
         (const MethodInfo_3152A34 *)Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___ContainsKey__) )
  {
    commandTypeIds = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.commandTypeIds;
    if ( commandTypeIds )
    {
      commandTypeIds = (System_Collections_Generic_Dictionary_TKey__TValue__o *)System_Collections_Generic_Dictionary_Int32Enum__object___get_Item(
                                                                                  commandTypeIds,
                                                                                  commandType,
                                                                                  (const MethodInfo_31527A0 *)Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___get_Item__);
      if ( commandTypeIds )
        return System_Collections_Generic_List_int___Contains(
                 (System_Collections_Generic_List_int__o *)commandTypeIds,
                 commandTypeId,
                 (const MethodInfo_3490254 *)Method_System_Collections_Generic_List_int__Contains__);
    }
LABEL_9:
    sub_1B64324(commandTypeIds);
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
      sub_1B6432C(this, *(_QWORD *)&spotId);
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
    sub_1B64324(this);
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

  if ( (byte_49F9341 & 1) == 0 )
  {
    sub_1B640C8(&TerminalSceneComponent_TypeInfo, method);
    byte_49F9341 = 1;
  }
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_49F76BD )
  {
    sub_1B640C8(&TerminalSceneComponent_TypeInfo, method);
    byte_49F76BD = 1;
  }
  v2 = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v2 = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
  }
  klass = v2->fields.rootEffectP->klass;
  if ( !klass || (v2 = *(ScrTerminalMap_o **)&klass->_2.thread_static_fields_offset) == 0LL )
    sub_1B64324(v2);
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
        sub_1B6432C(actionCommand, method);
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

  if ( (byte_49F933C & 1) == 0 )
  {
    sub_1B640C8(&Method_CStateManager_QuestAfterAction__getState__, method);
    byte_49F933C = 1;
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
  __int64 v27; // x1
  __int64 v28; // x2
  EventMissionActionAddEntity_o *v29; // x23
  EventMissionActionInfo_o *v30; // x21
  Il2CppObject *Entity; // x0
  Il2CppObject *v32; // x21
  Il2CppObject *v33; // x0
  _BOOL8 v34; // x0
  __int64 v35; // x1
  Il2CppObject *current; // x21
  TerminalPramsManager_c *v37; // x0
  int32_t v38; // w2
  int32_t v39; // w3
  struct TerminalTransitionInfo_o *TransitionInfo_k__BackingField; // x0
  Il2CppClass *klass; // x1
  __int64 v42; // x0
  struct TerminalTransitionInfo_o *v43; // x8
  EventMissionActionEntity_o *v44; // x0
  __int64 v45; // x1
  __int64 v46; // x2
  EventMissionActionEntity_o *v47; // x23
  Il2CppObject *v48; // x0
  Il2CppObject *v49; // x23
  __int64 v50; // x1
  TerminalPramsManager_c *v51; // x0
  int32_t v52; // w2
  int32_t v53; // w3
  struct System_String_array *vals; // x1
  struct TerminalTransitionInfo_o *v55; // x8
  System_Collections_Generic_List_Enumerator_object__o v56; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v57; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_49F9334 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_EventMaster___, method);
    sub_1B640C8(&Method_DataManager_GetMasterData_EventMissionActionAddMaster___, v2);
    sub_1B640C8(&Method_DataManager_GetMasterData_EventMissionActionMaster___, v3);
    sub_1B640C8(&Method_DataManager_GetMasterData_EventMissionMaster___, v4);
    sub_1B640C8(&Method_DataManager_GetMaster_EventMaster___, v5);
    sub_1B640C8(&Method_DataManager_GetMaster_ShopActionMaster___, v6);
    sub_1B640C8(&Method_DataManager_GetMaster_ShopMaster___, v7);
    sub_1B640C8(&DataManager_TypeInfo, v8);
    sub_1B640C8(&Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__, v9);
    sub_1B640C8(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v10);
    sub_1B640C8(&Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__GetEntity__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ShopActionEntity__Dispose__, v12);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ShopActionEntity__MoveNext__, v13);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ShopActionEntity__get_Current__, v14);
    sub_1B640C8(&EventMissionActionInfo_TypeInfo, v15);
    sub_1B640C8(&Method_System_Collections_Generic_List_ShopActionEntity__GetEnumerator__, v16);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v18);
    sub_1B640C8(&TerminalSceneComponent_TypeInfo, v19);
    byte_49F9334 = 1;
  }
  memset(&v57, 0, sizeof(v57));
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  TerminalTransitionInfoData = TerminalPramsManager__Load_TerminalTransitionInfoData(0LL);
  if ( !TerminalTransitionInfoData )
    return;
  v22 = TerminalTransitionInfoData;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_49F76BD )
  {
    sub_1B640C8(&TerminalSceneComponent_TypeInfo, v21);
    byte_49F76BD = 1;
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
      Master_object = (char *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_ShopMaster___);
      if ( !Master_object )
        goto LABEL_67;
      Entity = DataMasterBase_object__object__int___GetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                 v22->fields.shopId,
                 (const MethodInfo_30D3EA4 *)Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__);
      if ( Entity )
      {
        v32 = Entity;
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Master_object = (char *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_EventMaster___);
        if ( !Master_object )
          goto LABEL_67;
        v33 = DataMasterBase_object__object__int___GetEntity(
                (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                (int32_t)v32[1].monitor,
                (const MethodInfo_30D3EA4 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
        if ( !v33 || !EventEntity__IsEventPeriod((EventEntity_o *)v33, 0LL, 0LL) )
          goto LABEL_66;
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Master_object = (char *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_ShopActionMaster___);
        if ( !Master_object )
          goto LABEL_67;
        Master_object = (char *)ShopActionMaster__GetEntityList(
                                  (ShopActionMaster_o *)Master_object,
                                  (int32_t)v32[1].klass,
                                  0LL);
        if ( !Master_object )
          goto LABEL_67;
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v56,
          (System_Collections_Generic_List_object__o *)Master_object,
          (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_ShopActionEntity__GetEnumerator__);
        v57 = v56;
        while ( 1 )
        {
          v34 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v57,
                  (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_ShopActionEntity__MoveNext__);
          if ( !v34 )
            break;
          current = v57.fields._current;
          if ( !v57.fields._current )
            sub_1B64324(v34);
          if ( LODWORD(v57.fields._current[1].monitor) == 4 )
          {
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            if ( !byte_49F9359 )
            {
              sub_1B640C8(&TerminalPramsManager_TypeInfo, v35);
              byte_49F9359 = 1;
            }
            v37 = TerminalPramsManager_TypeInfo;
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
              v37 = TerminalPramsManager_TypeInfo;
            }
            v37->static_fields->meSceneStatus = 2;
            TerminalSceneComponent__CreateTransitionInfo(v24, v22, 0LL);
            TransitionInfo_k__BackingField = v24->fields._TransitionInfo_k__BackingField;
            if ( !TransitionInfo_k__BackingField )
              sub_1B64324(0LL);
            klass = current[2].klass;
            TransitionInfo_k__BackingField->fields.afterActionVals = (struct System_String_array *)klass;
            sub_1B6406C(
              (ServantStatusBattleListViewItem_o *)&TransitionInfo_k__BackingField->fields.afterActionVals,
              (int32_t)klass,
              v38,
              v39);
            v43 = v24->fields._TransitionInfo_k__BackingField;
            if ( !v43 )
              sub_1B64324(v42);
            v43->fields.optionId = (int32_t)current[2].monitor;
            break;
          }
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v57,
          (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_ShopActionEntity__Dispose__);
      }
    }
  }
  else
  {
    Master_object = (char *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Master_object )
      goto LABEL_67;
    v25 = (DataManager_o *)Master_object;
    Master_object = (char *)DataManager__GetMasterData_object_(
                              (DataManager_o *)Master_object,
                              (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_EventMissionActionAddMaster___);
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
      v29 = EntityFromIdProgressTypeAndActionType;
      v30 = (EventMissionActionInfo_o *)sub_1B64314(EventMissionActionInfo_TypeInfo, v27, v28);
      EventMissionActionInfo___ctor_41995308(v30, v29, 0LL);
    }
    else
    {
      Master_object = (char *)DataManager__GetMasterData_object_(
                                v25,
                                (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_EventMissionActionMaster___);
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
      v47 = v44;
      v30 = (EventMissionActionInfo_o *)sub_1B64314(EventMissionActionInfo_TypeInfo, v45, v46);
      EventMissionActionInfo___ctor(v30, v47, 0LL);
    }
    Master_object = (char *)DataManager__GetMasterData_object_(
                              v25,
                              (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_EventMissionMaster___);
    if ( !Master_object )
      goto LABEL_67;
    v48 = DataMasterBase_object__object__int___GetEntity(
            (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
            v22->fields.missionId,
            (const MethodInfo_30D3EA4 *)Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__GetEntity__);
    if ( v48 )
    {
      v49 = v48;
      Master_object = (char *)DataManager__GetMasterData_object_(
                                v25,
                                (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_EventMaster___);
      if ( !Master_object )
        goto LABEL_67;
      Master_object = (char *)DataMasterBase_object__object__int___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                HIDWORD(v49[1].monitor),
                                (const MethodInfo_30D3EA4 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
      if ( !Master_object )
        goto LABEL_67;
      if ( EventEntity__IsEventPeriod((EventEntity_o *)Master_object, 0LL, 0LL) )
      {
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_49F9359 )
        {
          sub_1B640C8(&TerminalPramsManager_TypeInfo, v50);
          byte_49F9359 = 1;
        }
        v51 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v51 = TerminalPramsManager_TypeInfo;
        }
        v51->static_fields->meSceneStatus = 2;
        TerminalSceneComponent__CreateTransitionInfo(v24, v22, 0LL);
        if ( v30 )
        {
          Master_object = (char *)v24->fields._TransitionInfo_k__BackingField;
          if ( Master_object )
          {
            vals = v30->fields.vals;
            *((_QWORD *)Master_object + 4) = vals;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)(Master_object + 32), (int32_t)vals, v52, v53);
            v55 = v24->fields._TransitionInfo_k__BackingField;
            if ( v55 )
            {
              v55->fields.optionId = v30->fields.optionId;
              return;
            }
          }
        }
LABEL_67:
        sub_1B64324(Master_object);
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
  __int64 v9; // x1
  __int64 v10; // x2
  System_Collections_Generic_List_object__o *v11; // x22
  const MethodInfo *v12; // x3

  if ( (byte_49F9331 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__get_Values__, endAct);
    sub_1B640C8(&Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo___ctor__, v5);
    sub_1B640C8(&System_Collections_Generic_List_QuestAfterAction_VoiceInfo__TypeInfo, v6);
    byte_49F9331 = 1;
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
      sub_1B64324(0LL);
    Values = System_Collections_Generic_Dictionary_int__object___get_Values(
               (System_Collections_Generic_Dictionary_int__object__o *)svtVoices,
               (const MethodInfo_3123794 *)Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__get_Values__);
    v11 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                         System_Collections_Generic_List_QuestAfterAction_VoiceInfo__TypeInfo,
                                                         v9,
                                                         v10);
    System_Collections_Generic_List_object____ctor_55234504(
      v11,
      (System_Collections_Generic_IEnumerable_T__o *)Values,
      (const MethodInfo_34ACFC8 *)Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo___ctor__);
    QuestAfterAction__LoadVoice_33550552(
      this,
      (System_Collections_Generic_List_QuestAfterAction_VoiceInfo__o *)v11,
      endAct,
      v12);
  }
}


void __fastcall QuestAfterAction__LoadVoice_33550552(
        QuestAfterAction_o *this,
        System_Collections_Generic_List_QuestAfterAction_VoiceInfo__o *svtVInfos,
        System_Action_o *endAct,
        const MethodInfo *method)
{
  System_Action_o *v4; // x29
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
  int32_t v16; // w2
  int32_t v17; // w3
  CommonUI_o **v18; // x28
  int32_t v19; // w2
  int32_t v20; // w3
  System_Action_o **v21; // x19
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *VoiceAssetName_39436496; // x19
  Il2CppObject *v25; // x20
  __int64 v26; // x1
  __int64 v27; // x2
  System_Action_o *v28; // x22

  v4 = endAct;
  v5 = svtVInfos;
  while ( 1 )
  {
    if ( (byte_49F9332 & 1) == 0 )
    {
      sub_1B640C8(&System_Action_TypeInfo, svtVInfos);
      sub_1B640C8(&Method_System_Linq_Enumerable_Any_QuestAfterAction_VoiceInfo___, v7);
      sub_1B640C8(&Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo__RemoveAt__, v8);
      sub_1B640C8(&Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo__get_Item__, v9);
      sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v10);
      sub_1B640C8(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__, v11);
      sub_1B640C8(&Method_QuestAfterAction___c__DisplayClass67_0__LoadVoice_b__0__, v12);
      sub_1B640C8(&QuestAfterAction___c__DisplayClass67_0_TypeInfo, v13);
      byte_49F9332 = 1;
    }
    v14 = sub_1B64314(QuestAfterAction___c__DisplayClass67_0_TypeInfo, svtVInfos, endAct);
    QuestAfterAction___c__DisplayClass67_0___ctor((QuestAfterAction___c__DisplayClass67_0_o *)v14, 0LL);
    if ( !v14 )
      goto LABEL_18;
    *(_QWORD *)(v14 + 16) = v5;
    v18 = (CommonUI_o **)(v14 + 16);
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v14 + 16), (int32_t)v5, v16, v17);
    *(_QWORD *)(v14 + 24) = this;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v14 + 24), (int32_t)this, v19, v20);
    *(_QWORD *)(v14 + 32) = v4;
    v21 = (System_Action_o **)(v14 + 32);
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v14 + 32), (int32_t)v4, v22, v23);
    if ( !System_Linq_Enumerable__Any_object_(
            *(System_Collections_Generic_IEnumerable_TSource__o **)(v14 + 16),
            (const MethodInfo_2E46A94 *)Method_System_Linq_Enumerable_Any_QuestAfterAction_VoiceInfo___) )
    {
      Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( Instance )
      {
        CommonUI__SetLoadMode(Instance, 0, 0LL);
        ActionExtensions__Call(*v21, 0LL);
        return;
      }
LABEL_18:
      sub_1B64324(Instance);
    }
    Instance = *v18;
    if ( !*v18 )
      goto LABEL_18;
    Instance = (CommonUI_o *)System_Collections_Generic_List_object___get_Item(
                               (System_Collections_Generic_List_object__o *)Instance,
                               0,
                               (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo__get_Item__);
    if ( !Instance )
      goto LABEL_18;
    if ( Instance->fields.m_CachedPtr )
      break;
    Instance = *v18;
    if ( !*v18 )
      goto LABEL_18;
    System_Collections_Generic_List_object___RemoveAt(
      (System_Collections_Generic_List_object__o *)Instance,
      0,
      (const MethodInfo_34AEF48 *)Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo__RemoveAt__);
    v5 = (System_Collections_Generic_List_QuestAfterAction_VoiceInfo__o *)*v18;
    v4 = *v21;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  CommonUI__SetLoadMode(Instance, 1, 0LL);
  Instance = *v18;
  if ( !*v18 )
    goto LABEL_18;
  Instance = (CommonUI_o *)System_Collections_Generic_List_object___get_Item(
                             (System_Collections_Generic_List_object__o *)Instance,
                             0,
                             (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo__get_Item__);
  if ( !Instance )
    goto LABEL_18;
  VoiceAssetName_39436496 = ServantVoiceEntity__getVoiceAssetName_39436496(Instance->fields.m_CachedPtr, 0LL);
  v25 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
  v28 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v26, v27);
  System_Action___ctor(v28, (Il2CppObject *)v14, Method_QuestAfterAction___c__DisplayClass67_0__LoadVoice_b__0__, 0LL);
  if ( !v25 )
    goto LABEL_18;
  SoundManager__LoadAudioAssetStorage((SoundManager_o *)v25, VoiceAssetName_39436496, v28, 1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall QuestAfterAction__MapObjName(
        QuestAfterAction_o *this,
        int32_t comType,
        int32_t id,
        const MethodInfo *method)
{
  __int64 v6; // x1

  if ( (byte_49F9340 & 1) == 0 )
  {
    sub_1B640C8(&SrcSpotBasePrefab_TypeInfo, *(_QWORD *)&comType);
    sub_1B640C8(&StringLiteral_1/*""*/, v6);
    byte_49F9340 = 1;
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
  UnityEngine_Collider_o *screenCollider; // x0
  const MethodInfo *v5; // x1
  struct System_Collections_Generic_List_int__o *invalidMapGimmickIdList; // x8
  int v7; // w9

  if ( (byte_49F933A & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Clear__, method);
    byte_49F933A = 1;
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
    sub_1B64324(screenCollider);
  }
  v7 = invalidMapGimmickIdList->fields._version + 1;
  invalidMapGimmickIdList->fields._size = 0;
  invalidMapGimmickIdList->fields._version = v7;
  QuestAfterAction__Init(this, v5);
  this->fields.isKeepingMainStateButFinished = 0;
}


void __fastcall QuestAfterAction__Play(QuestAfterAction_o *this, System_Action_o *endAct, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x21
  Il2CppObject *Instance; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  __int64 v12; // x1
  __int64 v13; // x2
  System_Action_o *v14; // x22
  int32_t v15; // w2
  int32_t v16; // w3
  const MethodInfo *v17; // x2

  if ( (byte_49F9336 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, endAct);
    sub_1B640C8(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v5);
    sub_1B640C8(&Method_QuestAfterAction___c__DisplayClass71_0__Play_b__0__, v6);
    sub_1B640C8(&QuestAfterAction___c__DisplayClass71_0_TypeInfo, v7);
    byte_49F9336 = 1;
  }
  v8 = sub_1B64314(QuestAfterAction___c__DisplayClass71_0_TypeInfo, endAct, method);
  QuestAfterAction___c__DisplayClass71_0___ctor((QuestAfterAction___c__DisplayClass71_0_o *)v8, 0LL);
  if ( !v8
    || (*(_QWORD *)(v8 + 16) = endAct,
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v8 + 16), (int32_t)endAct, v10, v11),
        (Instance = SingletonTemplate_object___get_Instance((const MethodInfo_36EC45C *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__)) == 0LL) )
  {
    sub_1B64324(Instance);
  }
  MissionNotifyManager__StartPause((MissionNotifyManager_o *)Instance, 0LL);
  v14 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v12, v13);
  System_Action___ctor(v14, (Il2CppObject *)v8, Method_QuestAfterAction___c__DisplayClass71_0__Play_b__0__, 0LL);
  this->fields.endAct = v14;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.endAct, (int32_t)v14, v15, v16);
  if ( this->fields.commandBuf )
    QuestAfterAction__SetState(this, 1, v17);
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
  int32_t v13; // w2
  int32_t v14; // w3
  int32_t v15; // w2
  int32_t v16; // w3
  const MethodInfo *v17; // x1
  struct QuestAfterAction_Command_array *CommandBuf; // x0
  int32_t v19; // w2
  int32_t v20; // w3
  __int64 v21; // x1
  __int64 v22; // x2
  System_Action_o *v23; // x21
  int32_t v24; // w2
  int32_t v25; // w3
  __int64 v26; // x1
  __int64 v27; // x2
  System_Action_o *v28; // x21
  const MethodInfo *v29; // x2
  System_Collections_IEnumerator_o *v30; // x1

  if ( (byte_49F9337 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, actionVals);
    sub_1B640C8(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v7);
    sub_1B640C8(&Method_QuestAfterAction___c__DisplayClass72_0__PlaySpecifiedAction_b__0__, v8);
    sub_1B640C8(&Method_QuestAfterAction___c__DisplayClass72_0__PlaySpecifiedAction_b__1__, v9);
    sub_1B640C8(&QuestAfterAction___c__DisplayClass72_0_TypeInfo, v10);
    byte_49F9337 = 1;
  }
  v11 = sub_1B64314(QuestAfterAction___c__DisplayClass72_0_TypeInfo, actionVals, finishCallback);
  QuestAfterAction___c__DisplayClass72_0___ctor((QuestAfterAction___c__DisplayClass72_0_o *)v11, 0LL);
  if ( !v11 )
    goto LABEL_8;
  *(_QWORD *)(v11 + 16) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v11 + 16), (int32_t)this, v13, v14);
  *(_QWORD *)(v11 + 24) = finishCallback;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v11 + 24), (int32_t)finishCallback, v15, v16);
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)actionVals, 0LL) )
  {
    ActionExtensions__Call(*(System_Action_o **)(v11 + 24), 0LL);
    return;
  }
  CommandBuf = QuestAfterAction__GenerateCommandBuf(actionVals, v17);
  this->fields.temporaryCommandBuf = CommandBuf;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.temporaryCommandBuf, (int32_t)CommandBuf, v19, v20);
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_36EC45C *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
LABEL_8:
    sub_1B64324(Instance);
  MissionNotifyManager__StartPause((MissionNotifyManager_o *)Instance, 0LL);
  v23 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v21, v22);
  System_Action___ctor(
    v23,
    (Il2CppObject *)v11,
    Method_QuestAfterAction___c__DisplayClass72_0__PlaySpecifiedAction_b__0__,
    0LL);
  this->fields.endAct = v23;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.endAct, (int32_t)v23, v24, v25);
  v28 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v26, v27);
  System_Action___ctor(
    v28,
    (Il2CppObject *)v11,
    Method_QuestAfterAction___c__DisplayClass72_0__PlaySpecifiedAction_b__1__,
    0LL);
  v30 = QuestAfterAction__WaitWhileMainStateFinished(this, v28, v29);
  UnityEngine_MonoBehaviour__StartCoroutine_69113008((UnityEngine_MonoBehaviour_o *)this, v30, 0LL);
}


void __fastcall QuestAfterAction__PlaySpecifiedActionInstantly(
        QuestAfterAction_o *this,
        QuestAfterAction_Command_array *commandArray,
        const MethodInfo *method)
{
  __int64 v5; // x1
  int32_t v6; // w2
  int32_t v7; // w3
  __int64 v8; // x1
  __int64 v9; // x2
  System_Action_o *v10; // x20
  int32_t v11; // w2
  int32_t v12; // w3
  const MethodInfo *v13; // x2

  if ( (byte_49F9339 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, commandArray);
    sub_1B640C8(&Method_QuestAfterAction__PlaySpecifiedActionInstantly_b__75_0__, v5);
    byte_49F9339 = 1;
  }
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)commandArray, 0LL) )
  {
    this->fields.temporaryCommandBuf = commandArray;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.temporaryCommandBuf, (int32_t)commandArray, v6, v7);
    v10 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v8, v9);
    System_Action___ctor(
      v10,
      (Il2CppObject *)this,
      Method_QuestAfterAction__PlaySpecifiedActionInstantly_b__75_0__,
      0LL);
    this->fields.endAct = v10;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.endAct, (int32_t)v10, v11, v12);
    QuestAfterAction__SetState(this, 3, v13);
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

  if ( (byte_49F933F & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, *(_QWORD *)&cType);
    sub_1B640C8(&TerminalSceneComponent_TypeInfo, v7);
    byte_49F933F = 1;
  }
  this->fields.ActionMapTargetType = cType;
  this->fields.ActionMapTargetId = cTarget;
  QuestAfterAction__SetState(this, 0, *(const MethodInfo **)&cTarget);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_49F7A3E )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v8);
    byte_49F7A3E = 1;
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
  if ( !byte_49F76BD )
  {
    sub_1B640C8(&TerminalSceneComponent_TypeInfo, v8);
    byte_49F76BD = 1;
  }
  v10 = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v10 = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
  }
  klass = v10->fields.rootEffectP->klass;
  if ( !klass || (v10 = *(ScrTerminalMap_o **)&klass->_2.thread_static_fields_offset) == 0LL )
    sub_1B64324(v10);
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
  __int64 v11; // x1
  int m_CancellationTokenSource; // w8
  System_String_o *TitleInfoCtrlCallback_k__BackingField; // x0
  int32_t SpotId; // w0
  Il2CppObject *MasterData_object; // x0
  System_String_o *param; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v17; // x20

  v4 = this;
  if ( (byte_49F932F & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_QuestMaster___, com);
    sub_1B640C8(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v5);
    this = (QuestAfterAction_o *)sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_49F932F = 1;
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
                sub_1B6432C(this, v11);
              TitleInfoCtrlCallback_k__BackingField = (System_String_o *)this->fields.invalidMapGimmickIdList;
              goto LABEL_29;
            }
          }
LABEL_42:
          sub_1B64324(this);
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
          this = (QuestAfterAction_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( this )
          {
            MasterData_object = DataManager__GetMasterData_object_(
                                  (DataManager_o *)this,
                                  (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_QuestMaster___);
            param = com->fields.param;
            v17 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
            this = (QuestAfterAction_o *)System_Int32__Parse(param, 0LL);
            if ( v17 )
            {
              this = (QuestAfterAction_o *)DataMasterBase_object__object__int___GetEntity(
                                             v17,
                                             (int32_t)this,
                                             (const MethodInfo_30D3EA4 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
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

  if ( (byte_49F933D & 1) == 0 )
  {
    sub_1B640C8(&Method_CStateManager_QuestAfterAction__setState__, *(_QWORD *)&state);
    byte_49F933D = 1;
  }
  fsm = (CStateManager_T__o *)this->fields.fsm;
  if ( !fsm )
    sub_1B64324(0LL);
  CStateManager_object___setState(
    fsm,
    state,
    (const MethodInfo_30613F0 *)Method_CStateManager_QuestAfterAction__setState__);
}


void __fastcall QuestAfterAction__SkipToNextAction(QuestAfterAction_o *this, const MethodInfo *method)
{
  this->fields.isSkippedNext = 1;
}


void __fastcall QuestAfterAction__Update(QuestAfterAction_o *this, const MethodInfo *method)
{
  CStateManager_T__o *fsm; // x0

  if ( (byte_49F9335 & 1) == 0 )
  {
    sub_1B640C8(&Method_CStateManager_QuestAfterAction__update__, method);
    byte_49F9335 = 1;
  }
  fsm = (CStateManager_T__o *)this->fields.fsm;
  if ( fsm )
    CStateManager_object___update(fsm, (const MethodInfo_30613CC *)Method_CStateManager_QuestAfterAction__update__);
}


System_Collections_IEnumerator_o *__fastcall QuestAfterAction__WaitWhileMainStateFinished(
        QuestAfterAction_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  int32_t v7; // w2
  int32_t v8; // w3
  int32_t v9; // w2
  int32_t v10; // w3

  if ( (byte_49F933B & 1) == 0 )
  {
    sub_1B640C8(&QuestAfterAction__WaitWhileMainStateFinished_d__78_TypeInfo, action);
    byte_49F933B = 1;
  }
  v5 = sub_1B64314(QuestAfterAction__WaitWhileMainStateFinished_d__78_TypeInfo, action, method);
  QuestAfterAction__WaitWhileMainStateFinished_d__78___ctor(
    (QuestAfterAction__WaitWhileMainStateFinished_d__78_o *)v5,
    0,
    0LL);
  if ( !v5 )
    sub_1B64324(v6);
  *(_QWORD *)(v5 + 32) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v5 + 32), (int32_t)this, v7, v8);
  *(_QWORD *)(v5 + 40) = action;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v5 + 40), (int32_t)action, v9, v10);
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
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.endAct, 0, v2, v3);
  this->fields.temporaryCommandBuf = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.temporaryCommandBuf, 0, v5, v6);
  QuestAfterAction__SetState(this, 0, v7);
}


System_Int32_array *__fastcall QuestAfterAction__getMapGmkOffIdList(QuestAfterAction_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *invalidMapGimmickIdList; // x0

  if ( (byte_49F932E & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_int__ToArray__, method);
    byte_49F932E = 1;
  }
  invalidMapGimmickIdList = this->fields.invalidMapGimmickIdList;
  if ( !invalidMapGimmickIdList )
    sub_1B64324(0LL);
  return System_Collections_Generic_List_int___ToArray(
           invalidMapGimmickIdList,
           (const MethodInfo_3491A34 *)Method_System_Collections_Generic_List_int__ToArray__);
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
  __int64 v13; // x1
  __int64 v14; // x2
  System_Collections_Generic_List_object__o *v15; // x20
  _BOOL8 v16; // x0
  System_String_o *VoiceAssetName_39436496; // x20
  System_Collections_Generic_List_Enumerator_object__o v18; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_49F9333 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__Clear__, method);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__get_Values__, v3);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_QuestAfterAction_VoiceInfo__Dispose__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_QuestAfterAction_VoiceInfo__MoveNext__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_QuestAfterAction_VoiceInfo__get_Current__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo__GetEnumerator__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo___ctor__, v8);
    sub_1B640C8(&System_Collections_Generic_List_QuestAfterAction_VoiceInfo__TypeInfo, v9);
    sub_1B640C8(&SoundManager_TypeInfo, v10);
    byte_49F9333 = 1;
  }
  memset(&v18, 0, sizeof(v18));
  svtVoices = this->fields.svtVoices;
  if ( !svtVoices )
    goto LABEL_14;
  Values = System_Collections_Generic_Dictionary_int__object___get_Values(
             (System_Collections_Generic_Dictionary_int__object__o *)svtVoices,
             (const MethodInfo_3123794 *)Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__get_Values__);
  v15 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_QuestAfterAction_VoiceInfo__TypeInfo,
                                                       v13,
                                                       v14);
  System_Collections_Generic_List_object____ctor_55234504(
    v15,
    (System_Collections_Generic_IEnumerable_T__o *)Values,
    (const MethodInfo_34ACFC8 *)Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo___ctor__);
  if ( !v15 )
    goto LABEL_14;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v18,
    v15,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo__GetEnumerator__);
  while ( 1 )
  {
    v16 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v18,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_QuestAfterAction_VoiceInfo__MoveNext__);
    if ( !v16 )
      break;
    if ( !v18.fields._current )
      sub_1B64324(v16);
    VoiceAssetName_39436496 = ServantVoiceEntity__getVoiceAssetName_39436496((int32_t)v18.fields._current[1].klass, 0LL);
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    SoundManager__releaseAudioAssetStorage(VoiceAssetName_39436496, 0LL);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v18,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_QuestAfterAction_VoiceInfo__Dispose__);
  svtVoices = this->fields.svtVoices;
  if ( !svtVoices )
LABEL_14:
    sub_1B64324(svtVoices);
  System_Collections_Generic_Dictionary_int__object___Clear(
    (System_Collections_Generic_Dictionary_int__object__o *)svtVoices,
    (const MethodInfo_3123B0C *)Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__Clear__);
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
  __int64 v17; // x1
  __int64 v18; // x2
  System_Collections_Generic_List_object__o *v19; // x21
  __int64 v20; // x1
  __int64 v21; // x2
  System_Random_o *v22; // x22
  __int64 size; // x1
  int32_t v24; // w24
  int v25; // w8
  void *v26; // x25
  __int64 v27; // x1
  Il2CppObject *Item; // x25
  __int64 v29; // x8
  __int64 v30; // x8
  int32_t v31; // w1
  _BOOL8 v32; // x0
  __int64 v33; // x1
  int v34; // w8
  void *v35; // x21
  int32_t result; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_49F9345 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_VoicePlayCondMaster___, svtId);
    sub_1B640C8(&Method_System_Collections_Generic_List_string__RemoveAt__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_string___ctor___75668144, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_string__get_Count__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_string__get_Item__, v8);
    sub_1B640C8(&System_Collections_Generic_List_string__TypeInfo, v9);
    sub_1B640C8(&System_Random_TypeInfo, v10);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_1B640C8(&TerminalSceneComponent_TypeInfo, v12);
    sub_1B640C8(&StringLiteral_16054/*"_"*/, v13);
    byte_49F9345 = 1;
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
    param = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( param )
    {
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)param,
                            (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_VoicePlayCondMaster___);
      v19 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                           System_Collections_Generic_List_string__TypeInfo,
                                                           v17,
                                                           v18);
      System_Collections_Generic_List_object____ctor_55234504(
        v19,
        v15,
        (const MethodInfo_34ACFC8 *)Method_System_Collections_Generic_List_string___ctor___75668144);
      result = 0;
      v22 = (System_Random_o *)sub_1B64314(System_Random_TypeInfo, v20, v21);
      System_Random___ctor(v22, 0LL);
      if ( v19 )
      {
        if ( v22 )
        {
          size = (unsigned int)v19->fields._size;
          while ( 1 )
          {
            v24 = ((__int64 (__fastcall *)(System_Random_o *, __int64, Il2CppMethodPointer))v22->klass->vtable._7_Next.method)(
                    v22,
                    size,
                    v22->klass->vtable._8_NextDouble.methodPtr);
            result = 0;
            param = System_Collections_Generic_List_object___get_Item(
                      v19,
                      v24,
                      (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_string__get_Item__);
            if ( !param )
              break;
            param = System_String__Split((System_String_o *)param, 0x5Fu, 0, 0LL);
            if ( !param )
              break;
            v25 = *((_DWORD *)param + 6);
            v26 = param;
            if ( v25 == 3 )
            {
              v32 = System_Int32__TryParse(*((System_String_o **)param + 4), &result, 0LL);
              if ( *((_DWORD *)v26 + 6) < 3u )
                goto LABEL_42;
              param = System_String__Concat_61386656(
                        *((System_String_o **)v26 + 5),
                        (System_String_o *)StringLiteral_16054/*"_"*/,
                        *((System_String_o **)v26 + 6),
                        0LL);
              if ( !MasterData_object )
                break;
              v31 = result;
              Item = (Il2CppObject *)param;
            }
            else
            {
              if ( v25 != 2 )
                goto LABEL_29;
              result = 0;
              Item = System_Collections_Generic_List_object___get_Item(
                       v19,
                       v24,
                       (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_string__get_Item__);
              if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
              if ( !byte_49F76BD )
              {
                sub_1B640C8(&TerminalSceneComponent_TypeInfo, v27);
                byte_49F76BD = 1;
              }
              param = TerminalSceneComponent_TypeInfo;
              if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
                param = TerminalSceneComponent_TypeInfo;
              }
              v29 = **((_QWORD **)param + 23);
              if ( !v29 )
                break;
              v30 = *(_QWORD *)(v29 + 456);
              if ( !v30 )
                break;
              param = (void *)ServantVoiceEntity__getSvtIdfromVoiceAssetName(*(System_String_o **)(v30 + 40), 0LL);
              if ( !MasterData_object )
                break;
              v31 = (int)param;
            }
            if ( VoicePlayCondMaster__isVoicePlay(
                   (VoicePlayCondMaster_o *)MasterData_object,
                   v31,
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
              v19,
              v24,
              (const MethodInfo_34AEF48 *)Method_System_Collections_Generic_List_string__RemoveAt__);
            size = (unsigned int)v19->fields._size;
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
    sub_1B64324(param);
  }
  param = this->fields.param;
  if ( !param )
    goto LABEL_41;
  param = System_String__Split((System_String_o *)param, 0x5Fu, 0, 0LL);
  if ( !param )
    goto LABEL_41;
  v34 = *((_DWORD *)param + 6);
  v35 = param;
  if ( v34 != 3 )
  {
    if ( v34 == 2 )
      return this->fields.param;
    return 0LL;
  }
  v32 = System_Int32__TryParse(*((System_String_o **)param + 4), svtId, 0LL);
  if ( *((_DWORD *)v35 + 6) < 3u )
LABEL_42:
    sub_1B6432C(v32, v33);
  return System_String__Concat_61386656(
           *((System_String_o **)v35 + 5),
           (System_String_o *)StringLiteral_16054/*"_"*/,
           *((System_String_o **)v35 + 6),
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
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF
  int32_t result; // [xsp+1Ch] [xbp-14h] BYREF

  if ( (byte_49F9347 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_BgmMaster___, method);
    sub_1B640C8(&Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__, v3);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_49F9347 = 1;
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
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_12;
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_BgmMaster___);
      if ( !Instance )
        goto LABEL_12;
      Instance = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                   (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                   &entity,
                                   result,
                                   (const MethodInfo_30D3EF8 *)Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( entity )
          return (System_String_o *)entity[1].monitor;
LABEL_12:
        sub_1B64324(Instance);
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
    sub_1B64324(v3);
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
  if ( (byte_49F9346 & 1) == 0 )
  {
    this = (QuestAfterAction_Command_o *)sub_1B640C8(&StringLiteral_16054/*"_"*/, str);
    byte_49F9346 = 1;
  }
  if ( v4->fields.id == 800 )
  {
    if ( !v3 || (this = (QuestAfterAction_Command_o *)System_String__Split(v3, 0x5Fu, 0, 0LL)) == 0LL )
      sub_1B64324(this);
    param = (int)this->fields.param;
    if ( param == 2 )
      return v3;
    if ( param == 3 )
      return System_String__Concat_61386656(
               (System_String_o *)this[1].monitor,
               (System_String_o *)StringLiteral_16054/*"_"*/,
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
    sub_1B64324(this);
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
    sub_1B64324(screenCollider);
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
    sub_1B64324(this);
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
    sub_1B64324(0LL);
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

  klass = this->klass;
  this->fields.IsAnimDoing = 0;
  v6 = ((__int64 (__fastcall *)(QuestAfterAction_StateMain_o *, Il2CppMethodPointer, const MethodInfo *))klass->vtable._10_get_CommandBuf.method)(
         this,
         klass->vtable._11_get_CommandIndex.methodPtr,
         method);
  if ( !v6 )
    sub_1B64324(0LL);
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
  const MethodInfo *v8; // x1
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
  if ( (byte_49F934C & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Remove__, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__ToArray__, v3);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v4);
    sub_1B640C8(&Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___, v5);
    this = (QuestAfterAction_StateMain_o *)sub_1B640C8(&Method_SingletonTemplate_QuestTree__get_Instance__, v6);
    byte_49F934C = 1;
  }
  that = v2->fields.that;
  if ( !that )
    goto LABEL_22;
  this = (QuestAfterAction_StateMain_o *)that->fields.invalidMapGimmickIdList;
  if ( !this )
    goto LABEL_22;
  this = (QuestAfterAction_StateMain_o *)System_Collections_Generic_List_int___ToArray(
                                           (System_Collections_Generic_List_int__o *)this,
                                           (const MethodInfo_3491A34 *)Method_System_Collections_Generic_List_int__ToArray__);
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
        sub_1B6432C(this, v8);
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
        (const MethodInfo_3491478 *)Method_System_Collections_Generic_List_int__Remove__);
      this = (QuestAfterAction_StateMain_o *)v2->fields.that;
      if ( !this )
        break;
      MapComponent_object = QuestAfterAction__GetMapComponent_object_(
                              (QuestAfterAction_o *)this,
                              2,
                              v13,
                              v2,
                              (const MethodInfo_2EC8D20 *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (QuestAfterAction_StateMain_o *)UnityEngine_Object__op_Inequality(
                                               (UnityEngine_Object_o *)MapComponent_object,
                                               0LL,
                                               0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        this = (QuestAfterAction_StateMain_o *)SingletonTemplate_object___get_Instance((const MethodInfo_36EC45C *)Method_SingletonTemplate_QuestTree__get_Instance__);
        if ( !MapComponent_object || !this )
          break;
        this = (QuestAfterAction_StateMain_o *)QuestTree__CheckMapGimmickCond_33828248(
                                                 (QuestTree_o *)this,
                                                 (MapControl_MapGimmickInfo_o *)MapComponent_object[7].klass,
                                                 0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          klass = MapComponent_object[7].klass;
          if ( !klass )
            break;
          LODWORD(klass->_1.name) = 1;
          AnimTime = MapGimmickComponent__GetAnimTime((MapGimmickComponent_o *)MapComponent_object, v8);
          MapGimmickComponent__SetDispAnim_33509680((MapGimmickComponent_o *)MapComponent_object, 1, AnimTime, 1, v17);
        }
      }
      LODWORD(v9) = *(_DWORD *)&v10->fields.IsAnimDoing;
      if ( (__int64)++v11 >= (int)v9 )
        return;
    }
LABEL_22:
    sub_1B64324(this);
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
  int32_t v100; // w2
  int32_t v101; // w3
  QuestAfterAction_o **v102; // x20
  int32_t v103; // w2
  int32_t v104; // w3
  QuestAfterAction_StateMain_c *klass; // x8
  __int64 v106; // x22
  __int64 v107; // x1
  QuestAfterAction_Command_o *v108; // x22
  __int64 v109; // x1
  __int64 v110; // x2
  QuestAfterAction_o *v111; // x23
  BlankEarthQuestAfterAction_o *BlankEarthQuestAfterAction_k__BackingField; // x24
  System_Action_o *v113; // x25
  const MethodInfo *v114; // x1
  __int64 v115; // x2
  int id; // w8
  float v117; // s0
  __int64 v118; // x1
  __int64 v119; // x2
  float DEFAULT_FADE_TIME; // s8
  AvalonSceneManager_c *v121; // x0
  TerminalSceneComponent_c *v122; // x0
  TerminalSceneComponent_o *mInstance; // x19
  System_Action_o *v124; // x20
  TerminalSceneComponent_o *v125; // x0
  float v126; // s0
  System_Action_o *v127; // x1
  System_String_o *v128; // x19
  System_String_o *v129; // x20
  System_String_o *v130; // x20
  Il2CppObject *Instance; // x22
  __int64 v132; // x1
  __int64 v133; // x2
  System_Action_o *v134; // x23
  __int64 v135; // x8
  __int64 v136; // x24
  float v137; // s0
  System_String_o *param; // x21
  _QWORD *v139; // x0
  System_Reflection_MethodBase_o *v140; // x0
  __int64 v141; // x20
  int32_t v142; // w2
  int32_t v143; // w3
  __int64 v144; // x23
  __int64 v145; // x8
  __int64 v146; // x22
  int32_t v147; // w21
  bool v148; // w24
  bool v149; // w25
  __int64 v150; // x23
  __int64 v151; // x1
  int32_t v152; // w21
  int32_t v153; // w22
  int32_t v154; // w23
  __int64 v155; // x20
  int32_t v156; // w2
  int32_t v157; // w3
  __int64 v158; // x8
  QuestAfterAction_o *v159; // x21
  Il2CppObject *v160; // x0
  int32_t v161; // w2
  int32_t v162; // w3
  UnityEngine_Object_o *v163; // x19
  __int64 v164; // x1
  __int64 v165; // x2
  SrcSpotBasePrefab_o *v166; // x19
  System_Action_o *v167; // x21
  int32_t v168; // w1
  __int64 v169; // x23
  float v170; // s0
  float v171; // s9
  float v172; // s0
  float v173; // s10
  float v174; // s0
  float v175; // s11
  float v176; // s0
  float v177; // s8
  __int64 v178; // x1
  int32_t v179; // w19
  __int64 v180; // x8
  float v181; // s8
  __int64 v182; // x1
  const MethodInfo_35D2010 *v183; // x2
  float v184; // s0
  float v185; // s1
  float v186; // s2
  float v187; // s10
  float v188; // s9
  float v189; // s11
  MapCamera_o *mMapCamera; // x20
  System_Action_o *v191; // x0
  __int64 *v192; // x8
  System_Action_o *v193; // x22
  MapCamera_o *v194; // x0
  float v195; // s0
  float v196; // s1
  float v197; // s2
  float v198; // s3
  int32_t v199; // w1
  System_Action_o *v200; // x2
  __int64 v201; // x20
  int32_t v202; // w2
  int32_t v203; // w3
  __int64 v204; // x8
  QuestAfterAction_o *v205; // x21
  Il2CppObject *v206; // x0
  int32_t v207; // w2
  int32_t v208; // w3
  UnityEngine_Object_o *v209; // x19
  __int64 v210; // x1
  __int64 v211; // x2
  ModelLineComponent_o *v212; // x19
  System_Action_o *v213; // x21
  const MethodInfo *v214; // x3
  int32_t v215; // w1
  const MethodInfo *v216; // x2
  __int64 v217; // x8
  QuestAfterAction_o *v218; // x8
  QuestAfterAction_TitleInfoControlCallback_o *TitleInfoCtrlCallback_k__BackingField; // x21
  int32_t v220; // w20
  Il2CppObject *v221; // x22
  const MethodInfo *v222; // x2
  __int64 v223; // x21
  __int64 v224; // x1
  TerminalPramsManager_c *v225; // x0
  int32_t v226; // w20
  __int64 v227; // x1
  __int64 v228; // x2
  clsQuestCheck_o *v229; // x19
  QuestAfterAction_StateMain___c_c *v230; // x8
  System_Action_o *_9__16_33; // x20
  Il2CppObject *v232; // x21
  struct QuestAfterAction_StateMain___c_StaticFields *v233; // x0
  int32_t v234; // w2
  int32_t v235; // w3
  TerminalSceneComponent_c *v236; // x0
  TerminalSceneComponent_o *v237; // x21
  __int64 v238; // x8
  PlayMakerFSM_o *v239; // x20
  System_String_o *ActiveStateName; // x0
  __int64 v241; // x1
  __int64 v242; // x2
  __int64 v243; // x8
  __int64 v244; // x8
  QuestBoardListViewManager_o *v245; // x21
  System_Action_o *v246; // x22
  Il2CppObject *v247; // x23
  struct QuestAfterAction_StateMain___c_StaticFields *static_fields; // x0
  int32_t v249; // w2
  int32_t v250; // w3
  __int64 v251; // x1
  TerminalSceneComponent_c *v252; // x0
  __int64 v253; // x22
  int v254; // w23
  float v255; // s8
  int32_t v256; // w21
  __int64 v257; // x21
  __int64 v258; // x1
  __int64 v259; // x2
  int32_t v260; // w20
  int32_t v261; // w22
  QuestAfterAction_o *v262; // x8
  __int64 v263; // x1
  __int64 v264; // x8
  __int64 v265; // x8
  __int64 v266; // x8
  System_String_o *v267; // x20
  System_String_o *v268; // x21
  SeManager_c *v269; // x0
  float DEFAULT_VOLUME; // s8
  TerminalPramsManager_c *v271; // x0
  __int64 v272; // x8
  __int64 v273; // x1
  const MethodInfo *v274; // x2
  TerminalPramsManager_c *v275; // x0
  System_String_o *v276; // x23
  int32_t v277; // w2
  int32_t v278; // w3
  System_String_array *v279; // x20
  int32_t v280; // w1
  int v281; // w8
  System_String_o *v282; // x19
  System_String_o *v283; // x20
  System_String_o *v284; // x19
  System_String_o *v285; // x20
  System_String_o *v286; // x20
  Il2CppObject *v287; // x22
  __int64 v288; // x1
  __int64 v289; // x2
  System_Action_o *v290; // x23
  System_String_o *v291; // x23
  int32_t v292; // w2
  int32_t v293; // w3
  System_String_array *v294; // x20
  int32_t v295; // w1
  int v296; // w8
  System_String_o *v297; // x19
  System_String_o *v298; // x20
  System_String_o *v299; // x20
  Il2CppObject *v300; // x22
  __int64 v301; // x1
  __int64 v302; // x2
  System_Action_o *v303; // x23
  Il2CppObject *MapComponent_object; // x22
  __int64 v305; // x1
  Il2CppObject *v306; // x20
  __int64 v307; // x8
  ScrTerminalMap_o *v308; // x23
  __int64 v309; // x8
  ScrTerminalMap_o *v310; // x20
  UnityEngine_GameObject_o *gameObject; // x22
  __int64 v312; // x1
  __int64 v313; // x2
  System_Action_o *v314; // x23
  SceneJumpInfo_o *v315; // x21
  __int64 v316; // x8
  __int64 v317; // x23
  float v318; // s0
  __int64 v319; // x8
  __int64 v320; // x24
  float v321; // s0
  __int64 v322; // x23
  float v323; // s0
  __int64 v324; // x8
  ScrTerminalMap_o *v325; // x24
  float v326; // s0
  float v327; // s9
  float v328; // s0
  __int64 v329; // x1
  const MethodInfo_35D2010 *v330; // x2
  float v331; // s0
  float v332; // s1
  float v333; // s2
  __int64 v334; // x22
  int32_t v335; // w0
  __int64 v336; // x1
  __int64 v337; // x2
  int32_t v338; // w20
  float v339; // s8
  int32_t v340; // w19
  __int64 v341; // x20
  int32_t v342; // w2
  int32_t v343; // w3
  __int64 v344; // x8
  QuestAfterAction_o *v345; // x21
  Il2CppObject *v346; // x0
  int32_t v347; // w2
  int32_t v348; // w3
  UnityEngine_Object_o *v349; // x19
  __int64 v350; // x1
  __int64 v351; // x2
  __int64 v352; // x23
  int32_t v353; // w2
  int32_t v354; // w3
  __int64 v355; // x20
  QuestAfterAction_o *v356; // x21
  Il2CppObject *v357; // x0
  __int64 *v358; // x19
  int32_t v359; // w2
  int32_t v360; // w3
  UnityEngine_Object_o *v361; // x21
  __int64 v362; // x1
  __int64 v363; // x2
  SrcSpotBasePrefab_o *v364; // x21
  System_Action_o *v365; // x22
  int32_t v366; // w2
  int32_t v367; // w3
  __int64 v368; // x1
  ServantStatusBattleListViewItem_o *v369; // x0
  __int64 v370; // x22
  QuestAfterAction_o *v371; // x21
  Il2CppObject *v372; // x21
  __int64 v373; // x1
  __int64 v374; // x2
  System_Action_o *v375; // x22
  QuestAfterAction_o *v376; // x21
  Il2CppObject *v377; // x21
  _DWORD *monitor; // x8
  SrcSpotBasePrefab_o *v379; // x0
  int32_t v380; // w1
  QuestAfterAction_o *v381; // x21
  Il2CppObject *v382; // x21
  _DWORD *v383; // x8
  QuestAfterAction_o *v384; // x21
  _DWORD *v385; // x8
  __int64 v386; // x21
  QuestAfterAction_o *v387; // x22
  Il2CppObject *v388; // x22
  __int64 v389; // x1
  int32_t v390; // w21
  TerminalPramsManager_c *v391; // x0
  QuestAfterAction_o *v392; // x20
  Il2CppObject *v393; // x20
  __int64 v394; // x1
  TerminalPramsManager_c *v395; // x0
  MapCamera_o *v396; // x20
  float v397; // s0
  __int64 v398; // x1
  __int64 v399; // x2
  System_Action_o *v400; // x0
  __int64 *v401; // x8
  System_Action_o *v402; // x22
  MapCamera_o *v403; // x0
  float v404; // s0
  int32_t v405; // w4
  System_Action_o *v406; // x5
  int v407; // w23
  __int64 v408; // x22
  float v409; // s0
  float v410; // s8
  __int64 v411; // x2
  float v412; // s0
  MapCamera_o *v413; // x19
  float v414; // s0
  float v415; // s9
  int32_t v416; // w20
  __int64 v417; // x20
  int32_t v418; // w2
  int32_t v419; // w3
  __int64 v420; // x8
  QuestAfterAction_o *v421; // x21
  Il2CppObject *v422; // x0
  int32_t v423; // w2
  int32_t v424; // w3
  UnityEngine_Object_o *v425; // x19
  __int64 v426; // x1
  __int64 v427; // x2
  __int64 v428; // x20
  int32_t v429; // w2
  int32_t v430; // w3
  __int64 v431; // x8
  QuestAfterAction_o *v432; // x21
  Il2CppObject *v433; // x0
  int32_t v434; // w2
  int32_t v435; // w3
  UnityEngine_Object_o *v436; // x19
  __int64 v437; // x1
  __int64 v438; // x2
  _BOOL4 IsMapModel; // w23
  QuestAfterAction_o *v440; // x21
  UnityEngine_Object_o *v441; // x21
  const MethodInfo *v442; // x2
  _DWORD *v443; // x8
  _BOOL4 v444; // w23
  QuestAfterAction_o *v445; // x21
  UnityEngine_Object_o *v446; // x21
  const MethodInfo *v447; // x2
  const MethodInfo *v448; // x2
  _DWORD *v449; // x8
  _BOOL4 v450; // w23
  QuestAfterAction_o *v451; // x21
  UnityEngine_Object_o *v452; // x21
  const MethodInfo *v453; // x2
  const MethodInfo *v454; // x2
  System_Action_o *v455; // x20
  const MethodInfo *v456; // x2
  System_String_o *v457; // x20
  int32_t v458; // w2
  int32_t v459; // w3
  __int64 v460; // x23
  __int64 v461; // x8
  __int64 v462; // x22
  int32_t v463; // w21
  bool v464; // w24
  bool v465; // w25
  __int64 v466; // x8
  __int64 v467; // x22
  int32_t v468; // w21
  bool v469; // w22
  __int64 v470; // x8
  __int64 v471; // x22
  int32_t v472; // w21
  bool v473; // w22
  __int64 v474; // x22
  float v475; // s0
  QuestAfterAction_o *v476; // x20
  float v477; // s8
  Il2CppObject *v478; // x19
  __int64 v479; // x8
  ScrTerminalMap_o *v480; // x20
  float v481; // s0
  float v482; // s9
  float v483; // s0
  float v484; // s0
  float v485; // s1
  float v486; // s2
  float v487; // s9
  float v488; // s10
  float v489; // s11
  int32_t v490; // w20
  __int64 v491; // x1
  __int64 v492; // x2
  System_Action_o *v493; // x22
  const MethodInfo *v494; // x3
  __int64 v495; // x20
  int32_t v496; // w2
  int32_t v497; // w3
  __int64 v498; // x8
  QuestAfterAction_o *v499; // x21
  Il2CppObject *v500; // x0
  int32_t v501; // w2
  int32_t v502; // w3
  UnityEngine_Object_o *v503; // x19
  __int64 v504; // x1
  __int64 v505; // x2
  MapGimmickComponent_o *v506; // x19
  System_Action_o *v507; // x21
  const MethodInfo *v508; // x3
  __int64 v509; // x1
  TerminalSceneComponent_o *v510; // x19
  __int64 v511; // x20
  int32_t v512; // w2
  int32_t v513; // w3
  System_String_array *v514; // x0
  __int64 *v515; // x21
  int32_t v516; // w2
  int32_t v517; // w3
  __int64 v518; // x8
  __int64 v519; // x9
  QuestAfterAction_o *v520; // x21
  Il2CppObject *v521; // x0
  int32_t v522; // w2
  int32_t v523; // w3
  UnityEngine_Object_o *v524; // x19
  __int64 v525; // x1
  __int64 v526; // x2
  MapGimmickComponent_o *v527; // x19
  System_Action_o *v528; // x0
  __int64 *v529; // x8
  System_Action_o *v530; // x21
  __int64 v531; // x21
  QuestAfterAction_o *v532; // x20
  Il2CppObject *v533; // x20
  UIWidget_o *v534; // x20
  int32_t v535; // w2
  int32_t v536; // w3
  __int64 v537; // x8
  QuestAfterAction_o *v538; // x21
  Il2CppObject *v539; // x0
  __int64 v540; // x19
  int32_t v541; // w2
  int32_t v542; // w3
  UnityEngine_Object_o *v543; // x21
  bool v544; // w0
  bool v545; // w22
  __int64 v546; // x1
  __int64 v547; // x2
  const MethodInfo *v548; // x3
  int32_t v549; // w1
  __int64 v550; // x8
  __int64 v551; // x22
  int32_t v552; // w21
  bool v553; // w22
  Il2CppObject *v554; // x22
  __int64 v555; // x1
  __int64 v556; // x2
  System_Action_o *v557; // x23
  __int64 v558; // x1
  __int64 v559; // x2
  float v560; // s0
  int v561; // w23
  float v562; // s0
  float v563; // s0
  QuestAfterAction_o *v564; // x25
  const MethodInfo *v565; // x4
  UnityEngine_Object_o *MapGameObject; // x25
  __int64 v567; // x1
  float x; // s9
  float y; // s8
  float z; // s10
  __int64 v571; // x8
  const MethodInfo_35D2010 *v572; // x2
  System_String_o *v573; // x19
  QuestAfterAction_o *v574; // x24
  const MethodInfo *v575; // x4
  UnityEngine_Object_o *v576; // x24
  __int64 v577; // x1
  float v578; // s8
  float v579; // s9
  float v580; // s10
  __int64 v581; // x8
  float v582; // s0
  float v583; // s1
  float v584; // s2
  QuestAfterAction_o *v585; // x25
  const MethodInfo *v586; // x4
  UnityEngine_Object_o *v587; // x25
  __int64 v588; // x1
  const MethodInfo_35D2010 *v589; // x2
  __int64 v590; // x8
  MapCamera_o *v591; // x19
  System_Action_o *v592; // x0
  __int64 *v593; // x8
  __int64 v594; // x20
  int32_t v595; // w2
  int32_t v596; // w3
  __int64 v597; // x8
  QuestAfterAction_o *v598; // x21
  Il2CppObject *v599; // x0
  int32_t v600; // w2
  int32_t v601; // w3
  UnityEngine_Object_o *v602; // x19
  __int64 v603; // x1
  __int64 v604; // x2
  srcLineSprite_o *v605; // x19
  System_Action_o *v606; // x21
  int32_t v607; // w1
  __int64 v608; // x20
  int32_t v609; // w2
  int32_t v610; // w3
  __int64 v611; // x8
  QuestAfterAction_o *v612; // x21
  Il2CppObject *v613; // x0
  int32_t v614; // w2
  int32_t v615; // w3
  UnityEngine_Object_o *v616; // x19
  __int64 v617; // x1
  __int64 v618; // x2
  __int64 v619; // x20
  int32_t v620; // w2
  int32_t v621; // w3
  __int64 v622; // x8
  QuestAfterAction_o *v623; // x21
  Il2CppObject *v624; // x0
  int32_t v625; // w2
  int32_t v626; // w3
  UnityEngine_Object_o *v627; // x19
  __int64 v628; // x1
  __int64 v629; // x2
  UnityEngine_Object_o *v630; // x21
  UnityEngine_Object_o *v631; // x21
  int v632; // w9
  UnityEngine_Object_o *v633; // x21
  Il2CppObject *v634; // x0
  int32_t v635; // w2
  int32_t v636; // w3
  UnityEngine_Object_o *v637; // x22
  __int64 v638; // x1
  __int64 v639; // x2
  MapGimmickComponent_o *v640; // x21
  System_Action_o *v641; // x0
  System_Action_o *v642; // x22
  Il2CppObject *v643; // x0
  int32_t v644; // w2
  int32_t v645; // w3
  UnityEngine_Object_o *v646; // x22
  __int64 v647; // x1
  __int64 v648; // x2
  System_Action_o *v649; // x0
  MapGimmickComponent_o *v650; // x0
  System_Action_o *v651; // x2
  Il2CppObject *v652; // x21
  const MethodInfo *v653; // x3
  Il2CppObject *v654; // x21
  const MethodInfo *v655; // x3
  Il2CppClass *v656; // x8
  Il2CppObject *v657; // x21
  const MethodInfo *v658; // x1
  float AnimTime; // s0
  const MethodInfo *v660; // x3
  Il2CppClass *v661; // x8
  QuestAfterAction_StateMain_c *v662; // x8
  int v663; // w0
  System_Action_o *v664; // x22
  float v665; // s8
  float v666; // s10
  float v667; // s9
  const MethodInfo_35D2010 *v668; // x2
  System_String_o *v669; // x19
  __int64 v670; // x8
  ScrTerminalMap_o *v671; // x22
  System_Action_o *v672; // x23
  const MethodInfo *v673; // x3
  int32_t v674; // w1
  __int64 v675; // x8
  System_Action_o *v676; // x20
  MapCamera_o *v677; // x19
  float v678; // s0
  __int64 v679; // x1
  __int64 v680; // x2
  System_Action_o *v681; // x0
  __int64 *v682; // x8
  MapCamera_o *v683; // x19
  float v684; // s0
  __int64 v685; // x1
  __int64 v686; // x2
  System_Action_o *v687; // x20
  MapCamera_o *v688; // x19
  float v689; // s0
  __int64 v690; // x1
  __int64 v691; // x2
  float v692; // s0
  __int64 v693; // x1
  __int64 v694; // x2
  int32_t onClickOkSeKind; // [xsp+10h] [xbp-E0h]
  int32_t easeType; // [xsp+38h] [xbp-B8h]
  float sec; // [xsp+3Ch] [xbp-B4h]
  float seca; // [xsp+3Ch] [xbp-B4h]
  System_Nullable_float__o size; // [xsp+40h] [xbp-B0h] BYREF
  System_Nullable_Vector3__o v700; // [xsp+48h] [xbp-A8h] BYREF
  Il2CppObject *value; // [xsp+58h] [xbp-98h] BYREF
  Il2CppObject *entity; // [xsp+60h] [xbp-90h] BYREF
  UnityEngine_Color_o color; // [xsp+68h] [xbp-88h] BYREF
  bool isQuickUpdate; // [xsp+7Ch] [xbp-74h] BYREF
  System_Nullable_float__o p_size; // 0:x0.8
  System_Nullable_float__o v706; // 0:x0.8
  System_Nullable_float__o v707; // 0:x0.8
  System_Nullable_float__o v708; // 0:x0.8
  System_Nullable_float__o v709; // 0:x0.8
  System_Nullable_float__o v710; // 0:x3.8
  System_Nullable_Vector3__o v711; // 0:x0.16
  System_Nullable_Vector3__o v712; // 0:x0.16
  System_Nullable_Vector3__o v713; // 0:x0.16
  System_Nullable_Vector3__o v714; // 0:x0.16
  System_Nullable_Vector3__o v715; // 0:x0.16
  System_Nullable_Vector3__o v716; // 0:x1.16
  UnityEngine_Vector3_o v717; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v718; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v720; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v721; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o Position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v723; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v724; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v725; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v726; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v727; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v728; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v729; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_49F934A & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, that);
    sub_1B640C8(&AvalonSceneManager_TypeInfo, v5);
    sub_1B640C8(&Method_DataManager_GetMasterData_QuestMaster___, v6);
    sub_1B640C8(&Method_DataManager_GetMaster_QuestMaster___, v7);
    sub_1B640C8(&DataManager_TypeInfo, v8);
    sub_1B640C8(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v9);
    sub_1B640C8(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__TryGetValue__, v11);
    sub_1B640C8(&FSUtility_TypeInfo, v12);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponentInChildren_UISprite___, v13);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_ModelLineComponent___, v14);
    sub_1B640C8(&LocalizationManager_TypeInfo, v15);
    sub_1B640C8(&Method_System_Nullable_Vector3___ctor__, v16);
    sub_1B640C8(&Method_System_Nullable_float___ctor__, v17);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v18);
    sub_1B640C8(&Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___, v19);
    sub_1B640C8(&Method_QuestAfterAction_GetMapComponent_ModelLineComponent___, v20);
    sub_1B640C8(&Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___, v21);
    sub_1B640C8(&Method_QuestAfterAction_GetMapComponent_srcLineSprite___, v22);
    sub_1B640C8(&SceneJumpInfo_TypeInfo, v23);
    sub_1B640C8(&SeManager_TypeInfo, v24);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v25);
    sub_1B640C8(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v26);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v27);
    sub_1B640C8(&Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__, v28);
    sub_1B640C8(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v29);
    sub_1B640C8(&Method_SingletonTemplate_QuestTree__get_Instance__, v30);
    sub_1B640C8(&SoundManager_TypeInfo, v31);
    sub_1B640C8(&Method_QuestAfterAction_StateMain_UpdateAnim__, v32);
    sub_1B640C8(&string___TypeInfo, v33);
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v34);
    sub_1B640C8(&TerminalSceneComponent_TypeInfo, v35);
    sub_1B640C8(&Method_QuestAfterAction_StateMain___c__UpdateAnim_b__16_31__, v36);
    sub_1B640C8(&Method_QuestAfterAction_StateMain___c__UpdateAnim_b__16_33__, v37);
    sub_1B640C8(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__10__, v38);
    sub_1B640C8(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__11__, v39);
    sub_1B640C8(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__12__, v40);
    sub_1B640C8(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__13__, v41);
    sub_1B640C8(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__14__, v42);
    sub_1B640C8(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__15__, v43);
    sub_1B640C8(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__16__, v44);
    sub_1B640C8(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__17__, v45);
    sub_1B640C8(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__18__, v46);
    sub_1B640C8(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__19__, v47);
    sub_1B640C8(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__20__, v48);
    sub_1B640C8(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__25__, v49);
    sub_1B640C8(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__32__, v50);
    sub_1B640C8(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__36__, v51);
    sub_1B640C8(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__37__, v52);
    sub_1B640C8(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__38__, v53);
    sub_1B640C8(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__39__, v54);
    sub_1B640C8(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__40__, v55);
    sub_1B640C8(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__9__, v56);
    sub_1B640C8(&QuestAfterAction_StateMain___c__DisplayClass16_0_TypeInfo, v57);
    sub_1B640C8(&Method_QuestAfterAction_StateMain___c__DisplayClass16_10__UpdateAnim_b__21__, v58);
    sub_1B640C8(&Method_QuestAfterAction_StateMain___c__DisplayClass16_10__UpdateAnim_b__22__, v59);
    sub_1B640C8(&QuestAfterAction_StateMain___c__DisplayClass16_10_TypeInfo, v60);
    sub_1B640C8(&Method_QuestAfterAction_StateMain___c__DisplayClass16_11__UpdateAnim_b__23__, v61);
    sub_1B640C8(&Method_QuestAfterAction_StateMain___c__DisplayClass16_11__UpdateAnim_b__24__, v62);
    sub_1B640C8(&QuestAfterAction_StateMain___c__DisplayClass16_11_TypeInfo, v63);
    sub_1B640C8(&Method_QuestAfterAction_StateMain___c__DisplayClass16_12__UpdateAnim_b__26__, v64);
    sub_1B640C8(&QuestAfterAction_StateMain___c__DisplayClass16_12_TypeInfo, v65);
    sub_1B640C8(&Method_QuestAfterAction_StateMain___c__DisplayClass16_13__UpdateAnim_b__27__, v66);
    sub_1B640C8(&QuestAfterAction_StateMain___c__DisplayClass16_13_TypeInfo, v67);
    sub_1B640C8(&Method_QuestAfterAction_StateMain___c__DisplayClass16_15__UpdateAnim_b__29__, v68);
    sub_1B640C8(&Method_QuestAfterAction_StateMain___c__DisplayClass16_15__UpdateAnim_b__30__, v69);
    sub_1B640C8(&QuestAfterAction_StateMain___c__DisplayClass16_15_TypeInfo, v70);
    sub_1B640C8(&Method_QuestAfterAction_StateMain___c__DisplayClass16_1__UpdateAnim_b__0__, v71);
    sub_1B640C8(&QuestAfterAction_StateMain___c__DisplayClass16_1_TypeInfo, v72);
    sub_1B640C8(&Method_QuestAfterAction_StateMain___c__DisplayClass16_2__UpdateAnim_b__1__, v73);
    sub_1B640C8(&QuestAfterAction_StateMain___c__DisplayClass16_2_TypeInfo, v74);
    sub_1B640C8(&Method_QuestAfterAction_StateMain___c__DisplayClass16_3__UpdateAnim_b__2__, v75);
    sub_1B640C8(&QuestAfterAction_StateMain___c__DisplayClass16_3_TypeInfo, v76);
    sub_1B640C8(&Method_QuestAfterAction_StateMain___c__DisplayClass16_4__UpdateAnim_b__3__, v77);
    sub_1B640C8(&QuestAfterAction_StateMain___c__DisplayClass16_4_TypeInfo, v78);
    sub_1B640C8(&Method_QuestAfterAction_StateMain___c__DisplayClass16_5__UpdateAnim_b__4__, v79);
    sub_1B640C8(&QuestAfterAction_StateMain___c__DisplayClass16_5_TypeInfo, v80);
    sub_1B640C8(&Method_QuestAfterAction_StateMain___c__DisplayClass16_6__UpdateAnim_b__5__, v81);
    sub_1B640C8(&QuestAfterAction_StateMain___c__DisplayClass16_6_TypeInfo, v82);
    sub_1B640C8(&Method_QuestAfterAction_StateMain___c__DisplayClass16_7__UpdateAnim_b__6__, v83);
    sub_1B640C8(&QuestAfterAction_StateMain___c__DisplayClass16_7_TypeInfo, v84);
    sub_1B640C8(&Method_QuestAfterAction_StateMain___c__DisplayClass16_8__UpdateAnim_b__7__, v85);
    sub_1B640C8(&QuestAfterAction_StateMain___c__DisplayClass16_8_TypeInfo, v86);
    sub_1B640C8(&Method_QuestAfterAction_StateMain___c__DisplayClass16_9__UpdateAnim_b__8__, v87);
    sub_1B640C8(&QuestAfterAction_StateMain___c__DisplayClass16_9_TypeInfo, v88);
    sub_1B640C8(&QuestAfterAction_StateMain___c_TypeInfo, v89);
    sub_1B640C8(&StringLiteral_89/*"\r\n"*/, v90);
    sub_1B640C8(&StringLiteral_1479/*"30101"*/, v91);
    sub_1B640C8(&StringLiteral_10771/*"QUEST_AFTER_ACTION_MESSAGE_"*/, v92);
    sub_1B640C8(&StringLiteral_1480/*"30102"*/, v93);
    sub_1B640C8(&StringLiteral_1404/*"10703"*/, v94);
    sub_1B640C8(&StringLiteral_3385/*"CAPTER WAIT"*/, v95);
    sub_1B640C8(&StringLiteral_1/*""*/, v96);
    sub_1B640C8(&StringLiteral_19735/*"gevINFOBAR_BACK"*/, v97);
    byte_49F934A = 1;
  }
  isQuickUpdate = 0;
  *(_QWORD *)&color.fields.r = 0LL;
  *(_QWORD *)&color.fields.b = 0LL;
  value = 0LL;
  entity = 0LL;
  v98 = sub_1B64314(QuestAfterAction_StateMain___c__DisplayClass16_0_TypeInfo, that, method);
  QuestAfterAction_StateMain___c__DisplayClass16_0___ctor(
    (QuestAfterAction_StateMain___c__DisplayClass16_0_o *)v98,
    0LL);
  if ( !v98 )
    goto LABEL_863;
  *(_QWORD *)(v98 + 16) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v98 + 16), (int32_t)this, v100, v101);
  *(_QWORD *)(v98 + 24) = that;
  v102 = (QuestAfterAction_o **)(v98 + 24);
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v98 + 24), (int32_t)that, v103, v104);
  if ( this->fields.IsAnimDoing )
    return;
  updated = ((__int64 (__fastcall *)(QuestAfterAction_StateMain_o *, Il2CppMethodPointer))this->klass->vtable._10_get_CommandBuf.method)(
              this,
              this->klass->vtable._11_get_CommandIndex.methodPtr);
  if ( !updated )
    return;
  if ( !*v102 )
    goto LABEL_863;
  if ( (*v102)->fields.isSkippedNext )
  {
    updated = ((__int64 (__fastcall *)(QuestAfterAction_StateMain_o *, Il2CppMethodPointer))this->klass->vtable._14_EndAnim.method)(
                this,
                this->klass->vtable._15_onEnd.methodPtr);
    if ( *v102 )
    {
      (*v102)->fields.isSkippedNext = 0;
      return;
    }
LABEL_863:
    sub_1B64324(updated);
  }
  klass = this->klass;
  this->fields.IsAnimDoing = 1;
  v106 = ((__int64 (__fastcall *)(QuestAfterAction_StateMain_o *, Il2CppMethodPointer))klass->vtable._10_get_CommandBuf.method)(
           this,
           klass->vtable._11_get_CommandIndex.methodPtr);
  updated = ((__int64 (__fastcall *)(QuestAfterAction_StateMain_o *, Il2CppMethodPointer))this->klass->vtable._11_get_CommandIndex.method)(
              this,
              this->klass->vtable._12_set_CommandIndex.methodPtr);
  if ( !v106 )
    goto LABEL_863;
  if ( (unsigned int)updated >= *(_DWORD *)(v106 + 24) )
    goto LABEL_864;
  v108 = *(QuestAfterAction_Command_o **)(v106 + 8LL * (int)updated + 32);
  updated = ((__int64 (__fastcall *)(QuestAfterAction_StateMain_o *, QuestAfterAction_Command_o *, Il2CppMethodPointer))this->klass->vtable._9_IsUsableCommand.method)(
              this,
              v108,
              this->klass->vtable._10_get_CommandBuf.methodPtr);
  if ( (updated & 1) == 0 )
    goto LABEL_330;
  v111 = *v102;
  if ( !*v102 )
    goto LABEL_863;
  BlankEarthQuestAfterAction_k__BackingField = v111->fields._BlankEarthQuestAfterAction_k__BackingField;
  v113 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v109, v110);
  System_Action___ctor(v113, (Il2CppObject *)this, (intptr_t)this->klass->vtable._15_onEnd.methodPtr, 0LL);
  if ( !BlankEarthQuestAfterAction_k__BackingField )
    goto LABEL_863;
  updated = BlankEarthQuestAfterAction__UpdateAnim(
              BlankEarthQuestAfterAction_k__BackingField,
              v111,
              v108,
              v113,
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
        *v102,
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
          if ( !byte_49F76BD )
          {
            sub_1B640C8(&TerminalSceneComponent_TypeInfo, v114);
            byte_49F76BD = 1;
          }
          updated = (__int64)TerminalSceneComponent_TypeInfo;
          if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            updated = (__int64)TerminalSceneComponent_TypeInfo;
          }
          v238 = **(_QWORD **)(updated + 184);
          if ( !v238 )
            goto LABEL_863;
          updated = *(_QWORD *)(v238 + 256);
          if ( !updated )
            goto LABEL_863;
          updated = (__int64)ScrTerminalListTop__mfGetMyFsmP((ScrTerminalListTop_o *)updated, 0LL);
          if ( !updated )
            goto LABEL_863;
          v239 = (PlayMakerFSM_o *)updated;
          ActiveStateName = PlayMakerFSM__get_ActiveStateName((PlayMakerFSM_o *)updated, 0LL);
          if ( System_String__op_Equality(ActiveStateName, (System_String_o *)StringLiteral_3385/*"CAPTER WAIT"*/, 0LL) )
          {
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            if ( !byte_49F76BD )
            {
              sub_1B640C8(&TerminalSceneComponent_TypeInfo, v241);
              byte_49F76BD = 1;
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
            v244 = *(_QWORD *)(v243 + 256);
            if ( !v244 )
              goto LABEL_863;
            v245 = *(QuestBoardListViewManager_o **)(v244 + 296);
            updated = (__int64)QuestAfterAction_StateMain___c_TypeInfo;
            if ( !QuestAfterAction_StateMain___c_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(QuestAfterAction_StateMain___c_TypeInfo);
              updated = (__int64)QuestAfterAction_StateMain___c_TypeInfo;
            }
            v246 = *(System_Action_o **)(*(_QWORD *)(updated + 184) + 8LL);
            if ( !v246 )
            {
              if ( !*(_DWORD *)(updated + 224) )
              {
                j_il2cpp_runtime_class_init_0(updated);
                updated = (__int64)QuestAfterAction_StateMain___c_TypeInfo;
              }
              v247 = **(Il2CppObject ***)(updated + 184);
              v246 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v241, v242);
              System_Action___ctor(v246, v247, Method_QuestAfterAction_StateMain___c__UpdateAnim_b__16_31__, 0LL);
              static_fields = QuestAfterAction_StateMain___c_TypeInfo->static_fields;
              static_fields->__9__16_31 = v246;
              sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__16_31, (int32_t)v246, v249, v250);
            }
            if ( !v245 )
              goto LABEL_863;
            QuestBoardListViewManager__SetMode(v245, 4, v246, 0, 0, 0LL);
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            if ( !byte_49F76BD )
            {
              sub_1B640C8(&TerminalSceneComponent_TypeInfo, v251);
              byte_49F76BD = 1;
            }
            v252 = TerminalSceneComponent_TypeInfo;
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
              v252 = TerminalSceneComponent_TypeInfo;
            }
            updated = (__int64)v252->static_fields->mInstance;
            if ( !updated )
              goto LABEL_863;
            TerminalSceneComponent__CallQuestInformationClose((TerminalSceneComponent_o *)updated, 0LL);
            PlayMakerFSM__SendEvent(v239, (System_String_o *)StringLiteral_19735/*"gevINFOBAR_BACK"*/, 0LL);
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
              v121 = AvalonSceneManager_TypeInfo;
              if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
                v121 = AvalonSceneManager_TypeInfo;
              }
              DEFAULT_FADE_TIME = v121->static_fields->DEFAULT_FADE_TIME;
            }
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            if ( !byte_49F76BD )
            {
              sub_1B640C8(&TerminalSceneComponent_TypeInfo, v118);
              byte_49F76BD = 1;
            }
            v122 = TerminalSceneComponent_TypeInfo;
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
              v122 = TerminalSceneComponent_TypeInfo;
            }
            mInstance = v122->static_fields->mInstance;
            v124 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v118, v119);
            System_Action___ctor(
              v124,
              (Il2CppObject *)v98,
              Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__32__,
              0LL);
            if ( !mInstance )
              goto LABEL_863;
            v125 = mInstance;
            v126 = DEFAULT_FADE_TIME;
            v127 = v124;
LABEL_46:
            TerminalSceneComponent__Fadein_MapDisp(v125, v126, v127, 0LL);
          }
          return;
        }
        updated = (__int64)v108->fields.param;
        if ( !updated )
          goto LABEL_863;
        updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
        if ( !updated )
          goto LABEL_863;
        v253 = updated;
        if ( *(_DWORD *)(updated + 24) )
        {
          v254 = System_Int32__Parse(*(System_String_o **)(updated + 32), 0LL);
          v255 = 0.5;
          if ( *(int *)(v253 + 24) >= 2 )
          {
            v256 = System_Int32__Parse(*(System_String_o **)(v253 + 40), 0LL);
            if ( *(int *)(v253 + 24) >= 3 )
              v255 = System_Single__Parse(*(System_String_o **)(v253 + 48), 0LL);
          }
          else
          {
            v256 = v254;
            v254 = -1;
          }
          updated = (__int64)*v102;
          if ( !*v102 )
            goto LABEL_863;
          MapComponent_object = QuestAfterAction__GetMapComponent_object_(
                                  (QuestAfterAction_o *)updated,
                                  0,
                                  v256,
                                  this,
                                  (const MethodInfo_2EC8D20 *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)MapComponent_object, 0LL, 0LL) )
          {
            if ( v254 >= 1 )
            {
              updated = (__int64)*v102;
              if ( !*v102 )
                goto LABEL_863;
              v306 = QuestAfterAction__GetMapComponent_object_(
                       (QuestAfterAction_o *)updated,
                       0,
                       v254,
                       this,
                       (const MethodInfo_2EC8D20 *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v306, 0LL, 0LL) )
              {
                if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
                if ( !byte_49F76BD )
                {
                  sub_1B640C8(&TerminalSceneComponent_TypeInfo, v305);
                  byte_49F76BD = 1;
                }
                updated = (__int64)TerminalSceneComponent_TypeInfo;
                if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
                  updated = (__int64)TerminalSceneComponent_TypeInfo;
                }
                v307 = **(_QWORD **)(updated + 184);
                if ( !v307 )
                  goto LABEL_863;
                if ( !v306 )
                  goto LABEL_863;
                v308 = *(ScrTerminalMap_o **)(v307 + 264);
                updated = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v306, 0LL);
                if ( !v308 )
                  goto LABEL_863;
                ScrTerminalMap__SetPlayerIcon(v308, (UnityEngine_GameObject_o *)updated, 0LL);
              }
            }
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            if ( !byte_49F76BD )
            {
              sub_1B640C8(&TerminalSceneComponent_TypeInfo, v305);
              byte_49F76BD = 1;
            }
            updated = (__int64)TerminalSceneComponent_TypeInfo;
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
              updated = (__int64)TerminalSceneComponent_TypeInfo;
            }
            v309 = **(_QWORD **)(updated + 184);
            if ( !v309 )
              goto LABEL_863;
            if ( !MapComponent_object )
              goto LABEL_863;
            v310 = *(ScrTerminalMap_o **)(v309 + 264);
            gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)MapComponent_object, 0LL);
            v314 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v312, v313);
            System_Action___ctor(v314, (Il2CppObject *)this, (intptr_t)this->klass->vtable._15_onEnd.methodPtr, 0LL);
            if ( !v310 )
              goto LABEL_863;
            ScrTerminalMap__MovePlayerIcon(v310, gameObject, v256, v314, v255, 0LL);
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
            v141 = sub_1B64314(QuestAfterAction_StateMain___c__DisplayClass16_10_TypeInfo, v114, v115);
            QuestAfterAction_StateMain___c__DisplayClass16_10___ctor(
              (QuestAfterAction_StateMain___c__DisplayClass16_10_o *)v141,
              0LL);
            if ( !v141 )
              goto LABEL_863;
            *(_QWORD *)(v141 + 24) = v98;
            v144 = v141 + 24;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)(v141 + 24), v98, v142, v143);
            updated = (__int64)v108->fields.param;
            if ( !updated )
              goto LABEL_863;
            updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
            if ( !updated )
              goto LABEL_863;
            v145 = *(_QWORD *)(updated + 24);
            v146 = updated;
            if ( v145 )
            {
              if ( !(_DWORD)v145 )
                goto LABEL_864;
              updated = System_Int32__Parse(*(System_String_o **)(updated + 32), 0LL);
              v147 = updated;
              if ( *(int *)(v146 + 24) >= 2 )
              {
                updated = System_Int32__Parse(*(System_String_o **)(v146 + 40), 0LL);
                v148 = (int)updated < 1;
                if ( *(int *)(v146 + 24) < 3 )
                {
                  v149 = 0;
                }
                else
                {
                  updated = System_Int32__Parse(*(System_String_o **)(v146 + 48), 0LL);
                  v149 = (int)updated > 0;
                }
                goto LABEL_752;
              }
            }
            else
            {
              v147 = 0;
            }
            v149 = 0;
            v148 = 1;
LABEL_752:
            if ( !*(_QWORD *)v144 )
              goto LABEL_863;
            updated = *(_QWORD *)(*(_QWORD *)v144 + 24LL);
            if ( !updated )
              goto LABEL_863;
            v634 = QuestAfterAction__GetMapComponent_object_(
                     (QuestAfterAction_o *)updated,
                     2,
                     v147,
                     this,
                     (const MethodInfo_2EC8D20 *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
            *(_QWORD *)(v141 + 16) = v634;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)(v141 + 16), (int32_t)v634, v635, v636);
            v637 = *(UnityEngine_Object_o **)(v141 + 16);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            updated = UnityEngine_Object__op_Equality(v637, 0LL, 0LL);
            if ( (updated & 1) != 0 )
              return;
            v640 = *(MapGimmickComponent_o **)(v141 + 16);
            if ( !v640 )
              goto LABEL_863;
            v640->fields.isForceNotActive = v149;
            v641 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v638, v639);
            v642 = v641;
            if ( v148 )
            {
              System_Action___ctor(
                v641,
                (Il2CppObject *)v141,
                Method_QuestAfterAction_StateMain___c__DisplayClass16_10__UpdateAnim_b__22__,
                0LL);
              v549 = 2;
              goto LABEL_770;
            }
            System_Action___ctor(
              v641,
              (Il2CppObject *)v141,
              Method_QuestAfterAction_StateMain___c__DisplayClass16_10__UpdateAnim_b__21__,
              0LL);
            v674 = 2;
            goto LABEL_825;
          case 401:
            v141 = sub_1B64314(QuestAfterAction_StateMain___c__DisplayClass16_11_TypeInfo, v114, v115);
            QuestAfterAction_StateMain___c__DisplayClass16_11___ctor(
              (QuestAfterAction_StateMain___c__DisplayClass16_11_o *)v141,
              0LL);
            if ( !v141 )
              goto LABEL_863;
            *(_QWORD *)(v141 + 24) = v98;
            v460 = v141 + 24;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)(v141 + 24), v98, v458, v459);
            updated = (__int64)v108->fields.param;
            if ( !updated )
              goto LABEL_863;
            updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
            if ( !updated )
              goto LABEL_863;
            v461 = *(_QWORD *)(updated + 24);
            v462 = updated;
            if ( v461 )
            {
              if ( !(_DWORD)v461 )
                goto LABEL_864;
              updated = System_Int32__Parse(*(System_String_o **)(updated + 32), 0LL);
              v463 = updated;
              if ( *(int *)(v462 + 24) >= 2 )
              {
                updated = System_Int32__Parse(*(System_String_o **)(v462 + 40), 0LL);
                v464 = (int)updated < 1;
                if ( *(int *)(v462 + 24) < 3 )
                {
                  v465 = 0;
                }
                else
                {
                  updated = System_Int32__Parse(*(System_String_o **)(v462 + 48), 0LL);
                  v465 = (int)updated > 0;
                }
                goto LABEL_762;
              }
            }
            else
            {
              v463 = 0;
            }
            v465 = 0;
            v464 = 1;
LABEL_762:
            if ( !*(_QWORD *)v460 )
              goto LABEL_863;
            updated = *(_QWORD *)(*(_QWORD *)v460 + 24LL);
            if ( !updated )
              goto LABEL_863;
            v643 = QuestAfterAction__GetMapComponent_object_(
                     (QuestAfterAction_o *)updated,
                     2,
                     v463,
                     this,
                     (const MethodInfo_2EC8D20 *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
            *(_QWORD *)(v141 + 16) = v643;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)(v141 + 16), (int32_t)v643, v644, v645);
            v646 = *(UnityEngine_Object_o **)(v141 + 16);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            updated = UnityEngine_Object__op_Equality(v646, 0LL, 0LL);
            if ( (updated & 1) != 0 )
              return;
            v640 = *(MapGimmickComponent_o **)(v141 + 16);
            if ( !v640 )
              goto LABEL_863;
            v640->fields.isForceLoop = v465;
            v640->fields.isForceNotActive = 0;
            v649 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v647, v648);
            v642 = v649;
            if ( v464 )
            {
              System_Action___ctor(
                v649,
                (Il2CppObject *)v141,
                Method_QuestAfterAction_StateMain___c__DisplayClass16_11__UpdateAnim_b__24__,
                0LL);
              v549 = 3;
LABEL_770:
              v650 = v640;
              v651 = v642;
LABEL_822:
              MapGimmickComponent__SetState(v650, v549, v651, v548);
              return;
            }
            System_Action___ctor(
              v649,
              (Il2CppObject *)v141,
              Method_QuestAfterAction_StateMain___c__DisplayClass16_11__UpdateAnim_b__23__,
              0LL);
            v674 = 3;
LABEL_825:
            MapGimmickComponent__SetState(v640, v674, v642, v673);
            updated = ((__int64 (__fastcall *)(QuestAfterAction_StateMain_o *, Il2CppMethodPointer))this->klass->vtable._14_EndAnim.method)(
                        this,
                        this->klass->vtable._15_onEnd.methodPtr);
            v675 = *(_QWORD *)(v141 + 24);
            if ( !v675 )
              goto LABEL_863;
            ((void (__fastcall *)(QuestAfterAction_StateMain_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._13_UpdateAnim.method)(
              this,
              *(_QWORD *)(v675 + 24),
              this->klass->vtable._14_EndAnim.methodPtr);
            return;
          case 402:
            updated = (__int64)v108->fields.param;
            if ( !updated )
              goto LABEL_863;
            updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
            if ( !updated )
              goto LABEL_863;
            v466 = *(_QWORD *)(updated + 24);
            v467 = updated;
            if ( v466 )
            {
              if ( !(_DWORD)v466 )
                goto LABEL_864;
              v468 = System_Int32__Parse(*(System_String_o **)(updated + 32), 0LL);
              if ( *(int *)(v467 + 24) >= 2 )
              {
                v469 = System_Int32__Parse(*(System_String_o **)(v467 + 40), 0LL) > 0;
                goto LABEL_773;
              }
            }
            else
            {
              v468 = 0;
            }
            v469 = 0;
LABEL_773:
            updated = (__int64)*v102;
            if ( !*v102 )
              goto LABEL_863;
            v652 = QuestAfterAction__GetMapComponent_object_(
                     (QuestAfterAction_o *)updated,
                     2,
                     v468,
                     this,
                     (const MethodInfo_2EC8D20 *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            updated = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v652, 0LL, 0LL);
            if ( (updated & 1) == 0 )
            {
              if ( !v652 )
                goto LABEL_863;
              BYTE1(v652[6].monitor) = v469;
              MapGimmickComponent__SetDispAnim_33509680((MapGimmickComponent_o *)v652, 0, 0.0, 0, v653);
              v443 = v652[7].klass;
              if ( !v443 )
                goto LABEL_863;
LABEL_779:
              v443[4] = 0;
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
            v470 = *(_QWORD *)(updated + 24);
            v471 = updated;
            if ( v470 )
            {
              if ( !(_DWORD)v470 )
                goto LABEL_864;
              v472 = System_Int32__Parse(*(System_String_o **)(updated + 32), 0LL);
              if ( *(int *)(v471 + 24) >= 2 )
              {
                v473 = System_Int32__Parse(*(System_String_o **)(v471 + 40), 0LL) > 0;
                goto LABEL_782;
              }
            }
            else
            {
              v472 = 0;
            }
            v473 = 0;
LABEL_782:
            updated = (__int64)*v102;
            if ( !*v102 )
              goto LABEL_863;
            v654 = QuestAfterAction__GetMapComponent_object_(
                     (QuestAfterAction_o *)updated,
                     2,
                     v472,
                     this,
                     (const MethodInfo_2EC8D20 *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            updated = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v654, 0LL, 0LL);
            if ( (updated & 1) == 0 )
            {
              if ( !v654 )
                goto LABEL_863;
              LOBYTE(v654[6].monitor) = v473;
              BYTE1(v654[6].monitor) = 0;
              MapGimmickComponent__SetDispAnim_33509680((MapGimmickComponent_o *)v654, 1, 0.0, 0, v655);
              v656 = v654[7].klass;
              if ( !v656 )
                goto LABEL_863;
              LODWORD(v656->_1.name) = 1;
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
            v474 = updated;
            if ( *(int *)(updated + 24) <= 4 )
              goto LABEL_330;
            v475 = System_Single__Parse(*(System_String_o **)(updated + 56), 0LL);
            if ( !*(_DWORD *)(v474 + 24) )
              goto LABEL_864;
            v476 = *v102;
            v477 = v475;
            updated = System_Int32__Parse(*(System_String_o **)(v474 + 32), 0LL);
            if ( !v476 )
              goto LABEL_863;
            v478 = QuestAfterAction__GetMapComponent_object_(
                     v476,
                     2,
                     updated,
                     this,
                     (const MethodInfo_2EC8D20 *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v478, 0LL, 0LL) )
              return;
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            if ( !byte_49F76BD )
            {
              sub_1B640C8(&TerminalSceneComponent_TypeInfo, v107);
              byte_49F76BD = 1;
            }
            updated = (__int64)TerminalSceneComponent_TypeInfo;
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
              updated = (__int64)TerminalSceneComponent_TypeInfo;
            }
            v479 = **(_QWORD **)(updated + 184);
            if ( !v479 )
              goto LABEL_863;
            if ( *(_DWORD *)(v474 + 24) <= 1u )
              goto LABEL_864;
            v480 = *(ScrTerminalMap_o **)(v479 + 264);
            v481 = System_Single__Parse(*(System_String_o **)(v474 + 40), 0LL);
            if ( *(_DWORD *)(v474 + 24) <= 2u )
              goto LABEL_864;
            v482 = v481;
            v483 = System_Single__Parse(*(System_String_o **)(v474 + 48), 0LL);
            if ( !v480 )
              goto LABEL_863;
            *(UnityEngine_Vector3_o *)&v484 = ScrTerminalMap__LocalPosFromCoord(v480, v482, v483, 0.0, 0.0, 0LL);
            if ( *(_DWORD *)(v474 + 24) <= 4u )
              goto LABEL_864;
            v487 = v484;
            v488 = v485;
            v489 = v486;
            v490 = System_Int32__Parse(*(System_String_o **)(v474 + 64), 0LL);
            v493 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v491, v492);
            System_Action___ctor(
              v493,
              (Il2CppObject *)v98,
              Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__25__,
              0LL);
            if ( !v478 )
              goto LABEL_863;
            v718.fields.y = v488;
            v718.fields.z = v489;
            v718.fields.x = v487;
            MapGimmickComponent__SetMoveAnim((MapGimmickComponent_o *)v478, v718, v477 * 0.001, v490, v493, v494);
            return;
          case 405:
            v495 = sub_1B64314(QuestAfterAction_StateMain___c__DisplayClass16_12_TypeInfo, v114, v115);
            QuestAfterAction_StateMain___c__DisplayClass16_12___ctor(
              (QuestAfterAction_StateMain___c__DisplayClass16_12_o *)v495,
              0LL);
            if ( !v495 )
              goto LABEL_863;
            *(_QWORD *)(v495 + 24) = v98;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)(v495 + 24), v98, v496, v497);
            v498 = *(_QWORD *)(v495 + 24);
            if ( !v498 )
              goto LABEL_863;
            v499 = *(QuestAfterAction_o **)(v498 + 24);
            updated = System_Int32__Parse(v108->fields.param, 0LL);
            if ( !v499 )
              goto LABEL_863;
            v500 = QuestAfterAction__GetMapComponent_object_(
                     v499,
                     2,
                     updated,
                     this,
                     (const MethodInfo_2EC8D20 *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
            *(_QWORD *)(v495 + 16) = v500;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)(v495 + 16), (int32_t)v500, v501, v502);
            v503 = *(UnityEngine_Object_o **)(v495 + 16);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Equality(v503, 0LL, 0LL) )
              return;
            v506 = *(MapGimmickComponent_o **)(v495 + 16);
            v507 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v504, v505);
            System_Action___ctor(
              v507,
              (Il2CppObject *)v495,
              Method_QuestAfterAction_StateMain___c__DisplayClass16_12__UpdateAnim_b__26__,
              0LL);
            if ( !v506 )
              goto LABEL_863;
            MapGimmickComponent__SetState(v506, 3, v507, v508);
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            if ( !byte_49F76BD )
            {
              sub_1B640C8(&TerminalSceneComponent_TypeInfo, v509);
              byte_49F76BD = 1;
            }
            updated = (__int64)TerminalSceneComponent_TypeInfo;
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
              updated = (__int64)TerminalSceneComponent_TypeInfo;
            }
            v510 = **(TerminalSceneComponent_o ***)(updated + 184);
            if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
            if ( !v510 )
              goto LABEL_863;
            v125 = v510;
            v127 = 0LL;
            v126 = AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME;
            goto LABEL_46;
          case 406:
            v511 = sub_1B64314(QuestAfterAction_StateMain___c__DisplayClass16_13_TypeInfo, v114, v115);
            QuestAfterAction_StateMain___c__DisplayClass16_13___ctor(
              (QuestAfterAction_StateMain___c__DisplayClass16_13_o *)v511,
              0LL);
            if ( !v511 )
              goto LABEL_863;
            *(_QWORD *)(v511 + 32) = v98;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)(v511 + 32), v98, v512, v513);
            updated = (__int64)v108->fields.param;
            if ( !updated )
              goto LABEL_863;
            v514 = System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
            *(_QWORD *)(v511 + 24) = v514;
            v515 = (__int64 *)(v511 + 24);
            sub_1B6406C((ServantStatusBattleListViewItem_o *)(v511 + 24), (int32_t)v514, v516, v517);
            v518 = *(_QWORD *)(v511 + 32);
            if ( !v518 )
              goto LABEL_863;
            v519 = *v515;
            if ( !*v515 )
              goto LABEL_863;
            if ( !*(_DWORD *)(v519 + 24) )
              goto LABEL_864;
            v520 = *(QuestAfterAction_o **)(v518 + 24);
            updated = System_Int32__Parse(*(System_String_o **)(v519 + 32), 0LL);
            if ( !v520 )
              goto LABEL_863;
            v521 = QuestAfterAction__GetMapComponent_object_(
                     v520,
                     2,
                     updated,
                     this,
                     (const MethodInfo_2EC8D20 *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
            *(_QWORD *)(v511 + 16) = v521;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)(v511 + 16), (int32_t)v521, v522, v523);
            v524 = *(UnityEngine_Object_o **)(v511 + 16);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Equality(v524, 0LL, 0LL) )
              return;
            v527 = *(MapGimmickComponent_o **)(v511 + 16);
            v528 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v525, v526);
            v529 = &Method_QuestAfterAction_StateMain___c__DisplayClass16_13__UpdateAnim_b__27__;
            v530 = v528;
            goto LABEL_622;
          case 407:
            updated = (__int64)v108->fields.param;
            if ( !updated )
              goto LABEL_863;
            updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
            if ( !updated )
              goto LABEL_863;
            v531 = updated;
            if ( !*(_DWORD *)(updated + 24) )
              goto LABEL_864;
            v532 = *v102;
            updated = System_Int32__Parse(*(System_String_o **)(updated + 32), 0LL);
            if ( !v532 )
              goto LABEL_863;
            v533 = QuestAfterAction__GetMapComponent_object_(
                     v532,
                     2,
                     updated,
                     this,
                     (const MethodInfo_2EC8D20 *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            updated = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v533, 0LL, 0LL);
            if ( (updated & 1) != 0 )
              return;
            if ( !v533 )
              goto LABEL_863;
            updated = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v533, 0LL);
            if ( !updated )
              goto LABEL_863;
            updated = (__int64)UnityEngine_GameObject__GetComponentInChildren_object_(
                                 (UnityEngine_GameObject_o *)updated,
                                 (const MethodInfo_2E8813C *)Method_UnityEngine_GameObject_GetComponentInChildren_UISprite___);
            if ( *(_DWORD *)(v531 + 24) <= 1u )
              goto LABEL_864;
            v534 = (UIWidget_o *)updated;
            updated = UnityEngine_ColorUtility__TryParseHtmlString(*(System_String_o **)(v531 + 40), &color, 0LL);
            if ( !v534 )
              goto LABEL_863;
            UIWidget__set_color(v534, color, 0LL);
            goto LABEL_330;
          case 408:
            v511 = sub_1B64314(QuestAfterAction_StateMain___c__DisplayClass16_15_TypeInfo, v114, v115);
            QuestAfterAction_StateMain___c__DisplayClass16_15___ctor(
              (QuestAfterAction_StateMain___c__DisplayClass16_15_o *)v511,
              0LL);
            if ( !v511 )
              goto LABEL_863;
            *(_QWORD *)(v511 + 24) = v98;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)(v511 + 24), v98, v535, v536);
            v537 = *(_QWORD *)(v511 + 24);
            if ( !v537 )
              goto LABEL_863;
            v538 = *(QuestAfterAction_o **)(v537 + 24);
            updated = System_Int32__Parse(v108->fields.param, 0LL);
            if ( !v538 )
              goto LABEL_863;
            v539 = QuestAfterAction__GetMapComponent_object_(
                     v538,
                     2,
                     updated,
                     this,
                     (const MethodInfo_2EC8D20 *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
            *(_QWORD *)(v511 + 16) = v539;
            v540 = v511 + 16;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)(v511 + 16), (int32_t)v539, v541, v542);
            v543 = *(UnityEngine_Object_o **)(v511 + 16);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Equality(v543, 0LL, 0LL) )
              return;
            updated = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_36EC45C *)Method_SingletonTemplate_QuestTree__get_Instance__);
            if ( !*(_QWORD *)v540 || !updated )
              goto LABEL_863;
            v544 = QuestTree__CheckMapGimmickCond_33828248(
                     (QuestTree_o *)updated,
                     *(MapControl_MapGimmickInfo_o **)(*(_QWORD *)v540 + 112LL),
                     0LL);
            v527 = *(MapGimmickComponent_o **)v540;
            v545 = v544;
            v528 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v546, v547);
            v530 = v528;
            if ( v545 )
            {
              v529 = &Method_QuestAfterAction_StateMain___c__DisplayClass16_15__UpdateAnim_b__29__;
LABEL_622:
              System_Action___ctor(v528, (Il2CppObject *)v511, *v529, 0LL);
              if ( !v527 )
                goto LABEL_863;
              v549 = 3;
            }
            else
            {
              System_Action___ctor(
                v528,
                (Il2CppObject *)v511,
                Method_QuestAfterAction_StateMain___c__DisplayClass16_15__UpdateAnim_b__30__,
                0LL);
              if ( !v527 )
                goto LABEL_863;
              v549 = 2;
            }
            v650 = v527;
            v651 = v530;
            goto LABEL_822;
          case 409:
            updated = (__int64)v108->fields.param;
            if ( !updated )
              goto LABEL_863;
            updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
            if ( !updated )
              goto LABEL_863;
            v550 = *(_QWORD *)(updated + 24);
            v551 = updated;
            if ( v550 )
            {
              if ( !(_DWORD)v550 )
                goto LABEL_864;
              v552 = System_Int32__Parse(*(System_String_o **)(updated + 32), 0LL);
              if ( *(int *)(v551 + 24) >= 2 )
              {
                v553 = System_Int32__Parse(*(System_String_o **)(v551 + 40), 0LL) > 0;
                goto LABEL_791;
              }
            }
            else
            {
              v552 = 0;
            }
            v553 = 0;
LABEL_791:
            updated = (__int64)*v102;
            if ( !*v102 )
              goto LABEL_863;
            v657 = QuestAfterAction__GetMapComponent_object_(
                     (QuestAfterAction_o *)updated,
                     2,
                     v552,
                     this,
                     (const MethodInfo_2EC8D20 *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            updated = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v657, 0LL, 0LL);
            if ( (updated & 1) == 0 )
            {
              if ( !v657 )
                goto LABEL_863;
              LOBYTE(v657[6].monitor) = v553;
              BYTE1(v657[6].monitor) = 0;
              AnimTime = MapGimmickComponent__GetAnimTime((MapGimmickComponent_o *)v657, v658);
              MapGimmickComponent__SetDispAnim_33509680((MapGimmickComponent_o *)v657, 1, AnimTime, 1, v660);
              v661 = v657[7].klass;
              if ( !v661 )
                goto LABEL_863;
              LODWORD(v661->_1.name) = 1;
              v662 = this->klass;
              this->fields.IsAnimDoing = 0;
              v663 = ((__int64 (__fastcall *)(QuestAfterAction_StateMain_o *, Il2CppMethodPointer))v662->vtable._11_get_CommandIndex.method)(
                       this,
                       v662->vtable._12_set_CommandIndex.methodPtr);
              ((void (__fastcall *)(QuestAfterAction_StateMain_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._12_set_CommandIndex.method)(
                this,
                (unsigned int)(v663 + 1),
                this->klass->vtable._13_UpdateAnim.methodPtr);
              goto LABEL_19;
            }
            return;
          default:
            if ( id != 500 )
              return;
            v390 = System_Int32__Parse(v108->fields.param, 0LL);
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            if ( !byte_49F935B )
            {
              sub_1B640C8(&TerminalPramsManager_TypeInfo, v389);
              byte_49F935B = 1;
            }
            v391 = TerminalPramsManager_TypeInfo;
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
              v391 = TerminalPramsManager_TypeInfo;
            }
            v391->static_fields->_AfterActionFocusQuestId_k__BackingField = v390;
            if ( !DataManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
            updated = (__int64)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_QuestMaster___);
            if ( !updated )
              goto LABEL_863;
            if ( !DataMasterBase_object__object__int___TryGetEntity(
                    (DataMasterBase_TMaster__TEntity__PKType__o *)updated,
                    &entity,
                    v390,
                    (const MethodInfo_30D3EF8 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__) )
              goto LABEL_330;
            updated = (__int64)entity;
            if ( !entity )
              goto LABEL_863;
            v392 = *v102;
            updated = QuestEntity__getSpotId((QuestEntity_o *)entity, 0LL);
            if ( !v392 )
              goto LABEL_863;
            v393 = QuestAfterAction__GetMapComponent_object_(
                     v392,
                     0,
                     updated,
                     this,
                     (const MethodInfo_2EC8D20 *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            updated = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v393, 0LL, 0LL);
            if ( (updated & 1) == 0 )
              goto LABEL_330;
            if ( !v393 )
              goto LABEL_863;
            SrcSpotBasePrefab__SelectSpot((SrcSpotBasePrefab_o *)v393, 0, 0LL);
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            if ( !byte_49F935C )
            {
              sub_1B640C8(&TerminalPramsManager_TypeInfo, v394);
              byte_49F935C = 1;
            }
            v395 = TerminalPramsManager_TypeInfo;
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
              v395 = TerminalPramsManager_TypeInfo;
            }
            v395->static_fields->_IsBackQuestBoardDisable_k__BackingField = 1;
            goto LABEL_330;
        }
      }
      updated = (__int64)v108->fields.param;
      if ( !updated )
        goto LABEL_863;
      updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
      if ( !updated )
        goto LABEL_863;
      v169 = updated;
      if ( *(int *)(updated + 24) <= 4 )
        goto LABEL_330;
      v170 = System_Single__Parse(*(System_String_o **)(updated + 32), 0LL);
      if ( *(_DWORD *)(v169 + 24) <= 1u )
        goto LABEL_864;
      v171 = v170;
      v172 = System_Single__Parse(*(System_String_o **)(v169 + 40), 0LL);
      if ( *(_DWORD *)(v169 + 24) <= 2u )
        goto LABEL_864;
      v173 = v172;
      v174 = System_Single__Parse(*(System_String_o **)(v169 + 48), 0LL);
      if ( *(_DWORD *)(v169 + 24) <= 3u )
        goto LABEL_864;
      v175 = v174;
      v176 = System_Single__Parse(*(System_String_o **)(v169 + 56), 0LL);
      if ( *(_DWORD *)(v169 + 24) <= 4u )
        goto LABEL_864;
      v177 = v176;
      v179 = System_Int32__Parse(*(System_String_o **)(v169 + 64), 0LL);
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      if ( !byte_49F76BD )
      {
        sub_1B640C8(&TerminalSceneComponent_TypeInfo, v178);
        byte_49F76BD = 1;
      }
      updated = (__int64)TerminalSceneComponent_TypeInfo;
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        updated = (__int64)TerminalSceneComponent_TypeInfo;
      }
      v180 = **(_QWORD **)(updated + 184);
      if ( !v180 )
        goto LABEL_863;
      updated = *(_QWORD *)(v180 + 264);
      if ( !updated )
        goto LABEL_863;
      v717.fields.y = v173;
      v717.fields.z = v175;
      v181 = v177 * 0.001;
      v717.fields.x = v171;
      *(UnityEngine_Vector3_o *)&v184 = ScrTerminalMap__ConvertLocalToScreenPosition(
                                          (ScrTerminalMap_o *)updated,
                                          v717,
                                          0LL);
      v187 = v184;
      v188 = v185;
      v189 = v186;
      if ( v108->fields.id != 352 || *(int *)(v169 + 24) < 6 )
      {
        if ( !*v102 )
          goto LABEL_863;
        mMapCamera = (*v102)->fields.mMapCamera;
        v191 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v182, v183);
        v192 = &Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__20__;
LABEL_112:
        v193 = v191;
        System_Action___ctor(v191, (Il2CppObject *)v98, *v192, 0LL);
        if ( !mMapCamera )
          goto LABEL_863;
        v194 = mMapCamera;
        v195 = v187;
        v196 = v188;
        v197 = v189;
        v198 = v181;
        v199 = v179;
        v200 = v193;
        goto LABEL_846;
      }
      if ( !*v102 )
        goto LABEL_863;
      v396 = (*v102)->fields.mMapCamera;
      *(_QWORD *)&v711.fields.hasValue = &v700;
      *(_QWORD *)&v711.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
      *(_QWORD *)&v700.fields.hasValue = 0LL;
      *(_QWORD *)&v700.fields.value.fields.y = 0LL;
      System_Nullable_Vector3____ctor(v711, *(UnityEngine_Vector3_o *)&v184, v183);
      if ( *(_DWORD *)(v169 + 24) <= 5u )
        goto LABEL_864;
      v397 = System_Single__Parse(*(System_String_o **)(v169 + 72), 0LL);
      p_size = (System_Nullable_float__o)&size;
      size = 0LL;
      System_Nullable_float____ctor(p_size, v397, (const MethodInfo_35CFFAC *)Method_System_Nullable_float___ctor__);
      v400 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v398, v399);
      v401 = &Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__19__;
LABEL_468:
      v402 = v400;
      System_Action___ctor(v400, (Il2CppObject *)v98, *v401, 0LL);
      if ( !v396 )
        goto LABEL_863;
      v716 = v700;
      v710 = size;
      v403 = v396;
      v404 = v181;
      v405 = v179;
      v406 = v402;
LABEL_857:
      MapCamera__StartAutoWork(v403, v404, v716, v710, v405, v406, 0LL);
      return;
    }
    if ( id <= 113 )
    {
      switch ( id )
      {
        case 'd':
          v155 = sub_1B64314(QuestAfterAction_StateMain___c__DisplayClass16_1_TypeInfo, v114, v115);
          QuestAfterAction_StateMain___c__DisplayClass16_1___ctor(
            (QuestAfterAction_StateMain___c__DisplayClass16_1_o *)v155,
            0LL);
          if ( !v155 )
            goto LABEL_863;
          *(_QWORD *)(v155 + 24) = v98;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v155 + 24), v98, v156, v157);
          v158 = *(_QWORD *)(v155 + 24);
          if ( !v158 )
            goto LABEL_863;
          v159 = *(QuestAfterAction_o **)(v158 + 24);
          updated = System_Int32__Parse(v108->fields.param, 0LL);
          if ( !v159 )
            goto LABEL_863;
          v160 = QuestAfterAction__GetMapComponent_object_(
                   v159,
                   0,
                   updated,
                   this,
                   (const MethodInfo_2EC8D20 *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
          *(_QWORD *)(v155 + 16) = v160;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v155 + 16), (int32_t)v160, v161, v162);
          v163 = *(UnityEngine_Object_o **)(v155 + 16);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Equality(v163, 0LL, 0LL) )
            return;
          v166 = *(SrcSpotBasePrefab_o **)(v155 + 16);
          v167 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v164, v165);
          System_Action___ctor(
            v167,
            (Il2CppObject *)v155,
            Method_QuestAfterAction_StateMain___c__DisplayClass16_1__UpdateAnim_b__0__,
            0LL);
          if ( !v166 )
            goto LABEL_863;
          v168 = 2;
          goto LABEL_385;
        case 'e':
          v341 = sub_1B64314(QuestAfterAction_StateMain___c__DisplayClass16_2_TypeInfo, v114, v115);
          QuestAfterAction_StateMain___c__DisplayClass16_2___ctor(
            (QuestAfterAction_StateMain___c__DisplayClass16_2_o *)v341,
            0LL);
          if ( !v341 )
            goto LABEL_863;
          *(_QWORD *)(v341 + 24) = v98;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v341 + 24), v98, v342, v343);
          v344 = *(_QWORD *)(v341 + 24);
          if ( !v344 )
            goto LABEL_863;
          v345 = *(QuestAfterAction_o **)(v344 + 24);
          updated = System_Int32__Parse(v108->fields.param, 0LL);
          if ( !v345 )
            goto LABEL_863;
          v346 = QuestAfterAction__GetMapComponent_object_(
                   v345,
                   0,
                   updated,
                   this,
                   (const MethodInfo_2EC8D20 *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
          *(_QWORD *)(v341 + 16) = v346;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v341 + 16), (int32_t)v346, v347, v348);
          v349 = *(UnityEngine_Object_o **)(v341 + 16);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Equality(v349, 0LL, 0LL) )
            return;
          v166 = *(SrcSpotBasePrefab_o **)(v341 + 16);
          v167 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v350, v351);
          System_Action___ctor(
            v167,
            (Il2CppObject *)v341,
            Method_QuestAfterAction_StateMain___c__DisplayClass16_2__UpdateAnim_b__1__,
            0LL);
          if ( !v166 )
            goto LABEL_863;
          v168 = 3;
LABEL_385:
          SrcSpotBasePrefab__SetState(v166, v168, v167, 0LL);
          return;
        case 'f':
          v352 = sub_1B64314(QuestAfterAction_StateMain___c__DisplayClass16_3_TypeInfo, v114, v115);
          QuestAfterAction_StateMain___c__DisplayClass16_3___ctor(
            (QuestAfterAction_StateMain___c__DisplayClass16_3_o *)v352,
            0LL);
          if ( !v352 )
            goto LABEL_863;
          *(_QWORD *)(v352 + 24) = v98;
          v355 = v352 + 24;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v352 + 24), v98, v353, v354);
          if ( !*(_QWORD *)(v352 + 24) )
            goto LABEL_863;
          v356 = *(QuestAfterAction_o **)(*(_QWORD *)(v352 + 24) + 24LL);
          updated = System_Int32__Parse(v108->fields.param, 0LL);
          if ( !v356 )
            goto LABEL_863;
          v357 = QuestAfterAction__GetMapComponent_object_(
                   v356,
                   0,
                   updated,
                   this,
                   (const MethodInfo_2EC8D20 *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
          *(_QWORD *)(v352 + 16) = v357;
          v358 = (__int64 *)(v352 + 16);
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v352 + 16), (int32_t)v357, v359, v360);
          v361 = *(UnityEngine_Object_o **)(v352 + 16);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Equality(v361, 0LL, 0LL) )
            return;
          v364 = *(SrcSpotBasePrefab_o **)(v352 + 16);
          v365 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v362, v363);
          System_Action___ctor(
            v365,
            (Il2CppObject *)v352,
            Method_QuestAfterAction_StateMain___c__DisplayClass16_3__UpdateAnim_b__2__,
            0LL);
          if ( !v364 )
            goto LABEL_863;
          SrcSpotBasePrefab__SetState(v364, 4, v365, 0LL);
          if ( !*(_QWORD *)v355 )
            goto LABEL_863;
          updated = *(_QWORD *)(*(_QWORD *)v355 + 24LL);
          if ( !updated )
            goto LABEL_863;
          v368 = *v358;
          *(_QWORD *)(updated + 176) = *v358;
          v369 = (ServantStatusBattleListViewItem_o *)(updated + 176);
          goto LABEL_407;
        case 'g':
          updated = (__int64)v108->fields.param;
          if ( !updated )
            goto LABEL_863;
          updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
          if ( !updated )
            goto LABEL_863;
          v370 = updated;
          if ( *(int *)(updated + 24) <= 1 )
            goto LABEL_330;
          v371 = *v102;
          updated = System_Int32__Parse(*(System_String_o **)(updated + 32), 0LL);
          if ( !v371 )
            goto LABEL_863;
          v372 = QuestAfterAction__GetMapComponent_object_(
                   v371,
                   0,
                   updated,
                   this,
                   (const MethodInfo_2EC8D20 *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          updated = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v372, 0LL, 0LL);
          if ( (updated & 1) != 0 )
            return;
          if ( *(_DWORD *)(v370 + 24) <= 1u )
            goto LABEL_864;
          updated = System_Int32__Parse(*(System_String_o **)(v370 + 40), 0LL);
          if ( !v372 )
            goto LABEL_863;
          LODWORD(v372[14].klass) = updated;
          v375 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v373, v374);
          System_Action___ctor(v375, (Il2CppObject *)this, (intptr_t)this->klass->vtable._15_onEnd.methodPtr, 0LL);
          SrcSpotBasePrefab__SetState((SrcSpotBasePrefab_o *)v372, 5, v375, 0LL);
          updated = (__int64)*v102;
          if ( !*v102 )
            goto LABEL_863;
          *(_QWORD *)(updated + 176) = v372;
          v369 = (ServantStatusBattleListViewItem_o *)(updated + 176);
          LODWORD(v368) = (_DWORD)v372;
LABEL_407:
          sub_1B6406C(v369, v368, v366, v367);
          return;
        case 'h':
        case 'i':
        case 'j':
        case 'k':
        case 'l':
        case 'm':
          return;
        case 'n':
          v376 = *v102;
          updated = System_Int32__Parse(v108->fields.param, 0LL);
          if ( !v376 )
            goto LABEL_863;
          v377 = QuestAfterAction__GetMapComponent_object_(
                   v376,
                   0,
                   updated,
                   this,
                   (const MethodInfo_2EC8D20 *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          updated = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v377, 0LL, 0LL);
          if ( (updated & 1) != 0 )
            return;
          if ( !v377 )
            goto LABEL_863;
          SrcSpotBasePrefab__SetQaaScaleAnimQuick((SrcSpotBasePrefab_o *)v377, 0, 0LL);
          monitor = v377[14].monitor;
          if ( !monitor )
            goto LABEL_863;
          monitor[5] = 0;
          v379 = (SrcSpotBasePrefab_o *)v377;
          v380 = 0;
          goto LABEL_430;
        case 'o':
          v381 = *v102;
          updated = System_Int32__Parse(v108->fields.param, 0LL);
          if ( !v381 )
            goto LABEL_863;
          v382 = QuestAfterAction__GetMapComponent_object_(
                   v381,
                   0,
                   updated,
                   this,
                   (const MethodInfo_2EC8D20 *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          updated = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v382, 0LL, 0LL);
          if ( (updated & 1) != 0 )
            return;
          if ( !v382 )
            goto LABEL_863;
          SrcSpotBasePrefab__SetQaaScaleAnimQuick((SrcSpotBasePrefab_o *)v382, 1, 0LL);
          SrcSpotBasePrefab__SetQaaColorAnimQuick((SrcSpotBasePrefab_o *)v382, 0, 0LL);
          v383 = v382[14].monitor;
          if ( !v383 )
            goto LABEL_863;
          v383[5] = 2;
          goto LABEL_429;
        case 'p':
          v384 = *v102;
          updated = System_Int32__Parse(v108->fields.param, 0LL);
          if ( !v384 )
            goto LABEL_863;
          v382 = QuestAfterAction__GetMapComponent_object_(
                   v384,
                   0,
                   updated,
                   this,
                   (const MethodInfo_2EC8D20 *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          updated = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v382, 0LL, 0LL);
          if ( (updated & 1) != 0 )
            return;
          if ( !v382 )
            goto LABEL_863;
          SrcSpotBasePrefab__SetQaaScaleAnimQuick((SrcSpotBasePrefab_o *)v382, 1, 0LL);
          SrcSpotBasePrefab__SetQaaColorAnimQuick((SrcSpotBasePrefab_o *)v382, 1, 0LL);
          v385 = v382[14].monitor;
          if ( !v385 )
            goto LABEL_863;
          v385[5] = 1;
LABEL_429:
          v380 = 1;
          v379 = (SrcSpotBasePrefab_o *)v382;
LABEL_430:
          SrcSpotBasePrefab__SetTouchType(v379, v380, 0LL);
          goto LABEL_18;
        case 'q':
          updated = (__int64)v108->fields.param;
          if ( !updated )
            goto LABEL_863;
          updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
          if ( !updated )
            goto LABEL_863;
          v386 = updated;
          if ( *(int *)(updated + 24) <= 1 )
            goto LABEL_330;
          v387 = *v102;
          updated = System_Int32__Parse(*(System_String_o **)(updated + 32), 0LL);
          if ( !v387 )
            goto LABEL_863;
          v388 = QuestAfterAction__GetMapComponent_object_(
                   v387,
                   0,
                   updated,
                   this,
                   (const MethodInfo_2EC8D20 *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          updated = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v388, 0LL, 0LL);
          if ( (updated & 1) != 0 )
            return;
          if ( *(_DWORD *)(v386 + 24) <= 1u )
            goto LABEL_864;
          updated = System_Int32__Parse(*(System_String_o **)(v386 + 40), 0LL);
          if ( !v388 )
            goto LABEL_863;
          LODWORD(v388[14].klass) = updated;
          SrcSpotBasePrefab__UpdateDisp((SrcSpotBasePrefab_o *)v388, 1, 0LL);
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
        v135 = *(_QWORD *)(updated + 24);
        v136 = updated;
        if ( (int)v135 <= 0 )
          goto LABEL_330;
        if ( (int)v135 > 2 )
        {
          v560 = System_Single__Parse(*(System_String_o **)(updated + 48), 0LL);
          v135 = *(_QWORD *)(v136 + 24);
          v137 = v560 * 0.001;
        }
        else
        {
          v137 = 0.5;
        }
        sec = v137;
        if ( (int)v135 >= 2 )
        {
          updated = System_Int32__Parse(*(System_String_o **)(v136 + 40), 0LL);
          v135 = *(_QWORD *)(v136 + 24);
          v561 = updated;
        }
        else
        {
          v561 = 15;
        }
        if ( !(_DWORD)v135 )
          goto LABEL_864;
        v564 = *v102;
        updated = System_Int32__Parse(*(System_String_o **)(v136 + 32), 0LL);
        if ( !v564 )
          goto LABEL_863;
        MapGameObject = (UnityEngine_Object_o *)QuestAfterAction__GetMapGameObject(v564, 0, updated, this, v565);
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
        if ( !byte_49F76BD )
        {
          sub_1B640C8(&TerminalSceneComponent_TypeInfo, v567);
          byte_49F76BD = 1;
        }
        updated = (__int64)TerminalSceneComponent_TypeInfo;
        if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          updated = (__int64)TerminalSceneComponent_TypeInfo;
        }
        v571 = **(_QWORD **)(updated + 184);
        if ( !v571 )
          goto LABEL_863;
        updated = *(_QWORD *)(v571 + 264);
        if ( !updated )
          goto LABEL_863;
        v720.fields.x = x;
        v720.fields.y = y;
        v720.fields.z = z;
        v721 = ScrTerminalMap__ConvertLocalToScreenPosition((ScrTerminalMap_o *)updated, v720, 0LL);
        x = v721.fields.x;
        y = v721.fields.y;
        z = v721.fields.z;
LABEL_662:
        if ( !FSUtility_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
        updated = FSUtility__IsUnderVista(0LL);
        if ( (updated & 1) != 0 )
          goto LABEL_829;
        if ( !*(_DWORD *)(v136 + 24) )
          goto LABEL_864;
        v573 = *(System_String_o **)(v136 + 32);
        updated = System_String__op_Equality(v573, (System_String_o *)StringLiteral_1404/*"10703"*/, 0LL);
        if ( (updated & 1) != 0 )
        {
          y = y + -50.0;
        }
        else
        {
          updated = System_String__op_Equality(v573, (System_String_o *)StringLiteral_1479/*"30101"*/, 0LL);
          if ( (updated & 1) != 0 )
            y = y + -50.0;
        }
LABEL_829:
        if ( v108->fields.id != 305 || *(int *)(v136 + 24) < 4 )
        {
          if ( !*v102 )
            goto LABEL_863;
          v591 = (*v102)->fields.mMapCamera;
          v592 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v107, v572);
          v593 = &Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__10__;
          goto LABEL_833;
        }
        if ( !*v102 )
          goto LABEL_863;
        v677 = (*v102)->fields.mMapCamera;
        *(_QWORD *)&v713.fields.hasValue = &v700;
        v728.fields.x = x;
        v728.fields.y = y;
        *(_QWORD *)&v713.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
        v728.fields.z = z;
        v700 = (System_Nullable_Vector3__o)0LL;
        System_Nullable_Vector3____ctor(v713, v728, v572);
        if ( *(_DWORD *)(v136 + 24) <= 3u )
          goto LABEL_864;
        v684 = System_Single__Parse(*(System_String_o **)(v136 + 56), 0LL);
        v707 = (System_Nullable_float__o)&size;
        size = 0LL;
        System_Nullable_float____ctor(v707, v684, (const MethodInfo_35CFFAC *)Method_System_Nullable_float___ctor__);
        v681 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v685, v686);
        v682 = &Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__9__;
        break;
      case 301:
      case 306:
        updated = (__int64)v108->fields.param;
        if ( !updated )
          goto LABEL_863;
        updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
        if ( !updated )
          goto LABEL_863;
        v316 = *(_QWORD *)(updated + 24);
        v317 = updated;
        if ( (int)v316 <= 0 )
          goto LABEL_330;
        if ( (int)v316 > 2 )
        {
          v562 = System_Single__Parse(*(System_String_o **)(updated + 48), 0LL);
          v316 = *(_QWORD *)(v317 + 24);
          v318 = v562 * 0.001;
        }
        else
        {
          v318 = 0.5;
        }
        seca = v318;
        if ( (int)v316 >= 2 )
        {
          updated = System_Int32__Parse(*(System_String_o **)(v317 + 40), 0LL);
          v316 = *(_QWORD *)(v317 + 24);
        }
        else
        {
          updated = 15LL;
        }
        easeType = updated;
        if ( !(_DWORD)v316 )
          goto LABEL_864;
        v574 = *v102;
        updated = System_Int32__Parse(*(System_String_o **)(v317 + 32), 0LL);
        if ( !v574 )
          goto LABEL_863;
        v576 = (UnityEngine_Object_o *)QuestAfterAction__GetMapGameObject(v574, 1, updated, this, v575);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        updated = UnityEngine_Object__op_Equality(v576, 0LL, 0LL);
        if ( (updated & 1) != 0 )
          return;
        if ( this->fields.IsMapModel )
        {
          if ( !v576 )
            goto LABEL_863;
          updated = (__int64)UnityEngine_GameObject__GetComponent_object_(
                               (UnityEngine_GameObject_o *)v576,
                               (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_ModelLineComponent___);
          if ( !updated )
            goto LABEL_863;
          Position = GameObjectExtensions__GetPosition((UnityEngine_GameObject_o *)*(_QWORD *)(updated + 32), 0LL);
          v578 = Position.fields.x;
          v579 = Position.fields.y;
          v580 = Position.fields.z;
          if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          if ( !byte_49F76BD )
          {
            sub_1B640C8(&TerminalSceneComponent_TypeInfo, v577);
            byte_49F76BD = 1;
          }
          updated = (__int64)TerminalSceneComponent_TypeInfo;
          if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            updated = (__int64)TerminalSceneComponent_TypeInfo;
          }
          v581 = **(_QWORD **)(updated + 184);
          if ( !v581 )
            goto LABEL_863;
          updated = *(_QWORD *)(v581 + 264);
          if ( !updated )
            goto LABEL_863;
          v723.fields.x = v578;
          v723.fields.y = v579;
          v723.fields.z = v580;
          *(UnityEngine_Vector3_o *)&v582 = ScrTerminalMap__ConvertWorldToScreenPosition(
                                              (ScrTerminalMap_o *)updated,
                                              v723,
                                              0LL);
        }
        else
        {
          *(UnityEngine_Vector3_o *)&v582 = GameObjectExtensions__GetLocalPosition(
                                              (UnityEngine_GameObject_o *)v576,
                                              0LL);
        }
        v665 = v582;
        v666 = v583;
        v667 = v584;
        if ( !FSUtility_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
        updated = FSUtility__IsUnderVista(0LL);
        if ( (updated & 1) != 0 )
          goto LABEL_840;
        if ( !*(_DWORD *)(v317 + 24) )
          goto LABEL_864;
        v669 = *(System_String_o **)(v317 + 32);
        updated = System_String__op_Equality(v669, (System_String_o *)StringLiteral_1404/*"10703"*/, 0LL);
        if ( (updated & 1) != 0 )
        {
          v666 = v666 + -95.0;
        }
        else
        {
          updated = System_String__op_Equality(v669, (System_String_o *)StringLiteral_1480/*"30102"*/, 0LL);
          if ( (updated & 1) != 0 )
            v666 = v666 + 45.0;
        }
LABEL_840:
        if ( v108->fields.id != 306 || *(int *)(v317 + 24) < 4 )
        {
          if ( !*v102 )
            goto LABEL_863;
          v683 = (*v102)->fields.mMapCamera;
          v676 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v107, v668);
          System_Action___ctor(
            v676,
            (Il2CppObject *)v98,
            Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__12__,
            0LL);
          if ( !v683 )
            goto LABEL_863;
          v198 = seca;
          v199 = easeType;
          v194 = v683;
          v195 = v665;
          v196 = v666;
          v197 = v667;
          goto LABEL_845;
        }
        if ( !*v102 )
          goto LABEL_863;
        v688 = (*v102)->fields.mMapCamera;
        *(_QWORD *)&v714.fields.hasValue = &v700;
        v729.fields.x = v665;
        v729.fields.y = v666;
        *(_QWORD *)&v714.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
        v729.fields.z = v667;
        v700 = (System_Nullable_Vector3__o)0LL;
        System_Nullable_Vector3____ctor(v714, v729, v668);
        if ( *(_DWORD *)(v317 + 24) <= 3u )
          goto LABEL_864;
        v689 = System_Single__Parse(*(System_String_o **)(v317 + 56), 0LL);
        v708 = (System_Nullable_float__o)&size;
        size = 0LL;
        System_Nullable_float____ctor(v708, v689, (const MethodInfo_35CFFAC *)Method_System_Nullable_float___ctor__);
        v687 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v690, v691);
        System_Action___ctor(
          v687,
          (Il2CppObject *)v98,
          Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__11__,
          0LL);
        if ( !v688 )
          goto LABEL_863;
        v716 = v700;
        v710 = size;
        v404 = seca;
        v405 = easeType;
        v403 = v688;
        goto LABEL_856;
      case 302:
      case 307:
        updated = (__int64)v108->fields.param;
        if ( !updated )
          goto LABEL_863;
        updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
        if ( !updated )
          goto LABEL_863;
        v319 = *(_QWORD *)(updated + 24);
        v320 = updated;
        if ( (int)v319 <= 0 )
          goto LABEL_330;
        if ( (int)v319 > 2 )
        {
          v563 = System_Single__Parse(*(System_String_o **)(updated + 48), 0LL);
          v319 = *(_QWORD *)(v320 + 24);
          v321 = v563 * 0.001;
        }
        else
        {
          v321 = 0.5;
        }
        sec = v321;
        if ( (int)v319 >= 2 )
        {
          updated = System_Int32__Parse(*(System_String_o **)(v320 + 40), 0LL);
          v319 = *(_QWORD *)(v320 + 24);
          v561 = updated;
        }
        else
        {
          v561 = 15;
        }
        if ( !(_DWORD)v319 )
          goto LABEL_864;
        v585 = *v102;
        updated = System_Int32__Parse(*(System_String_o **)(v320 + 32), 0LL);
        if ( !v585 )
          goto LABEL_863;
        v587 = (UnityEngine_Object_o *)QuestAfterAction__GetMapGameObject(v585, 2, updated, this, v586);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Equality(v587, 0LL, 0LL) )
          return;
        v724 = GameObjectExtensions__GetLocalPosition((UnityEngine_GameObject_o *)v587, 0LL);
        x = v724.fields.x;
        y = v724.fields.y;
        z = v724.fields.z;
        if ( !this->fields.IsMapModel )
          goto LABEL_702;
        if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        if ( !byte_49F76BD )
        {
          sub_1B640C8(&TerminalSceneComponent_TypeInfo, v588);
          byte_49F76BD = 1;
        }
        updated = (__int64)TerminalSceneComponent_TypeInfo;
        if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          updated = (__int64)TerminalSceneComponent_TypeInfo;
        }
        v590 = **(_QWORD **)(updated + 184);
        if ( !v590 )
          goto LABEL_863;
        updated = *(_QWORD *)(v590 + 264);
        if ( !updated )
          goto LABEL_863;
        v725.fields.x = x;
        v725.fields.y = y;
        v725.fields.z = z;
        v726 = ScrTerminalMap__ConvertLocalToScreenPosition((ScrTerminalMap_o *)updated, v725, 0LL);
        x = v726.fields.x;
        y = v726.fields.y;
        z = v726.fields.z;
LABEL_702:
        if ( v108->fields.id != 307 || *(int *)(v320 + 24) < 4 )
        {
          if ( !*v102 )
            goto LABEL_863;
          v591 = (*v102)->fields.mMapCamera;
          v592 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v588, v589);
          v593 = &Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__14__;
LABEL_833:
          v676 = v592;
          System_Action___ctor(v592, (Il2CppObject *)v98, *v593, 0LL);
          if ( !v591 )
            goto LABEL_863;
          v198 = sec;
          v194 = v591;
          v195 = x;
          v196 = y;
          v197 = z;
          v199 = v561;
LABEL_845:
          v200 = v676;
LABEL_846:
          MapCamera__StartAutoMove(v194, *(UnityEngine_Vector3_o *)&v195, v198, v199, v200, 0LL);
          return;
        }
        if ( !*v102 )
          goto LABEL_863;
        v677 = (*v102)->fields.mMapCamera;
        *(_QWORD *)&v712.fields.hasValue = &v700;
        v727.fields.x = x;
        v727.fields.y = y;
        *(_QWORD *)&v712.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
        v727.fields.z = z;
        v700 = (System_Nullable_Vector3__o)0LL;
        System_Nullable_Vector3____ctor(v712, v727, v589);
        if ( *(_DWORD *)(v320 + 24) <= 3u )
          goto LABEL_864;
        v678 = System_Single__Parse(*(System_String_o **)(v320 + 56), 0LL);
        v706 = (System_Nullable_float__o)&size;
        size = 0LL;
        System_Nullable_float____ctor(v706, v678, (const MethodInfo_35CFFAC *)Method_System_Nullable_float___ctor__);
        v681 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v679, v680);
        v682 = &Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__13__;
        break;
      case 303:
      case 308:
        updated = (__int64)v108->fields.param;
        if ( !updated )
          goto LABEL_863;
        updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
        if ( !updated )
          goto LABEL_863;
        v322 = updated;
        if ( *(int *)(updated + 24) < 4 )
          goto LABEL_330;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_49F935A )
        {
          sub_1B640C8(&TerminalPramsManager_TypeInfo, v107);
          byte_49F935A = 1;
        }
        updated = (__int64)TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          updated = (__int64)TerminalPramsManager_TypeInfo;
        }
        if ( *(_BYTE *)(*(_QWORD *)(updated + 184) + 104LL) )
          goto LABEL_330;
        if ( *(_DWORD *)(v322 + 24) <= 2u )
          goto LABEL_864;
        v323 = System_Single__Parse(*(System_String_o **)(v322 + 48), 0LL) * 0.001;
        v181 = v323 >= 0.0 ? v323 : 0.5;
        if ( *(_DWORD *)(v322 + 24) <= 3u )
          goto LABEL_864;
        v179 = System_Int32__Parse(*(System_String_o **)(v322 + 56), 0LL);
        if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        if ( !byte_49F76BD )
        {
          sub_1B640C8(&TerminalSceneComponent_TypeInfo, v107);
          byte_49F76BD = 1;
        }
        updated = (__int64)TerminalSceneComponent_TypeInfo;
        if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          updated = (__int64)TerminalSceneComponent_TypeInfo;
        }
        v324 = **(_QWORD **)(updated + 184);
        if ( !v324 )
          goto LABEL_863;
        if ( !*(_DWORD *)(v322 + 24) )
          goto LABEL_864;
        v325 = *(ScrTerminalMap_o **)(v324 + 264);
        v326 = System_Single__Parse(*(System_String_o **)(v322 + 32), 0LL);
        if ( *(_DWORD *)(v322 + 24) <= 1u )
          goto LABEL_864;
        v327 = v326;
        v328 = System_Single__Parse(*(System_String_o **)(v322 + 40), 0LL);
        if ( !v325 )
          goto LABEL_863;
        *(UnityEngine_Vector3_o *)&v331 = ScrTerminalMap__LocalPosFromCoord(v325, v327, v328, 0.0, 0.0, 0LL);
        v187 = v331;
        v188 = v332;
        v189 = v333;
        if ( v108->fields.id != 308 || *(int *)(v322 + 24) < 5 )
        {
          if ( !*v102 )
            goto LABEL_863;
          mMapCamera = (*v102)->fields.mMapCamera;
          v191 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v329, v330);
          v192 = &Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__16__;
          goto LABEL_112;
        }
        if ( !*v102 )
          goto LABEL_863;
        v396 = (*v102)->fields.mMapCamera;
        *(_QWORD *)&v715.fields.hasValue = &v700;
        *(_QWORD *)&v715.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
        v700 = (System_Nullable_Vector3__o)0LL;
        System_Nullable_Vector3____ctor(v715, *(UnityEngine_Vector3_o *)&v331, v330);
        if ( *(_DWORD *)(v322 + 24) <= 4u )
          goto LABEL_864;
        v692 = System_Single__Parse(*(System_String_o **)(v322 + 64), 0LL);
        v709 = (System_Nullable_float__o)&size;
        size = 0LL;
        System_Nullable_float____ctor(v709, v692, (const MethodInfo_35CFFAC *)Method_System_Nullable_float___ctor__);
        v400 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v693, v694);
        v401 = &Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__15__;
        goto LABEL_468;
      case 304:
        updated = (__int64)v108->fields.param;
        if ( !updated )
          goto LABEL_863;
        updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
        if ( !updated )
          goto LABEL_863;
        v407 = *(_DWORD *)(updated + 24);
        v408 = updated;
        if ( v407 <= 1 )
          goto LABEL_330;
        v409 = System_Single__Parse(*(System_String_o **)(updated + 32), 0LL);
        if ( *(_DWORD *)(v408 + 24) <= 1u )
          goto LABEL_864;
        v410 = v409;
        v412 = System_Single__Parse(*(System_String_o **)(v408 + 40), 0LL);
        if ( !*v102 )
          goto LABEL_863;
        v413 = (*v102)->fields.mMapCamera;
        v414 = v412 * 0.001;
        if ( v414 >= 0.0 )
          v415 = v414;
        else
          v415 = 0.5;
        if ( v407 < 3 )
        {
          v416 = 5;
        }
        else
        {
          if ( *(_DWORD *)(v408 + 24) <= 2u )
            goto LABEL_864;
          v416 = System_Int32__Parse(*(System_String_o **)(v408 + 48), 0LL);
        }
        v664 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v107, v411);
        System_Action___ctor(
          v664,
          (Il2CppObject *)v98,
          Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__17__,
          0LL);
        if ( !v413 )
          goto LABEL_863;
        MapCamera__StartAutoZoom(v413, v410, v415, v416, v664, 0LL);
        return;
      default:
        switch ( id )
        {
          case 200:
            if ( this->fields.IsMapModel )
            {
              v201 = sub_1B64314(QuestAfterAction_StateMain___c__DisplayClass16_4_TypeInfo, v114, v115);
              QuestAfterAction_StateMain___c__DisplayClass16_4___ctor(
                (QuestAfterAction_StateMain___c__DisplayClass16_4_o *)v201,
                0LL);
              if ( !v201 )
                goto LABEL_863;
              *(_QWORD *)(v201 + 24) = v98;
              sub_1B6406C((ServantStatusBattleListViewItem_o *)(v201 + 24), v98, v202, v203);
              v204 = *(_QWORD *)(v201 + 24);
              if ( !v204 )
                goto LABEL_863;
              v205 = *(QuestAfterAction_o **)(v204 + 24);
              updated = System_Int32__Parse(v108->fields.param, 0LL);
              if ( !v205 )
                goto LABEL_863;
              v206 = QuestAfterAction__GetMapComponent_object_(
                       v205,
                       1,
                       updated,
                       this,
                       (const MethodInfo_2EC8D20 *)Method_QuestAfterAction_GetMapComponent_ModelLineComponent___);
              *(_QWORD *)(v201 + 16) = v206;
              sub_1B6406C((ServantStatusBattleListViewItem_o *)(v201 + 16), (int32_t)v206, v207, v208);
              v209 = *(UnityEngine_Object_o **)(v201 + 16);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              if ( !UnityEngine_Object__op_Equality(v209, 0LL, 0LL) )
              {
                v212 = *(ModelLineComponent_o **)(v201 + 16);
                v213 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v210, v211);
                System_Action___ctor(
                  v213,
                  (Il2CppObject *)v201,
                  Method_QuestAfterAction_StateMain___c__DisplayClass16_4__UpdateAnim_b__3__,
                  0LL);
                if ( !v212 )
                  goto LABEL_863;
                v215 = 2;
                goto LABEL_499;
              }
            }
            else
            {
              v594 = sub_1B64314(QuestAfterAction_StateMain___c__DisplayClass16_5_TypeInfo, v114, v115);
              QuestAfterAction_StateMain___c__DisplayClass16_5___ctor(
                (QuestAfterAction_StateMain___c__DisplayClass16_5_o *)v594,
                0LL);
              if ( !v594 )
                goto LABEL_863;
              *(_QWORD *)(v594 + 24) = v98;
              sub_1B6406C((ServantStatusBattleListViewItem_o *)(v594 + 24), v98, v595, v596);
              v597 = *(_QWORD *)(v594 + 24);
              if ( !v597 )
                goto LABEL_863;
              v598 = *(QuestAfterAction_o **)(v597 + 24);
              updated = System_Int32__Parse(v108->fields.param, 0LL);
              if ( !v598 )
                goto LABEL_863;
              v599 = QuestAfterAction__GetMapComponent_object_(
                       v598,
                       1,
                       updated,
                       this,
                       (const MethodInfo_2EC8D20 *)Method_QuestAfterAction_GetMapComponent_srcLineSprite___);
              *(_QWORD *)(v594 + 16) = v599;
              sub_1B6406C((ServantStatusBattleListViewItem_o *)(v594 + 16), (int32_t)v599, v600, v601);
              v602 = *(UnityEngine_Object_o **)(v594 + 16);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              if ( !UnityEngine_Object__op_Equality(v602, 0LL, 0LL) )
              {
                v605 = *(srcLineSprite_o **)(v594 + 16);
                v606 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v603, v604);
                System_Action___ctor(
                  v606,
                  (Il2CppObject *)v594,
                  Method_QuestAfterAction_StateMain___c__DisplayClass16_5__UpdateAnim_b__4__,
                  0LL);
                if ( !v605 )
                  goto LABEL_863;
                v607 = 2;
                goto LABEL_730;
              }
            }
            return;
          case 201:
            if ( this->fields.IsMapModel )
            {
              v417 = sub_1B64314(QuestAfterAction_StateMain___c__DisplayClass16_6_TypeInfo, v114, v115);
              QuestAfterAction_StateMain___c__DisplayClass16_6___ctor(
                (QuestAfterAction_StateMain___c__DisplayClass16_6_o *)v417,
                0LL);
              if ( !v417 )
                goto LABEL_863;
              *(_QWORD *)(v417 + 24) = v98;
              sub_1B6406C((ServantStatusBattleListViewItem_o *)(v417 + 24), v98, v418, v419);
              v420 = *(_QWORD *)(v417 + 24);
              if ( !v420 )
                goto LABEL_863;
              v421 = *(QuestAfterAction_o **)(v420 + 24);
              updated = System_Int32__Parse(v108->fields.param, 0LL);
              if ( !v421 )
                goto LABEL_863;
              v422 = QuestAfterAction__GetMapComponent_object_(
                       v421,
                       1,
                       updated,
                       this,
                       (const MethodInfo_2EC8D20 *)Method_QuestAfterAction_GetMapComponent_ModelLineComponent___);
              *(_QWORD *)(v417 + 16) = v422;
              sub_1B6406C((ServantStatusBattleListViewItem_o *)(v417 + 16), (int32_t)v422, v423, v424);
              v425 = *(UnityEngine_Object_o **)(v417 + 16);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              if ( !UnityEngine_Object__op_Equality(v425, 0LL, 0LL) )
              {
                v212 = *(ModelLineComponent_o **)(v417 + 16);
                v213 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v426, v427);
                System_Action___ctor(
                  v213,
                  (Il2CppObject *)v417,
                  Method_QuestAfterAction_StateMain___c__DisplayClass16_6__UpdateAnim_b__5__,
                  0LL);
                if ( !v212 )
                  goto LABEL_863;
                v215 = 3;
                goto LABEL_499;
              }
            }
            else
            {
              v608 = sub_1B64314(QuestAfterAction_StateMain___c__DisplayClass16_7_TypeInfo, v114, v115);
              QuestAfterAction_StateMain___c__DisplayClass16_7___ctor(
                (QuestAfterAction_StateMain___c__DisplayClass16_7_o *)v608,
                0LL);
              if ( !v608 )
                goto LABEL_863;
              *(_QWORD *)(v608 + 24) = v98;
              sub_1B6406C((ServantStatusBattleListViewItem_o *)(v608 + 24), v98, v609, v610);
              v611 = *(_QWORD *)(v608 + 24);
              if ( !v611 )
                goto LABEL_863;
              v612 = *(QuestAfterAction_o **)(v611 + 24);
              updated = System_Int32__Parse(v108->fields.param, 0LL);
              if ( !v612 )
                goto LABEL_863;
              v613 = QuestAfterAction__GetMapComponent_object_(
                       v612,
                       1,
                       updated,
                       this,
                       (const MethodInfo_2EC8D20 *)Method_QuestAfterAction_GetMapComponent_srcLineSprite___);
              *(_QWORD *)(v608 + 16) = v613;
              sub_1B6406C((ServantStatusBattleListViewItem_o *)(v608 + 16), (int32_t)v613, v614, v615);
              v616 = *(UnityEngine_Object_o **)(v608 + 16);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              if ( !UnityEngine_Object__op_Equality(v616, 0LL, 0LL) )
              {
                v605 = *(srcLineSprite_o **)(v608 + 16);
                v606 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v617, v618);
                System_Action___ctor(
                  v606,
                  (Il2CppObject *)v608,
                  Method_QuestAfterAction_StateMain___c__DisplayClass16_7__UpdateAnim_b__6__,
                  0LL);
                if ( !v605 )
                  goto LABEL_863;
                v607 = 3;
                goto LABEL_730;
              }
            }
            return;
          case 202:
            if ( this->fields.IsMapModel )
            {
              v428 = sub_1B64314(QuestAfterAction_StateMain___c__DisplayClass16_8_TypeInfo, v114, v115);
              QuestAfterAction_StateMain___c__DisplayClass16_8___ctor(
                (QuestAfterAction_StateMain___c__DisplayClass16_8_o *)v428,
                0LL);
              if ( !v428 )
                goto LABEL_863;
              *(_QWORD *)(v428 + 24) = v98;
              sub_1B6406C((ServantStatusBattleListViewItem_o *)(v428 + 24), v98, v429, v430);
              v431 = *(_QWORD *)(v428 + 24);
              if ( !v431 )
                goto LABEL_863;
              v432 = *(QuestAfterAction_o **)(v431 + 24);
              updated = System_Int32__Parse(v108->fields.param, 0LL);
              if ( !v432 )
                goto LABEL_863;
              v433 = QuestAfterAction__GetMapComponent_object_(
                       v432,
                       1,
                       updated,
                       this,
                       (const MethodInfo_2EC8D20 *)Method_QuestAfterAction_GetMapComponent_ModelLineComponent___);
              *(_QWORD *)(v428 + 16) = v433;
              sub_1B6406C((ServantStatusBattleListViewItem_o *)(v428 + 16), (int32_t)v433, v434, v435);
              v436 = *(UnityEngine_Object_o **)(v428 + 16);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              if ( !UnityEngine_Object__op_Equality(v436, 0LL, 0LL) )
              {
                v212 = *(ModelLineComponent_o **)(v428 + 16);
                v213 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v437, v438);
                System_Action___ctor(
                  v213,
                  (Il2CppObject *)v428,
                  Method_QuestAfterAction_StateMain___c__DisplayClass16_8__UpdateAnim_b__7__,
                  0LL);
                if ( !v212 )
                  goto LABEL_863;
                v215 = 4;
LABEL_499:
                ModelLineComponent__SetState(v212, v215, v213, v214);
              }
            }
            else
            {
              v619 = sub_1B64314(QuestAfterAction_StateMain___c__DisplayClass16_9_TypeInfo, v114, v115);
              QuestAfterAction_StateMain___c__DisplayClass16_9___ctor(
                (QuestAfterAction_StateMain___c__DisplayClass16_9_o *)v619,
                0LL);
              if ( !v619 )
                goto LABEL_863;
              *(_QWORD *)(v619 + 24) = v98;
              sub_1B6406C((ServantStatusBattleListViewItem_o *)(v619 + 24), v98, v620, v621);
              v622 = *(_QWORD *)(v619 + 24);
              if ( !v622 )
                goto LABEL_863;
              v623 = *(QuestAfterAction_o **)(v622 + 24);
              updated = System_Int32__Parse(v108->fields.param, 0LL);
              if ( !v623 )
                goto LABEL_863;
              v624 = QuestAfterAction__GetMapComponent_object_(
                       v623,
                       1,
                       updated,
                       this,
                       (const MethodInfo_2EC8D20 *)Method_QuestAfterAction_GetMapComponent_srcLineSprite___);
              *(_QWORD *)(v619 + 16) = v624;
              sub_1B6406C((ServantStatusBattleListViewItem_o *)(v619 + 16), (int32_t)v624, v625, v626);
              v627 = *(UnityEngine_Object_o **)(v619 + 16);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              if ( !UnityEngine_Object__op_Equality(v627, 0LL, 0LL) )
              {
                v605 = *(srcLineSprite_o **)(v619 + 16);
                v606 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v628, v629);
                System_Action___ctor(
                  v606,
                  (Il2CppObject *)v619,
                  Method_QuestAfterAction_StateMain___c__DisplayClass16_9__UpdateAnim_b__8__,
                  0LL);
                if ( !v605 )
                  goto LABEL_863;
                v607 = 4;
LABEL_730:
                srcLineSprite__SetState(v605, v607, v606, 0LL);
              }
            }
            return;
          case 203:
            IsMapModel = this->fields.IsMapModel;
            v440 = *v102;
            updated = System_Int32__Parse(v108->fields.param, 0LL);
            if ( !v440 )
              goto LABEL_863;
            if ( IsMapModel )
            {
              v441 = (UnityEngine_Object_o *)QuestAfterAction__GetMapComponent_object_(
                                               v440,
                                               1,
                                               updated,
                                               this,
                                               (const MethodInfo_2EC8D20 *)Method_QuestAfterAction_GetMapComponent_ModelLineComponent___);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              updated = UnityEngine_Object__op_Equality(v441, 0LL, 0LL);
              if ( (updated & 1) != 0 )
                return;
              if ( !v441 )
                goto LABEL_863;
              ModelLineComponent__SetQuestAfterActionScaleAnim_33534228((ModelLineComponent_o *)v441, 0, 0.0, v442);
              v443 = v441[3].klass;
              if ( !v443 )
                goto LABEL_863;
            }
            else
            {
              v630 = (UnityEngine_Object_o *)QuestAfterAction__GetMapComponent_object_(
                                               v440,
                                               1,
                                               updated,
                                               this,
                                               (const MethodInfo_2EC8D20 *)Method_QuestAfterAction_GetMapComponent_srcLineSprite___);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              updated = UnityEngine_Object__op_Equality(v630, 0LL, 0LL);
              if ( (updated & 1) != 0 )
                return;
              if ( !v630 )
                goto LABEL_863;
              srcLineSprite__SetQaaScaleAnimQuick((srcLineSprite_o *)v630, 0, 0LL);
              v443 = v630[5].monitor;
              if ( !v443 )
                goto LABEL_863;
            }
            goto LABEL_779;
          case 204:
            v444 = this->fields.IsMapModel;
            v445 = *v102;
            updated = System_Int32__Parse(v108->fields.param, 0LL);
            if ( !v445 )
              goto LABEL_863;
            if ( v444 )
            {
              v446 = (UnityEngine_Object_o *)QuestAfterAction__GetMapComponent_object_(
                                               v445,
                                               1,
                                               updated,
                                               this,
                                               (const MethodInfo_2EC8D20 *)Method_QuestAfterAction_GetMapComponent_ModelLineComponent___);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              updated = UnityEngine_Object__op_Equality(v446, 0LL, 0LL);
              if ( (updated & 1) != 0 )
                return;
              if ( !v446 )
                goto LABEL_863;
              ModelLineComponent__SetQuestAfterActionScaleAnim_33534228((ModelLineComponent_o *)v446, 1, 0.0, v447);
              ModelLineComponent__SetQuestAfterActionColorAnim_33534704((ModelLineComponent_o *)v446, 0, 0.0, v448);
              v449 = v446[3].klass;
              if ( !v449 )
                goto LABEL_863;
            }
            else
            {
              v631 = (UnityEngine_Object_o *)QuestAfterAction__GetMapComponent_object_(
                                               v445,
                                               1,
                                               updated,
                                               this,
                                               (const MethodInfo_2EC8D20 *)Method_QuestAfterAction_GetMapComponent_srcLineSprite___);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              updated = UnityEngine_Object__op_Equality(v631, 0LL, 0LL);
              if ( (updated & 1) != 0 )
                return;
              if ( !v631 )
                goto LABEL_863;
              srcLineSprite__SetQaaScaleAnimQuick((srcLineSprite_o *)v631, 1, 0LL);
              srcLineSprite__SetQaaColorAnimQuick((srcLineSprite_o *)v631, 0, 0LL);
              v449 = v631[5].monitor;
              if ( !v449 )
                goto LABEL_863;
            }
            v632 = 2;
            goto LABEL_749;
          case 205:
            v450 = this->fields.IsMapModel;
            v451 = *v102;
            updated = System_Int32__Parse(v108->fields.param, 0LL);
            if ( !v451 )
              goto LABEL_863;
            if ( v450 )
            {
              v452 = (UnityEngine_Object_o *)QuestAfterAction__GetMapComponent_object_(
                                               v451,
                                               1,
                                               updated,
                                               this,
                                               (const MethodInfo_2EC8D20 *)Method_QuestAfterAction_GetMapComponent_ModelLineComponent___);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              updated = UnityEngine_Object__op_Equality(v452, 0LL, 0LL);
              if ( (updated & 1) != 0 )
                return;
              if ( !v452 )
                goto LABEL_863;
              ModelLineComponent__SetQuestAfterActionScaleAnim_33534228((ModelLineComponent_o *)v452, 1, 0.0, v453);
              ModelLineComponent__SetQuestAfterActionColorAnim_33534704((ModelLineComponent_o *)v452, 1, 0.0, v454);
              v449 = v452[3].klass;
              if ( !v449 )
                goto LABEL_863;
            }
            else
            {
              v633 = (UnityEngine_Object_o *)QuestAfterAction__GetMapComponent_object_(
                                               v451,
                                               1,
                                               updated,
                                               this,
                                               (const MethodInfo_2EC8D20 *)Method_QuestAfterAction_GetMapComponent_srcLineSprite___);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              updated = UnityEngine_Object__op_Equality(v633, 0LL, 0LL);
              if ( (updated & 1) != 0 )
                return;
              if ( !v633 )
                goto LABEL_863;
              srcLineSprite__SetQaaScaleAnimQuick((srcLineSprite_o *)v633, 1, 0LL);
              srcLineSprite__SetQaaColorAnimQuick((srcLineSprite_o *)v633, 1, 0LL);
              v449 = v633[5].monitor;
              if ( !v449 )
                goto LABEL_863;
            }
            v632 = 1;
LABEL_749:
            v449[4] = v632;
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
            v334 = updated;
            if ( *(int *)(updated + 24) <= 0 )
              goto LABEL_330;
            v335 = System_Int32__Parse(*(System_String_o **)(updated + 32), 0LL);
            if ( v335 < 1 )
              goto LABEL_330;
            v338 = v335;
            v339 = 0.5;
            if ( *(int *)(v334 + 24) > 1 )
            {
              v340 = System_Int32__Parse(*(System_String_o **)(v334 + 40), 0LL);
              if ( *(int *)(v334 + 24) >= 3 )
                v339 = System_Single__Parse(*(System_String_o **)(v334 + 48), 0LL) * 0.001;
            }
            else
            {
              v340 = 15;
            }
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            if ( !byte_49F76BD )
            {
              sub_1B640C8(&TerminalSceneComponent_TypeInfo, v336);
              byte_49F76BD = 1;
            }
            updated = (__int64)TerminalSceneComponent_TypeInfo;
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
              updated = (__int64)TerminalSceneComponent_TypeInfo;
            }
            v670 = **(_QWORD **)(updated + 184);
            if ( !v670 )
              goto LABEL_863;
            v671 = *(ScrTerminalMap_o **)(v670 + 264);
            v672 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v336, v337);
            System_Action___ctor(
              v672,
              (Il2CppObject *)v98,
              Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__18__,
              0LL);
            if ( !v671 )
              goto LABEL_863;
            ScrTerminalMap__RequestMapMove_34183908(v671, v338, v339, v340, v672, 0LL);
            return;
        }
    }
    v687 = v681;
    System_Action___ctor(v681, (Il2CppObject *)v98, *v682, 0LL);
    if ( !v677 )
      goto LABEL_863;
    v716 = v700;
    v710 = size;
    v404 = sec;
    v403 = v677;
    v405 = v561;
LABEL_856:
    v406 = v687;
    goto LABEL_857;
  }
  if ( id <= 604 )
  {
    if ( id > 540 )
    {
      switch ( id )
      {
        case 600:
          v128 = (System_String_o *)StringLiteral_1/*""*/;
          v129 = System_String__Concat_61375396((System_String_o *)StringLiteral_10771/*"QUEST_AFTER_ACTION_MESSAGE_"*/, v108->fields.param, 0LL);
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v130 = LocalizationManager__Get(v129, 0LL);
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v134 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v132, v133);
          System_Action___ctor(
            v134,
            (Il2CppObject *)v98,
            Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__36__,
            0LL);
          if ( !Instance )
            goto LABEL_863;
          CommonUI__OpenNotificationDialog(
            (CommonUI_o *)Instance,
            v128,
            v130,
            v134,
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
          v276 = (System_String_o *)StringLiteral_1/*""*/;
          updated = sub_1B64170(string___TypeInfo, 1LL);
          if ( !updated )
            goto LABEL_863;
          v279 = (System_String_array *)updated;
          if ( !*(_DWORD *)(updated + 24) )
            goto LABEL_864;
          v280 = StringLiteral_89/*"\r\n"*/;
          *(_QWORD *)(updated + 32) = StringLiteral_89/*"\r\n"*/;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(updated + 32), v280, v277, v278);
          updated = (__int64)v108->fields.param;
          if ( !updated )
            goto LABEL_863;
          updated = (__int64)System_String__Split_61401620((System_String_o *)updated, v279, 0, 0LL);
          if ( !updated )
            goto LABEL_863;
          v281 = *(_DWORD *)(updated + 24);
          if ( v281 <= 0 )
            goto LABEL_330;
          v282 = *(System_String_o **)(updated + 32);
          if ( v281 == 1 )
          {
            v283 = *(System_String_o **)(updated + 32);
            v282 = v276;
          }
          else
          {
            v283 = *(System_String_o **)(updated + 40);
          }
          v554 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v557 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v555, v556);
          System_Action___ctor(
            v557,
            (Il2CppObject *)v98,
            Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__37__,
            0LL);
          if ( !v554 )
            goto LABEL_863;
          CommonUI__OpenNotificationDialog(
            (CommonUI_o *)v554,
            v282,
            v283,
            v557,
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
          v284 = (System_String_o *)StringLiteral_1/*""*/;
          v285 = System_String__Concat_61375396((System_String_o *)StringLiteral_10771/*"QUEST_AFTER_ACTION_MESSAGE_"*/, v108->fields.param, 0LL);
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v286 = LocalizationManager__Get(v285, 0LL);
          v287 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v290 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v288, v289);
          System_Action___ctor(
            v290,
            (Il2CppObject *)v98,
            Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__38__,
            0LL);
          if ( !v287 )
            goto LABEL_863;
          onClickOkSeKind = 0;
          goto LABEL_636;
        case 603:
          v291 = (System_String_o *)StringLiteral_1/*""*/;
          updated = sub_1B64170(string___TypeInfo, 1LL);
          if ( !updated )
            goto LABEL_863;
          v294 = (System_String_array *)updated;
          if ( !*(_DWORD *)(updated + 24) )
            goto LABEL_864;
          v295 = StringLiteral_89/*"\r\n"*/;
          *(_QWORD *)(updated + 32) = StringLiteral_89/*"\r\n"*/;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(updated + 32), v295, v292, v293);
          updated = (__int64)v108->fields.param;
          if ( !updated )
            goto LABEL_863;
          updated = (__int64)System_String__Split_61401620((System_String_o *)updated, v294, 0, 0LL);
          if ( !updated )
            goto LABEL_863;
          v296 = *(_DWORD *)(updated + 24);
          if ( v296 <= 0 )
            goto LABEL_330;
          v284 = *(System_String_o **)(updated + 32);
          if ( v296 == 1 )
          {
            v286 = *(System_String_o **)(updated + 32);
            v284 = v291;
          }
          else
          {
            v286 = *(System_String_o **)(updated + 40);
          }
          v287 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v290 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v558, v559);
          System_Action___ctor(
            v290,
            (Il2CppObject *)v98,
            Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__39__,
            0LL);
          if ( !v287 )
            goto LABEL_863;
          onClickOkSeKind = 1;
LABEL_636:
          CommonUI__OpenNotificationDialog_30346252(
            (CommonUI_o *)v287,
            v284,
            v286,
            v290,
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
          v297 = (System_String_o *)StringLiteral_1/*""*/;
          v298 = System_String__Concat_61375396((System_String_o *)StringLiteral_10771/*"QUEST_AFTER_ACTION_MESSAGE_"*/, v108->fields.param, 0LL);
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v299 = LocalizationManager__Get(v298, 0LL);
          v300 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v303 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v301, v302);
          System_Action___ctor(
            v303,
            (Il2CppObject *)v98,
            Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__40__,
            0LL);
          if ( !v300 )
            goto LABEL_863;
          CommonUI__OpenNotificationDialog_30346252(
            (CommonUI_o *)v300,
            v297,
            v299,
            v303,
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
          v217 = *(_QWORD *)(updated + 24);
          if ( v217 )
          {
            if ( !(_DWORD)v217 )
              goto LABEL_864;
            updated = System_Int32__Parse(*(System_String_o **)(updated + 32), 0LL);
            v218 = *v102;
            if ( !*v102 )
              goto LABEL_863;
            TitleInfoCtrlCallback_k__BackingField = v218->fields._TitleInfoCtrlCallback_k__BackingField;
            if ( (int)updated >= 1 )
            {
              if ( !TitleInfoCtrlCallback_k__BackingField )
                goto LABEL_863;
              QuestAfterAction_TitleInfoControlCallback__Start(
                v218->fields._TitleInfoCtrlCallback_k__BackingField,
                0LL,
                v216);
              goto LABEL_18;
            }
          }
          else
          {
            if ( !*v102 )
              goto LABEL_863;
            TitleInfoCtrlCallback_k__BackingField = (*v102)->fields._TitleInfoCtrlCallback_k__BackingField;
          }
          v455 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v107, v216);
          System_Action___ctor(v455, (Il2CppObject *)this, (intptr_t)this->klass->vtable._15_onEnd.methodPtr, 0LL);
          if ( !TitleInfoCtrlCallback_k__BackingField )
            goto LABEL_863;
          QuestAfterAction_TitleInfoControlCallback__Start(TitleInfoCtrlCallback_k__BackingField, v455, v456);
          return;
      }
    }
    if ( id == 530 )
    {
      v220 = System_Int32__Parse(v108->fields.param, 0LL);
      updated = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !updated )
        goto LABEL_863;
      updated = (__int64)DataManager__GetMasterData_object_(
                           (DataManager_o *)updated,
                           (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_QuestMaster___);
      if ( !updated )
        goto LABEL_863;
      v221 = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)updated,
               v220,
               (const MethodInfo_30D3EA4 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
      updated = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_36EC45C *)Method_SingletonTemplate_QuestTree__get_Instance__);
      if ( !updated )
        goto LABEL_863;
      updated = (__int64)QuestTree__GetQuestInfo((QuestTree_o *)updated, v220, 0LL);
      if ( !updated )
        goto LABEL_863;
      v223 = updated;
      if ( *(_DWORD *)(updated + 32) == 1 )
      {
        if ( !v221 )
          goto LABEL_863;
        if ( QuestEntity__HasFlag((QuestEntity_o *)v221, 2LL, 0LL) )
        {
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          if ( !byte_49F9049 )
          {
            sub_1B640C8(&TerminalPramsManager_TypeInfo, v224);
            byte_49F9049 = 1;
          }
          v225 = TerminalPramsManager_TypeInfo;
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            v225 = TerminalPramsManager_TypeInfo;
          }
          v225->static_fields->_QuestId_k__BackingField = v220;
          v226 = *(_DWORD *)(v223 + 44);
          if ( !byte_49F904D )
          {
            sub_1B640C8(&TerminalPramsManager_TypeInfo, v224);
            v225 = TerminalPramsManager_TypeInfo;
            byte_49F904D = 1;
          }
          if ( !v225->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v225);
            v225 = TerminalPramsManager_TypeInfo;
          }
          v225->static_fields->_PhaseCnt_k__BackingField = v226;
          updated = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_36EC45C *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
          v229 = (clsQuestCheck_o *)updated;
          v230 = QuestAfterAction_StateMain___c_TypeInfo;
          if ( !QuestAfterAction_StateMain___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(QuestAfterAction_StateMain___c_TypeInfo);
            v230 = QuestAfterAction_StateMain___c_TypeInfo;
          }
          _9__16_33 = v230->static_fields->__9__16_33;
          if ( !_9__16_33 )
          {
            if ( !v230->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v230);
              v230 = QuestAfterAction_StateMain___c_TypeInfo;
            }
            v232 = (Il2CppObject *)v230->static_fields->__9;
            _9__16_33 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v227, v228);
            System_Action___ctor(_9__16_33, v232, Method_QuestAfterAction_StateMain___c__UpdateAnim_b__16_33__, 0LL);
            v233 = QuestAfterAction_StateMain___c_TypeInfo->static_fields;
            v233->__9__16_33 = _9__16_33;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)&v233->__9__16_33, (int32_t)_9__16_33, v234, v235);
          }
          if ( !v229 )
            goto LABEL_863;
          clsQuestCheck__PlayQuestStartAction(v229, _9__16_33, 0LL);
        }
      }
      else
      {
        QuestAfterAction_StateMain__ForceEndAnim(this, 1, v222);
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
    v150 = updated;
    if ( !*(_DWORD *)(updated + 24) )
LABEL_864:
      sub_1B6432C(updated, v107);
    v152 = System_Int32__Parse(*(System_String_o **)(updated + 32), 0LL);
    if ( *(int *)(v150 + 24) < 2 )
    {
      v153 = -1;
    }
    else
    {
      v153 = System_Int32__Parse(*(System_String_o **)(v150 + 40), 0LL);
      if ( *(int *)(v150 + 24) >= 3 )
      {
        v154 = System_Int32__Parse(*(System_String_o **)(v150 + 48), 0LL);
LABEL_247:
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_49F7A3E )
        {
          sub_1B640C8(&TerminalPramsManager_TypeInfo, v151);
          byte_49F7A3E = 1;
        }
        v271 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v271 = TerminalPramsManager_TypeInfo;
        }
        v271->static_fields->_IsAutoResume_k__BackingField = 1;
        if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        if ( !byte_49F76BD )
        {
          sub_1B640C8(&TerminalSceneComponent_TypeInfo, v151);
          byte_49F76BD = 1;
        }
        updated = (__int64)TerminalSceneComponent_TypeInfo;
        if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          updated = (__int64)TerminalSceneComponent_TypeInfo;
        }
        v272 = **(_QWORD **)(updated + 184);
        if ( !v272 )
          goto LABEL_863;
        updated = *(_QWORD *)(v272 + 264);
        if ( !updated )
          goto LABEL_863;
        if ( !ScrTerminalMap__RequestMapChange((ScrTerminalMap_o *)updated, v152, v153, v154, 0LL) )
        {
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          if ( !byte_49F7A3E )
          {
            sub_1B640C8(&TerminalPramsManager_TypeInfo, v273);
            byte_49F7A3E = 1;
          }
          v275 = TerminalPramsManager_TypeInfo;
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            v275 = TerminalPramsManager_TypeInfo;
          }
          v275->static_fields->_IsAutoResume_k__BackingField = 0;
          goto LABEL_18;
        }
        ((void (__fastcall *)(QuestAfterAction_StateMain_o *, Il2CppMethodPointer))this->klass->vtable._14_EndAnim.method)(
          this,
          this->klass->vtable._15_onEnd.methodPtr);
        updated = (__int64)*v102;
        if ( !*v102 )
          goto LABEL_863;
        QuestAfterAction__SetState((QuestAfterAction_o *)updated, 0, v274);
        return;
      }
    }
    v154 = -1;
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
          v139 = Method_QuestAfterAction_StateMain_UpdateAnim__;
          if ( (*((_BYTE *)Method_QuestAfterAction_StateMain_UpdateAnim__ + 83) & 2) != 0 )
            v139 = (_QWORD *)sub_1B640E0(Method_QuestAfterAction_StateMain_UpdateAnim__);
          v140 = (System_Reflection_MethodBase_o *)sub_1B640AC(v139, v139[4]);
          OverwriteAssetSoundName__PlaySe(v140, param, 0LL);
          goto LABEL_18;
        }
        return;
      }
      v262 = *v102;
      if ( !*v102 )
        goto LABEL_863;
      updated = (__int64)v262->fields.svtVoices;
      if ( !updated )
        goto LABEL_863;
      if ( System_Collections_Generic_Dictionary_int__object___TryGetValue(
             (System_Collections_Generic_Dictionary_int__object__o *)updated,
             v262->fields.commandIdx,
             &value,
             (const MethodInfo_3125110 *)Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__TryGetValue__) )
      {
        updated = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
        if ( !updated )
          goto LABEL_863;
        AutomatedAction__TerminateMissionAction((AutomatedAction_o *)updated, 0LL);
        if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        if ( !byte_49F76BD )
        {
          sub_1B640C8(&TerminalSceneComponent_TypeInfo, v263);
          byte_49F76BD = 1;
        }
        updated = (__int64)TerminalSceneComponent_TypeInfo;
        if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          updated = (__int64)TerminalSceneComponent_TypeInfo;
        }
        v264 = **(_QWORD **)(updated + 184);
        if ( !v264 )
          goto LABEL_863;
        if ( !*(_QWORD *)(v264 + 456) )
          goto LABEL_236;
        if ( !*(_DWORD *)(updated + 224) )
          j_il2cpp_runtime_class_init_0(updated);
        if ( !byte_49F76BD )
        {
          sub_1B640C8(&TerminalSceneComponent_TypeInfo, v263);
          byte_49F76BD = 1;
        }
        updated = (__int64)TerminalSceneComponent_TypeInfo;
        if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          updated = (__int64)TerminalSceneComponent_TypeInfo;
        }
        v265 = **(_QWORD **)(updated + 184);
        if ( !v265 )
          goto LABEL_863;
        v266 = *(_QWORD *)(v265 + 456);
        if ( !v266 )
          goto LABEL_863;
        updated = *(unsigned int *)(v266 + 48);
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
          v457 = (System_String_o *)value[1].monitor;
          if ( !SoundManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
          SoundManager__playVoice(v457, 0LL);
        }
        else
        {
          updated = (__int64)ServantVoiceEntity__getVoiceAssetName_39436496(updated, 0LL);
          if ( !value )
            goto LABEL_863;
          v267 = (System_String_o *)updated;
          v268 = (System_String_o *)value[1].monitor;
          v269 = SeManager_TypeInfo;
          if ( !SeManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
            v269 = SeManager_TypeInfo;
          }
          DEFAULT_VOLUME = v269->static_fields->DEFAULT_VOLUME;
          if ( !SoundManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
          SoundManager__playVoice_38387180(v267, v268, DEFAULT_VOLUME, 0LL, 0LL);
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
    v257 = updated;
    if ( *(_DWORD *)(updated + 24) )
    {
      v260 = System_Int32__Parse(*(System_String_o **)(updated + 32), 0LL);
      if ( *(int *)(v257 + 24) >= 2 )
        v261 = System_Int32__Parse(*(System_String_o **)(v257 + 40), 0LL) + 1;
      else
        v261 = 0;
      v315 = (SceneJumpInfo_o *)sub_1B64314(SceneJumpInfo_TypeInfo, v258, v259);
      SceneJumpInfo___ctor_38274804(v315, (System_String_o *)StringLiteral_1/*""*/, v260, v261, 0LL);
      updated = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      if ( !updated )
        goto LABEL_863;
      AvalonSceneManager__transitionScene((AvalonSceneManager_o *)updated, 72, 1, (Il2CppObject *)v315, 0LL);
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
      if ( !*v102 )
        goto LABEL_863;
      (*v102)->fields.isRequestedStopBgm = 1;
      goto LABEL_18;
    case 851:
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      if ( !byte_49F76BD )
      {
        sub_1B640C8(&TerminalSceneComponent_TypeInfo, v114);
        byte_49F76BD = 1;
      }
      v236 = TerminalSceneComponent_TypeInfo;
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        v236 = TerminalSceneComponent_TypeInfo;
      }
      v237 = v236->static_fields->mInstance;
      updated = (__int64)QuestAfterAction_Command__GetBgmName(v108, v114);
      if ( !v237 )
        goto LABEL_863;
      TerminalSceneComponent__playBgm(v237, (System_String_o *)updated, 0LL);
      if ( !*v102 )
        goto LABEL_863;
      (*v102)->fields.isRequestedStopBgm = 0;
      goto LABEL_18;
    case 900:
      v117 = (float)System_Int32__Parse(v108->fields.param, 0LL) / 1000.0;
      if ( v117 <= 0.0 )
        goto LABEL_18;
      this->fields.waitTime = v117;
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
  struct QuestAfterAction_o *v7; // x8
  __int64 v8; // x1
  struct TerminalSceneComponent_o *mInstance; // x8

  if ( (byte_49F9349 & 1) == 0 )
  {
    sub_1B640C8(&TerminalSceneComponent_TypeInfo, that);
    byte_49F9349 = 1;
  }
  this->fields.that = that;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)that, (int32_t)method, v3);
  v7 = this->fields.that;
  if ( !v7 )
    goto LABEL_14;
  screenCollider = (TerminalSceneComponent_c *)v7->fields.screenCollider;
  if ( !screenCollider )
    goto LABEL_14;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)screenCollider, 1, 0LL);
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_49F76BD )
  {
    sub_1B640C8(&TerminalSceneComponent_TypeInfo, v8);
    byte_49F76BD = 1;
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
    sub_1B64324(screenCollider);
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
    sub_1B64324(this);
  return that->fields.commandBuf;
}


int32_t __fastcall QuestAfterAction_StateMain__get_CommandIndex(
        QuestAfterAction_StateMain_o *this,
        const MethodInfo *method)
{
  struct QuestAfterAction_o *that; // x8

  that = this->fields.that;
  if ( !that )
    sub_1B64324(this);
  return that->fields.commandIdx;
}


UnityEngine_GameObject_o *__fastcall QuestAfterAction_StateMain__get_SubGimmickRoot(
        QuestAfterAction_StateMain_o *this,
        const MethodInfo *method)
{
  TerminalSceneComponent_c *v2; // x0
  struct TerminalSceneComponent_o *mInstance; // x8
  struct ScrTerminalMap_o *mTerminalMap; // x8

  if ( (byte_49F9348 & 1) == 0 )
  {
    sub_1B640C8(&TerminalSceneComponent_TypeInfo, method);
    byte_49F9348 = 1;
  }
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_49F76BD )
  {
    sub_1B640C8(&TerminalSceneComponent_TypeInfo, method);
    byte_49F76BD = 1;
  }
  v2 = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v2 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = v2->static_fields->mInstance;
  if ( !mInstance || (mTerminalMap = mInstance->fields.mTerminalMap) == 0LL )
    sub_1B64324(v2);
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
  const MethodInfo *v9; // x1

  if ( (byte_49F934B & 1) == 0 )
  {
    sub_1B640C8(&TerminalSceneComponent_TypeInfo, deleteKey);
    sub_1B640C8(&StringLiteral_16640/*"afterActionBk"*/, v5);
    byte_49F934B = 1;
  }
  if ( deleteKey )
    UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_16640/*"afterActionBk"*/, 0LL);
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_49F76BD )
  {
    sub_1B640C8(&TerminalSceneComponent_TypeInfo, deleteKey);
    byte_49F76BD = 1;
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
    sub_1B64324(mInstance);
  }
  QuestAfterAction__OnEnd((QuestAfterAction_o *)mInstance, v9);
}


void __fastcall QuestAfterAction_StateMain__set_CommandIndex(
        QuestAfterAction_StateMain_o *this,
        int32_t value,
        const MethodInfo *method)
{
  struct QuestAfterAction_o *that; // x8

  that = this->fields.that;
  if ( !that )
    sub_1B64324(this);
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
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49F93A8 & 1) == 0 )
  {
    sub_1B640C8(&QuestAfterAction_StateMain___c_TypeInfo, v1);
    byte_49F93A8 = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(QuestAfterAction_StateMain___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  QuestAfterAction_StateMain___c_TypeInfo->static_fields->__9 = (struct QuestAfterAction_StateMain___c_o *)v3;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)QuestAfterAction_StateMain___c_TypeInfo->static_fields,
    (int32_t)v3,
    v4,
    v5);
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
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  TerminalPramsManager_c *v7; // x0
  int32_t WarId_k__BackingField; // w19
  int32_t QuestId_k__BackingField; // w20
  QuestAfterAction_StateMain___c_c *v10; // x8
  int32_t PhaseCnt_k__BackingField; // w23
  ScriptManager_CallbackFunc_o *_9__16_34; // x21
  Il2CppObject *v13; // x22
  struct QuestAfterAction_StateMain___c_StaticFields *static_fields; // x0
  int32_t v15; // w2
  int32_t v16; // w3

  if ( (byte_49F93A9 & 1) == 0 )
  {
    sub_1B640C8(&ScriptManager_CallbackFunc_TypeInfo, method);
    sub_1B640C8(&ScriptManager_TypeInfo, v3);
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v4);
    sub_1B640C8(&Method_QuestAfterAction_StateMain___c__UpdateAnim_b__16_34__, v5);
    sub_1B640C8(&QuestAfterAction_StateMain___c_TypeInfo, v6);
    byte_49F93A9 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_49F9048 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, method);
    byte_49F9048 = 1;
  }
  v7 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v7 = TerminalPramsManager_TypeInfo;
  }
  WarId_k__BackingField = v7->static_fields->_WarId_k__BackingField;
  if ( !byte_49F9045 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, method);
    v7 = TerminalPramsManager_TypeInfo;
    byte_49F9045 = 1;
  }
  if ( !v7->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v7);
    v7 = TerminalPramsManager_TypeInfo;
  }
  QuestId_k__BackingField = v7->static_fields->_QuestId_k__BackingField;
  if ( !byte_49F9050 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, method);
    v7 = TerminalPramsManager_TypeInfo;
    byte_49F9050 = 1;
  }
  if ( !v7->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v7);
    v7 = TerminalPramsManager_TypeInfo;
  }
  v10 = QuestAfterAction_StateMain___c_TypeInfo;
  PhaseCnt_k__BackingField = v7->static_fields->_PhaseCnt_k__BackingField;
  if ( !QuestAfterAction_StateMain___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestAfterAction_StateMain___c_TypeInfo);
    v10 = QuestAfterAction_StateMain___c_TypeInfo;
  }
  _9__16_34 = v10->static_fields->__9__16_34;
  if ( !_9__16_34 )
  {
    if ( !v10->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v10);
      v10 = QuestAfterAction_StateMain___c_TypeInfo;
    }
    v13 = (Il2CppObject *)v10->static_fields->__9;
    _9__16_34 = (ScriptManager_CallbackFunc_o *)sub_1B64314(ScriptManager_CallbackFunc_TypeInfo, method, v2);
    ScriptManager_CallbackFunc___ctor(_9__16_34, v13, Method_QuestAfterAction_StateMain___c__UpdateAnim_b__16_34__, 0LL);
    static_fields = QuestAfterAction_StateMain___c_TypeInfo->static_fields;
    static_fields->__9__16_34 = _9__16_34;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__16_34, (int32_t)_9__16_34, v15, v16);
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

  if ( (byte_49F93AA & 1) == 0 )
  {
    sub_1B640C8(&Method_NetworkManager_getRequest_BattleScenarioRequest___, isExit);
    sub_1B640C8(&NetworkManager_TypeInfo, v3);
    sub_1B640C8(&NetworkManager_ResultCallbackFunc_TypeInfo, v4);
    sub_1B640C8(&ScriptManager_TypeInfo, v5);
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v6);
    sub_1B640C8(&Method_QuestAfterAction_StateMain___c__UpdateAnim_b__16_35__, v7);
    sub_1B640C8(&QuestAfterAction_StateMain___c_TypeInfo, v8);
    byte_49F93AA = 1;
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
    _9__16_35 = (NetworkManager_ResultCallbackFunc_o *)sub_1B64314(
                                                         NetworkManager_ResultCallbackFunc_TypeInfo,
                                                         isExit,
                                                         method);
    NetworkManager_ResultCallbackFunc___ctor(
      _9__16_35,
      v11,
      Method_QuestAfterAction_StateMain___c__UpdateAnim_b__16_35__,
      0LL);
    static_fields = QuestAfterAction_StateMain___c_TypeInfo->static_fields;
    static_fields->__9__16_35 = _9__16_35;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__16_35, (int32_t)_9__16_35, v13, v14);
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     _9__16_35,
                     (const MethodInfo_2EBA9D0 *)Method_NetworkManager_getRequest_BattleScenarioRequest___);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_49F9045 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v15);
    byte_49F9045 = 1;
  }
  v17 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v17 = TerminalPramsManager_TypeInfo;
  }
  QuestId_k__BackingField = v17->static_fields->_QuestId_k__BackingField;
  if ( !byte_49F9050 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v15);
    v17 = TerminalPramsManager_TypeInfo;
    byte_49F9050 = 1;
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
    sub_1B64324(SelectRouteArray);
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

  if ( (byte_49F93AB & 1) == 0 )
  {
    sub_1B640C8(&Method_JsonManager_DeserializeArray_BattleResultComponent_resultData___, jsonstr);
    sub_1B640C8(&JsonManager_TypeInfo, v4);
    sub_1B640C8(&ScriptManager_TypeInfo, v5);
    sub_1B640C8(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v6);
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v7);
    sub_1B640C8(&StringLiteral_16640/*"afterActionBk"*/, v8);
    sub_1B640C8(&StringLiteral_15744/*"["*/, v9);
    sub_1B640C8(&StringLiteral_16000/*"]"*/, v10);
    byte_49F93AB = 1;
  }
  v11 = (Il2CppObject *)System_String__Concat_61386656(
                          (System_String_o *)StringLiteral_15744/*"["*/,
                          jsonstr,
                          (System_String_o *)StringLiteral_16000/*"]"*/,
                          0LL);
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v12 = JsonManager__DeserializeArray_object_(
          v11,
          (const MethodInfo_2E9EEC0 *)Method_JsonManager_DeserializeArray_BattleResultComponent_resultData___);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_16640/*"afterActionBk"*/, 0LL);
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  ScriptManager__ClearSelectRouteArray(0LL);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  TerminalPramsManager__ReceiveQuestEndResultInfo((BattleResultComponent_resultData_array *)v12, 1, 0LL);
  if ( !byte_49F7A3E )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v13);
    byte_49F7A3E = 1;
  }
  v14 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v14 = TerminalPramsManager_TypeInfo;
  }
  v14->static_fields->_IsAutoResume_k__BackingField = 1;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1B64324(0LL);
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
    sub_1B64324(0LL);
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
    sub_1B64324(0LL);
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
    sub_1B64324(0LL);
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
    sub_1B64324(0LL);
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
    sub_1B64324(0LL);
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
    sub_1B64324(0LL);
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
    sub_1B64324(0LL);
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
    sub_1B64324(0LL);
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
    sub_1B64324(0LL);
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
    sub_1B64324(0LL);
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
    sub_1B64324(0LL);
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
    sub_1B64324(0LL);
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
    sub_1B64324(_4__this);
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
    sub_1B64324(0LL);
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
    sub_1B64324(0LL);
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
    sub_1B64324(0LL);
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
    sub_1B64324(0LL);
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
    sub_1B64324(0LL);
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
    sub_1B64324(0LL);
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
    sub_1B64324(spot);
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
    sub_1B64324(this);
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
    sub_1B64324(this);
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
    sub_1B64324(this);
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
    sub_1B64324(this);
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
    sub_1B64324(this);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x19
  UnityEngine_Component_o *mapGimmick; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  UnityEngine_Component_o *v12; // x22
  Il2CppObject *v13; // x0
  UnityEngine_Color_o **v14; // x21
  int32_t v15; // w2
  int32_t v16; // w3
  __int64 v17; // x1
  struct System_String_array *paramsStr; // x8
  struct System_String_array *v19; // x8
  UnityEngine_Color_o *v20; // x20
  float v21; // s0
  UITweener_o *v22; // x20
  __int64 v23; // x1
  __int64 v24; // x2
  EventDelegate_Callback_o *v25; // x21
  UnityEngine_Color_o color; // [xsp+10h] [xbp-40h] BYREF

  if ( (byte_49F93AC & 1) == 0 )
  {
    sub_1B640C8(&EventDelegate_Callback_TypeInfo, method);
    sub_1B640C8(&Method_UnityEngine_GameObject_AddComponent_TweenColor___, v4);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponentInChildren_UISprite___, v5);
    sub_1B640C8(&Method_QuestAfterAction_StateMain___c__DisplayClass16_14__UpdateAnim_b__28__, v6);
    sub_1B640C8(&QuestAfterAction_StateMain___c__DisplayClass16_14_TypeInfo, v7);
    byte_49F93AC = 1;
  }
  *(_QWORD *)&color.fields.r = 0LL;
  *(_QWORD *)&color.fields.b = 0LL;
  v8 = sub_1B64314(QuestAfterAction_StateMain___c__DisplayClass16_14_TypeInfo, method, v2);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8 )
    goto LABEL_18;
  *(_QWORD *)(v8 + 24) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v8 + 24), (int32_t)this, v10, v11);
  mapGimmick = (UnityEngine_Component_o *)this->fields.mapGimmick;
  if ( !mapGimmick )
    goto LABEL_18;
  mapGimmick = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mapGimmick, 0LL);
  if ( !mapGimmick )
    goto LABEL_18;
  mapGimmick = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponentInChildren_object_(
                                            (UnityEngine_GameObject_o *)mapGimmick,
                                            (const MethodInfo_2E8813C *)Method_UnityEngine_GameObject_GetComponentInChildren_UISprite___);
  if ( !mapGimmick )
    goto LABEL_18;
  v12 = mapGimmick;
  mapGimmick = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mapGimmick, 0LL);
  if ( !mapGimmick )
    goto LABEL_18;
  v13 = UnityEngine_GameObject__AddComponent_object_(
          (UnityEngine_GameObject_o *)mapGimmick,
          (const MethodInfo_2E87DF0 *)Method_UnityEngine_GameObject_AddComponent_TweenColor___);
  *(_QWORD *)(v8 + 16) = v13;
  v14 = (UnityEngine_Color_o **)(v8 + 16);
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v8 + 16), (int32_t)v13, v15, v16);
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
    sub_1B64324(mapGimmick);
  }
  if ( v19->max_length <= 2 )
LABEL_19:
    sub_1B6432C(mapGimmick, v17);
  v20 = *v14;
  v21 = System_Single__Parse(v19->m_Items[2], 0LL);
  if ( !v20 )
    goto LABEL_18;
  v20[3].fields.b = v21;
  mapGimmick = (UnityEngine_Component_o *)*v14;
  if ( !*v14 )
    goto LABEL_18;
  UITweener__PlayForward((UITweener_o *)mapGimmick, 0LL);
  v22 = *(UITweener_o **)(v8 + 16);
  v25 = (EventDelegate_Callback_o *)sub_1B64314(EventDelegate_Callback_TypeInfo, v23, v24);
  EventDelegate_Callback___ctor(
    v25,
    (Il2CppObject *)v8,
    Method_QuestAfterAction_StateMain___c__DisplayClass16_14__UpdateAnim_b__28__,
    0LL);
  if ( !v22 )
    goto LABEL_18;
  UITweener__SetOnFinished(v22, v25, 0LL);
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
  struct QuestAfterAction_StateMain___c__DisplayClass16_13_o *CS___8__locals14; // x8
  struct QuestAfterAction_StateMain___c__DisplayClass16_0_o *CS___8__locals13; // x8

  if ( (byte_49F93AD & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    byte_49F93AD = 1;
  }
  tween = (UnityEngine_Object_o *)this->fields.tween;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_69127736(tween, 0LL);
  CS___8__locals14 = this->fields.CS___8__locals14;
  if ( !CS___8__locals14
    || (CS___8__locals13 = CS___8__locals14->fields.CS___8__locals13) == 0LL
    || (_4__this = CS___8__locals13->fields.__4__this) == 0LL )
  {
    sub_1B64324(_4__this);
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
    sub_1B64324(this);
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
    sub_1B64324(this);
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
    sub_1B64324(spot);
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
    sub_1B64324(spot);
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
    sub_1B64324(this);
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
    sub_1B64324(this);
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
    sub_1B64324(this);
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
    sub_1B64324(this);
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
    sub_1B64324(this);
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
    sub_1B64324(this);
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
  sub_1B6406C(p_end, 0, v2, v3);
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
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)startCallback, (int32_t)method, v3);
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
  sub_1B6406C((ServantStatusBattleListViewItem_o *)p_end, (int32_t)endCallback, (int32_t)method, v3);
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
  sub_1B6406C((ServantStatusBattleListViewItem_o *)v6, (int32_t)vName, v7, v8);
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
  QuestAfterAction_Command_o *v27; // x20
  int32_t CommandType; // w21
  int32_t CommandTargetId; // w2
  int32_t v30; // w2
  int32_t v31; // w3
  int32_t v32; // w2
  int32_t v33; // w3
  bool result; // w0
  QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__74_o *v35; // [xsp+18h] [xbp-38h]

  v2 = this;
  v35 = this;
  if ( (byte_49F93B1 & 1) == 0 )
  {
    sub_1B640C8(&System_Collections_Generic_IEnumerable_QuestAfterAction_Command__TypeInfo, method);
    sub_1B640C8(&System_Collections_Generic_IEnumerator_QuestAfterAction_Command__TypeInfo, v3);
    this = (QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__74_o *)sub_1B640C8(
                                                                                    &System_Collections_IEnumerator_TypeInfo,
                                                                                    v4);
    byte_49F93B1 = 1;
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
      sub_1B64324(this);
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
      p_method = sub_1BB60A8(
                   commandEnumerable,
                   System_Collections_Generic_IEnumerable_QuestAfterAction_Command__TypeInfo,
                   0LL);
    }
    v12 = (*(__int64 (__fastcall **)(struct System_Collections_Generic_IEnumerable_QuestAfterAction_Command__o *, _QWORD))p_method)(
            commandEnumerable,
            *(_QWORD *)(p_method + 8));
    v35->fields.__7__wrap1 = (struct System_Collections_Generic_IEnumerator_QuestAfterAction_Command__o *)v12;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v35->fields.__7__wrap1, v12, v13, v14);
    v2 = v35;
  }
  _7__wrap1 = v2->fields.__7__wrap1;
  v2->fields.__1__state = -3;
  if ( !_7__wrap1 )
LABEL_32:
    sub_1B64324(this);
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
      v19 = sub_1BB60A8(_7__wrap1, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(struct System_Collections_Generic_IEnumerator_QuestAfterAction_Command__o *, _QWORD))v19)(
            _7__wrap1,
            *(_QWORD *)(v19 + 8)) & 1) == 0 )
    {
      QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__74____m__Finally1(v35, v20);
      v35->fields.__7__wrap1 = 0LL;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&v35->fields.__7__wrap1, 0, v32, v33);
      return 0;
    }
    v21 = v35->fields.__7__wrap1;
    if ( !v21 )
      sub_1B64324(v35);
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
      v25 = sub_1BB60A8(
              v35->fields.__7__wrap1,
              System_Collections_Generic_IEnumerator_QuestAfterAction_Command__TypeInfo,
              0LL);
    }
    v26 = (*(__int64 (__fastcall **)(struct System_Collections_Generic_IEnumerator_QuestAfterAction_Command__o *, _QWORD))v25)(
            v21,
            *(_QWORD *)(v25 + 8));
    v27 = (QuestAfterAction_Command_o *)v26;
    if ( !v26 )
      sub_1B64324(0LL);
    if ( !_4__this )
      sub_1B64324(v26);
    CommandType = QuestAfterAction__GetCommandType(_4__this, *(_DWORD *)(v26 + 16), 0LL);
    CommandTargetId = QuestAfterAction__ExtractCommandTargetId(v27, 0LL);
    this = (QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__74_o *)QuestAfterAction__IsExistCommand(
                                                                                    _4__this,
                                                                                    CommandType,
                                                                                    CommandTargetId,
                                                                                    0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
      break;
    _7__wrap1 = v35->fields.__7__wrap1;
    if ( !_7__wrap1 )
      goto LABEL_32;
  }
  v35->fields.__2__current = v27;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v35->fields.__2__current, (int32_t)v27, v30, v31);
  result = 1;
  v35->fields.__1__state = 1;
  return result;
}


System_Collections_Generic_IEnumerator_QuestAfterAction_Command__o *__fastcall QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__74__System_Collections_Generic_IEnumerable_QuestAfterAction_Command__GetEnumerator(
        QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__74_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  int32_t l__initialThreadId; // w20
  int32_t v5; // w3
  QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__74_o *v6; // x20
  struct QuestAfterAction_o *_4__this; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  struct System_Collections_Generic_IEnumerable_QuestAfterAction_Command__o *_3__commandEnumerable; // x1

  if ( (byte_49F93B3 & 1) == 0 )
  {
    sub_1B640C8(&QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__74_TypeInfo, method);
    byte_49F93B3 = 1;
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
    v6 = (QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__74_o *)sub_1B64314(
                                                                                  QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__74_TypeInfo,
                                                                                  method,
                                                                                  v2);
    System_Object___ctor((Il2CppObject *)v6, 0LL);
    v6->fields.__1__state = 0;
    v6->fields.__l__initialThreadId = System_Environment__get_CurrentManagedThreadId(0LL);
    _4__this = this->fields.__4__this;
    v6->fields.__4__this = _4__this;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v6->fields.__4__this, (int32_t)_4__this, v8, v9);
  }
  _3__commandEnumerable = this->fields.__3__commandEnumerable;
  v6->fields.commandEnumerable = _3__commandEnumerable;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&v6->fields.commandEnumerable,
    (int32_t)_3__commandEnumerable,
    v2,
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
  __int64 v3; // x1
  __int64 v4; // x2
  System_NotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v2 = sub_1B640DC(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_1B64314(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_1B640DC(&Method_QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__74_System_Collections_IEnumerator_Reset__);
  sub_1B641F0(v5, v6);
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

  if ( (byte_49F93B2 & 1) == 0 )
  {
    sub_1B640C8(&System_IDisposable_TypeInfo, method);
    byte_49F93B2 = 1;
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
      p_method = sub_1BB60A8(_7__wrap1, System_IDisposable_TypeInfo, 0LL);
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
      sub_1B64324(this);
    if ( _4__this->fields.isKeepingMainStateButFinished )
    {
      this->fields.__2__current = 0LL;
      p__2__current = &this->fields.__2__current;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.__2__current, 0, v2, v3);
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
  __int64 v3; // x1
  __int64 v4; // x2
  System_NotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v2 = sub_1B640DC(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_1B64314(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_1B640DC(&Method_QuestAfterAction__WaitWhileMainStateFinished_d__78_System_Collections_IEnumerator_Reset__);
  sub_1B641F0(v5, v6);
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

  if ( (byte_49F93AE & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo__RemoveAt__, method);
    byte_49F93AE = 1;
  }
  svtVInfos = (System_Collections_Generic_List_object__o *)this->fields.svtVInfos;
  if ( !svtVInfos
    || (System_Collections_Generic_List_object___RemoveAt(
          svtVInfos,
          0,
          (const MethodInfo_34AEF48 *)Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo__RemoveAt__),
        (svtVInfos = (System_Collections_Generic_List_object__o *)this->fields.__4__this) == 0LL) )
  {
    sub_1B64324(svtVInfos);
  }
  QuestAfterAction__LoadVoice_33550552(
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

  if ( (byte_49F93AF & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, method);
    byte_49F93AF = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_36EC45C *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    sub_1B64324(0LL);
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

  if ( (byte_49F93B0 & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, method);
    byte_49F93B0 = 1;
  }
  _4__this = (char *)this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_8;
  *((_QWORD *)_4__this + 21) = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)_4__this + 1, 0, v2, v3);
  _4__this = (char *)this->fields.__4__this;
  if ( !_4__this
    || (*((_QWORD *)_4__this + 9) = 0LL,
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(_4__this + 72), 0, v6, v7),
        (_4__this = (char *)SingletonTemplate_object___get_Instance((const MethodInfo_36EC45C *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__)) == 0LL)
    || (MissionNotifyManager__EndPause((MissionNotifyManager_o *)_4__this, 0LL),
        (_4__this = (char *)this->fields.__4__this) == 0LL) )
  {
LABEL_8:
    sub_1B64324(_4__this);
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
    sub_1B64324(0LL);
  QuestAfterAction__SetState(_4__this, 2, 0LL);
}