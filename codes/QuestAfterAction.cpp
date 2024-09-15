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
  Il2CppObject *v12; // x20
  int32_t v13; // w2
  int32_t v14; // w3
  System_Collections_Generic_Dictionary_TKey__TValue__o *v15; // x20
  int32_t v16; // w2
  int32_t v17; // w3
  System_Collections_Generic_Dictionary_int__object__o *v18; // x20
  int32_t v19; // w2
  int32_t v20; // w3

  if ( (byte_4A2AE2A & 1) == 0 )
  {
    sub_1B761C0(&BlankEarthQuestAfterAction_TypeInfo, method);
    sub_1B761C0(&Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo___ctor__, v3);
    sub_1B761C0(&Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int____ctor__, v4);
    sub_1B761C0(&System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___TypeInfo, v5);
    sub_1B761C0(&System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__TypeInfo, v6);
    sub_1B761C0(&Method_SingletonMonoBehaviour_QuestAfterAction___ctor__, v7);
    sub_1B761C0(&QuestAfterAction_TitleInfoControlCallback_TypeInfo, v8);
    byte_4A2AE2A = 1;
  }
  v9 = (Il2CppObject *)sub_1B7640C(QuestAfterAction_TitleInfoControlCallback_TypeInfo);
  System_Object___ctor(v9, 0LL);
  this->fields._TitleInfoCtrlCallback_k__BackingField = (struct QuestAfterAction_TitleInfoControlCallback_o *)v9;
  sub_1B76164(
    (ServantStatusBattleListViewItem_o *)&this->fields._TitleInfoCtrlCallback_k__BackingField,
    (int32_t)v9,
    v10,
    v11);
  v12 = (Il2CppObject *)sub_1B7640C(BlankEarthQuestAfterAction_TypeInfo);
  System_Object___ctor(v12, 0LL);
  this->fields._BlankEarthQuestAfterAction_k__BackingField = (struct BlankEarthQuestAfterAction_o *)v12;
  sub_1B76164(
    (ServantStatusBattleListViewItem_o *)&this->fields._BlankEarthQuestAfterAction_k__BackingField,
    (int32_t)v12,
    v13,
    v14);
  v15 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1B7640C(System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___TypeInfo);
  System_Collections_Generic_Dictionary_Int32Enum__object____ctor(
    v15,
    (const MethodInfo_317E6D4 *)Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int____ctor__);
  this->fields.commandTypeIds = (struct System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___o *)v15;
  sub_1B76164((ServantStatusBattleListViewItem_o *)&this->fields.commandTypeIds, (int32_t)v15, v16, v17);
  v18 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1B7640C(System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v18,
    (const MethodInfo_314EEA0 *)Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo___ctor__);
  this->fields.svtVoices = (struct System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__o *)v18;
  sub_1B76164((ServantStatusBattleListViewItem_o *)&this->fields.svtVoices, (int32_t)v18, v19, v20);
  this->fields.MapMoveBeforeFocusSpotId = -1;
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_3712994 *)Method_SingletonMonoBehaviour_QuestAfterAction___ctor__);
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
  sub_1B76164(p_endAct, 0, v2, v3);
  ActionExtensions__Call(endAct, 0LL);
}


bool __fastcall QuestAfterAction__CheckChangeBlankEarth(QuestAfterAction_o *this, const MethodInfo *method)
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
  Il2CppObject *Instance; // x20
  __int64 v13; // x0
  Il2CppObject *MasterData_object; // x21
  int32_t v15; // w22
  _QWORD *p_image; // x21
  Il2CppObject *v17; // x21
  int32_t v18; // w22
  TerminalPramsManager_c *v19; // x0
  int32_t v20; // w19
  __int64 v21; // x8
  unsigned int *v22; // x19
  __int64 v23; // x23
  unsigned __int64 v24; // x24
  __int64 v25; // x25
  int i; // w26
  __int64 v27; // x20
  int32_t v28; // w2
  int32_t v29; // w3
  __int64 v30; // x1
  int32_t v31; // w2
  int32_t v32; // w3
  __int64 v34; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4A2AE10 & 1) == 0 )
  {
    sub_1B761C0(&QuestAfterAction_Command___TypeInfo, method);
    sub_1B761C0(&QuestAfterAction_Command_TypeInfo, v2);
    sub_1B761C0(&Method_DataManager_GetMasterData_QuestMaster___, v3);
    sub_1B761C0(&Method_DataManager_GetMasterData_QuestPhaseDetailAddMaster___, v4);
    sub_1B761C0(&Method_DataManager_GetMasterData_QuestPhaseDetailMaster___, v5);
    sub_1B761C0(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__, v6);
    sub_1B761C0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    sub_1B761C0(&TerminalPramsManager_TypeInfo, v8);
    sub_1B761C0(&StringLiteral_16703/*"afterActionBk"*/, v9);
    sub_1B761C0(&StringLiteral_1266/*"1"*/, v10);
    byte_4A2AE10 = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A2AE71 )
  {
    sub_1B761C0(&TerminalPramsManager_TypeInfo, v11);
    byte_4A2AE71 = 1;
  }
  v13 = (__int64)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v13 = (__int64)TerminalPramsManager_TypeInfo;
  }
  if ( *(_BYTE *)(*(_QWORD *)(v13 + 184) + 102LL) )
  {
    if ( !Instance )
      goto LABEL_75;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2E62408 *)Method_DataManager_GetMasterData_QuestPhaseDetailAddMaster___);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4A2ABB5 )
    {
      sub_1B761C0(&TerminalPramsManager_TypeInfo, v11);
      byte_4A2ABB5 = 1;
    }
    v13 = (__int64)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v13 = (__int64)TerminalPramsManager_TypeInfo;
    }
    v15 = *(_DWORD *)(*(_QWORD *)(v13 + 184) + 20LL);
    if ( !byte_4A2ABC0 )
    {
      sub_1B761C0(&TerminalPramsManager_TypeInfo, v11);
      v13 = (__int64)TerminalPramsManager_TypeInfo;
      byte_4A2ABC0 = 1;
    }
    if ( !*(_DWORD *)(v13 + 224) )
    {
      j_il2cpp_runtime_class_init_0(v13);
      v13 = (__int64)TerminalPramsManager_TypeInfo;
    }
    if ( !MasterData_object )
      goto LABEL_75;
    p_image = QuestPhaseDetailAddMaster__GetAfterAction(
                (QuestPhaseDetailAddMaster_o *)MasterData_object,
                v15,
                *(_DWORD *)(*(_QWORD *)(v13 + 184) + 24LL) + 1,
                0LL);
    if ( p_image )
      goto LABEL_57;
    v17 = DataManager__GetMasterData_object_(
            (DataManager_o *)Instance,
            (const MethodInfo_2E62408 *)Method_DataManager_GetMasterData_QuestPhaseDetailMaster___);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4A2ABB5 )
    {
      sub_1B761C0(&TerminalPramsManager_TypeInfo, v11);
      byte_4A2ABB5 = 1;
    }
    v13 = (__int64)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v13 = (__int64)TerminalPramsManager_TypeInfo;
    }
    v18 = *(_DWORD *)(*(_QWORD *)(v13 + 184) + 20LL);
    if ( !byte_4A2ABC0 )
    {
      sub_1B761C0(&TerminalPramsManager_TypeInfo, v11);
      v13 = (__int64)TerminalPramsManager_TypeInfo;
      byte_4A2ABC0 = 1;
    }
    if ( !*(_DWORD *)(v13 + 224) )
    {
      j_il2cpp_runtime_class_init_0(v13);
      v13 = (__int64)TerminalPramsManager_TypeInfo;
    }
    if ( !v17 )
LABEL_75:
      sub_1B7641C(v13, v11);
    p_image = QuestPhaseDetailMaster__GetAfterAction(
                (QuestPhaseDetailMaster_o *)v17,
                v18,
                *(_DWORD *)(*(_QWORD *)(v13 + 184) + 24LL) + 1,
                0LL);
    if ( p_image )
      goto LABEL_57;
    v13 = (__int64)TerminalPramsManager_TypeInfo;
  }
  if ( !*(_DWORD *)(v13 + 224) )
    j_il2cpp_runtime_class_init_0(v13);
  if ( !byte_4A2AE74 )
  {
    sub_1B761C0(&TerminalPramsManager_TypeInfo, v11);
    byte_4A2AE74 = 1;
  }
  v19 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v19 = TerminalPramsManager_TypeInfo;
  }
  if ( !v19->static_fields->_IsQuestClear_k__BackingField )
    goto LABEL_71;
  if ( !v19->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v19);
  if ( TerminalPramsManager__get_Debug_IsQuestReleaseAll(0LL) )
    goto LABEL_71;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A2ABB5 )
  {
    sub_1B761C0(&TerminalPramsManager_TypeInfo, v11);
    byte_4A2ABB5 = 1;
  }
  v13 = (__int64)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v13 = (__int64)TerminalPramsManager_TypeInfo;
  }
  if ( !Instance )
    goto LABEL_75;
  v20 = *(_DWORD *)(*(_QWORD *)(v13 + 184) + 20LL);
  v13 = (__int64)DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_2E62408 *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !v13 )
    goto LABEL_75;
  v13 = DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)v13,
          &entity,
          v20,
          (const MethodInfo_30FF7D4 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
  if ( (v13 & 1) == 0 )
    goto LABEL_71;
  if ( !entity )
    goto LABEL_75;
  p_image = &entity[6].klass->_1.image;
  if ( !p_image )
  {
LABEL_71:
    UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_16703/*"afterActionBk"*/, 0LL);
    return 0;
  }
LABEL_57:
  v21 = p_image[3];
  if ( (int)v21 < 2 || (v21 & 1) != 0 )
    goto LABEL_71;
  v13 = sub_1B76268(QuestAfterAction_Command___TypeInfo, (unsigned int)v21 >> 1);
  if ( !v13 )
    goto LABEL_75;
  v22 = (unsigned int *)v13;
  if ( *(int *)(v13 + 24) < 1 )
    return 0;
  v23 = 0LL;
  v24 = 0LL;
  v25 = v13 + 32;
  for ( i = 1; ; i += 2 )
  {
    v27 = sub_1B7640C(QuestAfterAction_Command_TypeInfo);
    System_Object___ctor((Il2CppObject *)v27, 0LL);
    if ( (unsigned int)(i - 1) >= *((_DWORD *)p_image + 6) )
      goto LABEL_74;
    v13 = System_Int32__Parse((System_String_o *)p_image[i + 3], 0LL);
    if ( !v27 )
      goto LABEL_75;
    *(_DWORD *)(v27 + 16) = v13;
    if ( (unsigned int)i >= *((_DWORD *)p_image + 6) )
LABEL_74:
      sub_1B76424(v13, v11);
    v30 = p_image[i + 4];
    *(_QWORD *)(v27 + 24) = v30;
    sub_1B76164((ServantStatusBattleListViewItem_o *)(v27 + 24), v30, v28, v29);
    if ( *(_DWORD *)(v27 + 16) == 701
      && System_String__op_Equality(*(System_String_o **)(v27 + 24), (System_String_o *)StringLiteral_1266/*"1"*/, 0LL) )
    {
      break;
    }
    v13 = sub_1B762FC(v27, *(_QWORD *)(*(_QWORD *)v22 + 64LL));
    if ( !v13 )
    {
      v34 = sub_1B76440();
      sub_1B762E8(v34, 0LL);
    }
    if ( v24 >= v22[6] )
      goto LABEL_74;
    *(_QWORD *)(v25 + 8 * v24) = v27;
    sub_1B76164((ServantStatusBattleListViewItem_o *)(v25 + v23), v27, v31, v32);
    ++v24;
    v23 += 8LL;
    if ( (__int64)v24 >= (int)v22[6] )
      return 0;
  }
  return 1;
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
  int32_t MasterKind_k__BackingField; // w24
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
  int32_t buckets_high; // w23
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
  if ( (byte_4A2AE0F & 1) == 0 )
  {
    sub_1B761C0(&BalanceConfig_TypeInfo, isBeforeAction);
    sub_1B761C0(&bool_TypeInfo, v5);
    sub_1B761C0(&QuestAfterAction_Command___TypeInfo, v6);
    sub_1B761C0(&QuestAfterAction_Command_TypeInfo, v7);
    sub_1B761C0(&Method_DataManager_GetMasterData_EventMissionMaster___, v8);
    sub_1B761C0(&Method_DataManager_GetMasterData_QuestMaster___, v9);
    sub_1B761C0(&Method_DataManager_GetMasterData_QuestPhaseDetailAddMaster___, v10);
    sub_1B761C0(&Method_DataManager_GetMasterData_QuestPhaseDetailMaster___, v11);
    sub_1B761C0(&Method_DataManager_GetMasterData_WarMaster___, v12);
    sub_1B761C0(&Method_DataManager_GetMaster_BlankEarthSpotMaster___, v13);
    sub_1B761C0(&Method_DataManager_GetMaster_QuestBehaviorMaster___, v14);
    sub_1B761C0(&Method_DataManager_GetMaster_QuestMaster___, v15);
    sub_1B761C0(&Method_DataManager_GetMaster_ShopMaster___, v16);
    sub_1B761C0(&Method_DataManager_GetMaster_WarMaster___, v17);
    sub_1B761C0(&DataManager_TypeInfo, v18);
    sub_1B761C0(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v19);
    sub_1B761C0(&Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__, v20);
    sub_1B761C0(&Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__GetEntity__, v21);
    sub_1B761C0(&Method_DataMasterBase_BlankEarthSpotMaster__BlankEarthSpotEntity__int__TryGetEntity__, v22);
    sub_1B761C0(&Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__Add__, v23);
    sub_1B761C0(&Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___get_Item__, v24);
    sub_1B761C0(&Method_System_Linq_Enumerable_Any_KeyValuePair_int__QuestAfterAction_VoiceInfo____, v25);
    sub_1B761C0(&Method_System_Collections_Generic_List_int__Add__, v26);
    sub_1B761C0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v27);
    sub_1B761C0(&TerminalPramsManager_TypeInfo, v28);
    sub_1B761C0(&TerminalSceneComponent_TypeInfo, v29);
    sub_1B761C0(&QuestAfterAction_VoiceInfo_TypeInfo, v30);
    this = (QuestAfterAction_o *)sub_1B761C0(&StringLiteral_16703/*"afterActionBk"*/, v31);
    byte_4A2AE0F = 1;
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
           (const MethodInfo_2E6F0E4 *)Method_System_Linq_Enumerable_Any_KeyValuePair_int__QuestAfterAction_VoiceInfo____) )
    {
      QuestAfterAction__releaseVoice(v4, v32);
    }
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4A2ABB5 )
    {
      sub_1B761C0(&TerminalPramsManager_TypeInfo, v32);
      byte_4A2ABB5 = 1;
    }
    v34 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v34 = TerminalPramsManager_TypeInfo;
    }
    QuestId_k__BackingField = v34->static_fields->_QuestId_k__BackingField;
    if ( !byte_4A2ABC0 )
    {
      sub_1B761C0(&TerminalPramsManager_TypeInfo, v32);
      v34 = TerminalPramsManager_TypeInfo;
      byte_4A2ABC0 = 1;
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
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4A2915D )
  {
    sub_1B761C0(&TerminalSceneComponent_TypeInfo, v37);
    byte_4A2915D = 1;
  }
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalSceneComponent_TypeInfo;
  }
  klass = Master_object[2].fields._lookup->klass;
  if ( !klass )
    goto LABEL_294;
  if ( klass->vtable._9_Add.method )
  {
    if ( !LODWORD(Master_object[3].monitor) )
      j_il2cpp_runtime_class_init_0(Master_object);
    if ( !byte_4A2915D )
    {
      sub_1B761C0(&TerminalSceneComponent_TypeInfo, v37);
      byte_4A2915D = 1;
    }
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalSceneComponent_TypeInfo;
    }
    v41 = Master_object[2].fields._lookup->klass;
    if ( !v41 )
      goto LABEL_294;
    v42 = v41->vtable._9_Add.method;
    if ( !v42 )
      goto LABEL_294;
    invoker_method_high = HIDWORD(v42->invoker_method);
    if ( !byte_4A2915D )
    {
      sub_1B761C0(&TerminalSceneComponent_TypeInfo, v37);
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalSceneComponent_TypeInfo;
      byte_4A2915D = 1;
    }
    if ( !LODWORD(Master_object[3].monitor) )
    {
      j_il2cpp_runtime_class_init_0(Master_object);
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalSceneComponent_TypeInfo;
    }
    v44 = Master_object[2].fields._lookup->klass;
    if ( !v44 )
      goto LABEL_294;
    v45 = v44->vtable._9_Add.method;
    if ( !v45 )
      goto LABEL_294;
    invoker_method = (int32_t)v45->invoker_method;
    if ( invoker_method < 1 )
    {
      if ( invoker_method_high < 1 )
        goto LABEL_80;
      if ( !LODWORD(Master_object[3].monitor) )
        j_il2cpp_runtime_class_init_0(Master_object);
      if ( !byte_4A2915D )
      {
        sub_1B761C0(&TerminalSceneComponent_TypeInfo, v37);
        byte_4A2915D = 1;
      }
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalSceneComponent_TypeInfo;
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalSceneComponent_TypeInfo;
      }
      v50 = Master_object[2].fields._lookup->klass;
      if ( !v50 )
        goto LABEL_294;
      v51 = v50->vtable._9_Add.method;
      if ( !v51 )
        goto LABEL_294;
      v36 = (System_String_array *)v51->klass;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2E623B4 *)Method_DataManager_GetMaster_ShopMaster___);
      if ( !Master_object )
        goto LABEL_294;
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__int___GetEntity(
                                                                      Master_object,
                                                                      invoker_method_high,
                                                                      (const MethodInfo_30FF780 *)Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__);
      if ( !Master_object )
        goto LABEL_294;
      MasterName_k__BackingField = (int32_t)Master_object->fields._MasterName_k__BackingField;
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2E623B4 *)Method_DataManager_GetMaster_WarMaster___);
      if ( !Master_object )
        goto LABEL_294;
    }
    else
    {
      if ( !LODWORD(Master_object[3].monitor) )
        j_il2cpp_runtime_class_init_0(Master_object);
      if ( !byte_4A2915D )
      {
        sub_1B761C0(&TerminalSceneComponent_TypeInfo, v37);
        byte_4A2915D = 1;
      }
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalSceneComponent_TypeInfo;
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalSceneComponent_TypeInfo;
      }
      v47 = Master_object[2].fields._lookup->klass;
      if ( !v47 )
        goto LABEL_294;
      v48 = v47->vtable._9_Add.method;
      if ( !v48 )
        goto LABEL_294;
      if ( !Instance )
        goto LABEL_294;
      v36 = (System_String_array *)v48->klass;
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMasterData_object_(
                                                                      (DataManager_o *)Instance,
                                                                      (const MethodInfo_2E62408 *)Method_DataManager_GetMasterData_EventMissionMaster___);
      if ( !Master_object )
        goto LABEL_294;
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__int___GetEntity(
                                                                      Master_object,
                                                                      invoker_method,
                                                                      (const MethodInfo_30FF780 *)Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__GetEntity__);
      if ( !Master_object )
        goto LABEL_294;
      MasterName_k__BackingField = HIDWORD(Master_object->fields._MasterName_k__BackingField);
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMasterData_object_(
                                                                      (DataManager_o *)Instance,
                                                                      (const MethodInfo_2E62408 *)Method_DataManager_GetMasterData_WarMaster___);
      if ( !Master_object )
        goto LABEL_294;
    }
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)WarMaster__getByEventId(
                                                                    (WarMaster_o *)Master_object,
                                                                    MasterName_k__BackingField,
                                                                    0LL);
    if ( !Master_object )
      goto LABEL_294;
    MasterKind_k__BackingField = Master_object->fields._MasterKind_k__BackingField;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4A2ABBF )
    {
      sub_1B761C0(&TerminalPramsManager_TypeInfo, v37);
      byte_4A2ABBF = 1;
    }
    v53 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v53 = TerminalPramsManager_TypeInfo;
    }
    v53->static_fields->_WarId_k__BackingField = MasterKind_k__BackingField;
    if ( !byte_4A2915D )
    {
      sub_1B761C0(&TerminalSceneComponent_TypeInfo, v37);
      byte_4A2915D = 1;
    }
    v54 = TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      v54 = TerminalSceneComponent_TypeInfo;
    }
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)v54->static_fields->mInstance;
    if ( !Master_object )
      goto LABEL_294;
    TerminalSceneComponent__CallQuestInformationCloseAtAll((TerminalSceneComponent_o *)Master_object, 0, 0LL);
    if ( v36 )
      goto LABEL_211;
  }
LABEL_80:
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A2AE71 )
  {
    sub_1B761C0(&TerminalPramsManager_TypeInfo, v37);
    byte_4A2AE71 = 1;
  }
  v55 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v55 = TerminalPramsManager_TypeInfo;
  }
  if ( !v55->static_fields->_IsPhaseClear_k__BackingField
    && UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_16703/*"afterActionBk"*/, 0LL) )
  {
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)UnityEngine_PlayerPrefs__GetString_69245684(
                                                                    (System_String_o *)StringLiteral_16703/*"afterActionBk"*/,
                                                                    0LL);
    if ( !Master_object )
      goto LABEL_294;
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)System_String__Split(
                                                                    (System_String_o *)Master_object,
                                                                    0x2Cu,
                                                                    0,
                                                                    0LL);
    if ( !Master_object )
      goto LABEL_294;
    v56 = Master_object;
    if ( !LODWORD(Master_object->fields._MasterName_k__BackingField) )
      goto LABEL_383;
    v57 = System_Int32__Parse((System_String_o *)Master_object->fields.list, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4A2ABB9 )
    {
      sub_1B761C0(&TerminalPramsManager_TypeInfo, v37);
      byte_4A2ABB9 = 1;
    }
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
    }
    HIDWORD(Master_object[2].fields._lookup->fields._buckets) = v57;
    if ( LODWORD(v56->fields._MasterName_k__BackingField) <= 1 )
      goto LABEL_383;
    v58 = System_Int32__Parse((System_String_o *)v56->fields._lookup, 0LL);
    if ( !byte_4A2ABBD )
    {
      sub_1B761C0(&TerminalPramsManager_TypeInfo, v37);
      byte_4A2ABBD = 1;
    }
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
    }
    LODWORD(Master_object[2].fields._lookup->fields._entries) = v58;
    if ( LODWORD(v56->fields._MasterName_k__BackingField) <= 2 )
      goto LABEL_383;
    seriazlier = (System_String_o *)v56->fields.seriazlier;
    if ( !bool_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(bool_TypeInfo);
    v60 = System_Boolean__Parse(seriazlier, 0LL);
    if ( !byte_4A2AE72 )
    {
      sub_1B761C0(&TerminalPramsManager_TypeInfo, v37);
      byte_4A2AE72 = 1;
    }
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
    }
    BYTE5(Master_object[2].fields._lookup[1].fields._buckets) = v60;
    if ( LODWORD(v56->fields._MasterName_k__BackingField) <= 3 )
      goto LABEL_383;
    v61 = System_Boolean__Parse((System_String_o *)v56->fields.sb, 0LL);
    if ( !byte_4A2AE73 )
    {
      sub_1B761C0(&TerminalPramsManager_TypeInfo, v37);
      byte_4A2AE73 = 1;
    }
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
    }
    BYTE6(Master_object[2].fields._lookup[1].fields._buckets) = v61;
    if ( !byte_4A2AE74 )
    {
      sub_1B761C0(&TerminalPramsManager_TypeInfo, v37);
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
      byte_4A2AE74 = 1;
    }
    if ( !LODWORD(Master_object[3].monitor) )
    {
      j_il2cpp_runtime_class_init_0(Master_object);
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
    }
    if ( BYTE5(Master_object[2].fields._lookup[1].fields._buckets) )
    {
      if ( !Instance )
        goto LABEL_294;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_2E62408 *)Method_DataManager_GetMasterData_WarMaster___);
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4A2ABB5 )
      {
        sub_1B761C0(&TerminalPramsManager_TypeInfo, v37);
        byte_4A2ABB5 = 1;
      }
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
      }
      if ( !MasterData_object )
        goto LABEL_294;
      QuestId = WarMaster__getByLastQuestId(
                  (WarMaster_o *)MasterData_object,
                  HIDWORD(Master_object[2].fields._lookup->fields._buckets),
                  0LL);
      if ( QuestId )
      {
        v64 = QuestId;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_4A2AE75 )
        {
          sub_1B761C0(&TerminalPramsManager_TypeInfo, v37);
          byte_4A2AE75 = 1;
        }
        v65 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v65 = TerminalPramsManager_TypeInfo;
        }
        v65->static_fields->_IsWarClear_k__BackingField = 1;
        id = v64->fields.id;
        if ( !byte_4A2ABBF )
        {
          sub_1B761C0(&TerminalPramsManager_TypeInfo, v37);
          v65 = TerminalPramsManager_TypeInfo;
          byte_4A2ABBF = 1;
        }
        if ( !v65->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v65);
          v65 = TerminalPramsManager_TypeInfo;
        }
        v65->static_fields->_WarId_k__BackingField = id;
        v67 = TerminalPramsManager__CheckIsOrdealCallWarClear(v64, 0LL);
        if ( !byte_4A2AE76 )
        {
          sub_1B761C0(&TerminalPramsManager_TypeInfo, v37);
          byte_4A2AE76 = 1;
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
  if ( !byte_4A2AE77 )
  {
    sub_1B761C0(&TerminalPramsManager_TypeInfo, v37);
    byte_4A2AE77 = 1;
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
    if ( !byte_4A2AADB )
    {
      sub_1B761C0(&TerminalPramsManager_TypeInfo, v37);
      byte_4A2AADB = 1;
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
  if ( !byte_4A2AE71 )
  {
    sub_1B761C0(&TerminalPramsManager_TypeInfo, v37);
    byte_4A2AE71 = 1;
  }
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
  }
  if ( BYTE6(Master_object[2].fields._lookup[1].fields._buckets) )
  {
    if ( !Instance )
      goto LABEL_294;
    v70 = DataManager__GetMasterData_object_(
            (DataManager_o *)Instance,
            (const MethodInfo_2E62408 *)Method_DataManager_GetMasterData_QuestPhaseDetailAddMaster___);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4A2ABB5 )
    {
      sub_1B761C0(&TerminalPramsManager_TypeInfo, v37);
      byte_4A2ABB5 = 1;
    }
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
    }
    buckets_high = HIDWORD(Master_object[2].fields._lookup->fields._buckets);
    if ( !byte_4A2ABC0 )
    {
      sub_1B761C0(&TerminalPramsManager_TypeInfo, v37);
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
      byte_4A2ABC0 = 1;
    }
    if ( !LODWORD(Master_object[3].monitor) )
    {
      j_il2cpp_runtime_class_init_0(Master_object);
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
    }
    if ( !v70 )
      goto LABEL_294;
    v36 = QuestPhaseDetailAddMaster__GetAfterAction(
            (QuestPhaseDetailAddMaster_o *)v70,
            buckets_high,
            LODWORD(Master_object[2].fields._lookup->fields._entries) + 1,
            0LL);
    if ( v36 )
      goto LABEL_211;
    v72 = DataManager__GetMasterData_object_(
            (DataManager_o *)Instance,
            (const MethodInfo_2E62408 *)Method_DataManager_GetMasterData_QuestPhaseDetailMaster___);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4A2ABB5 )
    {
      sub_1B761C0(&TerminalPramsManager_TypeInfo, v37);
      byte_4A2ABB5 = 1;
    }
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
    }
    v73 = HIDWORD(Master_object[2].fields._lookup->fields._buckets);
    if ( !byte_4A2ABC0 )
    {
      sub_1B761C0(&TerminalPramsManager_TypeInfo, v37);
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
      byte_4A2ABC0 = 1;
    }
    if ( !LODWORD(Master_object[3].monitor) )
    {
      j_il2cpp_runtime_class_init_0(Master_object);
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
    }
    if ( !v72 )
      goto LABEL_294;
    v36 = QuestPhaseDetailMaster__GetAfterAction(
            (QuestPhaseDetailMaster_o *)v72,
            v73,
            LODWORD(Master_object[2].fields._lookup->fields._entries) + 1,
            0LL);
    if ( v36 )
      goto LABEL_211;
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
  }
  if ( !LODWORD(Master_object[3].monitor) )
    j_il2cpp_runtime_class_init_0(Master_object);
  if ( !byte_4A2AE74 )
  {
    sub_1B761C0(&TerminalPramsManager_TypeInfo, v37);
    byte_4A2AE74 = 1;
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
  if ( !byte_4A2ABB5 )
  {
    sub_1B761C0(&TerminalPramsManager_TypeInfo, v37);
    byte_4A2ABB5 = 1;
  }
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
  }
  if ( !Instance )
    goto LABEL_294;
  v75 = HIDWORD(Master_object[2].fields._lookup->fields._buckets);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMasterData_object_(
                                                                  (DataManager_o *)Instance,
                                                                  (const MethodInfo_2E62408 *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !Master_object )
    goto LABEL_294;
  v76 = DataMasterBase_object__object__int___GetEntity(
          Master_object,
          v75,
          (const MethodInfo_30FF780 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
  if ( v76 )
    v36 = (System_String_array *)v76[6].klass;
  else
LABEL_210:
    v36 = 0LL;
LABEL_211:
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v77 = DataManager__GetMaster_object_((const MethodInfo_2E623B4 *)Method_DataManager_GetMaster_QuestBehaviorMaster___);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A2ABB5 )
  {
    sub_1B761C0(&TerminalPramsManager_TypeInfo, v37);
    byte_4A2ABB5 = 1;
  }
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
  }
  v78 = HIDWORD(Master_object[2].fields._lookup->fields._buckets);
  if ( !byte_4A2ABC0 )
  {
    sub_1B761C0(&TerminalPramsManager_TypeInfo, v37);
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
    byte_4A2ABC0 = 1;
  }
  if ( !LODWORD(Master_object[3].monitor) )
  {
    j_il2cpp_runtime_class_init_0(Master_object);
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
  }
  if ( !v77 )
    goto LABEL_294;
  if ( QuestBehaviorMaster__IsOpenQuestBehaviorCond(
         (QuestBehaviorMaster_o *)v77,
         v78,
         LODWORD(Master_object[2].fields._lookup->fields._entries) + 1,
         7,
         0LL)
    || (IsOverwriteCommandNone = QuestAfterAction__IsOverwriteCommandNone(v36, v79), !v36)
    || IsOverwriteCommandNone
    || (v81 = *(_QWORD *)&v36->max_length, (int)v81 < 2)
    || (v81 & 1) != 0 )
  {
    UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_16703/*"afterActionBk"*/, 0LL);
    return;
  }
  v82 = sub_1B76268(QuestAfterAction_Command___TypeInfo, (unsigned int)v81 >> 1);
  v4->fields.commandBuf = (struct QuestAfterAction_Command_array *)v82;
  p_commandBuf = (unsigned int **)&v4->fields.commandBuf;
  sub_1B76164((ServantStatusBattleListViewItem_o *)&v4->fields.commandBuf, v82, v84, v85);
  commandBuf = (int *)v4->fields.commandBuf;
  if ( !commandBuf )
    goto LABEL_294;
  v87 = 0LL;
  v88 = 0;
  while ( (__int64)v87 < commandBuf[6] )
  {
    v89 = sub_1B7640C(QuestAfterAction_Command_TypeInfo);
    System_Object___ctor((Il2CppObject *)v89, 0LL);
    if ( v88 >= v36->max_length )
      goto LABEL_383;
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)System_Int32__Parse(v36->m_Items[v88], 0LL);
    if ( !v89 )
      goto LABEL_294;
    *(_DWORD *)(v89 + 16) = (_DWORD)Master_object;
    v92 = (int)v88 | 1LL;
    if ( (unsigned int)v92 >= v36->max_length )
      goto LABEL_383;
    v93 = v36->m_Items[v92];
    *(_QWORD *)(v89 + 24) = v93;
    v94 = (System_String_o **)(v89 + 24);
    sub_1B76164((ServantStatusBattleListViewItem_o *)(v89 + 24), (int32_t)v93, v90, v91);
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
        goto LABEL_294;
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)System_String__Split(
                                                                      (System_String_o *)Master_object,
                                                                      0x2Cu,
                                                                      0,
                                                                      0LL);
      if ( !Master_object )
        goto LABEL_294;
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
          v100 = sub_1B7640C(QuestAfterAction_VoiceInfo_TypeInfo);
          System_Object___ctor((Il2CppObject *)v100, 0LL);
          *(_DWORD *)(v100 + 16) = v135;
          *(_QWORD *)(v100 + 24) = v99;
          sub_1B76164((ServantStatusBattleListViewItem_o *)(v100 + 24), (int32_t)v99, v101, v102);
          if ( !svtVoices )
            goto LABEL_294;
          System_Collections_Generic_Dictionary_int__object___Add(
            svtVoices,
            v87,
            (Il2CppObject *)v100,
            (const MethodInfo_314F874 *)Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__Add__);
        }
      }
    }
    else
    {
      v4->fields.IsMoveToEventRewardShop = 1;
    }
    v103 = *(_DWORD *)(v89 + 16);
    if ( v103 <= 205 )
    {
      if ( (unsigned int)(v103 - 100) < 0xF && ((0x7C1Fu >> (v103 - 100)) & 1) != 0 )
      {
        v37 = 0LL;
      }
      else
      {
        if ( (unsigned int)(v103 - 200) > 5 )
          goto LABEL_277;
        v37 = 1LL;
      }
    }
    else if ( v103 <= 550 )
    {
      if ( (unsigned int)(v103 - 400) < 0xA )
      {
        v37 = 2LL;
      }
      else
      {
        if ( v103 != 550 )
          goto LABEL_277;
        v37 = 3LL;
      }
    }
    else
    {
      v104 = v103 - 1000;
      if ( v104 >= 0xD || ((0x1C07u >> v104) & 1) == 0 )
        goto LABEL_277;
      v37 = 4LL;
    }
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)v4->fields.commandTypeIds;
    if ( !Master_object )
      goto LABEL_294;
    Item = (System_Collections_Generic_List_int__o *)System_Collections_Generic_Dictionary_Int32Enum__object___get_Item(
                                                       (System_Collections_Generic_Dictionary_TKey__TValue__o *)Master_object,
                                                       v37,
                                                       (const MethodInfo_317F008 *)Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___get_Item__);
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)QuestAfterAction__ExtractCommandTargetId(
                                                                    (QuestAfterAction_Command_o *)v89,
                                                                    v106);
    if ( !Item )
      goto LABEL_294;
    items = Item->fields._items;
    v108 = Method_System_Collections_Generic_List_int__Add__;
    ++Item->fields._version;
    if ( !items )
      goto LABEL_294;
    size = Item->fields._size;
    v37 = (unsigned int)Master_object;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_int___AddWithResize(
        Item,
        (int32_t)Master_object,
        *(const MethodInfo_34BA5B0 **)(*(_QWORD *)(v108[4] + 192LL) + 112LL));
    }
    else
    {
      Item->fields._size = size + 1;
      items->m_Items[size + 1] = (int)Master_object;
    }
LABEL_277:
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
        goto LABEL_294;
      v112 = (System_String_c *)Master_object->fields._MasterName_k__BackingField;
      v113 = Master_object;
      if ( (int)v112 >= 1 )
      {
        v114 = 0LL;
        while ( v114 < (unsigned int)v112 )
        {
          Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)v4->fields.invalidMapGimmickIdList;
          if ( !Master_object )
            goto LABEL_294;
          v37 = *((unsigned int *)&v113->fields.list + v114);
          v115 = *(System_String_Fields *)&Master_object->fields._MasterKind_k__BackingField;
          v116 = Method_System_Collections_Generic_List_int__Add__;
          ++HIDWORD(Master_object->fields._MasterName_k__BackingField);
          if ( !*(_QWORD *)&v115 )
            goto LABEL_294;
          MasterName_k__BackingField_low = SLODWORD(Master_object->fields._MasterName_k__BackingField);
          if ( (unsigned int)MasterName_k__BackingField_low >= *(_DWORD *)(*(_QWORD *)&v115 + 24LL) )
          {
            System_Collections_Generic_List_int___AddWithResize(
              (System_Collections_Generic_List_int__o *)Master_object,
              v37,
              *(const MethodInfo_34BA5B0 **)(*(_QWORD *)(v116[4] + 192LL) + 112LL));
          }
          else
          {
            LODWORD(Master_object->fields._MasterName_k__BackingField) = MasterName_k__BackingField_low + 1;
            *(_DWORD *)(*(_QWORD *)&v115 + 4 * MasterName_k__BackingField_low + 32) = v37;
          }
          LODWORD(v112) = v113->fields._MasterName_k__BackingField;
          if ( (__int64)++v114 >= (int)v112 )
            goto LABEL_290;
        }
LABEL_383:
        sub_1B76424(Master_object, v37);
      }
    }
LABEL_290:
    v118 = *p_commandBuf;
    if ( !*p_commandBuf )
      goto LABEL_294;
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)sub_1B762FC(v89, *(_QWORD *)(*(_QWORD *)v118 + 64LL));
    if ( !Master_object )
    {
      v134 = sub_1B76440();
      sub_1B762E8(v134, 0LL);
    }
    if ( v87 >= v118[6] )
      goto LABEL_383;
    v121 = &v118[2 * v87];
    *((_QWORD *)v121 + 4) = v89;
    sub_1B76164((ServantStatusBattleListViewItem_o *)(v121 + 8), v89, v119, v120);
    commandBuf = (int *)*p_commandBuf;
    v88 += 2;
    ++v87;
    if ( !*p_commandBuf )
      goto LABEL_294;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A2AE71 )
  {
    sub_1B761C0(&TerminalPramsManager_TypeInfo, v37);
    byte_4A2AE71 = 1;
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
    v123 = DataManager__GetMaster_object_((const MethodInfo_2E623B4 *)Method_DataManager_GetMaster_QuestMaster___);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4A2ABB5 )
    {
      sub_1B761C0(&TerminalPramsManager_TypeInfo, v37);
      byte_4A2ABB5 = 1;
    }
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
    }
    if ( !v123 )
      goto LABEL_294;
    if ( QuestMaster__TryGetQuestEntity(
           (QuestMaster_o *)v123,
           &entity,
           HIDWORD(Master_object[2].fields._lookup->fields._buckets),
           0LL) )
    {
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4A2ABB8 )
      {
        sub_1B761C0(&TerminalPramsManager_TypeInfo, v37);
        byte_4A2ABB8 = 1;
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
        Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2E623B4 *)Method_DataManager_GetMaster_BlankEarthSpotMaster___);
        if ( entity && Master_object )
        {
          Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__int___TryGetEntity(
                                                                          Master_object,
                                                                          &v137,
                                                                          entity->fields.spotId,
                                                                          (const MethodInfo_30FF7D4 *)Method_DataMasterBase_BlankEarthSpotMaster__BlankEarthSpotEntity__int__TryGetEntity__);
          if ( ((unsigned __int8)Master_object & 1) == 0 )
            goto LABEL_334;
          if ( v137 )
          {
            v127 = (int32_t)v137[1].klass;
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            if ( !byte_4A2AE78 )
            {
              sub_1B761C0(&TerminalPramsManager_TypeInfo, v37);
              byte_4A2AE78 = 1;
            }
            v128 = TerminalPramsManager_TypeInfo;
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
              v128 = TerminalPramsManager_TypeInfo;
            }
            v128->static_fields->_BlankEarthAfterActionFocusSpotId_k__BackingField = v127;
            goto LABEL_334;
          }
        }
LABEL_294:
        sub_1B7641C(Master_object, v37);
      }
    }
  }
LABEL_334:
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A29488 )
  {
    sub_1B761C0(&TerminalPramsManager_TypeInfo, v37);
    byte_4A29488 = 1;
  }
  v129 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v129 = TerminalPramsManager_TypeInfo;
  }
  v129->static_fields->_IsAutoResume_k__BackingField = 1;
  if ( !byte_4A2ABBB )
  {
    sub_1B761C0(&TerminalPramsManager_TypeInfo, v37);
    v129 = TerminalPramsManager_TypeInfo;
    byte_4A2ABBB = 1;
  }
  if ( !v129->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v129);
    v129 = TerminalPramsManager_TypeInfo;
  }
  v129->static_fields->_DispState_k__BackingField = 2;
  if ( !byte_4A2ABB8 )
  {
    sub_1B761C0(&TerminalPramsManager_TypeInfo, v37);
    v129 = TerminalPramsManager_TypeInfo;
    byte_4A2ABB8 = 1;
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
    goto LABEL_387;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A2AADB )
  {
    sub_1B761C0(&TerminalPramsManager_TypeInfo, v37);
    byte_4A2AADB = 1;
  }
  v132 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v132 = TerminalPramsManager_TypeInfo;
  }
  if ( v132->static_fields->_IsOrdealCallWarClear_k__BackingField )
  {
LABEL_387:
    if ( !v132->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v132);
    if ( !byte_4A2AADC )
    {
      sub_1B761C0(&TerminalPramsManager_TypeInfo, v37);
      byte_4A2AADC = 1;
    }
    v132 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v132 = TerminalPramsManager_TypeInfo;
    }
    v132->static_fields->_BlankEarthSpotId_k__BackingField = 0;
    if ( !byte_4A2AADB )
    {
      sub_1B761C0(&TerminalPramsManager_TypeInfo, v37);
      v132 = TerminalPramsManager_TypeInfo;
      byte_4A2AADB = 1;
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
      if ( !byte_4A2ABBB )
      {
        sub_1B761C0(&TerminalPramsManager_TypeInfo, v37);
        byte_4A2ABBB = 1;
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
  if ( !byte_4A2ABBE )
  {
    sub_1B761C0(&TerminalPramsManager_TypeInfo, v37);
    byte_4A2ABBE = 1;
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

  if ( (byte_4A2AE0D & 1) == 0 )
  {
    sub_1B761C0(&StringLiteral_16703/*"afterActionBk"*/, v1);
    byte_4A2AE0D = 1;
  }
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_16703/*"afterActionBk"*/, 0LL);
}


int32_t __fastcall QuestAfterAction__ExtractCommandTargetId(
        QuestAfterAction_Command_o *command,
        const MethodInfo *method)
{
  QuestAfterAction_Command_o *v2; // x19
  QuestAfterAction_Command_c *param; // x8

  v2 = command;
  if ( (byte_4A2AE11 & 1) == 0 )
  {
    command = (QuestAfterAction_Command_o *)sub_1B761C0(&StringLiteral_868/*","*/, method);
    byte_4A2AE11 = 1;
  }
  if ( !v2 )
    goto LABEL_11;
  command = (QuestAfterAction_Command_o *)v2->fields.param;
  if ( !command )
    goto LABEL_11;
  command = (QuestAfterAction_Command_o *)System_String__Contains(
                                            (System_String_o *)command,
                                            (System_String_o *)StringLiteral_868/*","*/,
                                            0LL);
  param = (QuestAfterAction_Command_c *)v2->fields.param;
  if ( ((unsigned __int8)command & 1) == 0 )
    return System_Int32__Parse((System_String_o *)param, 0LL);
  if ( !param || (command = (QuestAfterAction_Command_o *)System_String__Split(v2->fields.param, 0x2Cu, 0, 0LL)) == 0LL )
LABEL_11:
    sub_1B7641C(command, method);
  if ( !LODWORD(command->fields.param) )
    sub_1B76424(command, method);
  param = command[1].klass;
  return System_Int32__Parse((System_String_o *)param, 0LL);
}


System_Collections_Generic_IEnumerable_QuestAfterAction_Command__o *__fastcall QuestAfterAction__FilterCommandsMainActionConflictsResolved(
        QuestAfterAction_o *this,
        System_Collections_Generic_IEnumerable_QuestAfterAction_Command__o *commandEnumerable,
        const MethodInfo *method)
{
  __int64 v5; // x21
  int32_t v6; // w2
  int32_t v7; // w3
  int32_t v8; // w2
  int32_t v9; // w3

  if ( (byte_4A2AE1E & 1) == 0 )
  {
    sub_1B761C0(&QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__78_TypeInfo, commandEnumerable);
    byte_4A2AE1E = 1;
  }
  v5 = sub_1B7640C(QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__78_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_DWORD *)(v5 + 16) = -2;
  *(_DWORD *)(v5 + 32) = System_Environment__get_CurrentManagedThreadId(0LL);
  *(_QWORD *)(v5 + 56) = this;
  sub_1B76164((ServantStatusBattleListViewItem_o *)(v5 + 56), (int32_t)this, v6, v7);
  *(_QWORD *)(v5 + 48) = commandEnumerable;
  sub_1B76164((ServantStatusBattleListViewItem_o *)(v5 + 48), (int32_t)commandEnumerable, v8, v9);
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

  if ( (byte_4A2AE12 & 1) == 0 )
  {
    sub_1B761C0(&Method_System_Array_Empty_QuestAfterAction_Command___, method);
    sub_1B761C0(&QuestAfterAction_Command___TypeInfo, v3);
    sub_1B761C0(&QuestAfterAction_Command_TypeInfo, v4);
    byte_4A2AE12 = 1;
  }
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)actionVals, 0LL);
  if ( (IsNullOrEmpty & 1) != 0 )
  {
    v7 = Method_System_Array_Empty_QuestAfterAction_Command___;
    v8 = *((_QWORD *)Method_System_Array_Empty_QuestAfterAction_Command___ + 7);
    if ( !v8 )
    {
      sub_1BC80F8(Method_System_Array_Empty_QuestAfterAction_Command___);
      v8 = v7[7];
    }
    v9 = *(_QWORD *)(v8 + 16);
    if ( (*(_BYTE *)(v9 + 309) & 1) == 0 )
      v9 = sub_1BC809C(v9);
    if ( !*(_DWORD *)(v9 + 224) )
      j_il2cpp_runtime_class_init_0(v9);
    v10 = *(_QWORD *)(v7[7] + 16LL);
    if ( (*(_BYTE *)(v10 + 309) & 1) == 0 )
      v10 = sub_1BC809C(v10);
    return **(QuestAfterAction_Command_array ***)(v10 + 184);
  }
  else
  {
    if ( !actionVals
      || (IsNullOrEmpty = sub_1B76268(
                            QuestAfterAction_Command___TypeInfo,
                            (unsigned int)((signed int)actionVals->max_length / 2))) == 0 )
    {
LABEL_25:
      sub_1B7641C(IsNullOrEmpty, v6);
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
        v16 = sub_1B7640C(QuestAfterAction_Command_TypeInfo);
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
        sub_1B76164((ServantStatusBattleListViewItem_o *)(v16 + 24), (int32_t)v19, v17, v18);
        IsNullOrEmpty = sub_1B762FC(v16, v11->obj.klass->_1.element_class);
        if ( !IsNullOrEmpty )
        {
          v23 = sub_1B76440();
          sub_1B762E8(v23, 0LL);
        }
        if ( v13 >= v11->max_length )
LABEL_24:
          sub_1B76424(IsNullOrEmpty, v6);
        *(_QWORD *)(v14 + 8 * v13) = v16;
        sub_1B76164((ServantStatusBattleListViewItem_o *)(v14 + v12), v16, v20, v21);
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

  if ( (byte_4A2AE29 & 1) == 0 )
  {
    sub_1B761C0(&Method_DataManager_GetMasterData_QuestMaster___, *(_QWORD *)&phase);
    sub_1B761C0(&Method_DataManager_GetMasterData_QuestPhaseDetailAddMaster___, v5);
    sub_1B761C0(&Method_DataManager_GetMasterData_QuestPhaseDetailMaster___, v6);
    sub_1B761C0(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v7);
    sub_1B761C0(&Method_System_Linq_Enumerable_Any_string___, v8);
    sub_1B761C0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    sub_1B761C0(&TerminalPramsManager_TypeInfo, v10);
    byte_4A2AE29 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_33;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2E62408 *)Method_DataManager_GetMasterData_QuestPhaseDetailAddMaster___);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A2ABB5 )
  {
    sub_1B761C0(&TerminalPramsManager_TypeInfo, v12);
    byte_4A2ABB5 = 1;
  }
  Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  }
  v14 = *(_DWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 20LL);
  if ( !byte_4A2ABC0 )
  {
    sub_1B761C0(&TerminalPramsManager_TypeInfo, v12);
    Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
    byte_4A2ABC0 = 1;
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
          *(_DWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 24LL) + 1,
          0LL);
  IsOverwriteCommandNone = QuestAfterAction__IsOverwriteCommandNone(v15, v16);
  result = 0LL;
  if ( IsOverwriteCommandNone )
    return result;
  result = v15;
  if ( v15 )
    return result;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_33;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E62408 *)Method_DataManager_GetMasterData_QuestPhaseDetailMaster___);
  if ( !Instance )
    goto LABEL_33;
  result = QuestPhaseDetailMaster__GetAfterAction((QuestPhaseDetailMaster_o *)Instance, questId, phase, 0LL);
  if ( result )
    return result;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_33;
  v19 = DataManager__GetMasterData_object_(
          Instance,
          (const MethodInfo_2E62408 *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A2ABB5 )
  {
    sub_1B761C0(&TerminalPramsManager_TypeInfo, v12);
    byte_4A2ABB5 = 1;
  }
  Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  }
  if ( !v19 )
LABEL_33:
    sub_1B7641C(Instance, v12);
  result = (System_String_array *)DataMasterBase_object__object__int___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)v19,
                                    *(_DWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 20LL),
                                    (const MethodInfo_30FF780 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
  if ( result )
  {
    v20 = result;
    if ( System_Linq_Enumerable__Any_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)result->m_Items[8],
           (const MethodInfo_2E6FDDC *)Method_System_Linq_Enumerable_Any_string___) )
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

  if ( (byte_4A2AE28 & 1) == 0 )
  {
    sub_1B761C0(&Method_DataManager_GetMasterData_QuestMaster___, *(_QWORD *)&phase);
    sub_1B761C0(&Method_DataManager_GetMasterData_QuestPhaseDetailAddMaster___, v5);
    sub_1B761C0(&Method_DataManager_GetMasterData_QuestPhaseDetailMaster___, v6);
    sub_1B761C0(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v7);
    sub_1B761C0(&Method_System_Linq_Enumerable_Any_string___, v8);
    sub_1B761C0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    sub_1B761C0(&TerminalPramsManager_TypeInfo, v10);
    byte_4A2AE28 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_33;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2E62408 *)Method_DataManager_GetMasterData_QuestPhaseDetailAddMaster___);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A2ABB5 )
  {
    sub_1B761C0(&TerminalPramsManager_TypeInfo, v12);
    byte_4A2ABB5 = 1;
  }
  Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  }
  v14 = *(_DWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 20LL);
  if ( !byte_4A2ABC0 )
  {
    sub_1B761C0(&TerminalPramsManager_TypeInfo, v12);
    Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
    byte_4A2ABC0 = 1;
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
          *(_DWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 24LL) + 1,
          0LL);
  IsOverwriteCommandNone = QuestAfterAction__IsOverwriteCommandNone(v15, v16);
  result = 0LL;
  if ( IsOverwriteCommandNone )
    return result;
  result = v15;
  if ( v15 )
    return result;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_33;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E62408 *)Method_DataManager_GetMasterData_QuestPhaseDetailMaster___);
  if ( !Instance )
    goto LABEL_33;
  result = QuestPhaseDetailMaster__GetBeforeAction((QuestPhaseDetailMaster_o *)Instance, questId, phase, 0LL);
  if ( result )
    return result;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_33;
  v19 = DataManager__GetMasterData_object_(
          Instance,
          (const MethodInfo_2E62408 *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A2ABB5 )
  {
    sub_1B761C0(&TerminalPramsManager_TypeInfo, v12);
    byte_4A2ABB5 = 1;
  }
  Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  }
  if ( !v19 )
LABEL_33:
    sub_1B7641C(Instance, v12);
  result = (System_String_array *)DataMasterBase_object__object__int___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)v19,
                                    *(_DWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 20LL),
                                    (const MethodInfo_30FF780 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
  if ( result )
  {
    v20 = result;
    if ( System_Linq_Enumerable__Any_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)result->m_Items[7],
           (const MethodInfo_2E6FDDC *)Method_System_Linq_Enumerable_Any_string___) )
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
        return dword_BE66B0[commandId - 1000];
      return -1;
    }
    if ( (unsigned int)(commandId - 400) >= 0xA )
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
        const MethodInfo_2EF2810 *method)
{
  UnityEngine_Object_o *MapGameObject; // x20
  _BOOL8 v11; // x0
  __int64 v12; // x1

  if ( !method->rgctx_data )
  {
    sub_1B761C0(&UnityEngine_Object_TypeInfo, *(_QWORD *)&comType);
    if ( !method->rgctx_data )
      sub_1BC80F8();
  }
  MapGameObject = (UnityEngine_Object_o *)QuestAfterAction__GetMapGameObject(this, comType, id, state, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v11 = UnityEngine_Object__op_Equality(MapGameObject, 0LL, 0LL);
  if ( v11 )
    return 0LL;
  if ( !MapGameObject )
    sub_1B7641C(v11, v12);
  return UnityEngine_GameObject__GetComponent_object_(
           (UnityEngine_GameObject_o *)MapGameObject,
           (const MethodInfo_2EB19B8 *)method->rgctx_data->_0_UnityEngine_GameObject_GetComponent_T_);
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
  const MethodInfo *v12; // x3

  v8 = this;
  if ( (byte_4A2AE24 & 1) == 0 )
  {
    sub_1B761C0(&UnityEngine_Object_TypeInfo, *(_QWORD *)&comType);
    this = (QuestAfterAction_o *)sub_1B761C0(&SrcSpotBasePrefab_TypeInfo, v9);
    byte_4A2AE24 = 1;
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
    this = (QuestAfterAction_o *)MapGimmickComponent__GetGobjName(id, 0LL);
    if ( !transform )
LABEL_40:
      sub_1B7641C(this, *(_QWORD *)&comType);
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
      QuestAfterAction__RequestMapChange(v8, comType, id, v12);
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

  if ( (byte_4A2AE13 & 1) == 0 )
  {
    sub_1B761C0(&Method_DataManager_GetMasterData_MapGimmickMaster___, *(_QWORD *)&spotId);
    sub_1B761C0(&Method_DataMasterBase_getEntitys_MapGimmickEntity___, v4);
    sub_1B761C0(&Method_System_Collections_Generic_List_int__Add__, v5);
    sub_1B761C0(&Method_System_Collections_Generic_List_int__ToArray__, v6);
    sub_1B761C0(&Method_System_Collections_Generic_List_int___ctor__, v7);
    sub_1B761C0(&System_Collections_Generic_List_int__TypeInfo, v8);
    sub_1B761C0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_4A2AE13 = 1;
  }
  v10 = (System_Collections_Generic_List_int__o *)sub_1B7640C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v10,
    (const MethodInfo_34B9D5C *)Method_System_Collections_Generic_List_int___ctor__);
  Instance = (System_Object_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  Instance = (System_Object_array *)DataManager__GetMasterData_object_(
                                      (DataManager_o *)Instance,
                                      (const MethodInfo_2E62408 *)Method_DataManager_GetMasterData_MapGimmickMaster___);
  if ( !Instance )
    goto LABEL_19;
  Instance = DataMasterBase__getEntitys_object_(
               (DataMasterBase_o *)Instance,
               (const MethodInfo_2E62C9C *)Method_DataMasterBase_getEntitys_MapGimmickEntity___);
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
        sub_1B76424(Instance, name_low);
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
            *(const MethodInfo_34BA5B0 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
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
    sub_1B7641C(Instance, name_low);
  }
LABEL_17:
  if ( !v10 )
    goto LABEL_19;
  return System_Collections_Generic_List_int___ToArray(
           v10,
           (const MethodInfo_34BC068 *)Method_System_Collections_Generic_List_int__ToArray__);
}


int32_t __fastcall QuestAfterAction__GetState(QuestAfterAction_o *this, const MethodInfo *method)
{
  struct CStateManager_QuestAfterAction__o *fsm; // x8

  if ( (byte_4A2AE22 & 1) == 0 )
  {
    sub_1B761C0(&Method_CStateManager_QuestAfterAction__getState__, method);
    byte_4A2AE22 = 1;
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
  Il2CppObject *v28; // x22
  CStateManager_T__o *v29; // x20
  Il2CppObject *v30; // x21
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

  if ( (byte_4A2AE0E & 1) == 0 )
  {
    sub_1B761C0(&Method_CStateManager_QuestAfterAction___ctor__, method);
    sub_1B761C0(&Method_CStateManager_QuestAfterAction__add__, v4);
    sub_1B761C0(&CStateManager_QuestAfterAction__TypeInfo, v5);
    sub_1B761C0(
      &Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___ContainsKey__,
      v6);
    sub_1B761C0(&Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___get_Item__, v7);
    sub_1B761C0(&Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___set_Item__, v8);
    sub_1B761C0(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___, v9);
    sub_1B761C0(&Method_System_Collections_Generic_List_int__Clear__, v10);
    sub_1B761C0(&Method_System_Collections_Generic_List_int___ctor__, v11);
    sub_1B761C0(&System_Collections_Generic_List_int__TypeInfo, v12);
    sub_1B761C0(&QuestAfterAction_StateAdditional_TypeInfo, v13);
    sub_1B761C0(&QuestAfterAction_StateInstant_TypeInfo, v14);
    sub_1B761C0(&QuestAfterAction_StateMain_TypeInfo, v15);
    sub_1B761C0(&QuestAfterAction_StateNone_TypeInfo, v16);
    byte_4A2AE0E = 1;
  }
  p_fsm = &this->fields.fsm;
  if ( !this->fields.fsm )
  {
    v18 = (CStateManager_T__o *)sub_1B7640C(CStateManager_QuestAfterAction__TypeInfo);
    CStateManager_object____ctor(
      v18,
      (Il2CppObject *)this,
      4,
      (const MethodInfo_308D27C *)Method_CStateManager_QuestAfterAction___ctor__);
    this->fields.fsm = (struct CStateManager_QuestAfterAction__o *)v18;
    sub_1B76164((ServantStatusBattleListViewItem_o *)&this->fields.fsm, (int32_t)v18, v19, v20);
    fsm = (CStateManager_T__o *)this->fields.fsm;
    v22 = (Il2CppObject *)sub_1B7640C(QuestAfterAction_StateNone_TypeInfo);
    System_Object___ctor(v22, 0LL);
    if ( !fsm )
      goto LABEL_21;
    CStateManager_object___add(
      fsm,
      0,
      (IState_T__o *)v22,
      (const MethodInfo_308D324 *)Method_CStateManager_QuestAfterAction__add__);
    v25 = (CStateManager_T__o *)*p_fsm;
    v26 = (Il2CppObject *)sub_1B7640C(QuestAfterAction_StateMain_TypeInfo);
    System_Object___ctor(v26, 0LL);
    if ( !v25 )
      goto LABEL_21;
    CStateManager_object___add(
      v25,
      1,
      (IState_T__o *)v26,
      (const MethodInfo_308D324 *)Method_CStateManager_QuestAfterAction__add__);
    v27 = (CStateManager_T__o *)*p_fsm;
    v28 = (Il2CppObject *)sub_1B7640C(QuestAfterAction_StateAdditional_TypeInfo);
    System_Object___ctor(v28, 0LL);
    if ( !v27 )
      goto LABEL_21;
    CStateManager_object___add(
      v27,
      2,
      (IState_T__o *)v28,
      (const MethodInfo_308D324 *)Method_CStateManager_QuestAfterAction__add__);
    v29 = (CStateManager_T__o *)*p_fsm;
    v30 = (Il2CppObject *)sub_1B7640C(QuestAfterAction_StateInstant_TypeInfo);
    System_Object___ctor(v30, 0LL);
    if ( !v29 )
      goto LABEL_21;
    CStateManager_object___add(
      v29,
      3,
      (IState_T__o *)v30,
      (const MethodInfo_308D324 *)Method_CStateManager_QuestAfterAction__add__);
  }
  QuestAfterAction__SetState(this, 0, v2);
  this->fields.commandBuf = 0LL;
  sub_1B76164((ServantStatusBattleListViewItem_o *)&this->fields.commandBuf, 0, v31, v32);
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
                                                                                (const MethodInfo_317F29C *)Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___ContainsKey__);
    v34 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.commandTypeIds;
    if ( ((unsigned __int8)commandTypeIds & 1) != 0 )
    {
      if ( !v34 )
        goto LABEL_21;
      commandTypeIds = (System_Collections_Generic_Dictionary_TKey__TValue__o *)System_Collections_Generic_Dictionary_Int32Enum__object___get_Item(
                                                                                  (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.commandTypeIds,
                                                                                  v33,
                                                                                  (const MethodInfo_317F008 *)Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___get_Item__);
      if ( !commandTypeIds )
        goto LABEL_21;
      v35 = HIDWORD(commandTypeIds->fields._entries) + 1;
      LODWORD(commandTypeIds->fields._entries) = 0;
      HIDWORD(commandTypeIds->fields._entries) = v35;
    }
    else
    {
      v36 = (System_Collections_Generic_List_int__o *)sub_1B7640C(System_Collections_Generic_List_int__TypeInfo);
      System_Collections_Generic_List_int____ctor(
        v36,
        (const MethodInfo_34B9D5C *)Method_System_Collections_Generic_List_int___ctor__);
      if ( !v34 )
        goto LABEL_21;
      System_Collections_Generic_Dictionary_Int32Enum__object___set_Item(
        v34,
        v33,
        (Il2CppObject *)v36,
        (const MethodInfo_317F094 *)Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___set_Item__);
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
                             (const MethodInfo_2EB19B8 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___),
        this->fields.screenCollider = (struct UnityEngine_BoxCollider_o *)Component_object,
        sub_1B76164(
          (ServantStatusBattleListViewItem_o *)&this->fields.screenCollider,
          (int32_t)Component_object,
          v38,
          v39),
        (commandTypeIds = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.screenCollider) == 0LL) )
  {
LABEL_21:
    sub_1B7641C(commandTypeIds, v24);
  }
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)commandTypeIds, 0, 0LL);
  this->fields.lastDispSpot = 0LL;
  sub_1B76164((ServantStatusBattleListViewItem_o *)&this->fields.lastDispSpot, 0, v40, v41);
  v42 = (System_Collections_Generic_List_int__o *)sub_1B7640C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v42,
    (const MethodInfo_34B9D5C *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.invalidMapGimmickIdList = v42;
  p_invalidMapGimmickIdList = &this->fields.invalidMapGimmickIdList;
  sub_1B76164((ServantStatusBattleListViewItem_o *)p_invalidMapGimmickIdList, (int32_t)v42, v44, v45);
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

  if ( (byte_4A2AE16 & 1) == 0 )
  {
    sub_1B761C0(
      &Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___ContainsKey__,
      *(_QWORD *)&commandType);
    sub_1B761C0(&Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___get_Item__, v7);
    sub_1B761C0(&Method_System_Collections_Generic_List_int__Contains__, v8);
    byte_4A2AE16 = 1;
  }
  commandTypeIds = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.commandTypeIds;
  if ( !commandTypeIds )
    goto LABEL_9;
  if ( System_Collections_Generic_Dictionary_Int32Enum__object___ContainsKey(
         commandTypeIds,
         commandType,
         (const MethodInfo_317F29C *)Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___ContainsKey__) )
  {
    commandTypeIds = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.commandTypeIds;
    if ( commandTypeIds )
    {
      commandTypeIds = (System_Collections_Generic_Dictionary_TKey__TValue__o *)System_Collections_Generic_Dictionary_Int32Enum__object___get_Item(
                                                                                  commandTypeIds,
                                                                                  commandType,
                                                                                  (const MethodInfo_317F008 *)Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___get_Item__);
      if ( commandTypeIds )
        return System_Collections_Generic_List_int___Contains(
                 (System_Collections_Generic_List_int__o *)commandTypeIds,
                 commandTypeId,
                 (const MethodInfo_34BA928 *)Method_System_Collections_Generic_List_int__Contains__);
    }
LABEL_9:
    sub_1B7641C(commandTypeIds, *(_QWORD *)&commandType);
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
      sub_1B76424(this, *(_QWORD *)&spotId);
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
    sub_1B7641C(this, *(_QWORD *)&spotId);
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

  if ( (byte_4A2AE27 & 1) == 0 )
  {
    sub_1B761C0(&TerminalSceneComponent_TypeInfo, method);
    byte_4A2AE27 = 1;
  }
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4A2915D )
  {
    sub_1B761C0(&TerminalSceneComponent_TypeInfo, method);
    byte_4A2915D = 1;
  }
  v2 = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v2 = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
  }
  klass = v2->fields.rootEffectP->klass;
  if ( !klass || (v2 = *(ScrTerminalMap_o **)&klass->_2.thread_static_fields_offset) == 0LL )
    sub_1B7641C(v2, method);
  return ScrTerminalMap__IsMapChangeable(v2, 0LL);
}


bool __fastcall QuestAfterAction__IsNoWaitCommand(int32_t cmd, const MethodInfo *method)
{
  unsigned int v2; // w8

  if ( cmd <= 205 )
  {
    if ( (unsigned int)(cmd - 110) >= 5 )
    {
      v2 = cmd - 203;
      return v2 < 3;
    }
    return 1;
  }
  if ( (cmd & 0xFFFFFFFE) == 402 )
    return 1;
  v2 = cmd - 1010;
  return v2 < 3;
}


bool __fastcall QuestAfterAction__IsOtherObjChangeDispQuicklyCommand(int32_t cmd, const MethodInfo *method)
{
  return (cmd & 0xFFFFFFFE) == 1010;
}


bool __fastcall QuestAfterAction__IsOtherObjDispCommand(int32_t cmd, const MethodInfo *method)
{
  return cmd == 1011;
}


bool __fastcall QuestAfterAction__IsOtherObjHideCommand(int32_t cmd, const MethodInfo *method)
{
  return cmd == 1000 || cmd == 1010;
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
        sub_1B76424(actionCommand, method);
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

  if ( (byte_4A2AE22 & 1) == 0 )
  {
    sub_1B761C0(&Method_CStateManager_QuestAfterAction__getState__, method);
    byte_4A2AE22 = 1;
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

  if ( (byte_4A2AE1A & 1) == 0 )
  {
    sub_1B761C0(&Method_DataManager_GetMasterData_EventMaster___, method);
    sub_1B761C0(&Method_DataManager_GetMasterData_EventMissionActionAddMaster___, v2);
    sub_1B761C0(&Method_DataManager_GetMasterData_EventMissionActionMaster___, v3);
    sub_1B761C0(&Method_DataManager_GetMasterData_EventMissionMaster___, v4);
    sub_1B761C0(&Method_DataManager_GetMaster_EventMaster___, v5);
    sub_1B761C0(&Method_DataManager_GetMaster_ShopActionMaster___, v6);
    sub_1B761C0(&Method_DataManager_GetMaster_ShopMaster___, v7);
    sub_1B761C0(&DataManager_TypeInfo, v8);
    sub_1B761C0(&Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__, v9);
    sub_1B761C0(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v10);
    sub_1B761C0(&Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__GetEntity__, v11);
    sub_1B761C0(&Method_System_Collections_Generic_List_Enumerator_ShopActionEntity__Dispose__, v12);
    sub_1B761C0(&Method_System_Collections_Generic_List_Enumerator_ShopActionEntity__MoveNext__, v13);
    sub_1B761C0(&Method_System_Collections_Generic_List_Enumerator_ShopActionEntity__get_Current__, v14);
    sub_1B761C0(&EventMissionActionInfo_TypeInfo, v15);
    sub_1B761C0(&Method_System_Collections_Generic_List_ShopActionEntity__GetEnumerator__, v16);
    sub_1B761C0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    sub_1B761C0(&TerminalPramsManager_TypeInfo, v18);
    sub_1B761C0(&TerminalSceneComponent_TypeInfo, v19);
    byte_4A2AE1A = 1;
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
  if ( !byte_4A2915D )
  {
    sub_1B761C0(&TerminalSceneComponent_TypeInfo, v21);
    byte_4A2915D = 1;
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
      Master_object = (char *)DataManager__GetMaster_object_((const MethodInfo_2E623B4 *)Method_DataManager_GetMaster_ShopMaster___);
      if ( !Master_object )
        goto LABEL_67;
      Entity = DataMasterBase_object__object__int___GetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                 v22->fields.shopId,
                 (const MethodInfo_30FF780 *)Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__);
      if ( Entity )
      {
        v30 = Entity;
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Master_object = (char *)DataManager__GetMaster_object_((const MethodInfo_2E623B4 *)Method_DataManager_GetMaster_EventMaster___);
        if ( !Master_object )
          goto LABEL_67;
        v31 = DataMasterBase_object__object__int___GetEntity(
                (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                (int32_t)v30[1].monitor,
                (const MethodInfo_30FF780 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
        if ( !v31 || !EventEntity__IsEventPeriod((EventEntity_o *)v31, 0LL, 0LL) )
          goto LABEL_66;
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Master_object = (char *)DataManager__GetMaster_object_((const MethodInfo_2E623B4 *)Method_DataManager_GetMaster_ShopActionMaster___);
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
          (const MethodInfo_34D80CC *)Method_System_Collections_Generic_List_ShopActionEntity__GetEnumerator__);
        v55 = v54;
        while ( 1 )
        {
          v32 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v55,
                  (const MethodInfo_32568D8 *)Method_System_Collections_Generic_List_Enumerator_ShopActionEntity__MoveNext__);
          if ( !v32 )
            break;
          current = v55.fields._current;
          if ( !v55.fields._current )
            sub_1B7641C(v32, v33);
          if ( LODWORD(v55.fields._current[1].monitor) == 4 )
          {
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            if ( !byte_4A2AE79 )
            {
              sub_1B761C0(&TerminalPramsManager_TypeInfo, v33);
              byte_4A2AE79 = 1;
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
              sub_1B7641C(0LL, v36);
            klass = current[2].klass;
            TransitionInfo_k__BackingField->fields.afterActionVals = (struct System_String_array *)klass;
            sub_1B76164(
              (ServantStatusBattleListViewItem_o *)&TransitionInfo_k__BackingField->fields.afterActionVals,
              (int32_t)klass,
              v37,
              v38);
            v43 = v24->fields._TransitionInfo_k__BackingField;
            if ( !v43 )
              sub_1B7641C(v41, v42);
            v43->fields.optionId = (int32_t)current[2].monitor;
            break;
          }
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v55,
          (const MethodInfo_32568D4 *)Method_System_Collections_Generic_List_Enumerator_ShopActionEntity__Dispose__);
      }
    }
  }
  else
  {
    Master_object = (char *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Master_object )
      goto LABEL_67;
    v25 = (DataManager_o *)Master_object;
    Master_object = (char *)DataManager__GetMasterData_object_(
                              (DataManager_o *)Master_object,
                              (const MethodInfo_2E62408 *)Method_DataManager_GetMasterData_EventMissionActionAddMaster___);
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
      v28 = (EventMissionActionInfo_o *)sub_1B7640C(EventMissionActionInfo_TypeInfo);
      EventMissionActionInfo___ctor_42074900(v28, v27, 0LL);
    }
    else
    {
      Master_object = (char *)DataManager__GetMasterData_object_(
                                v25,
                                (const MethodInfo_2E62408 *)Method_DataManager_GetMasterData_EventMissionActionMaster___);
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
      v28 = (EventMissionActionInfo_o *)sub_1B7640C(EventMissionActionInfo_TypeInfo);
      EventMissionActionInfo___ctor(v28, v45, 0LL);
    }
    Master_object = (char *)DataManager__GetMasterData_object_(
                              v25,
                              (const MethodInfo_2E62408 *)Method_DataManager_GetMasterData_EventMissionMaster___);
    if ( !Master_object )
      goto LABEL_67;
    v46 = DataMasterBase_object__object__int___GetEntity(
            (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
            v22->fields.missionId,
            (const MethodInfo_30FF780 *)Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__GetEntity__);
    if ( v46 )
    {
      v47 = v46;
      Master_object = (char *)DataManager__GetMasterData_object_(
                                v25,
                                (const MethodInfo_2E62408 *)Method_DataManager_GetMasterData_EventMaster___);
      if ( !Master_object )
        goto LABEL_67;
      Master_object = (char *)DataMasterBase_object__object__int___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                HIDWORD(v47[1].monitor),
                                (const MethodInfo_30FF780 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
      if ( !Master_object )
        goto LABEL_67;
      if ( EventEntity__IsEventPeriod((EventEntity_o *)Master_object, 0LL, 0LL) )
      {
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_4A2AE79 )
        {
          sub_1B761C0(&TerminalPramsManager_TypeInfo, v48);
          byte_4A2AE79 = 1;
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
            sub_1B76164((ServantStatusBattleListViewItem_o *)(Master_object + 32), (int32_t)vals, v50, v51);
            v53 = v24->fields._TransitionInfo_k__BackingField;
            if ( v53 )
            {
              v53->fields.optionId = v28->fields.optionId;
              return;
            }
          }
        }
LABEL_67:
        sub_1B7641C(Master_object, v21);
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

  if ( (byte_4A2AE17 & 1) == 0 )
  {
    sub_1B761C0(&Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__get_Values__, endAct);
    sub_1B761C0(&Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo___ctor__, v5);
    sub_1B761C0(&System_Collections_Generic_List_QuestAfterAction_VoiceInfo__TypeInfo, v6);
    byte_4A2AE17 = 1;
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
      sub_1B7641C(0LL, endAct);
    Values = System_Collections_Generic_Dictionary_int__object___get_Values(
               (System_Collections_Generic_Dictionary_int__object__o *)svtVoices,
               (const MethodInfo_314F684 *)Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__get_Values__);
    v9 = (System_Collections_Generic_List_object__o *)sub_1B7640C(System_Collections_Generic_List_QuestAfterAction_VoiceInfo__TypeInfo);
    System_Collections_Generic_List_object____ctor_55406280(
      v9,
      (System_Collections_Generic_IEnumerable_T__o *)Values,
      (const MethodInfo_34D6EC8 *)Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo___ctor__);
    QuestAfterAction__LoadVoice_33660000(
      this,
      (System_Collections_Generic_List_QuestAfterAction_VoiceInfo__o *)v9,
      endAct,
      v10);
  }
}


void __fastcall QuestAfterAction__LoadVoice_33660000(
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
  System_String_o *VoiceAssetName_39581568; // x19
  Il2CppObject *v26; // x20
  System_Action_o *v27; // x22

  v5 = svtVInfos;
  while ( 1 )
  {
    if ( (byte_4A2AE18 & 1) == 0 )
    {
      sub_1B761C0(&System_Action_TypeInfo, svtVInfos);
      sub_1B761C0(&Method_System_Linq_Enumerable_Any_QuestAfterAction_VoiceInfo___, v7);
      sub_1B761C0(&Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo__RemoveAt__, v8);
      sub_1B761C0(&Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo__get_Item__, v9);
      sub_1B761C0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v10);
      sub_1B761C0(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__, v11);
      sub_1B761C0(&Method_QuestAfterAction___c__DisplayClass71_0__LoadVoice_b__0__, v12);
      sub_1B761C0(&QuestAfterAction___c__DisplayClass71_0_TypeInfo, v13);
      byte_4A2AE18 = 1;
    }
    v14 = sub_1B7640C(QuestAfterAction___c__DisplayClass71_0_TypeInfo);
    System_Object___ctor((Il2CppObject *)v14, 0LL);
    if ( !v14 )
      goto LABEL_18;
    *(_QWORD *)(v14 + 16) = v5;
    v19 = (CommonUI_o **)(v14 + 16);
    sub_1B76164((ServantStatusBattleListViewItem_o *)(v14 + 16), (int32_t)v5, v17, v18);
    *(_QWORD *)(v14 + 24) = this;
    sub_1B76164((ServantStatusBattleListViewItem_o *)(v14 + 24), (int32_t)this, v20, v21);
    *(_QWORD *)(v14 + 32) = endAct;
    v22 = (System_Action_o **)(v14 + 32);
    sub_1B76164((ServantStatusBattleListViewItem_o *)(v14 + 32), (int32_t)endAct, v23, v24);
    if ( !System_Linq_Enumerable__Any_object_(
            *(System_Collections_Generic_IEnumerable_TSource__o **)(v14 + 16),
            (const MethodInfo_2E6FDDC *)Method_System_Linq_Enumerable_Any_QuestAfterAction_VoiceInfo___) )
    {
      Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( Instance )
      {
        CommonUI__SetLoadMode(Instance, 0, 0LL);
        ActionExtensions__Call(*v22, 0LL);
        return;
      }
LABEL_18:
      sub_1B7641C(Instance, v16);
    }
    Instance = *v19;
    if ( !*v19 )
      goto LABEL_18;
    Instance = (CommonUI_o *)System_Collections_Generic_List_object___get_Item(
                               (System_Collections_Generic_List_object__o *)Instance,
                               0,
                               (const MethodInfo_34D7304 *)Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo__get_Item__);
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
      (const MethodInfo_34D8DA8 *)Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo__RemoveAt__);
    v5 = (System_Collections_Generic_List_QuestAfterAction_VoiceInfo__o *)*v19;
    endAct = *v22;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  CommonUI__SetLoadMode(Instance, 1, 0LL);
  Instance = *v19;
  if ( !*v19 )
    goto LABEL_18;
  Instance = (CommonUI_o *)System_Collections_Generic_List_object___get_Item(
                             (System_Collections_Generic_List_object__o *)Instance,
                             0,
                             (const MethodInfo_34D7304 *)Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo__get_Item__);
  if ( !Instance )
    goto LABEL_18;
  VoiceAssetName_39581568 = ServantVoiceEntity__getVoiceAssetName_39581568(Instance->fields.m_CachedPtr, 0LL);
  v26 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
  v27 = (System_Action_o *)sub_1B7640C(System_Action_TypeInfo);
  System_Action___ctor(v27, (Il2CppObject *)v14, Method_QuestAfterAction___c__DisplayClass71_0__LoadVoice_b__0__, 0LL);
  if ( !v26 )
    goto LABEL_18;
  SoundManager__LoadAudioAssetStorage((SoundManager_o *)v26, VoiceAssetName_39581568, v27, 1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall QuestAfterAction__MapObjName(
        QuestAfterAction_o *this,
        int32_t comType,
        int32_t id,
        const MethodInfo *method)
{
  __int64 v6; // x1

  if ( (byte_4A2AE26 & 1) == 0 )
  {
    sub_1B761C0(&SrcSpotBasePrefab_TypeInfo, *(_QWORD *)&comType);
    sub_1B761C0(&StringLiteral_1/*""*/, v6);
    byte_4A2AE26 = 1;
  }
  if ( comType )
  {
    if ( comType == 1 )
    {
      return srcLineSprite__GetGobjName(id, 0LL);
    }
    else if ( comType == 2 )
    {
      return MapGimmickComponent__GetGobjName(id, 0LL);
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

  if ( (byte_4A2AE20 & 1) == 0 )
  {
    sub_1B761C0(&Method_System_Collections_Generic_List_int__Clear__, method);
    byte_4A2AE20 = 1;
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
    sub_1B7641C(screenCollider, v4);
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

  if ( (byte_4A2AE1C & 1) == 0 )
  {
    sub_1B761C0(&System_Action_TypeInfo, endAct);
    sub_1B761C0(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v5);
    sub_1B761C0(&Method_QuestAfterAction___c__DisplayClass75_0__Play_b__0__, v6);
    sub_1B761C0(&QuestAfterAction___c__DisplayClass75_0_TypeInfo, v7);
    byte_4A2AE1C = 1;
  }
  v8 = sub_1B7640C(QuestAfterAction___c__DisplayClass75_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8
    || (*(_QWORD *)(v8 + 16) = endAct,
        sub_1B76164((ServantStatusBattleListViewItem_o *)(v8 + 16), (int32_t)endAct, v11, v12),
        (Instance = SingletonTemplate_object___get_Instance((const MethodInfo_371299C *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__)) == 0LL) )
  {
    sub_1B7641C(Instance, v10);
  }
  MissionNotifyManager__StartPause((MissionNotifyManager_o *)Instance, 0LL);
  v13 = (System_Action_o *)sub_1B7640C(System_Action_TypeInfo);
  System_Action___ctor(v13, (Il2CppObject *)v8, Method_QuestAfterAction___c__DisplayClass75_0__Play_b__0__, 0LL);
  this->fields.endAct = v13;
  sub_1B76164((ServantStatusBattleListViewItem_o *)&this->fields.endAct, (int32_t)v13, v14, v15);
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

  if ( (byte_4A2AE1D & 1) == 0 )
  {
    sub_1B761C0(&System_Action_TypeInfo, actionVals);
    sub_1B761C0(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v7);
    sub_1B761C0(&Method_QuestAfterAction___c__DisplayClass76_0__PlaySpecifiedAction_b__0__, v8);
    sub_1B761C0(&Method_QuestAfterAction___c__DisplayClass76_0__PlaySpecifiedAction_b__1__, v9);
    sub_1B761C0(&QuestAfterAction___c__DisplayClass76_0_TypeInfo, v10);
    byte_4A2AE1D = 1;
  }
  v11 = sub_1B7640C(QuestAfterAction___c__DisplayClass76_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0LL);
  if ( !v11 )
    goto LABEL_8;
  *(_QWORD *)(v11 + 16) = this;
  sub_1B76164((ServantStatusBattleListViewItem_o *)(v11 + 16), (int32_t)this, v14, v15);
  *(_QWORD *)(v11 + 24) = finishCallback;
  sub_1B76164((ServantStatusBattleListViewItem_o *)(v11 + 24), (int32_t)finishCallback, v16, v17);
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)actionVals, 0LL) )
  {
    ActionExtensions__Call(*(System_Action_o **)(v11 + 24), 0LL);
    return;
  }
  CommandBuf = QuestAfterAction__GenerateCommandBuf(actionVals, v18);
  this->fields.temporaryCommandBuf = CommandBuf;
  sub_1B76164((ServantStatusBattleListViewItem_o *)&this->fields.temporaryCommandBuf, (int32_t)CommandBuf, v20, v21);
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_371299C *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
LABEL_8:
    sub_1B7641C(Instance, v13);
  MissionNotifyManager__StartPause((MissionNotifyManager_o *)Instance, 0LL);
  v22 = (System_Action_o *)sub_1B7640C(System_Action_TypeInfo);
  System_Action___ctor(
    v22,
    (Il2CppObject *)v11,
    Method_QuestAfterAction___c__DisplayClass76_0__PlaySpecifiedAction_b__0__,
    0LL);
  this->fields.endAct = v22;
  sub_1B76164((ServantStatusBattleListViewItem_o *)&this->fields.endAct, (int32_t)v22, v23, v24);
  v25 = (System_Action_o *)sub_1B7640C(System_Action_TypeInfo);
  System_Action___ctor(
    v25,
    (Il2CppObject *)v11,
    Method_QuestAfterAction___c__DisplayClass76_0__PlaySpecifiedAction_b__1__,
    0LL);
  v27 = QuestAfterAction__WaitWhileMainStateFinished(this, v25, v26);
  UnityEngine_MonoBehaviour__StartCoroutine_69272680((UnityEngine_MonoBehaviour_o *)this, v27, 0LL);
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

  if ( (byte_4A2AE1F & 1) == 0 )
  {
    sub_1B761C0(&System_Action_TypeInfo, commandArray);
    sub_1B761C0(&Method_QuestAfterAction__PlaySpecifiedActionInstantly_b__79_0__, v5);
    byte_4A2AE1F = 1;
  }
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)commandArray, 0LL) )
  {
    this->fields.temporaryCommandBuf = commandArray;
    sub_1B76164((ServantStatusBattleListViewItem_o *)&this->fields.temporaryCommandBuf, (int32_t)commandArray, v6, v7);
    v8 = (System_Action_o *)sub_1B7640C(System_Action_TypeInfo);
    System_Action___ctor(v8, (Il2CppObject *)this, Method_QuestAfterAction__PlaySpecifiedActionInstantly_b__79_0__, 0LL);
    this->fields.endAct = v8;
    sub_1B76164((ServantStatusBattleListViewItem_o *)&this->fields.endAct, (int32_t)v8, v9, v10);
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

  if ( (byte_4A2AE25 & 1) == 0 )
  {
    sub_1B761C0(&TerminalPramsManager_TypeInfo, *(_QWORD *)&cType);
    sub_1B761C0(&TerminalSceneComponent_TypeInfo, v7);
    byte_4A2AE25 = 1;
  }
  this->fields.ActionMapTargetType = cType;
  this->fields.ActionMapTargetId = cTarget;
  QuestAfterAction__SetState(this, 0, *(const MethodInfo **)&cTarget);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A29488 )
  {
    sub_1B761C0(&TerminalPramsManager_TypeInfo, v8);
    byte_4A29488 = 1;
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
  if ( !byte_4A2915D )
  {
    sub_1B761C0(&TerminalSceneComponent_TypeInfo, v8);
    byte_4A2915D = 1;
  }
  v10 = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v10 = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
  }
  klass = v10->fields.rootEffectP->klass;
  if ( !klass || (v10 = *(ScrTerminalMap_o **)&klass->_2.thread_static_fields_offset) == 0LL )
    sub_1B7641C(v10, v8);
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
  if ( (byte_4A2AE15 & 1) == 0 )
  {
    sub_1B761C0(&Method_DataManager_GetMasterData_QuestMaster___, com);
    sub_1B761C0(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v5);
    this = (QuestAfterAction_o *)sub_1B761C0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_4A2AE15 = 1;
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
                sub_1B76424(this, com);
              TitleInfoCtrlCallback_k__BackingField = (System_String_o *)this->fields.invalidMapGimmickIdList;
              goto LABEL_29;
            }
          }
LABEL_42:
          sub_1B7641C(this, com);
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
          this = (QuestAfterAction_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( this )
          {
            MasterData_object = DataManager__GetMasterData_object_(
                                  (DataManager_o *)this,
                                  (const MethodInfo_2E62408 *)Method_DataManager_GetMasterData_QuestMaster___);
            param = com->fields.param;
            v16 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
            this = (QuestAfterAction_o *)System_Int32__Parse(param, 0LL);
            if ( v16 )
            {
              this = (QuestAfterAction_o *)DataMasterBase_object__object__int___GetEntity(
                                             v16,
                                             (int32_t)this,
                                             (const MethodInfo_30FF780 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
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

  if ( (byte_4A2AE23 & 1) == 0 )
  {
    sub_1B761C0(&Method_CStateManager_QuestAfterAction__setState__, *(_QWORD *)&state);
    byte_4A2AE23 = 1;
  }
  fsm = (CStateManager_T__o *)this->fields.fsm;
  if ( !fsm )
    sub_1B7641C(0LL, *(_QWORD *)&state);
  CStateManager_object___setState(
    fsm,
    state,
    (const MethodInfo_308D3B0 *)Method_CStateManager_QuestAfterAction__setState__);
}


void __fastcall QuestAfterAction__SkipToNextAction(QuestAfterAction_o *this, const MethodInfo *method)
{
  this->fields.isSkippedNext = 1;
}


void __fastcall QuestAfterAction__Update(QuestAfterAction_o *this, const MethodInfo *method)
{
  CStateManager_T__o *fsm; // x0

  if ( (byte_4A2AE1B & 1) == 0 )
  {
    sub_1B761C0(&Method_CStateManager_QuestAfterAction__update__, method);
    byte_4A2AE1B = 1;
  }
  fsm = (CStateManager_T__o *)this->fields.fsm;
  if ( fsm )
    CStateManager_object___update(fsm, (const MethodInfo_308D38C *)Method_CStateManager_QuestAfterAction__update__);
}


System_Collections_IEnumerator_o *__fastcall QuestAfterAction__WaitWhileMainStateFinished(
        QuestAfterAction_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  __int64 v5; // x21
  int32_t v6; // w2
  int32_t v7; // w3
  int32_t v8; // w2
  int32_t v9; // w3

  if ( (byte_4A2AE21 & 1) == 0 )
  {
    sub_1B761C0(&QuestAfterAction__WaitWhileMainStateFinished_d__82_TypeInfo, action);
    byte_4A2AE21 = 1;
  }
  v5 = sub_1B7640C(QuestAfterAction__WaitWhileMainStateFinished_d__82_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1B76164((ServantStatusBattleListViewItem_o *)(v5 + 32), (int32_t)this, v6, v7);
  *(_QWORD *)(v5 + 40) = action;
  sub_1B76164((ServantStatusBattleListViewItem_o *)(v5 + 40), (int32_t)action, v8, v9);
  return (System_Collections_IEnumerator_o *)v5;
}


void __fastcall QuestAfterAction___PlaySpecifiedActionInstantly_b__79_0(
        QuestAfterAction_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  int32_t v5; // w2
  int32_t v6; // w3
  const MethodInfo *v7; // x2

  this->fields.endAct = 0LL;
  sub_1B76164((ServantStatusBattleListViewItem_o *)&this->fields.endAct, 0, v2, v3);
  this->fields.temporaryCommandBuf = 0LL;
  sub_1B76164((ServantStatusBattleListViewItem_o *)&this->fields.temporaryCommandBuf, 0, v5, v6);
  QuestAfterAction__SetState(this, 0, v7);
}


System_Int32_array *__fastcall QuestAfterAction__getMapGmkOffIdList(QuestAfterAction_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *invalidMapGimmickIdList; // x0

  if ( (byte_4A2AE14 & 1) == 0 )
  {
    sub_1B761C0(&Method_System_Collections_Generic_List_int__ToArray__, method);
    byte_4A2AE14 = 1;
  }
  invalidMapGimmickIdList = this->fields.invalidMapGimmickIdList;
  if ( !invalidMapGimmickIdList )
    sub_1B7641C(0LL, method);
  return System_Collections_Generic_List_int___ToArray(
           invalidMapGimmickIdList,
           (const MethodInfo_34BC068 *)Method_System_Collections_Generic_List_int__ToArray__);
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
  System_String_o *VoiceAssetName_39581568; // x20
  System_Collections_Generic_List_Enumerator_object__o v17; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4A2AE19 & 1) == 0 )
  {
    sub_1B761C0(&Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__Clear__, method);
    sub_1B761C0(&Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__get_Values__, v3);
    sub_1B761C0(&Method_System_Collections_Generic_List_Enumerator_QuestAfterAction_VoiceInfo__Dispose__, v4);
    sub_1B761C0(&Method_System_Collections_Generic_List_Enumerator_QuestAfterAction_VoiceInfo__MoveNext__, v5);
    sub_1B761C0(&Method_System_Collections_Generic_List_Enumerator_QuestAfterAction_VoiceInfo__get_Current__, v6);
    sub_1B761C0(&Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo__GetEnumerator__, v7);
    sub_1B761C0(&Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo___ctor__, v8);
    sub_1B761C0(&System_Collections_Generic_List_QuestAfterAction_VoiceInfo__TypeInfo, v9);
    sub_1B761C0(&SoundManager_TypeInfo, v10);
    byte_4A2AE19 = 1;
  }
  memset(&v17, 0, sizeof(v17));
  svtVoices = this->fields.svtVoices;
  if ( !svtVoices )
    goto LABEL_14;
  Values = System_Collections_Generic_Dictionary_int__object___get_Values(
             (System_Collections_Generic_Dictionary_int__object__o *)svtVoices,
             (const MethodInfo_314F684 *)Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__get_Values__);
  v13 = (System_Collections_Generic_List_object__o *)sub_1B7640C(System_Collections_Generic_List_QuestAfterAction_VoiceInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor_55406280(
    v13,
    (System_Collections_Generic_IEnumerable_T__o *)Values,
    (const MethodInfo_34D6EC8 *)Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo___ctor__);
  if ( !v13 )
    goto LABEL_14;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v17,
    v13,
    (const MethodInfo_34D80CC *)Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo__GetEnumerator__);
  while ( 1 )
  {
    v14 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v17,
            (const MethodInfo_32568D8 *)Method_System_Collections_Generic_List_Enumerator_QuestAfterAction_VoiceInfo__MoveNext__);
    if ( !v14 )
      break;
    if ( !v17.fields._current )
      sub_1B7641C(v14, v15);
    VoiceAssetName_39581568 = ServantVoiceEntity__getVoiceAssetName_39581568((int32_t)v17.fields._current[1].klass, 0LL);
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    SoundManager__releaseAudioAssetStorage(VoiceAssetName_39581568, 0LL);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v17,
    (const MethodInfo_32568D4 *)Method_System_Collections_Generic_List_Enumerator_QuestAfterAction_VoiceInfo__Dispose__);
  svtVoices = this->fields.svtVoices;
  if ( !svtVoices )
LABEL_14:
    sub_1B7641C(svtVoices, method);
  System_Collections_Generic_Dictionary_int__object___Clear(
    (System_Collections_Generic_Dictionary_int__object__o *)svtVoices,
    (const MethodInfo_314F9FC *)Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__Clear__);
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

  if ( (byte_4A2AE2B & 1) == 0 )
  {
    sub_1B761C0(&Method_DataManager_GetMasterData_VoicePlayCondMaster___, svtId);
    sub_1B761C0(&Method_System_Collections_Generic_List_string__RemoveAt__, v5);
    sub_1B761C0(&Method_System_Collections_Generic_List_string___ctor___75865360, v6);
    sub_1B761C0(&Method_System_Collections_Generic_List_string__get_Count__, v7);
    sub_1B761C0(&Method_System_Collections_Generic_List_string__get_Item__, v8);
    sub_1B761C0(&System_Collections_Generic_List_string__TypeInfo, v9);
    sub_1B761C0(&System_Random_TypeInfo, v10);
    sub_1B761C0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_1B761C0(&TerminalSceneComponent_TypeInfo, v12);
    sub_1B761C0(&StringLiteral_16117/*"_"*/, v13);
    byte_4A2AE2B = 1;
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
    param = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( param )
    {
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)param,
                            (const MethodInfo_2E62408 *)Method_DataManager_GetMasterData_VoicePlayCondMaster___);
      v17 = (System_Collections_Generic_List_object__o *)sub_1B7640C(System_Collections_Generic_List_string__TypeInfo);
      System_Collections_Generic_List_object____ctor_55406280(
        v17,
        v15,
        (const MethodInfo_34D6EC8 *)Method_System_Collections_Generic_List_string___ctor___75865360);
      result = 0;
      v18 = (System_Random_o *)sub_1B7640C(System_Random_TypeInfo);
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
                      (const MethodInfo_34D7304 *)Method_System_Collections_Generic_List_string__get_Item__);
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
              param = System_String__Concat_61546320(
                        *((System_String_o **)v22 + 5),
                        (System_String_o *)StringLiteral_16117/*"_"*/,
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
                       (const MethodInfo_34D7304 *)Method_System_Collections_Generic_List_string__get_Item__);
              if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
              if ( !byte_4A2915D )
              {
                sub_1B761C0(&TerminalSceneComponent_TypeInfo, svtId);
                byte_4A2915D = 1;
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
              (const MethodInfo_34D8DA8 *)Method_System_Collections_Generic_List_string__RemoveAt__);
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
    sub_1B7641C(param, svtId);
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
    sub_1B76424(v27, v28);
  return System_String__Concat_61546320(
           *((System_String_o **)v30 + 5),
           (System_String_o *)StringLiteral_16117/*"_"*/,
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

  if ( (byte_4A2AE2D & 1) == 0 )
  {
    sub_1B761C0(&Method_DataManager_GetMasterData_BgmMaster___, method);
    sub_1B761C0(&Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__, v3);
    sub_1B761C0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_4A2AE2D = 1;
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
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_12;
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_2E62408 *)Method_DataManager_GetMasterData_BgmMaster___);
      if ( !Instance )
        goto LABEL_12;
      Instance = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                   (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                   &entity,
                                   result,
                                   (const MethodInfo_30FF7D4 *)Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( entity )
          return (System_String_o *)entity[1].monitor;
LABEL_12:
        sub_1B7641C(Instance, v8);
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
    sub_1B7641C(v3, str);
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
  if ( (byte_4A2AE2C & 1) == 0 )
  {
    this = (QuestAfterAction_Command_o *)sub_1B761C0(&StringLiteral_16117/*"_"*/, str);
    byte_4A2AE2C = 1;
  }
  if ( v4->fields.id == 800 )
  {
    if ( !v3 || (this = (QuestAfterAction_Command_o *)System_String__Split(v3, 0x5Fu, 0, 0LL)) == 0LL )
      sub_1B7641C(this, str);
    param = (int)this->fields.param;
    if ( param == 2 )
      return v3;
    if ( param == 3 )
      return System_String__Concat_61546320(
               (System_String_o *)this[1].monitor,
               (System_String_o *)StringLiteral_16117/*"_"*/,
               *(System_String_o **)&this[1].fields.id,
               0LL);
  }
  return 0LL;
}


void __fastcall QuestAfterAction_StateAdditional___ctor(
        QuestAfterAction_StateAdditional_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QuestAfterAction_StateAdditionalBase___ctor(
        QuestAfterAction_StateAdditionalBase_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QuestAfterAction_StateAdditionalBase__begin(
        QuestAfterAction_StateAdditionalBase_o *this,
        QuestAfterAction_o *that,
        const MethodInfo *method)
{
  QuestAfterAction_StateMain__begin((QuestAfterAction_StateMain_o *)this, that, method);
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
    sub_1B7641C(this, method);
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
  UnityEngine_Collider_o *screenCollider; // x0
  __int64 v5; // x1
  struct QuestAfterAction_o *that; // x8
  int32_t v7; // w2
  int32_t v8; // w3
  ServantStatusBattleListViewItem_o *v9; // x0
  System_Action_o *klass; // t1

  screenCollider = (UnityEngine_Collider_o *)((__int64 (__fastcall *)(QuestAfterAction_StateAdditionalBase_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._12_set_CommandIndex.method)(
                                               this,
                                               0LL,
                                               this->klass->vtable._13_UpdateAnim.methodPtr);
  that = this->fields.that;
  if ( !that
    || (screenCollider = (UnityEngine_Collider_o *)that->fields.screenCollider) == 0LL
    || (UnityEngine_Collider__set_enabled(screenCollider, 0, 0LL),
        (screenCollider = (UnityEngine_Collider_o *)this->fields.that) == 0LL) )
  {
    sub_1B7641C(screenCollider, v5);
  }
  klass = (System_Action_o *)screenCollider[7].klass;
  v9 = (ServantStatusBattleListViewItem_o *)&screenCollider[7];
  v9->klass = 0LL;
  sub_1B76164(v9, 0, v7, v8);
  ActionExtensions__Call(klass, 0LL);
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
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QuestAfterAction_StateInstant__EndAnim(QuestAfterAction_StateInstant_o *this, const MethodInfo *method)
{
  if ( !this->fields.completed )
  {
    QuestAfterAction_StateMain__EndAnim((QuestAfterAction_StateMain_o *)this, method);
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
  int32_t id; // w8
  unsigned int v4; // w8

  if ( !cmd )
    sub_1B7641C(this, 0LL);
  id = cmd->fields.id;
  if ( id <= 205 )
  {
    if ( (unsigned int)(id - 110) >= 5 )
    {
      v4 = id - 203;
      return v4 < 3;
    }
    return 1;
  }
  if ( (id & 0xFFFFFFFE) == 402 )
    return 1;
  v4 = id - 1010;
  return v4 < 3;
}


void __fastcall QuestAfterAction_StateInstant__UpdateAnim(
        QuestAfterAction_StateInstant_o *this,
        QuestAfterAction_o *that,
        const MethodInfo *method)
{
  if ( !this->fields.completed )
    QuestAfterAction_StateMain__UpdateAnim((QuestAfterAction_StateMain_o *)this, that, method);
}


void __fastcall QuestAfterAction_StateInstant__begin(
        QuestAfterAction_StateInstant_o *this,
        QuestAfterAction_o *that,
        const MethodInfo *method)
{
  QuestAfterAction_StateInstant_c *klass; // x8

  QuestAfterAction_StateMain__begin((QuestAfterAction_StateMain_o *)this, that, method);
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
    sub_1B7641C(0LL, v7);
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
    sub_1B7641C(0LL, v7);
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

  v2 = this;
  if ( (byte_4A2AE32 & 1) == 0 )
  {
    sub_1B761C0(&Method_System_Collections_Generic_List_int__Remove__, method);
    sub_1B761C0(&Method_System_Collections_Generic_List_int__ToArray__, v3);
    sub_1B761C0(&UnityEngine_Object_TypeInfo, v4);
    sub_1B761C0(&Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___, v5);
    this = (QuestAfterAction_StateMain_o *)sub_1B761C0(&Method_SingletonTemplate_QuestTree__get_Instance__, v6);
    byte_4A2AE32 = 1;
  }
  that = v2->fields.that;
  if ( !that )
    goto LABEL_22;
  this = (QuestAfterAction_StateMain_o *)that->fields.invalidMapGimmickIdList;
  if ( !this )
    goto LABEL_22;
  this = (QuestAfterAction_StateMain_o *)System_Collections_Generic_List_int___ToArray(
                                           (System_Collections_Generic_List_int__o *)this,
                                           (const MethodInfo_34BC068 *)Method_System_Collections_Generic_List_int__ToArray__);
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
        sub_1B76424(this, method);
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
        (const MethodInfo_34BBAAC *)Method_System_Collections_Generic_List_int__Remove__);
      this = (QuestAfterAction_StateMain_o *)v2->fields.that;
      if ( !this )
        break;
      MapComponent_object = QuestAfterAction__GetMapComponent_object_(
                              (QuestAfterAction_o *)this,
                              2,
                              v12,
                              v2,
                              (const MethodInfo_2EF2810 *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (QuestAfterAction_StateMain_o *)UnityEngine_Object__op_Inequality(
                                               (UnityEngine_Object_o *)MapComponent_object,
                                               0LL,
                                               0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        this = (QuestAfterAction_StateMain_o *)SingletonTemplate_object___get_Instance((const MethodInfo_371299C *)Method_SingletonTemplate_QuestTree__get_Instance__);
        if ( !MapComponent_object || !this )
          break;
        this = (QuestAfterAction_StateMain_o *)QuestTree__CheckMapGimmickCond_33946152(
                                                 (QuestTree_o *)this,
                                                 (MapControl_MapGimmickInfo_o *)MapComponent_object[7].klass,
                                                 0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          klass = MapComponent_object[7].klass;
          if ( !klass )
            break;
          LODWORD(klass->_1.name) = 1;
          MapGimmickComponent__SetDispAnim((MapGimmickComponent_o *)MapComponent_object, 1, 0LL);
        }
      }
      LODWORD(v8) = *(_DWORD *)&v9->fields.IsAnimDoing;
      if ( (__int64)++v10 >= (int)v8 )
        return;
    }
LABEL_22:
    sub_1B7641C(this, method);
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
  __int64 v99; // x21
  __int64 updated; // x0
  QuestAfterAction_o *v101; // x1
  int32_t v102; // w2
  int32_t v103; // w3
  __int64 *v104; // x20
  int32_t v105; // w2
  int32_t v106; // w3
  QuestAfterAction_StateMain_c *klass; // x8
  __int64 v108; // x22
  QuestAfterAction_Command_o *v109; // x22
  BlankEarthQuestAfterAction_o *v110; // x23
  System_Action_o *v111; // x24
  const MethodInfo *v112; // x5
  int id; // w8
  float v114; // s0
  __int64 v115; // x1
  float DEFAULT_FADE_TIME; // s8
  AvalonSceneManager_c *v117; // x0
  TerminalSceneComponent_c *v118; // x0
  TerminalSceneComponent_o *mInstance; // x19
  System_Action_o *v120; // x20
  TerminalSceneComponent_o *v121; // x0
  float v122; // s0
  System_Action_o *v123; // x1
  System_String_o *v124; // x19
  System_String_o *v125; // x20
  System_String_o *v126; // x20
  Il2CppObject *Instance; // x22
  System_Action_o *v128; // x23
  __int64 v129; // x8
  __int64 v130; // x24
  float v131; // s0
  System_String_o *param; // x21
  _QWORD *v133; // x0
  System_Reflection_MethodBase_o *v134; // x0
  __int64 v135; // x20
  int32_t v136; // w2
  int32_t v137; // w3
  __int64 v138; // x23
  __int64 v139; // x8
  __int64 v140; // x22
  int32_t v141; // w21
  bool v142; // w24
  bool v143; // w25
  __int64 v144; // x20
  int32_t v145; // w2
  int32_t v146; // w3
  __int64 v147; // x8
  QuestAfterAction_o *v148; // x21
  Il2CppObject *v149; // x0
  int32_t v150; // w2
  int32_t v151; // w3
  UnityEngine_Object_o *v152; // x19
  SrcSpotBasePrefab_o *v153; // x19
  System_Action_o *v154; // x21
  int32_t v155; // w1
  __int64 v156; // x23
  float v157; // s0
  float v158; // s9
  float v159; // s0
  float v160; // s10
  float v161; // s0
  float v162; // s11
  float v163; // s0
  float v164; // s8
  int32_t v165; // w19
  __int64 v166; // x8
  float v167; // s8
  const MethodInfo_35F8578 *v168; // x2
  float v169; // s0
  float v170; // s1
  float v171; // s2
  float v172; // s10
  float v173; // s9
  float v174; // s11
  MapCamera_o *v175; // x20
  System_Action_o *v176; // x0
  __int64 *v177; // x8
  System_Action_o *v178; // x22
  MapCamera_o *v179; // x0
  float v180; // s0
  float v181; // s1
  float v182; // s2
  float v183; // s3
  int32_t v184; // w1
  System_Action_o *v185; // x2
  __int64 v186; // x20
  int32_t v187; // w2
  int32_t v188; // w3
  __int64 v189; // x8
  QuestAfterAction_o *v190; // x21
  Il2CppObject *v191; // x0
  int32_t v192; // w2
  int32_t v193; // w3
  UnityEngine_Object_o *v194; // x19
  ModelLineComponent_o *v195; // x19
  System_Action_o *v196; // x21
  const MethodInfo *v197; // x3
  int32_t v198; // w1
  __int64 v199; // x21
  int32_t v200; // w20
  int32_t v201; // w22
  TerminalSceneComponent_c *v202; // x0
  TerminalSceneComponent_o *v203; // x21
  __int64 v204; // x8
  PlayMakerFSM_o *v205; // x20
  System_String_o *ActiveStateName; // x0
  __int64 v207; // x8
  __int64 v208; // x8
  QuestBoardListViewManager_o *v209; // x21
  System_Action_o *v210; // x22
  Il2CppObject *v211; // x23
  struct QuestAfterAction_StateMain___c_StaticFields *static_fields; // x0
  int32_t v213; // w2
  int32_t v214; // w3
  TerminalSceneComponent_c *v215; // x0
  __int64 v216; // x22
  int v217; // w23
  float v218; // s8
  int32_t v219; // w21
  __int64 v220; // x1
  TerminalPramsManager_c *v221; // x0
  __int64 v222; // x8
  __int64 v223; // x8
  __int64 v224; // x8
  __int64 v225; // x8
  System_String_o *v226; // x20
  System_String_o *v227; // x21
  SeManager_c *v228; // x0
  float DEFAULT_VOLUME; // s8
  int32_t v230; // w20
  Il2CppObject *v231; // x22
  const MethodInfo *v232; // x2
  __int64 v233; // x21
  __int64 v234; // x1
  TerminalPramsManager_c *v235; // x0
  int32_t v236; // w20
  clsQuestCheck_o *v237; // x19
  QuestAfterAction_StateMain___c_c *v238; // x8
  System_Action_o *_9__16_33; // x20
  Il2CppObject *v240; // x21
  struct QuestAfterAction_StateMain___c_StaticFields *v241; // x0
  int32_t v242; // w2
  int32_t v243; // w3
  __int64 v244; // x23
  int32_t v245; // w21
  int32_t v246; // w22
  int32_t v247; // w23
  System_String_o *v248; // x23
  int32_t v249; // w2
  int32_t v250; // w3
  System_String_array *v251; // x20
  int32_t v252; // w1
  int v253; // w8
  System_String_o *v254; // x19
  System_String_o *v255; // x20
  System_String_o *v256; // x19
  System_String_o *v257; // x20
  System_String_o *v258; // x20
  Il2CppObject *v259; // x22
  System_Action_o *v260; // x23
  char *v261; // x10
  System_String_o *v262; // x23
  int32_t v263; // w2
  int32_t v264; // w3
  System_String_array *v265; // x20
  int32_t v266; // w1
  int v267; // w8
  System_String_o *v268; // x19
  System_String_o *v269; // x20
  System_String_o *v270; // x20
  Il2CppObject *v271; // x22
  System_Action_o *v272; // x23
  __int64 v273; // x8
  const MethodInfo *v274; // x2
  __int64 v275; // x8
  QuestAfterAction_TitleInfoControlCallback_o *v276; // x21
  Il2CppObject *MapComponent_object; // x22
  Il2CppObject *v278; // x20
  __int64 v279; // x8
  ScrTerminalMap_o *v280; // x23
  __int64 v281; // x8
  ScrTerminalMap_o *v282; // x20
  UnityEngine_GameObject_o *gameObject; // x22
  System_Action_o *v284; // x23
  TerminalPramsManager_c *v285; // x0
  __int64 v286; // x8
  __int64 v287; // x1
  const MethodInfo *v288; // x2
  TerminalPramsManager_c *v289; // x0
  __int64 v290; // x8
  __int64 v291; // x23
  float v292; // s0
  __int64 v293; // x8
  __int64 v294; // x24
  float v295; // s0
  __int64 v296; // x23
  float v297; // s0
  __int64 v298; // x8
  ScrTerminalMap_o *v299; // x24
  float v300; // s0
  float v301; // s9
  float v302; // s0
  const MethodInfo_35F8578 *v303; // x2
  float v304; // s0
  float v305; // s1
  float v306; // s2
  __int64 v307; // x22
  int32_t v308; // w0
  int32_t v309; // w20
  float v310; // s8
  int32_t v311; // w19
  __int64 v312; // x20
  int32_t v313; // w2
  int32_t v314; // w3
  __int64 v315; // x8
  QuestAfterAction_o *v316; // x21
  Il2CppObject *v317; // x0
  int32_t v318; // w2
  int32_t v319; // w3
  UnityEngine_Object_o *v320; // x19
  __int64 v321; // x23
  int32_t v322; // w2
  int32_t v323; // w3
  __int64 v324; // x20
  QuestAfterAction_o *v325; // x21
  Il2CppObject *v326; // x0
  __int64 *v327; // x19
  int32_t v328; // w2
  int32_t v329; // w3
  UnityEngine_Object_o *v330; // x21
  SrcSpotBasePrefab_o *v331; // x21
  System_Action_o *v332; // x22
  int32_t v333; // w2
  int32_t v334; // w3
  __int64 v335; // x1
  ServantStatusBattleListViewItem_o *v336; // x0
  __int64 v337; // x22
  QuestAfterAction_o *v338; // x21
  Il2CppObject *v339; // x21
  System_Action_o *v340; // x22
  QuestAfterAction_o *v341; // x21
  Il2CppObject *v342; // x21
  _DWORD *monitor; // x8
  SrcSpotBasePrefab_o *v344; // x0
  int32_t v345; // w1
  QuestAfterAction_o *v346; // x21
  Il2CppObject *v347; // x21
  _DWORD *v348; // x8
  QuestAfterAction_o *v349; // x21
  _DWORD *v350; // x8
  __int64 v351; // x21
  QuestAfterAction_o *v352; // x22
  Il2CppObject *v353; // x22
  __int64 v354; // x1
  int32_t v355; // w21
  TerminalPramsManager_c *v356; // x0
  QuestAfterAction_o *v357; // x20
  Il2CppObject *v358; // x20
  __int64 v359; // x1
  TerminalPramsManager_c *v360; // x0
  SceneJumpInfo_o *v361; // x21
  MapCamera_o *v362; // x20
  float v363; // s0
  System_Action_o *v364; // x0
  __int64 *v365; // x8
  System_Action_o *v366; // x22
  MapCamera_o *v367; // x0
  float v368; // s0
  int32_t v369; // w4
  System_Action_o *v370; // x5
  int v371; // w23
  __int64 v372; // x22
  float v373; // s0
  float v374; // s8
  float v375; // s0
  MapCamera_o *v376; // x19
  float v377; // s0
  float v378; // s9
  int32_t v379; // w20
  __int64 v380; // x20
  int32_t v381; // w2
  int32_t v382; // w3
  __int64 v383; // x8
  QuestAfterAction_o *v384; // x21
  Il2CppObject *v385; // x0
  int32_t v386; // w2
  int32_t v387; // w3
  UnityEngine_Object_o *v388; // x19
  __int64 v389; // x20
  int32_t v390; // w2
  int32_t v391; // w3
  __int64 v392; // x8
  QuestAfterAction_o *v393; // x21
  Il2CppObject *v394; // x0
  int32_t v395; // w2
  int32_t v396; // w3
  UnityEngine_Object_o *v397; // x19
  _BOOL4 IsMapModel; // w23
  QuestAfterAction_o *v399; // x21
  UnityEngine_Object_o *v400; // x21
  const MethodInfo *v401; // x2
  _DWORD *v402; // x8
  _BOOL4 v403; // w23
  QuestAfterAction_o *v404; // x21
  UnityEngine_Object_o *v405; // x21
  const MethodInfo *v406; // x2
  const MethodInfo *v407; // x2
  _DWORD *v408; // x8
  _BOOL4 v409; // w23
  QuestAfterAction_o *v410; // x21
  UnityEngine_Object_o *v411; // x21
  const MethodInfo *v412; // x2
  const MethodInfo *v413; // x2
  System_Action_o *v414; // x20
  const MethodInfo *v415; // x2
  System_String_o *v416; // x20
  int32_t v417; // w2
  int32_t v418; // w3
  __int64 v419; // x23
  __int64 v420; // x8
  __int64 v421; // x22
  int32_t v422; // w21
  bool v423; // w24
  bool v424; // w25
  __int64 v425; // x8
  __int64 v426; // x22
  int32_t v427; // w21
  bool v428; // w22
  __int64 v429; // x8
  __int64 v430; // x22
  int32_t v431; // w21
  bool v432; // w22
  __int64 v433; // x22
  float v434; // s0
  QuestAfterAction_o *v435; // x20
  float v436; // s8
  Il2CppObject *v437; // x19
  __int64 v438; // x8
  ScrTerminalMap_o *v439; // x20
  float v440; // s0
  float v441; // s9
  float v442; // s0
  float v443; // s0
  float v444; // s1
  float v445; // s2
  float v446; // s9
  float v447; // s10
  float v448; // s11
  int32_t v449; // w20
  System_Action_o *v450; // x22
  __int64 v451; // x20
  int32_t v452; // w2
  int32_t v453; // w3
  __int64 v454; // x8
  QuestAfterAction_o *v455; // x21
  Il2CppObject *v456; // x0
  int32_t v457; // w2
  int32_t v458; // w3
  UnityEngine_Object_o *v459; // x19
  MapGimmickComponent_o *v460; // x19
  System_Action_o *v461; // x21
  TerminalSceneComponent_o *v462; // x19
  __int64 v463; // x20
  int32_t v464; // w2
  int32_t v465; // w3
  System_String_array *v466; // x0
  __int64 *v467; // x21
  int32_t v468; // w2
  int32_t v469; // w3
  __int64 v470; // x8
  __int64 v471; // x9
  QuestAfterAction_o *v472; // x21
  Il2CppObject *v473; // x0
  int32_t v474; // w2
  int32_t v475; // w3
  UnityEngine_Object_o *v476; // x19
  MapGimmickComponent_o *v477; // x19
  System_Action_o *v478; // x0
  __int64 *v479; // x8
  System_Action_o *v480; // x21
  __int64 v481; // x21
  QuestAfterAction_o *v482; // x20
  Il2CppObject *v483; // x20
  UIWidget_o *v484; // x20
  int32_t v485; // w2
  int32_t v486; // w3
  __int64 v487; // x8
  QuestAfterAction_o *v488; // x21
  Il2CppObject *v489; // x0
  __int64 v490; // x19
  int32_t v491; // w2
  int32_t v492; // w3
  UnityEngine_Object_o *v493; // x21
  bool v494; // w0
  bool v495; // w22
  int32_t v496; // w1
  __int64 v497; // x8
  __int64 v498; // x22
  int32_t v499; // w21
  bool v500; // w22
  Il2CppObject *v501; // x22
  System_Action_o *v502; // x23
  float v503; // s0
  int v504; // w23
  float v505; // s0
  float v506; // s0
  QuestAfterAction_o *v507; // x25
  const MethodInfo *v508; // x4
  UnityEngine_Object_o *MapGameObject; // x25
  float x; // s9
  float y; // s8
  float z; // s10
  __int64 v513; // x8
  const MethodInfo_35F8578 *v514; // x2
  System_String_o *v515; // x19
  QuestAfterAction_o *v516; // x24
  const MethodInfo *v517; // x4
  UnityEngine_Object_o *v518; // x24
  float v519; // s8
  float v520; // s9
  float v521; // s10
  __int64 v522; // x8
  float v523; // s0
  float v524; // s1
  float v525; // s2
  QuestAfterAction_o *v526; // x25
  const MethodInfo *v527; // x4
  UnityEngine_Object_o *v528; // x25
  const MethodInfo_35F8578 *v529; // x2
  __int64 v530; // x8
  MapCamera_o *v531; // x19
  System_Action_o *v532; // x0
  __int64 *v533; // x8
  __int64 v534; // x20
  int32_t v535; // w2
  int32_t v536; // w3
  __int64 v537; // x8
  QuestAfterAction_o *v538; // x21
  Il2CppObject *v539; // x0
  int32_t v540; // w2
  int32_t v541; // w3
  UnityEngine_Object_o *v542; // x19
  srcLineSprite_o *v543; // x19
  System_Action_o *v544; // x21
  int32_t v545; // w1
  __int64 v546; // x20
  int32_t v547; // w2
  int32_t v548; // w3
  __int64 v549; // x8
  QuestAfterAction_o *v550; // x21
  Il2CppObject *v551; // x0
  int32_t v552; // w2
  int32_t v553; // w3
  UnityEngine_Object_o *v554; // x19
  __int64 v555; // x20
  int32_t v556; // w2
  int32_t v557; // w3
  __int64 v558; // x8
  QuestAfterAction_o *v559; // x21
  Il2CppObject *v560; // x0
  int32_t v561; // w2
  int32_t v562; // w3
  UnityEngine_Object_o *v563; // x19
  UnityEngine_Object_o *v564; // x21
  UnityEngine_Object_o *v565; // x21
  int v566; // w9
  UnityEngine_Object_o *v567; // x21
  Il2CppObject *v568; // x0
  int32_t v569; // w2
  int32_t v570; // w3
  UnityEngine_Object_o *v571; // x22
  MapGimmickComponent_o *v572; // x21
  System_Action_o *v573; // x0
  System_Action_o *v574; // x22
  Il2CppObject *v575; // x0
  int32_t v576; // w2
  int32_t v577; // w3
  UnityEngine_Object_o *v578; // x22
  System_Action_o *v579; // x0
  MapGimmickComponent_o *v580; // x0
  System_Action_o *v581; // x2
  Il2CppObject *v582; // x21
  Il2CppObject *v583; // x21
  Il2CppClass *v584; // x8
  Il2CppObject *v585; // x21
  Il2CppClass *v586; // x8
  QuestAfterAction_StateMain_c *v587; // x8
  int v588; // w0
  System_Action_o *v589; // x22
  float v590; // s8
  float v591; // s10
  float v592; // s9
  const MethodInfo_35F8578 *v593; // x2
  System_String_o *v594; // x19
  __int64 v595; // x8
  ScrTerminalMap_o *v596; // x22
  System_Action_o *v597; // x23
  int32_t v598; // w1
  __int64 v599; // x8
  System_Action_o *v600; // x20
  MapCamera_o *v601; // x19
  float v602; // s0
  System_Action_o *v603; // x0
  __int64 *v604; // x8
  MapCamera_o *v605; // x19
  float v606; // s0
  System_Action_o *v607; // x20
  MapCamera_o *v608; // x19
  float v609; // s0
  float v610; // s0
  int32_t onClickOkSeKind; // [xsp+10h] [xbp-E0h]
  int32_t easeType; // [xsp+38h] [xbp-B8h]
  float sec; // [xsp+3Ch] [xbp-B4h]
  float seca; // [xsp+3Ch] [xbp-B4h]
  System_Nullable_float__o size; // [xsp+40h] [xbp-B0h] BYREF
  System_Nullable_Vector3__o v616; // [xsp+48h] [xbp-A8h] BYREF
  Il2CppObject *value; // [xsp+58h] [xbp-98h] BYREF
  Il2CppObject *entity; // [xsp+60h] [xbp-90h] BYREF
  UnityEngine_Color_o color; // [xsp+68h] [xbp-88h] BYREF
  bool isQuickUpdate; // [xsp+7Ch] [xbp-74h] BYREF
  System_Nullable_float__o p_size; // 0:x0.8
  System_Nullable_float__o v622; // 0:x0.8
  System_Nullable_float__o v623; // 0:x0.8
  System_Nullable_float__o v624; // 0:x0.8
  System_Nullable_float__o v625; // 0:x0.8
  System_Nullable_float__o v626; // 0:x3.8
  System_Nullable_Vector3__o v627; // 0:x0.16
  System_Nullable_Vector3__o v628; // 0:x0.16
  System_Nullable_Vector3__o v629; // 0:x0.16
  System_Nullable_Vector3__o v630; // 0:x0.16
  System_Nullable_Vector3__o v631; // 0:x0.16
  System_Nullable_Vector3__o v632; // 0:x1.16
  UnityEngine_Vector3_o v633; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v634; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v636; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v637; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o Position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v639; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v640; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v641; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v642; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v643; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v644; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v645; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A2AE30 & 1) == 0 )
  {
    sub_1B761C0(&System_Action_TypeInfo, that);
    sub_1B761C0(&AvalonSceneManager_TypeInfo, v5);
    sub_1B761C0(&Method_DataManager_GetMasterData_QuestMaster___, v6);
    sub_1B761C0(&Method_DataManager_GetMaster_QuestMaster___, v7);
    sub_1B761C0(&DataManager_TypeInfo, v8);
    sub_1B761C0(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v9);
    sub_1B761C0(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__, v10);
    sub_1B761C0(&Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__TryGetValue__, v11);
    sub_1B761C0(&FSUtility_TypeInfo, v12);
    sub_1B761C0(&Method_UnityEngine_GameObject_GetComponentInChildren_UISprite___, v13);
    sub_1B761C0(&Method_UnityEngine_GameObject_GetComponent_ModelLineComponent___, v14);
    sub_1B761C0(&LocalizationManager_TypeInfo, v15);
    sub_1B761C0(&Method_System_Nullable_Vector3___ctor__, v16);
    sub_1B761C0(&Method_System_Nullable_float___ctor__, v17);
    sub_1B761C0(&UnityEngine_Object_TypeInfo, v18);
    sub_1B761C0(&Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___, v19);
    sub_1B761C0(&Method_QuestAfterAction_GetMapComponent_ModelLineComponent___, v20);
    sub_1B761C0(&Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___, v21);
    sub_1B761C0(&Method_QuestAfterAction_GetMapComponent_srcLineSprite___, v22);
    sub_1B761C0(&SceneJumpInfo_TypeInfo, v23);
    sub_1B761C0(&SeManager_TypeInfo, v24);
    sub_1B761C0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v25);
    sub_1B761C0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v26);
    sub_1B761C0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v27);
    sub_1B761C0(&Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__, v28);
    sub_1B761C0(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v29);
    sub_1B761C0(&Method_SingletonTemplate_QuestTree__get_Instance__, v30);
    sub_1B761C0(&SoundManager_TypeInfo, v31);
    sub_1B761C0(&Method_QuestAfterAction_StateMain_UpdateAnim__, v32);
    sub_1B761C0(&string___TypeInfo, v33);
    sub_1B761C0(&TerminalPramsManager_TypeInfo, v34);
    sub_1B761C0(&TerminalSceneComponent_TypeInfo, v35);
    sub_1B761C0(&Method_QuestAfterAction_StateMain___c__UpdateAnim_b__16_31__, v36);
    sub_1B761C0(&Method_QuestAfterAction_StateMain___c__UpdateAnim_b__16_33__, v37);
    sub_1B761C0(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__10__, v38);
    sub_1B761C0(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__11__, v39);
    sub_1B761C0(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__12__, v40);
    sub_1B761C0(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__13__, v41);
    sub_1B761C0(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__14__, v42);
    sub_1B761C0(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__15__, v43);
    sub_1B761C0(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__16__, v44);
    sub_1B761C0(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__17__, v45);
    sub_1B761C0(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__18__, v46);
    sub_1B761C0(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__19__, v47);
    sub_1B761C0(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__20__, v48);
    sub_1B761C0(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__25__, v49);
    sub_1B761C0(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__32__, v50);
    sub_1B761C0(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__36__, v51);
    sub_1B761C0(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__37__, v52);
    sub_1B761C0(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__38__, v53);
    sub_1B761C0(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__39__, v54);
    sub_1B761C0(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__40__, v55);
    sub_1B761C0(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__9__, v56);
    sub_1B761C0(&QuestAfterAction_StateMain___c__DisplayClass16_0_TypeInfo, v57);
    sub_1B761C0(&Method_QuestAfterAction_StateMain___c__DisplayClass16_10__UpdateAnim_b__21__, v58);
    sub_1B761C0(&Method_QuestAfterAction_StateMain___c__DisplayClass16_10__UpdateAnim_b__22__, v59);
    sub_1B761C0(&QuestAfterAction_StateMain___c__DisplayClass16_10_TypeInfo, v60);
    sub_1B761C0(&Method_QuestAfterAction_StateMain___c__DisplayClass16_11__UpdateAnim_b__23__, v61);
    sub_1B761C0(&Method_QuestAfterAction_StateMain___c__DisplayClass16_11__UpdateAnim_b__24__, v62);
    sub_1B761C0(&QuestAfterAction_StateMain___c__DisplayClass16_11_TypeInfo, v63);
    sub_1B761C0(&Method_QuestAfterAction_StateMain___c__DisplayClass16_12__UpdateAnim_b__26__, v64);
    sub_1B761C0(&QuestAfterAction_StateMain___c__DisplayClass16_12_TypeInfo, v65);
    sub_1B761C0(&Method_QuestAfterAction_StateMain___c__DisplayClass16_13__UpdateAnim_b__27__, v66);
    sub_1B761C0(&QuestAfterAction_StateMain___c__DisplayClass16_13_TypeInfo, v67);
    sub_1B761C0(&Method_QuestAfterAction_StateMain___c__DisplayClass16_15__UpdateAnim_b__29__, v68);
    sub_1B761C0(&Method_QuestAfterAction_StateMain___c__DisplayClass16_15__UpdateAnim_b__30__, v69);
    sub_1B761C0(&QuestAfterAction_StateMain___c__DisplayClass16_15_TypeInfo, v70);
    sub_1B761C0(&Method_QuestAfterAction_StateMain___c__DisplayClass16_1__UpdateAnim_b__0__, v71);
    sub_1B761C0(&QuestAfterAction_StateMain___c__DisplayClass16_1_TypeInfo, v72);
    sub_1B761C0(&Method_QuestAfterAction_StateMain___c__DisplayClass16_2__UpdateAnim_b__1__, v73);
    sub_1B761C0(&QuestAfterAction_StateMain___c__DisplayClass16_2_TypeInfo, v74);
    sub_1B761C0(&Method_QuestAfterAction_StateMain___c__DisplayClass16_3__UpdateAnim_b__2__, v75);
    sub_1B761C0(&QuestAfterAction_StateMain___c__DisplayClass16_3_TypeInfo, v76);
    sub_1B761C0(&Method_QuestAfterAction_StateMain___c__DisplayClass16_4__UpdateAnim_b__3__, v77);
    sub_1B761C0(&QuestAfterAction_StateMain___c__DisplayClass16_4_TypeInfo, v78);
    sub_1B761C0(&Method_QuestAfterAction_StateMain___c__DisplayClass16_5__UpdateAnim_b__4__, v79);
    sub_1B761C0(&QuestAfterAction_StateMain___c__DisplayClass16_5_TypeInfo, v80);
    sub_1B761C0(&Method_QuestAfterAction_StateMain___c__DisplayClass16_6__UpdateAnim_b__5__, v81);
    sub_1B761C0(&QuestAfterAction_StateMain___c__DisplayClass16_6_TypeInfo, v82);
    sub_1B761C0(&Method_QuestAfterAction_StateMain___c__DisplayClass16_7__UpdateAnim_b__6__, v83);
    sub_1B761C0(&QuestAfterAction_StateMain___c__DisplayClass16_7_TypeInfo, v84);
    sub_1B761C0(&Method_QuestAfterAction_StateMain___c__DisplayClass16_8__UpdateAnim_b__7__, v85);
    sub_1B761C0(&QuestAfterAction_StateMain___c__DisplayClass16_8_TypeInfo, v86);
    sub_1B761C0(&Method_QuestAfterAction_StateMain___c__DisplayClass16_9__UpdateAnim_b__8__, v87);
    sub_1B761C0(&QuestAfterAction_StateMain___c__DisplayClass16_9_TypeInfo, v88);
    sub_1B761C0(&QuestAfterAction_StateMain___c_TypeInfo, v89);
    sub_1B761C0(&StringLiteral_89/*"\r\n"*/, v90);
    sub_1B761C0(&StringLiteral_1478/*"30101"*/, v91);
    sub_1B761C0(&StringLiteral_10820/*"QUEST_AFTER_ACTION_MESSAGE_"*/, v92);
    sub_1B761C0(&StringLiteral_1479/*"30102"*/, v93);
    sub_1B761C0(&StringLiteral_1403/*"10703"*/, v94);
    sub_1B761C0(&StringLiteral_3406/*"CAPTER WAIT"*/, v95);
    sub_1B761C0(&StringLiteral_1/*""*/, v96);
    sub_1B761C0(&StringLiteral_19808/*"gevINFOBAR_BACK"*/, v97);
    sub_1B761C0(&StringLiteral_1212/*"0"*/, v98);
    byte_4A2AE30 = 1;
  }
  isQuickUpdate = 0;
  *(_QWORD *)&color.fields.r = 0LL;
  *(_QWORD *)&color.fields.b = 0LL;
  value = 0LL;
  entity = 0LL;
  v99 = sub_1B7640C(QuestAfterAction_StateMain___c__DisplayClass16_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v99, 0LL);
  if ( !v99 )
    goto LABEL_874;
  *(_QWORD *)(v99 + 16) = this;
  sub_1B76164((ServantStatusBattleListViewItem_o *)(v99 + 16), (int32_t)this, v102, v103);
  *(_QWORD *)(v99 + 24) = that;
  v104 = (__int64 *)(v99 + 24);
  sub_1B76164((ServantStatusBattleListViewItem_o *)(v99 + 24), (int32_t)that, v105, v106);
  if ( this->fields.IsAnimDoing )
    return;
  updated = ((__int64 (__fastcall *)(QuestAfterAction_StateMain_o *, Il2CppMethodPointer))this->klass->vtable._10_get_CommandBuf.method)(
              this,
              this->klass->vtable._11_get_CommandIndex.methodPtr);
  if ( !updated )
    return;
  if ( !*v104 )
    goto LABEL_874;
  if ( *(_BYTE *)(*v104 + 161) )
  {
    updated = ((__int64 (__fastcall *)(QuestAfterAction_StateMain_o *, Il2CppMethodPointer))this->klass->vtable._14_EndAnim.method)(
                this,
                this->klass->vtable._15_onEnd.methodPtr);
    if ( *v104 )
    {
      *(_BYTE *)(*v104 + 161) = 0;
      return;
    }
LABEL_874:
    sub_1B7641C(updated, v101);
  }
  klass = this->klass;
  this->fields.IsAnimDoing = 1;
  v108 = ((__int64 (__fastcall *)(QuestAfterAction_StateMain_o *, Il2CppMethodPointer))klass->vtable._10_get_CommandBuf.method)(
           this,
           klass->vtable._11_get_CommandIndex.methodPtr);
  updated = ((__int64 (__fastcall *)(QuestAfterAction_StateMain_o *, Il2CppMethodPointer))this->klass->vtable._11_get_CommandIndex.method)(
              this,
              this->klass->vtable._12_set_CommandIndex.methodPtr);
  if ( !v108 )
    goto LABEL_874;
  if ( (unsigned int)updated >= *(_DWORD *)(v108 + 24) )
    goto LABEL_875;
  v109 = *(QuestAfterAction_Command_o **)(v108 + 8LL * (int)updated + 32);
  updated = ((__int64 (__fastcall *)(QuestAfterAction_StateMain_o *, QuestAfterAction_Command_o *, Il2CppMethodPointer))this->klass->vtable._9_IsUsableCommand.method)(
              this,
              v109,
              this->klass->vtable._10_get_CommandBuf.methodPtr);
  if ( (updated & 1) == 0 )
    goto LABEL_622;
  if ( !*v104 )
    goto LABEL_874;
  v110 = *(BlankEarthQuestAfterAction_o **)(*v104 + 48);
  v111 = (System_Action_o *)sub_1B7640C(System_Action_TypeInfo);
  System_Action___ctor(v111, (Il2CppObject *)this, (intptr_t)this->klass->vtable._15_onEnd.methodPtr, 0LL);
  if ( !v110 )
    goto LABEL_874;
  updated = BlankEarthQuestAfterAction__UpdateAnim(v110, v101, v109, v111, &isQuickUpdate, v112);
  if ( (updated & 1) != 0 )
  {
    if ( isQuickUpdate )
    {
LABEL_18:
      ((void (__fastcall *)(QuestAfterAction_StateMain_o *, Il2CppMethodPointer))this->klass->vtable._14_EndAnim.method)(
        this,
        this->klass->vtable._15_onEnd.methodPtr);
LABEL_19:
      ((void (__fastcall *)(QuestAfterAction_StateMain_o *, __int64, Il2CppMethodPointer))this->klass->vtable._13_UpdateAnim.method)(
        this,
        *v104,
        this->klass->vtable._14_EndAnim.methodPtr);
      return;
    }
    return;
  }
  if ( !v109 )
    goto LABEL_874;
  id = v109->fields.id;
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
          if ( !byte_4A2915D )
          {
            sub_1B761C0(&TerminalSceneComponent_TypeInfo, v101);
            byte_4A2915D = 1;
          }
          updated = (__int64)TerminalSceneComponent_TypeInfo;
          if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            updated = (__int64)TerminalSceneComponent_TypeInfo;
          }
          v204 = **(_QWORD **)(updated + 184);
          if ( !v204 )
            goto LABEL_874;
          updated = *(_QWORD *)(v204 + 256);
          if ( !updated )
            goto LABEL_874;
          updated = (__int64)ScrTerminalListTop__mfGetMyFsmP((ScrTerminalListTop_o *)updated, 0LL);
          if ( !updated )
            goto LABEL_874;
          v205 = (PlayMakerFSM_o *)updated;
          ActiveStateName = PlayMakerFSM__get_ActiveStateName((PlayMakerFSM_o *)updated, 0LL);
          if ( System_String__op_Equality(ActiveStateName, (System_String_o *)StringLiteral_3406/*"CAPTER WAIT"*/, 0LL) )
          {
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            if ( !byte_4A2915D )
            {
              sub_1B761C0(&TerminalSceneComponent_TypeInfo, v101);
              byte_4A2915D = 1;
            }
            updated = (__int64)TerminalSceneComponent_TypeInfo;
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
              updated = (__int64)TerminalSceneComponent_TypeInfo;
            }
            v207 = **(_QWORD **)(updated + 184);
            if ( !v207 )
              goto LABEL_874;
            v208 = *(_QWORD *)(v207 + 256);
            if ( !v208 )
              goto LABEL_874;
            v209 = *(QuestBoardListViewManager_o **)(v208 + 296);
            updated = (__int64)QuestAfterAction_StateMain___c_TypeInfo;
            if ( !QuestAfterAction_StateMain___c_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(QuestAfterAction_StateMain___c_TypeInfo);
              updated = (__int64)QuestAfterAction_StateMain___c_TypeInfo;
            }
            v210 = *(System_Action_o **)(*(_QWORD *)(updated + 184) + 8LL);
            if ( !v210 )
            {
              if ( !*(_DWORD *)(updated + 224) )
              {
                j_il2cpp_runtime_class_init_0(updated);
                updated = (__int64)QuestAfterAction_StateMain___c_TypeInfo;
              }
              v211 = **(Il2CppObject ***)(updated + 184);
              v210 = (System_Action_o *)sub_1B7640C(System_Action_TypeInfo);
              System_Action___ctor(v210, v211, Method_QuestAfterAction_StateMain___c__UpdateAnim_b__16_31__, 0LL);
              static_fields = QuestAfterAction_StateMain___c_TypeInfo->static_fields;
              static_fields->__9__16_31 = v210;
              sub_1B76164((ServantStatusBattleListViewItem_o *)&static_fields->__9__16_31, (int32_t)v210, v213, v214);
            }
            if ( !v209 )
              goto LABEL_874;
            QuestBoardListViewManager__SetMode(v209, 4, v210, 0, 0, 0LL);
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            if ( !byte_4A2915D )
            {
              sub_1B761C0(&TerminalSceneComponent_TypeInfo, v101);
              byte_4A2915D = 1;
            }
            v215 = TerminalSceneComponent_TypeInfo;
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
              v215 = TerminalSceneComponent_TypeInfo;
            }
            updated = (__int64)v215->static_fields->mInstance;
            if ( !updated )
              goto LABEL_874;
            TerminalSceneComponent__CallQuestInformationClose((TerminalSceneComponent_o *)updated, 0LL);
            PlayMakerFSM__SendEvent(v205, (System_String_o *)StringLiteral_19808/*"gevINFOBAR_BACK"*/, 0LL);
          }
          goto LABEL_622;
        }
        if ( id != 510 )
        {
          if ( id == 520 )
          {
            DEFAULT_FADE_TIME = System_Single__Parse(v109->fields.param, 0LL);
            if ( DEFAULT_FADE_TIME <= 0.0 )
            {
              v117 = AvalonSceneManager_TypeInfo;
              if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
                v117 = AvalonSceneManager_TypeInfo;
              }
              DEFAULT_FADE_TIME = v117->static_fields->DEFAULT_FADE_TIME;
            }
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            if ( !byte_4A2915D )
            {
              sub_1B761C0(&TerminalSceneComponent_TypeInfo, v115);
              byte_4A2915D = 1;
            }
            v118 = TerminalSceneComponent_TypeInfo;
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
              v118 = TerminalSceneComponent_TypeInfo;
            }
            mInstance = v118->static_fields->mInstance;
            v120 = (System_Action_o *)sub_1B7640C(System_Action_TypeInfo);
            System_Action___ctor(
              v120,
              (Il2CppObject *)v99,
              Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__32__,
              0LL);
            if ( !mInstance )
              goto LABEL_874;
            v121 = mInstance;
            v122 = DEFAULT_FADE_TIME;
            v123 = v120;
LABEL_46:
            TerminalSceneComponent__Fadein_MapDisp(v121, v122, v123, 0LL);
          }
          return;
        }
        updated = (__int64)v109->fields.param;
        if ( !updated )
          goto LABEL_874;
        updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
        if ( !updated )
          goto LABEL_874;
        v216 = updated;
        if ( *(_DWORD *)(updated + 24) )
        {
          v217 = System_Int32__Parse(*(System_String_o **)(updated + 32), 0LL);
          v218 = 0.5;
          if ( *(int *)(v216 + 24) >= 2 )
          {
            v219 = System_Int32__Parse(*(System_String_o **)(v216 + 40), 0LL);
            if ( *(int *)(v216 + 24) >= 3 )
              v218 = System_Single__Parse(*(System_String_o **)(v216 + 48), 0LL);
          }
          else
          {
            v219 = v217;
            v217 = -1;
          }
          updated = *v104;
          if ( !*v104 )
            goto LABEL_874;
          MapComponent_object = QuestAfterAction__GetMapComponent_object_(
                                  (QuestAfterAction_o *)updated,
                                  0,
                                  v219,
                                  this,
                                  (const MethodInfo_2EF2810 *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)MapComponent_object, 0LL, 0LL) )
          {
            if ( v217 >= 1 )
            {
              updated = *v104;
              if ( !*v104 )
                goto LABEL_874;
              v278 = QuestAfterAction__GetMapComponent_object_(
                       (QuestAfterAction_o *)updated,
                       0,
                       v217,
                       this,
                       (const MethodInfo_2EF2810 *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v278, 0LL, 0LL) )
              {
                if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
                if ( !byte_4A2915D )
                {
                  sub_1B761C0(&TerminalSceneComponent_TypeInfo, v101);
                  byte_4A2915D = 1;
                }
                updated = (__int64)TerminalSceneComponent_TypeInfo;
                if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
                  updated = (__int64)TerminalSceneComponent_TypeInfo;
                }
                v279 = **(_QWORD **)(updated + 184);
                if ( !v279 )
                  goto LABEL_874;
                if ( !v278 )
                  goto LABEL_874;
                v280 = *(ScrTerminalMap_o **)(v279 + 264);
                updated = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v278, 0LL);
                if ( !v280 )
                  goto LABEL_874;
                ScrTerminalMap__SetPlayerIcon(v280, (UnityEngine_GameObject_o *)updated, 0LL);
              }
            }
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            if ( !byte_4A2915D )
            {
              sub_1B761C0(&TerminalSceneComponent_TypeInfo, v101);
              byte_4A2915D = 1;
            }
            updated = (__int64)TerminalSceneComponent_TypeInfo;
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
              updated = (__int64)TerminalSceneComponent_TypeInfo;
            }
            v281 = **(_QWORD **)(updated + 184);
            if ( !v281 )
              goto LABEL_874;
            if ( !MapComponent_object )
              goto LABEL_874;
            v282 = *(ScrTerminalMap_o **)(v281 + 264);
            gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)MapComponent_object, 0LL);
            v284 = (System_Action_o *)sub_1B7640C(System_Action_TypeInfo);
            System_Action___ctor(v284, (Il2CppObject *)this, (intptr_t)this->klass->vtable._15_onEnd.methodPtr, 0LL);
            if ( !v282 )
              goto LABEL_874;
            ScrTerminalMap__MovePlayerIcon(v282, gameObject, v219, v284, v218, 0LL);
          }
          return;
        }
        goto LABEL_875;
      }
      if ( (unsigned int)(id - 351) >= 2 )
      {
        switch ( id )
        {
          case 400:
            v135 = sub_1B7640C(QuestAfterAction_StateMain___c__DisplayClass16_10_TypeInfo);
            System_Object___ctor((Il2CppObject *)v135, 0LL);
            if ( !v135 )
              goto LABEL_874;
            *(_QWORD *)(v135 + 24) = v99;
            v138 = v135 + 24;
            sub_1B76164((ServantStatusBattleListViewItem_o *)(v135 + 24), v99, v136, v137);
            updated = (__int64)v109->fields.param;
            if ( !updated )
              goto LABEL_874;
            updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
            if ( !updated )
              goto LABEL_874;
            v139 = *(_QWORD *)(updated + 24);
            v140 = updated;
            if ( v139 )
            {
              if ( !(_DWORD)v139 )
                goto LABEL_875;
              updated = System_Int32__Parse(*(System_String_o **)(updated + 32), 0LL);
              v141 = updated;
              if ( *(int *)(v140 + 24) >= 2 )
              {
                updated = System_Int32__Parse(*(System_String_o **)(v140 + 40), 0LL);
                v142 = (int)updated < 1;
                if ( *(int *)(v140 + 24) < 3 )
                {
                  v143 = 0;
                }
                else
                {
                  updated = System_Int32__Parse(*(System_String_o **)(v140 + 48), 0LL);
                  v143 = (int)updated > 0;
                }
                goto LABEL_763;
              }
            }
            else
            {
              v141 = 0;
            }
            v143 = 0;
            v142 = 1;
LABEL_763:
            if ( !*(_QWORD *)v138 )
              goto LABEL_874;
            updated = *(_QWORD *)(*(_QWORD *)v138 + 24LL);
            if ( !updated )
              goto LABEL_874;
            v568 = QuestAfterAction__GetMapComponent_object_(
                     (QuestAfterAction_o *)updated,
                     2,
                     v141,
                     this,
                     (const MethodInfo_2EF2810 *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
            *(_QWORD *)(v135 + 16) = v568;
            sub_1B76164((ServantStatusBattleListViewItem_o *)(v135 + 16), (int32_t)v568, v569, v570);
            v571 = *(UnityEngine_Object_o **)(v135 + 16);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            updated = UnityEngine_Object__op_Equality(v571, 0LL, 0LL);
            if ( (updated & 1) != 0 )
              return;
            v572 = *(MapGimmickComponent_o **)(v135 + 16);
            if ( !v572 )
              goto LABEL_874;
            v572->fields.isForceNotActive = v143;
            v573 = (System_Action_o *)sub_1B7640C(System_Action_TypeInfo);
            v574 = v573;
            if ( v142 )
            {
              System_Action___ctor(
                v573,
                (Il2CppObject *)v135,
                Method_QuestAfterAction_StateMain___c__DisplayClass16_10__UpdateAnim_b__22__,
                0LL);
              v496 = 2;
              goto LABEL_781;
            }
            System_Action___ctor(
              v573,
              (Il2CppObject *)v135,
              Method_QuestAfterAction_StateMain___c__DisplayClass16_10__UpdateAnim_b__21__,
              0LL);
            v598 = 2;
            goto LABEL_836;
          case 401:
            v135 = sub_1B7640C(QuestAfterAction_StateMain___c__DisplayClass16_11_TypeInfo);
            System_Object___ctor((Il2CppObject *)v135, 0LL);
            if ( !v135 )
              goto LABEL_874;
            *(_QWORD *)(v135 + 24) = v99;
            v419 = v135 + 24;
            sub_1B76164((ServantStatusBattleListViewItem_o *)(v135 + 24), v99, v417, v418);
            updated = (__int64)v109->fields.param;
            if ( !updated )
              goto LABEL_874;
            updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
            if ( !updated )
              goto LABEL_874;
            v420 = *(_QWORD *)(updated + 24);
            v421 = updated;
            if ( v420 )
            {
              if ( !(_DWORD)v420 )
                goto LABEL_875;
              updated = System_Int32__Parse(*(System_String_o **)(updated + 32), 0LL);
              v422 = updated;
              if ( *(int *)(v421 + 24) >= 2 )
              {
                updated = System_Int32__Parse(*(System_String_o **)(v421 + 40), 0LL);
                v423 = (int)updated < 1;
                if ( *(int *)(v421 + 24) < 3 )
                {
                  v424 = 0;
                }
                else
                {
                  updated = System_Int32__Parse(*(System_String_o **)(v421 + 48), 0LL);
                  v424 = (int)updated > 0;
                }
                goto LABEL_773;
              }
            }
            else
            {
              v422 = 0;
            }
            v424 = 0;
            v423 = 1;
LABEL_773:
            if ( !*(_QWORD *)v419 )
              goto LABEL_874;
            updated = *(_QWORD *)(*(_QWORD *)v419 + 24LL);
            if ( !updated )
              goto LABEL_874;
            v575 = QuestAfterAction__GetMapComponent_object_(
                     (QuestAfterAction_o *)updated,
                     2,
                     v422,
                     this,
                     (const MethodInfo_2EF2810 *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
            *(_QWORD *)(v135 + 16) = v575;
            sub_1B76164((ServantStatusBattleListViewItem_o *)(v135 + 16), (int32_t)v575, v576, v577);
            v578 = *(UnityEngine_Object_o **)(v135 + 16);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            updated = UnityEngine_Object__op_Equality(v578, 0LL, 0LL);
            if ( (updated & 1) != 0 )
              return;
            v572 = *(MapGimmickComponent_o **)(v135 + 16);
            if ( !v572 )
              goto LABEL_874;
            v572->fields.isForceLoop = v424;
            v572->fields.isForceNotActive = 0;
            v579 = (System_Action_o *)sub_1B7640C(System_Action_TypeInfo);
            v574 = v579;
            if ( v423 )
            {
              System_Action___ctor(
                v579,
                (Il2CppObject *)v135,
                Method_QuestAfterAction_StateMain___c__DisplayClass16_11__UpdateAnim_b__24__,
                0LL);
              v496 = 3;
LABEL_781:
              v580 = v572;
              v581 = v574;
LABEL_833:
              MapGimmickComponent__SetState(v580, v496, v581, 0LL);
              return;
            }
            System_Action___ctor(
              v579,
              (Il2CppObject *)v135,
              Method_QuestAfterAction_StateMain___c__DisplayClass16_11__UpdateAnim_b__23__,
              0LL);
            v598 = 3;
LABEL_836:
            MapGimmickComponent__SetState(v572, v598, v574, 0LL);
            updated = ((__int64 (__fastcall *)(QuestAfterAction_StateMain_o *, Il2CppMethodPointer))this->klass->vtable._14_EndAnim.method)(
                        this,
                        this->klass->vtable._15_onEnd.methodPtr);
            v599 = *(_QWORD *)(v135 + 24);
            if ( !v599 )
              goto LABEL_874;
            ((void (__fastcall *)(QuestAfterAction_StateMain_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._13_UpdateAnim.method)(
              this,
              *(_QWORD *)(v599 + 24),
              this->klass->vtable._14_EndAnim.methodPtr);
            return;
          case 402:
            updated = (__int64)v109->fields.param;
            if ( !updated )
              goto LABEL_874;
            updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
            if ( !updated )
              goto LABEL_874;
            v425 = *(_QWORD *)(updated + 24);
            v426 = updated;
            if ( v425 )
            {
              if ( !(_DWORD)v425 )
                goto LABEL_875;
              v427 = System_Int32__Parse(*(System_String_o **)(updated + 32), 0LL);
              if ( *(int *)(v426 + 24) >= 2 )
              {
                v428 = System_Int32__Parse(*(System_String_o **)(v426 + 40), 0LL) > 0;
                goto LABEL_784;
              }
            }
            else
            {
              v427 = 0;
            }
            v428 = 0;
LABEL_784:
            updated = *v104;
            if ( !*v104 )
              goto LABEL_874;
            v582 = QuestAfterAction__GetMapComponent_object_(
                     (QuestAfterAction_o *)updated,
                     2,
                     v427,
                     this,
                     (const MethodInfo_2EF2810 *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            updated = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v582, 0LL, 0LL);
            if ( (updated & 1) == 0 )
            {
              if ( !v582 )
                goto LABEL_874;
              BYTE1(v582[6].monitor) = v428;
              MapGimmickComponent__SetDispAnimQuick((MapGimmickComponent_o *)v582, 0, 0LL);
              v402 = v582[7].klass;
              if ( !v402 )
                goto LABEL_874;
LABEL_790:
              v402[4] = 0;
              goto LABEL_18;
            }
            return;
          case 403:
            updated = (__int64)v109->fields.param;
            if ( !updated )
              goto LABEL_874;
            updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
            if ( !updated )
              goto LABEL_874;
            v429 = *(_QWORD *)(updated + 24);
            v430 = updated;
            if ( v429 )
            {
              if ( !(_DWORD)v429 )
                goto LABEL_875;
              v431 = System_Int32__Parse(*(System_String_o **)(updated + 32), 0LL);
              if ( *(int *)(v430 + 24) >= 2 )
              {
                v432 = System_Int32__Parse(*(System_String_o **)(v430 + 40), 0LL) > 0;
                goto LABEL_793;
              }
            }
            else
            {
              v431 = 0;
            }
            v432 = 0;
LABEL_793:
            updated = *v104;
            if ( !*v104 )
              goto LABEL_874;
            v583 = QuestAfterAction__GetMapComponent_object_(
                     (QuestAfterAction_o *)updated,
                     2,
                     v431,
                     this,
                     (const MethodInfo_2EF2810 *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            updated = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v583, 0LL, 0LL);
            if ( (updated & 1) == 0 )
            {
              if ( !v583 )
                goto LABEL_874;
              LOBYTE(v583[6].monitor) = v432;
              BYTE1(v583[6].monitor) = 0;
              MapGimmickComponent__SetDispAnimQuick((MapGimmickComponent_o *)v583, 1, 0LL);
              v584 = v583[7].klass;
              if ( !v584 )
                goto LABEL_874;
              LODWORD(v584->_1.name) = 1;
              goto LABEL_18;
            }
            return;
          case 404:
            updated = (__int64)v109->fields.param;
            if ( !updated )
              goto LABEL_874;
            updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
            if ( !updated )
              goto LABEL_874;
            v433 = updated;
            if ( *(int *)(updated + 24) <= 4 )
              goto LABEL_622;
            v434 = System_Single__Parse(*(System_String_o **)(updated + 56), 0LL);
            if ( !*(_DWORD *)(v433 + 24) )
              goto LABEL_875;
            v435 = (QuestAfterAction_o *)*v104;
            v436 = v434;
            updated = System_Int32__Parse(*(System_String_o **)(v433 + 32), 0LL);
            if ( !v435 )
              goto LABEL_874;
            v437 = QuestAfterAction__GetMapComponent_object_(
                     v435,
                     2,
                     updated,
                     this,
                     (const MethodInfo_2EF2810 *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v437, 0LL, 0LL) )
              return;
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            if ( !byte_4A2915D )
            {
              sub_1B761C0(&TerminalSceneComponent_TypeInfo, v101);
              byte_4A2915D = 1;
            }
            updated = (__int64)TerminalSceneComponent_TypeInfo;
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
              updated = (__int64)TerminalSceneComponent_TypeInfo;
            }
            v438 = **(_QWORD **)(updated + 184);
            if ( !v438 )
              goto LABEL_874;
            if ( *(_DWORD *)(v433 + 24) <= 1u )
              goto LABEL_875;
            v439 = *(ScrTerminalMap_o **)(v438 + 264);
            v440 = System_Single__Parse(*(System_String_o **)(v433 + 40), 0LL);
            if ( *(_DWORD *)(v433 + 24) <= 2u )
              goto LABEL_875;
            v441 = v440;
            v442 = System_Single__Parse(*(System_String_o **)(v433 + 48), 0LL);
            if ( !v439 )
              goto LABEL_874;
            *(UnityEngine_Vector3_o *)&v443 = ScrTerminalMap__LocalPosFromCoord(v439, v441, v442, 0.0, 0.0, 0LL);
            if ( *(_DWORD *)(v433 + 24) <= 4u )
              goto LABEL_875;
            v446 = v443;
            v447 = v444;
            v448 = v445;
            v449 = System_Int32__Parse(*(System_String_o **)(v433 + 64), 0LL);
            v450 = (System_Action_o *)sub_1B7640C(System_Action_TypeInfo);
            System_Action___ctor(
              v450,
              (Il2CppObject *)v99,
              Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__25__,
              0LL);
            if ( !v437 )
              goto LABEL_874;
            v634.fields.y = v447;
            v634.fields.z = v448;
            v634.fields.x = v446;
            MapGimmickComponent__SetMoveAnim((MapGimmickComponent_o *)v437, v634, v436 * 0.001, v449, v450, 0LL);
            return;
          case 405:
            v451 = sub_1B7640C(QuestAfterAction_StateMain___c__DisplayClass16_12_TypeInfo);
            System_Object___ctor((Il2CppObject *)v451, 0LL);
            if ( !v451 )
              goto LABEL_874;
            *(_QWORD *)(v451 + 24) = v99;
            sub_1B76164((ServantStatusBattleListViewItem_o *)(v451 + 24), v99, v452, v453);
            v454 = *(_QWORD *)(v451 + 24);
            if ( !v454 )
              goto LABEL_874;
            v455 = *(QuestAfterAction_o **)(v454 + 24);
            updated = System_Int32__Parse(v109->fields.param, 0LL);
            if ( !v455 )
              goto LABEL_874;
            v456 = QuestAfterAction__GetMapComponent_object_(
                     v455,
                     2,
                     updated,
                     this,
                     (const MethodInfo_2EF2810 *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
            *(_QWORD *)(v451 + 16) = v456;
            sub_1B76164((ServantStatusBattleListViewItem_o *)(v451 + 16), (int32_t)v456, v457, v458);
            v459 = *(UnityEngine_Object_o **)(v451 + 16);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Equality(v459, 0LL, 0LL) )
              return;
            v460 = *(MapGimmickComponent_o **)(v451 + 16);
            v461 = (System_Action_o *)sub_1B7640C(System_Action_TypeInfo);
            System_Action___ctor(
              v461,
              (Il2CppObject *)v451,
              Method_QuestAfterAction_StateMain___c__DisplayClass16_12__UpdateAnim_b__26__,
              0LL);
            if ( !v460 )
              goto LABEL_874;
            MapGimmickComponent__SetState(v460, 3, v461, 0LL);
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            if ( !byte_4A2915D )
            {
              sub_1B761C0(&TerminalSceneComponent_TypeInfo, v101);
              byte_4A2915D = 1;
            }
            updated = (__int64)TerminalSceneComponent_TypeInfo;
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
              updated = (__int64)TerminalSceneComponent_TypeInfo;
            }
            v462 = **(TerminalSceneComponent_o ***)(updated + 184);
            if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
            if ( !v462 )
              goto LABEL_874;
            v121 = v462;
            v123 = 0LL;
            v122 = AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME;
            goto LABEL_46;
          case 406:
            v463 = sub_1B7640C(QuestAfterAction_StateMain___c__DisplayClass16_13_TypeInfo);
            System_Object___ctor((Il2CppObject *)v463, 0LL);
            if ( !v463 )
              goto LABEL_874;
            *(_QWORD *)(v463 + 32) = v99;
            sub_1B76164((ServantStatusBattleListViewItem_o *)(v463 + 32), v99, v464, v465);
            updated = (__int64)v109->fields.param;
            if ( !updated )
              goto LABEL_874;
            v466 = System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
            *(_QWORD *)(v463 + 24) = v466;
            v467 = (__int64 *)(v463 + 24);
            sub_1B76164((ServantStatusBattleListViewItem_o *)(v463 + 24), (int32_t)v466, v468, v469);
            v470 = *(_QWORD *)(v463 + 32);
            if ( !v470 )
              goto LABEL_874;
            v471 = *v467;
            if ( !*v467 )
              goto LABEL_874;
            if ( !*(_DWORD *)(v471 + 24) )
              goto LABEL_875;
            v472 = *(QuestAfterAction_o **)(v470 + 24);
            updated = System_Int32__Parse(*(System_String_o **)(v471 + 32), 0LL);
            if ( !v472 )
              goto LABEL_874;
            v473 = QuestAfterAction__GetMapComponent_object_(
                     v472,
                     2,
                     updated,
                     this,
                     (const MethodInfo_2EF2810 *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
            *(_QWORD *)(v463 + 16) = v473;
            sub_1B76164((ServantStatusBattleListViewItem_o *)(v463 + 16), (int32_t)v473, v474, v475);
            v476 = *(UnityEngine_Object_o **)(v463 + 16);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Equality(v476, 0LL, 0LL) )
              return;
            v477 = *(MapGimmickComponent_o **)(v463 + 16);
            v478 = (System_Action_o *)sub_1B7640C(System_Action_TypeInfo);
            v479 = &Method_QuestAfterAction_StateMain___c__DisplayClass16_13__UpdateAnim_b__27__;
            v480 = v478;
            goto LABEL_633;
          case 407:
            updated = (__int64)v109->fields.param;
            if ( !updated )
              goto LABEL_874;
            updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
            if ( !updated )
              goto LABEL_874;
            v481 = updated;
            if ( !*(_DWORD *)(updated + 24) )
              goto LABEL_875;
            v482 = (QuestAfterAction_o *)*v104;
            updated = System_Int32__Parse(*(System_String_o **)(updated + 32), 0LL);
            if ( !v482 )
              goto LABEL_874;
            v483 = QuestAfterAction__GetMapComponent_object_(
                     v482,
                     2,
                     updated,
                     this,
                     (const MethodInfo_2EF2810 *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            updated = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v483, 0LL, 0LL);
            if ( (updated & 1) != 0 )
              return;
            if ( !v483 )
              goto LABEL_874;
            updated = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v483, 0LL);
            if ( !updated )
              goto LABEL_874;
            updated = (__int64)UnityEngine_GameObject__GetComponentInChildren_object_(
                                 (UnityEngine_GameObject_o *)updated,
                                 (const MethodInfo_2EB1C1C *)Method_UnityEngine_GameObject_GetComponentInChildren_UISprite___);
            if ( *(_DWORD *)(v481 + 24) <= 1u )
              goto LABEL_875;
            v484 = (UIWidget_o *)updated;
            updated = UnityEngine_ColorUtility__TryParseHtmlString(*(System_String_o **)(v481 + 40), &color, 0LL);
            if ( !v484 )
              goto LABEL_874;
            UIWidget__set_color(v484, color, 0LL);
            goto LABEL_622;
          case 408:
            v463 = sub_1B7640C(QuestAfterAction_StateMain___c__DisplayClass16_15_TypeInfo);
            System_Object___ctor((Il2CppObject *)v463, 0LL);
            if ( !v463 )
              goto LABEL_874;
            *(_QWORD *)(v463 + 24) = v99;
            sub_1B76164((ServantStatusBattleListViewItem_o *)(v463 + 24), v99, v485, v486);
            v487 = *(_QWORD *)(v463 + 24);
            if ( !v487 )
              goto LABEL_874;
            v488 = *(QuestAfterAction_o **)(v487 + 24);
            updated = System_Int32__Parse(v109->fields.param, 0LL);
            if ( !v488 )
              goto LABEL_874;
            v489 = QuestAfterAction__GetMapComponent_object_(
                     v488,
                     2,
                     updated,
                     this,
                     (const MethodInfo_2EF2810 *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
            *(_QWORD *)(v463 + 16) = v489;
            v490 = v463 + 16;
            sub_1B76164((ServantStatusBattleListViewItem_o *)(v463 + 16), (int32_t)v489, v491, v492);
            v493 = *(UnityEngine_Object_o **)(v463 + 16);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Equality(v493, 0LL, 0LL) )
              return;
            updated = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_371299C *)Method_SingletonTemplate_QuestTree__get_Instance__);
            if ( !*(_QWORD *)v490 || !updated )
              goto LABEL_874;
            v494 = QuestTree__CheckMapGimmickCond_33946152(
                     (QuestTree_o *)updated,
                     *(MapControl_MapGimmickInfo_o **)(*(_QWORD *)v490 + 112LL),
                     0LL);
            v477 = *(MapGimmickComponent_o **)v490;
            v495 = v494;
            v478 = (System_Action_o *)sub_1B7640C(System_Action_TypeInfo);
            v480 = v478;
            if ( v495 )
            {
              v479 = &Method_QuestAfterAction_StateMain___c__DisplayClass16_15__UpdateAnim_b__29__;
LABEL_633:
              System_Action___ctor(v478, (Il2CppObject *)v463, *v479, 0LL);
              if ( !v477 )
                goto LABEL_874;
              v496 = 3;
            }
            else
            {
              System_Action___ctor(
                v478,
                (Il2CppObject *)v463,
                Method_QuestAfterAction_StateMain___c__DisplayClass16_15__UpdateAnim_b__30__,
                0LL);
              if ( !v477 )
                goto LABEL_874;
              v496 = 2;
            }
            v580 = v477;
            v581 = v480;
            goto LABEL_833;
          case 409:
            updated = (__int64)v109->fields.param;
            if ( !updated )
              goto LABEL_874;
            updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
            if ( !updated )
              goto LABEL_874;
            v497 = *(_QWORD *)(updated + 24);
            v498 = updated;
            if ( v497 )
            {
              if ( !(_DWORD)v497 )
                goto LABEL_875;
              v499 = System_Int32__Parse(*(System_String_o **)(updated + 32), 0LL);
              if ( *(int *)(v498 + 24) >= 2 )
              {
                v500 = System_Int32__Parse(*(System_String_o **)(v498 + 40), 0LL) > 0;
                goto LABEL_802;
              }
            }
            else
            {
              v499 = 0;
            }
            v500 = 0;
LABEL_802:
            updated = *v104;
            if ( !*v104 )
              goto LABEL_874;
            v585 = QuestAfterAction__GetMapComponent_object_(
                     (QuestAfterAction_o *)updated,
                     2,
                     v499,
                     this,
                     (const MethodInfo_2EF2810 *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            updated = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v585, 0LL, 0LL);
            if ( (updated & 1) == 0 )
            {
              if ( !v585 )
                goto LABEL_874;
              LOBYTE(v585[6].monitor) = v500;
              BYTE1(v585[6].monitor) = 0;
              MapGimmickComponent__SetDispAnim((MapGimmickComponent_o *)v585, 1, 0LL);
              v586 = v585[7].klass;
              if ( !v586 )
                goto LABEL_874;
              LODWORD(v586->_1.name) = 1;
              v587 = this->klass;
              this->fields.IsAnimDoing = 0;
              v588 = ((__int64 (__fastcall *)(QuestAfterAction_StateMain_o *, Il2CppMethodPointer))v587->vtable._11_get_CommandIndex.method)(
                       this,
                       v587->vtable._12_set_CommandIndex.methodPtr);
              ((void (__fastcall *)(QuestAfterAction_StateMain_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._12_set_CommandIndex.method)(
                this,
                (unsigned int)(v588 + 1),
                this->klass->vtable._13_UpdateAnim.methodPtr);
              goto LABEL_19;
            }
            return;
          default:
            if ( id != 500 )
              return;
            v355 = System_Int32__Parse(v109->fields.param, 0LL);
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            if ( !byte_4A2AE7B )
            {
              sub_1B761C0(&TerminalPramsManager_TypeInfo, v354);
              byte_4A2AE7B = 1;
            }
            v356 = TerminalPramsManager_TypeInfo;
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
              v356 = TerminalPramsManager_TypeInfo;
            }
            v356->static_fields->_AfterActionFocusQuestId_k__BackingField = v355;
            if ( !DataManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
            updated = (__int64)DataManager__GetMaster_object_((const MethodInfo_2E623B4 *)Method_DataManager_GetMaster_QuestMaster___);
            if ( !updated )
              goto LABEL_874;
            if ( !DataMasterBase_object__object__int___TryGetEntity(
                    (DataMasterBase_TMaster__TEntity__PKType__o *)updated,
                    &entity,
                    v355,
                    (const MethodInfo_30FF7D4 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__) )
              goto LABEL_622;
            updated = (__int64)entity;
            if ( !entity )
              goto LABEL_874;
            v357 = (QuestAfterAction_o *)*v104;
            updated = QuestEntity__getSpotId((QuestEntity_o *)entity, 0LL);
            if ( !v357 )
              goto LABEL_874;
            v358 = QuestAfterAction__GetMapComponent_object_(
                     v357,
                     0,
                     updated,
                     this,
                     (const MethodInfo_2EF2810 *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            updated = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v358, 0LL, 0LL);
            if ( (updated & 1) == 0 )
              goto LABEL_622;
            if ( !v358 )
              goto LABEL_874;
            SrcSpotBasePrefab__SelectSpot((SrcSpotBasePrefab_o *)v358, 0, 0LL);
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            if ( !byte_4A2AE7C )
            {
              sub_1B761C0(&TerminalPramsManager_TypeInfo, v359);
              byte_4A2AE7C = 1;
            }
            v360 = TerminalPramsManager_TypeInfo;
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
              v360 = TerminalPramsManager_TypeInfo;
            }
            v360->static_fields->_IsBackQuestBoardDisable_k__BackingField = 1;
            goto LABEL_622;
        }
      }
      updated = (__int64)v109->fields.param;
      if ( !updated )
        goto LABEL_874;
      updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
      if ( !updated )
        goto LABEL_874;
      v156 = updated;
      if ( *(int *)(updated + 24) <= 4 )
        goto LABEL_622;
      v157 = System_Single__Parse(*(System_String_o **)(updated + 32), 0LL);
      if ( *(_DWORD *)(v156 + 24) <= 1u )
        goto LABEL_875;
      v158 = v157;
      v159 = System_Single__Parse(*(System_String_o **)(v156 + 40), 0LL);
      if ( *(_DWORD *)(v156 + 24) <= 2u )
        goto LABEL_875;
      v160 = v159;
      v161 = System_Single__Parse(*(System_String_o **)(v156 + 48), 0LL);
      if ( *(_DWORD *)(v156 + 24) <= 3u )
        goto LABEL_875;
      v162 = v161;
      v163 = System_Single__Parse(*(System_String_o **)(v156 + 56), 0LL);
      if ( *(_DWORD *)(v156 + 24) <= 4u )
        goto LABEL_875;
      v164 = v163;
      v165 = System_Int32__Parse(*(System_String_o **)(v156 + 64), 0LL);
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      if ( !byte_4A2915D )
      {
        sub_1B761C0(&TerminalSceneComponent_TypeInfo, v101);
        byte_4A2915D = 1;
      }
      updated = (__int64)TerminalSceneComponent_TypeInfo;
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        updated = (__int64)TerminalSceneComponent_TypeInfo;
      }
      v166 = **(_QWORD **)(updated + 184);
      if ( !v166 )
        goto LABEL_874;
      updated = *(_QWORD *)(v166 + 264);
      if ( !updated )
        goto LABEL_874;
      v633.fields.y = v160;
      v633.fields.z = v162;
      v167 = v164 * 0.001;
      v633.fields.x = v158;
      *(UnityEngine_Vector3_o *)&v169 = ScrTerminalMap__ConvertLocalToScreenPosition(
                                          (ScrTerminalMap_o *)updated,
                                          v633,
                                          0LL);
      v172 = v169;
      v173 = v170;
      v174 = v171;
      if ( v109->fields.id != 352 || *(int *)(v156 + 24) < 6 )
      {
        if ( !*v104 )
          goto LABEL_874;
        v175 = *(MapCamera_o **)(*v104 + 144);
        v176 = (System_Action_o *)sub_1B7640C(System_Action_TypeInfo);
        v177 = &Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__20__;
LABEL_108:
        v178 = v176;
        System_Action___ctor(v176, (Il2CppObject *)v99, *v177, 0LL);
        if ( !v175 )
          goto LABEL_874;
        v179 = v175;
        v180 = v172;
        v181 = v173;
        v182 = v174;
        v183 = v167;
        v184 = v165;
        v185 = v178;
        goto LABEL_857;
      }
      if ( !*v104 )
        goto LABEL_874;
      v362 = *(MapCamera_o **)(*v104 + 144);
      *(_QWORD *)&v627.fields.hasValue = &v616;
      *(_QWORD *)&v627.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
      *(_QWORD *)&v616.fields.hasValue = 0LL;
      *(_QWORD *)&v616.fields.value.fields.y = 0LL;
      System_Nullable_Vector3____ctor(v627, *(UnityEngine_Vector3_o *)&v169, v168);
      if ( *(_DWORD *)(v156 + 24) <= 5u )
        goto LABEL_875;
      v363 = System_Single__Parse(*(System_String_o **)(v156 + 72), 0LL);
      p_size = (System_Nullable_float__o)&size;
      size = 0LL;
      System_Nullable_float____ctor(p_size, v363, (const MethodInfo_35F6514 *)Method_System_Nullable_float___ctor__);
      v364 = (System_Action_o *)sub_1B7640C(System_Action_TypeInfo);
      v365 = &Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__19__;
LABEL_478:
      v366 = v364;
      System_Action___ctor(v364, (Il2CppObject *)v99, *v365, 0LL);
      if ( !v362 )
        goto LABEL_874;
      v632 = v616;
      v626 = size;
      v367 = v362;
      v368 = v167;
      v369 = v165;
      v370 = v366;
LABEL_868:
      MapCamera__StartAutoWork(v367, v368, v632, v626, v369, v370, 0LL);
      return;
    }
    if ( id <= 113 )
    {
      switch ( id )
      {
        case 'd':
          v144 = sub_1B7640C(QuestAfterAction_StateMain___c__DisplayClass16_1_TypeInfo);
          System_Object___ctor((Il2CppObject *)v144, 0LL);
          if ( !v144 )
            goto LABEL_874;
          *(_QWORD *)(v144 + 24) = v99;
          sub_1B76164((ServantStatusBattleListViewItem_o *)(v144 + 24), v99, v145, v146);
          v147 = *(_QWORD *)(v144 + 24);
          if ( !v147 )
            goto LABEL_874;
          v148 = *(QuestAfterAction_o **)(v147 + 24);
          updated = System_Int32__Parse(v109->fields.param, 0LL);
          if ( !v148 )
            goto LABEL_874;
          v149 = QuestAfterAction__GetMapComponent_object_(
                   v148,
                   0,
                   updated,
                   this,
                   (const MethodInfo_2EF2810 *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
          *(_QWORD *)(v144 + 16) = v149;
          sub_1B76164((ServantStatusBattleListViewItem_o *)(v144 + 16), (int32_t)v149, v150, v151);
          v152 = *(UnityEngine_Object_o **)(v144 + 16);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Equality(v152, 0LL, 0LL) )
            return;
          v153 = *(SrcSpotBasePrefab_o **)(v144 + 16);
          v154 = (System_Action_o *)sub_1B7640C(System_Action_TypeInfo);
          System_Action___ctor(
            v154,
            (Il2CppObject *)v144,
            Method_QuestAfterAction_StateMain___c__DisplayClass16_1__UpdateAnim_b__0__,
            0LL);
          if ( !v153 )
            goto LABEL_874;
          v155 = 2;
          goto LABEL_392;
        case 'e':
          v312 = sub_1B7640C(QuestAfterAction_StateMain___c__DisplayClass16_2_TypeInfo);
          System_Object___ctor((Il2CppObject *)v312, 0LL);
          if ( !v312 )
            goto LABEL_874;
          *(_QWORD *)(v312 + 24) = v99;
          sub_1B76164((ServantStatusBattleListViewItem_o *)(v312 + 24), v99, v313, v314);
          v315 = *(_QWORD *)(v312 + 24);
          if ( !v315 )
            goto LABEL_874;
          v316 = *(QuestAfterAction_o **)(v315 + 24);
          updated = System_Int32__Parse(v109->fields.param, 0LL);
          if ( !v316 )
            goto LABEL_874;
          v317 = QuestAfterAction__GetMapComponent_object_(
                   v316,
                   0,
                   updated,
                   this,
                   (const MethodInfo_2EF2810 *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
          *(_QWORD *)(v312 + 16) = v317;
          sub_1B76164((ServantStatusBattleListViewItem_o *)(v312 + 16), (int32_t)v317, v318, v319);
          v320 = *(UnityEngine_Object_o **)(v312 + 16);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Equality(v320, 0LL, 0LL) )
            return;
          v153 = *(SrcSpotBasePrefab_o **)(v312 + 16);
          v154 = (System_Action_o *)sub_1B7640C(System_Action_TypeInfo);
          System_Action___ctor(
            v154,
            (Il2CppObject *)v312,
            Method_QuestAfterAction_StateMain___c__DisplayClass16_2__UpdateAnim_b__1__,
            0LL);
          if ( !v153 )
            goto LABEL_874;
          v155 = 3;
LABEL_392:
          SrcSpotBasePrefab__SetState(v153, v155, v154, 0LL);
          return;
        case 'f':
          v321 = sub_1B7640C(QuestAfterAction_StateMain___c__DisplayClass16_3_TypeInfo);
          System_Object___ctor((Il2CppObject *)v321, 0LL);
          if ( !v321 )
            goto LABEL_874;
          *(_QWORD *)(v321 + 24) = v99;
          v324 = v321 + 24;
          sub_1B76164((ServantStatusBattleListViewItem_o *)(v321 + 24), v99, v322, v323);
          if ( !*(_QWORD *)(v321 + 24) )
            goto LABEL_874;
          v325 = *(QuestAfterAction_o **)(*(_QWORD *)(v321 + 24) + 24LL);
          updated = System_Int32__Parse(v109->fields.param, 0LL);
          if ( !v325 )
            goto LABEL_874;
          v326 = QuestAfterAction__GetMapComponent_object_(
                   v325,
                   0,
                   updated,
                   this,
                   (const MethodInfo_2EF2810 *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
          *(_QWORD *)(v321 + 16) = v326;
          v327 = (__int64 *)(v321 + 16);
          sub_1B76164((ServantStatusBattleListViewItem_o *)(v321 + 16), (int32_t)v326, v328, v329);
          v330 = *(UnityEngine_Object_o **)(v321 + 16);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Equality(v330, 0LL, 0LL) )
            return;
          v331 = *(SrcSpotBasePrefab_o **)(v321 + 16);
          v332 = (System_Action_o *)sub_1B7640C(System_Action_TypeInfo);
          System_Action___ctor(
            v332,
            (Il2CppObject *)v321,
            Method_QuestAfterAction_StateMain___c__DisplayClass16_3__UpdateAnim_b__2__,
            0LL);
          if ( !v331 )
            goto LABEL_874;
          SrcSpotBasePrefab__SetState(v331, 4, v332, 0LL);
          if ( !*(_QWORD *)v324 )
            goto LABEL_874;
          updated = *(_QWORD *)(*(_QWORD *)v324 + 24LL);
          if ( !updated )
            goto LABEL_874;
          v335 = *v327;
          *(_QWORD *)(updated + 176) = *v327;
          v336 = (ServantStatusBattleListViewItem_o *)(updated + 176);
          goto LABEL_414;
        case 'g':
          updated = (__int64)v109->fields.param;
          if ( !updated )
            goto LABEL_874;
          updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
          if ( !updated )
            goto LABEL_874;
          v337 = updated;
          if ( *(int *)(updated + 24) <= 1 )
            goto LABEL_622;
          v338 = (QuestAfterAction_o *)*v104;
          updated = System_Int32__Parse(*(System_String_o **)(updated + 32), 0LL);
          if ( !v338 )
            goto LABEL_874;
          v339 = QuestAfterAction__GetMapComponent_object_(
                   v338,
                   0,
                   updated,
                   this,
                   (const MethodInfo_2EF2810 *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          updated = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v339, 0LL, 0LL);
          if ( (updated & 1) != 0 )
            return;
          if ( *(_DWORD *)(v337 + 24) <= 1u )
            goto LABEL_875;
          updated = System_Int32__Parse(*(System_String_o **)(v337 + 40), 0LL);
          if ( !v339 )
            goto LABEL_874;
          LODWORD(v339[14].klass) = updated;
          v340 = (System_Action_o *)sub_1B7640C(System_Action_TypeInfo);
          System_Action___ctor(v340, (Il2CppObject *)this, (intptr_t)this->klass->vtable._15_onEnd.methodPtr, 0LL);
          SrcSpotBasePrefab__SetState((SrcSpotBasePrefab_o *)v339, 5, v340, 0LL);
          updated = *v104;
          if ( !*v104 )
            goto LABEL_874;
          *(_QWORD *)(updated + 176) = v339;
          v336 = (ServantStatusBattleListViewItem_o *)(updated + 176);
          LODWORD(v335) = (_DWORD)v339;
LABEL_414:
          sub_1B76164(v336, v335, v333, v334);
          return;
        case 'h':
        case 'i':
        case 'j':
        case 'k':
        case 'l':
        case 'm':
          return;
        case 'n':
          v341 = (QuestAfterAction_o *)*v104;
          updated = System_Int32__Parse(v109->fields.param, 0LL);
          if ( !v341 )
            goto LABEL_874;
          v342 = QuestAfterAction__GetMapComponent_object_(
                   v341,
                   0,
                   updated,
                   this,
                   (const MethodInfo_2EF2810 *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          updated = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v342, 0LL, 0LL);
          if ( (updated & 1) != 0 )
            return;
          if ( !v342 )
            goto LABEL_874;
          SrcSpotBasePrefab__SetQaaScaleAnimQuick((SrcSpotBasePrefab_o *)v342, 0, 0LL);
          monitor = v342[14].monitor;
          if ( !monitor )
            goto LABEL_874;
          monitor[5] = 0;
          v344 = (SrcSpotBasePrefab_o *)v342;
          v345 = 0;
          goto LABEL_437;
        case 'o':
          v346 = (QuestAfterAction_o *)*v104;
          updated = System_Int32__Parse(v109->fields.param, 0LL);
          if ( !v346 )
            goto LABEL_874;
          v347 = QuestAfterAction__GetMapComponent_object_(
                   v346,
                   0,
                   updated,
                   this,
                   (const MethodInfo_2EF2810 *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          updated = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v347, 0LL, 0LL);
          if ( (updated & 1) != 0 )
            return;
          if ( !v347 )
            goto LABEL_874;
          SrcSpotBasePrefab__SetQaaScaleAnimQuick((SrcSpotBasePrefab_o *)v347, 1, 0LL);
          SrcSpotBasePrefab__SetQaaColorAnimQuick((SrcSpotBasePrefab_o *)v347, 0, 0LL);
          v348 = v347[14].monitor;
          if ( !v348 )
            goto LABEL_874;
          v348[5] = 2;
          goto LABEL_436;
        case 'p':
          v349 = (QuestAfterAction_o *)*v104;
          updated = System_Int32__Parse(v109->fields.param, 0LL);
          if ( !v349 )
            goto LABEL_874;
          v347 = QuestAfterAction__GetMapComponent_object_(
                   v349,
                   0,
                   updated,
                   this,
                   (const MethodInfo_2EF2810 *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          updated = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v347, 0LL, 0LL);
          if ( (updated & 1) != 0 )
            return;
          if ( !v347 )
            goto LABEL_874;
          SrcSpotBasePrefab__SetQaaScaleAnimQuick((SrcSpotBasePrefab_o *)v347, 1, 0LL);
          SrcSpotBasePrefab__SetQaaColorAnimQuick((SrcSpotBasePrefab_o *)v347, 1, 0LL);
          v350 = v347[14].monitor;
          if ( !v350 )
            goto LABEL_874;
          v350[5] = 1;
LABEL_436:
          v345 = 1;
          v344 = (SrcSpotBasePrefab_o *)v347;
LABEL_437:
          SrcSpotBasePrefab__SetTouchType(v344, v345, 0LL);
          goto LABEL_18;
        case 'q':
          updated = (__int64)v109->fields.param;
          if ( !updated )
            goto LABEL_874;
          updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
          if ( !updated )
            goto LABEL_874;
          v351 = updated;
          if ( *(int *)(updated + 24) <= 1 )
            goto LABEL_622;
          v352 = (QuestAfterAction_o *)*v104;
          updated = System_Int32__Parse(*(System_String_o **)(updated + 32), 0LL);
          if ( !v352 )
            goto LABEL_874;
          v353 = QuestAfterAction__GetMapComponent_object_(
                   v352,
                   0,
                   updated,
                   this,
                   (const MethodInfo_2EF2810 *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          updated = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v353, 0LL, 0LL);
          if ( (updated & 1) != 0 )
            return;
          if ( *(_DWORD *)(v351 + 24) <= 1u )
            goto LABEL_875;
          updated = System_Int32__Parse(*(System_String_o **)(v351 + 40), 0LL);
          if ( !v353 )
            goto LABEL_874;
          LODWORD(v353[14].klass) = updated;
          SrcSpotBasePrefab__UpdateDisp((SrcSpotBasePrefab_o *)v353, 1, 0LL);
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
        updated = (__int64)v109->fields.param;
        if ( !updated )
          goto LABEL_874;
        updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
        if ( !updated )
          goto LABEL_874;
        v129 = *(_QWORD *)(updated + 24);
        v130 = updated;
        if ( (int)v129 <= 0 )
          goto LABEL_622;
        if ( (int)v129 > 2 )
        {
          v503 = System_Single__Parse(*(System_String_o **)(updated + 48), 0LL);
          v129 = *(_QWORD *)(v130 + 24);
          v131 = v503 * 0.001;
        }
        else
        {
          v131 = 0.5;
        }
        sec = v131;
        if ( (int)v129 >= 2 )
        {
          updated = System_Int32__Parse(*(System_String_o **)(v130 + 40), 0LL);
          v129 = *(_QWORD *)(v130 + 24);
          v504 = updated;
        }
        else
        {
          v504 = 15;
        }
        if ( !(_DWORD)v129 )
          goto LABEL_875;
        v507 = (QuestAfterAction_o *)*v104;
        updated = System_Int32__Parse(*(System_String_o **)(v130 + 32), 0LL);
        if ( !v507 )
          goto LABEL_874;
        MapGameObject = (UnityEngine_Object_o *)QuestAfterAction__GetMapGameObject(v507, 0, updated, this, v508);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Equality(MapGameObject, 0LL, 0LL) )
          return;
        LocalPosition = GameObjectExtensions__GetLocalPosition((UnityEngine_GameObject_o *)MapGameObject, 0LL);
        x = LocalPosition.fields.x;
        y = LocalPosition.fields.y;
        z = LocalPosition.fields.z;
        if ( !this->fields.IsMapModel )
          goto LABEL_673;
        if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        if ( !byte_4A2915D )
        {
          sub_1B761C0(&TerminalSceneComponent_TypeInfo, v101);
          byte_4A2915D = 1;
        }
        updated = (__int64)TerminalSceneComponent_TypeInfo;
        if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          updated = (__int64)TerminalSceneComponent_TypeInfo;
        }
        v513 = **(_QWORD **)(updated + 184);
        if ( !v513 )
          goto LABEL_874;
        updated = *(_QWORD *)(v513 + 264);
        if ( !updated )
          goto LABEL_874;
        v636.fields.x = x;
        v636.fields.y = y;
        v636.fields.z = z;
        v637 = ScrTerminalMap__ConvertLocalToScreenPosition((ScrTerminalMap_o *)updated, v636, 0LL);
        x = v637.fields.x;
        y = v637.fields.y;
        z = v637.fields.z;
LABEL_673:
        if ( !FSUtility_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
        updated = FSUtility__IsUnderVista(0LL);
        if ( (updated & 1) != 0 )
          goto LABEL_840;
        if ( !*(_DWORD *)(v130 + 24) )
          goto LABEL_875;
        v515 = *(System_String_o **)(v130 + 32);
        updated = System_String__op_Equality(v515, (System_String_o *)StringLiteral_1403/*"10703"*/, 0LL);
        if ( (updated & 1) != 0 )
        {
          y = y + -50.0;
        }
        else
        {
          updated = System_String__op_Equality(v515, (System_String_o *)StringLiteral_1478/*"30101"*/, 0LL);
          if ( (updated & 1) != 0 )
            y = y + -50.0;
        }
LABEL_840:
        if ( v109->fields.id != 305 || *(int *)(v130 + 24) < 4 )
        {
          if ( !*v104 )
            goto LABEL_874;
          v531 = *(MapCamera_o **)(*v104 + 144);
          v532 = (System_Action_o *)sub_1B7640C(System_Action_TypeInfo);
          v533 = &Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__10__;
          goto LABEL_844;
        }
        if ( !*v104 )
          goto LABEL_874;
        v601 = *(MapCamera_o **)(*v104 + 144);
        *(_QWORD *)&v629.fields.hasValue = &v616;
        v644.fields.x = x;
        v644.fields.y = y;
        *(_QWORD *)&v629.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
        v644.fields.z = z;
        v616 = (System_Nullable_Vector3__o)0LL;
        System_Nullable_Vector3____ctor(v629, v644, v514);
        if ( *(_DWORD *)(v130 + 24) <= 3u )
          goto LABEL_875;
        v606 = System_Single__Parse(*(System_String_o **)(v130 + 56), 0LL);
        v623 = (System_Nullable_float__o)&size;
        size = 0LL;
        System_Nullable_float____ctor(v623, v606, (const MethodInfo_35F6514 *)Method_System_Nullable_float___ctor__);
        v603 = (System_Action_o *)sub_1B7640C(System_Action_TypeInfo);
        v604 = &Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__9__;
        break;
      case 301:
      case 306:
        updated = (__int64)v109->fields.param;
        if ( !updated )
          goto LABEL_874;
        updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
        if ( !updated )
          goto LABEL_874;
        v290 = *(_QWORD *)(updated + 24);
        v291 = updated;
        if ( (int)v290 <= 0 )
          goto LABEL_622;
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
        seca = v292;
        if ( (int)v290 >= 2 )
        {
          updated = System_Int32__Parse(*(System_String_o **)(v291 + 40), 0LL);
          v290 = *(_QWORD *)(v291 + 24);
        }
        else
        {
          updated = 15LL;
        }
        easeType = updated;
        if ( !(_DWORD)v290 )
          goto LABEL_875;
        v516 = (QuestAfterAction_o *)*v104;
        updated = System_Int32__Parse(*(System_String_o **)(v291 + 32), 0LL);
        if ( !v516 )
          goto LABEL_874;
        v518 = (UnityEngine_Object_o *)QuestAfterAction__GetMapGameObject(v516, 1, updated, this, v517);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        updated = UnityEngine_Object__op_Equality(v518, 0LL, 0LL);
        if ( (updated & 1) != 0 )
          return;
        if ( this->fields.IsMapModel )
        {
          if ( !v518 )
            goto LABEL_874;
          updated = (__int64)UnityEngine_GameObject__GetComponent_object_(
                               (UnityEngine_GameObject_o *)v518,
                               (const MethodInfo_2EB19B8 *)Method_UnityEngine_GameObject_GetComponent_ModelLineComponent___);
          if ( !updated )
            goto LABEL_874;
          Position = GameObjectExtensions__GetPosition((UnityEngine_GameObject_o *)*(_QWORD *)(updated + 32), 0LL);
          v519 = Position.fields.x;
          v520 = Position.fields.y;
          v521 = Position.fields.z;
          if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          if ( !byte_4A2915D )
          {
            sub_1B761C0(&TerminalSceneComponent_TypeInfo, v101);
            byte_4A2915D = 1;
          }
          updated = (__int64)TerminalSceneComponent_TypeInfo;
          if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            updated = (__int64)TerminalSceneComponent_TypeInfo;
          }
          v522 = **(_QWORD **)(updated + 184);
          if ( !v522 )
            goto LABEL_874;
          updated = *(_QWORD *)(v522 + 264);
          if ( !updated )
            goto LABEL_874;
          v639.fields.x = v519;
          v639.fields.y = v520;
          v639.fields.z = v521;
          *(UnityEngine_Vector3_o *)&v523 = ScrTerminalMap__ConvertWorldToScreenPosition(
                                              (ScrTerminalMap_o *)updated,
                                              v639,
                                              0LL);
        }
        else
        {
          *(UnityEngine_Vector3_o *)&v523 = GameObjectExtensions__GetLocalPosition(
                                              (UnityEngine_GameObject_o *)v518,
                                              0LL);
        }
        v590 = v523;
        v591 = v524;
        v592 = v525;
        if ( !FSUtility_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
        updated = FSUtility__IsUnderVista(0LL);
        if ( (updated & 1) != 0 )
          goto LABEL_851;
        if ( !*(_DWORD *)(v291 + 24) )
          goto LABEL_875;
        v594 = *(System_String_o **)(v291 + 32);
        updated = System_String__op_Equality(v594, (System_String_o *)StringLiteral_1403/*"10703"*/, 0LL);
        if ( (updated & 1) != 0 )
        {
          v591 = v591 + -95.0;
        }
        else
        {
          updated = System_String__op_Equality(v594, (System_String_o *)StringLiteral_1479/*"30102"*/, 0LL);
          if ( (updated & 1) != 0 )
            v591 = v591 + 45.0;
        }
LABEL_851:
        if ( v109->fields.id != 306 || *(int *)(v291 + 24) < 4 )
        {
          if ( !*v104 )
            goto LABEL_874;
          v605 = *(MapCamera_o **)(*v104 + 144);
          v600 = (System_Action_o *)sub_1B7640C(System_Action_TypeInfo);
          System_Action___ctor(
            v600,
            (Il2CppObject *)v99,
            Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__12__,
            0LL);
          if ( !v605 )
            goto LABEL_874;
          v183 = seca;
          v184 = easeType;
          v179 = v605;
          v180 = v590;
          v181 = v591;
          v182 = v592;
          goto LABEL_856;
        }
        if ( !*v104 )
          goto LABEL_874;
        v608 = *(MapCamera_o **)(*v104 + 144);
        *(_QWORD *)&v630.fields.hasValue = &v616;
        v645.fields.x = v590;
        v645.fields.y = v591;
        *(_QWORD *)&v630.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
        v645.fields.z = v592;
        v616 = (System_Nullable_Vector3__o)0LL;
        System_Nullable_Vector3____ctor(v630, v645, v593);
        if ( *(_DWORD *)(v291 + 24) <= 3u )
          goto LABEL_875;
        v609 = System_Single__Parse(*(System_String_o **)(v291 + 56), 0LL);
        v624 = (System_Nullable_float__o)&size;
        size = 0LL;
        System_Nullable_float____ctor(v624, v609, (const MethodInfo_35F6514 *)Method_System_Nullable_float___ctor__);
        v607 = (System_Action_o *)sub_1B7640C(System_Action_TypeInfo);
        System_Action___ctor(
          v607,
          (Il2CppObject *)v99,
          Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__11__,
          0LL);
        if ( !v608 )
          goto LABEL_874;
        v632 = v616;
        v626 = size;
        v368 = seca;
        v369 = easeType;
        v367 = v608;
        goto LABEL_867;
      case 302:
      case 307:
        updated = (__int64)v109->fields.param;
        if ( !updated )
          goto LABEL_874;
        updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
        if ( !updated )
          goto LABEL_874;
        v293 = *(_QWORD *)(updated + 24);
        v294 = updated;
        if ( (int)v293 <= 0 )
          goto LABEL_622;
        if ( (int)v293 > 2 )
        {
          v506 = System_Single__Parse(*(System_String_o **)(updated + 48), 0LL);
          v293 = *(_QWORD *)(v294 + 24);
          v295 = v506 * 0.001;
        }
        else
        {
          v295 = 0.5;
        }
        sec = v295;
        if ( (int)v293 >= 2 )
        {
          updated = System_Int32__Parse(*(System_String_o **)(v294 + 40), 0LL);
          v293 = *(_QWORD *)(v294 + 24);
          v504 = updated;
        }
        else
        {
          v504 = 15;
        }
        if ( !(_DWORD)v293 )
          goto LABEL_875;
        v526 = (QuestAfterAction_o *)*v104;
        updated = System_Int32__Parse(*(System_String_o **)(v294 + 32), 0LL);
        if ( !v526 )
          goto LABEL_874;
        v528 = (UnityEngine_Object_o *)QuestAfterAction__GetMapGameObject(v526, 2, updated, this, v527);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Equality(v528, 0LL, 0LL) )
          return;
        v640 = GameObjectExtensions__GetLocalPosition((UnityEngine_GameObject_o *)v528, 0LL);
        x = v640.fields.x;
        y = v640.fields.y;
        z = v640.fields.z;
        if ( !this->fields.IsMapModel )
          goto LABEL_713;
        if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        if ( !byte_4A2915D )
        {
          sub_1B761C0(&TerminalSceneComponent_TypeInfo, v101);
          byte_4A2915D = 1;
        }
        updated = (__int64)TerminalSceneComponent_TypeInfo;
        if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          updated = (__int64)TerminalSceneComponent_TypeInfo;
        }
        v530 = **(_QWORD **)(updated + 184);
        if ( !v530 )
          goto LABEL_874;
        updated = *(_QWORD *)(v530 + 264);
        if ( !updated )
          goto LABEL_874;
        v641.fields.x = x;
        v641.fields.y = y;
        v641.fields.z = z;
        v642 = ScrTerminalMap__ConvertLocalToScreenPosition((ScrTerminalMap_o *)updated, v641, 0LL);
        x = v642.fields.x;
        y = v642.fields.y;
        z = v642.fields.z;
LABEL_713:
        if ( v109->fields.id != 307 || *(int *)(v294 + 24) < 4 )
        {
          if ( !*v104 )
            goto LABEL_874;
          v531 = *(MapCamera_o **)(*v104 + 144);
          v532 = (System_Action_o *)sub_1B7640C(System_Action_TypeInfo);
          v533 = &Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__14__;
LABEL_844:
          v600 = v532;
          System_Action___ctor(v532, (Il2CppObject *)v99, *v533, 0LL);
          if ( !v531 )
            goto LABEL_874;
          v183 = sec;
          v179 = v531;
          v180 = x;
          v181 = y;
          v182 = z;
          v184 = v504;
LABEL_856:
          v185 = v600;
LABEL_857:
          MapCamera__StartAutoMove(v179, *(UnityEngine_Vector3_o *)&v180, v183, v184, v185, 0LL);
          return;
        }
        if ( !*v104 )
          goto LABEL_874;
        v601 = *(MapCamera_o **)(*v104 + 144);
        *(_QWORD *)&v628.fields.hasValue = &v616;
        v643.fields.x = x;
        v643.fields.y = y;
        *(_QWORD *)&v628.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
        v643.fields.z = z;
        v616 = (System_Nullable_Vector3__o)0LL;
        System_Nullable_Vector3____ctor(v628, v643, v529);
        if ( *(_DWORD *)(v294 + 24) <= 3u )
          goto LABEL_875;
        v602 = System_Single__Parse(*(System_String_o **)(v294 + 56), 0LL);
        v622 = (System_Nullable_float__o)&size;
        size = 0LL;
        System_Nullable_float____ctor(v622, v602, (const MethodInfo_35F6514 *)Method_System_Nullable_float___ctor__);
        v603 = (System_Action_o *)sub_1B7640C(System_Action_TypeInfo);
        v604 = &Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__13__;
        break;
      case 303:
      case 308:
        updated = (__int64)v109->fields.param;
        if ( !updated )
          goto LABEL_874;
        updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
        if ( !updated )
          goto LABEL_874;
        v296 = updated;
        if ( *(int *)(updated + 24) < 4 )
          goto LABEL_622;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_4A2AE7A )
        {
          sub_1B761C0(&TerminalPramsManager_TypeInfo, v101);
          byte_4A2AE7A = 1;
        }
        updated = (__int64)TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          updated = (__int64)TerminalPramsManager_TypeInfo;
        }
        if ( *(_BYTE *)(*(_QWORD *)(updated + 184) + 105LL) )
          goto LABEL_622;
        if ( *(_DWORD *)(v296 + 24) <= 2u )
          goto LABEL_875;
        v297 = System_Single__Parse(*(System_String_o **)(v296 + 48), 0LL) * 0.001;
        v167 = v297 >= 0.0 ? v297 : 0.5;
        if ( *(_DWORD *)(v296 + 24) <= 3u )
          goto LABEL_875;
        v165 = System_Int32__Parse(*(System_String_o **)(v296 + 56), 0LL);
        if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        if ( !byte_4A2915D )
        {
          sub_1B761C0(&TerminalSceneComponent_TypeInfo, v101);
          byte_4A2915D = 1;
        }
        updated = (__int64)TerminalSceneComponent_TypeInfo;
        if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          updated = (__int64)TerminalSceneComponent_TypeInfo;
        }
        v298 = **(_QWORD **)(updated + 184);
        if ( !v298 )
          goto LABEL_874;
        if ( !*(_DWORD *)(v296 + 24) )
          goto LABEL_875;
        v299 = *(ScrTerminalMap_o **)(v298 + 264);
        v300 = System_Single__Parse(*(System_String_o **)(v296 + 32), 0LL);
        if ( *(_DWORD *)(v296 + 24) <= 1u )
          goto LABEL_875;
        v301 = v300;
        v302 = System_Single__Parse(*(System_String_o **)(v296 + 40), 0LL);
        if ( !v299 )
          goto LABEL_874;
        *(UnityEngine_Vector3_o *)&v304 = ScrTerminalMap__LocalPosFromCoord(v299, v301, v302, 0.0, 0.0, 0LL);
        v172 = v304;
        v173 = v305;
        v174 = v306;
        if ( v109->fields.id != 308 || *(int *)(v296 + 24) < 5 )
        {
          if ( !*v104 )
            goto LABEL_874;
          v175 = *(MapCamera_o **)(*v104 + 144);
          v176 = (System_Action_o *)sub_1B7640C(System_Action_TypeInfo);
          v177 = &Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__16__;
          goto LABEL_108;
        }
        if ( !*v104 )
          goto LABEL_874;
        v362 = *(MapCamera_o **)(*v104 + 144);
        *(_QWORD *)&v631.fields.hasValue = &v616;
        *(_QWORD *)&v631.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
        v616 = (System_Nullable_Vector3__o)0LL;
        System_Nullable_Vector3____ctor(v631, *(UnityEngine_Vector3_o *)&v304, v303);
        if ( *(_DWORD *)(v296 + 24) <= 4u )
          goto LABEL_875;
        v610 = System_Single__Parse(*(System_String_o **)(v296 + 64), 0LL);
        v625 = (System_Nullable_float__o)&size;
        size = 0LL;
        System_Nullable_float____ctor(v625, v610, (const MethodInfo_35F6514 *)Method_System_Nullable_float___ctor__);
        v364 = (System_Action_o *)sub_1B7640C(System_Action_TypeInfo);
        v365 = &Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__15__;
        goto LABEL_478;
      case 304:
        updated = (__int64)v109->fields.param;
        if ( !updated )
          goto LABEL_874;
        updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
        if ( !updated )
          goto LABEL_874;
        v371 = *(_DWORD *)(updated + 24);
        v372 = updated;
        if ( v371 <= 1 )
          goto LABEL_622;
        v373 = System_Single__Parse(*(System_String_o **)(updated + 32), 0LL);
        if ( *(_DWORD *)(v372 + 24) <= 1u )
          goto LABEL_875;
        v374 = v373;
        v375 = System_Single__Parse(*(System_String_o **)(v372 + 40), 0LL);
        if ( !*v104 )
          goto LABEL_874;
        v376 = *(MapCamera_o **)(*v104 + 144);
        v377 = v375 * 0.001;
        if ( v377 >= 0.0 )
          v378 = v377;
        else
          v378 = 0.5;
        if ( v371 < 3 )
        {
          v379 = 5;
        }
        else
        {
          if ( *(_DWORD *)(v372 + 24) <= 2u )
            goto LABEL_875;
          v379 = System_Int32__Parse(*(System_String_o **)(v372 + 48), 0LL);
        }
        v589 = (System_Action_o *)sub_1B7640C(System_Action_TypeInfo);
        System_Action___ctor(
          v589,
          (Il2CppObject *)v99,
          Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__17__,
          0LL);
        if ( !v376 )
          goto LABEL_874;
        MapCamera__StartAutoZoom(v376, v374, v378, v379, v589, 0LL);
        return;
      default:
        switch ( id )
        {
          case 200:
            if ( this->fields.IsMapModel )
            {
              v186 = sub_1B7640C(QuestAfterAction_StateMain___c__DisplayClass16_4_TypeInfo);
              System_Object___ctor((Il2CppObject *)v186, 0LL);
              if ( !v186 )
                goto LABEL_874;
              *(_QWORD *)(v186 + 24) = v99;
              sub_1B76164((ServantStatusBattleListViewItem_o *)(v186 + 24), v99, v187, v188);
              v189 = *(_QWORD *)(v186 + 24);
              if ( !v189 )
                goto LABEL_874;
              v190 = *(QuestAfterAction_o **)(v189 + 24);
              updated = System_Int32__Parse(v109->fields.param, 0LL);
              if ( !v190 )
                goto LABEL_874;
              v191 = QuestAfterAction__GetMapComponent_object_(
                       v190,
                       1,
                       updated,
                       this,
                       (const MethodInfo_2EF2810 *)Method_QuestAfterAction_GetMapComponent_ModelLineComponent___);
              *(_QWORD *)(v186 + 16) = v191;
              sub_1B76164((ServantStatusBattleListViewItem_o *)(v186 + 16), (int32_t)v191, v192, v193);
              v194 = *(UnityEngine_Object_o **)(v186 + 16);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              if ( !UnityEngine_Object__op_Equality(v194, 0LL, 0LL) )
              {
                v195 = *(ModelLineComponent_o **)(v186 + 16);
                v196 = (System_Action_o *)sub_1B7640C(System_Action_TypeInfo);
                System_Action___ctor(
                  v196,
                  (Il2CppObject *)v186,
                  Method_QuestAfterAction_StateMain___c__DisplayClass16_4__UpdateAnim_b__3__,
                  0LL);
                if ( !v195 )
                  goto LABEL_874;
                v198 = 2;
                goto LABEL_509;
              }
            }
            else
            {
              v534 = sub_1B7640C(QuestAfterAction_StateMain___c__DisplayClass16_5_TypeInfo);
              System_Object___ctor((Il2CppObject *)v534, 0LL);
              if ( !v534 )
                goto LABEL_874;
              *(_QWORD *)(v534 + 24) = v99;
              sub_1B76164((ServantStatusBattleListViewItem_o *)(v534 + 24), v99, v535, v536);
              v537 = *(_QWORD *)(v534 + 24);
              if ( !v537 )
                goto LABEL_874;
              v538 = *(QuestAfterAction_o **)(v537 + 24);
              updated = System_Int32__Parse(v109->fields.param, 0LL);
              if ( !v538 )
                goto LABEL_874;
              v539 = QuestAfterAction__GetMapComponent_object_(
                       v538,
                       1,
                       updated,
                       this,
                       (const MethodInfo_2EF2810 *)Method_QuestAfterAction_GetMapComponent_srcLineSprite___);
              *(_QWORD *)(v534 + 16) = v539;
              sub_1B76164((ServantStatusBattleListViewItem_o *)(v534 + 16), (int32_t)v539, v540, v541);
              v542 = *(UnityEngine_Object_o **)(v534 + 16);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              if ( !UnityEngine_Object__op_Equality(v542, 0LL, 0LL) )
              {
                v543 = *(srcLineSprite_o **)(v534 + 16);
                v544 = (System_Action_o *)sub_1B7640C(System_Action_TypeInfo);
                System_Action___ctor(
                  v544,
                  (Il2CppObject *)v534,
                  Method_QuestAfterAction_StateMain___c__DisplayClass16_5__UpdateAnim_b__4__,
                  0LL);
                if ( !v543 )
                  goto LABEL_874;
                v545 = 2;
                goto LABEL_741;
              }
            }
            return;
          case 201:
            if ( this->fields.IsMapModel )
            {
              v380 = sub_1B7640C(QuestAfterAction_StateMain___c__DisplayClass16_6_TypeInfo);
              System_Object___ctor((Il2CppObject *)v380, 0LL);
              if ( !v380 )
                goto LABEL_874;
              *(_QWORD *)(v380 + 24) = v99;
              sub_1B76164((ServantStatusBattleListViewItem_o *)(v380 + 24), v99, v381, v382);
              v383 = *(_QWORD *)(v380 + 24);
              if ( !v383 )
                goto LABEL_874;
              v384 = *(QuestAfterAction_o **)(v383 + 24);
              updated = System_Int32__Parse(v109->fields.param, 0LL);
              if ( !v384 )
                goto LABEL_874;
              v385 = QuestAfterAction__GetMapComponent_object_(
                       v384,
                       1,
                       updated,
                       this,
                       (const MethodInfo_2EF2810 *)Method_QuestAfterAction_GetMapComponent_ModelLineComponent___);
              *(_QWORD *)(v380 + 16) = v385;
              sub_1B76164((ServantStatusBattleListViewItem_o *)(v380 + 16), (int32_t)v385, v386, v387);
              v388 = *(UnityEngine_Object_o **)(v380 + 16);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              if ( !UnityEngine_Object__op_Equality(v388, 0LL, 0LL) )
              {
                v195 = *(ModelLineComponent_o **)(v380 + 16);
                v196 = (System_Action_o *)sub_1B7640C(System_Action_TypeInfo);
                System_Action___ctor(
                  v196,
                  (Il2CppObject *)v380,
                  Method_QuestAfterAction_StateMain___c__DisplayClass16_6__UpdateAnim_b__5__,
                  0LL);
                if ( !v195 )
                  goto LABEL_874;
                v198 = 3;
                goto LABEL_509;
              }
            }
            else
            {
              v546 = sub_1B7640C(QuestAfterAction_StateMain___c__DisplayClass16_7_TypeInfo);
              System_Object___ctor((Il2CppObject *)v546, 0LL);
              if ( !v546 )
                goto LABEL_874;
              *(_QWORD *)(v546 + 24) = v99;
              sub_1B76164((ServantStatusBattleListViewItem_o *)(v546 + 24), v99, v547, v548);
              v549 = *(_QWORD *)(v546 + 24);
              if ( !v549 )
                goto LABEL_874;
              v550 = *(QuestAfterAction_o **)(v549 + 24);
              updated = System_Int32__Parse(v109->fields.param, 0LL);
              if ( !v550 )
                goto LABEL_874;
              v551 = QuestAfterAction__GetMapComponent_object_(
                       v550,
                       1,
                       updated,
                       this,
                       (const MethodInfo_2EF2810 *)Method_QuestAfterAction_GetMapComponent_srcLineSprite___);
              *(_QWORD *)(v546 + 16) = v551;
              sub_1B76164((ServantStatusBattleListViewItem_o *)(v546 + 16), (int32_t)v551, v552, v553);
              v554 = *(UnityEngine_Object_o **)(v546 + 16);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              if ( !UnityEngine_Object__op_Equality(v554, 0LL, 0LL) )
              {
                v543 = *(srcLineSprite_o **)(v546 + 16);
                v544 = (System_Action_o *)sub_1B7640C(System_Action_TypeInfo);
                System_Action___ctor(
                  v544,
                  (Il2CppObject *)v546,
                  Method_QuestAfterAction_StateMain___c__DisplayClass16_7__UpdateAnim_b__6__,
                  0LL);
                if ( !v543 )
                  goto LABEL_874;
                v545 = 3;
                goto LABEL_741;
              }
            }
            return;
          case 202:
            if ( this->fields.IsMapModel )
            {
              v389 = sub_1B7640C(QuestAfterAction_StateMain___c__DisplayClass16_8_TypeInfo);
              System_Object___ctor((Il2CppObject *)v389, 0LL);
              if ( !v389 )
                goto LABEL_874;
              *(_QWORD *)(v389 + 24) = v99;
              sub_1B76164((ServantStatusBattleListViewItem_o *)(v389 + 24), v99, v390, v391);
              v392 = *(_QWORD *)(v389 + 24);
              if ( !v392 )
                goto LABEL_874;
              v393 = *(QuestAfterAction_o **)(v392 + 24);
              updated = System_Int32__Parse(v109->fields.param, 0LL);
              if ( !v393 )
                goto LABEL_874;
              v394 = QuestAfterAction__GetMapComponent_object_(
                       v393,
                       1,
                       updated,
                       this,
                       (const MethodInfo_2EF2810 *)Method_QuestAfterAction_GetMapComponent_ModelLineComponent___);
              *(_QWORD *)(v389 + 16) = v394;
              sub_1B76164((ServantStatusBattleListViewItem_o *)(v389 + 16), (int32_t)v394, v395, v396);
              v397 = *(UnityEngine_Object_o **)(v389 + 16);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              if ( !UnityEngine_Object__op_Equality(v397, 0LL, 0LL) )
              {
                v195 = *(ModelLineComponent_o **)(v389 + 16);
                v196 = (System_Action_o *)sub_1B7640C(System_Action_TypeInfo);
                System_Action___ctor(
                  v196,
                  (Il2CppObject *)v389,
                  Method_QuestAfterAction_StateMain___c__DisplayClass16_8__UpdateAnim_b__7__,
                  0LL);
                if ( !v195 )
                  goto LABEL_874;
                v198 = 4;
LABEL_509:
                ModelLineComponent__SetState(v195, v198, v196, v197);
              }
            }
            else
            {
              v555 = sub_1B7640C(QuestAfterAction_StateMain___c__DisplayClass16_9_TypeInfo);
              System_Object___ctor((Il2CppObject *)v555, 0LL);
              if ( !v555 )
                goto LABEL_874;
              *(_QWORD *)(v555 + 24) = v99;
              sub_1B76164((ServantStatusBattleListViewItem_o *)(v555 + 24), v99, v556, v557);
              v558 = *(_QWORD *)(v555 + 24);
              if ( !v558 )
                goto LABEL_874;
              v559 = *(QuestAfterAction_o **)(v558 + 24);
              updated = System_Int32__Parse(v109->fields.param, 0LL);
              if ( !v559 )
                goto LABEL_874;
              v560 = QuestAfterAction__GetMapComponent_object_(
                       v559,
                       1,
                       updated,
                       this,
                       (const MethodInfo_2EF2810 *)Method_QuestAfterAction_GetMapComponent_srcLineSprite___);
              *(_QWORD *)(v555 + 16) = v560;
              sub_1B76164((ServantStatusBattleListViewItem_o *)(v555 + 16), (int32_t)v560, v561, v562);
              v563 = *(UnityEngine_Object_o **)(v555 + 16);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              if ( !UnityEngine_Object__op_Equality(v563, 0LL, 0LL) )
              {
                v543 = *(srcLineSprite_o **)(v555 + 16);
                v544 = (System_Action_o *)sub_1B7640C(System_Action_TypeInfo);
                System_Action___ctor(
                  v544,
                  (Il2CppObject *)v555,
                  Method_QuestAfterAction_StateMain___c__DisplayClass16_9__UpdateAnim_b__8__,
                  0LL);
                if ( !v543 )
                  goto LABEL_874;
                v545 = 4;
LABEL_741:
                srcLineSprite__SetState(v543, v545, v544, 0LL);
              }
            }
            return;
          case 203:
            IsMapModel = this->fields.IsMapModel;
            v399 = (QuestAfterAction_o *)*v104;
            updated = System_Int32__Parse(v109->fields.param, 0LL);
            if ( !v399 )
              goto LABEL_874;
            if ( IsMapModel )
            {
              v400 = (UnityEngine_Object_o *)QuestAfterAction__GetMapComponent_object_(
                                               v399,
                                               1,
                                               updated,
                                               this,
                                               (const MethodInfo_2EF2810 *)Method_QuestAfterAction_GetMapComponent_ModelLineComponent___);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              updated = UnityEngine_Object__op_Equality(v400, 0LL, 0LL);
              if ( (updated & 1) != 0 )
                return;
              if ( !v400 )
                goto LABEL_874;
              ModelLineComponent__SetQuestAfterActionScaleAnim_33642244((ModelLineComponent_o *)v400, 0, 0.0, v401);
              v402 = v400[3].klass;
              if ( !v402 )
                goto LABEL_874;
            }
            else
            {
              v564 = (UnityEngine_Object_o *)QuestAfterAction__GetMapComponent_object_(
                                               v399,
                                               1,
                                               updated,
                                               this,
                                               (const MethodInfo_2EF2810 *)Method_QuestAfterAction_GetMapComponent_srcLineSprite___);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              updated = UnityEngine_Object__op_Equality(v564, 0LL, 0LL);
              if ( (updated & 1) != 0 )
                return;
              if ( !v564 )
                goto LABEL_874;
              srcLineSprite__SetQaaScaleAnimQuick((srcLineSprite_o *)v564, 0, 0LL);
              v402 = v564[5].monitor;
              if ( !v402 )
                goto LABEL_874;
            }
            goto LABEL_790;
          case 204:
            v403 = this->fields.IsMapModel;
            v404 = (QuestAfterAction_o *)*v104;
            updated = System_Int32__Parse(v109->fields.param, 0LL);
            if ( !v404 )
              goto LABEL_874;
            if ( v403 )
            {
              v405 = (UnityEngine_Object_o *)QuestAfterAction__GetMapComponent_object_(
                                               v404,
                                               1,
                                               updated,
                                               this,
                                               (const MethodInfo_2EF2810 *)Method_QuestAfterAction_GetMapComponent_ModelLineComponent___);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              updated = UnityEngine_Object__op_Equality(v405, 0LL, 0LL);
              if ( (updated & 1) != 0 )
                return;
              if ( !v405 )
                goto LABEL_874;
              ModelLineComponent__SetQuestAfterActionScaleAnim_33642244((ModelLineComponent_o *)v405, 1, 0.0, v406);
              ModelLineComponent__SetQuestAfterActionColorAnim_33642720((ModelLineComponent_o *)v405, 0, 0.0, v407);
              v408 = v405[3].klass;
              if ( !v408 )
                goto LABEL_874;
            }
            else
            {
              v565 = (UnityEngine_Object_o *)QuestAfterAction__GetMapComponent_object_(
                                               v404,
                                               1,
                                               updated,
                                               this,
                                               (const MethodInfo_2EF2810 *)Method_QuestAfterAction_GetMapComponent_srcLineSprite___);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              updated = UnityEngine_Object__op_Equality(v565, 0LL, 0LL);
              if ( (updated & 1) != 0 )
                return;
              if ( !v565 )
                goto LABEL_874;
              srcLineSprite__SetQaaScaleAnimQuick((srcLineSprite_o *)v565, 1, 0LL);
              srcLineSprite__SetQaaColorAnimQuick((srcLineSprite_o *)v565, 0, 0LL);
              v408 = v565[5].monitor;
              if ( !v408 )
                goto LABEL_874;
            }
            v566 = 2;
            goto LABEL_760;
          case 205:
            v409 = this->fields.IsMapModel;
            v410 = (QuestAfterAction_o *)*v104;
            updated = System_Int32__Parse(v109->fields.param, 0LL);
            if ( !v410 )
              goto LABEL_874;
            if ( v409 )
            {
              v411 = (UnityEngine_Object_o *)QuestAfterAction__GetMapComponent_object_(
                                               v410,
                                               1,
                                               updated,
                                               this,
                                               (const MethodInfo_2EF2810 *)Method_QuestAfterAction_GetMapComponent_ModelLineComponent___);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              updated = UnityEngine_Object__op_Equality(v411, 0LL, 0LL);
              if ( (updated & 1) != 0 )
                return;
              if ( !v411 )
                goto LABEL_874;
              ModelLineComponent__SetQuestAfterActionScaleAnim_33642244((ModelLineComponent_o *)v411, 1, 0.0, v412);
              ModelLineComponent__SetQuestAfterActionColorAnim_33642720((ModelLineComponent_o *)v411, 1, 0.0, v413);
              v408 = v411[3].klass;
              if ( !v408 )
                goto LABEL_874;
            }
            else
            {
              v567 = (UnityEngine_Object_o *)QuestAfterAction__GetMapComponent_object_(
                                               v410,
                                               1,
                                               updated,
                                               this,
                                               (const MethodInfo_2EF2810 *)Method_QuestAfterAction_GetMapComponent_srcLineSprite___);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              updated = UnityEngine_Object__op_Equality(v567, 0LL, 0LL);
              if ( (updated & 1) != 0 )
                return;
              if ( !v567 )
                goto LABEL_874;
              srcLineSprite__SetQaaScaleAnimQuick((srcLineSprite_o *)v567, 1, 0LL);
              srcLineSprite__SetQaaColorAnimQuick((srcLineSprite_o *)v567, 1, 0LL);
              v408 = v567[5].monitor;
              if ( !v408 )
                goto LABEL_874;
            }
            v566 = 1;
LABEL_760:
            v408[4] = v566;
            goto LABEL_18;
          default:
            if ( id != 350 )
              return;
            updated = (__int64)v109->fields.param;
            if ( !updated )
              goto LABEL_874;
            updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
            if ( !updated )
              goto LABEL_874;
            v307 = updated;
            if ( *(int *)(updated + 24) <= 0 )
              goto LABEL_622;
            v308 = System_Int32__Parse(*(System_String_o **)(updated + 32), 0LL);
            if ( v308 < 1 )
              goto LABEL_622;
            v309 = v308;
            v310 = 0.5;
            if ( *(int *)(v307 + 24) > 1 )
            {
              v311 = System_Int32__Parse(*(System_String_o **)(v307 + 40), 0LL);
              if ( *(int *)(v307 + 24) >= 3 )
                v310 = System_Single__Parse(*(System_String_o **)(v307 + 48), 0LL) * 0.001;
            }
            else
            {
              v311 = 15;
            }
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            if ( !byte_4A2915D )
            {
              sub_1B761C0(&TerminalSceneComponent_TypeInfo, v101);
              byte_4A2915D = 1;
            }
            updated = (__int64)TerminalSceneComponent_TypeInfo;
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
              updated = (__int64)TerminalSceneComponent_TypeInfo;
            }
            v595 = **(_QWORD **)(updated + 184);
            if ( !v595 )
              goto LABEL_874;
            v596 = *(ScrTerminalMap_o **)(v595 + 264);
            v597 = (System_Action_o *)sub_1B7640C(System_Action_TypeInfo);
            System_Action___ctor(
              v597,
              (Il2CppObject *)v99,
              Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__18__,
              0LL);
            if ( !v596 )
              goto LABEL_874;
            ScrTerminalMap__RequestMapMove_34318452(v596, v309, v310, v311, v597, 0LL);
            return;
        }
    }
    v607 = v603;
    System_Action___ctor(v603, (Il2CppObject *)v99, *v604, 0LL);
    if ( !v601 )
      goto LABEL_874;
    v632 = v616;
    v626 = size;
    v368 = sec;
    v367 = v601;
    v369 = v504;
LABEL_867:
    v370 = v607;
    goto LABEL_868;
  }
  if ( id <= 700 )
  {
    if ( id > 550 )
    {
      switch ( id )
      {
        case 600:
          v124 = (System_String_o *)StringLiteral_1/*""*/;
          v125 = System_String__Concat_61535060((System_String_o *)StringLiteral_10820/*"QUEST_AFTER_ACTION_MESSAGE_"*/, v109->fields.param, 0LL);
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v126 = LocalizationManager__Get(v125, 0LL);
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v128 = (System_Action_o *)sub_1B7640C(System_Action_TypeInfo);
          System_Action___ctor(
            v128,
            (Il2CppObject *)v99,
            Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__36__,
            0LL);
          if ( !Instance )
            goto LABEL_874;
          CommonUI__OpenNotificationDialog(
            (CommonUI_o *)Instance,
            v124,
            v126,
            v128,
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
          v248 = (System_String_o *)StringLiteral_1/*""*/;
          updated = sub_1B76268(string___TypeInfo, 1LL);
          if ( !updated )
            goto LABEL_874;
          v251 = (System_String_array *)updated;
          if ( !*(_DWORD *)(updated + 24) )
            break;
          v252 = StringLiteral_89/*"\r\n"*/;
          *(_QWORD *)(updated + 32) = StringLiteral_89/*"\r\n"*/;
          sub_1B76164((ServantStatusBattleListViewItem_o *)(updated + 32), v252, v249, v250);
          updated = (__int64)v109->fields.param;
          if ( !updated )
            goto LABEL_874;
          updated = (__int64)System_String__Split_61561292((System_String_o *)updated, v251, 0, 0LL);
          if ( !updated )
            goto LABEL_874;
          v253 = *(_DWORD *)(updated + 24);
          if ( v253 <= 0 )
            goto LABEL_622;
          v254 = *(System_String_o **)(updated + 32);
          if ( v253 == 1 )
          {
            v255 = *(System_String_o **)(updated + 32);
            v254 = v248;
          }
          else
          {
            v255 = *(System_String_o **)(updated + 40);
          }
          v501 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v502 = (System_Action_o *)sub_1B7640C(System_Action_TypeInfo);
          System_Action___ctor(
            v502,
            (Il2CppObject *)v99,
            Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__37__,
            0LL);
          if ( !v501 )
            goto LABEL_874;
          CommonUI__OpenNotificationDialog(
            (CommonUI_o *)v501,
            v254,
            v255,
            v502,
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
          v256 = (System_String_o *)StringLiteral_1/*""*/;
          v257 = System_String__Concat_61535060((System_String_o *)StringLiteral_10820/*"QUEST_AFTER_ACTION_MESSAGE_"*/, v109->fields.param, 0LL);
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v258 = LocalizationManager__Get(v257, 0LL);
          v259 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v260 = (System_Action_o *)sub_1B7640C(System_Action_TypeInfo);
          System_Action___ctor(
            v260,
            (Il2CppObject *)v99,
            Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__38__,
            0LL);
          if ( !v259 )
            goto LABEL_874;
          v261 = "std::bad_exception" + 7;
          onClickOkSeKind = 0;
          goto LABEL_647;
        case 603:
          v262 = (System_String_o *)StringLiteral_1/*""*/;
          updated = sub_1B76268(string___TypeInfo, 1LL);
          if ( !updated )
            goto LABEL_874;
          v265 = (System_String_array *)updated;
          if ( !*(_DWORD *)(updated + 24) )
            break;
          v266 = StringLiteral_89/*"\r\n"*/;
          *(_QWORD *)(updated + 32) = StringLiteral_89/*"\r\n"*/;
          sub_1B76164((ServantStatusBattleListViewItem_o *)(updated + 32), v266, v263, v264);
          updated = (__int64)v109->fields.param;
          if ( !updated )
            goto LABEL_874;
          updated = (__int64)System_String__Split_61561292((System_String_o *)updated, v265, 0, 0LL);
          if ( !updated )
            goto LABEL_874;
          v267 = *(_DWORD *)(updated + 24);
          if ( v267 <= 0 )
            goto LABEL_622;
          v256 = *(System_String_o **)(updated + 32);
          if ( v267 == 1 )
          {
            v258 = *(System_String_o **)(updated + 32);
            v256 = v262;
          }
          else
          {
            v258 = *(System_String_o **)(updated + 40);
          }
          v259 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v260 = (System_Action_o *)sub_1B7640C(System_Action_TypeInfo);
          System_Action___ctor(
            v260,
            (Il2CppObject *)v99,
            Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__39__,
            0LL);
          if ( !v259 )
            goto LABEL_874;
          v261 = "d_exception";
          onClickOkSeKind = 1;
LABEL_647:
          CommonUI__OpenNotificationDialog_30420232(
            (CommonUI_o *)v259,
            v256,
            v258,
            v260,
            40.0,
            *((float *)v261 + 270),
            210,
            0,
            0,
            0,
            1,
            28,
            onClickOkSeKind,
            0,
            1,
            0LL);
          return;
        case 604:
          v268 = (System_String_o *)StringLiteral_1/*""*/;
          v269 = System_String__Concat_61535060((System_String_o *)StringLiteral_10820/*"QUEST_AFTER_ACTION_MESSAGE_"*/, v109->fields.param, 0LL);
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v270 = LocalizationManager__Get(v269, 0LL);
          v271 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v272 = (System_Action_o *)sub_1B7640C(System_Action_TypeInfo);
          System_Action___ctor(
            v272,
            (Il2CppObject *)v99,
            Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__40__,
            0LL);
          if ( !v271 )
            goto LABEL_874;
          CommonUI__OpenNotificationDialog_30420232(
            (CommonUI_o *)v271,
            v268,
            v270,
            v272,
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
            0LL);
          return;
        default:
          if ( id == 560 )
          {
            updated = (__int64)v109->fields.param;
            if ( !updated )
              goto LABEL_874;
            updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
            if ( !updated )
              goto LABEL_874;
            v273 = *(_QWORD *)(updated + 24);
            if ( v273 )
            {
              if ( !(_DWORD)v273 )
                break;
              updated = System_Int32__Parse(*(System_String_o **)(updated + 32), 0LL);
              v275 = *v104;
              if ( !*v104 )
                goto LABEL_874;
              v276 = *(QuestAfterAction_TitleInfoControlCallback_o **)(v275 + 40);
              if ( (int)updated >= 1 )
              {
                if ( !v276 )
                  goto LABEL_874;
                QuestAfterAction_TitleInfoControlCallback__Start(
                  *(QuestAfterAction_TitleInfoControlCallback_o **)(v275 + 40),
                  0LL,
                  v274);
                goto LABEL_18;
              }
            }
            else
            {
              if ( !*v104 )
                goto LABEL_874;
              v276 = *(QuestAfterAction_TitleInfoControlCallback_o **)(*v104 + 40);
            }
            v414 = (System_Action_o *)sub_1B7640C(System_Action_TypeInfo);
            System_Action___ctor(v414, (Il2CppObject *)this, (intptr_t)this->klass->vtable._15_onEnd.methodPtr, 0LL);
            if ( !v276 )
              goto LABEL_874;
            QuestAfterAction_TitleInfoControlCallback__Start(v276, v414, v415);
            return;
          }
          if ( id != 700 )
            return;
          updated = (__int64)v109->fields.param;
          if ( !updated )
            goto LABEL_874;
          updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
          if ( !updated )
            goto LABEL_874;
          v199 = updated;
          if ( *(_DWORD *)(updated + 24) )
          {
            v200 = System_Int32__Parse(*(System_String_o **)(updated + 32), 0LL);
            if ( *(int *)(v199 + 24) >= 2 )
              v201 = System_Int32__Parse(*(System_String_o **)(v199 + 40), 0LL) + 1;
            else
              v201 = 0;
            v361 = (SceneJumpInfo_o *)sub_1B7640C(SceneJumpInfo_TypeInfo);
            SceneJumpInfo___ctor_38409840(v361, (System_String_o *)StringLiteral_1/*""*/, v200, v201, 0LL);
            updated = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
            if ( !updated )
              goto LABEL_874;
            AvalonSceneManager__transitionScene((AvalonSceneManager_o *)updated, 72, 1, (Il2CppObject *)v361, 0LL);
            goto LABEL_622;
          }
          break;
      }
LABEL_875:
      sub_1B76424(updated, v101);
    }
    if ( id == 530 )
    {
      v230 = System_Int32__Parse(v109->fields.param, 0LL);
      updated = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !updated )
        goto LABEL_874;
      updated = (__int64)DataManager__GetMasterData_object_(
                           (DataManager_o *)updated,
                           (const MethodInfo_2E62408 *)Method_DataManager_GetMasterData_QuestMaster___);
      if ( !updated )
        goto LABEL_874;
      v231 = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)updated,
               v230,
               (const MethodInfo_30FF780 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
      updated = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_371299C *)Method_SingletonTemplate_QuestTree__get_Instance__);
      if ( !updated )
        goto LABEL_874;
      updated = (__int64)QuestTree__GetQuestInfo((QuestTree_o *)updated, v230, 0LL);
      if ( !updated )
        goto LABEL_874;
      v233 = updated;
      if ( *(_DWORD *)(updated + 32) == 1 )
      {
        if ( !v231 )
          goto LABEL_874;
        if ( QuestEntity__HasFlag((QuestEntity_o *)v231, 2LL, 0LL) )
        {
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          if ( !byte_4A2ABB9 )
          {
            sub_1B761C0(&TerminalPramsManager_TypeInfo, v234);
            byte_4A2ABB9 = 1;
          }
          v235 = TerminalPramsManager_TypeInfo;
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            v235 = TerminalPramsManager_TypeInfo;
          }
          v235->static_fields->_QuestId_k__BackingField = v230;
          v236 = *(_DWORD *)(v233 + 44);
          if ( !byte_4A2ABBD )
          {
            sub_1B761C0(&TerminalPramsManager_TypeInfo, v234);
            v235 = TerminalPramsManager_TypeInfo;
            byte_4A2ABBD = 1;
          }
          if ( !v235->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v235);
            v235 = TerminalPramsManager_TypeInfo;
          }
          v235->static_fields->_PhaseCnt_k__BackingField = v236;
          updated = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_371299C *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
          v237 = (clsQuestCheck_o *)updated;
          v238 = QuestAfterAction_StateMain___c_TypeInfo;
          if ( !QuestAfterAction_StateMain___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(QuestAfterAction_StateMain___c_TypeInfo);
            v238 = QuestAfterAction_StateMain___c_TypeInfo;
          }
          _9__16_33 = v238->static_fields->__9__16_33;
          if ( !_9__16_33 )
          {
            if ( !v238->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v238);
              v238 = QuestAfterAction_StateMain___c_TypeInfo;
            }
            v240 = (Il2CppObject *)v238->static_fields->__9;
            _9__16_33 = (System_Action_o *)sub_1B7640C(System_Action_TypeInfo);
            System_Action___ctor(_9__16_33, v240, Method_QuestAfterAction_StateMain___c__UpdateAnim_b__16_33__, 0LL);
            v241 = QuestAfterAction_StateMain___c_TypeInfo->static_fields;
            v241->__9__16_33 = _9__16_33;
            sub_1B76164((ServantStatusBattleListViewItem_o *)&v241->__9__16_33, (int32_t)_9__16_33, v242, v243);
          }
          if ( !v237 )
            goto LABEL_874;
          clsQuestCheck__PlayQuestStartAction(v237, _9__16_33, 0LL);
        }
      }
      else
      {
        QuestAfterAction_StateMain__ForceEndAnim(this, 1, v232);
      }
      return;
    }
    if ( id != 540 )
    {
      if ( id == 550 )
        goto LABEL_18;
      return;
    }
    updated = (__int64)v109->fields.param;
    if ( !updated )
      goto LABEL_874;
    updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
    if ( !updated )
      goto LABEL_874;
    v244 = updated;
    if ( !*(_DWORD *)(updated + 24) )
      goto LABEL_875;
    v245 = System_Int32__Parse(*(System_String_o **)(updated + 32), 0LL);
    if ( *(int *)(v244 + 24) < 2 )
    {
      v246 = -1;
    }
    else
    {
      v246 = System_Int32__Parse(*(System_String_o **)(v244 + 40), 0LL);
      if ( *(int *)(v244 + 24) >= 3 )
      {
        v247 = System_Int32__Parse(*(System_String_o **)(v244 + 48), 0LL);
LABEL_314:
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_4A29488 )
        {
          sub_1B761C0(&TerminalPramsManager_TypeInfo, v101);
          byte_4A29488 = 1;
        }
        v285 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v285 = TerminalPramsManager_TypeInfo;
        }
        v285->static_fields->_IsAutoResume_k__BackingField = 1;
        if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        if ( !byte_4A2915D )
        {
          sub_1B761C0(&TerminalSceneComponent_TypeInfo, v101);
          byte_4A2915D = 1;
        }
        updated = (__int64)TerminalSceneComponent_TypeInfo;
        if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          updated = (__int64)TerminalSceneComponent_TypeInfo;
        }
        v286 = **(_QWORD **)(updated + 184);
        if ( !v286 )
          goto LABEL_874;
        updated = *(_QWORD *)(v286 + 264);
        if ( !updated )
          goto LABEL_874;
        if ( !ScrTerminalMap__RequestMapChange((ScrTerminalMap_o *)updated, v245, v246, v247, 0LL) )
        {
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          if ( !byte_4A29488 )
          {
            sub_1B761C0(&TerminalPramsManager_TypeInfo, v287);
            byte_4A29488 = 1;
          }
          v289 = TerminalPramsManager_TypeInfo;
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            v289 = TerminalPramsManager_TypeInfo;
          }
          v289->static_fields->_IsAutoResume_k__BackingField = 0;
          goto LABEL_18;
        }
        ((void (__fastcall *)(QuestAfterAction_StateMain_o *, Il2CppMethodPointer))this->klass->vtable._14_EndAnim.method)(
          this,
          this->klass->vtable._15_onEnd.methodPtr);
        updated = *v104;
        if ( !*v104 )
          goto LABEL_874;
        QuestAfterAction__SetState((QuestAfterAction_o *)updated, 0, v288);
        return;
      }
    }
    v247 = -1;
    goto LABEL_314;
  }
  if ( id <= 801 )
  {
    switch ( id )
    {
      case 701:
        if ( !System_String__op_Equality(v109->fields.param, (System_String_o *)StringLiteral_1212/*"0"*/, 0LL) )
          goto LABEL_18;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_4A2AE7D )
        {
          sub_1B761C0(&TerminalPramsManager_TypeInfo, v220);
          byte_4A2AE7D = 1;
        }
        v221 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v221 = TerminalPramsManager_TypeInfo;
        }
        v221->static_fields->_IsTransOrdealCall_k__BackingField = 1;
        updated = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
        if ( !updated )
          goto LABEL_874;
        AvalonSceneManager__transitionSceneRefresh((AvalonSceneManager_o *)updated, 34, 1, 0LL, 0, 0LL);
        break;
      case 800:
        v222 = *v104;
        if ( !*v104 )
          goto LABEL_874;
        updated = *(_QWORD *)(v222 + 88);
        if ( !updated )
          goto LABEL_874;
        if ( System_Collections_Generic_Dictionary_int__object___TryGetValue(
               (System_Collections_Generic_Dictionary_int__object__o *)updated,
               *(_DWORD *)(v222 + 64),
               &value,
               (const MethodInfo_3151000 *)Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__TryGetValue__) )
        {
          updated = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
          if ( !updated )
            goto LABEL_874;
          AutomatedAction__TerminateMissionAction((AutomatedAction_o *)updated, 0LL);
          if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          if ( !byte_4A2915D )
          {
            sub_1B761C0(&TerminalSceneComponent_TypeInfo, v101);
            byte_4A2915D = 1;
          }
          updated = (__int64)TerminalSceneComponent_TypeInfo;
          if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            updated = (__int64)TerminalSceneComponent_TypeInfo;
          }
          v223 = **(_QWORD **)(updated + 184);
          if ( !v223 )
            goto LABEL_874;
          if ( !*(_QWORD *)(v223 + 456) )
            goto LABEL_208;
          if ( !*(_DWORD *)(updated + 224) )
            j_il2cpp_runtime_class_init_0(updated);
          if ( !byte_4A2915D )
          {
            sub_1B761C0(&TerminalSceneComponent_TypeInfo, v101);
            byte_4A2915D = 1;
          }
          updated = (__int64)TerminalSceneComponent_TypeInfo;
          if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            updated = (__int64)TerminalSceneComponent_TypeInfo;
          }
          v224 = **(_QWORD **)(updated + 184);
          if ( !v224 )
            goto LABEL_874;
          v225 = *(_QWORD *)(v224 + 456);
          if ( !v225 )
            goto LABEL_874;
          updated = *(unsigned int *)(v225 + 48);
          if ( !(_DWORD)updated )
          {
LABEL_208:
            if ( !value )
              goto LABEL_874;
            updated = LODWORD(value[1].klass);
          }
          if ( (int)updated < 1 )
          {
            if ( !value )
              goto LABEL_874;
            v416 = (System_String_o *)value[1].monitor;
            if ( !SoundManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
            SoundManager__playVoice(v416, 0LL);
          }
          else
          {
            updated = (__int64)ServantVoiceEntity__getVoiceAssetName_39581568(updated, 0LL);
            if ( !value )
              goto LABEL_874;
            v226 = (System_String_o *)updated;
            v227 = (System_String_o *)value[1].monitor;
            v228 = SeManager_TypeInfo;
            if ( !SeManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
              v228 = SeManager_TypeInfo;
            }
            DEFAULT_VOLUME = v228->static_fields->DEFAULT_VOLUME;
            if ( !SoundManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
            SoundManager__playVoice_38522468(v226, v227, DEFAULT_VOLUME, 0LL, 0LL);
          }
        }
        break;
      case 801:
        param = v109->fields.param;
        v133 = Method_QuestAfterAction_StateMain_UpdateAnim__;
        if ( (*((_BYTE *)Method_QuestAfterAction_StateMain_UpdateAnim__ + 83) & 2) != 0 )
          v133 = (_QWORD *)sub_1B761D8(Method_QuestAfterAction_StateMain_UpdateAnim__);
        v134 = (System_Reflection_MethodBase_o *)sub_1B761A4(v133, v133[4]);
        OverwriteAssetSoundName__PlaySe(v134, param, 0LL);
        goto LABEL_18;
      default:
        return;
    }
LABEL_622:
    ((void (__fastcall *)(QuestAfterAction_StateMain_o *, Il2CppMethodPointer))this->klass->vtable._14_EndAnim.method)(
      this,
      this->klass->vtable._15_onEnd.methodPtr);
    return;
  }
  switch ( id )
  {
    case 850:
      if ( !SoundManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      SoundManager__stopBgm(0LL);
      if ( !*v104 )
        goto LABEL_874;
      *(_BYTE *)(*v104 + 185) = 1;
      goto LABEL_18;
    case 851:
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      if ( !byte_4A2915D )
      {
        sub_1B761C0(&TerminalSceneComponent_TypeInfo, v101);
        byte_4A2915D = 1;
      }
      v202 = TerminalSceneComponent_TypeInfo;
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        v202 = TerminalSceneComponent_TypeInfo;
      }
      v203 = v202->static_fields->mInstance;
      updated = (__int64)QuestAfterAction_Command__GetBgmName(v109, (const MethodInfo *)v101);
      if ( !v203 )
        goto LABEL_874;
      TerminalSceneComponent__playBgm(v203, (System_String_o *)updated, 0LL);
      if ( !*v104 )
        goto LABEL_874;
      *(_BYTE *)(*v104 + 185) = 0;
      goto LABEL_18;
    case 900:
      v114 = (float)System_Int32__Parse(v109->fields.param, 0LL) / 1000.0;
      if ( v114 <= 0.0 )
        goto LABEL_18;
      this->fields.waitTime = v114;
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

  if ( (byte_4A2AE2F & 1) == 0 )
  {
    sub_1B761C0(&TerminalSceneComponent_TypeInfo, that);
    byte_4A2AE2F = 1;
  }
  this->fields.that = that;
  sub_1B76164((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)that, (int32_t)method, v3);
  v8 = this->fields.that;
  if ( !v8 )
    goto LABEL_14;
  screenCollider = (TerminalSceneComponent_c *)v8->fields.screenCollider;
  if ( !screenCollider )
    goto LABEL_14;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)screenCollider, 1, 0LL);
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4A2915D )
  {
    sub_1B761C0(&TerminalSceneComponent_TypeInfo, v7);
    byte_4A2915D = 1;
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
    sub_1B7641C(screenCollider, v7);
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
    sub_1B7641C(this, method);
  return that->fields.commandBuf;
}


int32_t __fastcall QuestAfterAction_StateMain__get_CommandIndex(
        QuestAfterAction_StateMain_o *this,
        const MethodInfo *method)
{
  struct QuestAfterAction_o *that; // x8

  that = this->fields.that;
  if ( !that )
    sub_1B7641C(this, method);
  return that->fields.commandIdx;
}


UnityEngine_GameObject_o *__fastcall QuestAfterAction_StateMain__get_SubGimmickRoot(
        QuestAfterAction_StateMain_o *this,
        const MethodInfo *method)
{
  TerminalSceneComponent_c *v2; // x0
  struct TerminalSceneComponent_o *mInstance; // x8
  struct ScrTerminalMap_o *mTerminalMap; // x8

  if ( (byte_4A2AE2E & 1) == 0 )
  {
    sub_1B761C0(&TerminalSceneComponent_TypeInfo, method);
    byte_4A2AE2E = 1;
  }
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4A2915D )
  {
    sub_1B761C0(&TerminalSceneComponent_TypeInfo, method);
    byte_4A2915D = 1;
  }
  v2 = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v2 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = v2->static_fields->mInstance;
  if ( !mInstance || (mTerminalMap = mInstance->fields.mTerminalMap) == 0LL )
    sub_1B7641C(v2, method);
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

  if ( (byte_4A2AE31 & 1) == 0 )
  {
    sub_1B761C0(&TerminalSceneComponent_TypeInfo, deleteKey);
    sub_1B761C0(&StringLiteral_16703/*"afterActionBk"*/, v5);
    byte_4A2AE31 = 1;
  }
  if ( deleteKey )
    UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_16703/*"afterActionBk"*/, 0LL);
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4A2915D )
  {
    sub_1B761C0(&TerminalSceneComponent_TypeInfo, deleteKey);
    byte_4A2915D = 1;
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
    sub_1B7641C(mInstance, deleteKey);
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
    sub_1B7641C(this, value);
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

  if ( (byte_4A2AE33 & 1) == 0 )
  {
    sub_1B761C0(&QuestAfterAction_StateMain___c_TypeInfo, v1);
    byte_4A2AE33 = 1;
  }
  v2 = (Il2CppObject *)sub_1B7640C(QuestAfterAction_StateMain___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  QuestAfterAction_StateMain___c_TypeInfo->static_fields->__9 = (struct QuestAfterAction_StateMain___c_o *)v2;
  sub_1B76164(
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

  if ( (byte_4A2AE34 & 1) == 0 )
  {
    sub_1B761C0(&ScriptManager_CallbackFunc_TypeInfo, method);
    sub_1B761C0(&ScriptManager_TypeInfo, v2);
    sub_1B761C0(&TerminalPramsManager_TypeInfo, v3);
    sub_1B761C0(&Method_QuestAfterAction_StateMain___c__UpdateAnim_b__16_34__, v4);
    sub_1B761C0(&QuestAfterAction_StateMain___c_TypeInfo, v5);
    byte_4A2AE34 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A2ABB8 )
  {
    sub_1B761C0(&TerminalPramsManager_TypeInfo, method);
    byte_4A2ABB8 = 1;
  }
  v6 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v6 = TerminalPramsManager_TypeInfo;
  }
  WarId_k__BackingField = v6->static_fields->_WarId_k__BackingField;
  if ( !byte_4A2ABB5 )
  {
    sub_1B761C0(&TerminalPramsManager_TypeInfo, method);
    v6 = TerminalPramsManager_TypeInfo;
    byte_4A2ABB5 = 1;
  }
  if ( !v6->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v6);
    v6 = TerminalPramsManager_TypeInfo;
  }
  QuestId_k__BackingField = v6->static_fields->_QuestId_k__BackingField;
  if ( !byte_4A2ABC0 )
  {
    sub_1B761C0(&TerminalPramsManager_TypeInfo, method);
    v6 = TerminalPramsManager_TypeInfo;
    byte_4A2ABC0 = 1;
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
    _9__16_34 = (ScriptManager_CallbackFunc_o *)sub_1B7640C(ScriptManager_CallbackFunc_TypeInfo);
    ScriptManager_CallbackFunc___ctor(_9__16_34, v12, Method_QuestAfterAction_StateMain___c__UpdateAnim_b__16_34__, 0LL);
    static_fields = QuestAfterAction_StateMain___c_TypeInfo->static_fields;
    static_fields->__9__16_34 = _9__16_34;
    sub_1B76164((ServantStatusBattleListViewItem_o *)&static_fields->__9__16_34, (int32_t)_9__16_34, v14, v15);
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

  if ( (byte_4A2AE35 & 1) == 0 )
  {
    sub_1B761C0(&Method_NetworkManager_getRequest_BattleScenarioRequest___, isExit);
    sub_1B761C0(&NetworkManager_TypeInfo, v3);
    sub_1B761C0(&NetworkManager_ResultCallbackFunc_TypeInfo, v4);
    sub_1B761C0(&ScriptManager_TypeInfo, v5);
    sub_1B761C0(&TerminalPramsManager_TypeInfo, v6);
    sub_1B761C0(&Method_QuestAfterAction_StateMain___c__UpdateAnim_b__16_35__, v7);
    sub_1B761C0(&QuestAfterAction_StateMain___c_TypeInfo, v8);
    byte_4A2AE35 = 1;
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
    _9__16_35 = (NetworkManager_ResultCallbackFunc_o *)sub_1B7640C(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      _9__16_35,
      v11,
      Method_QuestAfterAction_StateMain___c__UpdateAnim_b__16_35__,
      0LL);
    static_fields = QuestAfterAction_StateMain___c_TypeInfo->static_fields;
    static_fields->__9__16_35 = _9__16_35;
    sub_1B76164((ServantStatusBattleListViewItem_o *)&static_fields->__9__16_35, (int32_t)_9__16_35, v13, v14);
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     _9__16_35,
                     (const MethodInfo_2EE44C0 *)Method_NetworkManager_getRequest_BattleScenarioRequest___);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A2ABB5 )
  {
    sub_1B761C0(&TerminalPramsManager_TypeInfo, v15);
    byte_4A2ABB5 = 1;
  }
  v17 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v17 = TerminalPramsManager_TypeInfo;
  }
  QuestId_k__BackingField = v17->static_fields->_QuestId_k__BackingField;
  if ( !byte_4A2ABC0 )
  {
    sub_1B761C0(&TerminalPramsManager_TypeInfo, v15);
    v17 = TerminalPramsManager_TypeInfo;
    byte_4A2ABC0 = 1;
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
    sub_1B7641C(SelectRouteArray, v21);
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

  if ( (byte_4A2AE36 & 1) == 0 )
  {
    sub_1B761C0(&Method_JsonManager_DeserializeArray_BattleResultComponent_resultData___, jsonstr);
    sub_1B761C0(&JsonManager_TypeInfo, v4);
    sub_1B761C0(&ScriptManager_TypeInfo, v5);
    sub_1B761C0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v6);
    sub_1B761C0(&TerminalPramsManager_TypeInfo, v7);
    sub_1B761C0(&StringLiteral_16703/*"afterActionBk"*/, v8);
    sub_1B761C0(&StringLiteral_15806/*"["*/, v9);
    sub_1B761C0(&StringLiteral_16063/*"]"*/, v10);
    byte_4A2AE36 = 1;
  }
  v11 = (Il2CppObject *)System_String__Concat_61546320(
                          (System_String_o *)StringLiteral_15806/*"["*/,
                          jsonstr,
                          (System_String_o *)StringLiteral_16063/*"]"*/,
                          0LL);
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v12 = JsonManager__DeserializeArray_object_(
          v11,
          (const MethodInfo_2EC89B0 *)Method_JsonManager_DeserializeArray_BattleResultComponent_resultData___);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_16703/*"afterActionBk"*/, 0LL);
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  ScriptManager__ClearSelectRouteArray(0LL);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  TerminalPramsManager__ReceiveQuestEndResultInfo((BattleResultComponent_resultData_array *)v12, 1, 0LL);
  if ( !byte_4A29488 )
  {
    sub_1B761C0(&TerminalPramsManager_TypeInfo, v13);
    byte_4A29488 = 1;
  }
  v14 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v14 = TerminalPramsManager_TypeInfo;
  }
  v14->static_fields->_IsAutoResume_k__BackingField = 1;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1B7641C(0LL, v16);
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
    sub_1B7641C(0LL, method);
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
    sub_1B7641C(0LL, method);
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
    sub_1B7641C(0LL, method);
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
    sub_1B7641C(0LL, method);
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
    sub_1B7641C(0LL, method);
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
    sub_1B7641C(0LL, method);
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
    sub_1B7641C(0LL, method);
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
    sub_1B7641C(0LL, method);
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
    sub_1B7641C(0LL, method);
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
    sub_1B7641C(0LL, method);
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
    sub_1B7641C(0LL, method);
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
    sub_1B7641C(0LL, method);
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
    sub_1B7641C(_4__this, method);
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
    sub_1B7641C(0LL, method);
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
    sub_1B7641C(0LL, method);
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
    sub_1B7641C(0LL, method);
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
    sub_1B7641C(0LL, method);
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
    sub_1B7641C(0LL, method);
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
    sub_1B7641C(0LL, method);
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
    sub_1B7641C(spot, method);
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
    sub_1B7641C(this, method);
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
    sub_1B7641C(this, method);
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
    sub_1B7641C(this, method);
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
    sub_1B7641C(this, method);
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
    sub_1B7641C(this, method);
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

  if ( (byte_4A2AE37 & 1) == 0 )
  {
    sub_1B761C0(&EventDelegate_Callback_TypeInfo, method);
    sub_1B761C0(&Method_UnityEngine_GameObject_AddComponent_TweenColor___, v3);
    sub_1B761C0(&Method_UnityEngine_GameObject_GetComponentInChildren_UISprite___, v4);
    sub_1B761C0(&Method_QuestAfterAction_StateMain___c__DisplayClass16_14__UpdateAnim_b__28__, v5);
    sub_1B761C0(&QuestAfterAction_StateMain___c__DisplayClass16_14_TypeInfo, v6);
    byte_4A2AE37 = 1;
  }
  *(_QWORD *)&color.fields.r = 0LL;
  *(_QWORD *)&color.fields.b = 0LL;
  v7 = sub_1B7640C(QuestAfterAction_StateMain___c__DisplayClass16_14_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7 )
    goto LABEL_18;
  *(_QWORD *)(v7 + 24) = this;
  sub_1B76164((ServantStatusBattleListViewItem_o *)(v7 + 24), (int32_t)this, v10, v11);
  mapGimmick = (UnityEngine_Component_o *)this->fields.mapGimmick;
  if ( !mapGimmick )
    goto LABEL_18;
  mapGimmick = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mapGimmick, 0LL);
  if ( !mapGimmick )
    goto LABEL_18;
  mapGimmick = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponentInChildren_object_(
                                            (UnityEngine_GameObject_o *)mapGimmick,
                                            (const MethodInfo_2EB1C1C *)Method_UnityEngine_GameObject_GetComponentInChildren_UISprite___);
  if ( !mapGimmick )
    goto LABEL_18;
  v12 = mapGimmick;
  mapGimmick = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mapGimmick, 0LL);
  if ( !mapGimmick )
    goto LABEL_18;
  v13 = UnityEngine_GameObject__AddComponent_object_(
          (UnityEngine_GameObject_o *)mapGimmick,
          (const MethodInfo_2EB18D0 *)Method_UnityEngine_GameObject_AddComponent_TweenColor___);
  *(_QWORD *)(v7 + 16) = v13;
  v14 = (UnityEngine_Color_o **)(v7 + 16);
  sub_1B76164((ServantStatusBattleListViewItem_o *)(v7 + 16), (int32_t)v13, v15, v16);
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
    sub_1B7641C(mapGimmick, v9);
  }
  if ( v18->max_length <= 2 )
LABEL_19:
    sub_1B76424(mapGimmick, v9);
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
  v22 = (EventDelegate_Callback_o *)sub_1B7640C(EventDelegate_Callback_TypeInfo);
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

  if ( (byte_4A2AE38 & 1) == 0 )
  {
    sub_1B761C0(&UnityEngine_Object_TypeInfo, method);
    byte_4A2AE38 = 1;
  }
  tween = (UnityEngine_Object_o *)this->fields.tween;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_69287408(tween, 0LL);
  CS___8__locals14 = this->fields.CS___8__locals14;
  if ( !CS___8__locals14
    || (CS___8__locals13 = CS___8__locals14->fields.CS___8__locals13) == 0LL
    || (_4__this = CS___8__locals13->fields.__4__this) == 0LL )
  {
    sub_1B7641C(_4__this, v5);
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
    sub_1B7641C(this, method);
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
    sub_1B7641C(this, method);
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
    sub_1B7641C(spot, method);
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
    sub_1B7641C(spot, method);
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
    sub_1B7641C(this, method);
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
    sub_1B7641C(this, method);
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
    sub_1B7641C(this, method);
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
    sub_1B7641C(this, method);
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
    sub_1B7641C(this, method);
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
    sub_1B7641C(this, method);
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
  sub_1B76164(p_end, 0, v2, v3);
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
  sub_1B76164((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)startCallback, (int32_t)method, v3);
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
  sub_1B76164((ServantStatusBattleListViewItem_o *)p_end, (int32_t)endCallback, (int32_t)method, v3);
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
  sub_1B76164((ServantStatusBattleListViewItem_o *)v6, (int32_t)vName, v7, v8);
}


void __fastcall QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__78___ctor(
        QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__78_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
  this->fields.__l__initialThreadId = System_Environment__get_CurrentManagedThreadId(0LL);
}


bool __fastcall QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__78__MoveNext(
        QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__78_o *this,
        const MethodInfo *method)
{
  QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__78_o *v2; // x21
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
  QuestAfterAction_Command_o *v26; // x0
  const MethodInfo *v27; // x1
  struct QuestAfterAction_Command_o *v28; // x20
  int id; // w8
  unsigned int v30; // w8
  int32_t v31; // w21
  int32_t CommandTargetId; // w2
  const MethodInfo *v33; // x3
  int32_t v34; // w2
  int32_t v35; // w3
  int32_t v36; // w2
  int32_t v37; // w3
  bool result; // w0
  QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__78_o *v39; // [xsp+18h] [xbp-48h]

  v2 = this;
  v39 = this;
  if ( (byte_4A2AE3C & 1) == 0 )
  {
    sub_1B761C0(&System_Collections_Generic_IEnumerable_QuestAfterAction_Command__TypeInfo, method);
    sub_1B761C0(&System_Collections_Generic_IEnumerator_QuestAfterAction_Command__TypeInfo, v3);
    this = (QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__78_o *)sub_1B761C0(
                                                                                    &System_Collections_IEnumerator_TypeInfo,
                                                                                    v4);
    byte_4A2AE3C = 1;
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
      sub_1B7641C(this, method);
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
      p_method = sub_1BC81A0(
                   commandEnumerable,
                   System_Collections_Generic_IEnumerable_QuestAfterAction_Command__TypeInfo,
                   0LL);
    }
    v12 = (*(__int64 (__fastcall **)(struct System_Collections_Generic_IEnumerable_QuestAfterAction_Command__o *, _QWORD))p_method)(
            commandEnumerable,
            *(_QWORD *)(p_method + 8));
    v39->fields.__7__wrap1 = (struct System_Collections_Generic_IEnumerator_QuestAfterAction_Command__o *)v12;
    sub_1B76164((ServantStatusBattleListViewItem_o *)&v39->fields.__7__wrap1, v12, v13, v14);
    v2 = v39;
  }
  _7__wrap1 = v2->fields.__7__wrap1;
  v2->fields.__1__state = -3;
  if ( !_7__wrap1 )
LABEL_46:
    sub_1B7641C(this, method);
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
      v19 = sub_1BC81A0(_7__wrap1, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(struct System_Collections_Generic_IEnumerator_QuestAfterAction_Command__o *, _QWORD))v19)(
            _7__wrap1,
            *(_QWORD *)(v19 + 8)) & 1) == 0 )
    {
      QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__78____m__Finally1(v39, v20);
      v39->fields.__7__wrap1 = 0LL;
      sub_1B76164((ServantStatusBattleListViewItem_o *)&v39->fields.__7__wrap1, 0, v36, v37);
      return 0;
    }
    v21 = v39->fields.__7__wrap1;
    if ( !v21 )
      sub_1B7641C(v39, v20);
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
      v25 = sub_1BC81A0(
              v39->fields.__7__wrap1,
              System_Collections_Generic_IEnumerator_QuestAfterAction_Command__TypeInfo,
              0LL);
    }
    v26 = (QuestAfterAction_Command_o *)(*(__int64 (__fastcall **)(struct System_Collections_Generic_IEnumerator_QuestAfterAction_Command__o *, _QWORD))v25)(
                                          v21,
                                          *(_QWORD *)(v25 + 8));
    v28 = v26;
    if ( !v26 )
      sub_1B7641C(0LL, v27);
    if ( !_4__this )
      sub_1B7641C(v26, v27);
    id = v26->fields.id;
    if ( id <= 205 )
    {
      if ( (unsigned int)(id - 100) >= 0xF || ((0x7C1Fu >> (id - 100)) & 1) == 0 )
      {
        if ( (unsigned int)(id - 200) <= 5 )
        {
          v31 = 1;
          goto LABEL_44;
        }
        goto LABEL_41;
      }
      v31 = 0;
    }
    else
    {
      if ( id > 550 )
      {
        v30 = id - 1000;
        if ( v30 < 0xD )
        {
          v31 = dword_BE66B0[v30];
          goto LABEL_44;
        }
LABEL_41:
        v31 = -1;
        goto LABEL_44;
      }
      if ( (unsigned int)(id - 400) >= 0xA )
      {
        if ( id == 550 )
        {
          v31 = 3;
          goto LABEL_44;
        }
        goto LABEL_41;
      }
      v31 = 2;
    }
LABEL_44:
    CommandTargetId = QuestAfterAction__ExtractCommandTargetId(v26, v27);
    this = (QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__78_o *)QuestAfterAction__IsExistCommand(
                                                                                    _4__this,
                                                                                    v31,
                                                                                    CommandTargetId,
                                                                                    v33);
    if ( ((unsigned __int8)this & 1) == 0 )
      break;
    _7__wrap1 = v39->fields.__7__wrap1;
    if ( !_7__wrap1 )
      goto LABEL_46;
  }
  v39->fields.__2__current = v28;
  sub_1B76164((ServantStatusBattleListViewItem_o *)&v39->fields.__2__current, (int32_t)v28, v34, v35);
  result = 1;
  v39->fields.__1__state = 1;
  return result;
}


System_Collections_Generic_IEnumerator_QuestAfterAction_Command__o *__fastcall QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__78__System_Collections_Generic_IEnumerable_QuestAfterAction_Command__GetEnumerator(
        QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__78_o *this,
        const MethodInfo *method)
{
  int32_t l__initialThreadId; // w20
  int32_t v4; // w2
  int32_t v5; // w3
  QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__78_o *v6; // x20
  struct QuestAfterAction_o *_4__this; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  struct System_Collections_Generic_IEnumerable_QuestAfterAction_Command__o *_3__commandEnumerable; // x1

  if ( (byte_4A2AE3E & 1) == 0 )
  {
    sub_1B761C0(&QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__78_TypeInfo, method);
    byte_4A2AE3E = 1;
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
    v6 = (QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__78_o *)sub_1B7640C(QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__78_TypeInfo);
    System_Object___ctor((Il2CppObject *)v6, 0LL);
    v6->fields.__1__state = 0;
    v6->fields.__l__initialThreadId = System_Environment__get_CurrentManagedThreadId(0LL);
    _4__this = this->fields.__4__this;
    v6->fields.__4__this = _4__this;
    sub_1B76164((ServantStatusBattleListViewItem_o *)&v6->fields.__4__this, (int32_t)_4__this, v8, v9);
  }
  _3__commandEnumerable = this->fields.__3__commandEnumerable;
  v6->fields.commandEnumerable = _3__commandEnumerable;
  sub_1B76164(
    (ServantStatusBattleListViewItem_o *)&v6->fields.commandEnumerable,
    (int32_t)_3__commandEnumerable,
    v4,
    v5);
  return (System_Collections_Generic_IEnumerator_QuestAfterAction_Command__o *)v6;
}


QuestAfterAction_Command_o *__fastcall QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__78__System_Collections_Generic_IEnumerator_QuestAfterAction_Command__get_Current(
        QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__78_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__78__System_Collections_IEnumerator_Reset(
        QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__78_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1B761D4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B7640C(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B761D4(&Method_QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__78_System_Collections_IEnumerator_Reset__);
  sub_1B762E8(v3, v4);
}


Il2CppObject *__fastcall QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__78__System_Collections_IEnumerator_get_Current(
        QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__78_o *this,
        const MethodInfo *method)
{
  return (Il2CppObject *)this->fields.__2__current;
}


void __fastcall QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__78__System_IDisposable_Dispose(
        QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__78_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w8

  _1__state = this->fields.__1__state;
  if ( _1__state == 1 || _1__state == -3 )
    QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__78____m__Finally1(this, method);
}


void __fastcall QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__78____m__Finally1(
        QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__78_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_IEnumerator_QuestAfterAction_Command__o *_7__wrap1; // x19
  System_Collections_Generic_IEnumerator_QuestAfterAction_Command__c *klass; // x8
  __int64 v5; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0

  if ( (byte_4A2AE3D & 1) == 0 )
  {
    sub_1B761C0(&System_IDisposable_TypeInfo, method);
    byte_4A2AE3D = 1;
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
      p_method = sub_1BC81A0(_7__wrap1, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(struct System_Collections_Generic_IEnumerator_QuestAfterAction_Command__o *, _QWORD))p_method)(
      _7__wrap1,
      *(_QWORD *)(p_method + 8));
  }
}


void __fastcall QuestAfterAction__WaitWhileMainStateFinished_d__82___ctor(
        QuestAfterAction__WaitWhileMainStateFinished_d__82_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall QuestAfterAction__WaitWhileMainStateFinished_d__82__MoveNext(
        QuestAfterAction__WaitWhileMainStateFinished_d__82_o *this,
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
      sub_1B7641C(this, method);
    if ( _4__this->fields.isKeepingMainStateButFinished )
    {
      this->fields.__2__current = 0LL;
      p__2__current = &this->fields.__2__current;
      sub_1B76164((ServantStatusBattleListViewItem_o *)&this->fields.__2__current, 0, v2, v3);
      result = 1;
      *((_DWORD *)p__2__current - 2) = 1;
      return result;
    }
    ActionExtensions__Call(this->fields.action, 0LL);
  }
  return 0;
}


Il2CppObject *__fastcall QuestAfterAction__WaitWhileMainStateFinished_d__82__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        QuestAfterAction__WaitWhileMainStateFinished_d__82_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn QuestAfterAction__WaitWhileMainStateFinished_d__82__System_Collections_IEnumerator_Reset(
        QuestAfterAction__WaitWhileMainStateFinished_d__82_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1B761D4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B7640C(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B761D4(&Method_QuestAfterAction__WaitWhileMainStateFinished_d__82_System_Collections_IEnumerator_Reset__);
  sub_1B762E8(v3, v4);
}


Il2CppObject *__fastcall QuestAfterAction__WaitWhileMainStateFinished_d__82__System_Collections_IEnumerator_get_Current(
        QuestAfterAction__WaitWhileMainStateFinished_d__82_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall QuestAfterAction__WaitWhileMainStateFinished_d__82__System_IDisposable_Dispose(
        QuestAfterAction__WaitWhileMainStateFinished_d__82_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall QuestAfterAction___c__DisplayClass71_0___ctor(
        QuestAfterAction___c__DisplayClass71_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QuestAfterAction___c__DisplayClass71_0___LoadVoice_b__0(
        QuestAfterAction___c__DisplayClass71_0_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *svtVInfos; // x0
  const MethodInfo *v4; // x3

  if ( (byte_4A2AE39 & 1) == 0 )
  {
    sub_1B761C0(&Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo__RemoveAt__, method);
    byte_4A2AE39 = 1;
  }
  svtVInfos = (System_Collections_Generic_List_object__o *)this->fields.svtVInfos;
  if ( !svtVInfos
    || (System_Collections_Generic_List_object___RemoveAt(
          svtVInfos,
          0,
          (const MethodInfo_34D8DA8 *)Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo__RemoveAt__),
        (svtVInfos = (System_Collections_Generic_List_object__o *)this->fields.__4__this) == 0LL) )
  {
    sub_1B7641C(svtVInfos, method);
  }
  QuestAfterAction__LoadVoice_33660000((QuestAfterAction_o *)svtVInfos, this->fields.svtVInfos, this->fields.endAct, v4);
}


void __fastcall QuestAfterAction___c__DisplayClass75_0___ctor(
        QuestAfterAction___c__DisplayClass75_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QuestAfterAction___c__DisplayClass75_0___Play_b__0(
        QuestAfterAction___c__DisplayClass75_0_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4A2AE3A & 1) == 0 )
  {
    sub_1B761C0(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, method);
    byte_4A2AE3A = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_371299C *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    sub_1B7641C(0LL, v4);
  MissionNotifyManager__EndPause((MissionNotifyManager_o *)Instance, 0LL);
  ActionExtensions__Call(this->fields.endAct, 0LL);
}


void __fastcall QuestAfterAction___c__DisplayClass76_0___ctor(
        QuestAfterAction___c__DisplayClass76_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QuestAfterAction___c__DisplayClass76_0___PlaySpecifiedAction_b__0(
        QuestAfterAction___c__DisplayClass76_0_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  char *_4__this; // x0
  int32_t v6; // w2
  int32_t v7; // w3
  const MethodInfo *v8; // x2

  if ( (byte_4A2AE3B & 1) == 0 )
  {
    sub_1B761C0(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, method);
    byte_4A2AE3B = 1;
  }
  _4__this = (char *)this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_8;
  *((_QWORD *)_4__this + 21) = 0LL;
  sub_1B76164((ServantStatusBattleListViewItem_o *)_4__this + 1, 0, v2, v3);
  _4__this = (char *)this->fields.__4__this;
  if ( !_4__this
    || (*((_QWORD *)_4__this + 9) = 0LL,
        sub_1B76164((ServantStatusBattleListViewItem_o *)(_4__this + 72), 0, v6, v7),
        (_4__this = (char *)SingletonTemplate_object___get_Instance((const MethodInfo_371299C *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__)) == 0LL)
    || (MissionNotifyManager__EndPause((MissionNotifyManager_o *)_4__this, 0LL),
        (_4__this = (char *)this->fields.__4__this) == 0LL) )
  {
LABEL_8:
    sub_1B7641C(_4__this, method);
  }
  QuestAfterAction__SetState((QuestAfterAction_o *)_4__this, 0, v8);
  ActionExtensions__Call(this->fields.finishCallback, 0LL);
}


void __fastcall QuestAfterAction___c__DisplayClass76_0___PlaySpecifiedAction_b__1(
        QuestAfterAction___c__DisplayClass76_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  QuestAfterAction_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1B7641C(0LL, method);
  QuestAfterAction__SetState(_4__this, 2, v2);
}