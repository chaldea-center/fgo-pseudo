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

  if ( (byte_4AB2B7C & 1) == 0 )
  {
    sub_1BAB41C(&BlankEarthQuestAfterAction_TypeInfo, method);
    sub_1BAB41C(&Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo___ctor__, v3);
    sub_1BAB41C(&Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int____ctor__, v4);
    sub_1BAB41C(&System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___TypeInfo, v5);
    sub_1BAB41C(&System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__TypeInfo, v6);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_QuestAfterAction___ctor__, v7);
    sub_1BAB41C(&QuestAfterAction_TitleInfoControlCallback_TypeInfo, v8);
    byte_4AB2B7C = 1;
  }
  v9 = (Il2CppObject *)sub_1BAB668(QuestAfterAction_TitleInfoControlCallback_TypeInfo);
  System_Object___ctor(v9, 0LL);
  this->fields._TitleInfoCtrlCallback_k__BackingField = (struct QuestAfterAction_TitleInfoControlCallback_o *)v9;
  sub_1BAB3C0(
    (ServantStatusBattleListViewItem_o *)&this->fields._TitleInfoCtrlCallback_k__BackingField,
    (int32_t)v9,
    v10,
    v11);
  v12 = (Il2CppObject *)sub_1BAB668(BlankEarthQuestAfterAction_TypeInfo);
  System_Object___ctor(v12, 0LL);
  this->fields._BlankEarthQuestAfterAction_k__BackingField = (struct BlankEarthQuestAfterAction_o *)v12;
  sub_1BAB3C0(
    (ServantStatusBattleListViewItem_o *)&this->fields._BlankEarthQuestAfterAction_k__BackingField,
    (int32_t)v12,
    v13,
    v14);
  v15 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1BAB668(System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___TypeInfo);
  System_Collections_Generic_Dictionary_Int32Enum__object____ctor(
    v15,
    (const MethodInfo_31E5C78 *)Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int____ctor__);
  this->fields.commandTypeIds = (struct System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___o *)v15;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.commandTypeIds, (int32_t)v15, v16, v17);
  v18 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1BAB668(System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v18,
    (const MethodInfo_31B6460 *)Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo___ctor__);
  this->fields.svtVoices = (struct System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__o *)v18;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.svtVoices, (int32_t)v18, v19, v20);
  this->fields.MapMoveBeforeFocusSpotId = -1;
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_378A644 *)Method_SingletonMonoBehaviour_QuestAfterAction___ctor__);
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
  sub_1BAB3C0(p_endAct, 0, v2, v3);
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
  Il2CppObject *Instance; // x20
  __int64 v12; // x0
  Il2CppObject *MasterData_object; // x21
  int32_t v14; // w22
  _QWORD *p_image; // x21
  Il2CppObject *v16; // x21
  int32_t v17; // w22
  TerminalPramsManager_c *v18; // x0
  int32_t v19; // w19
  __int64 v20; // x8
  bool result; // w0
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
  __int64 v33; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4AB2B62 & 1) == 0 )
  {
    sub_1BAB41C(&QuestAfterAction_Command___TypeInfo, method);
    sub_1BAB41C(&QuestAfterAction_Command_TypeInfo, v2);
    sub_1BAB41C(&Method_DataManager_GetMasterData_QuestMaster___, v3);
    sub_1BAB41C(&Method_DataManager_GetMasterData_QuestPhaseDetailAddMaster___, v4);
    sub_1BAB41C(&Method_DataManager_GetMasterData_QuestPhaseDetailMaster___, v5);
    sub_1BAB41C(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__, v6);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    sub_1BAB41C(&TerminalPramsManager_TypeInfo, v8);
    sub_1BAB41C(&StringLiteral_1262/*"1"*/, v9);
    byte_4AB2B62 = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4AB2BA8 )
  {
    sub_1BAB41C(&TerminalPramsManager_TypeInfo, v10);
    byte_4AB2BA8 = 1;
  }
  v12 = (__int64)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v12 = (__int64)TerminalPramsManager_TypeInfo;
  }
  if ( *(_BYTE *)(*(_QWORD *)(v12 + 184) + 102LL) )
  {
    if ( !Instance )
      goto LABEL_74;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2EC55C8 *)Method_DataManager_GetMasterData_QuestPhaseDetailAddMaster___);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4AB2957 )
    {
      sub_1BAB41C(&TerminalPramsManager_TypeInfo, v10);
      byte_4AB2957 = 1;
    }
    v12 = (__int64)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v12 = (__int64)TerminalPramsManager_TypeInfo;
    }
    v14 = *(_DWORD *)(*(_QWORD *)(v12 + 184) + 20LL);
    if ( !byte_4AB2962 )
    {
      sub_1BAB41C(&TerminalPramsManager_TypeInfo, v10);
      v12 = (__int64)TerminalPramsManager_TypeInfo;
      byte_4AB2962 = 1;
    }
    if ( !*(_DWORD *)(v12 + 224) )
    {
      j_il2cpp_runtime_class_init_0(v12);
      v12 = (__int64)TerminalPramsManager_TypeInfo;
    }
    if ( !MasterData_object )
      goto LABEL_74;
    p_image = QuestPhaseDetailAddMaster__GetAfterAction(
                (QuestPhaseDetailAddMaster_o *)MasterData_object,
                v14,
                *(_DWORD *)(*(_QWORD *)(v12 + 184) + 24LL) + 1,
                0LL);
    if ( p_image )
      goto LABEL_57;
    v16 = DataManager__GetMasterData_object_(
            (DataManager_o *)Instance,
            (const MethodInfo_2EC55C8 *)Method_DataManager_GetMasterData_QuestPhaseDetailMaster___);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4AB2957 )
    {
      sub_1BAB41C(&TerminalPramsManager_TypeInfo, v10);
      byte_4AB2957 = 1;
    }
    v12 = (__int64)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v12 = (__int64)TerminalPramsManager_TypeInfo;
    }
    v17 = *(_DWORD *)(*(_QWORD *)(v12 + 184) + 20LL);
    if ( !byte_4AB2962 )
    {
      sub_1BAB41C(&TerminalPramsManager_TypeInfo, v10);
      v12 = (__int64)TerminalPramsManager_TypeInfo;
      byte_4AB2962 = 1;
    }
    if ( !*(_DWORD *)(v12 + 224) )
    {
      j_il2cpp_runtime_class_init_0(v12);
      v12 = (__int64)TerminalPramsManager_TypeInfo;
    }
    if ( !v16 )
      goto LABEL_74;
    p_image = QuestPhaseDetailMaster__GetAfterAction(
                (QuestPhaseDetailMaster_o *)v16,
                v17,
                *(_DWORD *)(*(_QWORD *)(v12 + 184) + 24LL) + 1,
                0LL);
    if ( p_image )
      goto LABEL_57;
    v12 = (__int64)TerminalPramsManager_TypeInfo;
  }
  if ( !*(_DWORD *)(v12 + 224) )
    j_il2cpp_runtime_class_init_0(v12);
  if ( !byte_4AB2BAB )
  {
    sub_1BAB41C(&TerminalPramsManager_TypeInfo, v10);
    byte_4AB2BAB = 1;
  }
  v18 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v18 = TerminalPramsManager_TypeInfo;
  }
  if ( !v18->static_fields->_IsQuestClear_k__BackingField )
    return 0;
  if ( !v18->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v18);
  if ( TerminalPramsManager__get_Debug_IsQuestReleaseAll(0LL) )
    return 0;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4AB2957 )
  {
    sub_1BAB41C(&TerminalPramsManager_TypeInfo, v10);
    byte_4AB2957 = 1;
  }
  v12 = (__int64)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v12 = (__int64)TerminalPramsManager_TypeInfo;
  }
  if ( !Instance
    || (v19 = *(_DWORD *)(*(_QWORD *)(v12 + 184) + 20LL),
        (v12 = (__int64)DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2EC55C8 *)Method_DataManager_GetMasterData_QuestMaster___)) == 0) )
  {
LABEL_74:
    sub_1BAB678(v12, v10);
  }
  v12 = DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)v12,
          &entity,
          v19,
          (const MethodInfo_3163DE4 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
  if ( (v12 & 1) == 0 )
    return 0;
  if ( !entity )
    goto LABEL_74;
  p_image = &entity[6].klass->_1.image;
  if ( !p_image )
    return 0;
LABEL_57:
  v20 = p_image[3];
  result = 0;
  if ( (int)v20 < 2 || (v20 & 1) != 0 )
    return result;
  v12 = sub_1BAB4C4(QuestAfterAction_Command___TypeInfo, (unsigned int)v20 >> 1);
  if ( !v12 )
    goto LABEL_74;
  v22 = (unsigned int *)v12;
  if ( *(int *)(v12 + 24) < 1 )
    return 0;
  v23 = 0LL;
  v24 = 0LL;
  v25 = v12 + 32;
  for ( i = 1; ; i += 2 )
  {
    v27 = sub_1BAB668(QuestAfterAction_Command_TypeInfo);
    System_Object___ctor((Il2CppObject *)v27, 0LL);
    if ( (unsigned int)(i - 1) >= *((_DWORD *)p_image + 6) )
      goto LABEL_73;
    v12 = System_Int32__Parse((System_String_o *)p_image[i + 3], 0LL);
    if ( !v27 )
      goto LABEL_74;
    *(_DWORD *)(v27 + 16) = v12;
    if ( (unsigned int)i >= *((_DWORD *)p_image + 6) )
LABEL_73:
      sub_1BAB680(v12, v10);
    v30 = p_image[i + 4];
    *(_QWORD *)(v27 + 24) = v30;
    sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v27 + 24), v30, v28, v29);
    if ( *(_DWORD *)(v27 + 16) == 701
      && System_String__op_Equality(*(System_String_o **)(v27 + 24), (System_String_o *)StringLiteral_1262/*"1"*/, 0LL) )
    {
      break;
    }
    v12 = sub_1BAB558(v27, *(_QWORD *)(*(_QWORD *)v22 + 64LL));
    if ( !v12 )
    {
      v33 = sub_1BAB69C();
      sub_1BAB544(v33, 0LL);
    }
    if ( v24 >= v22[6] )
      goto LABEL_73;
    *(_QWORD *)(v25 + 8 * v24) = v27;
    sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v25 + v23), v27, v31, v32);
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
  Il2CppMethodPointer methodPtr; // x8
  int32_t v43; // w24
  System_Collections_Generic_Dictionary_string__DataEntityBase__c *v44; // x8
  Il2CppMethodPointer v45; // x8
  int32_t v46; // w25
  System_Collections_Generic_Dictionary_string__DataEntityBase__c *v47; // x8
  Il2CppMethodPointer v48; // x8
  int32_t MasterName_k__BackingField; // w24
  System_Collections_Generic_Dictionary_string__DataEntityBase__c *v50; // x8
  Il2CppMethodPointer v51; // x8
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
  if ( (byte_4AB2B61 & 1) == 0 )
  {
    sub_1BAB41C(&BalanceConfig_TypeInfo, isBeforeAction);
    sub_1BAB41C(&bool_TypeInfo, v5);
    sub_1BAB41C(&QuestAfterAction_Command___TypeInfo, v6);
    sub_1BAB41C(&QuestAfterAction_Command_TypeInfo, v7);
    sub_1BAB41C(&Method_DataManager_GetMasterData_EventMissionMaster___, v8);
    sub_1BAB41C(&Method_DataManager_GetMasterData_QuestMaster___, v9);
    sub_1BAB41C(&Method_DataManager_GetMasterData_QuestPhaseDetailAddMaster___, v10);
    sub_1BAB41C(&Method_DataManager_GetMasterData_QuestPhaseDetailMaster___, v11);
    sub_1BAB41C(&Method_DataManager_GetMasterData_WarMaster___, v12);
    sub_1BAB41C(&Method_DataManager_GetMaster_BlankEarthSpotMaster___, v13);
    sub_1BAB41C(&Method_DataManager_GetMaster_QuestBehaviorMaster___, v14);
    sub_1BAB41C(&Method_DataManager_GetMaster_QuestMaster___, v15);
    sub_1BAB41C(&Method_DataManager_GetMaster_ShopMaster___, v16);
    sub_1BAB41C(&Method_DataManager_GetMaster_WarMaster___, v17);
    sub_1BAB41C(&DataManager_TypeInfo, v18);
    sub_1BAB41C(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v19);
    sub_1BAB41C(&Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__, v20);
    sub_1BAB41C(&Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__GetEntity__, v21);
    sub_1BAB41C(&Method_DataMasterBase_BlankEarthSpotMaster__BlankEarthSpotEntity__int__TryGetEntity__, v22);
    sub_1BAB41C(&Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__Add__, v23);
    sub_1BAB41C(&Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___get_Item__, v24);
    sub_1BAB41C(&Method_System_Linq_Enumerable_Any_KeyValuePair_int__QuestAfterAction_VoiceInfo____, v25);
    sub_1BAB41C(&Method_System_Collections_Generic_List_int__Add__, v26);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v27);
    sub_1BAB41C(&TerminalPramsManager_TypeInfo, v28);
    sub_1BAB41C(&TerminalSceneComponent_TypeInfo, v29);
    sub_1BAB41C(&QuestAfterAction_VoiceInfo_TypeInfo, v30);
    this = (QuestAfterAction_o *)sub_1BAB41C(&StringLiteral_16740/*"afterActionBk"*/, v31);
    byte_4AB2B61 = 1;
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
           (const MethodInfo_2ED0484 *)Method_System_Linq_Enumerable_Any_KeyValuePair_int__QuestAfterAction_VoiceInfo____) )
    {
      QuestAfterAction__releaseVoice(v4, v32);
    }
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4AB2957 )
    {
      sub_1BAB41C(&TerminalPramsManager_TypeInfo, v32);
      byte_4AB2957 = 1;
    }
    v34 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v34 = TerminalPramsManager_TypeInfo;
    }
    QuestId_k__BackingField = v34->static_fields->_QuestId_k__BackingField;
    if ( !byte_4AB2962 )
    {
      sub_1BAB41C(&TerminalPramsManager_TypeInfo, v32);
      v34 = TerminalPramsManager_TypeInfo;
      byte_4AB2962 = 1;
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
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4AB0C49 )
  {
    sub_1BAB41C(&TerminalSceneComponent_TypeInfo, v37);
    byte_4AB0C49 = 1;
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
  if ( klass->vtable._10_Remove.methodPtr )
  {
    if ( !LODWORD(Master_object[3].monitor) )
      j_il2cpp_runtime_class_init_0(Master_object);
    if ( !byte_4AB0C49 )
    {
      sub_1BAB41C(&TerminalSceneComponent_TypeInfo, v37);
      byte_4AB0C49 = 1;
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
    methodPtr = v41->vtable._10_Remove.methodPtr;
    if ( !methodPtr )
      goto LABEL_294;
    v43 = *((_DWORD *)methodPtr + 5);
    if ( !byte_4AB0C49 )
    {
      sub_1BAB41C(&TerminalSceneComponent_TypeInfo, v37);
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalSceneComponent_TypeInfo;
      byte_4AB0C49 = 1;
    }
    if ( !LODWORD(Master_object[3].monitor) )
    {
      j_il2cpp_runtime_class_init_0(Master_object);
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalSceneComponent_TypeInfo;
    }
    v44 = Master_object[2].fields._lookup->klass;
    if ( !v44 )
      goto LABEL_294;
    v45 = v44->vtable._10_Remove.methodPtr;
    if ( !v45 )
      goto LABEL_294;
    v46 = *((_DWORD *)v45 + 4);
    if ( v46 < 1 )
    {
      if ( v43 < 1 )
        goto LABEL_80;
      if ( !LODWORD(Master_object[3].monitor) )
        j_il2cpp_runtime_class_init_0(Master_object);
      if ( !byte_4AB0C49 )
      {
        sub_1BAB41C(&TerminalSceneComponent_TypeInfo, v37);
        byte_4AB0C49 = 1;
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
      v51 = v50->vtable._10_Remove.methodPtr;
      if ( !v51 )
        goto LABEL_294;
      v36 = (System_String_array *)*((_QWORD *)v51 + 4);
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2EC5574 *)Method_DataManager_GetMaster_ShopMaster___);
      if ( !Master_object )
        goto LABEL_294;
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__int___GetEntity(
                                                                      Master_object,
                                                                      v43,
                                                                      (const MethodInfo_3163D90 *)Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__);
      if ( !Master_object )
        goto LABEL_294;
      MasterName_k__BackingField = (int32_t)Master_object->fields._MasterName_k__BackingField;
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2EC5574 *)Method_DataManager_GetMaster_WarMaster___);
      if ( !Master_object )
        goto LABEL_294;
    }
    else
    {
      if ( !LODWORD(Master_object[3].monitor) )
        j_il2cpp_runtime_class_init_0(Master_object);
      if ( !byte_4AB0C49 )
      {
        sub_1BAB41C(&TerminalSceneComponent_TypeInfo, v37);
        byte_4AB0C49 = 1;
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
      v48 = v47->vtable._10_Remove.methodPtr;
      if ( !v48 )
        goto LABEL_294;
      if ( !Instance )
        goto LABEL_294;
      v36 = (System_String_array *)*((_QWORD *)v48 + 4);
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMasterData_object_(
                                                                      (DataManager_o *)Instance,
                                                                      (const MethodInfo_2EC55C8 *)Method_DataManager_GetMasterData_EventMissionMaster___);
      if ( !Master_object )
        goto LABEL_294;
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__int___GetEntity(
                                                                      Master_object,
                                                                      v46,
                                                                      (const MethodInfo_3163D90 *)Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__GetEntity__);
      if ( !Master_object )
        goto LABEL_294;
      MasterName_k__BackingField = HIDWORD(Master_object->fields._MasterName_k__BackingField);
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMasterData_object_(
                                                                      (DataManager_o *)Instance,
                                                                      (const MethodInfo_2EC55C8 *)Method_DataManager_GetMasterData_WarMaster___);
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
    if ( !byte_4AB2961 )
    {
      sub_1BAB41C(&TerminalPramsManager_TypeInfo, v37);
      byte_4AB2961 = 1;
    }
    v53 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v53 = TerminalPramsManager_TypeInfo;
    }
    v53->static_fields->_WarId_k__BackingField = MasterKind_k__BackingField;
    if ( !byte_4AB0C49 )
    {
      sub_1BAB41C(&TerminalSceneComponent_TypeInfo, v37);
      byte_4AB0C49 = 1;
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
  if ( !byte_4AB2BA8 )
  {
    sub_1BAB41C(&TerminalPramsManager_TypeInfo, v37);
    byte_4AB2BA8 = 1;
  }
  v55 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v55 = TerminalPramsManager_TypeInfo;
  }
  if ( !v55->static_fields->_IsPhaseClear_k__BackingField
    && UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_16740/*"afterActionBk"*/, 0LL) )
  {
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)UnityEngine_PlayerPrefs__GetString_69758896(
                                                                    (System_String_o *)StringLiteral_16740/*"afterActionBk"*/,
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
    if ( !byte_4AB295B )
    {
      sub_1BAB41C(&TerminalPramsManager_TypeInfo, v37);
      byte_4AB295B = 1;
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
    if ( !byte_4AB295F )
    {
      sub_1BAB41C(&TerminalPramsManager_TypeInfo, v37);
      byte_4AB295F = 1;
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
    if ( !byte_4AB2BA9 )
    {
      sub_1BAB41C(&TerminalPramsManager_TypeInfo, v37);
      byte_4AB2BA9 = 1;
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
    if ( !byte_4AB2BAA )
    {
      sub_1BAB41C(&TerminalPramsManager_TypeInfo, v37);
      byte_4AB2BAA = 1;
    }
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
    }
    BYTE6(Master_object[2].fields._lookup[1].fields._buckets) = v61;
    if ( !byte_4AB2BAB )
    {
      sub_1BAB41C(&TerminalPramsManager_TypeInfo, v37);
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
      byte_4AB2BAB = 1;
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
                            (const MethodInfo_2EC55C8 *)Method_DataManager_GetMasterData_WarMaster___);
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4AB2957 )
      {
        sub_1BAB41C(&TerminalPramsManager_TypeInfo, v37);
        byte_4AB2957 = 1;
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
        if ( !byte_4AB2BAC )
        {
          sub_1BAB41C(&TerminalPramsManager_TypeInfo, v37);
          byte_4AB2BAC = 1;
        }
        v65 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v65 = TerminalPramsManager_TypeInfo;
        }
        v65->static_fields->_IsWarClear_k__BackingField = 1;
        id = v64->fields.id;
        if ( !byte_4AB2961 )
        {
          sub_1BAB41C(&TerminalPramsManager_TypeInfo, v37);
          v65 = TerminalPramsManager_TypeInfo;
          byte_4AB2961 = 1;
        }
        if ( !v65->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v65);
          v65 = TerminalPramsManager_TypeInfo;
        }
        v65->static_fields->_WarId_k__BackingField = id;
        v67 = TerminalPramsManager__CheckIsOrdealCallWarClear(v64, 0LL);
        if ( !byte_4AB2BAD )
        {
          sub_1BAB41C(&TerminalPramsManager_TypeInfo, v37);
          byte_4AB2BAD = 1;
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
  if ( !byte_4AB2BAE )
  {
    sub_1BAB41C(&TerminalPramsManager_TypeInfo, v37);
    byte_4AB2BAE = 1;
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
    if ( !byte_4AB2875 )
    {
      sub_1BAB41C(&TerminalPramsManager_TypeInfo, v37);
      byte_4AB2875 = 1;
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
  if ( !byte_4AB2BA8 )
  {
    sub_1BAB41C(&TerminalPramsManager_TypeInfo, v37);
    byte_4AB2BA8 = 1;
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
            (const MethodInfo_2EC55C8 *)Method_DataManager_GetMasterData_QuestPhaseDetailAddMaster___);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4AB2957 )
    {
      sub_1BAB41C(&TerminalPramsManager_TypeInfo, v37);
      byte_4AB2957 = 1;
    }
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
    }
    buckets_high = HIDWORD(Master_object[2].fields._lookup->fields._buckets);
    if ( !byte_4AB2962 )
    {
      sub_1BAB41C(&TerminalPramsManager_TypeInfo, v37);
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
      byte_4AB2962 = 1;
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
            (const MethodInfo_2EC55C8 *)Method_DataManager_GetMasterData_QuestPhaseDetailMaster___);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4AB2957 )
    {
      sub_1BAB41C(&TerminalPramsManager_TypeInfo, v37);
      byte_4AB2957 = 1;
    }
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
    }
    v73 = HIDWORD(Master_object[2].fields._lookup->fields._buckets);
    if ( !byte_4AB2962 )
    {
      sub_1BAB41C(&TerminalPramsManager_TypeInfo, v37);
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
      byte_4AB2962 = 1;
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
  if ( !byte_4AB2BAB )
  {
    sub_1BAB41C(&TerminalPramsManager_TypeInfo, v37);
    byte_4AB2BAB = 1;
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
  if ( !byte_4AB2957 )
  {
    sub_1BAB41C(&TerminalPramsManager_TypeInfo, v37);
    byte_4AB2957 = 1;
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
                                                                  (const MethodInfo_2EC55C8 *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !Master_object )
    goto LABEL_294;
  v76 = DataMasterBase_object__object__int___GetEntity(
          Master_object,
          v75,
          (const MethodInfo_3163D90 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
  if ( v76 )
    v36 = (System_String_array *)v76[6].klass;
  else
LABEL_210:
    v36 = 0LL;
LABEL_211:
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v77 = DataManager__GetMaster_object_((const MethodInfo_2EC5574 *)Method_DataManager_GetMaster_QuestBehaviorMaster___);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4AB2957 )
  {
    sub_1BAB41C(&TerminalPramsManager_TypeInfo, v37);
    byte_4AB2957 = 1;
  }
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
  }
  v78 = HIDWORD(Master_object[2].fields._lookup->fields._buckets);
  if ( !byte_4AB2962 )
  {
    sub_1BAB41C(&TerminalPramsManager_TypeInfo, v37);
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
    byte_4AB2962 = 1;
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
    UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_16740/*"afterActionBk"*/, 0LL);
    return;
  }
  v82 = sub_1BAB4C4(QuestAfterAction_Command___TypeInfo, (unsigned int)v81 >> 1);
  v4->fields.commandBuf = (struct QuestAfterAction_Command_array *)v82;
  p_commandBuf = (unsigned int **)&v4->fields.commandBuf;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&v4->fields.commandBuf, v82, v84, v85);
  commandBuf = (int *)v4->fields.commandBuf;
  if ( !commandBuf )
    goto LABEL_294;
  v87 = 0LL;
  v88 = 0;
  while ( (__int64)v87 < commandBuf[6] )
  {
    v89 = sub_1BAB668(QuestAfterAction_Command_TypeInfo);
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
    sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v89 + 24), (int32_t)v93, v90, v91);
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
          v100 = sub_1BAB668(QuestAfterAction_VoiceInfo_TypeInfo);
          System_Object___ctor((Il2CppObject *)v100, 0LL);
          *(_DWORD *)(v100 + 16) = v135;
          *(_QWORD *)(v100 + 24) = v99;
          sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v100 + 24), (int32_t)v99, v101, v102);
          if ( !svtVoices )
            goto LABEL_294;
          System_Collections_Generic_Dictionary_int__object___Add(
            svtVoices,
            v87,
            (Il2CppObject *)v100,
            (const MethodInfo_31B6E34 *)Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__Add__);
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
      if ( (unsigned int)(v103 - 400) < 0xD )
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
                                                       (const MethodInfo_31E65AC *)Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___get_Item__);
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
        *(const MethodInfo_3530898 **)(*(_QWORD *)(v108[4] + 192LL) + 112LL));
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
              *(const MethodInfo_3530898 **)(*(_QWORD *)(v116[4] + 192LL) + 112LL));
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
        sub_1BAB680(Master_object, v37);
      }
    }
LABEL_290:
    v118 = *p_commandBuf;
    if ( !*p_commandBuf )
      goto LABEL_294;
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)sub_1BAB558(v89, *(_QWORD *)(*(_QWORD *)v118 + 64LL));
    if ( !Master_object )
    {
      v134 = sub_1BAB69C();
      sub_1BAB544(v134, 0LL);
    }
    if ( v87 >= v118[6] )
      goto LABEL_383;
    v121 = &v118[2 * v87];
    *((_QWORD *)v121 + 4) = v89;
    sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v121 + 8), v89, v119, v120);
    commandBuf = (int *)*p_commandBuf;
    v88 += 2;
    ++v87;
    if ( !*p_commandBuf )
      goto LABEL_294;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4AB2BA8 )
  {
    sub_1BAB41C(&TerminalPramsManager_TypeInfo, v37);
    byte_4AB2BA8 = 1;
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
    v123 = DataManager__GetMaster_object_((const MethodInfo_2EC5574 *)Method_DataManager_GetMaster_QuestMaster___);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4AB2957 )
    {
      sub_1BAB41C(&TerminalPramsManager_TypeInfo, v37);
      byte_4AB2957 = 1;
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
      if ( !byte_4AB295A )
      {
        sub_1BAB41C(&TerminalPramsManager_TypeInfo, v37);
        byte_4AB295A = 1;
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
        Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2EC5574 *)Method_DataManager_GetMaster_BlankEarthSpotMaster___);
        if ( entity && Master_object )
        {
          Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__int___TryGetEntity(
                                                                          Master_object,
                                                                          &v137,
                                                                          entity->fields.spotId,
                                                                          (const MethodInfo_3163DE4 *)Method_DataMasterBase_BlankEarthSpotMaster__BlankEarthSpotEntity__int__TryGetEntity__);
          if ( ((unsigned __int8)Master_object & 1) == 0 )
            goto LABEL_334;
          if ( v137 )
          {
            v127 = (int32_t)v137[1].klass;
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            if ( !byte_4AB2BAF )
            {
              sub_1BAB41C(&TerminalPramsManager_TypeInfo, v37);
              byte_4AB2BAF = 1;
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
        sub_1BAB678(Master_object, v37);
      }
    }
  }
LABEL_334:
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4AB0F7F )
  {
    sub_1BAB41C(&TerminalPramsManager_TypeInfo, v37);
    byte_4AB0F7F = 1;
  }
  v129 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v129 = TerminalPramsManager_TypeInfo;
  }
  v129->static_fields->_IsAutoResume_k__BackingField = 1;
  if ( !byte_4AB295D )
  {
    sub_1BAB41C(&TerminalPramsManager_TypeInfo, v37);
    v129 = TerminalPramsManager_TypeInfo;
    byte_4AB295D = 1;
  }
  if ( !v129->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v129);
    v129 = TerminalPramsManager_TypeInfo;
  }
  v129->static_fields->_DispState_k__BackingField = 2;
  if ( !byte_4AB295A )
  {
    sub_1BAB41C(&TerminalPramsManager_TypeInfo, v37);
    v129 = TerminalPramsManager_TypeInfo;
    byte_4AB295A = 1;
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
  if ( !byte_4AB2875 )
  {
    sub_1BAB41C(&TerminalPramsManager_TypeInfo, v37);
    byte_4AB2875 = 1;
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
    if ( !byte_4AB2876 )
    {
      sub_1BAB41C(&TerminalPramsManager_TypeInfo, v37);
      byte_4AB2876 = 1;
    }
    v132 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v132 = TerminalPramsManager_TypeInfo;
    }
    v132->static_fields->_BlankEarthSpotId_k__BackingField = 0;
    if ( !byte_4AB2875 )
    {
      sub_1BAB41C(&TerminalPramsManager_TypeInfo, v37);
      v132 = TerminalPramsManager_TypeInfo;
      byte_4AB2875 = 1;
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
      if ( !byte_4AB295D )
      {
        sub_1BAB41C(&TerminalPramsManager_TypeInfo, v37);
        byte_4AB295D = 1;
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
  if ( !byte_4AB2960 )
  {
    sub_1BAB41C(&TerminalPramsManager_TypeInfo, v37);
    byte_4AB2960 = 1;
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

  if ( (byte_4AB2B5F & 1) == 0 )
  {
    sub_1BAB41C(&StringLiteral_16740/*"afterActionBk"*/, v1);
    byte_4AB2B5F = 1;
  }
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_16740/*"afterActionBk"*/, 0LL);
}


int32_t __fastcall QuestAfterAction__ExtractCommandTargetId(
        QuestAfterAction_Command_o *command,
        const MethodInfo *method)
{
  QuestAfterAction_Command_o *v2; // x19
  QuestAfterAction_Command_c *param; // x8

  v2 = command;
  if ( (byte_4AB2B63 & 1) == 0 )
  {
    command = (QuestAfterAction_Command_o *)sub_1BAB41C(&StringLiteral_863/*","*/, method);
    byte_4AB2B63 = 1;
  }
  if ( !v2 )
    goto LABEL_11;
  command = (QuestAfterAction_Command_o *)v2->fields.param;
  if ( !command )
    goto LABEL_11;
  command = (QuestAfterAction_Command_o *)System_String__Contains(
                                            (System_String_o *)command,
                                            (System_String_o *)StringLiteral_863/*","*/,
                                            0LL);
  param = (QuestAfterAction_Command_c *)v2->fields.param;
  if ( ((unsigned __int8)command & 1) == 0 )
    return System_Int32__Parse((System_String_o *)param, 0LL);
  if ( !param || (command = (QuestAfterAction_Command_o *)System_String__Split(v2->fields.param, 0x2Cu, 0, 0LL)) == 0LL )
LABEL_11:
    sub_1BAB678(command, method);
  if ( !LODWORD(command->fields.param) )
    sub_1BAB680(command, method);
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

  if ( (byte_4AB2B70 & 1) == 0 )
  {
    sub_1BAB41C(&QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__81_TypeInfo, commandEnumerable);
    byte_4AB2B70 = 1;
  }
  v5 = sub_1BAB668(QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__81_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_DWORD *)(v5 + 16) = -2;
  *(_DWORD *)(v5 + 32) = System_Environment__get_CurrentManagedThreadId(0LL);
  *(_QWORD *)(v5 + 56) = this;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v5 + 56), (int32_t)this, v6, v7);
  *(_QWORD *)(v5 + 48) = commandEnumerable;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v5 + 48), (int32_t)commandEnumerable, v8, v9);
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
  long double v7; // q0
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
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x1
  int32_t v21; // w2
  int32_t v22; // w3
  __int64 v24; // x0

  if ( (byte_4AB2B64 & 1) == 0 )
  {
    sub_1BAB41C(&Method_System_Array_Empty_QuestAfterAction_Command___, method);
    sub_1BAB41C(&QuestAfterAction_Command___TypeInfo, v3);
    sub_1BAB41C(&QuestAfterAction_Command_TypeInfo, v4);
    byte_4AB2B64 = 1;
  }
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)actionVals, 0LL);
  if ( (IsNullOrEmpty & 1) != 0 )
  {
    v8 = Method_System_Array_Empty_QuestAfterAction_Command___;
    v9 = *((_QWORD *)Method_System_Array_Empty_QuestAfterAction_Command___ + 7);
    if ( !v9 )
    {
      sub_1BFD354(Method_System_Array_Empty_QuestAfterAction_Command___);
      v9 = v8[7];
    }
    v10 = *(_QWORD *)(v9 + 16);
    if ( (*(_BYTE *)(v10 + 309) & 1) == 0 )
      v10 = sub_1BFD2F8(v7);
    if ( !*(_DWORD *)(v10 + 224) )
      *(__n128 *)&v7 = j_il2cpp_runtime_class_init_0(v10);
    v11 = *(_QWORD *)(v8[7] + 16LL);
    if ( (*(_BYTE *)(v11 + 309) & 1) == 0 )
      v11 = sub_1BFD2F8(v7);
    return **(QuestAfterAction_Command_array ***)(v11 + 184);
  }
  else
  {
    if ( !actionVals
      || (IsNullOrEmpty = sub_1BAB4C4(
                            QuestAfterAction_Command___TypeInfo,
                            (unsigned int)((signed int)actionVals->max_length / 2))) == 0 )
    {
LABEL_25:
      sub_1BAB678(IsNullOrEmpty, v6);
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
        v17 = sub_1BAB668(QuestAfterAction_Command_TypeInfo);
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
        sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v17 + 24), (int32_t)v20, v18, v19);
        IsNullOrEmpty = sub_1BAB558(v17, v12->obj.klass->_1.element_class);
        if ( !IsNullOrEmpty )
        {
          v24 = sub_1BAB69C();
          sub_1BAB544(v24, 0LL);
        }
        if ( v14 >= v12->max_length )
LABEL_24:
          sub_1BAB680(IsNullOrEmpty, v6);
        *(_QWORD *)(v15 + 8 * v14) = v17;
        sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v15 + v13), v17, v21, v22);
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

  if ( (byte_4AB2B7B & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataManager_GetMasterData_QuestMaster___, *(_QWORD *)&phase);
    sub_1BAB41C(&Method_DataManager_GetMasterData_QuestPhaseDetailAddMaster___, v5);
    sub_1BAB41C(&Method_DataManager_GetMasterData_QuestPhaseDetailMaster___, v6);
    sub_1BAB41C(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v7);
    sub_1BAB41C(&Method_System_Linq_Enumerable_Any_string___, v8);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    sub_1BAB41C(&TerminalPramsManager_TypeInfo, v10);
    byte_4AB2B7B = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_33;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2EC55C8 *)Method_DataManager_GetMasterData_QuestPhaseDetailAddMaster___);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4AB2957 )
  {
    sub_1BAB41C(&TerminalPramsManager_TypeInfo, v12);
    byte_4AB2957 = 1;
  }
  Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  }
  v14 = *(_DWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 20LL);
  if ( !byte_4AB2962 )
  {
    sub_1BAB41C(&TerminalPramsManager_TypeInfo, v12);
    Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
    byte_4AB2962 = 1;
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
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_33;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2EC55C8 *)Method_DataManager_GetMasterData_QuestPhaseDetailMaster___);
  if ( !Instance )
    goto LABEL_33;
  result = QuestPhaseDetailMaster__GetAfterAction((QuestPhaseDetailMaster_o *)Instance, questId, phase, 0LL);
  if ( result )
    return result;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_33;
  v19 = DataManager__GetMasterData_object_(
          Instance,
          (const MethodInfo_2EC55C8 *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4AB2957 )
  {
    sub_1BAB41C(&TerminalPramsManager_TypeInfo, v12);
    byte_4AB2957 = 1;
  }
  Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  }
  if ( !v19 )
LABEL_33:
    sub_1BAB678(Instance, v12);
  result = (System_String_array *)DataMasterBase_object__object__int___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)v19,
                                    *(_DWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 20LL),
                                    (const MethodInfo_3163D90 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
  if ( result )
  {
    v20 = result;
    if ( System_Linq_Enumerable__Any_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)result->m_Items[8],
           (const MethodInfo_2ED117C *)Method_System_Linq_Enumerable_Any_string___) )
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

  if ( (byte_4AB2B7A & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataManager_GetMasterData_QuestMaster___, *(_QWORD *)&phase);
    sub_1BAB41C(&Method_DataManager_GetMasterData_QuestPhaseDetailAddMaster___, v5);
    sub_1BAB41C(&Method_DataManager_GetMasterData_QuestPhaseDetailMaster___, v6);
    sub_1BAB41C(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v7);
    sub_1BAB41C(&Method_System_Linq_Enumerable_Any_string___, v8);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    sub_1BAB41C(&TerminalPramsManager_TypeInfo, v10);
    byte_4AB2B7A = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_33;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2EC55C8 *)Method_DataManager_GetMasterData_QuestPhaseDetailAddMaster___);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4AB2957 )
  {
    sub_1BAB41C(&TerminalPramsManager_TypeInfo, v12);
    byte_4AB2957 = 1;
  }
  Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  }
  v14 = *(_DWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 20LL);
  if ( !byte_4AB2962 )
  {
    sub_1BAB41C(&TerminalPramsManager_TypeInfo, v12);
    Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
    byte_4AB2962 = 1;
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
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_33;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2EC55C8 *)Method_DataManager_GetMasterData_QuestPhaseDetailMaster___);
  if ( !Instance )
    goto LABEL_33;
  result = QuestPhaseDetailMaster__GetBeforeAction((QuestPhaseDetailMaster_o *)Instance, questId, phase, 0LL);
  if ( result )
    return result;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_33;
  v19 = DataManager__GetMasterData_object_(
          Instance,
          (const MethodInfo_2EC55C8 *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4AB2957 )
  {
    sub_1BAB41C(&TerminalPramsManager_TypeInfo, v12);
    byte_4AB2957 = 1;
  }
  Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  }
  if ( !v19 )
LABEL_33:
    sub_1BAB678(Instance, v12);
  result = (System_String_array *)DataMasterBase_object__object__int___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)v19,
                                    *(_DWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 20LL),
                                    (const MethodInfo_3163D90 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
  if ( result )
  {
    v20 = result;
    if ( System_Linq_Enumerable__Any_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)result->m_Items[7],
           (const MethodInfo_2ED117C *)Method_System_Linq_Enumerable_Any_string___) )
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
        return dword_BFCEF0[commandId - 1000];
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
        const MethodInfo_2F548A4 *method)
{
  UnityEngine_Object_o *MapGameObject; // x20
  _BOOL8 v11; // x0
  __int64 v12; // x1

  if ( !method->rgctx_data )
  {
    sub_1BAB41C(&UnityEngine_Object_TypeInfo, *(_QWORD *)&comType);
    if ( !method->rgctx_data )
      sub_1BFD354();
  }
  MapGameObject = (UnityEngine_Object_o *)QuestAfterAction__GetMapGameObject(this, comType, id, state, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v11 = UnityEngine_Object__op_Equality(MapGameObject, 0LL, 0LL);
  if ( v11 )
    return 0LL;
  if ( !MapGameObject )
    sub_1BAB678(v11, v12);
  return UnityEngine_GameObject__GetComponent_object_(
           (UnityEngine_GameObject_o *)MapGameObject,
           (const MethodInfo_2F13970 *)method->rgctx_data->_0_UnityEngine_GameObject_GetComponent_T_);
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
  const MethodInfo *v13; // x3

  v8 = this;
  if ( (byte_4AB2B76 & 1) == 0 )
  {
    sub_1BAB41C(&UnityEngine_Object_TypeInfo, *(_QWORD *)&comType);
    this = (QuestAfterAction_o *)sub_1BAB41C(&SrcSpotBasePrefab_TypeInfo, v9);
    byte_4AB2B76 = 1;
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
        sub_1BAB678(this, *(_QWORD *)&comType);
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
    this = (QuestAfterAction_o *)MapGimmickComponent__GetGobjName(id, 0LL);
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
  this = (QuestAfterAction_o *)MapGimmickComponent__GetGobjName(id, 0LL);
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
  int max_length; // w8
  System_Object_array *v14; // x21
  unsigned int v15; // w23
  Il2CppClass **v16; // x8
  Il2CppClass *v17; // x22
  struct System_Int32_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10

  if ( (byte_4AB2B65 & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataManager_GetMasterData_MapGimmickMaster___, *(_QWORD *)&spotId);
    sub_1BAB41C(&Method_DataMasterBase_getEntitys_MapGimmickEntity___, v4);
    sub_1BAB41C(&Method_System_Collections_Generic_List_int__Add__, v5);
    sub_1BAB41C(&Method_System_Collections_Generic_List_int__ToArray__, v6);
    sub_1BAB41C(&Method_System_Collections_Generic_List_int___ctor__, v7);
    sub_1BAB41C(&System_Collections_Generic_List_int__TypeInfo, v8);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_4AB2B65 = 1;
  }
  v10 = (System_Collections_Generic_List_int__o *)sub_1BAB668(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v10,
    (const MethodInfo_3530044 *)Method_System_Collections_Generic_List_int___ctor__);
  Instance = (System_Object_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  Instance = (System_Object_array *)DataManager__GetMasterData_object_(
                                      (DataManager_o *)Instance,
                                      (const MethodInfo_2EC55C8 *)Method_DataManager_GetMasterData_MapGimmickMaster___);
  if ( !Instance )
    goto LABEL_19;
  Instance = DataMasterBase__getEntitys_object_(
               (DataMasterBase_o *)Instance,
               (const MethodInfo_2EC5E5C *)Method_DataMasterBase_getEntitys_MapGimmickEntity___);
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
        sub_1BAB680(Instance, name_low);
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
            *(const MethodInfo_3530898 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
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
    sub_1BAB678(Instance, name_low);
  }
LABEL_17:
  if ( !v10 )
    goto LABEL_19;
  return System_Collections_Generic_List_int___ToArray(
           v10,
           (const MethodInfo_3532350 *)Method_System_Collections_Generic_List_int__ToArray__);
}


int32_t __fastcall QuestAfterAction__GetState(QuestAfterAction_o *this, const MethodInfo *method)
{
  struct CStateManager_QuestAfterAction__o *fsm; // x8

  if ( (byte_4AB2B74 & 1) == 0 )
  {
    sub_1BAB41C(&Method_CStateManager_QuestAfterAction__getState__, method);
    byte_4AB2B74 = 1;
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

  if ( (byte_4AB2B60 & 1) == 0 )
  {
    sub_1BAB41C(&Method_CStateManager_QuestAfterAction___ctor__, method);
    sub_1BAB41C(&Method_CStateManager_QuestAfterAction__add__, v4);
    sub_1BAB41C(&CStateManager_QuestAfterAction__TypeInfo, v5);
    sub_1BAB41C(
      &Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___ContainsKey__,
      v6);
    sub_1BAB41C(&Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___get_Item__, v7);
    sub_1BAB41C(&Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___set_Item__, v8);
    sub_1BAB41C(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___, v9);
    sub_1BAB41C(&Method_System_Collections_Generic_List_int__Clear__, v10);
    sub_1BAB41C(&Method_System_Collections_Generic_List_int___ctor__, v11);
    sub_1BAB41C(&System_Collections_Generic_List_int__TypeInfo, v12);
    sub_1BAB41C(&QuestAfterAction_StateAdditional_TypeInfo, v13);
    sub_1BAB41C(&QuestAfterAction_StateInstant_TypeInfo, v14);
    sub_1BAB41C(&QuestAfterAction_StateMain_TypeInfo, v15);
    sub_1BAB41C(&QuestAfterAction_StateNone_TypeInfo, v16);
    byte_4AB2B60 = 1;
  }
  p_fsm = &this->fields.fsm;
  if ( !this->fields.fsm )
  {
    v18 = (CStateManager_T__o *)sub_1BAB668(CStateManager_QuestAfterAction__TypeInfo);
    CStateManager_object____ctor(
      v18,
      (Il2CppObject *)this,
      4,
      (const MethodInfo_30F0B14 *)Method_CStateManager_QuestAfterAction___ctor__);
    this->fields.fsm = (struct CStateManager_QuestAfterAction__o *)v18;
    sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.fsm, (int32_t)v18, v19, v20);
    fsm = (CStateManager_T__o *)this->fields.fsm;
    v22 = (Il2CppObject *)sub_1BAB668(QuestAfterAction_StateNone_TypeInfo);
    System_Object___ctor(v22, 0LL);
    if ( !fsm )
      goto LABEL_21;
    CStateManager_object___add(
      fsm,
      0,
      (IState_T__o *)v22,
      (const MethodInfo_30F0BBC *)Method_CStateManager_QuestAfterAction__add__);
    v25 = (CStateManager_T__o *)*p_fsm;
    v26 = (Il2CppObject *)sub_1BAB668(QuestAfterAction_StateMain_TypeInfo);
    System_Object___ctor(v26, 0LL);
    if ( !v25 )
      goto LABEL_21;
    CStateManager_object___add(
      v25,
      1,
      (IState_T__o *)v26,
      (const MethodInfo_30F0BBC *)Method_CStateManager_QuestAfterAction__add__);
    v27 = (CStateManager_T__o *)*p_fsm;
    v28 = (Il2CppObject *)sub_1BAB668(QuestAfterAction_StateAdditional_TypeInfo);
    System_Object___ctor(v28, 0LL);
    if ( !v27 )
      goto LABEL_21;
    CStateManager_object___add(
      v27,
      2,
      (IState_T__o *)v28,
      (const MethodInfo_30F0BBC *)Method_CStateManager_QuestAfterAction__add__);
    v29 = (CStateManager_T__o *)*p_fsm;
    v30 = (Il2CppObject *)sub_1BAB668(QuestAfterAction_StateInstant_TypeInfo);
    System_Object___ctor(v30, 0LL);
    if ( !v29 )
      goto LABEL_21;
    CStateManager_object___add(
      v29,
      3,
      (IState_T__o *)v30,
      (const MethodInfo_30F0BBC *)Method_CStateManager_QuestAfterAction__add__);
  }
  QuestAfterAction__SetState(this, 0, v2);
  this->fields.commandBuf = 0LL;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.commandBuf, 0, v31, v32);
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
                                                                                (const MethodInfo_31E6840 *)Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___ContainsKey__);
    v34 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.commandTypeIds;
    if ( ((unsigned __int8)commandTypeIds & 1) != 0 )
    {
      if ( !v34 )
        goto LABEL_21;
      commandTypeIds = (System_Collections_Generic_Dictionary_TKey__TValue__o *)System_Collections_Generic_Dictionary_Int32Enum__object___get_Item(
                                                                                  (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.commandTypeIds,
                                                                                  v33,
                                                                                  (const MethodInfo_31E65AC *)Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___get_Item__);
      if ( !commandTypeIds )
        goto LABEL_21;
      v35 = HIDWORD(commandTypeIds->fields._entries) + 1;
      LODWORD(commandTypeIds->fields._entries) = 0;
      HIDWORD(commandTypeIds->fields._entries) = v35;
    }
    else
    {
      v36 = (System_Collections_Generic_List_int__o *)sub_1BAB668(System_Collections_Generic_List_int__TypeInfo);
      System_Collections_Generic_List_int____ctor(
        v36,
        (const MethodInfo_3530044 *)Method_System_Collections_Generic_List_int___ctor__);
      if ( !v34 )
        goto LABEL_21;
      System_Collections_Generic_Dictionary_Int32Enum__object___set_Item(
        v34,
        v33,
        (Il2CppObject *)v36,
        (const MethodInfo_31E6638 *)Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___set_Item__);
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
                             (const MethodInfo_2F13970 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___),
        this->fields.screenCollider = (struct UnityEngine_BoxCollider_o *)Component_object,
        sub_1BAB3C0(
          (ServantStatusBattleListViewItem_o *)&this->fields.screenCollider,
          (int32_t)Component_object,
          v38,
          v39),
        (commandTypeIds = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.screenCollider) == 0LL) )
  {
LABEL_21:
    sub_1BAB678(commandTypeIds, v24);
  }
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)commandTypeIds, 0, 0LL);
  this->fields.lastDispSpot = 0LL;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.lastDispSpot, 0, v40, v41);
  v42 = (System_Collections_Generic_List_int__o *)sub_1BAB668(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v42,
    (const MethodInfo_3530044 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.invalidMapGimmickIdList = v42;
  p_invalidMapGimmickIdList = &this->fields.invalidMapGimmickIdList;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)p_invalidMapGimmickIdList, (int32_t)v42, v44, v45);
  *((_WORD *)p_invalidMapGimmickIdList + 80) = 0;
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

  if ( (byte_4AB2B68 & 1) == 0 )
  {
    sub_1BAB41C(
      &Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___ContainsKey__,
      *(_QWORD *)&commandType);
    sub_1BAB41C(&Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___get_Item__, v7);
    sub_1BAB41C(&Method_System_Collections_Generic_List_int__Contains__, v8);
    byte_4AB2B68 = 1;
  }
  commandTypeIds = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.commandTypeIds;
  if ( !commandTypeIds )
    goto LABEL_9;
  if ( System_Collections_Generic_Dictionary_Int32Enum__object___ContainsKey(
         commandTypeIds,
         commandType,
         (const MethodInfo_31E6840 *)Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___ContainsKey__) )
  {
    commandTypeIds = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.commandTypeIds;
    if ( commandTypeIds )
    {
      commandTypeIds = (System_Collections_Generic_Dictionary_TKey__TValue__o *)System_Collections_Generic_Dictionary_Int32Enum__object___get_Item(
                                                                                  commandTypeIds,
                                                                                  commandType,
                                                                                  (const MethodInfo_31E65AC *)Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___get_Item__);
      if ( commandTypeIds )
        return System_Collections_Generic_List_int___Contains(
                 (System_Collections_Generic_List_int__o *)commandTypeIds,
                 commandTypeId,
                 (const MethodInfo_3530C10 *)Method_System_Collections_Generic_List_int__Contains__);
    }
LABEL_9:
    sub_1BAB678(commandTypeIds, *(_QWORD *)&commandType);
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
      sub_1BAB680(this, *(_QWORD *)&spotId);
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
    sub_1BAB678(this, *(_QWORD *)&spotId);
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

  if ( (byte_4AB2B79 & 1) == 0 )
  {
    sub_1BAB41C(&TerminalSceneComponent_TypeInfo, method);
    byte_4AB2B79 = 1;
  }
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4AB0C49 )
  {
    sub_1BAB41C(&TerminalSceneComponent_TypeInfo, method);
    byte_4AB0C49 = 1;
  }
  v2 = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v2 = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
  }
  klass = v2->fields.subRootGimmickP->klass;
  if ( !klass || (v2 = *(ScrTerminalMap_o **)&klass->_2.thread_static_fields_offset) == 0LL )
    sub_1BAB678(v2, method);
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
        sub_1BAB680(actionCommand, method);
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

  if ( (byte_4AB2B74 & 1) == 0 )
  {
    sub_1BAB41C(&Method_CStateManager_QuestAfterAction__getState__, method);
    byte_4AB2B74 = 1;
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

  if ( (byte_4AB2B6C & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataManager_GetMasterData_EventMaster___, method);
    sub_1BAB41C(&Method_DataManager_GetMasterData_EventMissionActionAddMaster___, v2);
    sub_1BAB41C(&Method_DataManager_GetMasterData_EventMissionActionMaster___, v3);
    sub_1BAB41C(&Method_DataManager_GetMasterData_EventMissionMaster___, v4);
    sub_1BAB41C(&Method_DataManager_GetMaster_EventMaster___, v5);
    sub_1BAB41C(&Method_DataManager_GetMaster_ShopActionMaster___, v6);
    sub_1BAB41C(&Method_DataManager_GetMaster_ShopMaster___, v7);
    sub_1BAB41C(&DataManager_TypeInfo, v8);
    sub_1BAB41C(&Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__, v9);
    sub_1BAB41C(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v10);
    sub_1BAB41C(&Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__GetEntity__, v11);
    sub_1BAB41C(&Method_System_Collections_Generic_List_Enumerator_ShopActionEntity__Dispose__, v12);
    sub_1BAB41C(&Method_System_Collections_Generic_List_Enumerator_ShopActionEntity__MoveNext__, v13);
    sub_1BAB41C(&Method_System_Collections_Generic_List_Enumerator_ShopActionEntity__get_Current__, v14);
    sub_1BAB41C(&EventMissionActionInfo_TypeInfo, v15);
    sub_1BAB41C(&Method_System_Collections_Generic_List_ShopActionEntity__GetEnumerator__, v16);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    sub_1BAB41C(&TerminalPramsManager_TypeInfo, v18);
    sub_1BAB41C(&TerminalSceneComponent_TypeInfo, v19);
    byte_4AB2B6C = 1;
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
  if ( !byte_4AB0C49 )
  {
    sub_1BAB41C(&TerminalSceneComponent_TypeInfo, v21);
    byte_4AB0C49 = 1;
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
      Master_object = (char *)DataManager__GetMaster_object_((const MethodInfo_2EC5574 *)Method_DataManager_GetMaster_ShopMaster___);
      if ( !Master_object )
        goto LABEL_67;
      Entity = DataMasterBase_object__object__int___GetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                 v22->fields.shopId,
                 (const MethodInfo_3163D90 *)Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__);
      if ( Entity )
      {
        v30 = Entity;
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Master_object = (char *)DataManager__GetMaster_object_((const MethodInfo_2EC5574 *)Method_DataManager_GetMaster_EventMaster___);
        if ( !Master_object )
          goto LABEL_67;
        v31 = DataMasterBase_object__object__int___GetEntity(
                (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                (int32_t)v30[1].monitor,
                (const MethodInfo_3163D90 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
        if ( !v31 || !EventEntity__IsEventPeriod((EventEntity_o *)v31, 0LL, 0LL) )
          goto LABEL_66;
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Master_object = (char *)DataManager__GetMaster_object_((const MethodInfo_2EC5574 *)Method_DataManager_GetMaster_ShopActionMaster___);
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
          (const MethodInfo_354E3B4 *)Method_System_Collections_Generic_List_ShopActionEntity__GetEnumerator__);
        v55 = v54;
        while ( 1 )
        {
          v32 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v55,
                  (const MethodInfo_32C4C78 *)Method_System_Collections_Generic_List_Enumerator_ShopActionEntity__MoveNext__);
          if ( !v32 )
            break;
          current = v55.fields._current;
          if ( !v55.fields._current )
            sub_1BAB678(v32, v33);
          if ( LODWORD(v55.fields._current[1].monitor) == 4 )
          {
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            if ( !byte_4AB2BB0 )
            {
              sub_1BAB41C(&TerminalPramsManager_TypeInfo, v33);
              byte_4AB2BB0 = 1;
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
              sub_1BAB678(0LL, v36);
            klass = current[2].klass;
            TransitionInfo_k__BackingField->fields.afterActionVals = (struct System_String_array *)klass;
            sub_1BAB3C0(
              (ServantStatusBattleListViewItem_o *)&TransitionInfo_k__BackingField->fields.afterActionVals,
              (int32_t)klass,
              v37,
              v38);
            v43 = v24->fields._TransitionInfo_k__BackingField;
            if ( !v43 )
              sub_1BAB678(v41, v42);
            v43->fields.optionId = (int32_t)current[2].monitor;
            break;
          }
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v55,
          (const MethodInfo_32C4C74 *)Method_System_Collections_Generic_List_Enumerator_ShopActionEntity__Dispose__);
      }
    }
  }
  else
  {
    Master_object = (char *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Master_object )
      goto LABEL_67;
    v25 = (DataManager_o *)Master_object;
    Master_object = (char *)DataManager__GetMasterData_object_(
                              (DataManager_o *)Master_object,
                              (const MethodInfo_2EC55C8 *)Method_DataManager_GetMasterData_EventMissionActionAddMaster___);
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
      v28 = (EventMissionActionInfo_o *)sub_1BAB668(EventMissionActionInfo_TypeInfo);
      EventMissionActionInfo___ctor_42460632(v28, v27, 0LL);
    }
    else
    {
      Master_object = (char *)DataManager__GetMasterData_object_(
                                v25,
                                (const MethodInfo_2EC55C8 *)Method_DataManager_GetMasterData_EventMissionActionMaster___);
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
      v28 = (EventMissionActionInfo_o *)sub_1BAB668(EventMissionActionInfo_TypeInfo);
      EventMissionActionInfo___ctor(v28, v45, 0LL);
    }
    Master_object = (char *)DataManager__GetMasterData_object_(
                              v25,
                              (const MethodInfo_2EC55C8 *)Method_DataManager_GetMasterData_EventMissionMaster___);
    if ( !Master_object )
      goto LABEL_67;
    v46 = DataMasterBase_object__object__int___GetEntity(
            (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
            v22->fields.missionId,
            (const MethodInfo_3163D90 *)Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__GetEntity__);
    if ( v46 )
    {
      v47 = v46;
      Master_object = (char *)DataManager__GetMasterData_object_(
                                v25,
                                (const MethodInfo_2EC55C8 *)Method_DataManager_GetMasterData_EventMaster___);
      if ( !Master_object )
        goto LABEL_67;
      Master_object = (char *)DataMasterBase_object__object__int___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                HIDWORD(v47[1].monitor),
                                (const MethodInfo_3163D90 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
      if ( !Master_object )
        goto LABEL_67;
      if ( EventEntity__IsEventPeriod((EventEntity_o *)Master_object, 0LL, 0LL) )
      {
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_4AB2BB0 )
        {
          sub_1BAB41C(&TerminalPramsManager_TypeInfo, v48);
          byte_4AB2BB0 = 1;
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
            sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(Master_object + 32), (int32_t)vals, v50, v51);
            v53 = v24->fields._TransitionInfo_k__BackingField;
            if ( v53 )
            {
              v53->fields.optionId = v28->fields.optionId;
              return;
            }
          }
        }
LABEL_67:
        sub_1BAB678(Master_object, v21);
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

  if ( (byte_4AB2B69 & 1) == 0 )
  {
    sub_1BAB41C(&Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__get_Values__, endAct);
    sub_1BAB41C(&Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo___ctor__, v5);
    sub_1BAB41C(&System_Collections_Generic_List_QuestAfterAction_VoiceInfo__TypeInfo, v6);
    byte_4AB2B69 = 1;
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
      sub_1BAB678(0LL, endAct);
    Values = System_Collections_Generic_Dictionary_int__object___get_Values(
               (System_Collections_Generic_Dictionary_int__object__o *)svtVoices,
               (const MethodInfo_31B6C44 *)Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__get_Values__);
    v9 = (System_Collections_Generic_List_object__o *)sub_1BAB668(System_Collections_Generic_List_QuestAfterAction_VoiceInfo__TypeInfo);
    System_Collections_Generic_List_object____ctor_55890352(
      v9,
      (System_Collections_Generic_IEnumerable_T__o *)Values,
      (const MethodInfo_354D1B0 *)Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo___ctor__);
    QuestAfterAction__LoadVoice_34127948(
      this,
      (System_Collections_Generic_List_QuestAfterAction_VoiceInfo__o *)v9,
      endAct,
      v10);
  }
}


void __fastcall QuestAfterAction__LoadVoice_34127948(
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
  System_String_o *VoiceAssetName_40244468; // x19
  Il2CppObject *v26; // x20
  System_Action_o *v27; // x22

  v5 = svtVInfos;
  while ( 1 )
  {
    if ( (byte_4AB2B6A & 1) == 0 )
    {
      sub_1BAB41C(&System_Action_TypeInfo, svtVInfos);
      sub_1BAB41C(&Method_System_Linq_Enumerable_Any_QuestAfterAction_VoiceInfo___, v7);
      sub_1BAB41C(&Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo__RemoveAt__, v8);
      sub_1BAB41C(&Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo__get_Item__, v9);
      sub_1BAB41C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v10);
      sub_1BAB41C(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__, v11);
      sub_1BAB41C(&Method_QuestAfterAction___c__DisplayClass74_0__LoadVoice_b__0__, v12);
      sub_1BAB41C(&QuestAfterAction___c__DisplayClass74_0_TypeInfo, v13);
      byte_4AB2B6A = 1;
    }
    v14 = sub_1BAB668(QuestAfterAction___c__DisplayClass74_0_TypeInfo);
    System_Object___ctor((Il2CppObject *)v14, 0LL);
    if ( !v14 )
      goto LABEL_18;
    *(_QWORD *)(v14 + 16) = v5;
    v19 = (CommonUI_o **)(v14 + 16);
    sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v14 + 16), (int32_t)v5, v17, v18);
    *(_QWORD *)(v14 + 24) = this;
    sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v14 + 24), (int32_t)this, v20, v21);
    *(_QWORD *)(v14 + 32) = endAct;
    v22 = (System_Action_o **)(v14 + 32);
    sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v14 + 32), (int32_t)endAct, v23, v24);
    if ( !System_Linq_Enumerable__Any_object_(
            *(System_Collections_Generic_IEnumerable_TSource__o **)(v14 + 16),
            (const MethodInfo_2ED117C *)Method_System_Linq_Enumerable_Any_QuestAfterAction_VoiceInfo___) )
    {
      Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( Instance )
      {
        CommonUI__SetLoadMode(Instance, 0, 0LL);
        ActionExtensions__Call(*v22, 0LL);
        return;
      }
LABEL_18:
      sub_1BAB678(Instance, v16);
    }
    Instance = *v19;
    if ( !*v19 )
      goto LABEL_18;
    Instance = (CommonUI_o *)System_Collections_Generic_List_object___get_Item(
                               (System_Collections_Generic_List_object__o *)Instance,
                               0,
                               (const MethodInfo_354D5EC *)Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo__get_Item__);
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
      (const MethodInfo_354F090 *)Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo__RemoveAt__);
    v5 = (System_Collections_Generic_List_QuestAfterAction_VoiceInfo__o *)*v19;
    endAct = *v22;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  CommonUI__SetLoadMode(Instance, 1, 0LL);
  Instance = *v19;
  if ( !*v19 )
    goto LABEL_18;
  Instance = (CommonUI_o *)System_Collections_Generic_List_object___get_Item(
                             (System_Collections_Generic_List_object__o *)Instance,
                             0,
                             (const MethodInfo_354D5EC *)Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo__get_Item__);
  if ( !Instance )
    goto LABEL_18;
  VoiceAssetName_40244468 = ServantVoiceEntity__getVoiceAssetName_40244468(Instance->fields.m_CachedPtr, 0LL);
  v26 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
  v27 = (System_Action_o *)sub_1BAB668(System_Action_TypeInfo);
  System_Action___ctor(v27, (Il2CppObject *)v14, Method_QuestAfterAction___c__DisplayClass74_0__LoadVoice_b__0__, 0LL);
  if ( !v26 )
    goto LABEL_18;
  SoundManager__LoadAudioAssetStorage((SoundManager_o *)v26, VoiceAssetName_40244468, v27, 1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall QuestAfterAction__MapObjName(
        QuestAfterAction_o *this,
        int32_t comType,
        int32_t id,
        const MethodInfo *method)
{
  __int64 v6; // x1

  if ( (byte_4AB2B78 & 1) == 0 )
  {
    sub_1BAB41C(&SrcSpotBasePrefab_TypeInfo, *(_QWORD *)&comType);
    sub_1BAB41C(&StringLiteral_1/*""*/, v6);
    byte_4AB2B78 = 1;
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

  if ( (byte_4AB2B72 & 1) == 0 )
  {
    sub_1BAB41C(&Method_System_Collections_Generic_List_int__Clear__, method);
    byte_4AB2B72 = 1;
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
    sub_1BAB678(screenCollider, v4);
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

  if ( (byte_4AB2B6E & 1) == 0 )
  {
    sub_1BAB41C(&System_Action_TypeInfo, endAct);
    sub_1BAB41C(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v5);
    sub_1BAB41C(&Method_QuestAfterAction___c__DisplayClass78_0__Play_b__0__, v6);
    sub_1BAB41C(&QuestAfterAction___c__DisplayClass78_0_TypeInfo, v7);
    byte_4AB2B6E = 1;
  }
  v8 = sub_1BAB668(QuestAfterAction___c__DisplayClass78_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8
    || (*(_QWORD *)(v8 + 16) = endAct,
        sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v8 + 16), (int32_t)endAct, v11, v12),
        (Instance = SingletonTemplate_object___get_Instance((const MethodInfo_378A64C *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__)) == 0LL) )
  {
    sub_1BAB678(Instance, v10);
  }
  MissionNotifyManager__StartPause((MissionNotifyManager_o *)Instance, 0LL);
  v13 = (System_Action_o *)sub_1BAB668(System_Action_TypeInfo);
  System_Action___ctor(v13, (Il2CppObject *)v8, Method_QuestAfterAction___c__DisplayClass78_0__Play_b__0__, 0LL);
  this->fields.endAct = v13;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.endAct, (int32_t)v13, v14, v15);
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

  if ( (byte_4AB2B6F & 1) == 0 )
  {
    sub_1BAB41C(&System_Action_TypeInfo, actionVals);
    sub_1BAB41C(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v7);
    sub_1BAB41C(&Method_QuestAfterAction___c__DisplayClass79_0__PlaySpecifiedAction_b__0__, v8);
    sub_1BAB41C(&Method_QuestAfterAction___c__DisplayClass79_0__PlaySpecifiedAction_b__1__, v9);
    sub_1BAB41C(&QuestAfterAction___c__DisplayClass79_0_TypeInfo, v10);
    byte_4AB2B6F = 1;
  }
  v11 = sub_1BAB668(QuestAfterAction___c__DisplayClass79_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0LL);
  if ( !v11 )
    goto LABEL_8;
  *(_QWORD *)(v11 + 16) = this;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v11 + 16), (int32_t)this, v14, v15);
  *(_QWORD *)(v11 + 24) = finishCallback;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v11 + 24), (int32_t)finishCallback, v16, v17);
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)actionVals, 0LL) )
  {
    ActionExtensions__Call(*(System_Action_o **)(v11 + 24), 0LL);
    return;
  }
  CommandBuf = QuestAfterAction__GenerateCommandBuf(actionVals, v18);
  this->fields.temporaryCommandBuf = CommandBuf;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.temporaryCommandBuf, (int32_t)CommandBuf, v20, v21);
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_378A64C *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
LABEL_8:
    sub_1BAB678(Instance, v13);
  MissionNotifyManager__StartPause((MissionNotifyManager_o *)Instance, 0LL);
  v22 = (System_Action_o *)sub_1BAB668(System_Action_TypeInfo);
  System_Action___ctor(
    v22,
    (Il2CppObject *)v11,
    Method_QuestAfterAction___c__DisplayClass79_0__PlaySpecifiedAction_b__0__,
    0LL);
  this->fields.endAct = v22;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.endAct, (int32_t)v22, v23, v24);
  v25 = (System_Action_o *)sub_1BAB668(System_Action_TypeInfo);
  System_Action___ctor(
    v25,
    (Il2CppObject *)v11,
    Method_QuestAfterAction___c__DisplayClass79_0__PlaySpecifiedAction_b__1__,
    0LL);
  v27 = QuestAfterAction__WaitWhileMainStateFinished(this, v25, v26);
  UnityEngine_MonoBehaviour__StartCoroutine_69785892((UnityEngine_MonoBehaviour_o *)this, v27, 0LL);
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

  if ( (byte_4AB2B71 & 1) == 0 )
  {
    sub_1BAB41C(&System_Action_TypeInfo, commandArray);
    sub_1BAB41C(&Method_QuestAfterAction__PlaySpecifiedActionInstantly_b__82_0__, v5);
    byte_4AB2B71 = 1;
  }
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)commandArray, 0LL) )
  {
    this->fields.temporaryCommandBuf = commandArray;
    sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.temporaryCommandBuf, (int32_t)commandArray, v6, v7);
    v8 = (System_Action_o *)sub_1BAB668(System_Action_TypeInfo);
    System_Action___ctor(v8, (Il2CppObject *)this, Method_QuestAfterAction__PlaySpecifiedActionInstantly_b__82_0__, 0LL);
    this->fields.endAct = v8;
    sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.endAct, (int32_t)v8, v9, v10);
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

  if ( (byte_4AB2B77 & 1) == 0 )
  {
    sub_1BAB41C(&TerminalPramsManager_TypeInfo, *(_QWORD *)&cType);
    sub_1BAB41C(&TerminalSceneComponent_TypeInfo, v7);
    byte_4AB2B77 = 1;
  }
  this->fields.ActionMapTargetType = cType;
  this->fields.ActionMapTargetId = cTarget;
  QuestAfterAction__SetState(this, 0, *(const MethodInfo **)&cTarget);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4AB0F7F )
  {
    sub_1BAB41C(&TerminalPramsManager_TypeInfo, v8);
    byte_4AB0F7F = 1;
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
  if ( !byte_4AB0C49 )
  {
    sub_1BAB41C(&TerminalSceneComponent_TypeInfo, v8);
    byte_4AB0C49 = 1;
  }
  v10 = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v10 = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
  }
  klass = v10->fields.subRootGimmickP->klass;
  if ( !klass || (v10 = *(ScrTerminalMap_o **)&klass->_2.thread_static_fields_offset) == 0LL )
    sub_1BAB678(v10, v8);
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
  if ( (byte_4AB2B67 & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataManager_GetMasterData_QuestMaster___, com);
    sub_1BAB41C(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v5);
    this = (QuestAfterAction_o *)sub_1BAB41C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_4AB2B67 = 1;
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
                sub_1BAB680(this, com);
              TitleInfoCtrlCallback_k__BackingField = (System_String_o *)this->fields.invalidMapGimmickIdList;
              goto LABEL_29;
            }
          }
LABEL_42:
          sub_1BAB678(this, com);
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
          this = (QuestAfterAction_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( this )
          {
            MasterData_object = DataManager__GetMasterData_object_(
                                  (DataManager_o *)this,
                                  (const MethodInfo_2EC55C8 *)Method_DataManager_GetMasterData_QuestMaster___);
            param = com->fields.param;
            v16 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
            this = (QuestAfterAction_o *)System_Int32__Parse(param, 0LL);
            if ( v16 )
            {
              this = (QuestAfterAction_o *)DataMasterBase_object__object__int___GetEntity(
                                             v16,
                                             (int32_t)this,
                                             (const MethodInfo_3163D90 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
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

  if ( (byte_4AB2B75 & 1) == 0 )
  {
    sub_1BAB41C(&Method_CStateManager_QuestAfterAction__setState__, *(_QWORD *)&state);
    byte_4AB2B75 = 1;
  }
  fsm = (CStateManager_T__o *)this->fields.fsm;
  if ( !fsm )
    sub_1BAB678(0LL, *(_QWORD *)&state);
  CStateManager_object___setState(
    fsm,
    state,
    (const MethodInfo_30F0C48 *)Method_CStateManager_QuestAfterAction__setState__);
}


void __fastcall QuestAfterAction__SkipToNextAction(QuestAfterAction_o *this, const MethodInfo *method)
{
  this->fields.isSkippedNext = 1;
}


void __fastcall QuestAfterAction__Update(QuestAfterAction_o *this, const MethodInfo *method)
{
  CStateManager_T__o *fsm; // x0

  if ( (byte_4AB2B6D & 1) == 0 )
  {
    sub_1BAB41C(&Method_CStateManager_QuestAfterAction__update__, method);
    byte_4AB2B6D = 1;
  }
  fsm = (CStateManager_T__o *)this->fields.fsm;
  if ( fsm )
    CStateManager_object___update(fsm, (const MethodInfo_30F0C24 *)Method_CStateManager_QuestAfterAction__update__);
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

  if ( (byte_4AB2B73 & 1) == 0 )
  {
    sub_1BAB41C(&QuestAfterAction__WaitWhileMainStateFinished_d__85_TypeInfo, action);
    byte_4AB2B73 = 1;
  }
  v5 = sub_1BAB668(QuestAfterAction__WaitWhileMainStateFinished_d__85_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v5 + 32), (int32_t)this, v6, v7);
  *(_QWORD *)(v5 + 40) = action;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v5 + 40), (int32_t)action, v8, v9);
  return (System_Collections_IEnumerator_o *)v5;
}


void __fastcall QuestAfterAction___PlaySpecifiedActionInstantly_b__82_0(
        QuestAfterAction_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  int32_t v5; // w2
  int32_t v6; // w3
  const MethodInfo *v7; // x2

  this->fields.endAct = 0LL;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.endAct, 0, v2, v3);
  this->fields.temporaryCommandBuf = 0LL;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.temporaryCommandBuf, 0, v5, v6);
  QuestAfterAction__SetState(this, 0, v7);
}


System_Int32_array *__fastcall QuestAfterAction__getMapGmkOffIdList(QuestAfterAction_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *invalidMapGimmickIdList; // x0

  if ( (byte_4AB2B66 & 1) == 0 )
  {
    sub_1BAB41C(&Method_System_Collections_Generic_List_int__ToArray__, method);
    byte_4AB2B66 = 1;
  }
  invalidMapGimmickIdList = this->fields.invalidMapGimmickIdList;
  if ( !invalidMapGimmickIdList )
    sub_1BAB678(0LL, method);
  return System_Collections_Generic_List_int___ToArray(
           invalidMapGimmickIdList,
           (const MethodInfo_3532350 *)Method_System_Collections_Generic_List_int__ToArray__);
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
  System_String_o *VoiceAssetName_40244468; // x20
  System_Collections_Generic_List_Enumerator_object__o v17; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4AB2B6B & 1) == 0 )
  {
    sub_1BAB41C(&Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__Clear__, method);
    sub_1BAB41C(&Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__get_Values__, v3);
    sub_1BAB41C(&Method_System_Collections_Generic_List_Enumerator_QuestAfterAction_VoiceInfo__Dispose__, v4);
    sub_1BAB41C(&Method_System_Collections_Generic_List_Enumerator_QuestAfterAction_VoiceInfo__MoveNext__, v5);
    sub_1BAB41C(&Method_System_Collections_Generic_List_Enumerator_QuestAfterAction_VoiceInfo__get_Current__, v6);
    sub_1BAB41C(&Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo__GetEnumerator__, v7);
    sub_1BAB41C(&Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo___ctor__, v8);
    sub_1BAB41C(&System_Collections_Generic_List_QuestAfterAction_VoiceInfo__TypeInfo, v9);
    sub_1BAB41C(&SoundManager_TypeInfo, v10);
    byte_4AB2B6B = 1;
  }
  memset(&v17, 0, sizeof(v17));
  svtVoices = this->fields.svtVoices;
  if ( !svtVoices )
    goto LABEL_14;
  Values = System_Collections_Generic_Dictionary_int__object___get_Values(
             (System_Collections_Generic_Dictionary_int__object__o *)svtVoices,
             (const MethodInfo_31B6C44 *)Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__get_Values__);
  v13 = (System_Collections_Generic_List_object__o *)sub_1BAB668(System_Collections_Generic_List_QuestAfterAction_VoiceInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor_55890352(
    v13,
    (System_Collections_Generic_IEnumerable_T__o *)Values,
    (const MethodInfo_354D1B0 *)Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo___ctor__);
  if ( !v13 )
    goto LABEL_14;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v17,
    v13,
    (const MethodInfo_354E3B4 *)Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo__GetEnumerator__);
  while ( 1 )
  {
    v14 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v17,
            (const MethodInfo_32C4C78 *)Method_System_Collections_Generic_List_Enumerator_QuestAfterAction_VoiceInfo__MoveNext__);
    if ( !v14 )
      break;
    if ( !v17.fields._current )
      sub_1BAB678(v14, v15);
    VoiceAssetName_40244468 = ServantVoiceEntity__getVoiceAssetName_40244468((int32_t)v17.fields._current[1].klass, 0LL);
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    SoundManager__releaseAudioAssetStorage(VoiceAssetName_40244468, 0LL);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v17,
    (const MethodInfo_32C4C74 *)Method_System_Collections_Generic_List_Enumerator_QuestAfterAction_VoiceInfo__Dispose__);
  svtVoices = this->fields.svtVoices;
  if ( !svtVoices )
LABEL_14:
    sub_1BAB678(svtVoices, method);
  System_Collections_Generic_Dictionary_int__object___Clear(
    (System_Collections_Generic_Dictionary_int__object__o *)svtVoices,
    (const MethodInfo_31B6FBC *)Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__Clear__);
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

  if ( (byte_4AB2B7D & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataManager_GetMasterData_VoicePlayCondMaster___, svtId);
    sub_1BAB41C(&Method_System_Collections_Generic_List_string__RemoveAt__, v5);
    sub_1BAB41C(&Method_System_Collections_Generic_List_string___ctor___76412816, v6);
    sub_1BAB41C(&Method_System_Collections_Generic_List_string__get_Count__, v7);
    sub_1BAB41C(&Method_System_Collections_Generic_List_string__get_Item__, v8);
    sub_1BAB41C(&System_Collections_Generic_List_string__TypeInfo, v9);
    sub_1BAB41C(&System_Random_TypeInfo, v10);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_1BAB41C(&TerminalSceneComponent_TypeInfo, v12);
    sub_1BAB41C(&StringLiteral_16153/*"_"*/, v13);
    byte_4AB2B7D = 1;
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
    param = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( param )
    {
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)param,
                            (const MethodInfo_2EC55C8 *)Method_DataManager_GetMasterData_VoicePlayCondMaster___);
      v17 = (System_Collections_Generic_List_object__o *)sub_1BAB668(System_Collections_Generic_List_string__TypeInfo);
      System_Collections_Generic_List_object____ctor_55890352(
        v17,
        v15,
        (const MethodInfo_354D1B0 *)Method_System_Collections_Generic_List_string___ctor___76412816);
      result = 0;
      v18 = (System_Random_o *)sub_1BAB668(System_Random_TypeInfo);
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
                      (const MethodInfo_354D5EC *)Method_System_Collections_Generic_List_string__get_Item__);
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
              param = System_String__Concat_62059388(
                        *((System_String_o **)v22 + 5),
                        (System_String_o *)StringLiteral_16153/*"_"*/,
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
                       (const MethodInfo_354D5EC *)Method_System_Collections_Generic_List_string__get_Item__);
              if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
              if ( !byte_4AB0C49 )
              {
                sub_1BAB41C(&TerminalSceneComponent_TypeInfo, svtId);
                byte_4AB0C49 = 1;
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
              (const MethodInfo_354F090 *)Method_System_Collections_Generic_List_string__RemoveAt__);
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
    sub_1BAB678(param, svtId);
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
    sub_1BAB680(v27, v28);
  return System_String__Concat_62059388(
           *((System_String_o **)v30 + 5),
           (System_String_o *)StringLiteral_16153/*"_"*/,
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

  if ( (byte_4AB2B7F & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataManager_GetMasterData_BgmMaster___, method);
    sub_1BAB41C(&Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__, v3);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_4AB2B7F = 1;
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
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_12;
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_2EC55C8 *)Method_DataManager_GetMasterData_BgmMaster___);
      if ( !Instance )
        goto LABEL_12;
      Instance = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                   (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                   &entity,
                                   result,
                                   (const MethodInfo_3163DE4 *)Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( entity )
          return (System_String_o *)entity[1].monitor;
LABEL_12:
        sub_1BAB678(Instance, v8);
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
    sub_1BAB678(v3, str);
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
  if ( (byte_4AB2B7E & 1) == 0 )
  {
    this = (QuestAfterAction_Command_o *)sub_1BAB41C(&StringLiteral_16153/*"_"*/, str);
    byte_4AB2B7E = 1;
  }
  if ( v4->fields.id == 800 )
  {
    if ( !v3 || (this = (QuestAfterAction_Command_o *)System_String__Split(v3, 0x5Fu, 0, 0LL)) == 0LL )
      sub_1BAB678(this, str);
    param = (int)this->fields.param;
    if ( param == 2 )
      return v3;
    if ( param == 3 )
      return System_String__Concat_62059388(
               (System_String_o *)this[1].monitor,
               (System_String_o *)StringLiteral_16153/*"_"*/,
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
    sub_1BAB678(this, method);
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
  ServantStatusBattleListViewItem_o *p_monitor; // x0
  System_Action_o *monitor; // t1

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
    sub_1BAB678(screenCollider, v5);
  }
  monitor = (System_Action_o *)screenCollider[7].monitor;
  p_monitor = (ServantStatusBattleListViewItem_o *)&screenCollider[7].monitor;
  p_monitor->klass = 0LL;
  sub_1BAB3C0(p_monitor, 0, v7, v8);
  ActionExtensions__Call(monitor, 0LL);
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
    sub_1BAB678(this, 0LL);
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
    sub_1BAB678(0LL, v7);
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
    sub_1BAB678(0LL, v7);
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
  if ( (byte_4AB2B84 & 1) == 0 )
  {
    sub_1BAB41C(&Method_System_Collections_Generic_List_int__Remove__, method);
    sub_1BAB41C(&Method_System_Collections_Generic_List_int__ToArray__, v3);
    sub_1BAB41C(&UnityEngine_Object_TypeInfo, v4);
    sub_1BAB41C(&Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___, v5);
    this = (QuestAfterAction_StateMain_o *)sub_1BAB41C(&Method_SingletonTemplate_QuestTree__get_Instance__, v6);
    byte_4AB2B84 = 1;
  }
  that = v2->fields.that;
  if ( !that )
    goto LABEL_22;
  this = (QuestAfterAction_StateMain_o *)that->fields.invalidMapGimmickIdList;
  if ( !this )
    goto LABEL_22;
  this = (QuestAfterAction_StateMain_o *)System_Collections_Generic_List_int___ToArray(
                                           (System_Collections_Generic_List_int__o *)this,
                                           (const MethodInfo_3532350 *)Method_System_Collections_Generic_List_int__ToArray__);
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
        sub_1BAB680(this, method);
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
        (const MethodInfo_3531D94 *)Method_System_Collections_Generic_List_int__Remove__);
      this = (QuestAfterAction_StateMain_o *)v2->fields.that;
      if ( !this )
        break;
      MapComponent_object = QuestAfterAction__GetMapComponent_object_(
                              (QuestAfterAction_o *)this,
                              2,
                              v12,
                              v2,
                              (const MethodInfo_2F548A4 *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (QuestAfterAction_StateMain_o *)UnityEngine_Object__op_Inequality(
                                               (UnityEngine_Object_o *)MapComponent_object,
                                               0LL,
                                               0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        this = (QuestAfterAction_StateMain_o *)SingletonTemplate_object___get_Instance((const MethodInfo_378A64C *)Method_SingletonTemplate_QuestTree__get_Instance__);
        if ( !MapComponent_object || !this )
          break;
        this = (QuestAfterAction_StateMain_o *)QuestTree__CheckMapGimmickCond_34417836(
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
    sub_1BAB678(this, method);
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
  __int64 v91; // x22
  __int64 updated; // x0
  QuestAfterAction_o *v93; // x1
  int32_t v94; // w2
  int32_t v95; // w3
  __int64 *v96; // x20
  int32_t v97; // w2
  int32_t v98; // w3
  QuestAfterAction_StateMain_c *klass; // x8
  __int64 v100; // x21
  QuestAfterAction_Command_o *v101; // x21
  BlankEarthQuestAfterAction_o *v102; // x23
  System_Action_o *v103; // x24
  const MethodInfo *v104; // x5
  int id; // w8
  float v106; // s0
  __int64 v107; // x1
  float DEFAULT_FADE_TIME; // s8
  AvalonSceneManager_c *v109; // x0
  TerminalSceneComponent_c *v110; // x0
  TerminalSceneComponent_o *mInstance; // x19
  System_Action_o *v112; // x20
  TerminalSceneComponent_o *v113; // x0
  float v114; // s0
  System_Action_o *v115; // x1
  System_String_o *v116; // x19
  System_String_o *v117; // x20
  System_String_o *v118; // x20
  Il2CppObject *Instance; // x21
  System_Action_o *v120; // x23
  __int64 v121; // x8
  __int64 v122; // x23
  float v123; // s0
  System_String_o *param; // x21
  _QWORD *v125; // x0
  System_Reflection_MethodBase_o *v126; // x0
  __int64 v127; // x20
  int32_t v128; // w2
  int32_t v129; // w3
  __int64 v130; // x23
  __int64 v131; // x8
  __int64 v132; // x22
  int32_t v133; // w21
  bool v134; // w24
  bool v135; // w26
  __int64 v136; // x20
  int32_t v137; // w2
  int32_t v138; // w3
  __int64 v139; // x8
  QuestAfterAction_o *v140; // x22
  Il2CppObject *v141; // x0
  int32_t v142; // w2
  int32_t v143; // w3
  UnityEngine_Object_o *v144; // x19
  SrcSpotBasePrefab_o *v145; // x19
  System_Action_o *v146; // x21
  int32_t v147; // w1
  __int64 v148; // x23
  float v149; // s0
  float v150; // s9
  float v151; // s0
  float v152; // s10
  float v153; // s0
  float v154; // s11
  float v155; // s0
  float v156; // s8
  int32_t v157; // w19
  __int64 v158; // x8
  float v159; // s8
  const MethodInfo_366E85C *v160; // x2
  float v161; // s0
  float v162; // s1
  float v163; // s2
  float v164; // s10
  float v165; // s9
  float v166; // s11
  MapCamera_o *v167; // x20
  System_Action_o *v168; // x21
  MapCamera_o *v169; // x0
  float v170; // s0
  float v171; // s1
  float v172; // s2
  float v173; // s3
  int32_t v174; // w1
  __int64 v175; // x20
  int32_t v176; // w2
  int32_t v177; // w3
  __int64 v178; // x8
  QuestAfterAction_o *v179; // x22
  Il2CppObject *v180; // x0
  int32_t v181; // w2
  int32_t v182; // w3
  UnityEngine_Object_o *v183; // x19
  ModelLineComponent_o *v184; // x19
  System_Action_o *v185; // x21
  const MethodInfo *v186; // x3
  int32_t v187; // w1
  __int64 v188; // x21
  int32_t v189; // w20
  int32_t v190; // w22
  TerminalSceneComponent_c *v191; // x0
  TerminalSceneComponent_o *v192; // x22
  __int64 v193; // x8
  PlayMakerFSM_o *v194; // x20
  System_String_o *ActiveStateName; // x0
  __int64 v196; // x8
  __int64 v197; // x8
  QuestBoardListViewManager_o *v198; // x21
  System_Action_o *v199; // x22
  __int64 v200; // x22
  int v201; // w23
  float v202; // s8
  int32_t v203; // w21
  __int64 v204; // x1
  TerminalPramsManager_c *v205; // x0
  __int64 v206; // x8
  __int64 v207; // x8
  __int64 v208; // x8
  __int64 v209; // x8
  System_String_o *v210; // x20
  System_String_o *v211; // x21
  SeManager_c *v212; // x0
  float DEFAULT_VOLUME; // s8
  int32_t v214; // w23
  Il2CppObject *v215; // x21
  const MethodInfo *v216; // x2
  __int64 v217; // x24
  int v218; // w23
  __int64 v219; // x8
  ScrTerminalListTop_o *v220; // x20
  TerminalPramsManager_c *v221; // x0
  int32_t QuestId_k__BackingField; // w21
  int32_t PhaseCnt_k__BackingField; // w23
  System_Action_o *v224; // x19
  __int64 v225; // x23
  int32_t v226; // w21
  int32_t v227; // w22
  int32_t v228; // w23
  System_String_o *v229; // x23
  int32_t v230; // w2
  int32_t v231; // w3
  System_String_array *v232; // x20
  int32_t v233; // w1
  int v234; // w8
  System_String_o *v235; // x19
  System_String_o *v236; // x20
  System_String_o *v237; // x19
  System_String_o *v238; // x20
  System_String_o *v239; // x20
  Il2CppObject *v240; // x21
  System_Action_o *v241; // x23
  char *v242; // x10
  System_String_o *v243; // x23
  int32_t v244; // w2
  int32_t v245; // w3
  System_String_array *v246; // x20
  int32_t v247; // w1
  int v248; // w8
  System_String_o *v249; // x19
  System_String_o *v250; // x20
  System_String_o *v251; // x20
  Il2CppObject *v252; // x21
  System_Action_o *v253; // x23
  __int64 v254; // x8
  const MethodInfo *v255; // x2
  __int64 v256; // x8
  QuestAfterAction_TitleInfoControlCallback_o *v257; // x21
  Il2CppObject *MapComponent_object; // x22
  Il2CppObject *v259; // x20
  __int64 v260; // x8
  ScrTerminalMap_o *v261; // x23
  __int64 v262; // x8
  ScrTerminalMap_o *v263; // x20
  UnityEngine_GameObject_o *gameObject; // x22
  System_Action_o *v265; // x23
  TerminalPramsManager_c *v266; // x0
  __int64 v267; // x8
  __int64 v268; // x1
  const MethodInfo *v269; // x2
  TerminalPramsManager_c *v270; // x0
  __int64 v271; // x8
  float v272; // s0
  __int64 v273; // x8
  float v274; // s0
  __int64 v275; // x23
  float v276; // s0
  float v277; // s8
  int32_t v278; // w22
  __int64 v279; // x8
  ScrTerminalMap_o *v280; // x24
  float v281; // s0
  float v282; // s9
  float v283; // s0
  const MethodInfo_366E85C *v284; // x2
  int v285; // w8
  float v286; // s10
  float v287; // s9
  float v288; // s11
  MapCamera_o *v289; // x20
  __int64 v290; // x21
  int32_t v291; // w0
  int32_t v292; // w20
  float v293; // s8
  int32_t v294; // w19
  __int64 v295; // x20
  int32_t v296; // w2
  int32_t v297; // w3
  __int64 v298; // x8
  QuestAfterAction_o *v299; // x22
  Il2CppObject *v300; // x0
  int32_t v301; // w2
  int32_t v302; // w3
  UnityEngine_Object_o *v303; // x19
  __int64 v304; // x23
  int32_t v305; // w2
  int32_t v306; // w3
  __int64 v307; // x20
  QuestAfterAction_o *v308; // x22
  Il2CppObject *v309; // x0
  __int64 *v310; // x19
  int32_t v311; // w2
  int32_t v312; // w3
  UnityEngine_Object_o *v313; // x21
  SrcSpotBasePrefab_o *v314; // x21
  System_Action_o *v315; // x22
  int32_t v316; // w2
  int32_t v317; // w3
  __int64 v318; // x1
  ServantStatusBattleListViewItem_o *v319; // x0
  __int64 v320; // x22
  QuestAfterAction_o *v321; // x21
  Il2CppObject *v322; // x21
  System_Action_o *v323; // x22
  QuestAfterAction_o *v324; // x22
  Il2CppObject *v325; // x21
  _DWORD *monitor; // x8
  SrcSpotBasePrefab_o *v327; // x0
  int32_t v328; // w1
  QuestAfterAction_o *v329; // x22
  Il2CppObject *v330; // x21
  _DWORD *v331; // x8
  QuestAfterAction_o *v332; // x22
  _DWORD *v333; // x8
  __int64 v334; // x21
  QuestAfterAction_o *v335; // x22
  Il2CppObject *v336; // x22
  __int64 v337; // x1
  int32_t v338; // w21
  TerminalPramsManager_c *v339; // x0
  QuestAfterAction_o *v340; // x20
  Il2CppObject *v341; // x20
  __int64 v342; // x1
  TerminalPramsManager_c *v343; // x0
  SceneJumpInfo_o *v344; // x21
  MapCamera_o *v345; // x20
  float v346; // s0
  System_Action_o *v347; // x21
  MapCamera_o *v348; // x0
  float v349; // s0
  int32_t v350; // w4
  int v351; // w23
  __int64 v352; // x21
  float v353; // s0
  float v354; // s8
  float v355; // s0
  MapCamera_o *v356; // x19
  float v357; // s0
  float v358; // s9
  int32_t v359; // w20
  __int64 v360; // x20
  int32_t v361; // w2
  int32_t v362; // w3
  __int64 v363; // x8
  QuestAfterAction_o *v364; // x22
  Il2CppObject *v365; // x0
  int32_t v366; // w2
  int32_t v367; // w3
  UnityEngine_Object_o *v368; // x19
  __int64 v369; // x20
  int32_t v370; // w2
  int32_t v371; // w3
  __int64 v372; // x8
  QuestAfterAction_o *v373; // x22
  Il2CppObject *v374; // x0
  int32_t v375; // w2
  int32_t v376; // w3
  UnityEngine_Object_o *v377; // x19
  _BOOL4 IsMapModel; // w23
  QuestAfterAction_o *v379; // x22
  UnityEngine_Object_o *v380; // x21
  const MethodInfo *v381; // x2
  _DWORD *v382; // x8
  _BOOL4 v383; // w23
  QuestAfterAction_o *v384; // x22
  UnityEngine_Object_o *v385; // x21
  const MethodInfo *v386; // x2
  const MethodInfo *v387; // x2
  _DWORD *v388; // x8
  _BOOL4 v389; // w23
  QuestAfterAction_o *v390; // x22
  UnityEngine_Object_o *v391; // x21
  const MethodInfo *v392; // x2
  const MethodInfo *v393; // x2
  System_Action_o *v394; // x20
  const MethodInfo *v395; // x2
  System_String_o *v396; // x20
  Il2CppObject *v397; // x21
  System_Action_o *v398; // x23
  float v399; // s0
  float v400; // s0
  float v401; // s0
  QuestAfterAction_o *v402; // x24
  const MethodInfo *v403; // x4
  UnityEngine_Object_o *v404; // x24
  float v405; // s10
  float v406; // s8
  float v407; // s9
  __int64 v408; // x8
  const MethodInfo_366E85C *v409; // x2
  System_String_o *v410; // x24
  QuestAfterAction_o *v411; // x24
  const MethodInfo *v412; // x4
  UnityEngine_Object_o *v413; // x24
  float v414; // s8
  float v415; // s9
  float v416; // s10
  __int64 v417; // x8
  float v418; // s0
  float v419; // s1
  float v420; // s2
  QuestAfterAction_o *v421; // x24
  const MethodInfo *v422; // x4
  UnityEngine_Object_o *v423; // x24
  __int64 v424; // x8
  int v425; // w8
  __int64 v426; // x8
  MapCamera_o *v427; // x20
  MapCamera_o *v428; // x0
  float v429; // s0
  float v430; // s1
  float v431; // s2
  __int64 v432; // x23
  int32_t v433; // w2
  int32_t v434; // w3
  __int64 v435; // x20
  __int64 v436; // x8
  __int64 v437; // x21
  int32_t v438; // w22
  bool v439; // w26
  bool v440; // w27
  __int64 v441; // x8
  __int64 v442; // x22
  int32_t v443; // w21
  bool v444; // w22
  __int64 v445; // x8
  __int64 v446; // x22
  int32_t v447; // w21
  bool v448; // w22
  __int64 v449; // x21
  float v450; // s0
  QuestAfterAction_o *v451; // x20
  float v452; // s8
  Il2CppObject *v453; // x20
  _BOOL4 v454; // w23
  __int64 v455; // x20
  int32_t v456; // w2
  int32_t v457; // w3
  __int64 v458; // x8
  QuestAfterAction_o *v459; // x22
  Il2CppObject *v460; // x0
  int32_t v461; // w2
  int32_t v462; // w3
  UnityEngine_Object_o *v463; // x19
  MapGimmickComponent_o *v464; // x19
  System_Action_o *v465; // x21
  TerminalSceneComponent_o *v466; // x19
  __int64 v467; // x20
  int32_t v468; // w2
  int32_t v469; // w3
  System_String_array *v470; // x0
  __int64 *v471; // x21
  int32_t v472; // w2
  int32_t v473; // w3
  __int64 v474; // x8
  __int64 v475; // x9
  QuestAfterAction_o *v476; // x21
  Il2CppObject *v477; // x0
  int32_t v478; // w2
  int32_t v479; // w3
  UnityEngine_Object_o *v480; // x19
  MapGimmickComponent_o *v481; // x19
  System_Action_o *v482; // x0
  __int64 *v483; // x8
  System_Action_o *v484; // x21
  __int64 v485; // x21
  QuestAfterAction_o *v486; // x20
  Il2CppObject *v487; // x20
  UIWidget_o *v488; // x20
  int32_t v489; // w2
  int32_t v490; // w3
  __int64 v491; // x8
  QuestAfterAction_o *v492; // x22
  Il2CppObject *v493; // x0
  __int64 v494; // x19
  int32_t v495; // w2
  int32_t v496; // w3
  UnityEngine_Object_o *v497; // x21
  bool v498; // w0
  bool v499; // w22
  int32_t v500; // w1
  __int64 v501; // x8
  __int64 v502; // x22
  int32_t v503; // w21
  bool v504; // w22
  __int64 v505; // x22
  QuestAfterAction_o *v506; // x21
  Il2CppObject *v507; // x21
  QuestAfterAction_o *v508; // x23
  const MethodInfo *v509; // x4
  int32_t v510; // w2
  QuestAfterAction_o *v511; // x0
  int32_t v512; // w1
  QuestAfterAction_o *v513; // x21
  QuestAfterAction_o *v514; // x23
  const MethodInfo *v515; // x4
  UnityEngine_Object_o *MapGameObject; // x23
  float v517; // s0
  float v518; // s1
  float v519; // s2
  float x; // s9
  float y; // s8
  float z; // s10
  QuestAfterAction_o *v523; // x21
  QuestAfterAction_o *v524; // x23
  UnityEngine_Object_o *v525; // x23
  __int64 v526; // x8
  float v527; // s0
  float v528; // s11
  int32_t v529; // w23
  clsQuestCheck_o *v530; // x19
  QuestAfterAction_StateMain___c_c *v531; // x8
  System_Action_o *_9__16_25; // x20
  Il2CppObject *v533; // x21
  struct QuestAfterAction_StateMain___c_StaticFields *v534; // x0
  int32_t v535; // w2
  int32_t v536; // w3
  __int64 v537; // x20
  int32_t v538; // w2
  int32_t v539; // w3
  __int64 v540; // x8
  QuestAfterAction_o *v541; // x22
  Il2CppObject *v542; // x0
  int32_t v543; // w2
  int32_t v544; // w3
  UnityEngine_Object_o *v545; // x19
  srcLineSprite_o *v546; // x19
  System_Action_o *v547; // x21
  int32_t v548; // w1
  __int64 v549; // x20
  int32_t v550; // w2
  int32_t v551; // w3
  __int64 v552; // x8
  QuestAfterAction_o *v553; // x22
  Il2CppObject *v554; // x0
  int32_t v555; // w2
  int32_t v556; // w3
  UnityEngine_Object_o *v557; // x19
  __int64 v558; // x20
  int32_t v559; // w2
  int32_t v560; // w3
  __int64 v561; // x8
  QuestAfterAction_o *v562; // x22
  Il2CppObject *v563; // x0
  int32_t v564; // w2
  int32_t v565; // w3
  UnityEngine_Object_o *v566; // x19
  UnityEngine_Object_o *v567; // x21
  UnityEngine_Object_o *v568; // x21
  int v569; // w9
  UnityEngine_Object_o *v570; // x21
  Il2CppObject *v571; // x23
  struct QuestAfterAction_StateMain___c_StaticFields *static_fields; // x0
  int32_t v573; // w2
  int32_t v574; // w3
  TerminalSceneComponent_c *v575; // x0
  System_Action_o *v576; // x21
  float v577; // s10
  float v578; // s9
  float v579; // s8
  System_String_o *v580; // x24
  Il2CppObject *v581; // x0
  int32_t v582; // w2
  int32_t v583; // w3
  UnityEngine_Object_o *v584; // x22
  MapGimmickComponent_o *v585; // x21
  System_Action_o *v586; // x0
  System_Action_o *v587; // x22
  MapGimmickComponent_o *v588; // x0
  System_Action_o *v589; // x2
  Il2CppObject *v590; // x0
  MapGimmickComponent_o **v591; // x22
  int32_t v592; // w2
  int32_t v593; // w3
  UnityEngine_Object_o *v594; // x24
  MapGimmickComponent_o *v595; // x24
  System_Action_o *v596; // x0
  Il2CppObject *v597; // x21
  Il2CppObject *v598; // x21
  Il2CppClass *v599; // x8
  Il2CppObject *v600; // x21
  Il2CppClass *v601; // x8
  QuestAfterAction_StateMain_c *v602; // x8
  int v603; // w0
  __int64 v604; // x8
  ScrTerminalMap_o *v605; // x21
  System_Action_o *v606; // x23
  MapCamera_o *v607; // x20
  MapCamera_o *v608; // x20
  int v609; // w8
  MapCamera_o *v610; // x20
  float v611; // s0
  float v612; // s1
  float v613; // s2
  float v614; // s0
  float v615; // s1
  float v616; // s2
  __int64 v617; // x8
  float v618; // s3
  System_Action_o *v619; // x20
  MapGimmickComponent_o *v620; // x0
  float v621; // s0
  float v622; // s1
  float v623; // s2
  float v624; // s3
  int32_t v625; // w1
  System_Action_o *v626; // x2
  __int64 v627; // x8
  __int64 v628; // x8
  float v629; // s0
  float v630; // s0
  MapCamera_o *v631; // x0
  float v632; // s0
  __int64 v633; // x8
  ScrTerminalMap_o *v634; // x22
  float v635; // s0
  float v636; // s9
  float v637; // s0
  float v638; // s0
  float v639; // s1
  float v640; // s2
  float v641; // s10
  float v642; // s9
  float v643; // s11
  float v644; // s8
  int32_t v645; // w21
  System_Action_o *v646; // x22
  float v647; // s0
  float v648; // s0
  int32_t onClickOkSeKind; // [xsp+10h] [xbp-E0h]
  float sec; // [xsp+3Ch] [xbp-B4h]
  System_Nullable_float__o size; // [xsp+40h] [xbp-B0h] BYREF
  System_Nullable_Vector3__o v652; // [xsp+48h] [xbp-A8h] BYREF
  Il2CppObject *value; // [xsp+58h] [xbp-98h] BYREF
  Il2CppObject *entity; // [xsp+60h] [xbp-90h] BYREF
  UnityEngine_Color_o color; // [xsp+68h] [xbp-88h] BYREF
  bool isQuickUpdate; // [xsp+7Ch] [xbp-74h] BYREF
  System_Nullable_float__o p_size; // 0:x0.8
  System_Nullable_float__o v658; // 0:x0.8
  System_Nullable_float__o v659; // 0:x0.8
  System_Nullable_float__o v660; // 0:x0.8
  System_Nullable_float__o v661; // 0:x0.8
  System_Nullable_float__o v662; // 0:x3.8
  System_Nullable_float__o v663; // 0:x3.8
  System_Nullable_Vector3__o v664; // 0:x0.16
  System_Nullable_Vector3__o v665; // 0:x0.16
  System_Nullable_Vector3__o v666; // 0:x0.16
  System_Nullable_Vector3__o v667; // 0:x0.16
  System_Nullable_Vector3__o v668; // 0:x0.16
  System_Nullable_Vector3__o v669; // 0:x1.16
  System_Nullable_Vector3__o v670; // 0:x1.16
  UnityEngine_Vector3_o v671; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v672; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v673; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v674; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v675; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o Position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v677; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v678; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v679; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v680; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v682; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v683; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v684; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v685; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v686; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v687; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4AB2B82 & 1) == 0 )
  {
    sub_1BAB41C(&System_Action_TypeInfo, that);
    sub_1BAB41C(&AvalonSceneManager_TypeInfo, v5);
    sub_1BAB41C(&Method_DataManager_GetMasterData_QuestMaster___, v6);
    sub_1BAB41C(&Method_DataManager_GetMaster_QuestMaster___, v7);
    sub_1BAB41C(&DataManager_TypeInfo, v8);
    sub_1BAB41C(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v9);
    sub_1BAB41C(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__, v10);
    sub_1BAB41C(&Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__TryGetValue__, v11);
    sub_1BAB41C(&FSUtility_TypeInfo, v12);
    sub_1BAB41C(&Method_UnityEngine_GameObject_GetComponentInChildren_UISprite___, v13);
    sub_1BAB41C(&Method_UnityEngine_GameObject_GetComponent_ModelLineComponent___, v14);
    sub_1BAB41C(&LocalizationManager_TypeInfo, v15);
    sub_1BAB41C(&Method_System_Nullable_Vector3___ctor__, v16);
    sub_1BAB41C(&Method_System_Nullable_float___ctor__, v17);
    sub_1BAB41C(&UnityEngine_Object_TypeInfo, v18);
    sub_1BAB41C(&Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___, v19);
    sub_1BAB41C(&Method_QuestAfterAction_GetMapComponent_ModelLineComponent___, v20);
    sub_1BAB41C(&Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___, v21);
    sub_1BAB41C(&Method_QuestAfterAction_GetMapComponent_srcLineSprite___, v22);
    sub_1BAB41C(&SceneJumpInfo_TypeInfo, v23);
    sub_1BAB41C(&SeManager_TypeInfo, v24);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v25);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v26);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v27);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__, v28);
    sub_1BAB41C(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v29);
    sub_1BAB41C(&Method_SingletonTemplate_QuestTree__get_Instance__, v30);
    sub_1BAB41C(&SoundManager_TypeInfo, v31);
    sub_1BAB41C(&Method_QuestAfterAction_StateMain_UpdateAnim__, v32);
    sub_1BAB41C(&string___TypeInfo, v33);
    sub_1BAB41C(&TerminalPramsManager_TypeInfo, v34);
    sub_1BAB41C(&TerminalSceneComponent_TypeInfo, v35);
    sub_1BAB41C(&Method_QuestAfterAction_StateMain___c__UpdateAnim_b__16_22__, v36);
    sub_1BAB41C(&Method_QuestAfterAction_StateMain___c__UpdateAnim_b__16_25__, v37);
    sub_1BAB41C(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__10__, v38);
    sub_1BAB41C(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__11__, v39);
    sub_1BAB41C(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__12__, v40);
    sub_1BAB41C(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__23__, v41);
    sub_1BAB41C(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__24__, v42);
    sub_1BAB41C(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__28__, v43);
    sub_1BAB41C(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__29__, v44);
    sub_1BAB41C(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__30__, v45);
    sub_1BAB41C(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__31__, v46);
    sub_1BAB41C(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__32__, v47);
    sub_1BAB41C(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__9__, v48);
    sub_1BAB41C(&QuestAfterAction_StateMain___c__DisplayClass16_0_TypeInfo, v49);
    sub_1BAB41C(&Method_QuestAfterAction_StateMain___c__DisplayClass16_10__UpdateAnim_b__13__, v50);
    sub_1BAB41C(&Method_QuestAfterAction_StateMain___c__DisplayClass16_10__UpdateAnim_b__14__, v51);
    sub_1BAB41C(&QuestAfterAction_StateMain___c__DisplayClass16_10_TypeInfo, v52);
    sub_1BAB41C(&Method_QuestAfterAction_StateMain___c__DisplayClass16_11__UpdateAnim_b__15__, v53);
    sub_1BAB41C(&Method_QuestAfterAction_StateMain___c__DisplayClass16_11__UpdateAnim_b__16__, v54);
    sub_1BAB41C(&QuestAfterAction_StateMain___c__DisplayClass16_11_TypeInfo, v55);
    sub_1BAB41C(&Method_QuestAfterAction_StateMain___c__DisplayClass16_12__UpdateAnim_b__17__, v56);
    sub_1BAB41C(&QuestAfterAction_StateMain___c__DisplayClass16_12_TypeInfo, v57);
    sub_1BAB41C(&Method_QuestAfterAction_StateMain___c__DisplayClass16_13__UpdateAnim_b__18__, v58);
    sub_1BAB41C(&QuestAfterAction_StateMain___c__DisplayClass16_13_TypeInfo, v59);
    sub_1BAB41C(&Method_QuestAfterAction_StateMain___c__DisplayClass16_15__UpdateAnim_b__20__, v60);
    sub_1BAB41C(&Method_QuestAfterAction_StateMain___c__DisplayClass16_15__UpdateAnim_b__21__, v61);
    sub_1BAB41C(&QuestAfterAction_StateMain___c__DisplayClass16_15_TypeInfo, v62);
    sub_1BAB41C(&Method_QuestAfterAction_StateMain___c__DisplayClass16_1__UpdateAnim_b__0__, v63);
    sub_1BAB41C(&QuestAfterAction_StateMain___c__DisplayClass16_1_TypeInfo, v64);
    sub_1BAB41C(&Method_QuestAfterAction_StateMain___c__DisplayClass16_2__UpdateAnim_b__1__, v65);
    sub_1BAB41C(&QuestAfterAction_StateMain___c__DisplayClass16_2_TypeInfo, v66);
    sub_1BAB41C(&Method_QuestAfterAction_StateMain___c__DisplayClass16_3__UpdateAnim_b__2__, v67);
    sub_1BAB41C(&QuestAfterAction_StateMain___c__DisplayClass16_3_TypeInfo, v68);
    sub_1BAB41C(&Method_QuestAfterAction_StateMain___c__DisplayClass16_4__UpdateAnim_b__3__, v69);
    sub_1BAB41C(&QuestAfterAction_StateMain___c__DisplayClass16_4_TypeInfo, v70);
    sub_1BAB41C(&Method_QuestAfterAction_StateMain___c__DisplayClass16_5__UpdateAnim_b__4__, v71);
    sub_1BAB41C(&QuestAfterAction_StateMain___c__DisplayClass16_5_TypeInfo, v72);
    sub_1BAB41C(&Method_QuestAfterAction_StateMain___c__DisplayClass16_6__UpdateAnim_b__5__, v73);
    sub_1BAB41C(&QuestAfterAction_StateMain___c__DisplayClass16_6_TypeInfo, v74);
    sub_1BAB41C(&Method_QuestAfterAction_StateMain___c__DisplayClass16_7__UpdateAnim_b__6__, v75);
    sub_1BAB41C(&QuestAfterAction_StateMain___c__DisplayClass16_7_TypeInfo, v76);
    sub_1BAB41C(&Method_QuestAfterAction_StateMain___c__DisplayClass16_8__UpdateAnim_b__7__, v77);
    sub_1BAB41C(&QuestAfterAction_StateMain___c__DisplayClass16_8_TypeInfo, v78);
    sub_1BAB41C(&Method_QuestAfterAction_StateMain___c__DisplayClass16_9__UpdateAnim_b__8__, v79);
    sub_1BAB41C(&QuestAfterAction_StateMain___c__DisplayClass16_9_TypeInfo, v80);
    sub_1BAB41C(&QuestAfterAction_StateMain___c_TypeInfo, v81);
    sub_1BAB41C(&StringLiteral_88/*"\r\n"*/, v82);
    sub_1BAB41C(&StringLiteral_1475/*"30101"*/, v83);
    sub_1BAB41C(&StringLiteral_10831/*"QUEST_AFTER_ACTION_MESSAGE_"*/, v84);
    sub_1BAB41C(&StringLiteral_1476/*"30102"*/, v85);
    sub_1BAB41C(&StringLiteral_1399/*"10703"*/, v86);
    sub_1BAB41C(&StringLiteral_3405/*"CAPTER WAIT"*/, v87);
    sub_1BAB41C(&StringLiteral_1/*""*/, v88);
    sub_1BAB41C(&StringLiteral_19844/*"gevINFOBAR_BACK"*/, v89);
    sub_1BAB41C(&StringLiteral_1209/*"0"*/, v90);
    byte_4AB2B82 = 1;
  }
  isQuickUpdate = 0;
  *(_QWORD *)&color.fields.r = 0LL;
  *(_QWORD *)&color.fields.b = 0LL;
  value = 0LL;
  entity = 0LL;
  v91 = sub_1BAB668(QuestAfterAction_StateMain___c__DisplayClass16_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v91, 0LL);
  if ( !v91 )
    goto LABEL_1002;
  *(_QWORD *)(v91 + 16) = this;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v91 + 16), (int32_t)this, v94, v95);
  *(_QWORD *)(v91 + 24) = that;
  v96 = (__int64 *)(v91 + 24);
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v91 + 24), (int32_t)that, v97, v98);
  if ( this->fields.IsAnimDoing )
    return;
  updated = ((__int64 (__fastcall *)(QuestAfterAction_StateMain_o *, Il2CppMethodPointer))this->klass->vtable._10_get_CommandBuf.method)(
              this,
              this->klass->vtable._11_get_CommandIndex.methodPtr);
  if ( !updated )
    return;
  if ( !*v96 )
    goto LABEL_1002;
  if ( *(_BYTE *)(*v96 + 169) )
  {
    updated = ((__int64 (__fastcall *)(QuestAfterAction_StateMain_o *, Il2CppMethodPointer))this->klass->vtable._14_EndAnim.method)(
                this,
                this->klass->vtable._15_onEnd.methodPtr);
    if ( *v96 )
    {
      *(_BYTE *)(*v96 + 169) = 0;
      return;
    }
LABEL_1002:
    sub_1BAB678(updated, v93);
  }
  klass = this->klass;
  this->fields.IsAnimDoing = 1;
  v100 = ((__int64 (__fastcall *)(QuestAfterAction_StateMain_o *, Il2CppMethodPointer))klass->vtable._10_get_CommandBuf.method)(
           this,
           klass->vtable._11_get_CommandIndex.methodPtr);
  updated = ((__int64 (__fastcall *)(QuestAfterAction_StateMain_o *, Il2CppMethodPointer))this->klass->vtable._11_get_CommandIndex.method)(
              this,
              this->klass->vtable._12_set_CommandIndex.methodPtr);
  if ( !v100 )
    goto LABEL_1002;
  if ( (unsigned int)updated >= *(_DWORD *)(v100 + 24) )
    goto LABEL_1003;
  v101 = *(QuestAfterAction_Command_o **)(v100 + 8LL * (int)updated + 32);
  updated = ((__int64 (__fastcall *)(QuestAfterAction_StateMain_o *, QuestAfterAction_Command_o *, Il2CppMethodPointer))this->klass->vtable._9_IsUsableCommand.method)(
              this,
              v101,
              this->klass->vtable._10_get_CommandBuf.methodPtr);
  if ( (updated & 1) == 0 )
    goto LABEL_829;
  if ( !*v96 )
    goto LABEL_1002;
  v102 = *(BlankEarthQuestAfterAction_o **)(*v96 + 48);
  v103 = (System_Action_o *)sub_1BAB668(System_Action_TypeInfo);
  System_Action___ctor(v103, (Il2CppObject *)this, (intptr_t)this->klass->vtable._15_onEnd.methodPtr, 0LL);
  if ( !v102 )
    goto LABEL_1002;
  updated = BlankEarthQuestAfterAction__UpdateAnim(v102, v93, v101, v103, &isQuickUpdate, v104);
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
        *v96,
        this->klass->vtable._14_EndAnim.methodPtr);
      return;
    }
    return;
  }
  if ( !v101 )
    goto LABEL_1002;
  id = v101->fields.id;
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
          if ( !byte_4AB0C49 )
          {
            sub_1BAB41C(&TerminalSceneComponent_TypeInfo, v93);
            byte_4AB0C49 = 1;
          }
          updated = (__int64)TerminalSceneComponent_TypeInfo;
          if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            updated = (__int64)TerminalSceneComponent_TypeInfo;
          }
          v193 = **(_QWORD **)(updated + 184);
          if ( !v193 )
            goto LABEL_1002;
          updated = *(_QWORD *)(v193 + 256);
          if ( !updated )
            goto LABEL_1002;
          updated = (__int64)ScrTerminalListTop__mfGetMyFsmP((ScrTerminalListTop_o *)updated, 0LL);
          if ( !updated )
            goto LABEL_1002;
          v194 = (PlayMakerFSM_o *)updated;
          ActiveStateName = PlayMakerFSM__get_ActiveStateName((PlayMakerFSM_o *)updated, 0LL);
          if ( System_String__op_Equality(ActiveStateName, (System_String_o *)StringLiteral_3405/*"CAPTER WAIT"*/, 0LL) )
          {
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            if ( !byte_4AB0C49 )
            {
              sub_1BAB41C(&TerminalSceneComponent_TypeInfo, v93);
              byte_4AB0C49 = 1;
            }
            updated = (__int64)TerminalSceneComponent_TypeInfo;
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
              updated = (__int64)TerminalSceneComponent_TypeInfo;
            }
            v196 = **(_QWORD **)(updated + 184);
            if ( !v196 )
              goto LABEL_1002;
            v197 = *(_QWORD *)(v196 + 256);
            if ( !v197 )
              goto LABEL_1002;
            v198 = *(QuestBoardListViewManager_o **)(v197 + 296);
            updated = (__int64)QuestAfterAction_StateMain___c_TypeInfo;
            if ( !QuestAfterAction_StateMain___c_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(QuestAfterAction_StateMain___c_TypeInfo);
              updated = (__int64)QuestAfterAction_StateMain___c_TypeInfo;
            }
            v199 = *(System_Action_o **)(*(_QWORD *)(updated + 184) + 8LL);
            if ( !v199 )
            {
              if ( !*(_DWORD *)(updated + 224) )
              {
                j_il2cpp_runtime_class_init_0(updated);
                updated = (__int64)QuestAfterAction_StateMain___c_TypeInfo;
              }
              v571 = **(Il2CppObject ***)(updated + 184);
              v199 = (System_Action_o *)sub_1BAB668(System_Action_TypeInfo);
              System_Action___ctor(v199, v571, Method_QuestAfterAction_StateMain___c__UpdateAnim_b__16_22__, 0LL);
              static_fields = QuestAfterAction_StateMain___c_TypeInfo->static_fields;
              static_fields->__9__16_22 = v199;
              sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&static_fields->__9__16_22, (int32_t)v199, v573, v574);
            }
            if ( !v198 )
              goto LABEL_1002;
            QuestBoardListViewManager__SetMode(v198, 4, v199, 0, 0, 0LL);
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            if ( !byte_4AB0C49 )
            {
              sub_1BAB41C(&TerminalSceneComponent_TypeInfo, v93);
              byte_4AB0C49 = 1;
            }
            v575 = TerminalSceneComponent_TypeInfo;
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
              v575 = TerminalSceneComponent_TypeInfo;
            }
            updated = (__int64)v575->static_fields->mInstance;
            if ( !updated )
              goto LABEL_1002;
            TerminalSceneComponent__CallQuestInformationClose((TerminalSceneComponent_o *)updated, 0LL);
            PlayMakerFSM__SendEvent(v194, (System_String_o *)StringLiteral_19844/*"gevINFOBAR_BACK"*/, 0LL);
          }
          goto LABEL_829;
        }
        if ( id != 510 )
        {
          if ( id == 520 )
          {
            DEFAULT_FADE_TIME = System_Single__Parse(v101->fields.param, 0LL);
            if ( DEFAULT_FADE_TIME <= 0.0 )
            {
              v109 = AvalonSceneManager_TypeInfo;
              if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
                v109 = AvalonSceneManager_TypeInfo;
              }
              DEFAULT_FADE_TIME = v109->static_fields->DEFAULT_FADE_TIME;
            }
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            if ( !byte_4AB0C49 )
            {
              sub_1BAB41C(&TerminalSceneComponent_TypeInfo, v107);
              byte_4AB0C49 = 1;
            }
            v110 = TerminalSceneComponent_TypeInfo;
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
              v110 = TerminalSceneComponent_TypeInfo;
            }
            mInstance = v110->static_fields->mInstance;
            v112 = (System_Action_o *)sub_1BAB668(System_Action_TypeInfo);
            System_Action___ctor(
              v112,
              (Il2CppObject *)v91,
              Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__23__,
              0LL);
            if ( !mInstance )
              goto LABEL_1002;
            v113 = mInstance;
            v114 = DEFAULT_FADE_TIME;
            v115 = v112;
LABEL_46:
            TerminalSceneComponent__Fadein_MapDisp(v113, v114, v115, 0LL);
          }
          return;
        }
        updated = (__int64)v101->fields.param;
        if ( !updated )
          goto LABEL_1002;
        updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
        if ( !updated )
          goto LABEL_1002;
        v200 = updated;
        if ( *(_DWORD *)(updated + 24) )
        {
          v201 = System_Int32__Parse(*(System_String_o **)(updated + 32), 0LL);
          v202 = 0.5;
          if ( *(int *)(v200 + 24) >= 2 )
          {
            v203 = System_Int32__Parse(*(System_String_o **)(v200 + 40), 0LL);
            if ( *(int *)(v200 + 24) >= 3 )
              v202 = System_Single__Parse(*(System_String_o **)(v200 + 48), 0LL);
          }
          else
          {
            v203 = v201;
            v201 = -1;
          }
          updated = *v96;
          if ( !*v96 )
            goto LABEL_1002;
          MapComponent_object = QuestAfterAction__GetMapComponent_object_(
                                  (QuestAfterAction_o *)updated,
                                  0,
                                  v203,
                                  this,
                                  (const MethodInfo_2F548A4 *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)MapComponent_object, 0LL, 0LL) )
          {
            if ( v201 >= 1 )
            {
              updated = *v96;
              if ( !*v96 )
                goto LABEL_1002;
              v259 = QuestAfterAction__GetMapComponent_object_(
                       (QuestAfterAction_o *)updated,
                       0,
                       v201,
                       this,
                       (const MethodInfo_2F548A4 *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v259, 0LL, 0LL) )
              {
                if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
                if ( !byte_4AB0C49 )
                {
                  sub_1BAB41C(&TerminalSceneComponent_TypeInfo, v93);
                  byte_4AB0C49 = 1;
                }
                updated = (__int64)TerminalSceneComponent_TypeInfo;
                if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
                  updated = (__int64)TerminalSceneComponent_TypeInfo;
                }
                v260 = **(_QWORD **)(updated + 184);
                if ( !v260 )
                  goto LABEL_1002;
                if ( !v259 )
                  goto LABEL_1002;
                v261 = *(ScrTerminalMap_o **)(v260 + 264);
                updated = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v259, 0LL);
                if ( !v261 )
                  goto LABEL_1002;
                ScrTerminalMap__SetPlayerIcon(v261, (UnityEngine_GameObject_o *)updated, 0LL);
              }
            }
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            if ( !byte_4AB0C49 )
            {
              sub_1BAB41C(&TerminalSceneComponent_TypeInfo, v93);
              byte_4AB0C49 = 1;
            }
            updated = (__int64)TerminalSceneComponent_TypeInfo;
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
              updated = (__int64)TerminalSceneComponent_TypeInfo;
            }
            v262 = **(_QWORD **)(updated + 184);
            if ( !v262 )
              goto LABEL_1002;
            if ( !MapComponent_object )
              goto LABEL_1002;
            v263 = *(ScrTerminalMap_o **)(v262 + 264);
            gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)MapComponent_object, 0LL);
            v265 = (System_Action_o *)sub_1BAB668(System_Action_TypeInfo);
            System_Action___ctor(v265, (Il2CppObject *)this, (intptr_t)this->klass->vtable._15_onEnd.methodPtr, 0LL);
            if ( !v263 )
              goto LABEL_1002;
            ScrTerminalMap__MovePlayerIcon(v263, gameObject, v203, v265, v202, 0LL);
          }
          return;
        }
        goto LABEL_1003;
      }
      if ( (unsigned int)(id - 351) >= 2 )
      {
        switch ( id )
        {
          case 400:
            v127 = sub_1BAB668(QuestAfterAction_StateMain___c__DisplayClass16_10_TypeInfo);
            System_Object___ctor((Il2CppObject *)v127, 0LL);
            if ( !v127 )
              goto LABEL_1002;
            *(_QWORD *)(v127 + 24) = v91;
            v130 = v127 + 24;
            sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v127 + 24), v91, v128, v129);
            updated = (__int64)v101->fields.param;
            if ( !updated )
              goto LABEL_1002;
            updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
            if ( !updated )
              goto LABEL_1002;
            v131 = *(_QWORD *)(updated + 24);
            v132 = updated;
            if ( v131 )
            {
              if ( !(_DWORD)v131 )
                goto LABEL_1003;
              updated = System_Int32__Parse(*(System_String_o **)(updated + 32), 0LL);
              v133 = updated;
              if ( *(int *)(v132 + 24) >= 2 )
              {
                updated = System_Int32__Parse(*(System_String_o **)(v132 + 40), 0LL);
                v134 = (int)updated < 1;
                if ( *(int *)(v132 + 24) < 3 )
                {
                  v135 = 0;
                }
                else
                {
                  updated = System_Int32__Parse(*(System_String_o **)(v132 + 48), 0LL);
                  v135 = (int)updated > 0;
                }
                goto LABEL_842;
              }
            }
            else
            {
              v133 = 0;
            }
            v135 = 0;
            v134 = 1;
LABEL_842:
            if ( !*(_QWORD *)v130 )
              goto LABEL_1002;
            updated = *(_QWORD *)(*(_QWORD *)v130 + 24LL);
            if ( !updated )
              goto LABEL_1002;
            v581 = QuestAfterAction__GetMapComponent_object_(
                     (QuestAfterAction_o *)updated,
                     2,
                     v133,
                     this,
                     (const MethodInfo_2F548A4 *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
            *(_QWORD *)(v127 + 16) = v581;
            sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v127 + 16), (int32_t)v581, v582, v583);
            v584 = *(UnityEngine_Object_o **)(v127 + 16);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            updated = UnityEngine_Object__op_Equality(v584, 0LL, 0LL);
            if ( (updated & 1) != 0 )
              return;
            v585 = *(MapGimmickComponent_o **)(v127 + 16);
            if ( !v585 )
              goto LABEL_1002;
            v585->fields.isForceNotActive = v135;
            v586 = (System_Action_o *)sub_1BAB668(System_Action_TypeInfo);
            v587 = v586;
            if ( v134 )
            {
              System_Action___ctor(
                v586,
                (Il2CppObject *)v127,
                Method_QuestAfterAction_StateMain___c__DisplayClass16_10__UpdateAnim_b__14__,
                0LL);
              v500 = 2;
              v588 = v585;
              v589 = v587;
LABEL_951:
              MapGimmickComponent__SetState(v588, v500, v589, 0LL);
              return;
            }
            System_Action___ctor(
              v586,
              (Il2CppObject *)v127,
              Method_QuestAfterAction_StateMain___c__DisplayClass16_10__UpdateAnim_b__13__,
              0LL);
            MapGimmickComponent__SetState(v585, 2, v587, 0LL);
            updated = ((__int64 (__fastcall *)(QuestAfterAction_StateMain_o *, Il2CppMethodPointer))this->klass->vtable._14_EndAnim.method)(
                        this,
                        this->klass->vtable._15_onEnd.methodPtr);
            v627 = *(_QWORD *)(v127 + 24);
            if ( !v627 )
              goto LABEL_1002;
            goto LABEL_956;
          case 401:
            v432 = sub_1BAB668(QuestAfterAction_StateMain___c__DisplayClass16_11_TypeInfo);
            System_Object___ctor((Il2CppObject *)v432, 0LL);
            if ( !v432 )
              goto LABEL_1002;
            *(_QWORD *)(v432 + 24) = v91;
            v435 = v432 + 24;
            sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v432 + 24), v91, v433, v434);
            updated = (__int64)v101->fields.param;
            if ( !updated )
              goto LABEL_1002;
            updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
            if ( !updated )
              goto LABEL_1002;
            v436 = *(_QWORD *)(updated + 24);
            v437 = updated;
            if ( v436 )
            {
              if ( !(_DWORD)v436 )
                goto LABEL_1003;
              updated = System_Int32__Parse(*(System_String_o **)(updated + 32), 0LL);
              v438 = updated;
              if ( *(int *)(v437 + 24) >= 2 )
              {
                updated = System_Int32__Parse(*(System_String_o **)(v437 + 40), 0LL);
                v439 = (int)updated < 1;
                if ( *(int *)(v437 + 24) < 3 )
                {
                  v440 = 0;
                }
                else
                {
                  updated = System_Int32__Parse(*(System_String_o **)(v437 + 48), 0LL);
                  v440 = (int)updated > 0;
                }
                goto LABEL_852;
              }
            }
            else
            {
              v438 = 0;
            }
            v440 = 0;
            v439 = 1;
LABEL_852:
            if ( !*(_QWORD *)v435 )
              goto LABEL_1002;
            updated = *(_QWORD *)(*(_QWORD *)v435 + 24LL);
            if ( !updated )
              goto LABEL_1002;
            v590 = QuestAfterAction__GetMapComponent_object_(
                     (QuestAfterAction_o *)updated,
                     2,
                     v438,
                     this,
                     (const MethodInfo_2F548A4 *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
            *(_QWORD *)(v432 + 16) = v590;
            v591 = (MapGimmickComponent_o **)(v432 + 16);
            sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v432 + 16), (int32_t)v590, v592, v593);
            v594 = *(UnityEngine_Object_o **)(v432 + 16);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            updated = UnityEngine_Object__op_Equality(v594, 0LL, 0LL);
            if ( (updated & 1) != 0 )
              return;
            v595 = *v591;
            if ( !*v591 )
              goto LABEL_1002;
            v595->fields.isForceLoop = v440;
            v595->fields.isForceNotActive = 0;
            if ( *(int *)(v437 + 24) >= 4 )
            {
              updated = System_Int32__Parse(*(System_String_o **)(v437 + 56), 0LL);
              if ( !*v591 )
                goto LABEL_1002;
              MapGimmickComponent__SetUseAnimNum(*v591, updated, 1, 0LL);
              v595 = *v591;
            }
            v596 = (System_Action_o *)sub_1BAB668(System_Action_TypeInfo);
            v484 = v596;
            if ( v439 )
            {
              System_Action___ctor(
                v596,
                (Il2CppObject *)v432,
                Method_QuestAfterAction_StateMain___c__DisplayClass16_11__UpdateAnim_b__16__,
                0LL);
              if ( !v595 )
                goto LABEL_1002;
              v500 = 3;
              v588 = v595;
LABEL_950:
              v589 = v484;
              goto LABEL_951;
            }
            System_Action___ctor(
              v596,
              (Il2CppObject *)v432,
              Method_QuestAfterAction_StateMain___c__DisplayClass16_11__UpdateAnim_b__15__,
              0LL);
            if ( !v595 )
              goto LABEL_1002;
            MapGimmickComponent__SetState(v595, 3, v484, 0LL);
            updated = ((__int64 (__fastcall *)(QuestAfterAction_StateMain_o *, Il2CppMethodPointer))this->klass->vtable._14_EndAnim.method)(
                        this,
                        this->klass->vtable._15_onEnd.methodPtr);
            v627 = *(_QWORD *)v435;
            if ( !*(_QWORD *)v435 )
              goto LABEL_1002;
LABEL_956:
            ((void (__fastcall *)(QuestAfterAction_StateMain_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._13_UpdateAnim.method)(
              this,
              *(_QWORD *)(v627 + 24),
              this->klass->vtable._14_EndAnim.methodPtr);
            return;
          case 402:
            updated = (__int64)v101->fields.param;
            if ( !updated )
              goto LABEL_1002;
            updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
            if ( !updated )
              goto LABEL_1002;
            v441 = *(_QWORD *)(updated + 24);
            v442 = updated;
            if ( v441 )
            {
              if ( !(_DWORD)v441 )
                goto LABEL_1003;
              v443 = System_Int32__Parse(*(System_String_o **)(updated + 32), 0LL);
              if ( *(int *)(v442 + 24) >= 2 )
              {
                v444 = System_Int32__Parse(*(System_String_o **)(v442 + 40), 0LL) > 0;
                goto LABEL_866;
              }
            }
            else
            {
              v443 = 0;
            }
            v444 = 0;
LABEL_866:
            updated = *v96;
            if ( !*v96 )
              goto LABEL_1002;
            v597 = QuestAfterAction__GetMapComponent_object_(
                     (QuestAfterAction_o *)updated,
                     2,
                     v443,
                     this,
                     (const MethodInfo_2F548A4 *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            updated = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v597, 0LL, 0LL);
            if ( (updated & 1) == 0 )
            {
              if ( !v597 )
                goto LABEL_1002;
              BYTE1(v597[6].monitor) = v444;
              MapGimmickComponent__SetDispAnimQuick((MapGimmickComponent_o *)v597, 0, 0LL);
              v382 = v597[7].klass;
              if ( !v382 )
                goto LABEL_1002;
LABEL_872:
              v382[4] = 0;
              goto LABEL_18;
            }
            return;
          case 403:
            updated = (__int64)v101->fields.param;
            if ( !updated )
              goto LABEL_1002;
            updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
            if ( !updated )
              goto LABEL_1002;
            v445 = *(_QWORD *)(updated + 24);
            v446 = updated;
            if ( v445 )
            {
              if ( !(_DWORD)v445 )
                goto LABEL_1003;
              v447 = System_Int32__Parse(*(System_String_o **)(updated + 32), 0LL);
              if ( *(int *)(v446 + 24) >= 2 )
              {
                v448 = System_Int32__Parse(*(System_String_o **)(v446 + 40), 0LL) > 0;
                goto LABEL_875;
              }
            }
            else
            {
              v447 = 0;
            }
            v448 = 0;
LABEL_875:
            updated = *v96;
            if ( !*v96 )
              goto LABEL_1002;
            v598 = QuestAfterAction__GetMapComponent_object_(
                     (QuestAfterAction_o *)updated,
                     2,
                     v447,
                     this,
                     (const MethodInfo_2F548A4 *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            updated = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v598, 0LL, 0LL);
            if ( (updated & 1) == 0 )
            {
              if ( !v598 )
                goto LABEL_1002;
              LOBYTE(v598[6].monitor) = v448;
              BYTE1(v598[6].monitor) = 0;
              MapGimmickComponent__SetDispAnimQuick((MapGimmickComponent_o *)v598, 1, 0LL);
              v599 = v598[7].klass;
              if ( !v599 )
                goto LABEL_1002;
              LODWORD(v599->_1.name) = 1;
              goto LABEL_18;
            }
            return;
          case 404:
            updated = (__int64)v101->fields.param;
            if ( !updated )
              goto LABEL_1002;
            updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
            if ( !updated )
              goto LABEL_1002;
            v449 = updated;
            if ( *(int *)(updated + 24) <= 4 )
              goto LABEL_829;
            v450 = System_Single__Parse(*(System_String_o **)(updated + 56), 0LL);
            if ( !*(_DWORD *)(v449 + 24) )
              goto LABEL_1003;
            v451 = (QuestAfterAction_o *)*v96;
            v452 = v450;
            updated = System_Int32__Parse(*(System_String_o **)(v449 + 32), 0LL);
            if ( !v451 )
              goto LABEL_1002;
            v453 = QuestAfterAction__GetMapComponent_object_(
                     v451,
                     2,
                     updated,
                     this,
                     (const MethodInfo_2F548A4 *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v453, 0LL, 0LL) )
              return;
            v454 = *(int *)(v449 + 24) >= 6 && System_Int32__Parse(*(System_String_o **)(v449 + 72), 0LL) > 0;
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            if ( !byte_4AB0C49 )
            {
              sub_1BAB41C(&TerminalSceneComponent_TypeInfo, v93);
              byte_4AB0C49 = 1;
            }
            updated = (__int64)TerminalSceneComponent_TypeInfo;
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
              updated = (__int64)TerminalSceneComponent_TypeInfo;
            }
            v633 = **(_QWORD **)(updated + 184);
            if ( !v633 )
              goto LABEL_1002;
            if ( *(_DWORD *)(v449 + 24) <= 1u )
              goto LABEL_1003;
            v634 = *(ScrTerminalMap_o **)(v633 + 264);
            v635 = System_Single__Parse(*(System_String_o **)(v449 + 40), 0LL);
            if ( *(_DWORD *)(v449 + 24) <= 2u )
              goto LABEL_1003;
            v636 = v635;
            v637 = System_Single__Parse(*(System_String_o **)(v449 + 48), 0LL);
            if ( !v634 )
              goto LABEL_1002;
            *(UnityEngine_Vector3_o *)&v638 = ScrTerminalMap__LocalPosFromCoord(v634, v636, v637, 0.0, 0.0, 0LL);
            if ( *(_DWORD *)(v449 + 24) <= 4u )
              goto LABEL_1003;
            v641 = v638;
            v642 = v639;
            v643 = v640;
            v644 = v452 * 0.001;
            updated = System_Int32__Parse(*(System_String_o **)(v449 + 64), 0LL);
            v645 = updated;
            if ( v454 )
            {
              if ( !v453 )
                goto LABEL_1002;
              v685.fields.x = v641;
              v685.fields.y = v642;
              v685.fields.z = v643;
              MapGimmickComponent__SetMoveAnim((MapGimmickComponent_o *)v453, v685, v644, updated, 0LL, 0LL);
              goto LABEL_829;
            }
            v646 = (System_Action_o *)sub_1BAB668(System_Action_TypeInfo);
            System_Action___ctor(v646, (Il2CppObject *)this, (intptr_t)this->klass->vtable._15_onEnd.methodPtr, 0LL);
            if ( !v453 )
              goto LABEL_1002;
            v620 = (MapGimmickComponent_o *)v453;
            v621 = v641;
            v622 = v642;
            v623 = v643;
            v624 = v644;
            v625 = v645;
            v626 = v646;
LABEL_993:
            MapGimmickComponent__SetMoveAnim(v620, *(UnityEngine_Vector3_o *)&v621, v624, v625, v626, 0LL);
            return;
          case 405:
            v455 = sub_1BAB668(QuestAfterAction_StateMain___c__DisplayClass16_12_TypeInfo);
            System_Object___ctor((Il2CppObject *)v455, 0LL);
            if ( !v455 )
              goto LABEL_1002;
            *(_QWORD *)(v455 + 24) = v91;
            sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v455 + 24), v91, v456, v457);
            v458 = *(_QWORD *)(v455 + 24);
            if ( !v458 )
              goto LABEL_1002;
            v459 = *(QuestAfterAction_o **)(v458 + 24);
            updated = System_Int32__Parse(v101->fields.param, 0LL);
            if ( !v459 )
              goto LABEL_1002;
            v460 = QuestAfterAction__GetMapComponent_object_(
                     v459,
                     2,
                     updated,
                     this,
                     (const MethodInfo_2F548A4 *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
            *(_QWORD *)(v455 + 16) = v460;
            sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v455 + 16), (int32_t)v460, v461, v462);
            v463 = *(UnityEngine_Object_o **)(v455 + 16);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Equality(v463, 0LL, 0LL) )
              return;
            v464 = *(MapGimmickComponent_o **)(v455 + 16);
            v465 = (System_Action_o *)sub_1BAB668(System_Action_TypeInfo);
            System_Action___ctor(
              v465,
              (Il2CppObject *)v455,
              Method_QuestAfterAction_StateMain___c__DisplayClass16_12__UpdateAnim_b__17__,
              0LL);
            if ( !v464 )
              goto LABEL_1002;
            MapGimmickComponent__SetState(v464, 3, v465, 0LL);
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            if ( !byte_4AB0C49 )
            {
              sub_1BAB41C(&TerminalSceneComponent_TypeInfo, v93);
              byte_4AB0C49 = 1;
            }
            updated = (__int64)TerminalSceneComponent_TypeInfo;
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
              updated = (__int64)TerminalSceneComponent_TypeInfo;
            }
            v466 = **(TerminalSceneComponent_o ***)(updated + 184);
            if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
            if ( !v466 )
              goto LABEL_1002;
            v113 = v466;
            v115 = 0LL;
            v114 = AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME;
            goto LABEL_46;
          case 406:
            v467 = sub_1BAB668(QuestAfterAction_StateMain___c__DisplayClass16_13_TypeInfo);
            System_Object___ctor((Il2CppObject *)v467, 0LL);
            if ( !v467 )
              goto LABEL_1002;
            *(_QWORD *)(v467 + 32) = v91;
            sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v467 + 32), v91, v468, v469);
            updated = (__int64)v101->fields.param;
            if ( !updated )
              goto LABEL_1002;
            v470 = System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
            *(_QWORD *)(v467 + 24) = v470;
            v471 = (__int64 *)(v467 + 24);
            sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v467 + 24), (int32_t)v470, v472, v473);
            v474 = *(_QWORD *)(v467 + 32);
            if ( !v474 )
              goto LABEL_1002;
            v475 = *v471;
            if ( !*v471 )
              goto LABEL_1002;
            if ( !*(_DWORD *)(v475 + 24) )
              goto LABEL_1003;
            v476 = *(QuestAfterAction_o **)(v474 + 24);
            updated = System_Int32__Parse(*(System_String_o **)(v475 + 32), 0LL);
            if ( !v476 )
              goto LABEL_1002;
            v477 = QuestAfterAction__GetMapComponent_object_(
                     v476,
                     2,
                     updated,
                     this,
                     (const MethodInfo_2F548A4 *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
            *(_QWORD *)(v467 + 16) = v477;
            sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v467 + 16), (int32_t)v477, v478, v479);
            v480 = *(UnityEngine_Object_o **)(v467 + 16);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Equality(v480, 0LL, 0LL) )
              return;
            v481 = *(MapGimmickComponent_o **)(v467 + 16);
            v482 = (System_Action_o *)sub_1BAB668(System_Action_TypeInfo);
            v483 = &Method_QuestAfterAction_StateMain___c__DisplayClass16_13__UpdateAnim_b__18__;
            v484 = v482;
            goto LABEL_702;
          case 407:
            updated = (__int64)v101->fields.param;
            if ( !updated )
              goto LABEL_1002;
            updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
            if ( !updated )
              goto LABEL_1002;
            v485 = updated;
            if ( !*(_DWORD *)(updated + 24) )
              goto LABEL_1003;
            v486 = (QuestAfterAction_o *)*v96;
            updated = System_Int32__Parse(*(System_String_o **)(updated + 32), 0LL);
            if ( !v486 )
              goto LABEL_1002;
            v487 = QuestAfterAction__GetMapComponent_object_(
                     v486,
                     2,
                     updated,
                     this,
                     (const MethodInfo_2F548A4 *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            updated = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v487, 0LL, 0LL);
            if ( (updated & 1) != 0 )
              return;
            if ( !v487 )
              goto LABEL_1002;
            updated = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v487, 0LL);
            if ( !updated )
              goto LABEL_1002;
            updated = (__int64)UnityEngine_GameObject__GetComponentInChildren_object_(
                                 (UnityEngine_GameObject_o *)updated,
                                 (const MethodInfo_2F13BD4 *)Method_UnityEngine_GameObject_GetComponentInChildren_UISprite___);
            if ( *(_DWORD *)(v485 + 24) <= 1u )
              goto LABEL_1003;
            v488 = (UIWidget_o *)updated;
            updated = UnityEngine_ColorUtility__TryParseHtmlString(*(System_String_o **)(v485 + 40), &color, 0LL);
            if ( !v488 )
              goto LABEL_1002;
            UIWidget__set_color(v488, color, 0LL);
            goto LABEL_829;
          case 408:
            v467 = sub_1BAB668(QuestAfterAction_StateMain___c__DisplayClass16_15_TypeInfo);
            System_Object___ctor((Il2CppObject *)v467, 0LL);
            if ( !v467 )
              goto LABEL_1002;
            *(_QWORD *)(v467 + 24) = v91;
            sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v467 + 24), v91, v489, v490);
            v491 = *(_QWORD *)(v467 + 24);
            if ( !v491 )
              goto LABEL_1002;
            v492 = *(QuestAfterAction_o **)(v491 + 24);
            updated = System_Int32__Parse(v101->fields.param, 0LL);
            if ( !v492 )
              goto LABEL_1002;
            v493 = QuestAfterAction__GetMapComponent_object_(
                     v492,
                     2,
                     updated,
                     this,
                     (const MethodInfo_2F548A4 *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
            *(_QWORD *)(v467 + 16) = v493;
            v494 = v467 + 16;
            sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v467 + 16), (int32_t)v493, v495, v496);
            v497 = *(UnityEngine_Object_o **)(v467 + 16);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Equality(v497, 0LL, 0LL) )
              return;
            updated = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_378A64C *)Method_SingletonTemplate_QuestTree__get_Instance__);
            if ( !*(_QWORD *)v494 || !updated )
              goto LABEL_1002;
            v498 = QuestTree__CheckMapGimmickCond_34417836(
                     (QuestTree_o *)updated,
                     *(MapControl_MapGimmickInfo_o **)(*(_QWORD *)v494 + 112LL),
                     0LL);
            v481 = *(MapGimmickComponent_o **)v494;
            v499 = v498;
            v482 = (System_Action_o *)sub_1BAB668(System_Action_TypeInfo);
            v484 = v482;
            if ( v499 )
            {
              v483 = &Method_QuestAfterAction_StateMain___c__DisplayClass16_15__UpdateAnim_b__20__;
LABEL_702:
              System_Action___ctor(v482, (Il2CppObject *)v467, *v483, 0LL);
              if ( !v481 )
                goto LABEL_1002;
              v500 = 3;
            }
            else
            {
              System_Action___ctor(
                v482,
                (Il2CppObject *)v467,
                Method_QuestAfterAction_StateMain___c__DisplayClass16_15__UpdateAnim_b__21__,
                0LL);
              if ( !v481 )
                goto LABEL_1002;
              v500 = 2;
            }
            v588 = v481;
            goto LABEL_950;
          case 409:
            updated = (__int64)v101->fields.param;
            if ( !updated )
              goto LABEL_1002;
            updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
            if ( !updated )
              goto LABEL_1002;
            v501 = *(_QWORD *)(updated + 24);
            v502 = updated;
            if ( v501 )
            {
              if ( !(_DWORD)v501 )
                goto LABEL_1003;
              v503 = System_Int32__Parse(*(System_String_o **)(updated + 32), 0LL);
              if ( *(int *)(v502 + 24) >= 2 )
              {
                v504 = System_Int32__Parse(*(System_String_o **)(v502 + 40), 0LL) > 0;
                goto LABEL_884;
              }
            }
            else
            {
              v503 = 0;
            }
            v504 = 0;
LABEL_884:
            updated = *v96;
            if ( !*v96 )
              goto LABEL_1002;
            v600 = QuestAfterAction__GetMapComponent_object_(
                     (QuestAfterAction_o *)updated,
                     2,
                     v503,
                     this,
                     (const MethodInfo_2F548A4 *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            updated = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v600, 0LL, 0LL);
            if ( (updated & 1) == 0 )
            {
              if ( !v600 )
                goto LABEL_1002;
              LOBYTE(v600[6].monitor) = v504;
              BYTE1(v600[6].monitor) = 0;
              MapGimmickComponent__SetDispAnim((MapGimmickComponent_o *)v600, 1, 0LL);
              v601 = v600[7].klass;
              if ( !v601 )
                goto LABEL_1002;
              LODWORD(v601->_1.name) = 1;
              v602 = this->klass;
              this->fields.IsAnimDoing = 0;
              v603 = ((__int64 (__fastcall *)(QuestAfterAction_StateMain_o *, Il2CppMethodPointer))v602->vtable._11_get_CommandIndex.method)(
                       this,
                       v602->vtable._12_set_CommandIndex.methodPtr);
              ((void (__fastcall *)(QuestAfterAction_StateMain_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._12_set_CommandIndex.method)(
                this,
                (unsigned int)(v603 + 1),
                this->klass->vtable._13_UpdateAnim.methodPtr);
              goto LABEL_19;
            }
            return;
          case 410:
            updated = (__int64)v101->fields.param;
            if ( !updated )
              goto LABEL_1002;
            updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
            if ( !updated )
              goto LABEL_1002;
            v505 = updated;
            if ( *(int *)(updated + 24) <= 2 )
              goto LABEL_829;
            v506 = (QuestAfterAction_o *)*v96;
            updated = System_Int32__Parse(*(System_String_o **)(updated + 32), 0LL);
            if ( !v506 )
              goto LABEL_1002;
            v507 = QuestAfterAction__GetMapComponent_object_(
                     v506,
                     2,
                     updated,
                     this,
                     (const MethodInfo_2F548A4 *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            updated = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v507, 0LL, 0LL);
            if ( (updated & 1) != 0 )
              return;
            if ( *(_DWORD *)(v505 + 24) <= 1u )
              goto LABEL_1003;
            v508 = (QuestAfterAction_o *)*v96;
            updated = System_Int32__Parse(*(System_String_o **)(v505 + 40), 0LL);
            if ( !v508 )
              goto LABEL_1002;
            v510 = updated;
            v511 = v508;
            v512 = 0;
            goto LABEL_744;
          case 411:
            updated = (__int64)v101->fields.param;
            if ( !updated )
              goto LABEL_1002;
            updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
            if ( !updated )
              goto LABEL_1002;
            v505 = updated;
            if ( *(int *)(updated + 24) <= 2 )
              goto LABEL_829;
            v513 = (QuestAfterAction_o *)*v96;
            updated = System_Int32__Parse(*(System_String_o **)(updated + 32), 0LL);
            if ( !v513 )
              goto LABEL_1002;
            v507 = QuestAfterAction__GetMapComponent_object_(
                     v513,
                     2,
                     updated,
                     this,
                     (const MethodInfo_2F548A4 *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            updated = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v507, 0LL, 0LL);
            if ( (updated & 1) != 0 )
              return;
            if ( *(_DWORD *)(v505 + 24) <= 1u )
              goto LABEL_1003;
            v514 = (QuestAfterAction_o *)*v96;
            updated = System_Int32__Parse(*(System_String_o **)(v505 + 40), 0LL);
            if ( !v514 )
              goto LABEL_1002;
            MapGameObject = (UnityEngine_Object_o *)QuestAfterAction__GetMapGameObject(v514, 2, updated, this, v515);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Equality(MapGameObject, 0LL, 0LL) )
              return;
            *(UnityEngine_Vector3_o *)&v517 = GameObjectExtensions__GetLocalPosition(
                                                (UnityEngine_GameObject_o *)MapGameObject,
                                                0LL);
            if ( *(_DWORD *)(v505 + 24) <= 2u )
              goto LABEL_1003;
            x = v517;
            y = v518;
            z = v519;
            goto LABEL_758;
          case 412:
            updated = (__int64)v101->fields.param;
            if ( !updated )
              goto LABEL_1002;
            updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
            if ( !updated )
              goto LABEL_1002;
            v505 = updated;
            if ( *(int *)(updated + 24) <= 2 )
              goto LABEL_829;
            v523 = (QuestAfterAction_o *)*v96;
            updated = System_Int32__Parse(*(System_String_o **)(updated + 32), 0LL);
            if ( !v523 )
              goto LABEL_1002;
            v507 = QuestAfterAction__GetMapComponent_object_(
                     v523,
                     2,
                     updated,
                     this,
                     (const MethodInfo_2F548A4 *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            updated = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v507, 0LL, 0LL);
            if ( (updated & 1) != 0 )
              return;
            if ( *(_DWORD *)(v505 + 24) <= 1u )
              goto LABEL_1003;
            v524 = (QuestAfterAction_o *)*v96;
            updated = System_Int32__Parse(*(System_String_o **)(v505 + 40), 0LL);
            if ( !v524 )
              goto LABEL_1002;
            v510 = updated;
            v512 = 1;
            v511 = v524;
LABEL_744:
            v525 = (UnityEngine_Object_o *)QuestAfterAction__GetMapGameObject(v511, v512, v510, this, v509);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Equality(v525, 0LL, 0LL) )
              return;
            LocalPosition = GameObjectExtensions__GetLocalPosition((UnityEngine_GameObject_o *)v525, 0LL);
            x = LocalPosition.fields.x;
            y = LocalPosition.fields.y;
            z = LocalPosition.fields.z;
            if ( !this->fields.IsMapModel )
              goto LABEL_757;
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            if ( !byte_4AB0C49 )
            {
              sub_1BAB41C(&TerminalSceneComponent_TypeInfo, v93);
              byte_4AB0C49 = 1;
            }
            updated = (__int64)TerminalSceneComponent_TypeInfo;
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
              updated = (__int64)TerminalSceneComponent_TypeInfo;
            }
            v526 = **(_QWORD **)(updated + 184);
            if ( !v526 )
              goto LABEL_1002;
            updated = *(_QWORD *)(v526 + 264);
            if ( !updated )
              goto LABEL_1002;
            v682.fields.x = x;
            v682.fields.y = y;
            v682.fields.z = z;
            v683 = ScrTerminalMap__ConvertLocalToScreenPosition((ScrTerminalMap_o *)updated, v682, 0LL);
            x = v683.fields.x;
            y = v683.fields.y;
            z = v683.fields.z;
LABEL_757:
            if ( *(_DWORD *)(v505 + 24) <= 2u )
              goto LABEL_1003;
LABEL_758:
            v527 = System_Single__Parse(*(System_String_o **)(v505 + 48), 0LL) * 0.001;
            if ( v527 >= 0.0 )
              v528 = v527;
            else
              v528 = 0.5;
            if ( *(_DWORD *)(v505 + 24) <= 3u )
              goto LABEL_1003;
            v529 = System_Int32__Parse(*(System_String_o **)(v505 + 56), 0LL);
            if ( *(int *)(v505 + 24) >= 5 )
            {
              updated = System_Int32__Parse(*(System_String_o **)(v505 + 64), 0LL);
              if ( (int)updated >= 1 )
              {
                if ( !v507 )
                  goto LABEL_1002;
                v684.fields.x = x;
                v684.fields.y = y;
                v684.fields.z = z;
                MapGimmickComponent__SetMoveAnim((MapGimmickComponent_o *)v507, v684, v528, v529, 0LL, 0LL);
                goto LABEL_18;
              }
            }
            v619 = (System_Action_o *)sub_1BAB668(System_Action_TypeInfo);
            System_Action___ctor(v619, (Il2CppObject *)this, (intptr_t)this->klass->vtable._15_onEnd.methodPtr, 0LL);
            if ( !v507 )
              goto LABEL_1002;
            v620 = (MapGimmickComponent_o *)v507;
            v621 = x;
            v622 = y;
            v623 = z;
            v624 = v528;
            v625 = v529;
            v626 = v619;
            goto LABEL_993;
          default:
            if ( id != 500 )
              return;
            v338 = System_Int32__Parse(v101->fields.param, 0LL);
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            if ( !byte_4AB2BB2 )
            {
              sub_1BAB41C(&TerminalPramsManager_TypeInfo, v337);
              byte_4AB2BB2 = 1;
            }
            v339 = TerminalPramsManager_TypeInfo;
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
              v339 = TerminalPramsManager_TypeInfo;
            }
            v339->static_fields->_AfterActionFocusQuestId_k__BackingField = v338;
            if ( !DataManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
            updated = (__int64)DataManager__GetMaster_object_((const MethodInfo_2EC5574 *)Method_DataManager_GetMaster_QuestMaster___);
            if ( !updated )
              goto LABEL_1002;
            if ( !DataMasterBase_object__object__int___TryGetEntity(
                    (DataMasterBase_TMaster__TEntity__PKType__o *)updated,
                    &entity,
                    v338,
                    (const MethodInfo_3163DE4 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__) )
              goto LABEL_829;
            updated = (__int64)entity;
            if ( !entity )
              goto LABEL_1002;
            v340 = (QuestAfterAction_o *)*v96;
            updated = QuestEntity__getSpotId((QuestEntity_o *)entity, 0LL);
            if ( !v340 )
              goto LABEL_1002;
            v341 = QuestAfterAction__GetMapComponent_object_(
                     v340,
                     0,
                     updated,
                     this,
                     (const MethodInfo_2F548A4 *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            updated = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v341, 0LL, 0LL);
            if ( (updated & 1) == 0 )
              goto LABEL_829;
            if ( !v341 )
              goto LABEL_1002;
            SrcSpotBasePrefab__SelectSpot((SrcSpotBasePrefab_o *)v341, 0, 0LL);
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            if ( !byte_4AB2BB3 )
            {
              sub_1BAB41C(&TerminalPramsManager_TypeInfo, v342);
              byte_4AB2BB3 = 1;
            }
            v343 = TerminalPramsManager_TypeInfo;
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
              v343 = TerminalPramsManager_TypeInfo;
            }
            v343->static_fields->_IsBackQuestBoardDisable_k__BackingField = 1;
            goto LABEL_829;
        }
      }
      updated = (__int64)v101->fields.param;
      if ( !updated )
        goto LABEL_1002;
      updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
      if ( !updated )
        goto LABEL_1002;
      v148 = updated;
      if ( *(int *)(updated + 24) <= 4 )
        goto LABEL_829;
      v149 = System_Single__Parse(*(System_String_o **)(updated + 32), 0LL);
      if ( *(_DWORD *)(v148 + 24) <= 1u )
        goto LABEL_1003;
      v150 = v149;
      v151 = System_Single__Parse(*(System_String_o **)(v148 + 40), 0LL);
      if ( *(_DWORD *)(v148 + 24) <= 2u )
        goto LABEL_1003;
      v152 = v151;
      v153 = System_Single__Parse(*(System_String_o **)(v148 + 48), 0LL);
      if ( *(_DWORD *)(v148 + 24) <= 3u )
        goto LABEL_1003;
      v154 = v153;
      v155 = System_Single__Parse(*(System_String_o **)(v148 + 56), 0LL);
      if ( *(_DWORD *)(v148 + 24) <= 4u )
        goto LABEL_1003;
      v156 = v155;
      v157 = System_Int32__Parse(*(System_String_o **)(v148 + 64), 0LL);
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      if ( !byte_4AB0C49 )
      {
        sub_1BAB41C(&TerminalSceneComponent_TypeInfo, v93);
        byte_4AB0C49 = 1;
      }
      updated = (__int64)TerminalSceneComponent_TypeInfo;
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        updated = (__int64)TerminalSceneComponent_TypeInfo;
      }
      v158 = **(_QWORD **)(updated + 184);
      if ( !v158 )
        goto LABEL_1002;
      updated = *(_QWORD *)(v158 + 264);
      if ( !updated )
        goto LABEL_1002;
      v671.fields.y = v152;
      v671.fields.z = v154;
      v159 = v156 * 0.001;
      v671.fields.x = v150;
      *(UnityEngine_Vector3_o *)&v161 = ScrTerminalMap__ConvertLocalToScreenPosition(
                                          (ScrTerminalMap_o *)updated,
                                          v671,
                                          0LL);
      v164 = v161;
      v165 = v162;
      v166 = v163;
      if ( v101->fields.id != 352 || *(int *)(v148 + 24) < 6 )
      {
        if ( !*v96 )
          goto LABEL_1002;
        v167 = *(MapCamera_o **)(*v96 + 152);
        v168 = (System_Action_o *)sub_1BAB668(System_Action_TypeInfo);
        System_Action___ctor(
          v168,
          (Il2CppObject *)v91,
          Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__12__,
          0LL);
        if ( !v167 )
          goto LABEL_1002;
        v169 = v167;
        v170 = v164;
        v171 = v165;
        v172 = v166;
        v173 = v159;
        v174 = v157;
        goto LABEL_934;
      }
      if ( !*v96 )
        goto LABEL_1002;
      v345 = *(MapCamera_o **)(*v96 + 152);
      *(_QWORD *)&v664.fields.hasValue = &v652;
      *(_QWORD *)&v664.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
      *(_QWORD *)&v652.fields.hasValue = 0LL;
      *(_QWORD *)&v652.fields.value.fields.y = 0LL;
      System_Nullable_Vector3____ctor(v664, *(UnityEngine_Vector3_o *)&v161, v160);
      if ( *(_DWORD *)(v148 + 24) <= 5u )
        goto LABEL_1003;
      v346 = System_Single__Parse(*(System_String_o **)(v148 + 72), 0LL);
      p_size = (System_Nullable_float__o)&size;
      size = 0LL;
      System_Nullable_float____ctor(p_size, v346, (const MethodInfo_366C7F8 *)Method_System_Nullable_float___ctor__);
      v347 = (System_Action_o *)sub_1BAB668(System_Action_TypeInfo);
      System_Action___ctor(
        v347,
        (Il2CppObject *)v91,
        Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__11__,
        0LL);
      if ( !v345 )
        goto LABEL_1002;
      v669 = v652;
      v662 = size;
      v348 = v345;
      v349 = v159;
      v350 = v157;
LABEL_975:
      MapCamera__StartAutoWork(v348, v349, v669, v662, v350, v347, 0LL);
      return;
    }
    if ( id <= 113 )
    {
      switch ( id )
      {
        case 'd':
          v136 = sub_1BAB668(QuestAfterAction_StateMain___c__DisplayClass16_1_TypeInfo);
          System_Object___ctor((Il2CppObject *)v136, 0LL);
          if ( !v136 )
            goto LABEL_1002;
          *(_QWORD *)(v136 + 24) = v91;
          sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v136 + 24), v91, v137, v138);
          v139 = *(_QWORD *)(v136 + 24);
          if ( !v139 )
            goto LABEL_1002;
          v140 = *(QuestAfterAction_o **)(v139 + 24);
          updated = System_Int32__Parse(v101->fields.param, 0LL);
          if ( !v140 )
            goto LABEL_1002;
          v141 = QuestAfterAction__GetMapComponent_object_(
                   v140,
                   0,
                   updated,
                   this,
                   (const MethodInfo_2F548A4 *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
          *(_QWORD *)(v136 + 16) = v141;
          sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v136 + 16), (int32_t)v141, v142, v143);
          v144 = *(UnityEngine_Object_o **)(v136 + 16);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Equality(v144, 0LL, 0LL) )
            return;
          v145 = *(SrcSpotBasePrefab_o **)(v136 + 16);
          v146 = (System_Action_o *)sub_1BAB668(System_Action_TypeInfo);
          System_Action___ctor(
            v146,
            (Il2CppObject *)v136,
            Method_QuestAfterAction_StateMain___c__DisplayClass16_1__UpdateAnim_b__0__,
            0LL);
          if ( !v145 )
            goto LABEL_1002;
          v147 = 2;
          goto LABEL_396;
        case 'e':
          v295 = sub_1BAB668(QuestAfterAction_StateMain___c__DisplayClass16_2_TypeInfo);
          System_Object___ctor((Il2CppObject *)v295, 0LL);
          if ( !v295 )
            goto LABEL_1002;
          *(_QWORD *)(v295 + 24) = v91;
          sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v295 + 24), v91, v296, v297);
          v298 = *(_QWORD *)(v295 + 24);
          if ( !v298 )
            goto LABEL_1002;
          v299 = *(QuestAfterAction_o **)(v298 + 24);
          updated = System_Int32__Parse(v101->fields.param, 0LL);
          if ( !v299 )
            goto LABEL_1002;
          v300 = QuestAfterAction__GetMapComponent_object_(
                   v299,
                   0,
                   updated,
                   this,
                   (const MethodInfo_2F548A4 *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
          *(_QWORD *)(v295 + 16) = v300;
          sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v295 + 16), (int32_t)v300, v301, v302);
          v303 = *(UnityEngine_Object_o **)(v295 + 16);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Equality(v303, 0LL, 0LL) )
            return;
          v145 = *(SrcSpotBasePrefab_o **)(v295 + 16);
          v146 = (System_Action_o *)sub_1BAB668(System_Action_TypeInfo);
          System_Action___ctor(
            v146,
            (Il2CppObject *)v295,
            Method_QuestAfterAction_StateMain___c__DisplayClass16_2__UpdateAnim_b__1__,
            0LL);
          if ( !v145 )
            goto LABEL_1002;
          v147 = 3;
LABEL_396:
          SrcSpotBasePrefab__SetState(v145, v147, v146, 0LL);
          return;
        case 'f':
          v304 = sub_1BAB668(QuestAfterAction_StateMain___c__DisplayClass16_3_TypeInfo);
          System_Object___ctor((Il2CppObject *)v304, 0LL);
          if ( !v304 )
            goto LABEL_1002;
          *(_QWORD *)(v304 + 24) = v91;
          v307 = v304 + 24;
          sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v304 + 24), v91, v305, v306);
          if ( !*(_QWORD *)(v304 + 24) )
            goto LABEL_1002;
          v308 = *(QuestAfterAction_o **)(*(_QWORD *)(v304 + 24) + 24LL);
          updated = System_Int32__Parse(v101->fields.param, 0LL);
          if ( !v308 )
            goto LABEL_1002;
          v309 = QuestAfterAction__GetMapComponent_object_(
                   v308,
                   0,
                   updated,
                   this,
                   (const MethodInfo_2F548A4 *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
          *(_QWORD *)(v304 + 16) = v309;
          v310 = (__int64 *)(v304 + 16);
          sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v304 + 16), (int32_t)v309, v311, v312);
          v313 = *(UnityEngine_Object_o **)(v304 + 16);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Equality(v313, 0LL, 0LL) )
            return;
          v314 = *(SrcSpotBasePrefab_o **)(v304 + 16);
          v315 = (System_Action_o *)sub_1BAB668(System_Action_TypeInfo);
          System_Action___ctor(
            v315,
            (Il2CppObject *)v304,
            Method_QuestAfterAction_StateMain___c__DisplayClass16_3__UpdateAnim_b__2__,
            0LL);
          if ( !v314 )
            goto LABEL_1002;
          SrcSpotBasePrefab__SetState(v314, 4, v315, 0LL);
          if ( !*(_QWORD *)v307 )
            goto LABEL_1002;
          updated = *(_QWORD *)(*(_QWORD *)v307 + 24LL);
          if ( !updated )
            goto LABEL_1002;
          v318 = *v310;
          *(_QWORD *)(updated + 184) = *v310;
          v319 = (ServantStatusBattleListViewItem_o *)(updated + 184);
          goto LABEL_418;
        case 'g':
          updated = (__int64)v101->fields.param;
          if ( !updated )
            goto LABEL_1002;
          updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
          if ( !updated )
            goto LABEL_1002;
          v320 = updated;
          if ( *(int *)(updated + 24) <= 1 )
            goto LABEL_829;
          v321 = (QuestAfterAction_o *)*v96;
          updated = System_Int32__Parse(*(System_String_o **)(updated + 32), 0LL);
          if ( !v321 )
            goto LABEL_1002;
          v322 = QuestAfterAction__GetMapComponent_object_(
                   v321,
                   0,
                   updated,
                   this,
                   (const MethodInfo_2F548A4 *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          updated = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v322, 0LL, 0LL);
          if ( (updated & 1) != 0 )
            return;
          if ( *(_DWORD *)(v320 + 24) <= 1u )
            goto LABEL_1003;
          updated = System_Int32__Parse(*(System_String_o **)(v320 + 40), 0LL);
          if ( !v322 )
            goto LABEL_1002;
          LODWORD(v322[14].klass) = updated;
          v323 = (System_Action_o *)sub_1BAB668(System_Action_TypeInfo);
          System_Action___ctor(v323, (Il2CppObject *)this, (intptr_t)this->klass->vtable._15_onEnd.methodPtr, 0LL);
          SrcSpotBasePrefab__SetState((SrcSpotBasePrefab_o *)v322, 5, v323, 0LL);
          updated = *v96;
          if ( !*v96 )
            goto LABEL_1002;
          *(_QWORD *)(updated + 184) = v322;
          v319 = (ServantStatusBattleListViewItem_o *)(updated + 184);
          LODWORD(v318) = (_DWORD)v322;
LABEL_418:
          sub_1BAB3C0(v319, v318, v316, v317);
          return;
        case 'h':
        case 'i':
        case 'j':
        case 'k':
        case 'l':
        case 'm':
          return;
        case 'n':
          v324 = (QuestAfterAction_o *)*v96;
          updated = System_Int32__Parse(v101->fields.param, 0LL);
          if ( !v324 )
            goto LABEL_1002;
          v325 = QuestAfterAction__GetMapComponent_object_(
                   v324,
                   0,
                   updated,
                   this,
                   (const MethodInfo_2F548A4 *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          updated = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v325, 0LL, 0LL);
          if ( (updated & 1) != 0 )
            return;
          if ( !v325 )
            goto LABEL_1002;
          SrcSpotBasePrefab__SetQaaScaleAnimQuick((SrcSpotBasePrefab_o *)v325, 0, 0LL);
          monitor = v325[14].monitor;
          if ( !monitor )
            goto LABEL_1002;
          monitor[5] = 0;
          v327 = (SrcSpotBasePrefab_o *)v325;
          v328 = 0;
          goto LABEL_441;
        case 'o':
          v329 = (QuestAfterAction_o *)*v96;
          updated = System_Int32__Parse(v101->fields.param, 0LL);
          if ( !v329 )
            goto LABEL_1002;
          v330 = QuestAfterAction__GetMapComponent_object_(
                   v329,
                   0,
                   updated,
                   this,
                   (const MethodInfo_2F548A4 *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          updated = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v330, 0LL, 0LL);
          if ( (updated & 1) != 0 )
            return;
          if ( !v330 )
            goto LABEL_1002;
          SrcSpotBasePrefab__SetQaaScaleAnimQuick((SrcSpotBasePrefab_o *)v330, 1, 0LL);
          SrcSpotBasePrefab__SetQaaColorAnimQuick((SrcSpotBasePrefab_o *)v330, 0, 0LL);
          v331 = v330[14].monitor;
          if ( !v331 )
            goto LABEL_1002;
          v331[5] = 2;
          goto LABEL_440;
        case 'p':
          v332 = (QuestAfterAction_o *)*v96;
          updated = System_Int32__Parse(v101->fields.param, 0LL);
          if ( !v332 )
            goto LABEL_1002;
          v330 = QuestAfterAction__GetMapComponent_object_(
                   v332,
                   0,
                   updated,
                   this,
                   (const MethodInfo_2F548A4 *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          updated = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v330, 0LL, 0LL);
          if ( (updated & 1) != 0 )
            return;
          if ( !v330 )
            goto LABEL_1002;
          SrcSpotBasePrefab__SetQaaScaleAnimQuick((SrcSpotBasePrefab_o *)v330, 1, 0LL);
          SrcSpotBasePrefab__SetQaaColorAnimQuick((SrcSpotBasePrefab_o *)v330, 1, 0LL);
          v333 = v330[14].monitor;
          if ( !v333 )
            goto LABEL_1002;
          v333[5] = 1;
LABEL_440:
          v328 = 1;
          v327 = (SrcSpotBasePrefab_o *)v330;
LABEL_441:
          SrcSpotBasePrefab__SetTouchType(v327, v328, 0LL);
          goto LABEL_18;
        case 'q':
          updated = (__int64)v101->fields.param;
          if ( !updated )
            goto LABEL_1002;
          updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
          if ( !updated )
            goto LABEL_1002;
          v334 = updated;
          if ( *(int *)(updated + 24) <= 1 )
            goto LABEL_829;
          v335 = (QuestAfterAction_o *)*v96;
          updated = System_Int32__Parse(*(System_String_o **)(updated + 32), 0LL);
          if ( !v335 )
            goto LABEL_1002;
          v336 = QuestAfterAction__GetMapComponent_object_(
                   v335,
                   0,
                   updated,
                   this,
                   (const MethodInfo_2F548A4 *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          updated = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v336, 0LL, 0LL);
          if ( (updated & 1) != 0 )
            return;
          if ( *(_DWORD *)(v334 + 24) <= 1u )
            goto LABEL_1003;
          updated = System_Int32__Parse(*(System_String_o **)(v334 + 40), 0LL);
          if ( !v336 )
            goto LABEL_1002;
          LODWORD(v336[14].klass) = updated;
          SrcSpotBasePrefab__UpdateDisp((SrcSpotBasePrefab_o *)v336, 1, 0LL);
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
        updated = (__int64)v101->fields.param;
        if ( !updated )
          goto LABEL_1002;
        updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
        if ( !updated )
          goto LABEL_1002;
        v121 = *(_QWORD *)(updated + 24);
        v122 = updated;
        if ( (int)v121 <= 0 )
          goto LABEL_829;
        if ( (int)v121 > 2 )
        {
          v399 = System_Single__Parse(*(System_String_o **)(updated + 48), 0LL);
          v121 = *(_QWORD *)(v122 + 24);
          v123 = v399 * 0.001;
        }
        else
        {
          v123 = 0.5;
        }
        sec = v123;
        if ( (int)v121 >= 2 )
        {
          updated = System_Int32__Parse(*(System_String_o **)(v122 + 40), 0LL);
          v121 = *(_QWORD *)(v122 + 24);
          v278 = updated;
        }
        else
        {
          v278 = 15;
        }
        if ( !(_DWORD)v121 )
          goto LABEL_1003;
        v402 = (QuestAfterAction_o *)*v96;
        updated = System_Int32__Parse(*(System_String_o **)(v122 + 32), 0LL);
        if ( !v402 )
          goto LABEL_1002;
        v404 = (UnityEngine_Object_o *)QuestAfterAction__GetMapGameObject(v402, 0, updated, this, v403);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Equality(v404, 0LL, 0LL) )
          return;
        v673 = GameObjectExtensions__GetLocalPosition((UnityEngine_GameObject_o *)v404, 0LL);
        v405 = v673.fields.x;
        v406 = v673.fields.y;
        v407 = v673.fields.z;
        if ( !this->fields.IsMapModel )
          goto LABEL_577;
        if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        if ( !byte_4AB0C49 )
        {
          sub_1BAB41C(&TerminalSceneComponent_TypeInfo, v93);
          byte_4AB0C49 = 1;
        }
        updated = (__int64)TerminalSceneComponent_TypeInfo;
        if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          updated = (__int64)TerminalSceneComponent_TypeInfo;
        }
        v408 = **(_QWORD **)(updated + 184);
        if ( !v408 )
          goto LABEL_1002;
        updated = *(_QWORD *)(v408 + 264);
        if ( !updated )
          goto LABEL_1002;
        v674.fields.x = v405;
        v674.fields.y = v406;
        v674.fields.z = v407;
        v675 = ScrTerminalMap__ConvertLocalToScreenPosition((ScrTerminalMap_o *)updated, v674, 0LL);
        v405 = v675.fields.x;
        v406 = v675.fields.y;
        v407 = v675.fields.z;
LABEL_577:
        if ( !FSUtility_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
        updated = FSUtility__IsUnderVista(0LL);
        if ( (updated & 1) != 0 )
          goto LABEL_909;
        if ( !*(_DWORD *)(v122 + 24) )
          goto LABEL_1003;
        v410 = *(System_String_o **)(v122 + 32);
        updated = System_String__op_Equality(v410, (System_String_o *)StringLiteral_1399/*"10703"*/, 0LL);
        if ( (updated & 1) != 0 )
        {
          v406 = v406 + -50.0;
        }
        else
        {
          updated = System_String__op_Equality(v410, (System_String_o *)StringLiteral_1475/*"30101"*/, 0LL);
          if ( (updated & 1) != 0 )
            v406 = v406 + -50.0;
        }
LABEL_909:
        v425 = *(_DWORD *)(v122 + 24);
        if ( v101->fields.id == 305 )
        {
LABEL_910:
          if ( v425 < 4 )
            goto LABEL_911;
          if ( v425 == 4 )
          {
            if ( !*v96 )
              goto LABEL_1002;
            v608 = *(MapCamera_o **)(*v96 + 152);
          }
          else
          {
            updated = System_Int32__Parse(*(System_String_o **)(v122 + 64), 0LL);
            if ( !*v96 )
              goto LABEL_1002;
            v608 = *(MapCamera_o **)(*v96 + 152);
            if ( (int)updated >= 1 )
            {
              *(_QWORD *)&v665.fields.hasValue = &v652;
              v611 = v405;
              v612 = v406;
              *(_QWORD *)&v665.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
              v613 = v407;
              v652 = (System_Nullable_Vector3__o)0LL;
LABEL_966:
              System_Nullable_Vector3____ctor(v665, *(UnityEngine_Vector3_o *)&v611, v409);
              if ( *(_DWORD *)(v122 + 24) <= 3u )
                goto LABEL_1003;
              v629 = System_Single__Parse(*(System_String_o **)(v122 + 56), 0LL);
              v658 = (System_Nullable_float__o)&size;
              size = 0LL;
              System_Nullable_float____ctor(
                v658,
                v629,
                (const MethodInfo_366C7F8 *)Method_System_Nullable_float___ctor__);
              if ( !v608 )
                goto LABEL_1002;
              v670 = v652;
              v663 = size;
              v630 = sec;
              v631 = v608;
              goto LABEL_969;
            }
          }
          *(_QWORD *)&v666.fields.hasValue = &v652;
          v614 = v405;
          v615 = v406;
          *(_QWORD *)&v666.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
          v616 = v407;
          v652 = (System_Nullable_Vector3__o)0LL;
LABEL_971:
          System_Nullable_Vector3____ctor(v666, *(UnityEngine_Vector3_o *)&v614, v409);
          if ( *(_DWORD *)(v122 + 24) <= 3u )
            goto LABEL_1003;
          v632 = System_Single__Parse(*(System_String_o **)(v122 + 56), 0LL);
          v659 = (System_Nullable_float__o)&size;
          size = 0LL;
          System_Nullable_float____ctor(v659, v632, (const MethodInfo_366C7F8 *)Method_System_Nullable_float___ctor__);
          v347 = (System_Action_o *)sub_1BAB668(System_Action_TypeInfo);
          System_Action___ctor(v347, (Il2CppObject *)this, (intptr_t)this->klass->vtable._15_onEnd.methodPtr, 0LL);
          if ( !v608 )
            goto LABEL_1002;
          v669 = v652;
          v662 = size;
          v349 = sec;
          v348 = v608;
          goto LABEL_974;
        }
LABEL_618:
        if ( v425 < 4 )
        {
LABEL_911:
          if ( !*v96 )
            goto LABEL_1002;
          v427 = *(MapCamera_o **)(*v96 + 152);
          goto LABEL_913;
        }
        updated = System_Int32__Parse(*(System_String_o **)(v122 + 56), 0LL);
        v426 = *v96;
        if ( !*v96 )
          goto LABEL_1002;
        v427 = *(MapCamera_o **)(v426 + 152);
        if ( (int)updated < 1 )
        {
LABEL_913:
          v168 = (System_Action_o *)sub_1BAB668(System_Action_TypeInfo);
          System_Action___ctor(v168, (Il2CppObject *)this, (intptr_t)this->klass->vtable._15_onEnd.methodPtr, 0LL);
          if ( !v427 )
            goto LABEL_1002;
          v169 = v427;
          v170 = v405;
          v171 = v406;
          v172 = v407;
LABEL_932:
          v173 = sec;
LABEL_933:
          v174 = v278;
LABEL_934:
          MapCamera__StartAutoMove(v169, *(UnityEngine_Vector3_o *)&v170, v173, v174, v168, 0LL);
          return;
        }
        if ( !v427 )
          goto LABEL_1002;
        v428 = *(MapCamera_o **)(v426 + 152);
        v429 = v405;
        v430 = v406;
        v431 = v407;
        goto LABEL_943;
      case 301:
      case 306:
        updated = (__int64)v101->fields.param;
        if ( !updated )
          goto LABEL_1002;
        updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
        if ( !updated )
          goto LABEL_1002;
        v271 = *(_QWORD *)(updated + 24);
        v122 = updated;
        if ( (int)v271 <= 0 )
          goto LABEL_829;
        if ( (int)v271 > 2 )
        {
          v400 = System_Single__Parse(*(System_String_o **)(updated + 48), 0LL);
          v271 = *(_QWORD *)(v122 + 24);
          v272 = v400 * 0.001;
        }
        else
        {
          v272 = 0.5;
        }
        sec = v272;
        if ( (int)v271 >= 2 )
        {
          updated = System_Int32__Parse(*(System_String_o **)(v122 + 40), 0LL);
          v271 = *(_QWORD *)(v122 + 24);
          v278 = updated;
        }
        else
        {
          v278 = 15;
        }
        if ( !(_DWORD)v271 )
          goto LABEL_1003;
        v411 = (QuestAfterAction_o *)*v96;
        updated = System_Int32__Parse(*(System_String_o **)(v122 + 32), 0LL);
        if ( !v411 )
          goto LABEL_1002;
        v413 = (UnityEngine_Object_o *)QuestAfterAction__GetMapGameObject(v411, 1, updated, this, v412);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        updated = UnityEngine_Object__op_Equality(v413, 0LL, 0LL);
        if ( (updated & 1) != 0 )
          return;
        if ( this->fields.IsMapModel )
        {
          if ( !v413 )
            goto LABEL_1002;
          updated = (__int64)UnityEngine_GameObject__GetComponent_object_(
                               (UnityEngine_GameObject_o *)v413,
                               (const MethodInfo_2F13970 *)Method_UnityEngine_GameObject_GetComponent_ModelLineComponent___);
          if ( !updated )
            goto LABEL_1002;
          Position = GameObjectExtensions__GetPosition((UnityEngine_GameObject_o *)*(_QWORD *)(updated + 32), 0LL);
          v414 = Position.fields.x;
          v415 = Position.fields.y;
          v416 = Position.fields.z;
          if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          if ( !byte_4AB0C49 )
          {
            sub_1BAB41C(&TerminalSceneComponent_TypeInfo, v93);
            byte_4AB0C49 = 1;
          }
          updated = (__int64)TerminalSceneComponent_TypeInfo;
          if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            updated = (__int64)TerminalSceneComponent_TypeInfo;
          }
          v417 = **(_QWORD **)(updated + 184);
          if ( !v417 )
            goto LABEL_1002;
          updated = *(_QWORD *)(v417 + 264);
          if ( !updated )
            goto LABEL_1002;
          v677.fields.x = v414;
          v677.fields.y = v415;
          v677.fields.z = v416;
          *(UnityEngine_Vector3_o *)&v418 = ScrTerminalMap__ConvertWorldToScreenPosition(
                                              (ScrTerminalMap_o *)updated,
                                              v677,
                                              0LL);
        }
        else
        {
          *(UnityEngine_Vector3_o *)&v418 = GameObjectExtensions__GetLocalPosition(
                                              (UnityEngine_GameObject_o *)v413,
                                              0LL);
        }
        v577 = v418;
        v578 = v419;
        v579 = v420;
        if ( !FSUtility_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
        updated = FSUtility__IsUnderVista(0LL);
        if ( (updated & 1) != 0 )
          goto LABEL_921;
        if ( !*(_DWORD *)(v122 + 24) )
          goto LABEL_1003;
        v580 = *(System_String_o **)(v122 + 32);
        updated = System_String__op_Equality(v580, (System_String_o *)StringLiteral_1399/*"10703"*/, 0LL);
        if ( (updated & 1) != 0 )
        {
          v578 = v578 + -95.0;
        }
        else
        {
          updated = System_String__op_Equality(v580, (System_String_o *)StringLiteral_1476/*"30102"*/, 0LL);
          if ( (updated & 1) != 0 )
            v578 = v578 + 45.0;
        }
LABEL_921:
        v609 = *(_DWORD *)(v122 + 24);
        if ( v101->fields.id == 306 )
        {
          if ( v609 >= 4 )
          {
            if ( v609 == 4 )
            {
              if ( !*v96 )
                goto LABEL_1002;
              v608 = *(MapCamera_o **)(*v96 + 152);
            }
            else
            {
              updated = System_Int32__Parse(*(System_String_o **)(v122 + 64), 0LL);
              if ( !*v96 )
                goto LABEL_1002;
              v608 = *(MapCamera_o **)(*v96 + 152);
              if ( (int)updated >= 1 )
              {
                v652 = (System_Nullable_Vector3__o)0LL;
                *(_QWORD *)&v665.fields.hasValue = &v652;
                v611 = v577;
                *(_QWORD *)&v665.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
                v612 = v578;
                v613 = v579;
                goto LABEL_966;
              }
            }
            v652 = (System_Nullable_Vector3__o)0LL;
            *(_QWORD *)&v666.fields.hasValue = &v652;
            v614 = v577;
            *(_QWORD *)&v666.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
            v615 = v578;
            v616 = v579;
            goto LABEL_971;
          }
          goto LABEL_928;
        }
        if ( v609 < 4 )
        {
LABEL_928:
          if ( !*v96 )
            goto LABEL_1002;
          v610 = *(MapCamera_o **)(*v96 + 152);
LABEL_930:
          v168 = (System_Action_o *)sub_1BAB668(System_Action_TypeInfo);
          System_Action___ctor(v168, (Il2CppObject *)this, (intptr_t)this->klass->vtable._15_onEnd.methodPtr, 0LL);
          if ( !v610 )
            goto LABEL_1002;
          v169 = v610;
          v170 = v577;
          v171 = v578;
          v172 = v579;
          goto LABEL_932;
        }
        updated = System_Int32__Parse(*(System_String_o **)(v122 + 56), 0LL);
        v617 = *v96;
        if ( !*v96 )
          goto LABEL_1002;
        v610 = *(MapCamera_o **)(v617 + 152);
        if ( (int)updated < 1 )
          goto LABEL_930;
        if ( !v610 )
          goto LABEL_1002;
        v428 = *(MapCamera_o **)(v617 + 152);
        v429 = v577;
        v430 = v578;
        v431 = v579;
LABEL_943:
        v618 = sec;
        goto LABEL_944;
      case 302:
      case 307:
        updated = (__int64)v101->fields.param;
        if ( !updated )
          goto LABEL_1002;
        updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
        if ( !updated )
          goto LABEL_1002;
        v273 = *(_QWORD *)(updated + 24);
        v122 = updated;
        if ( (int)v273 <= 0 )
          goto LABEL_829;
        if ( (int)v273 > 2 )
        {
          v401 = System_Single__Parse(*(System_String_o **)(updated + 48), 0LL);
          v273 = *(_QWORD *)(v122 + 24);
          v274 = v401 * 0.001;
        }
        else
        {
          v274 = 0.5;
        }
        sec = v274;
        if ( (int)v273 >= 2 )
        {
          updated = System_Int32__Parse(*(System_String_o **)(v122 + 40), 0LL);
          v273 = *(_QWORD *)(v122 + 24);
          v278 = updated;
        }
        else
        {
          v278 = 15;
        }
        if ( !(_DWORD)v273 )
          goto LABEL_1003;
        v421 = (QuestAfterAction_o *)*v96;
        updated = System_Int32__Parse(*(System_String_o **)(v122 + 32), 0LL);
        if ( !v421 )
          goto LABEL_1002;
        v423 = (UnityEngine_Object_o *)QuestAfterAction__GetMapGameObject(v421, 2, updated, this, v422);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Equality(v423, 0LL, 0LL) )
          return;
        v678 = GameObjectExtensions__GetLocalPosition((UnityEngine_GameObject_o *)v423, 0LL);
        v405 = v678.fields.x;
        v406 = v678.fields.y;
        v407 = v678.fields.z;
        if ( !this->fields.IsMapModel )
          goto LABEL_617;
        if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        if ( !byte_4AB0C49 )
        {
          sub_1BAB41C(&TerminalSceneComponent_TypeInfo, v93);
          byte_4AB0C49 = 1;
        }
        updated = (__int64)TerminalSceneComponent_TypeInfo;
        if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          updated = (__int64)TerminalSceneComponent_TypeInfo;
        }
        v424 = **(_QWORD **)(updated + 184);
        if ( !v424 )
          goto LABEL_1002;
        updated = *(_QWORD *)(v424 + 264);
        if ( !updated )
          goto LABEL_1002;
        v679.fields.x = v405;
        v679.fields.y = v406;
        v679.fields.z = v407;
        v680 = ScrTerminalMap__ConvertLocalToScreenPosition((ScrTerminalMap_o *)updated, v679, 0LL);
        v405 = v680.fields.x;
        v406 = v680.fields.y;
        v407 = v680.fields.z;
LABEL_617:
        v425 = *(_DWORD *)(v122 + 24);
        if ( v101->fields.id != 307 )
          goto LABEL_618;
        goto LABEL_910;
      case 303:
      case 308:
        updated = (__int64)v101->fields.param;
        if ( !updated )
          goto LABEL_1002;
        updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
        if ( !updated )
          goto LABEL_1002;
        v275 = updated;
        if ( *(int *)(updated + 24) < 4 )
          goto LABEL_829;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_4AB2BB1 )
        {
          sub_1BAB41C(&TerminalPramsManager_TypeInfo, v93);
          byte_4AB2BB1 = 1;
        }
        updated = (__int64)TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          updated = (__int64)TerminalPramsManager_TypeInfo;
        }
        if ( *(_BYTE *)(*(_QWORD *)(updated + 184) + 105LL) )
          goto LABEL_829;
        if ( *(_DWORD *)(v275 + 24) <= 2u )
          goto LABEL_1003;
        v276 = System_Single__Parse(*(System_String_o **)(v275 + 48), 0LL) * 0.001;
        v277 = v276 >= 0.0 ? v276 : 0.5;
        if ( *(_DWORD *)(v275 + 24) <= 3u )
          goto LABEL_1003;
        v278 = System_Int32__Parse(*(System_String_o **)(v275 + 56), 0LL);
        if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        if ( !byte_4AB0C49 )
        {
          sub_1BAB41C(&TerminalSceneComponent_TypeInfo, v93);
          byte_4AB0C49 = 1;
        }
        updated = (__int64)TerminalSceneComponent_TypeInfo;
        if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          updated = (__int64)TerminalSceneComponent_TypeInfo;
        }
        v279 = **(_QWORD **)(updated + 184);
        if ( !v279 )
          goto LABEL_1002;
        if ( !*(_DWORD *)(v275 + 24) )
          goto LABEL_1003;
        v280 = *(ScrTerminalMap_o **)(v279 + 264);
        v281 = System_Single__Parse(*(System_String_o **)(v275 + 32), 0LL);
        if ( *(_DWORD *)(v275 + 24) <= 1u )
          goto LABEL_1003;
        v282 = v281;
        v283 = System_Single__Parse(*(System_String_o **)(v275 + 40), 0LL);
        if ( !v280 )
          goto LABEL_1002;
        v672 = ScrTerminalMap__LocalPosFromCoord(v280, v282, v283, 0.0, 0.0, 0LL);
        v285 = *(_DWORD *)(v275 + 24);
        v286 = v672.fields.x;
        v287 = v672.fields.y;
        v288 = v672.fields.z;
        if ( v101->fields.id == 308 )
        {
          if ( v285 >= 5 )
          {
            if ( v285 == 5 )
            {
              if ( !*v96 )
                goto LABEL_1002;
              v289 = *(MapCamera_o **)(*v96 + 152);
            }
            else
            {
              updated = System_Int32__Parse(*(System_String_o **)(v275 + 72), 0LL);
              if ( !*v96 )
                goto LABEL_1002;
              v289 = *(MapCamera_o **)(*v96 + 152);
              if ( (int)updated >= 1 )
              {
                *(_QWORD *)&v667.fields.hasValue = &v652;
                v686.fields.x = v286;
                v686.fields.y = v287;
                *(_QWORD *)&v667.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
                v686.fields.z = v288;
                v652 = (System_Nullable_Vector3__o)0LL;
                System_Nullable_Vector3____ctor(v667, v686, v284);
                if ( *(_DWORD *)(v275 + 24) <= 4u )
                  goto LABEL_1003;
                v647 = System_Single__Parse(*(System_String_o **)(v275 + 64), 0LL);
                v660 = (System_Nullable_float__o)&size;
                size = 0LL;
                System_Nullable_float____ctor(
                  v660,
                  v647,
                  (const MethodInfo_366C7F8 *)Method_System_Nullable_float___ctor__);
                if ( !v289 )
                  goto LABEL_1002;
                v670 = v652;
                v663 = size;
                v631 = v289;
                v630 = v277;
LABEL_969:
                MapCamera__StartAutoWork(v631, v630, v670, v663, v278, 0LL, 0LL);
                goto LABEL_829;
              }
            }
            *(_QWORD *)&v668.fields.hasValue = &v652;
            v687.fields.x = v286;
            v687.fields.y = v287;
            *(_QWORD *)&v668.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
            v687.fields.z = v288;
            v652 = (System_Nullable_Vector3__o)0LL;
            System_Nullable_Vector3____ctor(v668, v687, v284);
            if ( *(_DWORD *)(v275 + 24) <= 4u )
              goto LABEL_1003;
            v648 = System_Single__Parse(*(System_String_o **)(v275 + 64), 0LL);
            v661 = (System_Nullable_float__o)&size;
            size = 0LL;
            System_Nullable_float____ctor(v661, v648, (const MethodInfo_366C7F8 *)Method_System_Nullable_float___ctor__);
            v347 = (System_Action_o *)sub_1BAB668(System_Action_TypeInfo);
            System_Action___ctor(v347, (Il2CppObject *)this, (intptr_t)this->klass->vtable._15_onEnd.methodPtr, 0LL);
            if ( !v289 )
              goto LABEL_1002;
            v669 = v652;
            v662 = size;
            v348 = v289;
            v349 = v277;
LABEL_974:
            v350 = v278;
            goto LABEL_975;
          }
        }
        else if ( v285 >= 5 )
        {
          updated = System_Int32__Parse(*(System_String_o **)(v275 + 64), 0LL);
          v628 = *v96;
          if ( !*v96 )
            goto LABEL_1002;
          v607 = *(MapCamera_o **)(v628 + 152);
          if ( (int)updated >= 1 )
          {
            if ( !v607 )
              goto LABEL_1002;
            v428 = *(MapCamera_o **)(v628 + 152);
            v429 = v286;
            v430 = v287;
            v431 = v288;
            v618 = v277;
LABEL_944:
            MapCamera__StartAutoMove(v428, *(UnityEngine_Vector3_o *)&v429, v618, v278, 0LL, 0LL);
            goto LABEL_829;
          }
LABEL_905:
          v168 = (System_Action_o *)sub_1BAB668(System_Action_TypeInfo);
          System_Action___ctor(v168, (Il2CppObject *)this, (intptr_t)this->klass->vtable._15_onEnd.methodPtr, 0LL);
          if ( !v607 )
            goto LABEL_1002;
          v169 = v607;
          v170 = v286;
          v171 = v287;
          v172 = v288;
          v173 = v277;
          goto LABEL_933;
        }
        if ( !*v96 )
          goto LABEL_1002;
        v607 = *(MapCamera_o **)(*v96 + 152);
        goto LABEL_905;
      case 304:
        updated = (__int64)v101->fields.param;
        if ( !updated )
          goto LABEL_1002;
        updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
        if ( !updated )
          goto LABEL_1002;
        v351 = *(_DWORD *)(updated + 24);
        v352 = updated;
        if ( v351 <= 1 )
          goto LABEL_829;
        v353 = System_Single__Parse(*(System_String_o **)(updated + 32), 0LL);
        if ( *(_DWORD *)(v352 + 24) <= 1u )
          goto LABEL_1003;
        v354 = v353;
        v355 = System_Single__Parse(*(System_String_o **)(v352 + 40), 0LL);
        if ( !*v96 )
          goto LABEL_1002;
        v356 = *(MapCamera_o **)(*v96 + 152);
        v357 = v355 * 0.001;
        if ( v357 >= 0.0 )
          v358 = v357;
        else
          v358 = 0.5;
        if ( v351 < 3 )
        {
          v359 = 5;
        }
        else
        {
          if ( *(_DWORD *)(v352 + 24) <= 2u )
            goto LABEL_1003;
          v359 = System_Int32__Parse(*(System_String_o **)(v352 + 48), 0LL);
        }
        v576 = (System_Action_o *)sub_1BAB668(System_Action_TypeInfo);
        System_Action___ctor(
          v576,
          (Il2CppObject *)v91,
          Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__9__,
          0LL);
        if ( !v356 )
          goto LABEL_1002;
        MapCamera__StartAutoZoom(v356, v354, v358, v359, v576, 0LL);
        return;
      default:
        switch ( id )
        {
          case 200:
            if ( this->fields.IsMapModel )
            {
              v175 = sub_1BAB668(QuestAfterAction_StateMain___c__DisplayClass16_4_TypeInfo);
              System_Object___ctor((Il2CppObject *)v175, 0LL);
              if ( !v175 )
                goto LABEL_1002;
              *(_QWORD *)(v175 + 24) = v91;
              sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v175 + 24), v91, v176, v177);
              v178 = *(_QWORD *)(v175 + 24);
              if ( !v178 )
                goto LABEL_1002;
              v179 = *(QuestAfterAction_o **)(v178 + 24);
              updated = System_Int32__Parse(v101->fields.param, 0LL);
              if ( !v179 )
                goto LABEL_1002;
              v180 = QuestAfterAction__GetMapComponent_object_(
                       v179,
                       1,
                       updated,
                       this,
                       (const MethodInfo_2F548A4 *)Method_QuestAfterAction_GetMapComponent_ModelLineComponent___);
              *(_QWORD *)(v175 + 16) = v180;
              sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v175 + 16), (int32_t)v180, v181, v182);
              v183 = *(UnityEngine_Object_o **)(v175 + 16);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              if ( !UnityEngine_Object__op_Equality(v183, 0LL, 0LL) )
              {
                v184 = *(ModelLineComponent_o **)(v175 + 16);
                v185 = (System_Action_o *)sub_1BAB668(System_Action_TypeInfo);
                System_Action___ctor(
                  v185,
                  (Il2CppObject *)v175,
                  Method_QuestAfterAction_StateMain___c__DisplayClass16_4__UpdateAnim_b__3__,
                  0LL);
                if ( !v184 )
                  goto LABEL_1002;
                v187 = 2;
                goto LABEL_512;
              }
            }
            else
            {
              v537 = sub_1BAB668(QuestAfterAction_StateMain___c__DisplayClass16_5_TypeInfo);
              System_Object___ctor((Il2CppObject *)v537, 0LL);
              if ( !v537 )
                goto LABEL_1002;
              *(_QWORD *)(v537 + 24) = v91;
              sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v537 + 24), v91, v538, v539);
              v540 = *(_QWORD *)(v537 + 24);
              if ( !v540 )
                goto LABEL_1002;
              v541 = *(QuestAfterAction_o **)(v540 + 24);
              updated = System_Int32__Parse(v101->fields.param, 0LL);
              if ( !v541 )
                goto LABEL_1002;
              v542 = QuestAfterAction__GetMapComponent_object_(
                       v541,
                       1,
                       updated,
                       this,
                       (const MethodInfo_2F548A4 *)Method_QuestAfterAction_GetMapComponent_srcLineSprite___);
              *(_QWORD *)(v537 + 16) = v542;
              sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v537 + 16), (int32_t)v542, v543, v544);
              v545 = *(UnityEngine_Object_o **)(v537 + 16);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              if ( !UnityEngine_Object__op_Equality(v545, 0LL, 0LL) )
              {
                v546 = *(srcLineSprite_o **)(v537 + 16);
                v547 = (System_Action_o *)sub_1BAB668(System_Action_TypeInfo);
                System_Action___ctor(
                  v547,
                  (Il2CppObject *)v537,
                  Method_QuestAfterAction_StateMain___c__DisplayClass16_5__UpdateAnim_b__4__,
                  0LL);
                if ( !v546 )
                  goto LABEL_1002;
                v548 = 2;
                goto LABEL_798;
              }
            }
            return;
          case 201:
            if ( this->fields.IsMapModel )
            {
              v360 = sub_1BAB668(QuestAfterAction_StateMain___c__DisplayClass16_6_TypeInfo);
              System_Object___ctor((Il2CppObject *)v360, 0LL);
              if ( !v360 )
                goto LABEL_1002;
              *(_QWORD *)(v360 + 24) = v91;
              sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v360 + 24), v91, v361, v362);
              v363 = *(_QWORD *)(v360 + 24);
              if ( !v363 )
                goto LABEL_1002;
              v364 = *(QuestAfterAction_o **)(v363 + 24);
              updated = System_Int32__Parse(v101->fields.param, 0LL);
              if ( !v364 )
                goto LABEL_1002;
              v365 = QuestAfterAction__GetMapComponent_object_(
                       v364,
                       1,
                       updated,
                       this,
                       (const MethodInfo_2F548A4 *)Method_QuestAfterAction_GetMapComponent_ModelLineComponent___);
              *(_QWORD *)(v360 + 16) = v365;
              sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v360 + 16), (int32_t)v365, v366, v367);
              v368 = *(UnityEngine_Object_o **)(v360 + 16);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              if ( !UnityEngine_Object__op_Equality(v368, 0LL, 0LL) )
              {
                v184 = *(ModelLineComponent_o **)(v360 + 16);
                v185 = (System_Action_o *)sub_1BAB668(System_Action_TypeInfo);
                System_Action___ctor(
                  v185,
                  (Il2CppObject *)v360,
                  Method_QuestAfterAction_StateMain___c__DisplayClass16_6__UpdateAnim_b__5__,
                  0LL);
                if ( !v184 )
                  goto LABEL_1002;
                v187 = 3;
                goto LABEL_512;
              }
            }
            else
            {
              v549 = sub_1BAB668(QuestAfterAction_StateMain___c__DisplayClass16_7_TypeInfo);
              System_Object___ctor((Il2CppObject *)v549, 0LL);
              if ( !v549 )
                goto LABEL_1002;
              *(_QWORD *)(v549 + 24) = v91;
              sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v549 + 24), v91, v550, v551);
              v552 = *(_QWORD *)(v549 + 24);
              if ( !v552 )
                goto LABEL_1002;
              v553 = *(QuestAfterAction_o **)(v552 + 24);
              updated = System_Int32__Parse(v101->fields.param, 0LL);
              if ( !v553 )
                goto LABEL_1002;
              v554 = QuestAfterAction__GetMapComponent_object_(
                       v553,
                       1,
                       updated,
                       this,
                       (const MethodInfo_2F548A4 *)Method_QuestAfterAction_GetMapComponent_srcLineSprite___);
              *(_QWORD *)(v549 + 16) = v554;
              sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v549 + 16), (int32_t)v554, v555, v556);
              v557 = *(UnityEngine_Object_o **)(v549 + 16);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              if ( !UnityEngine_Object__op_Equality(v557, 0LL, 0LL) )
              {
                v546 = *(srcLineSprite_o **)(v549 + 16);
                v547 = (System_Action_o *)sub_1BAB668(System_Action_TypeInfo);
                System_Action___ctor(
                  v547,
                  (Il2CppObject *)v549,
                  Method_QuestAfterAction_StateMain___c__DisplayClass16_7__UpdateAnim_b__6__,
                  0LL);
                if ( !v546 )
                  goto LABEL_1002;
                v548 = 3;
                goto LABEL_798;
              }
            }
            return;
          case 202:
            if ( this->fields.IsMapModel )
            {
              v369 = sub_1BAB668(QuestAfterAction_StateMain___c__DisplayClass16_8_TypeInfo);
              System_Object___ctor((Il2CppObject *)v369, 0LL);
              if ( !v369 )
                goto LABEL_1002;
              *(_QWORD *)(v369 + 24) = v91;
              sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v369 + 24), v91, v370, v371);
              v372 = *(_QWORD *)(v369 + 24);
              if ( !v372 )
                goto LABEL_1002;
              v373 = *(QuestAfterAction_o **)(v372 + 24);
              updated = System_Int32__Parse(v101->fields.param, 0LL);
              if ( !v373 )
                goto LABEL_1002;
              v374 = QuestAfterAction__GetMapComponent_object_(
                       v373,
                       1,
                       updated,
                       this,
                       (const MethodInfo_2F548A4 *)Method_QuestAfterAction_GetMapComponent_ModelLineComponent___);
              *(_QWORD *)(v369 + 16) = v374;
              sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v369 + 16), (int32_t)v374, v375, v376);
              v377 = *(UnityEngine_Object_o **)(v369 + 16);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              if ( !UnityEngine_Object__op_Equality(v377, 0LL, 0LL) )
              {
                v184 = *(ModelLineComponent_o **)(v369 + 16);
                v185 = (System_Action_o *)sub_1BAB668(System_Action_TypeInfo);
                System_Action___ctor(
                  v185,
                  (Il2CppObject *)v369,
                  Method_QuestAfterAction_StateMain___c__DisplayClass16_8__UpdateAnim_b__7__,
                  0LL);
                if ( !v184 )
                  goto LABEL_1002;
                v187 = 4;
LABEL_512:
                ModelLineComponent__SetState(v184, v187, v185, v186);
              }
            }
            else
            {
              v558 = sub_1BAB668(QuestAfterAction_StateMain___c__DisplayClass16_9_TypeInfo);
              System_Object___ctor((Il2CppObject *)v558, 0LL);
              if ( !v558 )
                goto LABEL_1002;
              *(_QWORD *)(v558 + 24) = v91;
              sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v558 + 24), v91, v559, v560);
              v561 = *(_QWORD *)(v558 + 24);
              if ( !v561 )
                goto LABEL_1002;
              v562 = *(QuestAfterAction_o **)(v561 + 24);
              updated = System_Int32__Parse(v101->fields.param, 0LL);
              if ( !v562 )
                goto LABEL_1002;
              v563 = QuestAfterAction__GetMapComponent_object_(
                       v562,
                       1,
                       updated,
                       this,
                       (const MethodInfo_2F548A4 *)Method_QuestAfterAction_GetMapComponent_srcLineSprite___);
              *(_QWORD *)(v558 + 16) = v563;
              sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v558 + 16), (int32_t)v563, v564, v565);
              v566 = *(UnityEngine_Object_o **)(v558 + 16);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              if ( !UnityEngine_Object__op_Equality(v566, 0LL, 0LL) )
              {
                v546 = *(srcLineSprite_o **)(v558 + 16);
                v547 = (System_Action_o *)sub_1BAB668(System_Action_TypeInfo);
                System_Action___ctor(
                  v547,
                  (Il2CppObject *)v558,
                  Method_QuestAfterAction_StateMain___c__DisplayClass16_9__UpdateAnim_b__8__,
                  0LL);
                if ( !v546 )
                  goto LABEL_1002;
                v548 = 4;
LABEL_798:
                srcLineSprite__SetState(v546, v548, v547, 0LL);
              }
            }
            return;
          case 203:
            IsMapModel = this->fields.IsMapModel;
            v379 = (QuestAfterAction_o *)*v96;
            updated = System_Int32__Parse(v101->fields.param, 0LL);
            if ( !v379 )
              goto LABEL_1002;
            if ( IsMapModel )
            {
              v380 = (UnityEngine_Object_o *)QuestAfterAction__GetMapComponent_object_(
                                               v379,
                                               1,
                                               updated,
                                               this,
                                               (const MethodInfo_2F548A4 *)Method_QuestAfterAction_GetMapComponent_ModelLineComponent___);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              updated = UnityEngine_Object__op_Equality(v380, 0LL, 0LL);
              if ( (updated & 1) != 0 )
                return;
              if ( !v380 )
                goto LABEL_1002;
              ModelLineComponent__SetQuestAfterActionScaleAnim_34110212((ModelLineComponent_o *)v380, 0, 0.0, v381);
              v382 = v380[3].klass;
              if ( !v382 )
                goto LABEL_1002;
            }
            else
            {
              v567 = (UnityEngine_Object_o *)QuestAfterAction__GetMapComponent_object_(
                                               v379,
                                               1,
                                               updated,
                                               this,
                                               (const MethodInfo_2F548A4 *)Method_QuestAfterAction_GetMapComponent_srcLineSprite___);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              updated = UnityEngine_Object__op_Equality(v567, 0LL, 0LL);
              if ( (updated & 1) != 0 )
                return;
              if ( !v567 )
                goto LABEL_1002;
              srcLineSprite__SetQaaScaleAnimQuick((srcLineSprite_o *)v567, 0, 0LL);
              v382 = v567[5].monitor;
              if ( !v382 )
                goto LABEL_1002;
            }
            goto LABEL_872;
          case 204:
            v383 = this->fields.IsMapModel;
            v384 = (QuestAfterAction_o *)*v96;
            updated = System_Int32__Parse(v101->fields.param, 0LL);
            if ( !v384 )
              goto LABEL_1002;
            if ( v383 )
            {
              v385 = (UnityEngine_Object_o *)QuestAfterAction__GetMapComponent_object_(
                                               v384,
                                               1,
                                               updated,
                                               this,
                                               (const MethodInfo_2F548A4 *)Method_QuestAfterAction_GetMapComponent_ModelLineComponent___);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              updated = UnityEngine_Object__op_Equality(v385, 0LL, 0LL);
              if ( (updated & 1) != 0 )
                return;
              if ( !v385 )
                goto LABEL_1002;
              ModelLineComponent__SetQuestAfterActionScaleAnim_34110212((ModelLineComponent_o *)v385, 1, 0.0, v386);
              ModelLineComponent__SetQuestAfterActionColorAnim_34110688((ModelLineComponent_o *)v385, 0, 0.0, v387);
              v388 = v385[3].klass;
              if ( !v388 )
                goto LABEL_1002;
            }
            else
            {
              v568 = (UnityEngine_Object_o *)QuestAfterAction__GetMapComponent_object_(
                                               v384,
                                               1,
                                               updated,
                                               this,
                                               (const MethodInfo_2F548A4 *)Method_QuestAfterAction_GetMapComponent_srcLineSprite___);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              updated = UnityEngine_Object__op_Equality(v568, 0LL, 0LL);
              if ( (updated & 1) != 0 )
                return;
              if ( !v568 )
                goto LABEL_1002;
              srcLineSprite__SetQaaScaleAnimQuick((srcLineSprite_o *)v568, 1, 0LL);
              srcLineSprite__SetQaaColorAnimQuick((srcLineSprite_o *)v568, 0, 0LL);
              v388 = v568[5].monitor;
              if ( !v388 )
                goto LABEL_1002;
            }
            v569 = 2;
            goto LABEL_817;
          case 205:
            v389 = this->fields.IsMapModel;
            v390 = (QuestAfterAction_o *)*v96;
            updated = System_Int32__Parse(v101->fields.param, 0LL);
            if ( !v390 )
              goto LABEL_1002;
            if ( v389 )
            {
              v391 = (UnityEngine_Object_o *)QuestAfterAction__GetMapComponent_object_(
                                               v390,
                                               1,
                                               updated,
                                               this,
                                               (const MethodInfo_2F548A4 *)Method_QuestAfterAction_GetMapComponent_ModelLineComponent___);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              updated = UnityEngine_Object__op_Equality(v391, 0LL, 0LL);
              if ( (updated & 1) != 0 )
                return;
              if ( !v391 )
                goto LABEL_1002;
              ModelLineComponent__SetQuestAfterActionScaleAnim_34110212((ModelLineComponent_o *)v391, 1, 0.0, v392);
              ModelLineComponent__SetQuestAfterActionColorAnim_34110688((ModelLineComponent_o *)v391, 1, 0.0, v393);
              v388 = v391[3].klass;
              if ( !v388 )
                goto LABEL_1002;
            }
            else
            {
              v570 = (UnityEngine_Object_o *)QuestAfterAction__GetMapComponent_object_(
                                               v390,
                                               1,
                                               updated,
                                               this,
                                               (const MethodInfo_2F548A4 *)Method_QuestAfterAction_GetMapComponent_srcLineSprite___);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              updated = UnityEngine_Object__op_Equality(v570, 0LL, 0LL);
              if ( (updated & 1) != 0 )
                return;
              if ( !v570 )
                goto LABEL_1002;
              srcLineSprite__SetQaaScaleAnimQuick((srcLineSprite_o *)v570, 1, 0LL);
              srcLineSprite__SetQaaColorAnimQuick((srcLineSprite_o *)v570, 1, 0LL);
              v388 = v570[5].monitor;
              if ( !v388 )
                goto LABEL_1002;
            }
            v569 = 1;
LABEL_817:
            v388[4] = v569;
            goto LABEL_18;
          default:
            if ( id != 350 )
              return;
            updated = (__int64)v101->fields.param;
            if ( !updated )
              goto LABEL_1002;
            updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
            if ( !updated )
              goto LABEL_1002;
            v290 = updated;
            if ( *(int *)(updated + 24) <= 0 )
              goto LABEL_829;
            v291 = System_Int32__Parse(*(System_String_o **)(updated + 32), 0LL);
            if ( v291 < 1 )
              goto LABEL_829;
            v292 = v291;
            v293 = 0.5;
            if ( *(int *)(v290 + 24) > 1 )
            {
              v294 = System_Int32__Parse(*(System_String_o **)(v290 + 40), 0LL);
              if ( *(int *)(v290 + 24) >= 3 )
                v293 = System_Single__Parse(*(System_String_o **)(v290 + 48), 0LL) * 0.001;
            }
            else
            {
              v294 = 15;
            }
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            if ( !byte_4AB0C49 )
            {
              sub_1BAB41C(&TerminalSceneComponent_TypeInfo, v93);
              byte_4AB0C49 = 1;
            }
            updated = (__int64)TerminalSceneComponent_TypeInfo;
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
              updated = (__int64)TerminalSceneComponent_TypeInfo;
            }
            v604 = **(_QWORD **)(updated + 184);
            if ( !v604 )
              goto LABEL_1002;
            v605 = *(ScrTerminalMap_o **)(v604 + 264);
            v606 = (System_Action_o *)sub_1BAB668(System_Action_TypeInfo);
            System_Action___ctor(
              v606,
              (Il2CppObject *)v91,
              Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__10__,
              0LL);
            if ( !v605 )
              goto LABEL_1002;
            ScrTerminalMap__RequestMapMove_34855168(v605, v292, v293, v294, v606, 0LL);
            return;
        }
    }
  }
  if ( id <= 700 )
  {
    if ( id > 550 )
    {
      switch ( id )
      {
        case 600:
          v116 = (System_String_o *)StringLiteral_1/*""*/;
          v117 = System_String__Concat_62048128((System_String_o *)StringLiteral_10831/*"QUEST_AFTER_ACTION_MESSAGE_"*/, v101->fields.param, 0LL);
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v118 = LocalizationManager__Get(v117, 0LL);
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v120 = (System_Action_o *)sub_1BAB668(System_Action_TypeInfo);
          System_Action___ctor(
            v120,
            (Il2CppObject *)v91,
            Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__28__,
            0LL);
          if ( !Instance )
            goto LABEL_1002;
          CommonUI__OpenNotificationDialog(
            (CommonUI_o *)Instance,
            v116,
            v118,
            v120,
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
          v229 = (System_String_o *)StringLiteral_1/*""*/;
          updated = sub_1BAB4C4(string___TypeInfo, 1LL);
          if ( !updated )
            goto LABEL_1002;
          v232 = (System_String_array *)updated;
          if ( !*(_DWORD *)(updated + 24) )
            break;
          v233 = StringLiteral_88/*"\r\n"*/;
          *(_QWORD *)(updated + 32) = StringLiteral_88/*"\r\n"*/;
          sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(updated + 32), v233, v230, v231);
          updated = (__int64)v101->fields.param;
          if ( !updated )
            goto LABEL_1002;
          updated = (__int64)System_String__Split_62074360((System_String_o *)updated, v232, 0, 0LL);
          if ( !updated )
            goto LABEL_1002;
          v234 = *(_DWORD *)(updated + 24);
          if ( v234 <= 0 )
            goto LABEL_829;
          v235 = *(System_String_o **)(updated + 32);
          if ( v234 == 1 )
          {
            v236 = *(System_String_o **)(updated + 32);
            v235 = v229;
          }
          else
          {
            v236 = *(System_String_o **)(updated + 40);
          }
          v397 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v398 = (System_Action_o *)sub_1BAB668(System_Action_TypeInfo);
          System_Action___ctor(
            v398,
            (Il2CppObject *)v91,
            Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__29__,
            0LL);
          if ( !v397 )
            goto LABEL_1002;
          CommonUI__OpenNotificationDialog(
            (CommonUI_o *)v397,
            v235,
            v236,
            v398,
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
          v237 = (System_String_o *)StringLiteral_1/*""*/;
          v238 = System_String__Concat_62048128((System_String_o *)StringLiteral_10831/*"QUEST_AFTER_ACTION_MESSAGE_"*/, v101->fields.param, 0LL);
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v239 = LocalizationManager__Get(v238, 0LL);
          v240 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v241 = (System_Action_o *)sub_1BAB668(System_Action_TypeInfo);
          System_Action___ctor(
            v241,
            (Il2CppObject *)v91,
            Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__30__,
            0LL);
          if ( !v240 )
            goto LABEL_1002;
          v242 = "UnityEngine.Yoga.Native::YGConfigSetPointScaleFactor(System.IntPtr,System.Single)" + 63;
          onClickOkSeKind = 0;
          goto LABEL_551;
        case 603:
          v243 = (System_String_o *)StringLiteral_1/*""*/;
          updated = sub_1BAB4C4(string___TypeInfo, 1LL);
          if ( !updated )
            goto LABEL_1002;
          v246 = (System_String_array *)updated;
          if ( !*(_DWORD *)(updated + 24) )
            break;
          v247 = StringLiteral_88/*"\r\n"*/;
          *(_QWORD *)(updated + 32) = StringLiteral_88/*"\r\n"*/;
          sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(updated + 32), v247, v244, v245);
          updated = (__int64)v101->fields.param;
          if ( !updated )
            goto LABEL_1002;
          updated = (__int64)System_String__Split_62074360((System_String_o *)updated, v246, 0, 0LL);
          if ( !updated )
            goto LABEL_1002;
          v248 = *(_DWORD *)(updated + 24);
          if ( v248 <= 0 )
            goto LABEL_829;
          v237 = *(System_String_o **)(updated + 32);
          if ( v248 == 1 )
          {
            v239 = *(System_String_o **)(updated + 32);
            v237 = v243;
          }
          else
          {
            v239 = *(System_String_o **)(updated + 40);
          }
          v240 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v241 = (System_Action_o *)sub_1BAB668(System_Action_TypeInfo);
          System_Action___ctor(
            v241,
            (Il2CppObject *)v91,
            Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__31__,
            0LL);
          if ( !v240 )
            goto LABEL_1002;
          v242 = "Ptr,System.Single)";
          onClickOkSeKind = 1;
LABEL_551:
          CommonUI__OpenNotificationDialog_30637924(
            (CommonUI_o *)v240,
            v237,
            v239,
            v241,
            40.0,
            *((float *)v242 + 754),
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
          v249 = (System_String_o *)StringLiteral_1/*""*/;
          v250 = System_String__Concat_62048128((System_String_o *)StringLiteral_10831/*"QUEST_AFTER_ACTION_MESSAGE_"*/, v101->fields.param, 0LL);
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v251 = LocalizationManager__Get(v250, 0LL);
          v252 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v253 = (System_Action_o *)sub_1BAB668(System_Action_TypeInfo);
          System_Action___ctor(
            v253,
            (Il2CppObject *)v91,
            Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__32__,
            0LL);
          if ( !v252 )
            goto LABEL_1002;
          CommonUI__OpenNotificationDialog_30637924(
            (CommonUI_o *)v252,
            v249,
            v251,
            v253,
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
          if ( id == 560 )
          {
            updated = (__int64)v101->fields.param;
            if ( !updated )
              goto LABEL_1002;
            updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
            if ( !updated )
              goto LABEL_1002;
            v254 = *(_QWORD *)(updated + 24);
            if ( v254 )
            {
              if ( !(_DWORD)v254 )
                break;
              updated = System_Int32__Parse(*(System_String_o **)(updated + 32), 0LL);
              v256 = *v96;
              if ( !*v96 )
                goto LABEL_1002;
              v257 = *(QuestAfterAction_TitleInfoControlCallback_o **)(v256 + 40);
              if ( (int)updated >= 1 )
              {
                if ( !v257 )
                  goto LABEL_1002;
                QuestAfterAction_TitleInfoControlCallback__Start(
                  *(QuestAfterAction_TitleInfoControlCallback_o **)(v256 + 40),
                  0LL,
                  v255);
                goto LABEL_18;
              }
            }
            else
            {
              if ( !*v96 )
                goto LABEL_1002;
              v257 = *(QuestAfterAction_TitleInfoControlCallback_o **)(*v96 + 40);
            }
            v394 = (System_Action_o *)sub_1BAB668(System_Action_TypeInfo);
            System_Action___ctor(v394, (Il2CppObject *)this, (intptr_t)this->klass->vtable._15_onEnd.methodPtr, 0LL);
            if ( !v257 )
              goto LABEL_1002;
            QuestAfterAction_TitleInfoControlCallback__Start(v257, v394, v395);
            return;
          }
          if ( id != 700 )
            return;
          updated = (__int64)v101->fields.param;
          if ( !updated )
            goto LABEL_1002;
          updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
          if ( !updated )
            goto LABEL_1002;
          v188 = updated;
          if ( *(_DWORD *)(updated + 24) )
          {
            v189 = System_Int32__Parse(*(System_String_o **)(updated + 32), 0LL);
            if ( *(int *)(v188 + 24) >= 2 )
              v190 = System_Int32__Parse(*(System_String_o **)(v188 + 40), 0LL) + 1;
            else
              v190 = 0;
            v344 = (SceneJumpInfo_o *)sub_1BAB668(SceneJumpInfo_TypeInfo);
            SceneJumpInfo___ctor_39049472(v344, (System_String_o *)StringLiteral_1/*""*/, v189, v190, 0LL);
            updated = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
            if ( !updated )
              goto LABEL_1002;
            AvalonSceneManager__transitionScene((AvalonSceneManager_o *)updated, 72, 1, (Il2CppObject *)v344, 0LL);
            goto LABEL_829;
          }
          break;
      }
LABEL_1003:
      sub_1BAB680(updated, v93);
    }
    if ( id == 530 )
    {
      v214 = System_Int32__Parse(v101->fields.param, 0LL);
      updated = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !updated )
        goto LABEL_1002;
      updated = (__int64)DataManager__GetMasterData_object_(
                           (DataManager_o *)updated,
                           (const MethodInfo_2EC55C8 *)Method_DataManager_GetMasterData_QuestMaster___);
      if ( !updated )
        goto LABEL_1002;
      v215 = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)updated,
               v214,
               (const MethodInfo_3163D90 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
      updated = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_378A64C *)Method_SingletonTemplate_QuestTree__get_Instance__);
      if ( !updated )
        goto LABEL_1002;
      updated = (__int64)QuestTree__GetQuestInfo((QuestTree_o *)updated, v214, 0LL);
      if ( !updated )
        goto LABEL_1002;
      v217 = updated;
      if ( *(_DWORD *)(updated + 32) == 1 )
      {
        if ( !v215 )
          goto LABEL_1002;
        if ( QuestEntity__HasFlag((QuestEntity_o *)v215, 2LL, 0LL) )
        {
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          if ( !byte_4AB295B )
          {
            sub_1BAB41C(&TerminalPramsManager_TypeInfo, v93);
            byte_4AB295B = 1;
          }
          updated = (__int64)TerminalPramsManager_TypeInfo;
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            updated = (__int64)TerminalPramsManager_TypeInfo;
          }
          *(_DWORD *)(*(_QWORD *)(updated + 184) + 20LL) = v214;
          v218 = *(_DWORD *)(v217 + 44);
          if ( !byte_4AB295F )
          {
            sub_1BAB41C(&TerminalPramsManager_TypeInfo, v93);
            updated = (__int64)TerminalPramsManager_TypeInfo;
            byte_4AB295F = 1;
          }
          if ( !*(_DWORD *)(updated + 224) )
          {
            j_il2cpp_runtime_class_init_0(updated);
            updated = (__int64)TerminalPramsManager_TypeInfo;
          }
          *(_DWORD *)(*(_QWORD *)(updated + 184) + 24LL) = v218;
          if ( !*v96 )
            goto LABEL_1002;
          *(_BYTE *)(*v96 + 195) = 1;
          if ( QuestEntity__HasFlag((QuestEntity_o *)v215, 0x800000000000LL, 0LL) )
          {
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            if ( !byte_4AB0C49 )
            {
              sub_1BAB41C(&TerminalSceneComponent_TypeInfo, v93);
              byte_4AB0C49 = 1;
            }
            updated = (__int64)TerminalSceneComponent_TypeInfo;
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
              updated = (__int64)TerminalSceneComponent_TypeInfo;
            }
            v219 = **(_QWORD **)(updated + 184);
            if ( !v219 )
              goto LABEL_1002;
            v220 = *(ScrTerminalListTop_o **)(v219 + 256);
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            if ( !byte_4AB2957 )
            {
              sub_1BAB41C(&TerminalPramsManager_TypeInfo, v93);
              byte_4AB2957 = 1;
            }
            v221 = TerminalPramsManager_TypeInfo;
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
              v221 = TerminalPramsManager_TypeInfo;
            }
            QuestId_k__BackingField = v221->static_fields->_QuestId_k__BackingField;
            if ( !byte_4AB2962 )
            {
              sub_1BAB41C(&TerminalPramsManager_TypeInfo, v93);
              v221 = TerminalPramsManager_TypeInfo;
              byte_4AB2962 = 1;
            }
            if ( !v221->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v221);
              v221 = TerminalPramsManager_TypeInfo;
            }
            PhaseCnt_k__BackingField = v221->static_fields->_PhaseCnt_k__BackingField;
            v224 = (System_Action_o *)sub_1BAB668(System_Action_TypeInfo);
            System_Action___ctor(
              v224,
              (Il2CppObject *)v91,
              Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__24__,
              0LL);
            if ( !v220 )
              goto LABEL_1002;
            ScrTerminalListTop__StartWindowMessage_34634160(
              v220,
              QuestId_k__BackingField,
              PhaseCnt_k__BackingField + 1,
              2,
              v224,
              1,
              0LL);
          }
          else
          {
            updated = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_378A64C *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
            v530 = (clsQuestCheck_o *)updated;
            v531 = QuestAfterAction_StateMain___c_TypeInfo;
            if ( !QuestAfterAction_StateMain___c_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(QuestAfterAction_StateMain___c_TypeInfo);
              v531 = QuestAfterAction_StateMain___c_TypeInfo;
            }
            _9__16_25 = v531->static_fields->__9__16_25;
            if ( !_9__16_25 )
            {
              if ( !v531->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v531);
                v531 = QuestAfterAction_StateMain___c_TypeInfo;
              }
              v533 = (Il2CppObject *)v531->static_fields->__9;
              _9__16_25 = (System_Action_o *)sub_1BAB668(System_Action_TypeInfo);
              System_Action___ctor(_9__16_25, v533, Method_QuestAfterAction_StateMain___c__UpdateAnim_b__16_25__, 0LL);
              v534 = QuestAfterAction_StateMain___c_TypeInfo->static_fields;
              v534->__9__16_25 = _9__16_25;
              sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&v534->__9__16_25, (int32_t)_9__16_25, v535, v536);
            }
            if ( !v530 )
              goto LABEL_1002;
            clsQuestCheck__PlayQuestStartAction(v530, _9__16_25, 0LL);
          }
        }
      }
      else
      {
        QuestAfterAction_StateMain__ForceEndAnim(this, 1, v216);
      }
      return;
    }
    if ( id != 540 )
    {
      if ( id == 550 )
        goto LABEL_18;
      return;
    }
    updated = (__int64)v101->fields.param;
    if ( !updated )
      goto LABEL_1002;
    updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
    if ( !updated )
      goto LABEL_1002;
    v225 = updated;
    if ( !*(_DWORD *)(updated + 24) )
      goto LABEL_1003;
    v226 = System_Int32__Parse(*(System_String_o **)(updated + 32), 0LL);
    if ( *(int *)(v225 + 24) < 2 )
    {
      v227 = -1;
    }
    else
    {
      v227 = System_Int32__Parse(*(System_String_o **)(v225 + 40), 0LL);
      if ( *(int *)(v225 + 24) >= 3 )
      {
        v228 = System_Int32__Parse(*(System_String_o **)(v225 + 48), 0LL);
LABEL_315:
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_4AB0F7F )
        {
          sub_1BAB41C(&TerminalPramsManager_TypeInfo, v93);
          byte_4AB0F7F = 1;
        }
        v266 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v266 = TerminalPramsManager_TypeInfo;
        }
        v266->static_fields->_IsAutoResume_k__BackingField = 1;
        if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        if ( !byte_4AB0C49 )
        {
          sub_1BAB41C(&TerminalSceneComponent_TypeInfo, v93);
          byte_4AB0C49 = 1;
        }
        updated = (__int64)TerminalSceneComponent_TypeInfo;
        if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          updated = (__int64)TerminalSceneComponent_TypeInfo;
        }
        v267 = **(_QWORD **)(updated + 184);
        if ( !v267 )
          goto LABEL_1002;
        updated = *(_QWORD *)(v267 + 264);
        if ( !updated )
          goto LABEL_1002;
        if ( !ScrTerminalMap__RequestMapChange((ScrTerminalMap_o *)updated, v226, v227, v228, 0LL) )
        {
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          if ( !byte_4AB0F7F )
          {
            sub_1BAB41C(&TerminalPramsManager_TypeInfo, v268);
            byte_4AB0F7F = 1;
          }
          v270 = TerminalPramsManager_TypeInfo;
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            v270 = TerminalPramsManager_TypeInfo;
          }
          v270->static_fields->_IsAutoResume_k__BackingField = 0;
          goto LABEL_18;
        }
        ((void (__fastcall *)(QuestAfterAction_StateMain_o *, Il2CppMethodPointer))this->klass->vtable._14_EndAnim.method)(
          this,
          this->klass->vtable._15_onEnd.methodPtr);
        updated = *v96;
        if ( !*v96 )
          goto LABEL_1002;
        QuestAfterAction__SetState((QuestAfterAction_o *)updated, 0, v269);
        return;
      }
    }
    v228 = -1;
    goto LABEL_315;
  }
  if ( id <= 801 )
  {
    switch ( id )
    {
      case 701:
        if ( !System_String__op_Equality(v101->fields.param, (System_String_o *)StringLiteral_1209/*"0"*/, 0LL) )
          goto LABEL_18;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_4AB2BB4 )
        {
          sub_1BAB41C(&TerminalPramsManager_TypeInfo, v204);
          byte_4AB2BB4 = 1;
        }
        v205 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v205 = TerminalPramsManager_TypeInfo;
        }
        v205->static_fields->_IsTransOrdealCall_k__BackingField = 1;
        updated = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
        if ( !updated )
          goto LABEL_1002;
        AvalonSceneManager__transitionSceneRefresh((AvalonSceneManager_o *)updated, 34, 1, 0LL, 0, 0LL);
        break;
      case 800:
        v206 = *v96;
        if ( !*v96 )
          goto LABEL_1002;
        updated = *(_QWORD *)(v206 + 88);
        if ( !updated )
          goto LABEL_1002;
        if ( System_Collections_Generic_Dictionary_int__object___TryGetValue(
               (System_Collections_Generic_Dictionary_int__object__o *)updated,
               *(_DWORD *)(v206 + 64),
               &value,
               (const MethodInfo_31B85C0 *)Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__TryGetValue__) )
        {
          updated = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
          if ( !updated )
            goto LABEL_1002;
          AutomatedAction__TerminateMissionAction((AutomatedAction_o *)updated, 0LL);
          if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          if ( !byte_4AB0C49 )
          {
            sub_1BAB41C(&TerminalSceneComponent_TypeInfo, v93);
            byte_4AB0C49 = 1;
          }
          updated = (__int64)TerminalSceneComponent_TypeInfo;
          if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            updated = (__int64)TerminalSceneComponent_TypeInfo;
          }
          v207 = **(_QWORD **)(updated + 184);
          if ( !v207 )
            goto LABEL_1002;
          if ( !*(_QWORD *)(v207 + 464) )
            goto LABEL_197;
          if ( !*(_DWORD *)(updated + 224) )
            j_il2cpp_runtime_class_init_0(updated);
          if ( !byte_4AB0C49 )
          {
            sub_1BAB41C(&TerminalSceneComponent_TypeInfo, v93);
            byte_4AB0C49 = 1;
          }
          updated = (__int64)TerminalSceneComponent_TypeInfo;
          if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            updated = (__int64)TerminalSceneComponent_TypeInfo;
          }
          v208 = **(_QWORD **)(updated + 184);
          if ( !v208 )
            goto LABEL_1002;
          v209 = *(_QWORD *)(v208 + 464);
          if ( !v209 )
            goto LABEL_1002;
          updated = *(unsigned int *)(v209 + 48);
          if ( !(_DWORD)updated )
          {
LABEL_197:
            if ( !value )
              goto LABEL_1002;
            updated = LODWORD(value[1].klass);
          }
          if ( (int)updated < 1 )
          {
            if ( !value )
              goto LABEL_1002;
            v396 = (System_String_o *)value[1].monitor;
            if ( !SoundManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
            SoundManager__playVoice(v396, 0LL);
          }
          else
          {
            updated = (__int64)ServantVoiceEntity__getVoiceAssetName_40244468(updated, 0LL);
            if ( !value )
              goto LABEL_1002;
            v210 = (System_String_o *)updated;
            v211 = (System_String_o *)value[1].monitor;
            v212 = SeManager_TypeInfo;
            if ( !SeManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
              v212 = SeManager_TypeInfo;
            }
            DEFAULT_VOLUME = v212->static_fields->DEFAULT_VOLUME;
            if ( !SoundManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
            SoundManager__playVoice_39087920(v210, v211, DEFAULT_VOLUME, 0LL, 0LL);
          }
        }
        break;
      case 801:
        param = v101->fields.param;
        v125 = Method_QuestAfterAction_StateMain_UpdateAnim__;
        if ( (*((_BYTE *)Method_QuestAfterAction_StateMain_UpdateAnim__ + 83) & 2) != 0 )
          v125 = (_QWORD *)sub_1BAB434(Method_QuestAfterAction_StateMain_UpdateAnim__);
        v126 = (System_Reflection_MethodBase_o *)sub_1BAB400(v125, v125[4]);
        OverwriteAssetSoundName__PlaySe(v126, param, 0LL);
        goto LABEL_18;
      default:
        return;
    }
LABEL_829:
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
      if ( !*v96 )
        goto LABEL_1002;
      *(_BYTE *)(*v96 + 193) = 1;
      goto LABEL_18;
    case 851:
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      if ( !byte_4AB0C49 )
      {
        sub_1BAB41C(&TerminalSceneComponent_TypeInfo, v93);
        byte_4AB0C49 = 1;
      }
      v191 = TerminalSceneComponent_TypeInfo;
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        v191 = TerminalSceneComponent_TypeInfo;
      }
      v192 = v191->static_fields->mInstance;
      updated = (__int64)QuestAfterAction_Command__GetBgmName(v101, (const MethodInfo *)v93);
      if ( !v192 )
        goto LABEL_1002;
      TerminalSceneComponent__playBgm(v192, (System_String_o *)updated, 0LL);
      if ( !*v96 )
        goto LABEL_1002;
      *(_BYTE *)(*v96 + 193) = 0;
      goto LABEL_18;
    case 900:
      v106 = (float)System_Int32__Parse(v101->fields.param, 0LL) / 1000.0;
      if ( v106 <= 0.0 )
        goto LABEL_18;
      this->fields.waitTime = v106;
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

  if ( (byte_4AB2B81 & 1) == 0 )
  {
    sub_1BAB41C(&TerminalSceneComponent_TypeInfo, that);
    byte_4AB2B81 = 1;
  }
  this->fields.that = that;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)that, (int32_t)method, v3);
  v8 = this->fields.that;
  if ( !v8 )
    goto LABEL_14;
  screenCollider = (TerminalSceneComponent_c *)v8->fields.screenCollider;
  if ( !screenCollider )
    goto LABEL_14;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)screenCollider, 1, 0LL);
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4AB0C49 )
  {
    sub_1BAB41C(&TerminalSceneComponent_TypeInfo, v7);
    byte_4AB0C49 = 1;
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
    sub_1BAB678(screenCollider, v7);
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
    sub_1BAB678(this, method);
  return that->fields.commandBuf;
}


int32_t __fastcall QuestAfterAction_StateMain__get_CommandIndex(
        QuestAfterAction_StateMain_o *this,
        const MethodInfo *method)
{
  struct QuestAfterAction_o *that; // x8

  that = this->fields.that;
  if ( !that )
    sub_1BAB678(this, method);
  return that->fields.commandIdx;
}


UnityEngine_GameObject_o *__fastcall QuestAfterAction_StateMain__get_SubGimmickRoot(
        QuestAfterAction_StateMain_o *this,
        const MethodInfo *method)
{
  TerminalSceneComponent_c *v2; // x0
  struct TerminalSceneComponent_o *mInstance; // x8
  struct ScrTerminalMap_o *mTerminalMap; // x8

  if ( (byte_4AB2B80 & 1) == 0 )
  {
    sub_1BAB41C(&TerminalSceneComponent_TypeInfo, method);
    byte_4AB2B80 = 1;
  }
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4AB0C49 )
  {
    sub_1BAB41C(&TerminalSceneComponent_TypeInfo, method);
    byte_4AB0C49 = 1;
  }
  v2 = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v2 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = v2->static_fields->mInstance;
  if ( !mInstance || (mTerminalMap = mInstance->fields.mTerminalMap) == 0LL )
    sub_1BAB678(v2, method);
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

  if ( (byte_4AB2B83 & 1) == 0 )
  {
    sub_1BAB41C(&TerminalSceneComponent_TypeInfo, deleteKey);
    sub_1BAB41C(&StringLiteral_16740/*"afterActionBk"*/, v5);
    byte_4AB2B83 = 1;
  }
  if ( deleteKey )
    UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_16740/*"afterActionBk"*/, 0LL);
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4AB0C49 )
  {
    sub_1BAB41C(&TerminalSceneComponent_TypeInfo, deleteKey);
    byte_4AB0C49 = 1;
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
    sub_1BAB678(mInstance, deleteKey);
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
    sub_1BAB678(this, value);
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

  if ( (byte_4AB2B85 & 1) == 0 )
  {
    sub_1BAB41C(&QuestAfterAction_StateMain___c_TypeInfo, v1);
    byte_4AB2B85 = 1;
  }
  v2 = (Il2CppObject *)sub_1BAB668(QuestAfterAction_StateMain___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  QuestAfterAction_StateMain___c_TypeInfo->static_fields->__9 = (struct QuestAfterAction_StateMain___c_o *)v2;
  sub_1BAB3C0(
    (ServantStatusBattleListViewItem_o *)QuestAfterAction_StateMain___c_TypeInfo->static_fields,
    (int32_t)v2,
    v3,
    v4);
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


void __fastcall QuestAfterAction_StateMain___c___UpdateAnim_b__16_25(
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
  ScriptManager_CallbackFunc_o *_9__16_26; // x21
  Il2CppObject *v12; // x22
  struct QuestAfterAction_StateMain___c_StaticFields *static_fields; // x0
  int32_t v14; // w2
  int32_t v15; // w3

  if ( (byte_4AB2B86 & 1) == 0 )
  {
    sub_1BAB41C(&ScriptManager_CallbackFunc_TypeInfo, method);
    sub_1BAB41C(&ScriptManager_TypeInfo, v2);
    sub_1BAB41C(&TerminalPramsManager_TypeInfo, v3);
    sub_1BAB41C(&Method_QuestAfterAction_StateMain___c__UpdateAnim_b__16_26__, v4);
    sub_1BAB41C(&QuestAfterAction_StateMain___c_TypeInfo, v5);
    byte_4AB2B86 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4AB295A )
  {
    sub_1BAB41C(&TerminalPramsManager_TypeInfo, method);
    byte_4AB295A = 1;
  }
  v6 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v6 = TerminalPramsManager_TypeInfo;
  }
  WarId_k__BackingField = v6->static_fields->_WarId_k__BackingField;
  if ( !byte_4AB2957 )
  {
    sub_1BAB41C(&TerminalPramsManager_TypeInfo, method);
    v6 = TerminalPramsManager_TypeInfo;
    byte_4AB2957 = 1;
  }
  if ( !v6->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v6);
    v6 = TerminalPramsManager_TypeInfo;
  }
  QuestId_k__BackingField = v6->static_fields->_QuestId_k__BackingField;
  if ( !byte_4AB2962 )
  {
    sub_1BAB41C(&TerminalPramsManager_TypeInfo, method);
    v6 = TerminalPramsManager_TypeInfo;
    byte_4AB2962 = 1;
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
  _9__16_26 = v9->static_fields->__9__16_26;
  if ( !_9__16_26 )
  {
    if ( !v9->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v9);
      v9 = QuestAfterAction_StateMain___c_TypeInfo;
    }
    v12 = (Il2CppObject *)v9->static_fields->__9;
    _9__16_26 = (ScriptManager_CallbackFunc_o *)sub_1BAB668(ScriptManager_CallbackFunc_TypeInfo);
    ScriptManager_CallbackFunc___ctor(_9__16_26, v12, Method_QuestAfterAction_StateMain___c__UpdateAnim_b__16_26__, 0LL);
    static_fields = QuestAfterAction_StateMain___c_TypeInfo->static_fields;
    static_fields->__9__16_26 = _9__16_26;
    sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&static_fields->__9__16_26, (int32_t)_9__16_26, v14, v15);
  }
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  ScriptManager__PlayBattleStart(
    WarId_k__BackingField,
    QuestId_k__BackingField,
    PhaseCnt_k__BackingField + 1,
    _9__16_26,
    0,
    0LL,
    -1,
    0,
    0,
    0LL,
    0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestAfterAction_StateMain___c___UpdateAnim_b__16_26(
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
  NetworkManager_ResultCallbackFunc_o *_9__16_27; // x19
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

  if ( (byte_4AB2B87 & 1) == 0 )
  {
    sub_1BAB41C(&Method_NetworkManager_getRequest_BattleScenarioRequest___, isExit);
    sub_1BAB41C(&NetworkManager_TypeInfo, v3);
    sub_1BAB41C(&NetworkManager_ResultCallbackFunc_TypeInfo, v4);
    sub_1BAB41C(&ScriptManager_TypeInfo, v5);
    sub_1BAB41C(&TerminalPramsManager_TypeInfo, v6);
    sub_1BAB41C(&Method_QuestAfterAction_StateMain___c__UpdateAnim_b__16_27__, v7);
    sub_1BAB41C(&QuestAfterAction_StateMain___c_TypeInfo, v8);
    byte_4AB2B87 = 1;
  }
  v9 = QuestAfterAction_StateMain___c_TypeInfo;
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
    v11 = (Il2CppObject *)v9->static_fields->__9;
    _9__16_27 = (NetworkManager_ResultCallbackFunc_o *)sub_1BAB668(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      _9__16_27,
      v11,
      Method_QuestAfterAction_StateMain___c__UpdateAnim_b__16_27__,
      0LL);
    static_fields = QuestAfterAction_StateMain___c_TypeInfo->static_fields;
    static_fields->__9__16_27 = _9__16_27;
    sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&static_fields->__9__16_27, (int32_t)_9__16_27, v13, v14);
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     _9__16_27,
                     (const MethodInfo_2F47108 *)Method_NetworkManager_getRequest_BattleScenarioRequest___);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4AB2957 )
  {
    sub_1BAB41C(&TerminalPramsManager_TypeInfo, v15);
    byte_4AB2957 = 1;
  }
  v17 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v17 = TerminalPramsManager_TypeInfo;
  }
  QuestId_k__BackingField = v17->static_fields->_QuestId_k__BackingField;
  if ( !byte_4AB2962 )
  {
    sub_1BAB41C(&TerminalPramsManager_TypeInfo, v15);
    v17 = TerminalPramsManager_TypeInfo;
    byte_4AB2962 = 1;
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
    sub_1BAB678(SelectRouteArray, v21);
  BattleScenarioRequest__beginRequest(
    (BattleScenarioRequest_o *)Request_object,
    QuestId_k__BackingField,
    PhaseCnt_k__BackingField + 1,
    SelectRouteArray,
    0LL);
}


void __fastcall QuestAfterAction_StateMain___c___UpdateAnim_b__16_27(
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

  if ( (byte_4AB2B88 & 1) == 0 )
  {
    sub_1BAB41C(&Method_JsonManager_DeserializeArray_BattleResultComponent_resultData___, jsonstr);
    sub_1BAB41C(&JsonManager_TypeInfo, v4);
    sub_1BAB41C(&ScriptManager_TypeInfo, v5);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v6);
    sub_1BAB41C(&TerminalPramsManager_TypeInfo, v7);
    sub_1BAB41C(&StringLiteral_16740/*"afterActionBk"*/, v8);
    sub_1BAB41C(&StringLiteral_15842/*"["*/, v9);
    sub_1BAB41C(&StringLiteral_16099/*"]"*/, v10);
    sub_1BAB41C(&StringLiteral_13650/*"TerminalTransitionInfoMissionId"*/, v11);
    byte_4AB2B88 = 1;
  }
  v12 = (Il2CppObject *)System_String__Concat_62059388(
                          (System_String_o *)StringLiteral_15842/*"["*/,
                          jsonstr,
                          (System_String_o *)StringLiteral_16099/*"]"*/,
                          0LL);
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v13 = JsonManager__DeserializeArray_object_(
          v12,
          (const MethodInfo_2F2AABC *)Method_JsonManager_DeserializeArray_BattleResultComponent_resultData___);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_16740/*"afterActionBk"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13650/*"TerminalTransitionInfoMissionId"*/, 0LL);
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  ScriptManager__ClearSelectRouteArray(0LL);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  TerminalPramsManager__ReceiveQuestEndResultInfo((BattleResultComponent_resultData_array *)v13, 1, 0LL);
  if ( !byte_4AB0F7F )
  {
    sub_1BAB41C(&TerminalPramsManager_TypeInfo, v14);
    byte_4AB0F7F = 1;
  }
  v15 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v15 = TerminalPramsManager_TypeInfo;
  }
  v15->static_fields->_IsAutoResume_k__BackingField = 1;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1BAB678(0LL, v17);
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
    sub_1BAB678(0LL, method);
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
    sub_1BAB678(0LL, method);
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
    sub_1BAB678(0LL, method);
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
    sub_1BAB678(_4__this, method);
  }
  ((void (__fastcall *)(struct QuestAfterAction_StateMain_o *, struct QuestAfterAction_o *, Il2CppMethodPointer))_4__this->klass->vtable._13_UpdateAnim.method)(
    _4__this,
    this->fields.that,
    _4__this->klass->vtable._14_EndAnim.methodPtr);
}


void __fastcall QuestAfterAction_StateMain___c__DisplayClass16_0___UpdateAnim_b__24(
        QuestAfterAction_StateMain___c__DisplayClass16_0_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  ScrTerminalMap_o *_4__this; // x0
  UnityEngine_GameObject_c *klass; // x8
  UnityEngine_GameObject_c *v8; // x8
  UnityEngine_GameObject_c *v9; // x8
  __int64 v10; // x1
  TerminalPramsManager_c *v11; // x0
  int32_t QuestId_k__BackingField; // w21
  __int64 v13; // x1
  TerminalPramsManager_c *v14; // x0
  bool HasFlag; // w0
  __int64 v16; // x1
  TerminalPramsManager_c *v17; // x8
  TerminalPramsManager_c *v18; // x0
  __int64 v19; // x1
  int32_t SpotId; // w21
  UnityEngine_GameObject_c *v21; // x8
  bool Effect; // w21
  TerminalPramsManager_c *v23; // x0
  UnityEngine_GameObject_c *v24; // x8
  ScrTerminalListTop_o *v25; // x19
  int32_t v26; // w21

  if ( (byte_4AB2B89 & 1) == 0 )
  {
    sub_1BAB41C(&TerminalPramsManager_TypeInfo, method);
    sub_1BAB41C(&TerminalSceneComponent_TypeInfo, v3);
    sub_1BAB41C(&StringLiteral_16740/*"afterActionBk"*/, v4);
    sub_1BAB41C(&StringLiteral_13650/*"TerminalTransitionInfoMissionId"*/, v5);
    byte_4AB2B89 = 1;
  }
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4AB0C49 )
  {
    sub_1BAB41C(&TerminalSceneComponent_TypeInfo, method);
    byte_4AB0C49 = 1;
  }
  _4__this = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    _4__this = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
  }
  klass = _4__this->fields.subRootGimmickP->klass;
  if ( !klass )
    goto LABEL_89;
  _4__this = *(ScrTerminalMap_o **)&klass->_2.thread_static_fields_offset;
  if ( !_4__this )
    goto LABEL_89;
  if ( !ScrTerminalMap__IsAllMaskActive(_4__this, 0LL) )
    goto LABEL_21;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4AB0C49 )
  {
    sub_1BAB41C(&TerminalSceneComponent_TypeInfo, method);
    byte_4AB0C49 = 1;
  }
  _4__this = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    _4__this = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
  }
  v8 = _4__this->fields.subRootGimmickP->klass;
  if ( !v8 || (_4__this = *(ScrTerminalMap_o **)&v8->_2.thread_static_fields_offset) == 0LL )
LABEL_89:
    sub_1BAB678(_4__this, method);
  ScrTerminalMap__AllMaskEnd(_4__this, 0LL);
LABEL_21:
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4AB0C49 )
  {
    sub_1BAB41C(&TerminalSceneComponent_TypeInfo, method);
    byte_4AB0C49 = 1;
  }
  _4__this = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    _4__this = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
  }
  v9 = _4__this->fields.subRootGimmickP->klass;
  if ( !v9 )
    goto LABEL_89;
  _4__this = *(ScrTerminalMap_o **)&v9->_2.static_fields_size;
  if ( !_4__this )
    goto LABEL_89;
  ScrTerminalListTop__IsAllTouchEnable((ScrTerminalListTop_o *)_4__this, 0, 0LL, 0LL);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4AB2957 )
  {
    sub_1BAB41C(&TerminalPramsManager_TypeInfo, v10);
    byte_4AB2957 = 1;
  }
  v11 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v11 = TerminalPramsManager_TypeInfo;
  }
  QuestId_k__BackingField = v11->static_fields->_QuestId_k__BackingField;
  if ( !byte_4AB2BB5 )
  {
    sub_1BAB41C(&TerminalPramsManager_TypeInfo, v10);
    v11 = TerminalPramsManager_TypeInfo;
    byte_4AB2BB5 = 1;
  }
  if ( !v11->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v11);
    v11 = TerminalPramsManager_TypeInfo;
  }
  v11->static_fields->_LastPlayedQuestId_k__BackingField = QuestId_k__BackingField;
  if ( !byte_4AB2957 )
  {
    sub_1BAB41C(&TerminalPramsManager_TypeInfo, v10);
    v11 = TerminalPramsManager_TypeInfo;
    byte_4AB2957 = 1;
  }
  if ( !v11->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v11);
    v11 = TerminalPramsManager_TypeInfo;
  }
  TerminalPramsManager__CheckClearSelectedStoryQuestId(v11->static_fields->_QuestId_k__BackingField, 0LL);
  if ( !byte_4AB2957 )
  {
    sub_1BAB41C(&TerminalPramsManager_TypeInfo, v13);
    byte_4AB2957 = 1;
  }
  v14 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v14 = TerminalPramsManager_TypeInfo;
  }
  HasFlag = QuestMaster__HasFlag(v14->static_fields->_QuestId_k__BackingField, 0x8000000000LL, 0LL);
  v17 = TerminalPramsManager_TypeInfo;
  if ( HasFlag )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4AB2957 )
    {
      sub_1BAB41C(&TerminalPramsManager_TypeInfo, v16);
      byte_4AB2957 = 1;
    }
    v18 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v18 = TerminalPramsManager_TypeInfo;
    }
    SpotId = QuestMaster__GetSpotId(v18->static_fields->_QuestId_k__BackingField, 0LL);
    if ( !byte_4AB2BB6 )
    {
      sub_1BAB41C(&TerminalPramsManager_TypeInfo, v19);
      byte_4AB2BB6 = 1;
    }
    v17 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v17 = TerminalPramsManager_TypeInfo;
    }
    v17->static_fields->_LastPlayedFreeQuestSpotId_k__BackingField = SpotId;
  }
  if ( !v17->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v17);
  TerminalPramsManager__PlayQuestSave_SaveData(0LL);
  TerminalPramsManager__Save_SaveData(0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_16740/*"afterActionBk"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13650/*"TerminalTransitionInfoMissionId"*/, 0LL);
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4AB0C49 )
  {
    sub_1BAB41C(&TerminalSceneComponent_TypeInfo, method);
    byte_4AB0C49 = 1;
  }
  _4__this = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    _4__this = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
  }
  v21 = _4__this->fields.subRootGimmickP->klass;
  if ( !v21 )
    goto LABEL_89;
  _4__this = *(ScrTerminalMap_o **)&v21->_2.static_fields_size;
  if ( !_4__this )
    goto LABEL_89;
  Effect = ScrTerminalListTop__IsDisplayGetEffect((ScrTerminalListTop_o *)_4__this, 0LL);
  if ( !byte_4AB2BB7 )
  {
    sub_1BAB41C(&TerminalPramsManager_TypeInfo, method);
    byte_4AB2BB7 = 1;
  }
  v23 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v23 = TerminalPramsManager_TypeInfo;
  }
  v23->static_fields->_IsPlayGetEffect_k__BackingField = Effect;
  _4__this = (ScrTerminalMap_o *)this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_89;
  ((void (__fastcall *)(ScrTerminalMap_o *, Il2CppRuntimeInterfaceOffsetPair *))_4__this->klass[1]._1.implementedInterfaces)(
    _4__this,
    _4__this->klass[1]._1.interfaceOffsets);
  if ( !byte_4AB0C49 )
  {
    sub_1BAB41C(&TerminalSceneComponent_TypeInfo, method);
    byte_4AB0C49 = 1;
  }
  _4__this = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    _4__this = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
  }
  v24 = _4__this->fields.subRootGimmickP->klass;
  if ( !v24 )
    goto LABEL_89;
  v25 = *(ScrTerminalListTop_o **)&v24->_2.static_fields_size;
  if ( !byte_4AB2957 )
  {
    sub_1BAB41C(&TerminalPramsManager_TypeInfo, method);
    byte_4AB2957 = 1;
  }
  _4__this = (ScrTerminalMap_o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    _4__this = (ScrTerminalMap_o *)TerminalPramsManager_TypeInfo;
  }
  v26 = *((_DWORD *)&_4__this->fields.subRootGimmickP->fields + 1);
  if ( !byte_4AB2962 )
  {
    sub_1BAB41C(&TerminalPramsManager_TypeInfo, method);
    _4__this = (ScrTerminalMap_o *)TerminalPramsManager_TypeInfo;
    byte_4AB2962 = 1;
  }
  if ( !LODWORD(_4__this->fields.pfbBaseP) )
  {
    j_il2cpp_runtime_class_init_0(_4__this);
    _4__this = (ScrTerminalMap_o *)TerminalPramsManager_TypeInfo;
  }
  if ( !v25 )
    goto LABEL_89;
  ScrTerminalListTop__RequestBattleSecnario(v25, v26, LODWORD(_4__this->fields.subRootGimmickP[1].klass) + 1, 0LL);
}


void __fastcall QuestAfterAction_StateMain___c__DisplayClass16_0___UpdateAnim_b__28(
        QuestAfterAction_StateMain___c__DisplayClass16_0_o *this,
        const MethodInfo *method)
{
  struct QuestAfterAction_StateMain_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1BAB678(0LL, method);
  ((void (__fastcall *)(struct QuestAfterAction_StateMain_o *, Il2CppMethodPointer))_4__this->klass->vtable._14_EndAnim.method)(
    _4__this,
    _4__this->klass->vtable._15_onEnd.methodPtr);
}


void __fastcall QuestAfterAction_StateMain___c__DisplayClass16_0___UpdateAnim_b__29(
        QuestAfterAction_StateMain___c__DisplayClass16_0_o *this,
        const MethodInfo *method)
{
  struct QuestAfterAction_StateMain_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1BAB678(0LL, method);
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
    sub_1BAB678(0LL, method);
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
    sub_1BAB678(0LL, method);
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
    sub_1BAB678(0LL, method);
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
    sub_1BAB678(0LL, method);
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
    sub_1BAB678(spot, method);
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
    sub_1BAB678(this, method);
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
    sub_1BAB678(this, method);
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
    sub_1BAB678(this, method);
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
    sub_1BAB678(this, method);
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
    sub_1BAB678(this, method);
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

  if ( (byte_4AB2B8A & 1) == 0 )
  {
    sub_1BAB41C(&EventDelegate_Callback_TypeInfo, method);
    sub_1BAB41C(&Method_UnityEngine_GameObject_AddComponent_TweenColor___, v3);
    sub_1BAB41C(&Method_UnityEngine_GameObject_GetComponentInChildren_UISprite___, v4);
    sub_1BAB41C(&Method_QuestAfterAction_StateMain___c__DisplayClass16_14__UpdateAnim_b__19__, v5);
    sub_1BAB41C(&QuestAfterAction_StateMain___c__DisplayClass16_14_TypeInfo, v6);
    byte_4AB2B8A = 1;
  }
  *(_QWORD *)&color.fields.r = 0LL;
  *(_QWORD *)&color.fields.b = 0LL;
  v7 = sub_1BAB668(QuestAfterAction_StateMain___c__DisplayClass16_14_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7 )
    goto LABEL_18;
  *(_QWORD *)(v7 + 24) = this;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v7 + 24), (int32_t)this, v10, v11);
  mapGimmick = (UnityEngine_Component_o *)this->fields.mapGimmick;
  if ( !mapGimmick )
    goto LABEL_18;
  mapGimmick = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mapGimmick, 0LL);
  if ( !mapGimmick )
    goto LABEL_18;
  mapGimmick = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponentInChildren_object_(
                                            (UnityEngine_GameObject_o *)mapGimmick,
                                            (const MethodInfo_2F13BD4 *)Method_UnityEngine_GameObject_GetComponentInChildren_UISprite___);
  if ( !mapGimmick )
    goto LABEL_18;
  v12 = mapGimmick;
  mapGimmick = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mapGimmick, 0LL);
  if ( !mapGimmick )
    goto LABEL_18;
  v13 = UnityEngine_GameObject__AddComponent_object_(
          (UnityEngine_GameObject_o *)mapGimmick,
          (const MethodInfo_2F13888 *)Method_UnityEngine_GameObject_AddComponent_TweenColor___);
  *(_QWORD *)(v7 + 16) = v13;
  v14 = (UnityEngine_Color_o **)(v7 + 16);
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v7 + 16), (int32_t)v13, v15, v16);
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
    sub_1BAB678(mapGimmick, v9);
  }
  if ( v18->max_length <= 2 )
LABEL_19:
    sub_1BAB680(mapGimmick, v9);
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
  v22 = (EventDelegate_Callback_o *)sub_1BAB668(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(
    v22,
    (Il2CppObject *)v7,
    Method_QuestAfterAction_StateMain___c__DisplayClass16_14__UpdateAnim_b__19__,
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


void __fastcall QuestAfterAction_StateMain___c__DisplayClass16_14___UpdateAnim_b__19(
        QuestAfterAction_StateMain___c__DisplayClass16_14_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *tween; // x20
  struct QuestAfterAction_StateMain_o *_4__this; // x0
  __int64 v5; // x1
  struct QuestAfterAction_StateMain___c__DisplayClass16_13_o *CS___8__locals14; // x8
  struct QuestAfterAction_StateMain___c__DisplayClass16_0_o *CS___8__locals13; // x8

  if ( (byte_4AB2B8B & 1) == 0 )
  {
    sub_1BAB41C(&UnityEngine_Object_TypeInfo, method);
    byte_4AB2B8B = 1;
  }
  tween = (UnityEngine_Object_o *)this->fields.tween;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_69800620(tween, 0LL);
  CS___8__locals14 = this->fields.CS___8__locals14;
  if ( !CS___8__locals14
    || (CS___8__locals13 = CS___8__locals14->fields.CS___8__locals13) == 0LL
    || (_4__this = CS___8__locals13->fields.__4__this) == 0LL )
  {
    sub_1BAB678(_4__this, v5);
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
    sub_1BAB678(this, method);
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
    sub_1BAB678(this, method);
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
    sub_1BAB678(spot, method);
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
    sub_1BAB678(spot, method);
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
    sub_1BAB678(this, method);
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
    sub_1BAB678(this, method);
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
    sub_1BAB678(this, method);
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
    sub_1BAB678(this, method);
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
    sub_1BAB678(this, method);
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
    sub_1BAB678(this, method);
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
  sub_1BAB3C0(p_end, 0, v2, v3);
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
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)startCallback, (int32_t)method, v3);
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
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)p_end, (int32_t)endCallback, (int32_t)method, v3);
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
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)v6, (int32_t)vName, v7, v8);
}


void __fastcall QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__81___ctor(
        QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__81_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
  this->fields.__l__initialThreadId = System_Environment__get_CurrentManagedThreadId(0LL);
}


bool __fastcall QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__81__MoveNext(
        QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__81_o *this,
        const MethodInfo *method)
{
  QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__81_o *v2; // x21
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
  QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__81_o *v39; // [xsp+18h] [xbp-48h]

  v2 = this;
  v39 = this;
  if ( (byte_4AB2B8F & 1) == 0 )
  {
    sub_1BAB41C(&System_Collections_Generic_IEnumerable_QuestAfterAction_Command__TypeInfo, method);
    sub_1BAB41C(&System_Collections_Generic_IEnumerator_QuestAfterAction_Command__TypeInfo, v3);
    this = (QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__81_o *)sub_1BAB41C(
                                                                                    &System_Collections_IEnumerator_TypeInfo,
                                                                                    v4);
    byte_4AB2B8F = 1;
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
      sub_1BAB678(this, method);
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
      p_method = sub_1BFD3FC(
                   commandEnumerable,
                   System_Collections_Generic_IEnumerable_QuestAfterAction_Command__TypeInfo,
                   0LL);
    }
    v12 = (*(__int64 (__fastcall **)(struct System_Collections_Generic_IEnumerable_QuestAfterAction_Command__o *, _QWORD))p_method)(
            commandEnumerable,
            *(_QWORD *)(p_method + 8));
    v39->fields.__7__wrap1 = (struct System_Collections_Generic_IEnumerator_QuestAfterAction_Command__o *)v12;
    sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&v39->fields.__7__wrap1, v12, v13, v14);
    v2 = v39;
  }
  _7__wrap1 = v2->fields.__7__wrap1;
  v2->fields.__1__state = -3;
  if ( !_7__wrap1 )
LABEL_46:
    sub_1BAB678(this, method);
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
      v19 = sub_1BFD3FC(_7__wrap1, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(struct System_Collections_Generic_IEnumerator_QuestAfterAction_Command__o *, _QWORD))v19)(
            _7__wrap1,
            *(_QWORD *)(v19 + 8)) & 1) == 0 )
    {
      QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__81____m__Finally1(v39, v20);
      v39->fields.__7__wrap1 = 0LL;
      sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&v39->fields.__7__wrap1, 0, v36, v37);
      return 0;
    }
    v21 = v39->fields.__7__wrap1;
    if ( !v21 )
      sub_1BAB678(v39, v20);
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
      v25 = sub_1BFD3FC(
              v39->fields.__7__wrap1,
              System_Collections_Generic_IEnumerator_QuestAfterAction_Command__TypeInfo,
              0LL);
    }
    v26 = (QuestAfterAction_Command_o *)(*(__int64 (__fastcall **)(struct System_Collections_Generic_IEnumerator_QuestAfterAction_Command__o *, _QWORD))v25)(
                                          v21,
                                          *(_QWORD *)(v25 + 8));
    v28 = v26;
    if ( !v26 )
      sub_1BAB678(0LL, v27);
    if ( !_4__this )
      sub_1BAB678(v26, v27);
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
          v31 = dword_BFCEF0[v30];
          goto LABEL_44;
        }
LABEL_41:
        v31 = -1;
        goto LABEL_44;
      }
      if ( (unsigned int)(id - 400) >= 0xD )
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
    this = (QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__81_o *)QuestAfterAction__IsExistCommand(
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
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&v39->fields.__2__current, (int32_t)v28, v34, v35);
  result = 1;
  v39->fields.__1__state = 1;
  return result;
}


System_Collections_Generic_IEnumerator_QuestAfterAction_Command__o *__fastcall QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__81__System_Collections_Generic_IEnumerable_QuestAfterAction_Command__GetEnumerator(
        QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__81_o *this,
        const MethodInfo *method)
{
  int32_t l__initialThreadId; // w20
  int32_t v4; // w2
  int32_t v5; // w3
  QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__81_o *v6; // x20
  struct QuestAfterAction_o *_4__this; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  struct System_Collections_Generic_IEnumerable_QuestAfterAction_Command__o *_3__commandEnumerable; // x1

  if ( (byte_4AB2B91 & 1) == 0 )
  {
    sub_1BAB41C(&QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__81_TypeInfo, method);
    byte_4AB2B91 = 1;
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
    v6 = (QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__81_o *)sub_1BAB668(QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__81_TypeInfo);
    System_Object___ctor((Il2CppObject *)v6, 0LL);
    v6->fields.__1__state = 0;
    v6->fields.__l__initialThreadId = System_Environment__get_CurrentManagedThreadId(0LL);
    _4__this = this->fields.__4__this;
    v6->fields.__4__this = _4__this;
    sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&v6->fields.__4__this, (int32_t)_4__this, v8, v9);
  }
  _3__commandEnumerable = this->fields.__3__commandEnumerable;
  v6->fields.commandEnumerable = _3__commandEnumerable;
  sub_1BAB3C0(
    (ServantStatusBattleListViewItem_o *)&v6->fields.commandEnumerable,
    (int32_t)_3__commandEnumerable,
    v4,
    v5);
  return (System_Collections_Generic_IEnumerator_QuestAfterAction_Command__o *)v6;
}


QuestAfterAction_Command_o *__fastcall QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__81__System_Collections_Generic_IEnumerator_QuestAfterAction_Command__get_Current(
        QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__81_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__81__System_Collections_IEnumerator_Reset(
        QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__81_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1BAB430(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1BAB668(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1BAB430(&Method_QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__81_System_Collections_IEnumerator_Reset__);
  sub_1BAB544(v3, v4);
}


Il2CppObject *__fastcall QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__81__System_Collections_IEnumerator_get_Current(
        QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__81_o *this,
        const MethodInfo *method)
{
  return (Il2CppObject *)this->fields.__2__current;
}


void __fastcall QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__81__System_IDisposable_Dispose(
        QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__81_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w8

  _1__state = this->fields.__1__state;
  if ( _1__state == 1 || _1__state == -3 )
    QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__81____m__Finally1(this, method);
}


void __fastcall QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__81____m__Finally1(
        QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__81_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_IEnumerator_QuestAfterAction_Command__o *_7__wrap1; // x19
  System_Collections_Generic_IEnumerator_QuestAfterAction_Command__c *klass; // x8
  __int64 v5; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0

  if ( (byte_4AB2B90 & 1) == 0 )
  {
    sub_1BAB41C(&System_IDisposable_TypeInfo, method);
    byte_4AB2B90 = 1;
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
      p_method = sub_1BFD3FC(_7__wrap1, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(struct System_Collections_Generic_IEnumerator_QuestAfterAction_Command__o *, _QWORD))p_method)(
      _7__wrap1,
      *(_QWORD *)(p_method + 8));
  }
}


void __fastcall QuestAfterAction__WaitWhileMainStateFinished_d__85___ctor(
        QuestAfterAction__WaitWhileMainStateFinished_d__85_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall QuestAfterAction__WaitWhileMainStateFinished_d__85__MoveNext(
        QuestAfterAction__WaitWhileMainStateFinished_d__85_o *this,
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
      sub_1BAB678(this, method);
    if ( _4__this->fields.isKeepingMainStateButFinished )
    {
      this->fields.__2__current = 0LL;
      p__2__current = &this->fields.__2__current;
      sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.__2__current, 0, v2, v3);
      result = 1;
      *((_DWORD *)p__2__current - 2) = 1;
      return result;
    }
    ActionExtensions__Call(this->fields.action, 0LL);
  }
  return 0;
}


Il2CppObject *__fastcall QuestAfterAction__WaitWhileMainStateFinished_d__85__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        QuestAfterAction__WaitWhileMainStateFinished_d__85_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn QuestAfterAction__WaitWhileMainStateFinished_d__85__System_Collections_IEnumerator_Reset(
        QuestAfterAction__WaitWhileMainStateFinished_d__85_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1BAB430(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1BAB668(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1BAB430(&Method_QuestAfterAction__WaitWhileMainStateFinished_d__85_System_Collections_IEnumerator_Reset__);
  sub_1BAB544(v3, v4);
}


Il2CppObject *__fastcall QuestAfterAction__WaitWhileMainStateFinished_d__85__System_Collections_IEnumerator_get_Current(
        QuestAfterAction__WaitWhileMainStateFinished_d__85_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall QuestAfterAction__WaitWhileMainStateFinished_d__85__System_IDisposable_Dispose(
        QuestAfterAction__WaitWhileMainStateFinished_d__85_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall QuestAfterAction___c__DisplayClass74_0___ctor(
        QuestAfterAction___c__DisplayClass74_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QuestAfterAction___c__DisplayClass74_0___LoadVoice_b__0(
        QuestAfterAction___c__DisplayClass74_0_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *svtVInfos; // x0
  const MethodInfo *v4; // x3

  if ( (byte_4AB2B8C & 1) == 0 )
  {
    sub_1BAB41C(&Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo__RemoveAt__, method);
    byte_4AB2B8C = 1;
  }
  svtVInfos = (System_Collections_Generic_List_object__o *)this->fields.svtVInfos;
  if ( !svtVInfos
    || (System_Collections_Generic_List_object___RemoveAt(
          svtVInfos,
          0,
          (const MethodInfo_354F090 *)Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo__RemoveAt__),
        (svtVInfos = (System_Collections_Generic_List_object__o *)this->fields.__4__this) == 0LL) )
  {
    sub_1BAB678(svtVInfos, method);
  }
  QuestAfterAction__LoadVoice_34127948((QuestAfterAction_o *)svtVInfos, this->fields.svtVInfos, this->fields.endAct, v4);
}


void __fastcall QuestAfterAction___c__DisplayClass78_0___ctor(
        QuestAfterAction___c__DisplayClass78_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QuestAfterAction___c__DisplayClass78_0___Play_b__0(
        QuestAfterAction___c__DisplayClass78_0_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4AB2B8D & 1) == 0 )
  {
    sub_1BAB41C(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, method);
    byte_4AB2B8D = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_378A64C *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    sub_1BAB678(0LL, v4);
  MissionNotifyManager__EndPause((MissionNotifyManager_o *)Instance, 0LL);
  ActionExtensions__Call(this->fields.endAct, 0LL);
}


void __fastcall QuestAfterAction___c__DisplayClass79_0___ctor(
        QuestAfterAction___c__DisplayClass79_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QuestAfterAction___c__DisplayClass79_0___PlaySpecifiedAction_b__0(
        QuestAfterAction___c__DisplayClass79_0_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  char *_4__this; // x0
  int32_t v6; // w2
  int32_t v7; // w3
  const MethodInfo *v8; // x2

  if ( (byte_4AB2B8E & 1) == 0 )
  {
    sub_1BAB41C(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, method);
    byte_4AB2B8E = 1;
  }
  _4__this = (char *)this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_8;
  *((_QWORD *)_4__this + 22) = 0LL;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(_4__this + 176), 0, v2, v3);
  _4__this = (char *)this->fields.__4__this;
  if ( !_4__this
    || (*((_QWORD *)_4__this + 9) = 0LL,
        sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(_4__this + 72), 0, v6, v7),
        (_4__this = (char *)SingletonTemplate_object___get_Instance((const MethodInfo_378A64C *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__)) == 0LL)
    || (MissionNotifyManager__EndPause((MissionNotifyManager_o *)_4__this, 0LL),
        (_4__this = (char *)this->fields.__4__this) == 0LL) )
  {
LABEL_8:
    sub_1BAB678(_4__this, method);
  }
  QuestAfterAction__SetState((QuestAfterAction_o *)_4__this, 0, v8);
  ActionExtensions__Call(this->fields.finishCallback, 0LL);
}


void __fastcall QuestAfterAction___c__DisplayClass79_0___PlaySpecifiedAction_b__1(
        QuestAfterAction___c__DisplayClass79_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  QuestAfterAction_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1BAB678(0LL, method);
  QuestAfterAction__SetState(_4__this, 2, v2);
}