void __fastcall QuestAfterAction___ctor(QuestAfterAction_o *this, const MethodInfo *method)
{
  Il2CppObject *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  Il2CppObject *v6; // x20
  int32_t v7; // w2
  int32_t v8; // w3
  System_Collections_Generic_Dictionary_TKey__TValue__o *v9; // x20
  int32_t v10; // w2
  int32_t v11; // w3
  System_Collections_Generic_Dictionary_int__object__o *v12; // x20
  int32_t v13; // w2
  int32_t v14; // w3

  if ( (byte_4A58035 & 1) == 0 )
  {
    sub_1B885B0(&BlankEarthQuestAfterAction_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int____ctor__);
    sub_1B885B0(&System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___TypeInfo);
    sub_1B885B0(&System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_QuestAfterAction___ctor__);
    sub_1B885B0(&QuestAfterAction_TitleInfoControlCallback_TypeInfo);
    byte_4A58035 = 1;
  }
  v3 = (Il2CppObject *)sub_1B887FC(QuestAfterAction_TitleInfoControlCallback_TypeInfo);
  System_Object___ctor(v3, 0LL);
  this->fields._TitleInfoCtrlCallback_k__BackingField = (struct QuestAfterAction_TitleInfoControlCallback_o *)v3;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields._TitleInfoCtrlCallback_k__BackingField,
    (int32_t)v3,
    v4,
    v5);
  v6 = (Il2CppObject *)sub_1B887FC(BlankEarthQuestAfterAction_TypeInfo);
  System_Object___ctor(v6, 0LL);
  this->fields._BlankEarthQuestAfterAction_k__BackingField = (struct BlankEarthQuestAfterAction_o *)v6;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields._BlankEarthQuestAfterAction_k__BackingField,
    (int32_t)v6,
    v7,
    v8);
  v9 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1B887FC(System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___TypeInfo);
  System_Collections_Generic_Dictionary_Int32Enum__object____ctor(
    v9,
    (const MethodInfo_319C86C *)Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int____ctor__);
  this->fields.commandTypeIds = (struct System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___o *)v9;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.commandTypeIds, (int32_t)v9, v10, v11);
  v12 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1B887FC(System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v12,
    (const MethodInfo_316CF84 *)Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo___ctor__);
  this->fields.svtVoices = (struct System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__o *)v12;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.svtVoices, (int32_t)v12, v13, v14);
  this->fields.MapMoveBeforeFocusSpotId = -1;
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_3739B30 *)Method_SingletonMonoBehaviour_QuestAfterAction___ctor__);
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
  sub_1B88554(p_endAct, 0, v2, v3);
  ActionExtensions__Call(endAct, 0LL);
}


bool __fastcall QuestAfterAction__CheckChangeBlankEarth(QuestAfterAction_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  Il2CppObject *Instance; // x20
  __int64 v4; // x0
  Il2CppObject *MasterData_object; // x21
  int32_t v6; // w22
  _QWORD *p_image; // x21
  Il2CppObject *v8; // x21
  int32_t v9; // w22
  TerminalPramsManager_c *v10; // x0
  int32_t v11; // w19
  __int64 v12; // x8
  bool result; // w0
  unsigned int *v14; // x19
  __int64 v15; // x23
  unsigned __int64 v16; // x24
  __int64 v17; // x25
  int i; // w26
  __int64 v19; // x20
  int32_t v20; // w2
  int32_t v21; // w3
  __int64 v22; // x1
  int32_t v23; // w2
  int32_t v24; // w3
  __int64 v25; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4A5801B & 1) == 0 )
  {
    sub_1B885B0(&QuestAfterAction_Command___TypeInfo);
    sub_1B885B0(&QuestAfterAction_Command_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_QuestPhaseDetailAddMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_QuestPhaseDetailMaster___);
    sub_1B885B0(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    sub_1B885B0(&StringLiteral_1266/*"1"*/);
    byte_4A5801B = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A5807C )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A5807C = 1;
  }
  v4 = (__int64)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = (__int64)TerminalPramsManager_TypeInfo;
  }
  if ( *(_BYTE *)(*(_QWORD *)(v4 + 184) + 102LL) )
  {
    if ( !Instance )
      goto LABEL_74;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_QuestPhaseDetailAddMaster___);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4A57DC0 )
    {
      sub_1B885B0(&TerminalPramsManager_TypeInfo);
      byte_4A57DC0 = 1;
    }
    v4 = (__int64)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v4 = (__int64)TerminalPramsManager_TypeInfo;
    }
    v6 = *(_DWORD *)(*(_QWORD *)(v4 + 184) + 20LL);
    if ( !byte_4A57DCB )
    {
      sub_1B885B0(&TerminalPramsManager_TypeInfo);
      v4 = (__int64)TerminalPramsManager_TypeInfo;
      byte_4A57DCB = 1;
    }
    if ( !*(_DWORD *)(v4 + 224) )
    {
      j_il2cpp_runtime_class_init_0(v4);
      v4 = (__int64)TerminalPramsManager_TypeInfo;
    }
    if ( !MasterData_object )
      goto LABEL_74;
    p_image = QuestPhaseDetailAddMaster__GetAfterAction(
                (QuestPhaseDetailAddMaster_o *)MasterData_object,
                v6,
                *(_DWORD *)(*(_QWORD *)(v4 + 184) + 24LL) + 1,
                0LL);
    if ( p_image )
      goto LABEL_57;
    v8 = DataManager__GetMasterData_object_(
           (DataManager_o *)Instance,
           (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_QuestPhaseDetailMaster___);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4A57DC0 )
    {
      sub_1B885B0(&TerminalPramsManager_TypeInfo);
      byte_4A57DC0 = 1;
    }
    v4 = (__int64)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v4 = (__int64)TerminalPramsManager_TypeInfo;
    }
    v9 = *(_DWORD *)(*(_QWORD *)(v4 + 184) + 20LL);
    if ( !byte_4A57DCB )
    {
      sub_1B885B0(&TerminalPramsManager_TypeInfo);
      v4 = (__int64)TerminalPramsManager_TypeInfo;
      byte_4A57DCB = 1;
    }
    if ( !*(_DWORD *)(v4 + 224) )
    {
      j_il2cpp_runtime_class_init_0(v4);
      v4 = (__int64)TerminalPramsManager_TypeInfo;
    }
    if ( !v8 )
      goto LABEL_74;
    p_image = QuestPhaseDetailMaster__GetAfterAction(
                (QuestPhaseDetailMaster_o *)v8,
                v9,
                *(_DWORD *)(*(_QWORD *)(v4 + 184) + 24LL) + 1,
                0LL);
    if ( p_image )
      goto LABEL_57;
    v4 = (__int64)TerminalPramsManager_TypeInfo;
  }
  if ( !*(_DWORD *)(v4 + 224) )
    j_il2cpp_runtime_class_init_0(v4);
  if ( !byte_4A5807F )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A5807F = 1;
  }
  v10 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v10 = TerminalPramsManager_TypeInfo;
  }
  if ( !v10->static_fields->_IsQuestClear_k__BackingField )
    return 0;
  if ( !v10->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v10);
  if ( TerminalPramsManager__get_Debug_IsQuestReleaseAll(0LL) )
    return 0;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A57DC0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A57DC0 = 1;
  }
  v4 = (__int64)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = (__int64)TerminalPramsManager_TypeInfo;
  }
  if ( !Instance
    || (v11 = *(_DWORD *)(*(_QWORD *)(v4 + 184) + 20LL),
        (v4 = (__int64)DataManager__GetMasterData_object_(
                         (DataManager_o *)Instance,
                         (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_QuestMaster___)) == 0) )
  {
LABEL_74:
    sub_1B8880C(v4, v2);
  }
  v4 = DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)v4,
         &entity,
         v11,
         (const MethodInfo_311D988 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
  if ( (v4 & 1) == 0 )
    return 0;
  if ( !entity )
    goto LABEL_74;
  p_image = &entity[6].klass->_1.image;
  if ( !p_image )
    return 0;
LABEL_57:
  v12 = p_image[3];
  result = 0;
  if ( (int)v12 < 2 || (v12 & 1) != 0 )
    return result;
  v4 = sub_1B88658(QuestAfterAction_Command___TypeInfo, (unsigned int)v12 >> 1);
  if ( !v4 )
    goto LABEL_74;
  v14 = (unsigned int *)v4;
  if ( *(int *)(v4 + 24) < 1 )
    return 0;
  v15 = 0LL;
  v16 = 0LL;
  v17 = v4 + 32;
  for ( i = 1; ; i += 2 )
  {
    v19 = sub_1B887FC(QuestAfterAction_Command_TypeInfo);
    System_Object___ctor((Il2CppObject *)v19, 0LL);
    if ( (unsigned int)(i - 1) >= *((_DWORD *)p_image + 6) )
      goto LABEL_73;
    v4 = System_Int32__Parse((System_String_o *)p_image[i + 3], 0LL);
    if ( !v19 )
      goto LABEL_74;
    *(_DWORD *)(v19 + 16) = v4;
    if ( (unsigned int)i >= *((_DWORD *)p_image + 6) )
LABEL_73:
      sub_1B88814(v4, v2);
    v22 = p_image[i + 4];
    *(_QWORD *)(v19 + 24) = v22;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v19 + 24), v22, v20, v21);
    if ( *(_DWORD *)(v19 + 16) == 701
      && System_String__op_Equality(*(System_String_o **)(v19 + 24), (System_String_o *)StringLiteral_1266/*"1"*/, 0LL) )
    {
      break;
    }
    v4 = sub_1B886EC(v19, *(_QWORD *)(*(_QWORD *)v14 + 64LL));
    if ( !v4 )
    {
      v25 = sub_1B88830();
      sub_1B886D8(v25, 0LL);
    }
    if ( v16 >= v14[6] )
      goto LABEL_73;
    *(_QWORD *)(v17 + 8 * v16) = v19;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v17 + v15), v19, v23, v24);
    ++v16;
    v15 += 8LL;
    if ( (__int64)v16 >= (int)v14[6] )
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
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x2
  TerminalPramsManager_c *v7; // x0
  int32_t QuestId_k__BackingField; // w21
  System_String_array *v9; // x22
  __int64 v10; // x1
  Il2CppObject *Instance; // x21
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // x0
  System_Collections_Generic_Dictionary_string__DataEntityBase__c *klass; // x8
  System_Collections_Generic_Dictionary_string__DataEntityBase__c *v14; // x8
  const MethodInfo *v15; // x8
  int32_t invoker_method_high; // w24
  System_Collections_Generic_Dictionary_string__DataEntityBase__c *v17; // x8
  const MethodInfo *v18; // x8
  int32_t invoker_method; // w25
  System_Collections_Generic_Dictionary_string__DataEntityBase__c *v20; // x8
  const MethodInfo *v21; // x8
  int32_t MasterName_k__BackingField; // w24
  System_Collections_Generic_Dictionary_string__DataEntityBase__c *v23; // x8
  const MethodInfo *v24; // x8
  int32_t MasterKind_k__BackingField; // w24
  TerminalPramsManager_c *v26; // x0
  TerminalSceneComponent_c *v27; // x0
  TerminalPramsManager_c *v28; // x0
  DataMasterBase_TMaster__TEntity__PKType__o *v29; // x22
  int32_t v30; // w23
  int32_t v31; // w23
  System_String_o *seriazlier; // x23
  bool v33; // w23
  bool v34; // w22
  Il2CppObject *MasterData_object; // x22
  WarEntity_o *QuestId; // x0
  WarEntity_o *v37; // x22
  TerminalPramsManager_c *v38; // x0
  int32_t id; // w19
  bool v40; // w22
  TerminalPramsManager_c *v41; // x0
  TerminalPramsManager_c *v42; // x0
  Il2CppObject *v43; // x22
  int32_t buckets_high; // w23
  Il2CppObject *v45; // x22
  int32_t v46; // w23
  TerminalPramsManager_c *v47; // x0
  int32_t v48; // w22
  Il2CppObject *v49; // x0
  Il2CppObject *v50; // x21
  int32_t v51; // w23
  const MethodInfo *v52; // x1
  bool IsOverwriteCommandNone; // w0
  __int64 v54; // x8
  __int64 v55; // x0
  unsigned int **p_commandBuf; // x21
  int32_t v57; // w2
  int32_t v58; // w3
  int *commandBuf; // x8
  unsigned __int64 v60; // x23
  il2cpp_array_size_t v61; // w29
  __int64 v62; // x24
  int32_t v63; // w2
  int32_t v64; // w3
  __int64 v65; // x8
  System_String_o *v66; // x1
  System_String_o **v67; // x25
  const MethodInfo *v68; // x2
  int v69; // w8
  int v70; // w8
  System_Collections_Generic_Dictionary_int__object__o *svtVoices; // x26
  DataMasterBase_TMaster__TEntity__PKType__o *v72; // x28
  __int64 v73; // x27
  int32_t v74; // w2
  int32_t v75; // w3
  int v76; // w8
  unsigned int v77; // w8
  System_Collections_Generic_List_int__o *Item; // x26
  const MethodInfo *v79; // x1
  struct System_Int32_array *items; // x8
  _QWORD *v81; // x9
  __int64 size; // x10
  QuestAfterAction_o *v83; // x0
  const MethodInfo *v84; // x2
  System_String_c *v85; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v86; // x25
  unsigned __int64 v87; // x26
  System_String_Fields v88; // x8
  _QWORD *v89; // x9
  __int64 MasterName_k__BackingField_low; // x10
  unsigned int *v91; // x25
  int32_t v92; // w2
  int32_t v93; // w3
  unsigned int *v94; // x0
  TerminalPramsManager_c *v95; // x0
  Il2CppObject *v96; // x20
  TerminalPramsManager_c *v97; // x0
  BalanceConfig_c *v98; // x8
  int32_t WarId_k__BackingField; // w20
  int32_t v100; // w20
  TerminalPramsManager_c *v101; // x0
  TerminalPramsManager_c *v102; // x0
  BalanceConfig_c *v103; // x8
  int32_t v104; // w19
  TerminalPramsManager_c *v105; // x0
  TerminalPramsManager_c *v106; // x0
  __int64 v107; // x0
  int32_t v108; // [xsp+8h] [xbp-78h]
  int32_t svtId; // [xsp+Ch] [xbp-74h] BYREF
  Il2CppObject *v110; // [xsp+10h] [xbp-70h] BYREF
  QuestEntity_o *entity; // [xsp+18h] [xbp-68h] BYREF

  v4 = this;
  if ( (byte_4A5801A & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&bool_TypeInfo);
    sub_1B885B0(&QuestAfterAction_Command___TypeInfo);
    sub_1B885B0(&QuestAfterAction_Command_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_EventMissionMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_QuestPhaseDetailAddMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_QuestPhaseDetailMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_WarMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_BlankEarthSpotMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_QuestBehaviorMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_QuestMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_ShopMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_WarMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    sub_1B885B0(&Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__);
    sub_1B885B0(&Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__GetEntity__);
    sub_1B885B0(&Method_DataMasterBase_BlankEarthSpotMaster__BlankEarthSpotEntity__int__TryGetEntity__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___get_Item__);
    sub_1B885B0(&Method_System_Linq_Enumerable_Any_KeyValuePair_int__QuestAfterAction_VoiceInfo____);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Add__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    sub_1B885B0(&TerminalSceneComponent_TypeInfo);
    sub_1B885B0(&QuestAfterAction_VoiceInfo_TypeInfo);
    this = (QuestAfterAction_o *)sub_1B885B0(&StringLiteral_16709/*"afterActionBk"*/);
    byte_4A5801A = 1;
  }
  v110 = 0LL;
  entity = 0LL;
  svtId = 0;
  *(_WORD *)&v4->fields.isLoadedVoice = 0;
  *(_QWORD *)&v4->fields.ActionMapTargetType = -1LL;
  if ( isBeforeAction )
  {
    if ( System_Linq_Enumerable__Any_KeyValuePair_int__object__(
           (System_Collections_Generic_IEnumerable_TSource__o *)v4->fields.svtVoices,
           (const MethodInfo_2E8C5E4 *)Method_System_Linq_Enumerable_Any_KeyValuePair_int__QuestAfterAction_VoiceInfo____) )
    {
      QuestAfterAction__releaseVoice(v4, v5);
    }
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4A57DC0 )
    {
      sub_1B885B0(&TerminalPramsManager_TypeInfo);
      byte_4A57DC0 = 1;
    }
    v7 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v7 = TerminalPramsManager_TypeInfo;
    }
    QuestId_k__BackingField = v7->static_fields->_QuestId_k__BackingField;
    if ( !byte_4A57DCB )
    {
      sub_1B885B0(&TerminalPramsManager_TypeInfo);
      v7 = TerminalPramsManager_TypeInfo;
      byte_4A57DCB = 1;
    }
    if ( !v7->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v7);
      v7 = TerminalPramsManager_TypeInfo;
    }
    v9 = QuestAfterAction__GetBeforeAction(
           QuestId_k__BackingField,
           v7->static_fields->_PhaseCnt_k__BackingField + 1,
           v6);
    goto LABEL_211;
  }
  QuestAfterAction__LoadTerminalTransitionInfo(this, (const MethodInfo *)isBeforeAction);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4A5629D )
  {
    sub_1B885B0(&TerminalSceneComponent_TypeInfo);
    byte_4A5629D = 1;
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
    if ( !byte_4A5629D )
    {
      sub_1B885B0(&TerminalSceneComponent_TypeInfo);
      byte_4A5629D = 1;
    }
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalSceneComponent_TypeInfo;
    }
    v14 = Master_object[2].fields._lookup->klass;
    if ( !v14 )
      goto LABEL_294;
    v15 = v14->vtable._9_Add.method;
    if ( !v15 )
      goto LABEL_294;
    invoker_method_high = HIDWORD(v15->invoker_method);
    if ( !byte_4A5629D )
    {
      sub_1B885B0(&TerminalSceneComponent_TypeInfo);
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalSceneComponent_TypeInfo;
      byte_4A5629D = 1;
    }
    if ( !LODWORD(Master_object[3].monitor) )
    {
      j_il2cpp_runtime_class_init_0(Master_object);
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalSceneComponent_TypeInfo;
    }
    v17 = Master_object[2].fields._lookup->klass;
    if ( !v17 )
      goto LABEL_294;
    v18 = v17->vtable._9_Add.method;
    if ( !v18 )
      goto LABEL_294;
    invoker_method = (int32_t)v18->invoker_method;
    if ( invoker_method < 1 )
    {
      if ( invoker_method_high < 1 )
        goto LABEL_80;
      if ( !LODWORD(Master_object[3].monitor) )
        j_il2cpp_runtime_class_init_0(Master_object);
      if ( !byte_4A5629D )
      {
        sub_1B885B0(&TerminalSceneComponent_TypeInfo);
        byte_4A5629D = 1;
      }
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalSceneComponent_TypeInfo;
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalSceneComponent_TypeInfo;
      }
      v23 = Master_object[2].fields._lookup->klass;
      if ( !v23 )
        goto LABEL_294;
      v24 = v23->vtable._9_Add.method;
      if ( !v24 )
        goto LABEL_294;
      v9 = (System_String_array *)v24->klass;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ShopMaster___);
      if ( !Master_object )
        goto LABEL_294;
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__int___GetEntity(
                                                                      Master_object,
                                                                      invoker_method_high,
                                                                      (const MethodInfo_311D934 *)Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__);
      if ( !Master_object )
        goto LABEL_294;
      MasterName_k__BackingField = (int32_t)Master_object->fields._MasterName_k__BackingField;
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_WarMaster___);
      if ( !Master_object )
        goto LABEL_294;
    }
    else
    {
      if ( !LODWORD(Master_object[3].monitor) )
        j_il2cpp_runtime_class_init_0(Master_object);
      if ( !byte_4A5629D )
      {
        sub_1B885B0(&TerminalSceneComponent_TypeInfo);
        byte_4A5629D = 1;
      }
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalSceneComponent_TypeInfo;
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalSceneComponent_TypeInfo;
      }
      v20 = Master_object[2].fields._lookup->klass;
      if ( !v20 )
        goto LABEL_294;
      v21 = v20->vtable._9_Add.method;
      if ( !v21 )
        goto LABEL_294;
      if ( !Instance )
        goto LABEL_294;
      v9 = (System_String_array *)v21->klass;
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMasterData_object_(
                                                                      (DataManager_o *)Instance,
                                                                      (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventMissionMaster___);
      if ( !Master_object )
        goto LABEL_294;
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__int___GetEntity(
                                                                      Master_object,
                                                                      invoker_method,
                                                                      (const MethodInfo_311D934 *)Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__GetEntity__);
      if ( !Master_object )
        goto LABEL_294;
      MasterName_k__BackingField = HIDWORD(Master_object->fields._MasterName_k__BackingField);
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMasterData_object_(
                                                                      (DataManager_o *)Instance,
                                                                      (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_WarMaster___);
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
    if ( !byte_4A57DCA )
    {
      sub_1B885B0(&TerminalPramsManager_TypeInfo);
      byte_4A57DCA = 1;
    }
    v26 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v26 = TerminalPramsManager_TypeInfo;
    }
    v26->static_fields->_WarId_k__BackingField = MasterKind_k__BackingField;
    if ( !byte_4A5629D )
    {
      sub_1B885B0(&TerminalSceneComponent_TypeInfo);
      byte_4A5629D = 1;
    }
    v27 = TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      v27 = TerminalSceneComponent_TypeInfo;
    }
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)v27->static_fields->mInstance;
    if ( !Master_object )
      goto LABEL_294;
    TerminalSceneComponent__CallQuestInformationCloseAtAll((TerminalSceneComponent_o *)Master_object, 0, 0LL);
    if ( v9 )
      goto LABEL_211;
  }
LABEL_80:
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A5807C )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A5807C = 1;
  }
  v28 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v28 = TerminalPramsManager_TypeInfo;
  }
  if ( !v28->static_fields->_IsPhaseClear_k__BackingField
    && UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_16709/*"afterActionBk"*/, 0LL) )
  {
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)UnityEngine_PlayerPrefs__GetString_69417656(
                                                                    (System_String_o *)StringLiteral_16709/*"afterActionBk"*/,
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
    v29 = Master_object;
    if ( !LODWORD(Master_object->fields._MasterName_k__BackingField) )
      goto LABEL_383;
    v30 = System_Int32__Parse((System_String_o *)Master_object->fields.list, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4A57DC4 )
    {
      sub_1B885B0(&TerminalPramsManager_TypeInfo);
      byte_4A57DC4 = 1;
    }
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
    }
    HIDWORD(Master_object[2].fields._lookup->fields._buckets) = v30;
    if ( LODWORD(v29->fields._MasterName_k__BackingField) <= 1 )
      goto LABEL_383;
    v31 = System_Int32__Parse((System_String_o *)v29->fields._lookup, 0LL);
    if ( !byte_4A57DC8 )
    {
      sub_1B885B0(&TerminalPramsManager_TypeInfo);
      byte_4A57DC8 = 1;
    }
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
    }
    LODWORD(Master_object[2].fields._lookup->fields._entries) = v31;
    if ( LODWORD(v29->fields._MasterName_k__BackingField) <= 2 )
      goto LABEL_383;
    seriazlier = (System_String_o *)v29->fields.seriazlier;
    if ( !bool_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(bool_TypeInfo);
    v33 = System_Boolean__Parse(seriazlier, 0LL);
    if ( !byte_4A5807D )
    {
      sub_1B885B0(&TerminalPramsManager_TypeInfo);
      byte_4A5807D = 1;
    }
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
    }
    BYTE5(Master_object[2].fields._lookup[1].fields._buckets) = v33;
    if ( LODWORD(v29->fields._MasterName_k__BackingField) <= 3 )
      goto LABEL_383;
    v34 = System_Boolean__Parse((System_String_o *)v29->fields.sb, 0LL);
    if ( !byte_4A5807E )
    {
      sub_1B885B0(&TerminalPramsManager_TypeInfo);
      byte_4A5807E = 1;
    }
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
    }
    BYTE6(Master_object[2].fields._lookup[1].fields._buckets) = v34;
    if ( !byte_4A5807F )
    {
      sub_1B885B0(&TerminalPramsManager_TypeInfo);
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
      byte_4A5807F = 1;
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
                            (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_WarMaster___);
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4A57DC0 )
      {
        sub_1B885B0(&TerminalPramsManager_TypeInfo);
        byte_4A57DC0 = 1;
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
        v37 = QuestId;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_4A58080 )
        {
          sub_1B885B0(&TerminalPramsManager_TypeInfo);
          byte_4A58080 = 1;
        }
        v38 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v38 = TerminalPramsManager_TypeInfo;
        }
        v38->static_fields->_IsWarClear_k__BackingField = 1;
        id = v37->fields.id;
        if ( !byte_4A57DCA )
        {
          sub_1B885B0(&TerminalPramsManager_TypeInfo);
          v38 = TerminalPramsManager_TypeInfo;
          byte_4A57DCA = 1;
        }
        if ( !v38->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v38);
          v38 = TerminalPramsManager_TypeInfo;
        }
        v38->static_fields->_WarId_k__BackingField = id;
        v40 = TerminalPramsManager__CheckIsOrdealCallWarClear(v37, 0LL);
        if ( !byte_4A58081 )
        {
          sub_1B885B0(&TerminalPramsManager_TypeInfo);
          byte_4A58081 = 1;
        }
        v41 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v41 = TerminalPramsManager_TypeInfo;
        }
        v41->static_fields->_IsOrdealCallWarClear_k__BackingField = v40;
      }
    }
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A58082 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A58082 = 1;
  }
  v42 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v42 = TerminalPramsManager_TypeInfo;
  }
  if ( v42->static_fields->_IsWarClear_k__BackingField )
  {
    if ( !v42->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v42);
    if ( !byte_4A57CDE )
    {
      sub_1B885B0(&TerminalPramsManager_TypeInfo);
      byte_4A57CDE = 1;
    }
    v42 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v42 = TerminalPramsManager_TypeInfo;
    }
    if ( !v42->static_fields->_IsOrdealCallWarClear_k__BackingField )
      goto LABEL_210;
  }
  if ( !v42->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v42);
  if ( !byte_4A5807C )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A5807C = 1;
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
    v43 = DataManager__GetMasterData_object_(
            (DataManager_o *)Instance,
            (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_QuestPhaseDetailAddMaster___);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4A57DC0 )
    {
      sub_1B885B0(&TerminalPramsManager_TypeInfo);
      byte_4A57DC0 = 1;
    }
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
    }
    buckets_high = HIDWORD(Master_object[2].fields._lookup->fields._buckets);
    if ( !byte_4A57DCB )
    {
      sub_1B885B0(&TerminalPramsManager_TypeInfo);
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
      byte_4A57DCB = 1;
    }
    if ( !LODWORD(Master_object[3].monitor) )
    {
      j_il2cpp_runtime_class_init_0(Master_object);
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
    }
    if ( !v43 )
      goto LABEL_294;
    v9 = QuestPhaseDetailAddMaster__GetAfterAction(
           (QuestPhaseDetailAddMaster_o *)v43,
           buckets_high,
           LODWORD(Master_object[2].fields._lookup->fields._entries) + 1,
           0LL);
    if ( v9 )
      goto LABEL_211;
    v45 = DataManager__GetMasterData_object_(
            (DataManager_o *)Instance,
            (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_QuestPhaseDetailMaster___);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4A57DC0 )
    {
      sub_1B885B0(&TerminalPramsManager_TypeInfo);
      byte_4A57DC0 = 1;
    }
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
    }
    v46 = HIDWORD(Master_object[2].fields._lookup->fields._buckets);
    if ( !byte_4A57DCB )
    {
      sub_1B885B0(&TerminalPramsManager_TypeInfo);
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
      byte_4A57DCB = 1;
    }
    if ( !LODWORD(Master_object[3].monitor) )
    {
      j_il2cpp_runtime_class_init_0(Master_object);
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
    }
    if ( !v45 )
      goto LABEL_294;
    v9 = QuestPhaseDetailMaster__GetAfterAction(
           (QuestPhaseDetailMaster_o *)v45,
           v46,
           LODWORD(Master_object[2].fields._lookup->fields._entries) + 1,
           0LL);
    if ( v9 )
      goto LABEL_211;
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
  }
  if ( !LODWORD(Master_object[3].monitor) )
    j_il2cpp_runtime_class_init_0(Master_object);
  if ( !byte_4A5807F )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A5807F = 1;
  }
  v47 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v47 = TerminalPramsManager_TypeInfo;
  }
  if ( !v47->static_fields->_IsQuestClear_k__BackingField )
    goto LABEL_210;
  if ( !v47->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v47);
  v9 = 0LL;
  if ( TerminalPramsManager__get_Debug_IsQuestReleaseAll(0LL) )
    goto LABEL_211;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A57DC0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A57DC0 = 1;
  }
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
  }
  if ( !Instance )
    goto LABEL_294;
  v48 = HIDWORD(Master_object[2].fields._lookup->fields._buckets);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMasterData_object_(
                                                                  (DataManager_o *)Instance,
                                                                  (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !Master_object )
    goto LABEL_294;
  v49 = DataMasterBase_object__object__int___GetEntity(
          Master_object,
          v48,
          (const MethodInfo_311D934 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
  if ( v49 )
    v9 = (System_String_array *)v49[6].klass;
  else
LABEL_210:
    v9 = 0LL;
LABEL_211:
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v50 = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_QuestBehaviorMaster___);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A57DC0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A57DC0 = 1;
  }
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
  }
  v51 = HIDWORD(Master_object[2].fields._lookup->fields._buckets);
  if ( !byte_4A57DCB )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
    byte_4A57DCB = 1;
  }
  if ( !LODWORD(Master_object[3].monitor) )
  {
    j_il2cpp_runtime_class_init_0(Master_object);
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
  }
  if ( !v50 )
    goto LABEL_294;
  if ( QuestBehaviorMaster__IsOpenQuestBehaviorCond(
         (QuestBehaviorMaster_o *)v50,
         v51,
         LODWORD(Master_object[2].fields._lookup->fields._entries) + 1,
         7,
         0LL)
    || (IsOverwriteCommandNone = QuestAfterAction__IsOverwriteCommandNone(v9, v52), !v9)
    || IsOverwriteCommandNone
    || (v54 = *(_QWORD *)&v9->max_length, (int)v54 < 2)
    || (v54 & 1) != 0 )
  {
    UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_16709/*"afterActionBk"*/, 0LL);
    return;
  }
  v55 = sub_1B88658(QuestAfterAction_Command___TypeInfo, (unsigned int)v54 >> 1);
  v4->fields.commandBuf = (struct QuestAfterAction_Command_array *)v55;
  p_commandBuf = (unsigned int **)&v4->fields.commandBuf;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v4->fields.commandBuf, v55, v57, v58);
  commandBuf = (int *)v4->fields.commandBuf;
  if ( !commandBuf )
    goto LABEL_294;
  v60 = 0LL;
  v61 = 0;
  while ( (__int64)v60 < commandBuf[6] )
  {
    v62 = sub_1B887FC(QuestAfterAction_Command_TypeInfo);
    System_Object___ctor((Il2CppObject *)v62, 0LL);
    if ( v61 >= v9->max_length )
      goto LABEL_383;
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)System_Int32__Parse(v9->m_Items[v61], 0LL);
    if ( !v62 )
      goto LABEL_294;
    *(_DWORD *)(v62 + 16) = (_DWORD)Master_object;
    v65 = (int)v61 | 1LL;
    if ( (unsigned int)v65 >= v9->max_length )
      goto LABEL_383;
    v66 = v9->m_Items[v65];
    *(_QWORD *)(v62 + 24) = v66;
    v67 = (System_String_o **)(v62 + 24);
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v62 + 24), (int32_t)v66, v63, v64);
    if ( !v4->fields.hasFadeCommand )
    {
      v69 = *(_DWORD *)(v62 + 16);
      if ( v69 == 520 || v69 == 405 )
        v4->fields.hasFadeCommand = 1;
    }
    if ( !v61 && !v4->fields.isRequestedStopBgm && *(_DWORD *)(v62 + 16) == 850 )
      v4->fields.isRequestedStopBgm = 1;
    if ( (v4->fields.MapMoveBeforeFocusSpotId & 0x80000000) != 0 && *(_DWORD *)(v62 + 16) == 350 )
    {
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)*v67;
      if ( !*v67 )
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
    v70 = *(_DWORD *)(v62 + 16);
    if ( v4->fields.IsMoveToEventRewardShop || v70 != 700 )
    {
      if ( v70 == 800 )
      {
        Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)QuestAfterAction_Command__GetAvailableRandomVoice(
                                                                        (QuestAfterAction_Command_o *)v62,
                                                                        &svtId,
                                                                        v68);
        if ( Master_object )
        {
          svtVoices = (System_Collections_Generic_Dictionary_int__object__o *)v4->fields.svtVoices;
          v72 = Master_object;
          v108 = svtId;
          v73 = sub_1B887FC(QuestAfterAction_VoiceInfo_TypeInfo);
          System_Object___ctor((Il2CppObject *)v73, 0LL);
          *(_DWORD *)(v73 + 16) = v108;
          *(_QWORD *)(v73 + 24) = v72;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v73 + 24), (int32_t)v72, v74, v75);
          if ( !svtVoices )
            goto LABEL_294;
          System_Collections_Generic_Dictionary_int__object___Add(
            svtVoices,
            v60,
            (Il2CppObject *)v73,
            (const MethodInfo_316D958 *)Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__Add__);
        }
      }
    }
    else
    {
      v4->fields.IsMoveToEventRewardShop = 1;
    }
    v76 = *(_DWORD *)(v62 + 16);
    if ( v76 <= 205 )
    {
      if ( (unsigned int)(v76 - 100) < 0xF && ((0x7C1Fu >> (v76 - 100)) & 1) != 0 )
      {
        v10 = 0LL;
      }
      else
      {
        if ( (unsigned int)(v76 - 200) > 5 )
          goto LABEL_277;
        v10 = 1LL;
      }
    }
    else if ( v76 <= 550 )
    {
      if ( (unsigned int)(v76 - 400) < 0xA )
      {
        v10 = 2LL;
      }
      else
      {
        if ( v76 != 550 )
          goto LABEL_277;
        v10 = 3LL;
      }
    }
    else
    {
      v77 = v76 - 1000;
      if ( v77 >= 0xD || ((0x1C07u >> v77) & 1) == 0 )
        goto LABEL_277;
      v10 = 4LL;
    }
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)v4->fields.commandTypeIds;
    if ( !Master_object )
      goto LABEL_294;
    Item = (System_Collections_Generic_List_int__o *)System_Collections_Generic_Dictionary_Int32Enum__object___get_Item(
                                                       (System_Collections_Generic_Dictionary_TKey__TValue__o *)Master_object,
                                                       v10,
                                                       (const MethodInfo_319D1A0 *)Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___get_Item__);
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)QuestAfterAction__ExtractCommandTargetId(
                                                                    (QuestAfterAction_Command_o *)v62,
                                                                    v79);
    if ( !Item )
      goto LABEL_294;
    items = Item->fields._items;
    v81 = Method_System_Collections_Generic_List_int__Add__;
    ++Item->fields._version;
    if ( !items )
      goto LABEL_294;
    size = Item->fields._size;
    v10 = (unsigned int)Master_object;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_int___AddWithResize(
        Item,
        (int32_t)Master_object,
        *(const MethodInfo_34E0810 **)(*(_QWORD *)(v81[4] + 192LL) + 112LL));
    }
    else
    {
      Item->fields._size = size + 1;
      items->m_Items[size + 1] = (int)Master_object;
    }
LABEL_277:
    if ( v4->fields.ActionMapTargetId <= 0 )
      QuestAfterAction__SetActionMap(v4, (QuestAfterAction_Command_o *)v62, v68);
    if ( *(_DWORD *)(v62 + 16) == 102 )
    {
      v83 = (QuestAfterAction_o *)System_Int32__Parse(*v67, 0LL);
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)QuestAfterAction__GetMapGimmickId(
                                                                      v83,
                                                                      (int32_t)v83,
                                                                      v84);
      if ( !Master_object )
        goto LABEL_294;
      v85 = (System_String_c *)Master_object->fields._MasterName_k__BackingField;
      v86 = Master_object;
      if ( (int)v85 >= 1 )
      {
        v87 = 0LL;
        while ( v87 < (unsigned int)v85 )
        {
          Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)v4->fields.invalidMapGimmickIdList;
          if ( !Master_object )
            goto LABEL_294;
          v10 = *((unsigned int *)&v86->fields.list + v87);
          v88 = *(System_String_Fields *)&Master_object->fields._MasterKind_k__BackingField;
          v89 = Method_System_Collections_Generic_List_int__Add__;
          ++HIDWORD(Master_object->fields._MasterName_k__BackingField);
          if ( !*(_QWORD *)&v88 )
            goto LABEL_294;
          MasterName_k__BackingField_low = SLODWORD(Master_object->fields._MasterName_k__BackingField);
          if ( (unsigned int)MasterName_k__BackingField_low >= *(_DWORD *)(*(_QWORD *)&v88 + 24LL) )
          {
            System_Collections_Generic_List_int___AddWithResize(
              (System_Collections_Generic_List_int__o *)Master_object,
              v10,
              *(const MethodInfo_34E0810 **)(*(_QWORD *)(v89[4] + 192LL) + 112LL));
          }
          else
          {
            LODWORD(Master_object->fields._MasterName_k__BackingField) = MasterName_k__BackingField_low + 1;
            *(_DWORD *)(*(_QWORD *)&v88 + 4 * MasterName_k__BackingField_low + 32) = v10;
          }
          LODWORD(v85) = v86->fields._MasterName_k__BackingField;
          if ( (__int64)++v87 >= (int)v85 )
            goto LABEL_290;
        }
LABEL_383:
        sub_1B88814(Master_object, v10);
      }
    }
LABEL_290:
    v91 = *p_commandBuf;
    if ( !*p_commandBuf )
      goto LABEL_294;
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)sub_1B886EC(v62, *(_QWORD *)(*(_QWORD *)v91 + 64LL));
    if ( !Master_object )
    {
      v107 = sub_1B88830();
      sub_1B886D8(v107, 0LL);
    }
    if ( v60 >= v91[6] )
      goto LABEL_383;
    v94 = &v91[2 * v60];
    *((_QWORD *)v94 + 4) = v62;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v94 + 8), v62, v92, v93);
    commandBuf = (int *)*p_commandBuf;
    v61 += 2;
    ++v60;
    if ( !*p_commandBuf )
      goto LABEL_294;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A5807C )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A5807C = 1;
  }
  v95 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v95 = TerminalPramsManager_TypeInfo;
  }
  if ( v95->static_fields->_IsPhaseClear_k__BackingField )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v96 = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_QuestMaster___);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4A57DC0 )
    {
      sub_1B885B0(&TerminalPramsManager_TypeInfo);
      byte_4A57DC0 = 1;
    }
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
    }
    if ( !v96 )
      goto LABEL_294;
    if ( QuestMaster__TryGetQuestEntity(
           (QuestMaster_o *)v96,
           &entity,
           HIDWORD(Master_object[2].fields._lookup->fields._buckets),
           0LL) )
    {
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4A57DC3 )
      {
        sub_1B885B0(&TerminalPramsManager_TypeInfo);
        byte_4A57DC3 = 1;
      }
      v97 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v97 = TerminalPramsManager_TypeInfo;
      }
      v98 = BalanceConfig_TypeInfo;
      WarId_k__BackingField = v97->static_fields->_WarId_k__BackingField;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v98 = BalanceConfig_TypeInfo;
      }
      if ( WarId_k__BackingField == v98->static_fields->OrdealCallWarId )
      {
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_BlankEarthSpotMaster___);
        if ( entity && Master_object )
        {
          Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__int___TryGetEntity(
                                                                          Master_object,
                                                                          &v110,
                                                                          entity->fields.spotId,
                                                                          (const MethodInfo_311D988 *)Method_DataMasterBase_BlankEarthSpotMaster__BlankEarthSpotEntity__int__TryGetEntity__);
          if ( ((unsigned __int8)Master_object & 1) == 0 )
            goto LABEL_334;
          if ( v110 )
          {
            v100 = (int32_t)v110[1].klass;
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            if ( !byte_4A58083 )
            {
              sub_1B885B0(&TerminalPramsManager_TypeInfo);
              byte_4A58083 = 1;
            }
            v101 = TerminalPramsManager_TypeInfo;
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
              v101 = TerminalPramsManager_TypeInfo;
            }
            v101->static_fields->_BlankEarthAfterActionFocusSpotId_k__BackingField = v100;
            goto LABEL_334;
          }
        }
LABEL_294:
        sub_1B8880C(Master_object, v10);
      }
    }
  }
LABEL_334:
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A5644B )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A5644B = 1;
  }
  v102 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v102 = TerminalPramsManager_TypeInfo;
  }
  v102->static_fields->_IsAutoResume_k__BackingField = 1;
  if ( !byte_4A57DC6 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    v102 = TerminalPramsManager_TypeInfo;
    byte_4A57DC6 = 1;
  }
  if ( !v102->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v102);
    v102 = TerminalPramsManager_TypeInfo;
  }
  v102->static_fields->_DispState_k__BackingField = 2;
  if ( !byte_4A57DC3 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    v102 = TerminalPramsManager_TypeInfo;
    byte_4A57DC3 = 1;
  }
  if ( !v102->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v102);
    v102 = TerminalPramsManager_TypeInfo;
  }
  v103 = BalanceConfig_TypeInfo;
  v104 = v102->static_fields->_WarId_k__BackingField;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v103 = BalanceConfig_TypeInfo;
  }
  v105 = TerminalPramsManager_TypeInfo;
  if ( v104 == v103->static_fields->OrdealCallWarId )
    goto LABEL_387;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A57CDE )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A57CDE = 1;
  }
  v105 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v105 = TerminalPramsManager_TypeInfo;
  }
  if ( v105->static_fields->_IsOrdealCallWarClear_k__BackingField )
  {
LABEL_387:
    if ( !v105->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v105);
    if ( !byte_4A57CDF )
    {
      sub_1B885B0(&TerminalPramsManager_TypeInfo);
      byte_4A57CDF = 1;
    }
    v105 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v105 = TerminalPramsManager_TypeInfo;
    }
    v105->static_fields->_BlankEarthSpotId_k__BackingField = 0;
    if ( !byte_4A57CDE )
    {
      sub_1B885B0(&TerminalPramsManager_TypeInfo);
      v105 = TerminalPramsManager_TypeInfo;
      byte_4A57CDE = 1;
    }
    if ( !v105->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v105);
      v105 = TerminalPramsManager_TypeInfo;
    }
    if ( !v105->static_fields->_IsOrdealCallWarClear_k__BackingField )
    {
      if ( !v105->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v105);
      if ( !byte_4A57DC6 )
      {
        sub_1B885B0(&TerminalPramsManager_TypeInfo);
        byte_4A57DC6 = 1;
      }
      v105 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v105 = TerminalPramsManager_TypeInfo;
      }
      v105->static_fields->_DispState_k__BackingField = 3;
    }
  }
  if ( !v105->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v105);
  if ( !byte_4A57DC9 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A57DC9 = 1;
  }
  v106 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v106 = TerminalPramsManager_TypeInfo;
  }
  v106->static_fields->_SpotId_k__BackingField = -1;
}


void __fastcall QuestAfterAction__DeleteContinueData(const MethodInfo *method)
{
  if ( (byte_4A58018 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_16709/*"afterActionBk"*/);
    byte_4A58018 = 1;
  }
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_16709/*"afterActionBk"*/, 0LL);
}


int32_t __fastcall QuestAfterAction__ExtractCommandTargetId(
        QuestAfterAction_Command_o *command,
        const MethodInfo *method)
{
  QuestAfterAction_Command_o *v2; // x19
  QuestAfterAction_Command_c *param; // x8

  v2 = command;
  if ( (byte_4A5801C & 1) == 0 )
  {
    command = (QuestAfterAction_Command_o *)sub_1B885B0(&StringLiteral_868/*","*/);
    byte_4A5801C = 1;
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
    sub_1B8880C(command, method);
  if ( !LODWORD(command->fields.param) )
    sub_1B88814(command, method);
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

  if ( (byte_4A58029 & 1) == 0 )
  {
    sub_1B885B0(&QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__78_TypeInfo);
    byte_4A58029 = 1;
  }
  v5 = sub_1B887FC(QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__78_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_DWORD *)(v5 + 16) = -2;
  *(_DWORD *)(v5 + 32) = System_Environment__get_CurrentManagedThreadId(0LL);
  *(_QWORD *)(v5 + 56) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 56), (int32_t)this, v6, v7);
  *(_QWORD *)(v5 + 48) = commandEnumerable;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 48), (int32_t)commandEnumerable, v8, v9);
  return (System_Collections_Generic_IEnumerable_QuestAfterAction_Command__o *)v5;
}


QuestAfterAction_Command_array *__fastcall QuestAfterAction__GenerateCommandBuf(
        System_String_array *actionVals,
        const MethodInfo *method)
{
  __int64 IsNullOrEmpty; // x0
  __int64 v4; // x1
  _QWORD *v5; // x19
  __int64 v6; // x8
  __int64 v7; // x0
  __int64 v8; // x0
  QuestAfterAction_Command_array *v9; // x20
  __int64 v10; // x22
  unsigned __int64 v11; // x23
  __int64 v12; // x24
  il2cpp_array_size_t v13; // w25
  __int64 v14; // x21
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x1
  int32_t v18; // w2
  int32_t v19; // w3
  __int64 v21; // x0

  if ( (byte_4A5801D & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Array_Empty_QuestAfterAction_Command___);
    sub_1B885B0(&QuestAfterAction_Command___TypeInfo);
    sub_1B885B0(&QuestAfterAction_Command_TypeInfo);
    byte_4A5801D = 1;
  }
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)actionVals, 0LL);
  if ( (IsNullOrEmpty & 1) != 0 )
  {
    v5 = Method_System_Array_Empty_QuestAfterAction_Command___;
    v6 = *((_QWORD *)Method_System_Array_Empty_QuestAfterAction_Command___ + 7);
    if ( !v6 )
    {
      sub_1BDA4E8(Method_System_Array_Empty_QuestAfterAction_Command___);
      v6 = v5[7];
    }
    v7 = *(_QWORD *)(v6 + 16);
    if ( (*(_BYTE *)(v7 + 309) & 1) == 0 )
      v7 = sub_1BDA48C(v7);
    if ( !*(_DWORD *)(v7 + 224) )
      j_il2cpp_runtime_class_init_0(v7);
    v8 = *(_QWORD *)(v5[7] + 16LL);
    if ( (*(_BYTE *)(v8 + 309) & 1) == 0 )
      v8 = sub_1BDA48C(v8);
    return **(QuestAfterAction_Command_array ***)(v8 + 184);
  }
  else
  {
    if ( !actionVals
      || (IsNullOrEmpty = sub_1B88658(
                            QuestAfterAction_Command___TypeInfo,
                            (unsigned int)((signed int)actionVals->max_length / 2))) == 0 )
    {
LABEL_25:
      sub_1B8880C(IsNullOrEmpty, v4);
    }
    v9 = (QuestAfterAction_Command_array *)IsNullOrEmpty;
    if ( *(int *)(IsNullOrEmpty + 24) >= 1 )
    {
      v10 = 0LL;
      v11 = 0LL;
      v12 = IsNullOrEmpty + 32;
      v13 = 1;
      do
      {
        v14 = sub_1B887FC(QuestAfterAction_Command_TypeInfo);
        System_Object___ctor((Il2CppObject *)v14, 0LL);
        if ( v13 - 1 >= actionVals->max_length )
          goto LABEL_24;
        IsNullOrEmpty = System_Int32__Parse(actionVals->m_Items[v13 - 1], 0LL);
        if ( !v14 )
          goto LABEL_25;
        *(_DWORD *)(v14 + 16) = IsNullOrEmpty;
        if ( v13 >= actionVals->max_length )
          goto LABEL_24;
        v17 = actionVals->m_Items[v13];
        *(_QWORD *)(v14 + 24) = v17;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v14 + 24), (int32_t)v17, v15, v16);
        IsNullOrEmpty = sub_1B886EC(v14, v9->obj.klass->_1.element_class);
        if ( !IsNullOrEmpty )
        {
          v21 = sub_1B88830();
          sub_1B886D8(v21, 0LL);
        }
        if ( v11 >= v9->max_length )
LABEL_24:
          sub_1B88814(IsNullOrEmpty, v4);
        *(_QWORD *)(v12 + 8 * v11) = v14;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v12 + v10), v14, v18, v19);
        ++v11;
        v13 += 2;
        v10 += 8LL;
      }
      while ( (__int64)v11 < (int)v9->max_length );
    }
  }
  return v9;
}


System_String_array *__fastcall QuestAfterAction__GetAfterAction(
        int32_t questId,
        int32_t phase,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  Il2CppObject *MasterData_object; // x22
  int32_t v8; // w23
  System_String_array *v9; // x22
  const MethodInfo *v10; // x1
  bool IsOverwriteCommandNone; // w8
  System_String_array *result; // x0
  Il2CppObject *v13; // x20
  System_String_array *v14; // x19

  if ( (byte_4A58034 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_QuestPhaseDetailAddMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_QuestPhaseDetailMaster___);
    sub_1B885B0(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    sub_1B885B0(&Method_System_Linq_Enumerable_Any_string___);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A58034 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_33;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_QuestPhaseDetailAddMaster___);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A57DC0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A57DC0 = 1;
  }
  Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  }
  v8 = *(_DWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 20LL);
  if ( !byte_4A57DCB )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
    byte_4A57DCB = 1;
  }
  if ( !LODWORD(Instance[1].fields.saveDataMapList) )
  {
    j_il2cpp_runtime_class_init_0(Instance);
    Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  }
  if ( !MasterData_object )
    goto LABEL_33;
  v9 = QuestPhaseDetailAddMaster__GetAfterAction(
         (QuestPhaseDetailAddMaster_o *)MasterData_object,
         v8,
         *(_DWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 24LL) + 1,
         0LL);
  IsOverwriteCommandNone = QuestAfterAction__IsOverwriteCommandNone(v9, v10);
  result = 0LL;
  if ( IsOverwriteCommandNone )
    return result;
  result = v9;
  if ( v9 )
    return result;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_33;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_QuestPhaseDetailMaster___);
  if ( !Instance )
    goto LABEL_33;
  result = QuestPhaseDetailMaster__GetAfterAction((QuestPhaseDetailMaster_o *)Instance, questId, phase, 0LL);
  if ( result )
    return result;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_33;
  v13 = DataManager__GetMasterData_object_(
          Instance,
          (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A57DC0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A57DC0 = 1;
  }
  Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  }
  if ( !v13 )
LABEL_33:
    sub_1B8880C(Instance, v6);
  result = (System_String_array *)DataMasterBase_object__object__int___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)v13,
                                    *(_DWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 20LL),
                                    (const MethodInfo_311D934 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
  if ( result )
  {
    v14 = result;
    if ( System_Linq_Enumerable__Any_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)result->m_Items[8],
           (const MethodInfo_2E8D2DC *)Method_System_Linq_Enumerable_Any_string___) )
    {
      return (System_String_array *)v14->m_Items[8];
    }
    else
    {
      return 0LL;
    }
  }
  return result;
}


System_String_array *__fastcall QuestAfterAction__GetBeforeAction(
        int32_t questId,
        int32_t phase,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  Il2CppObject *MasterData_object; // x22
  int32_t v8; // w23
  System_String_array *v9; // x22
  const MethodInfo *v10; // x1
  bool IsOverwriteCommandNone; // w8
  System_String_array *result; // x0
  Il2CppObject *v13; // x20
  System_String_array *v14; // x19

  if ( (byte_4A58033 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_QuestPhaseDetailAddMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_QuestPhaseDetailMaster___);
    sub_1B885B0(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    sub_1B885B0(&Method_System_Linq_Enumerable_Any_string___);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A58033 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_33;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_QuestPhaseDetailAddMaster___);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A57DC0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A57DC0 = 1;
  }
  Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  }
  v8 = *(_DWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 20LL);
  if ( !byte_4A57DCB )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
    byte_4A57DCB = 1;
  }
  if ( !LODWORD(Instance[1].fields.saveDataMapList) )
  {
    j_il2cpp_runtime_class_init_0(Instance);
    Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  }
  if ( !MasterData_object )
    goto LABEL_33;
  v9 = QuestPhaseDetailAddMaster__GetBeforeAction(
         (QuestPhaseDetailAddMaster_o *)MasterData_object,
         v8,
         *(_DWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 24LL) + 1,
         0LL);
  IsOverwriteCommandNone = QuestAfterAction__IsOverwriteCommandNone(v9, v10);
  result = 0LL;
  if ( IsOverwriteCommandNone )
    return result;
  result = v9;
  if ( v9 )
    return result;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_33;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_QuestPhaseDetailMaster___);
  if ( !Instance )
    goto LABEL_33;
  result = QuestPhaseDetailMaster__GetBeforeAction((QuestPhaseDetailMaster_o *)Instance, questId, phase, 0LL);
  if ( result )
    return result;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_33;
  v13 = DataManager__GetMasterData_object_(
          Instance,
          (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A57DC0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A57DC0 = 1;
  }
  Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  }
  if ( !v13 )
LABEL_33:
    sub_1B8880C(Instance, v6);
  result = (System_String_array *)DataMasterBase_object__object__int___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)v13,
                                    *(_DWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 20LL),
                                    (const MethodInfo_311D934 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
  if ( result )
  {
    v14 = result;
    if ( System_Linq_Enumerable__Any_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)result->m_Items[7],
           (const MethodInfo_2E8D2DC *)Method_System_Linq_Enumerable_Any_string___) )
    {
      return (System_String_array *)v14->m_Items[7];
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
        return dword_BEDE50[commandId - 1000];
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


Il2CppObject *__fastcall QuestAfterAction__GetMapComponent_object_(
        QuestAfterAction_o *this,
        int32_t comType,
        int32_t id,
        QuestAfterAction_StateMain_o *state,
        const MethodInfo_2F0FD28 *method)
{
  UnityEngine_Object_o *MapGameObject; // x20
  _BOOL8 v11; // x0
  __int64 v12; // x1

  if ( !method->rgctx_data )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    if ( !method->rgctx_data )
      sub_1BDA4E8();
  }
  MapGameObject = (UnityEngine_Object_o *)QuestAfterAction__GetMapGameObject(this, comType, id, state, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v11 = UnityEngine_Object__op_Equality(MapGameObject, 0LL, 0LL);
  if ( v11 )
    return 0LL;
  if ( !MapGameObject )
    sub_1B8880C(v11, v12);
  return UnityEngine_GameObject__GetComponent_object_(
           (UnityEngine_GameObject_o *)MapGameObject,
           (const MethodInfo_2ECEEB8 *)method->rgctx_data->_0_UnityEngine_GameObject_GetComponent_T_);
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
  UnityEngine_Object_o *v9; // x23
  UnityEngine_Transform_o *transform; // x23
  const MethodInfo *v11; // x3

  v8 = this;
  if ( (byte_4A5802F & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    this = (QuestAfterAction_o *)sub_1B885B0(&SrcSpotBasePrefab_TypeInfo);
    byte_4A5802F = 1;
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
      sub_1B8880C(this, *(_QWORD *)&comType);
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
      v9 = 0LL;
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
  v9 = (UnityEngine_Object_o *)UnityEngine_Transform__Find(transform, (System_String_o *)this, 0LL);
LABEL_30:
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (QuestAfterAction_o *)UnityEngine_Object__op_Equality(v9, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    this = (QuestAfterAction_o *)QuestAfterAction__IsMapChangeable(this, *(const MethodInfo **)&comType);
    if ( !state )
      goto LABEL_40;
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      state->fields.IsAnimDoing = 0;
      QuestAfterAction__RequestMapChange(v8, comType, id, v11);
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
    if ( !v9 )
      goto LABEL_40;
    return UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v9, 0LL);
  }
}


System_Int32_array *__fastcall QuestAfterAction__GetMapGimmickId(
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

  if ( (byte_4A5801E & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_MapGimmickMaster___);
    sub_1B885B0(&Method_DataMasterBase_getEntitys_MapGimmickEntity___);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_int__TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5801E = 1;
  }
  v4 = (System_Collections_Generic_List_int__o *)sub_1B887FC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v4,
    (const MethodInfo_34DFFBC *)Method_System_Collections_Generic_List_int___ctor__);
  Instance = (System_Object_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  Instance = (System_Object_array *)DataManager__GetMasterData_object_(
                                      (DataManager_o *)Instance,
                                      (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_MapGimmickMaster___);
  if ( !Instance )
    goto LABEL_19;
  Instance = DataMasterBase__getEntitys_object_(
               (DataMasterBase_o *)Instance,
               (const MethodInfo_2E8019C *)Method_DataMasterBase_getEntitys_MapGimmickEntity___);
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
        sub_1B88814(Instance, name_low);
      v10 = &v8->obj.klass + (int)v9;
      v11 = v10[4];
      if ( !v11 )
        break;
      Instance = (System_Object_array *)MapGimmickEntity__GetRaidDispSpotIdFromScript((MapGimmickEntity_o *)v10[4], 0LL);
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
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v4,
            name_low,
            *(const MethodInfo_34E0810 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
        }
        else
        {
          v4->fields._size = size + 1;
          items->m_Items[size + 1] = name_low;
        }
      }
      max_length = v8->max_length;
      if ( (int)++v9 >= max_length )
        goto LABEL_17;
    }
LABEL_19:
    sub_1B8880C(Instance, name_low);
  }
LABEL_17:
  if ( !v4 )
    goto LABEL_19;
  return System_Collections_Generic_List_int___ToArray(
           v4,
           (const MethodInfo_34E22C8 *)Method_System_Collections_Generic_List_int__ToArray__);
}


int32_t __fastcall QuestAfterAction__GetState(QuestAfterAction_o *this, const MethodInfo *method)
{
  struct CStateManager_QuestAfterAction__o *fsm; // x8

  if ( (byte_4A5802D & 1) == 0 )
  {
    sub_1B885B0(&Method_CStateManager_QuestAfterAction__getState__);
    byte_4A5802D = 1;
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
  struct CStateManager_QuestAfterAction__o **p_fsm; // x20
  CStateManager_T__o *v5; // x21
  int32_t v6; // w2
  int32_t v7; // w3
  CStateManager_T__o *fsm; // x21
  Il2CppObject *v9; // x22
  System_Collections_Generic_Dictionary_TKey__TValue__o *commandTypeIds; // x0
  __int64 v11; // x1
  CStateManager_T__o *v12; // x21
  Il2CppObject *v13; // x22
  CStateManager_T__o *v14; // x21
  Il2CppObject *v15; // x22
  CStateManager_T__o *v16; // x20
  Il2CppObject *v17; // x21
  int32_t v18; // w2
  int32_t v19; // w3
  int32_t v20; // w20
  System_Collections_Generic_Dictionary_TKey__TValue__o *v21; // x21
  int v22; // w8
  System_Collections_Generic_List_int__o *v23; // x22
  Il2CppObject *Component_object; // x0
  int32_t v25; // w2
  int32_t v26; // w3
  int32_t v27; // w2
  int32_t v28; // w3
  System_Collections_Generic_List_int__o *v29; // x20
  struct System_Collections_Generic_List_int__o **p_invalidMapGimmickIdList; // x19
  int32_t v31; // w2
  int32_t v32; // w3

  if ( (byte_4A58019 & 1) == 0 )
  {
    sub_1B885B0(&Method_CStateManager_QuestAfterAction___ctor__);
    sub_1B885B0(&Method_CStateManager_QuestAfterAction__add__);
    sub_1B885B0(&CStateManager_QuestAfterAction__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___ContainsKey__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___get_Item__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___set_Item__);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Clear__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_int__TypeInfo);
    sub_1B885B0(&QuestAfterAction_StateAdditional_TypeInfo);
    sub_1B885B0(&QuestAfterAction_StateInstant_TypeInfo);
    sub_1B885B0(&QuestAfterAction_StateMain_TypeInfo);
    sub_1B885B0(&QuestAfterAction_StateNone_TypeInfo);
    byte_4A58019 = 1;
  }
  p_fsm = &this->fields.fsm;
  if ( !this->fields.fsm )
  {
    v5 = (CStateManager_T__o *)sub_1B887FC(CStateManager_QuestAfterAction__TypeInfo);
    CStateManager_object____ctor(
      v5,
      (Il2CppObject *)this,
      4,
      (const MethodInfo_30AAD34 *)Method_CStateManager_QuestAfterAction___ctor__);
    this->fields.fsm = (struct CStateManager_QuestAfterAction__o *)v5;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.fsm, (int32_t)v5, v6, v7);
    fsm = (CStateManager_T__o *)this->fields.fsm;
    v9 = (Il2CppObject *)sub_1B887FC(QuestAfterAction_StateNone_TypeInfo);
    System_Object___ctor(v9, 0LL);
    if ( !fsm )
      goto LABEL_21;
    CStateManager_object___add(
      fsm,
      0,
      (IState_T__o *)v9,
      (const MethodInfo_30AADDC *)Method_CStateManager_QuestAfterAction__add__);
    v12 = (CStateManager_T__o *)*p_fsm;
    v13 = (Il2CppObject *)sub_1B887FC(QuestAfterAction_StateMain_TypeInfo);
    System_Object___ctor(v13, 0LL);
    if ( !v12 )
      goto LABEL_21;
    CStateManager_object___add(
      v12,
      1,
      (IState_T__o *)v13,
      (const MethodInfo_30AADDC *)Method_CStateManager_QuestAfterAction__add__);
    v14 = (CStateManager_T__o *)*p_fsm;
    v15 = (Il2CppObject *)sub_1B887FC(QuestAfterAction_StateAdditional_TypeInfo);
    System_Object___ctor(v15, 0LL);
    if ( !v14 )
      goto LABEL_21;
    CStateManager_object___add(
      v14,
      2,
      (IState_T__o *)v15,
      (const MethodInfo_30AADDC *)Method_CStateManager_QuestAfterAction__add__);
    v16 = (CStateManager_T__o *)*p_fsm;
    v17 = (Il2CppObject *)sub_1B887FC(QuestAfterAction_StateInstant_TypeInfo);
    System_Object___ctor(v17, 0LL);
    if ( !v16 )
      goto LABEL_21;
    CStateManager_object___add(
      v16,
      3,
      (IState_T__o *)v17,
      (const MethodInfo_30AADDC *)Method_CStateManager_QuestAfterAction__add__);
  }
  QuestAfterAction__SetState(this, 0, v2);
  this->fields.commandBuf = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.commandBuf, 0, v18, v19);
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
                                                                                (const MethodInfo_319D434 *)Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___ContainsKey__);
    v21 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.commandTypeIds;
    if ( ((unsigned __int8)commandTypeIds & 1) != 0 )
    {
      if ( !v21 )
        goto LABEL_21;
      commandTypeIds = (System_Collections_Generic_Dictionary_TKey__TValue__o *)System_Collections_Generic_Dictionary_Int32Enum__object___get_Item(
                                                                                  (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.commandTypeIds,
                                                                                  v20,
                                                                                  (const MethodInfo_319D1A0 *)Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___get_Item__);
      if ( !commandTypeIds )
        goto LABEL_21;
      v22 = HIDWORD(commandTypeIds->fields._entries) + 1;
      LODWORD(commandTypeIds->fields._entries) = 0;
      HIDWORD(commandTypeIds->fields._entries) = v22;
    }
    else
    {
      v23 = (System_Collections_Generic_List_int__o *)sub_1B887FC(System_Collections_Generic_List_int__TypeInfo);
      System_Collections_Generic_List_int____ctor(
        v23,
        (const MethodInfo_34DFFBC *)Method_System_Collections_Generic_List_int___ctor__);
      if ( !v21 )
        goto LABEL_21;
      System_Collections_Generic_Dictionary_Int32Enum__object___set_Item(
        v21,
        v20,
        (Il2CppObject *)v23,
        (const MethodInfo_319D22C *)Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___set_Item__);
    }
    ++v20;
  }
  while ( v20 != 5 );
  commandTypeIds = (System_Collections_Generic_Dictionary_TKey__TValue__o *)UnityEngine_Component__get_gameObject(
                                                                              (UnityEngine_Component_o *)this,
                                                                              0LL);
  if ( !commandTypeIds
    || (Component_object = UnityEngine_GameObject__GetComponent_object_(
                             (UnityEngine_GameObject_o *)commandTypeIds,
                             (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___),
        this->fields.screenCollider = (struct UnityEngine_BoxCollider_o *)Component_object,
        sub_1B88554(
          (ServantStatusBattleListViewItem_o *)&this->fields.screenCollider,
          (int32_t)Component_object,
          v25,
          v26),
        (commandTypeIds = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.screenCollider) == 0LL) )
  {
LABEL_21:
    sub_1B8880C(commandTypeIds, v11);
  }
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)commandTypeIds, 0, 0LL);
  this->fields.lastDispSpot = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.lastDispSpot, 0, v27, v28);
  v29 = (System_Collections_Generic_List_int__o *)sub_1B887FC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v29,
    (const MethodInfo_34DFFBC *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.invalidMapGimmickIdList = v29;
  p_invalidMapGimmickIdList = &this->fields.invalidMapGimmickIdList;
  sub_1B88554((ServantStatusBattleListViewItem_o *)p_invalidMapGimmickIdList, (int32_t)v29, v31, v32);
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
  System_Collections_Generic_Dictionary_TKey__TValue__o *commandTypeIds; // x0

  if ( (byte_4A58021 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___ContainsKey__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___get_Item__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Contains__);
    byte_4A58021 = 1;
  }
  commandTypeIds = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.commandTypeIds;
  if ( !commandTypeIds )
    goto LABEL_9;
  if ( System_Collections_Generic_Dictionary_Int32Enum__object___ContainsKey(
         commandTypeIds,
         commandType,
         (const MethodInfo_319D434 *)Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___ContainsKey__) )
  {
    commandTypeIds = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.commandTypeIds;
    if ( commandTypeIds )
    {
      commandTypeIds = (System_Collections_Generic_Dictionary_TKey__TValue__o *)System_Collections_Generic_Dictionary_Int32Enum__object___get_Item(
                                                                                  commandTypeIds,
                                                                                  commandType,
                                                                                  (const MethodInfo_319D1A0 *)Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___get_Item__);
      if ( commandTypeIds )
        return System_Collections_Generic_List_int___Contains(
                 (System_Collections_Generic_List_int__o *)commandTypeIds,
                 commandTypeId,
                 (const MethodInfo_34E0B88 *)Method_System_Collections_Generic_List_int__Contains__);
    }
LABEL_9:
    sub_1B8880C(commandTypeIds, *(_QWORD *)&commandType);
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
      sub_1B88814(this, *(_QWORD *)&spotId);
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
    sub_1B8880C(this, *(_QWORD *)&spotId);
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

  if ( (byte_4A58032 & 1) == 0 )
  {
    sub_1B885B0(&TerminalSceneComponent_TypeInfo);
    byte_4A58032 = 1;
  }
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4A5629D )
  {
    sub_1B885B0(&TerminalSceneComponent_TypeInfo);
    byte_4A5629D = 1;
  }
  v2 = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v2 = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
  }
  klass = v2->fields.rootEffectP->klass;
  if ( !klass || (v2 = *(ScrTerminalMap_o **)&klass->_2.thread_static_fields_offset) == 0LL )
    sub_1B8880C(v2, method);
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
        sub_1B88814(actionCommand, method);
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

  if ( (byte_4A5802D & 1) == 0 )
  {
    sub_1B885B0(&Method_CStateManager_QuestAfterAction__getState__);
    byte_4A5802D = 1;
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
  int32_t v32; // w3
  struct System_String_array *vals; // x1
  struct TerminalTransitionInfo_o *v34; // x8
  System_Collections_Generic_List_Enumerator_object__o v35; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v36; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4A58025 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_EventMissionActionAddMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_EventMissionActionMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_EventMissionMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_EventMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_ShopActionMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_ShopMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__);
    sub_1B885B0(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
    sub_1B885B0(&Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__GetEntity__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ShopActionEntity__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ShopActionEntity__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ShopActionEntity__get_Current__);
    sub_1B885B0(&EventMissionActionInfo_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_ShopActionEntity__GetEnumerator__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    sub_1B885B0(&TerminalSceneComponent_TypeInfo);
    byte_4A58025 = 1;
  }
  memset(&v36, 0, sizeof(v36));
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  TerminalTransitionInfoData = TerminalPramsManager__Load_TerminalTransitionInfoData(0LL);
  if ( !TerminalTransitionInfoData )
    return;
  v4 = TerminalTransitionInfoData;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4A5629D )
  {
    sub_1B885B0(&TerminalSceneComponent_TypeInfo);
    byte_4A5629D = 1;
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
      Master_object = (char *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ShopMaster___);
      if ( !Master_object )
        goto LABEL_67;
      Entity = DataMasterBase_object__object__int___GetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                 v4->fields.shopId,
                 (const MethodInfo_311D934 *)Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__);
      if ( Entity )
      {
        v12 = Entity;
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Master_object = (char *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_EventMaster___);
        if ( !Master_object )
          goto LABEL_67;
        v13 = DataMasterBase_object__object__int___GetEntity(
                (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                (int32_t)v12[1].monitor,
                (const MethodInfo_311D934 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
        if ( !v13 || !EventEntity__IsEventPeriod((EventEntity_o *)v13, 0LL, 0LL) )
          goto LABEL_66;
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Master_object = (char *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ShopActionMaster___);
        if ( !Master_object )
          goto LABEL_67;
        Master_object = (char *)ShopActionMaster__GetEntityList(
                                  (ShopActionMaster_o *)Master_object,
                                  (int32_t)v12[1].klass,
                                  0LL);
        if ( !Master_object )
          goto LABEL_67;
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v35,
          (System_Collections_Generic_List_object__o *)Master_object,
          (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_ShopActionEntity__GetEnumerator__);
        v36 = v35;
        while ( 1 )
        {
          v14 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v36,
                  (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_ShopActionEntity__MoveNext__);
          if ( !v14 )
            break;
          current = v36.fields._current;
          if ( !v36.fields._current )
            sub_1B8880C(v14, v15);
          if ( LODWORD(v36.fields._current[1].monitor) == 4 )
          {
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            if ( !byte_4A58084 )
            {
              sub_1B885B0(&TerminalPramsManager_TypeInfo);
              byte_4A58084 = 1;
            }
            v17 = TerminalPramsManager_TypeInfo;
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
              v17 = TerminalPramsManager_TypeInfo;
            }
            v17->static_fields->meSceneStatus = 2;
            TerminalSceneComponent__CreateTransitionInfo(v6, v4, 0LL);
            TransitionInfo_k__BackingField = v6->fields._TransitionInfo_k__BackingField;
            if ( !TransitionInfo_k__BackingField )
              sub_1B8880C(0LL, v18);
            klass = current[2].klass;
            TransitionInfo_k__BackingField->fields.afterActionVals = (struct System_String_array *)klass;
            sub_1B88554(
              (ServantStatusBattleListViewItem_o *)&TransitionInfo_k__BackingField->fields.afterActionVals,
              (int32_t)klass,
              v19,
              v20);
            v25 = v6->fields._TransitionInfo_k__BackingField;
            if ( !v25 )
              sub_1B8880C(v23, v24);
            v25->fields.optionId = (int32_t)current[2].monitor;
            break;
          }
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v36,
          (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_ShopActionEntity__Dispose__);
      }
    }
  }
  else
  {
    Master_object = (char *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Master_object )
      goto LABEL_67;
    v7 = (DataManager_o *)Master_object;
    Master_object = (char *)DataManager__GetMasterData_object_(
                              (DataManager_o *)Master_object,
                              (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventMissionActionAddMaster___);
    if ( !Master_object )
      goto LABEL_67;
    EntityFromIdProgressTypeAndActionType = EventMissionActionAddMaster__GetEntityFromIdProgressTypeAndActionType(
                                              (EventMissionActionAddMaster_o *)Master_object,
                                              v4->fields.missionId,
                                              5,
                                              4,
                                              0LL);
    if ( EntityFromIdProgressTypeAndActionType )
    {
      v9 = EntityFromIdProgressTypeAndActionType;
      v10 = (EventMissionActionInfo_o *)sub_1B887FC(EventMissionActionInfo_TypeInfo);
      EventMissionActionInfo___ctor_42169072(v10, v9, 0LL);
    }
    else
    {
      Master_object = (char *)DataManager__GetMasterData_object_(
                                v7,
                                (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventMissionActionMaster___);
      if ( !Master_object )
        goto LABEL_67;
      v26 = EventMissionActionMaster__getEntityFromIdProgressTypeAndActionType(
              (EventMissionActionMaster_o *)Master_object,
              v4->fields.missionId,
              5,
              4,
              0LL);
      if ( !v26 )
        return;
      v27 = v26;
      v10 = (EventMissionActionInfo_o *)sub_1B887FC(EventMissionActionInfo_TypeInfo);
      EventMissionActionInfo___ctor(v10, v27, 0LL);
    }
    Master_object = (char *)DataManager__GetMasterData_object_(
                              v7,
                              (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventMissionMaster___);
    if ( !Master_object )
      goto LABEL_67;
    v28 = DataMasterBase_object__object__int___GetEntity(
            (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
            v4->fields.missionId,
            (const MethodInfo_311D934 *)Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__GetEntity__);
    if ( v28 )
    {
      v29 = v28;
      Master_object = (char *)DataManager__GetMasterData_object_(
                                v7,
                                (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventMaster___);
      if ( !Master_object )
        goto LABEL_67;
      Master_object = (char *)DataMasterBase_object__object__int___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                HIDWORD(v29[1].monitor),
                                (const MethodInfo_311D934 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
      if ( !Master_object )
        goto LABEL_67;
      if ( EventEntity__IsEventPeriod((EventEntity_o *)Master_object, 0LL, 0LL) )
      {
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_4A58084 )
        {
          sub_1B885B0(&TerminalPramsManager_TypeInfo);
          byte_4A58084 = 1;
        }
        v30 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v30 = TerminalPramsManager_TypeInfo;
        }
        v30->static_fields->meSceneStatus = 2;
        TerminalSceneComponent__CreateTransitionInfo(v6, v4, 0LL);
        if ( v10 )
        {
          Master_object = (char *)v6->fields._TransitionInfo_k__BackingField;
          if ( Master_object )
          {
            vals = v10->fields.vals;
            *((_QWORD *)Master_object + 4) = vals;
            sub_1B88554((ServantStatusBattleListViewItem_o *)(Master_object + 32), (int32_t)vals, v31, v32);
            v34 = v6->fields._TransitionInfo_k__BackingField;
            if ( v34 )
            {
              v34->fields.optionId = v10->fields.optionId;
              return;
            }
          }
        }
LABEL_67:
        sub_1B8880C(Master_object, v3);
      }
LABEL_66:
      TerminalSceneComponent__ClearTransitionInfo(v6, 0LL);
    }
  }
}


void __fastcall QuestAfterAction__LoadVoice(
        QuestAfterAction_o *this,
        System_Action_o *endAct,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__o *svtVoices; // x0
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *Values; // x21
  System_Collections_Generic_List_object__o *v7; // x22
  const MethodInfo *v8; // x3

  if ( (byte_4A58022 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__get_Values__);
    sub_1B885B0(&Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_QuestAfterAction_VoiceInfo__TypeInfo);
    byte_4A58022 = 1;
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
      sub_1B8880C(0LL, endAct);
    Values = System_Collections_Generic_Dictionary_int__object___get_Values(
               (System_Collections_Generic_Dictionary_int__object__o *)svtVoices,
               (const MethodInfo_316D768 *)Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__get_Values__);
    v7 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_QuestAfterAction_VoiceInfo__TypeInfo);
    System_Collections_Generic_List_object____ctor_55562536(
      v7,
      (System_Collections_Generic_IEnumerable_T__o *)Values,
      (const MethodInfo_34FD128 *)Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo___ctor__);
    QuestAfterAction__LoadVoice_33832040(
      this,
      (System_Collections_Generic_List_QuestAfterAction_VoiceInfo__o *)v7,
      endAct,
      v8);
  }
}


void __fastcall QuestAfterAction__LoadVoice_33832040(
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
  System_Collections_Generic_List_QuestAfterAction_VoiceInfo__o **v12; // x28
  int32_t v13; // w2
  int32_t v14; // w3
  System_Action_o **v15; // x19
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *VoiceAssetName_39766344; // x19
  Il2CppObject *v19; // x20
  System_Action_o *v20; // x22

  while ( 1 )
  {
    if ( (byte_4A58023 & 1) == 0 )
    {
      sub_1B885B0(&System_Action_TypeInfo);
      sub_1B885B0(&Method_System_Linq_Enumerable_Any_QuestAfterAction_VoiceInfo___);
      sub_1B885B0(&Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo__RemoveAt__);
      sub_1B885B0(&Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo__get_Item__);
      sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      sub_1B885B0(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
      sub_1B885B0(&Method_QuestAfterAction___c__DisplayClass71_0__LoadVoice_b__0__);
      sub_1B885B0(&QuestAfterAction___c__DisplayClass71_0_TypeInfo);
      byte_4A58023 = 1;
    }
    v7 = sub_1B887FC(QuestAfterAction___c__DisplayClass71_0_TypeInfo);
    System_Object___ctor((Il2CppObject *)v7, 0LL);
    if ( !v7 )
      goto LABEL_17;
    *(_QWORD *)(v7 + 16) = svtVInfos;
    v12 = (System_Collections_Generic_List_QuestAfterAction_VoiceInfo__o **)(v7 + 16);
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 16), (int32_t)svtVInfos, v10, v11);
    *(_QWORD *)(v7 + 24) = this;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 24), (int32_t)this, v13, v14);
    *(_QWORD *)(v7 + 32) = endAct;
    v15 = (System_Action_o **)(v7 + 32);
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 32), (int32_t)endAct, v16, v17);
    if ( !System_Linq_Enumerable__Any_object_(
            *(System_Collections_Generic_IEnumerable_TSource__o **)(v7 + 16),
            (const MethodInfo_2E8D2DC *)Method_System_Linq_Enumerable_Any_QuestAfterAction_VoiceInfo___) )
    {
      Instance = (System_Collections_Generic_List_QuestAfterAction_VoiceInfo__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( Instance )
      {
        CommonUI__SetLoadMode((CommonUI_o *)Instance, 0, 0LL);
        ActionExtensions__Call(*v15, 0LL);
        return;
      }
LABEL_17:
      sub_1B8880C(Instance, v9);
    }
    Instance = *v12;
    if ( !*v12 )
      goto LABEL_17;
    Instance = (System_Collections_Generic_List_QuestAfterAction_VoiceInfo__o *)System_Collections_Generic_List_object___get_Item(
                                                                                  (System_Collections_Generic_List_object__o *)Instance,
                                                                                  0,
                                                                                  (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo__get_Item__);
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
      (const MethodInfo_34FF008 *)Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo__RemoveAt__);
    svtVInfos = *v12;
    endAct = *v15;
  }
  Instance = (System_Collections_Generic_List_QuestAfterAction_VoiceInfo__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  CommonUI__SetLoadMode((CommonUI_o *)Instance, 1, 0LL);
  Instance = *v12;
  if ( !*v12 )
    goto LABEL_17;
  Instance = (System_Collections_Generic_List_QuestAfterAction_VoiceInfo__o *)System_Collections_Generic_List_object___get_Item(
                                                                                (System_Collections_Generic_List_object__o *)Instance,
                                                                                0,
                                                                                (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo__get_Item__);
  if ( !Instance )
    goto LABEL_17;
  VoiceAssetName_39766344 = ServantVoiceEntity__getVoiceAssetName_39766344((int32_t)Instance->fields._items, 0LL);
  v19 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
  v20 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v20, (Il2CppObject *)v7, Method_QuestAfterAction___c__DisplayClass71_0__LoadVoice_b__0__, 0LL);
  if ( !v19 )
    goto LABEL_17;
  SoundManager__LoadAudioAssetStorage((SoundManager_o *)v19, VoiceAssetName_39766344, v20, 1, 0LL);
}


System_String_o *__fastcall QuestAfterAction__MapObjName(
        QuestAfterAction_o *this,
        int32_t comType,
        int32_t id,
        const MethodInfo *method)
{
  if ( (byte_4A58031 & 1) == 0 )
  {
    sub_1B885B0(&SrcSpotBasePrefab_TypeInfo);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A58031 = 1;
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

  if ( (byte_4A5802B & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Clear__);
    byte_4A5802B = 1;
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
    sub_1B8880C(screenCollider, v4);
  }
  v7 = invalidMapGimmickIdList->fields._version + 1;
  invalidMapGimmickIdList->fields._size = 0;
  invalidMapGimmickIdList->fields._version = v7;
  QuestAfterAction__Init(this, v4);
  this->fields.isKeepingMainStateButFinished = 0;
}


void __fastcall QuestAfterAction__Play(QuestAfterAction_o *this, System_Action_o *endAct, const MethodInfo *method)
{
  __int64 v5; // x21
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_Action_o *v10; // x22
  int32_t v11; // w2
  int32_t v12; // w3
  const MethodInfo *v13; // x2

  if ( (byte_4A58027 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_1B885B0(&Method_QuestAfterAction___c__DisplayClass75_0__Play_b__0__);
    sub_1B885B0(&QuestAfterAction___c__DisplayClass75_0_TypeInfo);
    byte_4A58027 = 1;
  }
  v5 = sub_1B887FC(QuestAfterAction___c__DisplayClass75_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5
    || (*(_QWORD *)(v5 + 16) = endAct,
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 16), (int32_t)endAct, v8, v9),
        (Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__)) == 0LL) )
  {
    sub_1B8880C(Instance, v7);
  }
  MissionNotifyManager__StartPause((MissionNotifyManager_o *)Instance, 0LL);
  v10 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v10, (Il2CppObject *)v5, Method_QuestAfterAction___c__DisplayClass75_0__Play_b__0__, 0LL);
  this->fields.endAct = v10;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.endAct, (int32_t)v10, v11, v12);
  if ( this->fields.commandBuf )
    QuestAfterAction__SetState(this, 1, v13);
  else
    ActionExtensions__Call(this->fields.endAct, 0LL);
}


void __fastcall QuestAfterAction__PlaySpecifiedAction(
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
  int32_t v12; // w2
  int32_t v13; // w3
  const MethodInfo *v14; // x1
  struct QuestAfterAction_Command_array *CommandBuf; // x0
  int32_t v16; // w2
  int32_t v17; // w3
  System_Action_o *v18; // x21
  int32_t v19; // w2
  int32_t v20; // w3
  System_Action_o *v21; // x21
  const MethodInfo *v22; // x2
  System_Collections_IEnumerator_o *v23; // x1

  if ( (byte_4A58028 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_1B885B0(&Method_QuestAfterAction___c__DisplayClass76_0__PlaySpecifiedAction_b__0__);
    sub_1B885B0(&Method_QuestAfterAction___c__DisplayClass76_0__PlaySpecifiedAction_b__1__);
    sub_1B885B0(&QuestAfterAction___c__DisplayClass76_0_TypeInfo);
    byte_4A58028 = 1;
  }
  v7 = sub_1B887FC(QuestAfterAction___c__DisplayClass76_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7 )
    goto LABEL_8;
  *(_QWORD *)(v7 + 16) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 16), (int32_t)this, v10, v11);
  *(_QWORD *)(v7 + 24) = finishCallback;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 24), (int32_t)finishCallback, v12, v13);
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)actionVals, 0LL) )
  {
    ActionExtensions__Call(*(System_Action_o **)(v7 + 24), 0LL);
    return;
  }
  CommandBuf = QuestAfterAction__GenerateCommandBuf(actionVals, v14);
  this->fields.temporaryCommandBuf = CommandBuf;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.temporaryCommandBuf, (int32_t)CommandBuf, v16, v17);
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
LABEL_8:
    sub_1B8880C(Instance, v9);
  MissionNotifyManager__StartPause((MissionNotifyManager_o *)Instance, 0LL);
  v18 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(
    v18,
    (Il2CppObject *)v7,
    Method_QuestAfterAction___c__DisplayClass76_0__PlaySpecifiedAction_b__0__,
    0LL);
  this->fields.endAct = v18;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.endAct, (int32_t)v18, v19, v20);
  v21 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(
    v21,
    (Il2CppObject *)v7,
    Method_QuestAfterAction___c__DisplayClass76_0__PlaySpecifiedAction_b__1__,
    0LL);
  v23 = QuestAfterAction__WaitWhileMainStateFinished(this, v21, v22);
  UnityEngine_MonoBehaviour__StartCoroutine_69444652((UnityEngine_MonoBehaviour_o *)this, v23, 0LL);
}


void __fastcall QuestAfterAction__PlaySpecifiedActionInstantly(
        QuestAfterAction_o *this,
        QuestAfterAction_Command_array *commandArray,
        const MethodInfo *method)
{
  int32_t v5; // w2
  int32_t v6; // w3
  System_Action_o *v7; // x20
  int32_t v8; // w2
  int32_t v9; // w3
  const MethodInfo *v10; // x2

  if ( (byte_4A5802A & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_QuestAfterAction__PlaySpecifiedActionInstantly_b__79_0__);
    byte_4A5802A = 1;
  }
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)commandArray, 0LL) )
  {
    this->fields.temporaryCommandBuf = commandArray;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.temporaryCommandBuf, (int32_t)commandArray, v5, v6);
    v7 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(v7, (Il2CppObject *)this, Method_QuestAfterAction__PlaySpecifiedActionInstantly_b__79_0__, 0LL);
    this->fields.endAct = v7;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.endAct, (int32_t)v7, v8, v9);
    QuestAfterAction__SetState(this, 3, v10);
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
  TerminalPramsManager_c *v8; // x0
  ScrTerminalMap_o *v9; // x0
  UnityEngine_GameObject_c *klass; // x8

  if ( (byte_4A58030 & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    sub_1B885B0(&TerminalSceneComponent_TypeInfo);
    byte_4A58030 = 1;
  }
  this->fields.ActionMapTargetType = cType;
  this->fields.ActionMapTargetId = cTarget;
  QuestAfterAction__SetState(this, 0, *(const MethodInfo **)&cTarget);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A5644B )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A5644B = 1;
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
  if ( !byte_4A5629D )
  {
    sub_1B885B0(&TerminalSceneComponent_TypeInfo);
    byte_4A5629D = 1;
  }
  v9 = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v9 = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
  }
  klass = v9->fields.rootEffectP->klass;
  if ( !klass || (v9 = *(ScrTerminalMap_o **)&klass->_2.thread_static_fields_offset) == 0LL )
    sub_1B8880C(v9, v7);
  ScrTerminalMap__RequestMapChange(v9, 0, -1, -1, 0LL);
}


void __fastcall QuestAfterAction__SetActionMap(
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
  if ( (byte_4A58020 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1B885B0(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    this = (QuestAfterAction_o *)sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A58020 = 1;
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
                sub_1B88814(this, com);
              TitleInfoCtrlCallback_k__BackingField = (System_String_o *)this->fields.invalidMapGimmickIdList;
              goto LABEL_29;
            }
          }
LABEL_42:
          sub_1B8880C(this, com);
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
      if ( (unsigned int)(id - 400) > 9 )
      {
        if ( id == 500 )
        {
          v4->fields.ActionMapTargetType = 0;
          this = (QuestAfterAction_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( this )
          {
            MasterData_object = DataManager__GetMasterData_object_(
                                  (DataManager_o *)this,
                                  (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_QuestMaster___);
            param = com->fields.param;
            v14 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
            this = (QuestAfterAction_o *)System_Int32__Parse(param, 0LL);
            if ( v14 )
            {
              this = (QuestAfterAction_o *)DataMasterBase_object__object__int___GetEntity(
                                             v14,
                                             (int32_t)this,
                                             (const MethodInfo_311D934 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
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

  if ( (byte_4A5802E & 1) == 0 )
  {
    sub_1B885B0(&Method_CStateManager_QuestAfterAction__setState__);
    byte_4A5802E = 1;
  }
  fsm = (CStateManager_T__o *)this->fields.fsm;
  if ( !fsm )
    sub_1B8880C(0LL, *(_QWORD *)&state);
  CStateManager_object___setState(
    fsm,
    state,
    (const MethodInfo_30AAE68 *)Method_CStateManager_QuestAfterAction__setState__);
}


void __fastcall QuestAfterAction__SkipToNextAction(QuestAfterAction_o *this, const MethodInfo *method)
{
  this->fields.isSkippedNext = 1;
}


void __fastcall QuestAfterAction__Update(QuestAfterAction_o *this, const MethodInfo *method)
{
  CStateManager_T__o *fsm; // x0

  if ( (byte_4A58026 & 1) == 0 )
  {
    sub_1B885B0(&Method_CStateManager_QuestAfterAction__update__);
    byte_4A58026 = 1;
  }
  fsm = (CStateManager_T__o *)this->fields.fsm;
  if ( fsm )
    CStateManager_object___update(fsm, (const MethodInfo_30AAE44 *)Method_CStateManager_QuestAfterAction__update__);
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

  if ( (byte_4A5802C & 1) == 0 )
  {
    sub_1B885B0(&QuestAfterAction__WaitWhileMainStateFinished_d__82_TypeInfo);
    byte_4A5802C = 1;
  }
  v5 = sub_1B887FC(QuestAfterAction__WaitWhileMainStateFinished_d__82_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 32), (int32_t)this, v6, v7);
  *(_QWORD *)(v5 + 40) = action;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 40), (int32_t)action, v8, v9);
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
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.endAct, 0, v2, v3);
  this->fields.temporaryCommandBuf = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.temporaryCommandBuf, 0, v5, v6);
  QuestAfterAction__SetState(this, 0, v7);
}


System_Int32_array *__fastcall QuestAfterAction__getMapGmkOffIdList(QuestAfterAction_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *invalidMapGimmickIdList; // x0

  if ( (byte_4A5801F & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_int__ToArray__);
    byte_4A5801F = 1;
  }
  invalidMapGimmickIdList = this->fields.invalidMapGimmickIdList;
  if ( !invalidMapGimmickIdList )
    sub_1B8880C(0LL, method);
  return System_Collections_Generic_List_int___ToArray(
           invalidMapGimmickIdList,
           (const MethodInfo_34E22C8 *)Method_System_Collections_Generic_List_int__ToArray__);
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
  struct System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__o *svtVoices; // x0
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *Values; // x21
  System_Collections_Generic_List_object__o *v5; // x20
  _BOOL8 v6; // x0
  __int64 v7; // x1
  System_String_o *VoiceAssetName_39766344; // x20
  System_Collections_Generic_List_Enumerator_object__o v9; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4A58024 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__Clear__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__get_Values__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_QuestAfterAction_VoiceInfo__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_QuestAfterAction_VoiceInfo__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_QuestAfterAction_VoiceInfo__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_QuestAfterAction_VoiceInfo__TypeInfo);
    sub_1B885B0(&SoundManager_TypeInfo);
    byte_4A58024 = 1;
  }
  memset(&v9, 0, sizeof(v9));
  svtVoices = this->fields.svtVoices;
  if ( !svtVoices )
    goto LABEL_14;
  Values = System_Collections_Generic_Dictionary_int__object___get_Values(
             (System_Collections_Generic_Dictionary_int__object__o *)svtVoices,
             (const MethodInfo_316D768 *)Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__get_Values__);
  v5 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_QuestAfterAction_VoiceInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor_55562536(
    v5,
    (System_Collections_Generic_IEnumerable_T__o *)Values,
    (const MethodInfo_34FD128 *)Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo___ctor__);
  if ( !v5 )
    goto LABEL_14;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v9,
    v5,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo__GetEnumerator__);
  while ( 1 )
  {
    v6 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v9,
           (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_QuestAfterAction_VoiceInfo__MoveNext__);
    if ( !v6 )
      break;
    if ( !v9.fields._current )
      sub_1B8880C(v6, v7);
    VoiceAssetName_39766344 = ServantVoiceEntity__getVoiceAssetName_39766344((int32_t)v9.fields._current[1].klass, 0LL);
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    SoundManager__releaseAudioAssetStorage(VoiceAssetName_39766344, 0LL);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v9,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_QuestAfterAction_VoiceInfo__Dispose__);
  svtVoices = this->fields.svtVoices;
  if ( !svtVoices )
LABEL_14:
    sub_1B8880C(svtVoices, method);
  System_Collections_Generic_Dictionary_int__object___Clear(
    (System_Collections_Generic_Dictionary_int__object__o *)svtVoices,
    (const MethodInfo_316DAE0 *)Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__Clear__);
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
  int v20; // w8
  void *v21; // x21
  int32_t result; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_4A58036 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_VoicePlayCondMaster___);
    sub_1B885B0(&Method_System_Collections_Generic_List_string__RemoveAt__);
    sub_1B885B0(&Method_System_Collections_Generic_List_string___ctor___76047512);
    sub_1B885B0(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_1B885B0(&System_Collections_Generic_List_string__TypeInfo);
    sub_1B885B0(&System_Random_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&TerminalSceneComponent_TypeInfo);
    sub_1B885B0(&StringLiteral_16123/*"_"*/);
    byte_4A58036 = 1;
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
  v6 = (System_Collections_Generic_IEnumerable_T__o *)param;
  if ( *((int *)param + 6) > 1 )
  {
    param = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( param )
    {
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)param,
                            (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_VoicePlayCondMaster___);
      v8 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_string__TypeInfo);
      System_Collections_Generic_List_object____ctor_55562536(
        v8,
        v6,
        (const MethodInfo_34FD128 *)Method_System_Collections_Generic_List_string___ctor___76047512);
      result = 0;
      v9 = (System_Random_o *)sub_1B887FC(System_Random_TypeInfo);
      System_Random___ctor(v9, 0LL);
      if ( v8 )
      {
        if ( v9 )
        {
          size = (unsigned int)v8->fields._size;
          while ( 1 )
          {
            v11 = ((__int64 (__fastcall *)(System_Random_o *, __int64, Il2CppMethodPointer))v9->klass->vtable._7_Next.method)(
                    v9,
                    size,
                    v9->klass->vtable._8_NextDouble.methodPtr);
            result = 0;
            param = System_Collections_Generic_List_object___get_Item(
                      v8,
                      v11,
                      (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_string__get_Item__);
            if ( !param )
              break;
            param = System_String__Split((System_String_o *)param, 0x5Fu, 0, 0LL);
            if ( !param )
              break;
            v12 = *((_DWORD *)param + 6);
            v13 = param;
            if ( v12 == 3 )
            {
              v18 = System_Int32__TryParse(*((System_String_o **)param + 4), &result, 0LL);
              if ( *((_DWORD *)v13 + 6) < 3u )
                goto LABEL_42;
              param = System_String__Concat_61718292(
                        *((System_String_o **)v13 + 5),
                        (System_String_o *)StringLiteral_16123/*"_"*/,
                        *((System_String_o **)v13 + 6),
                        0LL);
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
                       (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_string__get_Item__);
              if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
              if ( !byte_4A5629D )
              {
                sub_1B885B0(&TerminalSceneComponent_TypeInfo);
                byte_4A5629D = 1;
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
              v16 = *(_QWORD *)(v15 + 456);
              if ( !v16 )
                break;
              param = (void *)ServantVoiceEntity__getSvtIdfromVoiceAssetName(*(System_String_o **)(v16 + 40), 0LL);
              if ( !MasterData_object )
                break;
              v17 = (int)param;
            }
            if ( VoicePlayCondMaster__isVoicePlay(
                   (VoicePlayCondMaster_o *)MasterData_object,
                   v17,
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
              v8,
              v11,
              (const MethodInfo_34FF008 *)Method_System_Collections_Generic_List_string__RemoveAt__);
            size = (unsigned int)v8->fields._size;
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
    sub_1B8880C(param, svtId);
  }
  param = this->fields.param;
  if ( !param )
    goto LABEL_41;
  param = System_String__Split((System_String_o *)param, 0x5Fu, 0, 0LL);
  if ( !param )
    goto LABEL_41;
  v20 = *((_DWORD *)param + 6);
  v21 = param;
  if ( v20 != 3 )
  {
    if ( v20 == 2 )
      return this->fields.param;
    return 0LL;
  }
  v18 = System_Int32__TryParse(*((System_String_o **)param + 4), svtId, 0LL);
  if ( *((_DWORD *)v21 + 6) < 3u )
LABEL_42:
    sub_1B88814(v18, v19);
  return System_String__Concat_61718292(
           *((System_String_o **)v21 + 5),
           (System_String_o *)StringLiteral_16123/*"_"*/,
           *((System_String_o **)v21 + 6),
           0LL);
}


System_String_o *__fastcall QuestAfterAction_Command__GetBgmName(
        QuestAfterAction_Command_o *this,
        const MethodInfo *method)
{
  System_String_o *v3; // x0
  bool v4; // w8
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF
  int32_t result; // [xsp+1Ch] [xbp-14h] BYREF

  if ( (byte_4A58038 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_BgmMaster___);
    sub_1B885B0(&Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A58038 = 1;
  }
  result = 0;
  entity = 0LL;
  v3 = 0LL;
  if ( this->fields.id == 851 )
  {
    v4 = System_Int32__TryParse(this->fields.param, &result, 0LL);
    v3 = 0LL;
    if ( v4 )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_12;
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_BgmMaster___);
      if ( !Instance )
        goto LABEL_12;
      Instance = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                   (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                   &entity,
                                   result,
                                   (const MethodInfo_311D988 *)Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( entity )
          return (System_String_o *)entity[1].monitor;
LABEL_12:
        sub_1B8880C(Instance, v6);
      }
      return 0LL;
    }
  }
  return v3;
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
    sub_1B8880C(v3, str);
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
  if ( (byte_4A58037 & 1) == 0 )
  {
    this = (QuestAfterAction_Command_o *)sub_1B885B0(&StringLiteral_16123/*"_"*/);
    byte_4A58037 = 1;
  }
  if ( v4->fields.id == 800 )
  {
    if ( !v3 || (this = (QuestAfterAction_Command_o *)System_String__Split(v3, 0x5Fu, 0, 0LL)) == 0LL )
      sub_1B8880C(this, str);
    param = (int)this->fields.param;
    if ( param == 2 )
      return v3;
    if ( param == 3 )
      return System_String__Concat_61718292(
               (System_String_o *)this[1].monitor,
               (System_String_o *)StringLiteral_16123/*"_"*/,
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
    sub_1B8880C(this, method);
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
    sub_1B8880C(screenCollider, v5);
  }
  klass = (System_Action_o *)screenCollider[7].klass;
  v9 = (ServantStatusBattleListViewItem_o *)&screenCollider[7];
  v9->klass = 0LL;
  sub_1B88554(v9, 0, v7, v8);
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
    sub_1B8880C(this, 0LL);
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
    sub_1B8880C(0LL, v7);
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
    sub_1B8880C(0LL, v7);
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
  struct QuestAfterAction_o *that; // x8
  __int64 v4; // x8
  QuestAfterAction_StateMain_o *v5; // x20
  unsigned __int64 v6; // x22
  struct QuestAfterAction_o *v7; // x8
  int32_t v8; // w21
  Il2CppObject *MapComponent_object; // x21
  Il2CppClass *klass; // x8

  v2 = this;
  if ( (byte_4A5803D & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Remove__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
    this = (QuestAfterAction_StateMain_o *)sub_1B885B0(&Method_SingletonTemplate_QuestTree__get_Instance__);
    byte_4A5803D = 1;
  }
  that = v2->fields.that;
  if ( !that )
    goto LABEL_22;
  this = (QuestAfterAction_StateMain_o *)that->fields.invalidMapGimmickIdList;
  if ( !this )
    goto LABEL_22;
  this = (QuestAfterAction_StateMain_o *)System_Collections_Generic_List_int___ToArray(
                                           (System_Collections_Generic_List_int__o *)this,
                                           (const MethodInfo_34E22C8 *)Method_System_Collections_Generic_List_int__ToArray__);
  if ( !this )
    goto LABEL_22;
  v4 = *(_QWORD *)&this->fields.IsAnimDoing;
  v5 = this;
  if ( (int)v4 >= 1 )
  {
    v6 = 0LL;
    while ( 1 )
    {
      if ( v6 >= (unsigned int)v4 )
        sub_1B88814(this, method);
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
        (const MethodInfo_34E1D0C *)Method_System_Collections_Generic_List_int__Remove__);
      this = (QuestAfterAction_StateMain_o *)v2->fields.that;
      if ( !this )
        break;
      MapComponent_object = QuestAfterAction__GetMapComponent_object_(
                              (QuestAfterAction_o *)this,
                              2,
                              v8,
                              v2,
                              (const MethodInfo_2F0FD28 *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (QuestAfterAction_StateMain_o *)UnityEngine_Object__op_Inequality(
                                               (UnityEngine_Object_o *)MapComponent_object,
                                               0LL,
                                               0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        this = (QuestAfterAction_StateMain_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_QuestTree__get_Instance__);
        if ( !MapComponent_object || !this )
          break;
        this = (QuestAfterAction_StateMain_o *)QuestTree__CheckMapGimmickCond_34118192(
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
      LODWORD(v4) = *(_DWORD *)&v5->fields.IsAnimDoing;
      if ( (__int64)++v6 >= (int)v4 )
        return;
    }
LABEL_22:
    sub_1B8880C(this, method);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestAfterAction_StateMain__UpdateAnim(
        QuestAfterAction_StateMain_o *this,
        QuestAfterAction_o *that,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 updated; // x0
  QuestAfterAction_o *v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  __int64 *v10; // x20
  int32_t v11; // w2
  int32_t v12; // w3
  QuestAfterAction_StateMain_c *klass; // x8
  __int64 v14; // x22
  QuestAfterAction_Command_o *v15; // x22
  BlankEarthQuestAfterAction_o *v16; // x23
  System_Action_o *v17; // x24
  const MethodInfo *v18; // x5
  int id; // w8
  float v20; // s0
  float DEFAULT_FADE_TIME; // s8
  AvalonSceneManager_c *v22; // x0
  TerminalSceneComponent_c *v23; // x0
  TerminalSceneComponent_o *mInstance; // x19
  System_Action_o *v25; // x20
  TerminalSceneComponent_o *v26; // x0
  float v27; // s0
  System_Action_o *v28; // x1
  System_String_o *v29; // x19
  System_String_o *v30; // x20
  System_String_o *v31; // x20
  Il2CppObject *Instance; // x22
  System_Action_o *v33; // x23
  __int64 v34; // x8
  __int64 v35; // x24
  float v36; // s0
  System_String_o *param; // x21
  _QWORD *v38; // x0
  System_Reflection_MethodBase_o *v39; // x0
  __int64 v40; // x20
  int32_t v41; // w2
  int32_t v42; // w3
  __int64 v43; // x23
  __int64 v44; // x8
  __int64 v45; // x22
  int32_t v46; // w21
  bool v47; // w24
  bool v48; // w25
  __int64 v49; // x20
  int32_t v50; // w2
  int32_t v51; // w3
  __int64 v52; // x8
  QuestAfterAction_o *v53; // x21
  Il2CppObject *v54; // x0
  int32_t v55; // w2
  int32_t v56; // w3
  UnityEngine_Object_o *v57; // x19
  SrcSpotBasePrefab_o *v58; // x19
  System_Action_o *v59; // x21
  int32_t v60; // w1
  __int64 v61; // x23
  float v62; // s0
  float v63; // s9
  float v64; // s0
  float v65; // s10
  float v66; // s0
  float v67; // s11
  float v68; // s0
  float v69; // s8
  int32_t v70; // w19
  __int64 v71; // x8
  float v72; // s8
  const MethodInfo_361E548 *v73; // x2
  float v74; // s0
  float v75; // s1
  float v76; // s2
  float v77; // s10
  float v78; // s9
  float v79; // s11
  MapCamera_o *v80; // x20
  System_Action_o *v81; // x0
  __int64 *v82; // x8
  System_Action_o *v83; // x22
  MapCamera_o *v84; // x0
  float v85; // s0
  float v86; // s1
  float v87; // s2
  float v88; // s3
  int32_t v89; // w1
  System_Action_o *v90; // x2
  __int64 v91; // x20
  int32_t v92; // w2
  int32_t v93; // w3
  __int64 v94; // x8
  QuestAfterAction_o *v95; // x21
  Il2CppObject *v96; // x0
  int32_t v97; // w2
  int32_t v98; // w3
  UnityEngine_Object_o *v99; // x19
  ModelLineComponent_o *v100; // x19
  System_Action_o *v101; // x21
  const MethodInfo *v102; // x3
  int32_t v103; // w1
  __int64 v104; // x21
  int32_t v105; // w20
  int32_t v106; // w22
  TerminalSceneComponent_c *v107; // x0
  TerminalSceneComponent_o *v108; // x21
  __int64 v109; // x8
  PlayMakerFSM_o *v110; // x20
  System_String_o *ActiveStateName; // x0
  __int64 v112; // x8
  __int64 v113; // x8
  QuestBoardListViewManager_o *v114; // x21
  System_Action_o *v115; // x22
  Il2CppObject *v116; // x23
  struct QuestAfterAction_StateMain___c_StaticFields *static_fields; // x0
  int32_t v118; // w2
  int32_t v119; // w3
  TerminalSceneComponent_c *v120; // x0
  __int64 v121; // x22
  int v122; // w23
  float v123; // s8
  int32_t v124; // w21
  TerminalPramsManager_c *v125; // x0
  __int64 v126; // x8
  __int64 v127; // x8
  __int64 v128; // x8
  __int64 v129; // x8
  System_String_o *v130; // x20
  System_String_o *v131; // x21
  SeManager_c *v132; // x0
  float DEFAULT_VOLUME; // s8
  int32_t v134; // w20
  Il2CppObject *v135; // x22
  const MethodInfo *v136; // x2
  __int64 v137; // x21
  TerminalPramsManager_c *v138; // x0
  int32_t v139; // w20
  clsQuestCheck_o *v140; // x19
  QuestAfterAction_StateMain___c_c *v141; // x8
  System_Action_o *_9__16_33; // x20
  Il2CppObject *v143; // x21
  struct QuestAfterAction_StateMain___c_StaticFields *v144; // x0
  int32_t v145; // w2
  int32_t v146; // w3
  __int64 v147; // x23
  int32_t v148; // w21
  int32_t v149; // w22
  int32_t v150; // w23
  System_String_o *v151; // x23
  int32_t v152; // w2
  int32_t v153; // w3
  System_String_array *v154; // x20
  int32_t v155; // w1
  int v156; // w8
  System_String_o *v157; // x19
  System_String_o *v158; // x20
  System_String_o *v159; // x19
  System_String_o *v160; // x20
  System_String_o *v161; // x20
  Il2CppObject *v162; // x22
  System_Action_o *v163; // x23
  char *v164; // x10
  System_String_o *v165; // x23
  int32_t v166; // w2
  int32_t v167; // w3
  System_String_array *v168; // x20
  int32_t v169; // w1
  int v170; // w8
  System_String_o *v171; // x19
  System_String_o *v172; // x20
  System_String_o *v173; // x20
  Il2CppObject *v174; // x22
  System_Action_o *v175; // x23
  __int64 v176; // x8
  const MethodInfo *v177; // x2
  __int64 v178; // x8
  QuestAfterAction_TitleInfoControlCallback_o *v179; // x21
  Il2CppObject *MapComponent_object; // x22
  Il2CppObject *v181; // x20
  __int64 v182; // x8
  ScrTerminalMap_o *v183; // x23
  __int64 v184; // x8
  ScrTerminalMap_o *v185; // x20
  UnityEngine_GameObject_o *gameObject; // x22
  System_Action_o *v187; // x23
  TerminalPramsManager_c *v188; // x0
  __int64 v189; // x8
  const MethodInfo *v190; // x2
  TerminalPramsManager_c *v191; // x0
  __int64 v192; // x8
  __int64 v193; // x23
  float v194; // s0
  __int64 v195; // x8
  __int64 v196; // x24
  float v197; // s0
  __int64 v198; // x23
  float v199; // s0
  __int64 v200; // x8
  ScrTerminalMap_o *v201; // x24
  float v202; // s0
  float v203; // s9
  float v204; // s0
  const MethodInfo_361E548 *v205; // x2
  float v206; // s0
  float v207; // s1
  float v208; // s2
  __int64 v209; // x22
  int32_t v210; // w0
  int32_t v211; // w20
  float v212; // s8
  int32_t v213; // w19
  __int64 v214; // x20
  int32_t v215; // w2
  int32_t v216; // w3
  __int64 v217; // x8
  QuestAfterAction_o *v218; // x21
  Il2CppObject *v219; // x0
  int32_t v220; // w2
  int32_t v221; // w3
  UnityEngine_Object_o *v222; // x19
  __int64 v223; // x23
  int32_t v224; // w2
  int32_t v225; // w3
  __int64 v226; // x20
  QuestAfterAction_o *v227; // x21
  Il2CppObject *v228; // x0
  __int64 *v229; // x19
  int32_t v230; // w2
  int32_t v231; // w3
  UnityEngine_Object_o *v232; // x21
  SrcSpotBasePrefab_o *v233; // x21
  System_Action_o *v234; // x22
  int32_t v235; // w2
  int32_t v236; // w3
  __int64 v237; // x1
  ServantStatusBattleListViewItem_o *v238; // x0
  __int64 v239; // x22
  QuestAfterAction_o *v240; // x21
  Il2CppObject *v241; // x21
  System_Action_o *v242; // x22
  QuestAfterAction_o *v243; // x21
  Il2CppObject *v244; // x21
  _DWORD *monitor; // x8
  SrcSpotBasePrefab_o *v246; // x0
  int32_t v247; // w1
  QuestAfterAction_o *v248; // x21
  Il2CppObject *v249; // x21
  _DWORD *v250; // x8
  QuestAfterAction_o *v251; // x21
  _DWORD *v252; // x8
  __int64 v253; // x21
  QuestAfterAction_o *v254; // x22
  Il2CppObject *v255; // x22
  int32_t v256; // w21
  TerminalPramsManager_c *v257; // x0
  QuestAfterAction_o *v258; // x20
  Il2CppObject *v259; // x20
  TerminalPramsManager_c *v260; // x0
  SceneJumpInfo_o *v261; // x21
  MapCamera_o *v262; // x20
  float v263; // s0
  System_Action_o *v264; // x0
  __int64 *v265; // x8
  System_Action_o *v266; // x22
  MapCamera_o *v267; // x0
  float v268; // s0
  int32_t v269; // w4
  System_Action_o *v270; // x5
  int v271; // w23
  __int64 v272; // x22
  float v273; // s0
  float v274; // s8
  float v275; // s0
  MapCamera_o *v276; // x19
  float v277; // s0
  float v278; // s9
  int32_t v279; // w20
  __int64 v280; // x20
  int32_t v281; // w2
  int32_t v282; // w3
  __int64 v283; // x8
  QuestAfterAction_o *v284; // x21
  Il2CppObject *v285; // x0
  int32_t v286; // w2
  int32_t v287; // w3
  UnityEngine_Object_o *v288; // x19
  __int64 v289; // x20
  int32_t v290; // w2
  int32_t v291; // w3
  __int64 v292; // x8
  QuestAfterAction_o *v293; // x21
  Il2CppObject *v294; // x0
  int32_t v295; // w2
  int32_t v296; // w3
  UnityEngine_Object_o *v297; // x19
  _BOOL4 IsMapModel; // w23
  QuestAfterAction_o *v299; // x21
  UnityEngine_Object_o *v300; // x21
  const MethodInfo *v301; // x2
  _DWORD *v302; // x8
  _BOOL4 v303; // w23
  QuestAfterAction_o *v304; // x21
  UnityEngine_Object_o *v305; // x21
  const MethodInfo *v306; // x2
  const MethodInfo *v307; // x2
  _DWORD *v308; // x8
  _BOOL4 v309; // w23
  QuestAfterAction_o *v310; // x21
  UnityEngine_Object_o *v311; // x21
  const MethodInfo *v312; // x2
  const MethodInfo *v313; // x2
  System_Action_o *v314; // x20
  const MethodInfo *v315; // x2
  System_String_o *v316; // x20
  int32_t v317; // w2
  int32_t v318; // w3
  __int64 v319; // x23
  __int64 v320; // x8
  __int64 v321; // x22
  int32_t v322; // w21
  bool v323; // w24
  bool v324; // w25
  __int64 v325; // x8
  __int64 v326; // x22
  int32_t v327; // w21
  bool v328; // w22
  __int64 v329; // x8
  __int64 v330; // x22
  int32_t v331; // w21
  bool v332; // w22
  __int64 v333; // x22
  float v334; // s0
  QuestAfterAction_o *v335; // x20
  float v336; // s8
  Il2CppObject *v337; // x19
  __int64 v338; // x8
  ScrTerminalMap_o *v339; // x20
  float v340; // s0
  float v341; // s9
  float v342; // s0
  float v343; // s0
  float v344; // s1
  float v345; // s2
  float v346; // s9
  float v347; // s10
  float v348; // s11
  int32_t v349; // w20
  System_Action_o *v350; // x22
  __int64 v351; // x20
  int32_t v352; // w2
  int32_t v353; // w3
  __int64 v354; // x8
  QuestAfterAction_o *v355; // x21
  Il2CppObject *v356; // x0
  int32_t v357; // w2
  int32_t v358; // w3
  UnityEngine_Object_o *v359; // x19
  MapGimmickComponent_o *v360; // x19
  System_Action_o *v361; // x21
  TerminalSceneComponent_o *v362; // x19
  __int64 v363; // x20
  int32_t v364; // w2
  int32_t v365; // w3
  System_String_array *v366; // x0
  __int64 *v367; // x21
  int32_t v368; // w2
  int32_t v369; // w3
  __int64 v370; // x8
  __int64 v371; // x9
  QuestAfterAction_o *v372; // x21
  Il2CppObject *v373; // x0
  int32_t v374; // w2
  int32_t v375; // w3
  UnityEngine_Object_o *v376; // x19
  MapGimmickComponent_o *v377; // x19
  System_Action_o *v378; // x0
  __int64 *v379; // x8
  System_Action_o *v380; // x21
  __int64 v381; // x21
  QuestAfterAction_o *v382; // x20
  Il2CppObject *v383; // x20
  UIWidget_o *v384; // x20
  int32_t v385; // w2
  int32_t v386; // w3
  __int64 v387; // x8
  QuestAfterAction_o *v388; // x21
  Il2CppObject *v389; // x0
  __int64 v390; // x19
  int32_t v391; // w2
  int32_t v392; // w3
  UnityEngine_Object_o *v393; // x21
  bool v394; // w0
  bool v395; // w22
  int32_t v396; // w1
  __int64 v397; // x8
  __int64 v398; // x22
  int32_t v399; // w21
  bool v400; // w22
  Il2CppObject *v401; // x22
  System_Action_o *v402; // x23
  float v403; // s0
  int v404; // w23
  float v405; // s0
  float v406; // s0
  QuestAfterAction_o *v407; // x25
  const MethodInfo *v408; // x4
  UnityEngine_Object_o *MapGameObject; // x25
  float x; // s9
  float y; // s8
  float z; // s10
  __int64 v413; // x8
  const MethodInfo_361E548 *v414; // x2
  System_String_o *v415; // x19
  QuestAfterAction_o *v416; // x24
  const MethodInfo *v417; // x4
  UnityEngine_Object_o *v418; // x24
  float v419; // s8
  float v420; // s9
  float v421; // s10
  __int64 v422; // x8
  float v423; // s0
  float v424; // s1
  float v425; // s2
  QuestAfterAction_o *v426; // x25
  const MethodInfo *v427; // x4
  UnityEngine_Object_o *v428; // x25
  const MethodInfo_361E548 *v429; // x2
  __int64 v430; // x8
  MapCamera_o *v431; // x19
  System_Action_o *v432; // x0
  __int64 *v433; // x8
  __int64 v434; // x20
  int32_t v435; // w2
  int32_t v436; // w3
  __int64 v437; // x8
  QuestAfterAction_o *v438; // x21
  Il2CppObject *v439; // x0
  int32_t v440; // w2
  int32_t v441; // w3
  UnityEngine_Object_o *v442; // x19
  srcLineSprite_o *v443; // x19
  System_Action_o *v444; // x21
  int32_t v445; // w1
  __int64 v446; // x20
  int32_t v447; // w2
  int32_t v448; // w3
  __int64 v449; // x8
  QuestAfterAction_o *v450; // x21
  Il2CppObject *v451; // x0
  int32_t v452; // w2
  int32_t v453; // w3
  UnityEngine_Object_o *v454; // x19
  __int64 v455; // x20
  int32_t v456; // w2
  int32_t v457; // w3
  __int64 v458; // x8
  QuestAfterAction_o *v459; // x21
  Il2CppObject *v460; // x0
  int32_t v461; // w2
  int32_t v462; // w3
  UnityEngine_Object_o *v463; // x19
  UnityEngine_Object_o *v464; // x21
  UnityEngine_Object_o *v465; // x21
  int v466; // w9
  UnityEngine_Object_o *v467; // x21
  Il2CppObject *v468; // x0
  int32_t v469; // w2
  int32_t v470; // w3
  UnityEngine_Object_o *v471; // x22
  MapGimmickComponent_o *v472; // x21
  System_Action_o *v473; // x0
  System_Action_o *v474; // x22
  Il2CppObject *v475; // x0
  int32_t v476; // w2
  int32_t v477; // w3
  UnityEngine_Object_o *v478; // x22
  System_Action_o *v479; // x0
  MapGimmickComponent_o *v480; // x0
  System_Action_o *v481; // x2
  Il2CppObject *v482; // x21
  Il2CppObject *v483; // x21
  Il2CppClass *v484; // x8
  Il2CppObject *v485; // x21
  Il2CppClass *v486; // x8
  QuestAfterAction_StateMain_c *v487; // x8
  int v488; // w0
  System_Action_o *v489; // x22
  float v490; // s8
  float v491; // s10
  float v492; // s9
  const MethodInfo_361E548 *v493; // x2
  System_String_o *v494; // x19
  __int64 v495; // x8
  ScrTerminalMap_o *v496; // x22
  System_Action_o *v497; // x23
  int32_t v498; // w1
  __int64 v499; // x8
  System_Action_o *v500; // x20
  MapCamera_o *v501; // x19
  float v502; // s0
  System_Action_o *v503; // x0
  __int64 *v504; // x8
  MapCamera_o *v505; // x19
  float v506; // s0
  System_Action_o *v507; // x20
  MapCamera_o *v508; // x19
  float v509; // s0
  float v510; // s0
  int32_t onClickOkSeKind; // [xsp+10h] [xbp-E0h]
  int32_t easeType; // [xsp+38h] [xbp-B8h]
  float sec; // [xsp+3Ch] [xbp-B4h]
  float seca; // [xsp+3Ch] [xbp-B4h]
  System_Nullable_float__o size; // [xsp+40h] [xbp-B0h] BYREF
  System_Nullable_Vector3__o v516; // [xsp+48h] [xbp-A8h] BYREF
  Il2CppObject *value; // [xsp+58h] [xbp-98h] BYREF
  Il2CppObject *entity; // [xsp+60h] [xbp-90h] BYREF
  UnityEngine_Color_o color; // [xsp+68h] [xbp-88h] BYREF
  bool isQuickUpdate; // [xsp+7Ch] [xbp-74h] BYREF
  System_Nullable_float__o p_size; // 0:x0.8
  System_Nullable_float__o v522; // 0:x0.8
  System_Nullable_float__o v523; // 0:x0.8
  System_Nullable_float__o v524; // 0:x0.8
  System_Nullable_float__o v525; // 0:x0.8
  System_Nullable_float__o v526; // 0:x3.8
  System_Nullable_Vector3__o v527; // 0:x0.16
  System_Nullable_Vector3__o v528; // 0:x0.16
  System_Nullable_Vector3__o v529; // 0:x0.16
  System_Nullable_Vector3__o v530; // 0:x0.16
  System_Nullable_Vector3__o v531; // 0:x0.16
  System_Nullable_Vector3__o v532; // 0:x1.16
  UnityEngine_Vector3_o v533; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v534; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v536; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v537; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o Position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v539; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v540; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v541; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v542; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v543; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v544; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v545; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A5803B & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&AvalonSceneManager_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_QuestMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    sub_1B885B0(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__TryGetValue__);
    sub_1B885B0(&FSUtility_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponentInChildren_UISprite___);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_ModelLineComponent___);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&Method_System_Nullable_Vector3___ctor__);
    sub_1B885B0(&Method_System_Nullable_float___ctor__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
    sub_1B885B0(&Method_QuestAfterAction_GetMapComponent_ModelLineComponent___);
    sub_1B885B0(&Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
    sub_1B885B0(&Method_QuestAfterAction_GetMapComponent_srcLineSprite___);
    sub_1B885B0(&SceneJumpInfo_TypeInfo);
    sub_1B885B0(&SeManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
    sub_1B885B0(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    sub_1B885B0(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_1B885B0(&SoundManager_TypeInfo);
    sub_1B885B0(&Method_QuestAfterAction_StateMain_UpdateAnim__);
    sub_1B885B0(&string___TypeInfo);
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    sub_1B885B0(&TerminalSceneComponent_TypeInfo);
    sub_1B885B0(&Method_QuestAfterAction_StateMain___c__UpdateAnim_b__16_31__);
    sub_1B885B0(&Method_QuestAfterAction_StateMain___c__UpdateAnim_b__16_33__);
    sub_1B885B0(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__10__);
    sub_1B885B0(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__11__);
    sub_1B885B0(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__12__);
    sub_1B885B0(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__13__);
    sub_1B885B0(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__14__);
    sub_1B885B0(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__15__);
    sub_1B885B0(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__16__);
    sub_1B885B0(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__17__);
    sub_1B885B0(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__18__);
    sub_1B885B0(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__19__);
    sub_1B885B0(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__20__);
    sub_1B885B0(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__25__);
    sub_1B885B0(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__32__);
    sub_1B885B0(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__36__);
    sub_1B885B0(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__37__);
    sub_1B885B0(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__38__);
    sub_1B885B0(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__39__);
    sub_1B885B0(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__40__);
    sub_1B885B0(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__9__);
    sub_1B885B0(&QuestAfterAction_StateMain___c__DisplayClass16_0_TypeInfo);
    sub_1B885B0(&Method_QuestAfterAction_StateMain___c__DisplayClass16_10__UpdateAnim_b__21__);
    sub_1B885B0(&Method_QuestAfterAction_StateMain___c__DisplayClass16_10__UpdateAnim_b__22__);
    sub_1B885B0(&QuestAfterAction_StateMain___c__DisplayClass16_10_TypeInfo);
    sub_1B885B0(&Method_QuestAfterAction_StateMain___c__DisplayClass16_11__UpdateAnim_b__23__);
    sub_1B885B0(&Method_QuestAfterAction_StateMain___c__DisplayClass16_11__UpdateAnim_b__24__);
    sub_1B885B0(&QuestAfterAction_StateMain___c__DisplayClass16_11_TypeInfo);
    sub_1B885B0(&Method_QuestAfterAction_StateMain___c__DisplayClass16_12__UpdateAnim_b__26__);
    sub_1B885B0(&QuestAfterAction_StateMain___c__DisplayClass16_12_TypeInfo);
    sub_1B885B0(&Method_QuestAfterAction_StateMain___c__DisplayClass16_13__UpdateAnim_b__27__);
    sub_1B885B0(&QuestAfterAction_StateMain___c__DisplayClass16_13_TypeInfo);
    sub_1B885B0(&Method_QuestAfterAction_StateMain___c__DisplayClass16_15__UpdateAnim_b__29__);
    sub_1B885B0(&Method_QuestAfterAction_StateMain___c__DisplayClass16_15__UpdateAnim_b__30__);
    sub_1B885B0(&QuestAfterAction_StateMain___c__DisplayClass16_15_TypeInfo);
    sub_1B885B0(&Method_QuestAfterAction_StateMain___c__DisplayClass16_1__UpdateAnim_b__0__);
    sub_1B885B0(&QuestAfterAction_StateMain___c__DisplayClass16_1_TypeInfo);
    sub_1B885B0(&Method_QuestAfterAction_StateMain___c__DisplayClass16_2__UpdateAnim_b__1__);
    sub_1B885B0(&QuestAfterAction_StateMain___c__DisplayClass16_2_TypeInfo);
    sub_1B885B0(&Method_QuestAfterAction_StateMain___c__DisplayClass16_3__UpdateAnim_b__2__);
    sub_1B885B0(&QuestAfterAction_StateMain___c__DisplayClass16_3_TypeInfo);
    sub_1B885B0(&Method_QuestAfterAction_StateMain___c__DisplayClass16_4__UpdateAnim_b__3__);
    sub_1B885B0(&QuestAfterAction_StateMain___c__DisplayClass16_4_TypeInfo);
    sub_1B885B0(&Method_QuestAfterAction_StateMain___c__DisplayClass16_5__UpdateAnim_b__4__);
    sub_1B885B0(&QuestAfterAction_StateMain___c__DisplayClass16_5_TypeInfo);
    sub_1B885B0(&Method_QuestAfterAction_StateMain___c__DisplayClass16_6__UpdateAnim_b__5__);
    sub_1B885B0(&QuestAfterAction_StateMain___c__DisplayClass16_6_TypeInfo);
    sub_1B885B0(&Method_QuestAfterAction_StateMain___c__DisplayClass16_7__UpdateAnim_b__6__);
    sub_1B885B0(&QuestAfterAction_StateMain___c__DisplayClass16_7_TypeInfo);
    sub_1B885B0(&Method_QuestAfterAction_StateMain___c__DisplayClass16_8__UpdateAnim_b__7__);
    sub_1B885B0(&QuestAfterAction_StateMain___c__DisplayClass16_8_TypeInfo);
    sub_1B885B0(&Method_QuestAfterAction_StateMain___c__DisplayClass16_9__UpdateAnim_b__8__);
    sub_1B885B0(&QuestAfterAction_StateMain___c__DisplayClass16_9_TypeInfo);
    sub_1B885B0(&QuestAfterAction_StateMain___c_TypeInfo);
    sub_1B885B0(&StringLiteral_89/*"\r\n"*/);
    sub_1B885B0(&StringLiteral_1478/*"30101"*/);
    sub_1B885B0(&StringLiteral_10823/*"QUEST_AFTER_ACTION_MESSAGE_"*/);
    sub_1B885B0(&StringLiteral_1479/*"30102"*/);
    sub_1B885B0(&StringLiteral_1403/*"10703"*/);
    sub_1B885B0(&StringLiteral_3407/*"CAPTER WAIT"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    sub_1B885B0(&StringLiteral_19814/*"gevINFOBAR_BACK"*/);
    sub_1B885B0(&StringLiteral_1212/*"0"*/);
    byte_4A5803B = 1;
  }
  isQuickUpdate = 0;
  *(_QWORD *)&color.fields.r = 0LL;
  *(_QWORD *)&color.fields.b = 0LL;
  value = 0LL;
  entity = 0LL;
  v5 = sub_1B887FC(QuestAfterAction_StateMain___c__DisplayClass16_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5 )
    goto LABEL_874;
  *(_QWORD *)(v5 + 16) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 16), (int32_t)this, v8, v9);
  *(_QWORD *)(v5 + 24) = that;
  v10 = (__int64 *)(v5 + 24);
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 24), (int32_t)that, v11, v12);
  if ( this->fields.IsAnimDoing )
    return;
  updated = ((__int64 (__fastcall *)(QuestAfterAction_StateMain_o *, Il2CppMethodPointer))this->klass->vtable._10_get_CommandBuf.method)(
              this,
              this->klass->vtable._11_get_CommandIndex.methodPtr);
  if ( !updated )
    return;
  if ( !*v10 )
    goto LABEL_874;
  if ( *(_BYTE *)(*v10 + 161) )
  {
    updated = ((__int64 (__fastcall *)(QuestAfterAction_StateMain_o *, Il2CppMethodPointer))this->klass->vtable._14_EndAnim.method)(
                this,
                this->klass->vtable._15_onEnd.methodPtr);
    if ( *v10 )
    {
      *(_BYTE *)(*v10 + 161) = 0;
      return;
    }
LABEL_874:
    sub_1B8880C(updated, v7);
  }
  klass = this->klass;
  this->fields.IsAnimDoing = 1;
  v14 = ((__int64 (__fastcall *)(QuestAfterAction_StateMain_o *, Il2CppMethodPointer))klass->vtable._10_get_CommandBuf.method)(
          this,
          klass->vtable._11_get_CommandIndex.methodPtr);
  updated = ((__int64 (__fastcall *)(QuestAfterAction_StateMain_o *, Il2CppMethodPointer))this->klass->vtable._11_get_CommandIndex.method)(
              this,
              this->klass->vtable._12_set_CommandIndex.methodPtr);
  if ( !v14 )
    goto LABEL_874;
  if ( (unsigned int)updated >= *(_DWORD *)(v14 + 24) )
    goto LABEL_875;
  v15 = *(QuestAfterAction_Command_o **)(v14 + 8LL * (int)updated + 32);
  updated = ((__int64 (__fastcall *)(QuestAfterAction_StateMain_o *, QuestAfterAction_Command_o *, Il2CppMethodPointer))this->klass->vtable._9_IsUsableCommand.method)(
              this,
              v15,
              this->klass->vtable._10_get_CommandBuf.methodPtr);
  if ( (updated & 1) == 0 )
    goto LABEL_622;
  if ( !*v10 )
    goto LABEL_874;
  v16 = *(BlankEarthQuestAfterAction_o **)(*v10 + 48);
  v17 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v17, (Il2CppObject *)this, (intptr_t)this->klass->vtable._15_onEnd.methodPtr, 0LL);
  if ( !v16 )
    goto LABEL_874;
  updated = BlankEarthQuestAfterAction__UpdateAnim(v16, v7, v15, v17, &isQuickUpdate, v18);
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
        *v10,
        this->klass->vtable._14_EndAnim.methodPtr);
      return;
    }
    return;
  }
  if ( !v15 )
    goto LABEL_874;
  id = v15->fields.id;
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
          if ( !byte_4A5629D )
          {
            sub_1B885B0(&TerminalSceneComponent_TypeInfo);
            byte_4A5629D = 1;
          }
          updated = (__int64)TerminalSceneComponent_TypeInfo;
          if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            updated = (__int64)TerminalSceneComponent_TypeInfo;
          }
          v109 = **(_QWORD **)(updated + 184);
          if ( !v109 )
            goto LABEL_874;
          updated = *(_QWORD *)(v109 + 256);
          if ( !updated )
            goto LABEL_874;
          updated = (__int64)ScrTerminalListTop__mfGetMyFsmP((ScrTerminalListTop_o *)updated, 0LL);
          if ( !updated )
            goto LABEL_874;
          v110 = (PlayMakerFSM_o *)updated;
          ActiveStateName = PlayMakerFSM__get_ActiveStateName((PlayMakerFSM_o *)updated, 0LL);
          if ( System_String__op_Equality(ActiveStateName, (System_String_o *)StringLiteral_3407/*"CAPTER WAIT"*/, 0LL) )
          {
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            if ( !byte_4A5629D )
            {
              sub_1B885B0(&TerminalSceneComponent_TypeInfo);
              byte_4A5629D = 1;
            }
            updated = (__int64)TerminalSceneComponent_TypeInfo;
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
              updated = (__int64)TerminalSceneComponent_TypeInfo;
            }
            v112 = **(_QWORD **)(updated + 184);
            if ( !v112 )
              goto LABEL_874;
            v113 = *(_QWORD *)(v112 + 256);
            if ( !v113 )
              goto LABEL_874;
            v114 = *(QuestBoardListViewManager_o **)(v113 + 296);
            updated = (__int64)QuestAfterAction_StateMain___c_TypeInfo;
            if ( !QuestAfterAction_StateMain___c_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(QuestAfterAction_StateMain___c_TypeInfo);
              updated = (__int64)QuestAfterAction_StateMain___c_TypeInfo;
            }
            v115 = *(System_Action_o **)(*(_QWORD *)(updated + 184) + 8LL);
            if ( !v115 )
            {
              if ( !*(_DWORD *)(updated + 224) )
              {
                j_il2cpp_runtime_class_init_0(updated);
                updated = (__int64)QuestAfterAction_StateMain___c_TypeInfo;
              }
              v116 = **(Il2CppObject ***)(updated + 184);
              v115 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
              System_Action___ctor(v115, v116, Method_QuestAfterAction_StateMain___c__UpdateAnim_b__16_31__, 0LL);
              static_fields = QuestAfterAction_StateMain___c_TypeInfo->static_fields;
              static_fields->__9__16_31 = v115;
              sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__16_31, (int32_t)v115, v118, v119);
            }
            if ( !v114 )
              goto LABEL_874;
            QuestBoardListViewManager__SetMode(v114, 4, v115, 0, 0, 0LL);
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            if ( !byte_4A5629D )
            {
              sub_1B885B0(&TerminalSceneComponent_TypeInfo);
              byte_4A5629D = 1;
            }
            v120 = TerminalSceneComponent_TypeInfo;
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
              v120 = TerminalSceneComponent_TypeInfo;
            }
            updated = (__int64)v120->static_fields->mInstance;
            if ( !updated )
              goto LABEL_874;
            TerminalSceneComponent__CallQuestInformationClose((TerminalSceneComponent_o *)updated, 0LL);
            PlayMakerFSM__SendEvent(v110, (System_String_o *)StringLiteral_19814/*"gevINFOBAR_BACK"*/, 0LL);
          }
          goto LABEL_622;
        }
        if ( id != 510 )
        {
          if ( id == 520 )
          {
            DEFAULT_FADE_TIME = System_Single__Parse(v15->fields.param, 0LL);
            if ( DEFAULT_FADE_TIME <= 0.0 )
            {
              v22 = AvalonSceneManager_TypeInfo;
              if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
                v22 = AvalonSceneManager_TypeInfo;
              }
              DEFAULT_FADE_TIME = v22->static_fields->DEFAULT_FADE_TIME;
            }
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            if ( !byte_4A5629D )
            {
              sub_1B885B0(&TerminalSceneComponent_TypeInfo);
              byte_4A5629D = 1;
            }
            v23 = TerminalSceneComponent_TypeInfo;
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
              v23 = TerminalSceneComponent_TypeInfo;
            }
            mInstance = v23->static_fields->mInstance;
            v25 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
            System_Action___ctor(
              v25,
              (Il2CppObject *)v5,
              Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__32__,
              0LL);
            if ( !mInstance )
              goto LABEL_874;
            v26 = mInstance;
            v27 = DEFAULT_FADE_TIME;
            v28 = v25;
LABEL_46:
            TerminalSceneComponent__Fadein_MapDisp(v26, v27, v28, 0LL);
          }
          return;
        }
        updated = (__int64)v15->fields.param;
        if ( !updated )
          goto LABEL_874;
        updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
        if ( !updated )
          goto LABEL_874;
        v121 = updated;
        if ( *(_DWORD *)(updated + 24) )
        {
          v122 = System_Int32__Parse(*(System_String_o **)(updated + 32), 0LL);
          v123 = 0.5;
          if ( *(int *)(v121 + 24) >= 2 )
          {
            v124 = System_Int32__Parse(*(System_String_o **)(v121 + 40), 0LL);
            if ( *(int *)(v121 + 24) >= 3 )
              v123 = System_Single__Parse(*(System_String_o **)(v121 + 48), 0LL);
          }
          else
          {
            v124 = v122;
            v122 = -1;
          }
          updated = *v10;
          if ( !*v10 )
            goto LABEL_874;
          MapComponent_object = QuestAfterAction__GetMapComponent_object_(
                                  (QuestAfterAction_o *)updated,
                                  0,
                                  v124,
                                  this,
                                  (const MethodInfo_2F0FD28 *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)MapComponent_object, 0LL, 0LL) )
          {
            if ( v122 >= 1 )
            {
              updated = *v10;
              if ( !*v10 )
                goto LABEL_874;
              v181 = QuestAfterAction__GetMapComponent_object_(
                       (QuestAfterAction_o *)updated,
                       0,
                       v122,
                       this,
                       (const MethodInfo_2F0FD28 *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v181, 0LL, 0LL) )
              {
                if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
                if ( !byte_4A5629D )
                {
                  sub_1B885B0(&TerminalSceneComponent_TypeInfo);
                  byte_4A5629D = 1;
                }
                updated = (__int64)TerminalSceneComponent_TypeInfo;
                if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
                  updated = (__int64)TerminalSceneComponent_TypeInfo;
                }
                v182 = **(_QWORD **)(updated + 184);
                if ( !v182 )
                  goto LABEL_874;
                if ( !v181 )
                  goto LABEL_874;
                v183 = *(ScrTerminalMap_o **)(v182 + 264);
                updated = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v181, 0LL);
                if ( !v183 )
                  goto LABEL_874;
                ScrTerminalMap__SetPlayerIcon(v183, (UnityEngine_GameObject_o *)updated, 0LL);
              }
            }
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            if ( !byte_4A5629D )
            {
              sub_1B885B0(&TerminalSceneComponent_TypeInfo);
              byte_4A5629D = 1;
            }
            updated = (__int64)TerminalSceneComponent_TypeInfo;
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
              updated = (__int64)TerminalSceneComponent_TypeInfo;
            }
            v184 = **(_QWORD **)(updated + 184);
            if ( !v184 )
              goto LABEL_874;
            if ( !MapComponent_object )
              goto LABEL_874;
            v185 = *(ScrTerminalMap_o **)(v184 + 264);
            gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)MapComponent_object, 0LL);
            v187 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
            System_Action___ctor(v187, (Il2CppObject *)this, (intptr_t)this->klass->vtable._15_onEnd.methodPtr, 0LL);
            if ( !v185 )
              goto LABEL_874;
            ScrTerminalMap__MovePlayerIcon(v185, gameObject, v124, v187, v123, 0LL);
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
            v40 = sub_1B887FC(QuestAfterAction_StateMain___c__DisplayClass16_10_TypeInfo);
            System_Object___ctor((Il2CppObject *)v40, 0LL);
            if ( !v40 )
              goto LABEL_874;
            *(_QWORD *)(v40 + 24) = v5;
            v43 = v40 + 24;
            sub_1B88554((ServantStatusBattleListViewItem_o *)(v40 + 24), v5, v41, v42);
            updated = (__int64)v15->fields.param;
            if ( !updated )
              goto LABEL_874;
            updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
            if ( !updated )
              goto LABEL_874;
            v44 = *(_QWORD *)(updated + 24);
            v45 = updated;
            if ( v44 )
            {
              if ( !(_DWORD)v44 )
                goto LABEL_875;
              updated = System_Int32__Parse(*(System_String_o **)(updated + 32), 0LL);
              v46 = updated;
              if ( *(int *)(v45 + 24) >= 2 )
              {
                updated = System_Int32__Parse(*(System_String_o **)(v45 + 40), 0LL);
                v47 = (int)updated < 1;
                if ( *(int *)(v45 + 24) < 3 )
                {
                  v48 = 0;
                }
                else
                {
                  updated = System_Int32__Parse(*(System_String_o **)(v45 + 48), 0LL);
                  v48 = (int)updated > 0;
                }
                goto LABEL_763;
              }
            }
            else
            {
              v46 = 0;
            }
            v48 = 0;
            v47 = 1;
LABEL_763:
            if ( !*(_QWORD *)v43 )
              goto LABEL_874;
            updated = *(_QWORD *)(*(_QWORD *)v43 + 24LL);
            if ( !updated )
              goto LABEL_874;
            v468 = QuestAfterAction__GetMapComponent_object_(
                     (QuestAfterAction_o *)updated,
                     2,
                     v46,
                     this,
                     (const MethodInfo_2F0FD28 *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
            *(_QWORD *)(v40 + 16) = v468;
            sub_1B88554((ServantStatusBattleListViewItem_o *)(v40 + 16), (int32_t)v468, v469, v470);
            v471 = *(UnityEngine_Object_o **)(v40 + 16);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            updated = UnityEngine_Object__op_Equality(v471, 0LL, 0LL);
            if ( (updated & 1) != 0 )
              return;
            v472 = *(MapGimmickComponent_o **)(v40 + 16);
            if ( !v472 )
              goto LABEL_874;
            v472->fields.isForceNotActive = v48;
            v473 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
            v474 = v473;
            if ( v47 )
            {
              System_Action___ctor(
                v473,
                (Il2CppObject *)v40,
                Method_QuestAfterAction_StateMain___c__DisplayClass16_10__UpdateAnim_b__22__,
                0LL);
              v396 = 2;
              goto LABEL_781;
            }
            System_Action___ctor(
              v473,
              (Il2CppObject *)v40,
              Method_QuestAfterAction_StateMain___c__DisplayClass16_10__UpdateAnim_b__21__,
              0LL);
            v498 = 2;
            goto LABEL_836;
          case 401:
            v40 = sub_1B887FC(QuestAfterAction_StateMain___c__DisplayClass16_11_TypeInfo);
            System_Object___ctor((Il2CppObject *)v40, 0LL);
            if ( !v40 )
              goto LABEL_874;
            *(_QWORD *)(v40 + 24) = v5;
            v319 = v40 + 24;
            sub_1B88554((ServantStatusBattleListViewItem_o *)(v40 + 24), v5, v317, v318);
            updated = (__int64)v15->fields.param;
            if ( !updated )
              goto LABEL_874;
            updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
            if ( !updated )
              goto LABEL_874;
            v320 = *(_QWORD *)(updated + 24);
            v321 = updated;
            if ( v320 )
            {
              if ( !(_DWORD)v320 )
                goto LABEL_875;
              updated = System_Int32__Parse(*(System_String_o **)(updated + 32), 0LL);
              v322 = updated;
              if ( *(int *)(v321 + 24) >= 2 )
              {
                updated = System_Int32__Parse(*(System_String_o **)(v321 + 40), 0LL);
                v323 = (int)updated < 1;
                if ( *(int *)(v321 + 24) < 3 )
                {
                  v324 = 0;
                }
                else
                {
                  updated = System_Int32__Parse(*(System_String_o **)(v321 + 48), 0LL);
                  v324 = (int)updated > 0;
                }
                goto LABEL_773;
              }
            }
            else
            {
              v322 = 0;
            }
            v324 = 0;
            v323 = 1;
LABEL_773:
            if ( !*(_QWORD *)v319 )
              goto LABEL_874;
            updated = *(_QWORD *)(*(_QWORD *)v319 + 24LL);
            if ( !updated )
              goto LABEL_874;
            v475 = QuestAfterAction__GetMapComponent_object_(
                     (QuestAfterAction_o *)updated,
                     2,
                     v322,
                     this,
                     (const MethodInfo_2F0FD28 *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
            *(_QWORD *)(v40 + 16) = v475;
            sub_1B88554((ServantStatusBattleListViewItem_o *)(v40 + 16), (int32_t)v475, v476, v477);
            v478 = *(UnityEngine_Object_o **)(v40 + 16);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            updated = UnityEngine_Object__op_Equality(v478, 0LL, 0LL);
            if ( (updated & 1) != 0 )
              return;
            v472 = *(MapGimmickComponent_o **)(v40 + 16);
            if ( !v472 )
              goto LABEL_874;
            v472->fields.isForceLoop = v324;
            v472->fields.isForceNotActive = 0;
            v479 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
            v474 = v479;
            if ( v323 )
            {
              System_Action___ctor(
                v479,
                (Il2CppObject *)v40,
                Method_QuestAfterAction_StateMain___c__DisplayClass16_11__UpdateAnim_b__24__,
                0LL);
              v396 = 3;
LABEL_781:
              v480 = v472;
              v481 = v474;
LABEL_833:
              MapGimmickComponent__SetState(v480, v396, v481, 0LL);
              return;
            }
            System_Action___ctor(
              v479,
              (Il2CppObject *)v40,
              Method_QuestAfterAction_StateMain___c__DisplayClass16_11__UpdateAnim_b__23__,
              0LL);
            v498 = 3;
LABEL_836:
            MapGimmickComponent__SetState(v472, v498, v474, 0LL);
            updated = ((__int64 (__fastcall *)(QuestAfterAction_StateMain_o *, Il2CppMethodPointer))this->klass->vtable._14_EndAnim.method)(
                        this,
                        this->klass->vtable._15_onEnd.methodPtr);
            v499 = *(_QWORD *)(v40 + 24);
            if ( !v499 )
              goto LABEL_874;
            ((void (__fastcall *)(QuestAfterAction_StateMain_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._13_UpdateAnim.method)(
              this,
              *(_QWORD *)(v499 + 24),
              this->klass->vtable._14_EndAnim.methodPtr);
            return;
          case 402:
            updated = (__int64)v15->fields.param;
            if ( !updated )
              goto LABEL_874;
            updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
            if ( !updated )
              goto LABEL_874;
            v325 = *(_QWORD *)(updated + 24);
            v326 = updated;
            if ( v325 )
            {
              if ( !(_DWORD)v325 )
                goto LABEL_875;
              v327 = System_Int32__Parse(*(System_String_o **)(updated + 32), 0LL);
              if ( *(int *)(v326 + 24) >= 2 )
              {
                v328 = System_Int32__Parse(*(System_String_o **)(v326 + 40), 0LL) > 0;
                goto LABEL_784;
              }
            }
            else
            {
              v327 = 0;
            }
            v328 = 0;
LABEL_784:
            updated = *v10;
            if ( !*v10 )
              goto LABEL_874;
            v482 = QuestAfterAction__GetMapComponent_object_(
                     (QuestAfterAction_o *)updated,
                     2,
                     v327,
                     this,
                     (const MethodInfo_2F0FD28 *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            updated = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v482, 0LL, 0LL);
            if ( (updated & 1) == 0 )
            {
              if ( !v482 )
                goto LABEL_874;
              BYTE1(v482[6].monitor) = v328;
              MapGimmickComponent__SetDispAnimQuick((MapGimmickComponent_o *)v482, 0, 0LL);
              v302 = v482[7].klass;
              if ( !v302 )
                goto LABEL_874;
LABEL_790:
              v302[4] = 0;
              goto LABEL_18;
            }
            return;
          case 403:
            updated = (__int64)v15->fields.param;
            if ( !updated )
              goto LABEL_874;
            updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
            if ( !updated )
              goto LABEL_874;
            v329 = *(_QWORD *)(updated + 24);
            v330 = updated;
            if ( v329 )
            {
              if ( !(_DWORD)v329 )
                goto LABEL_875;
              v331 = System_Int32__Parse(*(System_String_o **)(updated + 32), 0LL);
              if ( *(int *)(v330 + 24) >= 2 )
              {
                v332 = System_Int32__Parse(*(System_String_o **)(v330 + 40), 0LL) > 0;
                goto LABEL_793;
              }
            }
            else
            {
              v331 = 0;
            }
            v332 = 0;
LABEL_793:
            updated = *v10;
            if ( !*v10 )
              goto LABEL_874;
            v483 = QuestAfterAction__GetMapComponent_object_(
                     (QuestAfterAction_o *)updated,
                     2,
                     v331,
                     this,
                     (const MethodInfo_2F0FD28 *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            updated = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v483, 0LL, 0LL);
            if ( (updated & 1) == 0 )
            {
              if ( !v483 )
                goto LABEL_874;
              LOBYTE(v483[6].monitor) = v332;
              BYTE1(v483[6].monitor) = 0;
              MapGimmickComponent__SetDispAnimQuick((MapGimmickComponent_o *)v483, 1, 0LL);
              v484 = v483[7].klass;
              if ( !v484 )
                goto LABEL_874;
              LODWORD(v484->_1.name) = 1;
              goto LABEL_18;
            }
            return;
          case 404:
            updated = (__int64)v15->fields.param;
            if ( !updated )
              goto LABEL_874;
            updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
            if ( !updated )
              goto LABEL_874;
            v333 = updated;
            if ( *(int *)(updated + 24) <= 4 )
              goto LABEL_622;
            v334 = System_Single__Parse(*(System_String_o **)(updated + 56), 0LL);
            if ( !*(_DWORD *)(v333 + 24) )
              goto LABEL_875;
            v335 = (QuestAfterAction_o *)*v10;
            v336 = v334;
            updated = System_Int32__Parse(*(System_String_o **)(v333 + 32), 0LL);
            if ( !v335 )
              goto LABEL_874;
            v337 = QuestAfterAction__GetMapComponent_object_(
                     v335,
                     2,
                     updated,
                     this,
                     (const MethodInfo_2F0FD28 *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v337, 0LL, 0LL) )
              return;
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            if ( !byte_4A5629D )
            {
              sub_1B885B0(&TerminalSceneComponent_TypeInfo);
              byte_4A5629D = 1;
            }
            updated = (__int64)TerminalSceneComponent_TypeInfo;
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
              updated = (__int64)TerminalSceneComponent_TypeInfo;
            }
            v338 = **(_QWORD **)(updated + 184);
            if ( !v338 )
              goto LABEL_874;
            if ( *(_DWORD *)(v333 + 24) <= 1u )
              goto LABEL_875;
            v339 = *(ScrTerminalMap_o **)(v338 + 264);
            v340 = System_Single__Parse(*(System_String_o **)(v333 + 40), 0LL);
            if ( *(_DWORD *)(v333 + 24) <= 2u )
              goto LABEL_875;
            v341 = v340;
            v342 = System_Single__Parse(*(System_String_o **)(v333 + 48), 0LL);
            if ( !v339 )
              goto LABEL_874;
            *(UnityEngine_Vector3_o *)&v343 = ScrTerminalMap__LocalPosFromCoord(v339, v341, v342, 0.0, 0.0, 0LL);
            if ( *(_DWORD *)(v333 + 24) <= 4u )
              goto LABEL_875;
            v346 = v343;
            v347 = v344;
            v348 = v345;
            v349 = System_Int32__Parse(*(System_String_o **)(v333 + 64), 0LL);
            v350 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
            System_Action___ctor(
              v350,
              (Il2CppObject *)v5,
              Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__25__,
              0LL);
            if ( !v337 )
              goto LABEL_874;
            v534.fields.y = v347;
            v534.fields.z = v348;
            v534.fields.x = v346;
            MapGimmickComponent__SetMoveAnim((MapGimmickComponent_o *)v337, v534, v336 * 0.001, v349, v350, 0LL);
            return;
          case 405:
            v351 = sub_1B887FC(QuestAfterAction_StateMain___c__DisplayClass16_12_TypeInfo);
            System_Object___ctor((Il2CppObject *)v351, 0LL);
            if ( !v351 )
              goto LABEL_874;
            *(_QWORD *)(v351 + 24) = v5;
            sub_1B88554((ServantStatusBattleListViewItem_o *)(v351 + 24), v5, v352, v353);
            v354 = *(_QWORD *)(v351 + 24);
            if ( !v354 )
              goto LABEL_874;
            v355 = *(QuestAfterAction_o **)(v354 + 24);
            updated = System_Int32__Parse(v15->fields.param, 0LL);
            if ( !v355 )
              goto LABEL_874;
            v356 = QuestAfterAction__GetMapComponent_object_(
                     v355,
                     2,
                     updated,
                     this,
                     (const MethodInfo_2F0FD28 *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
            *(_QWORD *)(v351 + 16) = v356;
            sub_1B88554((ServantStatusBattleListViewItem_o *)(v351 + 16), (int32_t)v356, v357, v358);
            v359 = *(UnityEngine_Object_o **)(v351 + 16);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Equality(v359, 0LL, 0LL) )
              return;
            v360 = *(MapGimmickComponent_o **)(v351 + 16);
            v361 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
            System_Action___ctor(
              v361,
              (Il2CppObject *)v351,
              Method_QuestAfterAction_StateMain___c__DisplayClass16_12__UpdateAnim_b__26__,
              0LL);
            if ( !v360 )
              goto LABEL_874;
            MapGimmickComponent__SetState(v360, 3, v361, 0LL);
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            if ( !byte_4A5629D )
            {
              sub_1B885B0(&TerminalSceneComponent_TypeInfo);
              byte_4A5629D = 1;
            }
            updated = (__int64)TerminalSceneComponent_TypeInfo;
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
              updated = (__int64)TerminalSceneComponent_TypeInfo;
            }
            v362 = **(TerminalSceneComponent_o ***)(updated + 184);
            if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
            if ( !v362 )
              goto LABEL_874;
            v26 = v362;
            v28 = 0LL;
            v27 = AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME;
            goto LABEL_46;
          case 406:
            v363 = sub_1B887FC(QuestAfterAction_StateMain___c__DisplayClass16_13_TypeInfo);
            System_Object___ctor((Il2CppObject *)v363, 0LL);
            if ( !v363 )
              goto LABEL_874;
            *(_QWORD *)(v363 + 32) = v5;
            sub_1B88554((ServantStatusBattleListViewItem_o *)(v363 + 32), v5, v364, v365);
            updated = (__int64)v15->fields.param;
            if ( !updated )
              goto LABEL_874;
            v366 = System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
            *(_QWORD *)(v363 + 24) = v366;
            v367 = (__int64 *)(v363 + 24);
            sub_1B88554((ServantStatusBattleListViewItem_o *)(v363 + 24), (int32_t)v366, v368, v369);
            v370 = *(_QWORD *)(v363 + 32);
            if ( !v370 )
              goto LABEL_874;
            v371 = *v367;
            if ( !*v367 )
              goto LABEL_874;
            if ( !*(_DWORD *)(v371 + 24) )
              goto LABEL_875;
            v372 = *(QuestAfterAction_o **)(v370 + 24);
            updated = System_Int32__Parse(*(System_String_o **)(v371 + 32), 0LL);
            if ( !v372 )
              goto LABEL_874;
            v373 = QuestAfterAction__GetMapComponent_object_(
                     v372,
                     2,
                     updated,
                     this,
                     (const MethodInfo_2F0FD28 *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
            *(_QWORD *)(v363 + 16) = v373;
            sub_1B88554((ServantStatusBattleListViewItem_o *)(v363 + 16), (int32_t)v373, v374, v375);
            v376 = *(UnityEngine_Object_o **)(v363 + 16);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Equality(v376, 0LL, 0LL) )
              return;
            v377 = *(MapGimmickComponent_o **)(v363 + 16);
            v378 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
            v379 = &Method_QuestAfterAction_StateMain___c__DisplayClass16_13__UpdateAnim_b__27__;
            v380 = v378;
            goto LABEL_633;
          case 407:
            updated = (__int64)v15->fields.param;
            if ( !updated )
              goto LABEL_874;
            updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
            if ( !updated )
              goto LABEL_874;
            v381 = updated;
            if ( !*(_DWORD *)(updated + 24) )
              goto LABEL_875;
            v382 = (QuestAfterAction_o *)*v10;
            updated = System_Int32__Parse(*(System_String_o **)(updated + 32), 0LL);
            if ( !v382 )
              goto LABEL_874;
            v383 = QuestAfterAction__GetMapComponent_object_(
                     v382,
                     2,
                     updated,
                     this,
                     (const MethodInfo_2F0FD28 *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            updated = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v383, 0LL, 0LL);
            if ( (updated & 1) != 0 )
              return;
            if ( !v383 )
              goto LABEL_874;
            updated = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v383, 0LL);
            if ( !updated )
              goto LABEL_874;
            updated = (__int64)UnityEngine_GameObject__GetComponentInChildren_object_(
                                 (UnityEngine_GameObject_o *)updated,
                                 (const MethodInfo_2ECF11C *)Method_UnityEngine_GameObject_GetComponentInChildren_UISprite___);
            if ( *(_DWORD *)(v381 + 24) <= 1u )
              goto LABEL_875;
            v384 = (UIWidget_o *)updated;
            updated = UnityEngine_ColorUtility__TryParseHtmlString(*(System_String_o **)(v381 + 40), &color, 0LL);
            if ( !v384 )
              goto LABEL_874;
            UIWidget__set_color(v384, color, 0LL);
            goto LABEL_622;
          case 408:
            v363 = sub_1B887FC(QuestAfterAction_StateMain___c__DisplayClass16_15_TypeInfo);
            System_Object___ctor((Il2CppObject *)v363, 0LL);
            if ( !v363 )
              goto LABEL_874;
            *(_QWORD *)(v363 + 24) = v5;
            sub_1B88554((ServantStatusBattleListViewItem_o *)(v363 + 24), v5, v385, v386);
            v387 = *(_QWORD *)(v363 + 24);
            if ( !v387 )
              goto LABEL_874;
            v388 = *(QuestAfterAction_o **)(v387 + 24);
            updated = System_Int32__Parse(v15->fields.param, 0LL);
            if ( !v388 )
              goto LABEL_874;
            v389 = QuestAfterAction__GetMapComponent_object_(
                     v388,
                     2,
                     updated,
                     this,
                     (const MethodInfo_2F0FD28 *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
            *(_QWORD *)(v363 + 16) = v389;
            v390 = v363 + 16;
            sub_1B88554((ServantStatusBattleListViewItem_o *)(v363 + 16), (int32_t)v389, v391, v392);
            v393 = *(UnityEngine_Object_o **)(v363 + 16);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Equality(v393, 0LL, 0LL) )
              return;
            updated = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_QuestTree__get_Instance__);
            if ( !*(_QWORD *)v390 || !updated )
              goto LABEL_874;
            v394 = QuestTree__CheckMapGimmickCond_34118192(
                     (QuestTree_o *)updated,
                     *(MapControl_MapGimmickInfo_o **)(*(_QWORD *)v390 + 112LL),
                     0LL);
            v377 = *(MapGimmickComponent_o **)v390;
            v395 = v394;
            v378 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
            v380 = v378;
            if ( v395 )
            {
              v379 = &Method_QuestAfterAction_StateMain___c__DisplayClass16_15__UpdateAnim_b__29__;
LABEL_633:
              System_Action___ctor(v378, (Il2CppObject *)v363, *v379, 0LL);
              if ( !v377 )
                goto LABEL_874;
              v396 = 3;
            }
            else
            {
              System_Action___ctor(
                v378,
                (Il2CppObject *)v363,
                Method_QuestAfterAction_StateMain___c__DisplayClass16_15__UpdateAnim_b__30__,
                0LL);
              if ( !v377 )
                goto LABEL_874;
              v396 = 2;
            }
            v480 = v377;
            v481 = v380;
            goto LABEL_833;
          case 409:
            updated = (__int64)v15->fields.param;
            if ( !updated )
              goto LABEL_874;
            updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
            if ( !updated )
              goto LABEL_874;
            v397 = *(_QWORD *)(updated + 24);
            v398 = updated;
            if ( v397 )
            {
              if ( !(_DWORD)v397 )
                goto LABEL_875;
              v399 = System_Int32__Parse(*(System_String_o **)(updated + 32), 0LL);
              if ( *(int *)(v398 + 24) >= 2 )
              {
                v400 = System_Int32__Parse(*(System_String_o **)(v398 + 40), 0LL) > 0;
                goto LABEL_802;
              }
            }
            else
            {
              v399 = 0;
            }
            v400 = 0;
LABEL_802:
            updated = *v10;
            if ( !*v10 )
              goto LABEL_874;
            v485 = QuestAfterAction__GetMapComponent_object_(
                     (QuestAfterAction_o *)updated,
                     2,
                     v399,
                     this,
                     (const MethodInfo_2F0FD28 *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            updated = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v485, 0LL, 0LL);
            if ( (updated & 1) == 0 )
            {
              if ( !v485 )
                goto LABEL_874;
              LOBYTE(v485[6].monitor) = v400;
              BYTE1(v485[6].monitor) = 0;
              MapGimmickComponent__SetDispAnim((MapGimmickComponent_o *)v485, 1, 0LL);
              v486 = v485[7].klass;
              if ( !v486 )
                goto LABEL_874;
              LODWORD(v486->_1.name) = 1;
              v487 = this->klass;
              this->fields.IsAnimDoing = 0;
              v488 = ((__int64 (__fastcall *)(QuestAfterAction_StateMain_o *, Il2CppMethodPointer))v487->vtable._11_get_CommandIndex.method)(
                       this,
                       v487->vtable._12_set_CommandIndex.methodPtr);
              ((void (__fastcall *)(QuestAfterAction_StateMain_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._12_set_CommandIndex.method)(
                this,
                (unsigned int)(v488 + 1),
                this->klass->vtable._13_UpdateAnim.methodPtr);
              goto LABEL_19;
            }
            return;
          default:
            if ( id != 500 )
              return;
            v256 = System_Int32__Parse(v15->fields.param, 0LL);
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            if ( !byte_4A58086 )
            {
              sub_1B885B0(&TerminalPramsManager_TypeInfo);
              byte_4A58086 = 1;
            }
            v257 = TerminalPramsManager_TypeInfo;
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
              v257 = TerminalPramsManager_TypeInfo;
            }
            v257->static_fields->_AfterActionFocusQuestId_k__BackingField = v256;
            if ( !DataManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
            updated = (__int64)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_QuestMaster___);
            if ( !updated )
              goto LABEL_874;
            if ( !DataMasterBase_object__object__int___TryGetEntity(
                    (DataMasterBase_TMaster__TEntity__PKType__o *)updated,
                    &entity,
                    v256,
                    (const MethodInfo_311D988 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__) )
              goto LABEL_622;
            updated = (__int64)entity;
            if ( !entity )
              goto LABEL_874;
            v258 = (QuestAfterAction_o *)*v10;
            updated = QuestEntity__getSpotId((QuestEntity_o *)entity, 0LL);
            if ( !v258 )
              goto LABEL_874;
            v259 = QuestAfterAction__GetMapComponent_object_(
                     v258,
                     0,
                     updated,
                     this,
                     (const MethodInfo_2F0FD28 *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            updated = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v259, 0LL, 0LL);
            if ( (updated & 1) == 0 )
              goto LABEL_622;
            if ( !v259 )
              goto LABEL_874;
            SrcSpotBasePrefab__SelectSpot((SrcSpotBasePrefab_o *)v259, 0, 0LL);
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            if ( !byte_4A58087 )
            {
              sub_1B885B0(&TerminalPramsManager_TypeInfo);
              byte_4A58087 = 1;
            }
            v260 = TerminalPramsManager_TypeInfo;
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
              v260 = TerminalPramsManager_TypeInfo;
            }
            v260->static_fields->_IsBackQuestBoardDisable_k__BackingField = 1;
            goto LABEL_622;
        }
      }
      updated = (__int64)v15->fields.param;
      if ( !updated )
        goto LABEL_874;
      updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
      if ( !updated )
        goto LABEL_874;
      v61 = updated;
      if ( *(int *)(updated + 24) <= 4 )
        goto LABEL_622;
      v62 = System_Single__Parse(*(System_String_o **)(updated + 32), 0LL);
      if ( *(_DWORD *)(v61 + 24) <= 1u )
        goto LABEL_875;
      v63 = v62;
      v64 = System_Single__Parse(*(System_String_o **)(v61 + 40), 0LL);
      if ( *(_DWORD *)(v61 + 24) <= 2u )
        goto LABEL_875;
      v65 = v64;
      v66 = System_Single__Parse(*(System_String_o **)(v61 + 48), 0LL);
      if ( *(_DWORD *)(v61 + 24) <= 3u )
        goto LABEL_875;
      v67 = v66;
      v68 = System_Single__Parse(*(System_String_o **)(v61 + 56), 0LL);
      if ( *(_DWORD *)(v61 + 24) <= 4u )
        goto LABEL_875;
      v69 = v68;
      v70 = System_Int32__Parse(*(System_String_o **)(v61 + 64), 0LL);
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      if ( !byte_4A5629D )
      {
        sub_1B885B0(&TerminalSceneComponent_TypeInfo);
        byte_4A5629D = 1;
      }
      updated = (__int64)TerminalSceneComponent_TypeInfo;
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        updated = (__int64)TerminalSceneComponent_TypeInfo;
      }
      v71 = **(_QWORD **)(updated + 184);
      if ( !v71 )
        goto LABEL_874;
      updated = *(_QWORD *)(v71 + 264);
      if ( !updated )
        goto LABEL_874;
      v533.fields.y = v65;
      v533.fields.z = v67;
      v72 = v69 * 0.001;
      v533.fields.x = v63;
      *(UnityEngine_Vector3_o *)&v74 = ScrTerminalMap__ConvertLocalToScreenPosition(
                                         (ScrTerminalMap_o *)updated,
                                         v533,
                                         0LL);
      v77 = v74;
      v78 = v75;
      v79 = v76;
      if ( v15->fields.id != 352 || *(int *)(v61 + 24) < 6 )
      {
        if ( !*v10 )
          goto LABEL_874;
        v80 = *(MapCamera_o **)(*v10 + 144);
        v81 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
        v82 = &Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__20__;
LABEL_108:
        v83 = v81;
        System_Action___ctor(v81, (Il2CppObject *)v5, *v82, 0LL);
        if ( !v80 )
          goto LABEL_874;
        v84 = v80;
        v85 = v77;
        v86 = v78;
        v87 = v79;
        v88 = v72;
        v89 = v70;
        v90 = v83;
        goto LABEL_857;
      }
      if ( !*v10 )
        goto LABEL_874;
      v262 = *(MapCamera_o **)(*v10 + 144);
      *(_QWORD *)&v527.fields.hasValue = &v516;
      *(_QWORD *)&v527.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
      *(_QWORD *)&v516.fields.hasValue = 0LL;
      *(_QWORD *)&v516.fields.value.fields.y = 0LL;
      System_Nullable_Vector3____ctor(v527, *(UnityEngine_Vector3_o *)&v74, v73);
      if ( *(_DWORD *)(v61 + 24) <= 5u )
        goto LABEL_875;
      v263 = System_Single__Parse(*(System_String_o **)(v61 + 72), 0LL);
      p_size = (System_Nullable_float__o)&size;
      size = 0LL;
      System_Nullable_float____ctor(p_size, v263, (const MethodInfo_361C4E4 *)Method_System_Nullable_float___ctor__);
      v264 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
      v265 = &Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__19__;
LABEL_478:
      v266 = v264;
      System_Action___ctor(v264, (Il2CppObject *)v5, *v265, 0LL);
      if ( !v262 )
        goto LABEL_874;
      v532 = v516;
      v526 = size;
      v267 = v262;
      v268 = v72;
      v269 = v70;
      v270 = v266;
LABEL_868:
      MapCamera__StartAutoWork(v267, v268, v532, v526, v269, v270, 0LL);
      return;
    }
    if ( id <= 113 )
    {
      switch ( id )
      {
        case 'd':
          v49 = sub_1B887FC(QuestAfterAction_StateMain___c__DisplayClass16_1_TypeInfo);
          System_Object___ctor((Il2CppObject *)v49, 0LL);
          if ( !v49 )
            goto LABEL_874;
          *(_QWORD *)(v49 + 24) = v5;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v49 + 24), v5, v50, v51);
          v52 = *(_QWORD *)(v49 + 24);
          if ( !v52 )
            goto LABEL_874;
          v53 = *(QuestAfterAction_o **)(v52 + 24);
          updated = System_Int32__Parse(v15->fields.param, 0LL);
          if ( !v53 )
            goto LABEL_874;
          v54 = QuestAfterAction__GetMapComponent_object_(
                  v53,
                  0,
                  updated,
                  this,
                  (const MethodInfo_2F0FD28 *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
          *(_QWORD *)(v49 + 16) = v54;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v49 + 16), (int32_t)v54, v55, v56);
          v57 = *(UnityEngine_Object_o **)(v49 + 16);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Equality(v57, 0LL, 0LL) )
            return;
          v58 = *(SrcSpotBasePrefab_o **)(v49 + 16);
          v59 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
          System_Action___ctor(
            v59,
            (Il2CppObject *)v49,
            Method_QuestAfterAction_StateMain___c__DisplayClass16_1__UpdateAnim_b__0__,
            0LL);
          if ( !v58 )
            goto LABEL_874;
          v60 = 2;
          goto LABEL_392;
        case 'e':
          v214 = sub_1B887FC(QuestAfterAction_StateMain___c__DisplayClass16_2_TypeInfo);
          System_Object___ctor((Il2CppObject *)v214, 0LL);
          if ( !v214 )
            goto LABEL_874;
          *(_QWORD *)(v214 + 24) = v5;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v214 + 24), v5, v215, v216);
          v217 = *(_QWORD *)(v214 + 24);
          if ( !v217 )
            goto LABEL_874;
          v218 = *(QuestAfterAction_o **)(v217 + 24);
          updated = System_Int32__Parse(v15->fields.param, 0LL);
          if ( !v218 )
            goto LABEL_874;
          v219 = QuestAfterAction__GetMapComponent_object_(
                   v218,
                   0,
                   updated,
                   this,
                   (const MethodInfo_2F0FD28 *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
          *(_QWORD *)(v214 + 16) = v219;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v214 + 16), (int32_t)v219, v220, v221);
          v222 = *(UnityEngine_Object_o **)(v214 + 16);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Equality(v222, 0LL, 0LL) )
            return;
          v58 = *(SrcSpotBasePrefab_o **)(v214 + 16);
          v59 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
          System_Action___ctor(
            v59,
            (Il2CppObject *)v214,
            Method_QuestAfterAction_StateMain___c__DisplayClass16_2__UpdateAnim_b__1__,
            0LL);
          if ( !v58 )
            goto LABEL_874;
          v60 = 3;
LABEL_392:
          SrcSpotBasePrefab__SetState(v58, v60, v59, 0LL);
          return;
        case 'f':
          v223 = sub_1B887FC(QuestAfterAction_StateMain___c__DisplayClass16_3_TypeInfo);
          System_Object___ctor((Il2CppObject *)v223, 0LL);
          if ( !v223 )
            goto LABEL_874;
          *(_QWORD *)(v223 + 24) = v5;
          v226 = v223 + 24;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v223 + 24), v5, v224, v225);
          if ( !*(_QWORD *)(v223 + 24) )
            goto LABEL_874;
          v227 = *(QuestAfterAction_o **)(*(_QWORD *)(v223 + 24) + 24LL);
          updated = System_Int32__Parse(v15->fields.param, 0LL);
          if ( !v227 )
            goto LABEL_874;
          v228 = QuestAfterAction__GetMapComponent_object_(
                   v227,
                   0,
                   updated,
                   this,
                   (const MethodInfo_2F0FD28 *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
          *(_QWORD *)(v223 + 16) = v228;
          v229 = (__int64 *)(v223 + 16);
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v223 + 16), (int32_t)v228, v230, v231);
          v232 = *(UnityEngine_Object_o **)(v223 + 16);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Equality(v232, 0LL, 0LL) )
            return;
          v233 = *(SrcSpotBasePrefab_o **)(v223 + 16);
          v234 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
          System_Action___ctor(
            v234,
            (Il2CppObject *)v223,
            Method_QuestAfterAction_StateMain___c__DisplayClass16_3__UpdateAnim_b__2__,
            0LL);
          if ( !v233 )
            goto LABEL_874;
          SrcSpotBasePrefab__SetState(v233, 4, v234, 0LL);
          if ( !*(_QWORD *)v226 )
            goto LABEL_874;
          updated = *(_QWORD *)(*(_QWORD *)v226 + 24LL);
          if ( !updated )
            goto LABEL_874;
          v237 = *v229;
          *(_QWORD *)(updated + 176) = *v229;
          v238 = (ServantStatusBattleListViewItem_o *)(updated + 176);
          goto LABEL_414;
        case 'g':
          updated = (__int64)v15->fields.param;
          if ( !updated )
            goto LABEL_874;
          updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
          if ( !updated )
            goto LABEL_874;
          v239 = updated;
          if ( *(int *)(updated + 24) <= 1 )
            goto LABEL_622;
          v240 = (QuestAfterAction_o *)*v10;
          updated = System_Int32__Parse(*(System_String_o **)(updated + 32), 0LL);
          if ( !v240 )
            goto LABEL_874;
          v241 = QuestAfterAction__GetMapComponent_object_(
                   v240,
                   0,
                   updated,
                   this,
                   (const MethodInfo_2F0FD28 *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          updated = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v241, 0LL, 0LL);
          if ( (updated & 1) != 0 )
            return;
          if ( *(_DWORD *)(v239 + 24) <= 1u )
            goto LABEL_875;
          updated = System_Int32__Parse(*(System_String_o **)(v239 + 40), 0LL);
          if ( !v241 )
            goto LABEL_874;
          LODWORD(v241[14].klass) = updated;
          v242 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
          System_Action___ctor(v242, (Il2CppObject *)this, (intptr_t)this->klass->vtable._15_onEnd.methodPtr, 0LL);
          SrcSpotBasePrefab__SetState((SrcSpotBasePrefab_o *)v241, 5, v242, 0LL);
          updated = *v10;
          if ( !*v10 )
            goto LABEL_874;
          *(_QWORD *)(updated + 176) = v241;
          v238 = (ServantStatusBattleListViewItem_o *)(updated + 176);
          LODWORD(v237) = (_DWORD)v241;
LABEL_414:
          sub_1B88554(v238, v237, v235, v236);
          return;
        case 'h':
        case 'i':
        case 'j':
        case 'k':
        case 'l':
        case 'm':
          return;
        case 'n':
          v243 = (QuestAfterAction_o *)*v10;
          updated = System_Int32__Parse(v15->fields.param, 0LL);
          if ( !v243 )
            goto LABEL_874;
          v244 = QuestAfterAction__GetMapComponent_object_(
                   v243,
                   0,
                   updated,
                   this,
                   (const MethodInfo_2F0FD28 *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          updated = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v244, 0LL, 0LL);
          if ( (updated & 1) != 0 )
            return;
          if ( !v244 )
            goto LABEL_874;
          SrcSpotBasePrefab__SetQaaScaleAnimQuick((SrcSpotBasePrefab_o *)v244, 0, 0LL);
          monitor = v244[14].monitor;
          if ( !monitor )
            goto LABEL_874;
          monitor[5] = 0;
          v246 = (SrcSpotBasePrefab_o *)v244;
          v247 = 0;
          goto LABEL_437;
        case 'o':
          v248 = (QuestAfterAction_o *)*v10;
          updated = System_Int32__Parse(v15->fields.param, 0LL);
          if ( !v248 )
            goto LABEL_874;
          v249 = QuestAfterAction__GetMapComponent_object_(
                   v248,
                   0,
                   updated,
                   this,
                   (const MethodInfo_2F0FD28 *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          updated = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v249, 0LL, 0LL);
          if ( (updated & 1) != 0 )
            return;
          if ( !v249 )
            goto LABEL_874;
          SrcSpotBasePrefab__SetQaaScaleAnimQuick((SrcSpotBasePrefab_o *)v249, 1, 0LL);
          SrcSpotBasePrefab__SetQaaColorAnimQuick((SrcSpotBasePrefab_o *)v249, 0, 0LL);
          v250 = v249[14].monitor;
          if ( !v250 )
            goto LABEL_874;
          v250[5] = 2;
          goto LABEL_436;
        case 'p':
          v251 = (QuestAfterAction_o *)*v10;
          updated = System_Int32__Parse(v15->fields.param, 0LL);
          if ( !v251 )
            goto LABEL_874;
          v249 = QuestAfterAction__GetMapComponent_object_(
                   v251,
                   0,
                   updated,
                   this,
                   (const MethodInfo_2F0FD28 *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          updated = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v249, 0LL, 0LL);
          if ( (updated & 1) != 0 )
            return;
          if ( !v249 )
            goto LABEL_874;
          SrcSpotBasePrefab__SetQaaScaleAnimQuick((SrcSpotBasePrefab_o *)v249, 1, 0LL);
          SrcSpotBasePrefab__SetQaaColorAnimQuick((SrcSpotBasePrefab_o *)v249, 1, 0LL);
          v252 = v249[14].monitor;
          if ( !v252 )
            goto LABEL_874;
          v252[5] = 1;
LABEL_436:
          v247 = 1;
          v246 = (SrcSpotBasePrefab_o *)v249;
LABEL_437:
          SrcSpotBasePrefab__SetTouchType(v246, v247, 0LL);
          goto LABEL_18;
        case 'q':
          updated = (__int64)v15->fields.param;
          if ( !updated )
            goto LABEL_874;
          updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
          if ( !updated )
            goto LABEL_874;
          v253 = updated;
          if ( *(int *)(updated + 24) <= 1 )
            goto LABEL_622;
          v254 = (QuestAfterAction_o *)*v10;
          updated = System_Int32__Parse(*(System_String_o **)(updated + 32), 0LL);
          if ( !v254 )
            goto LABEL_874;
          v255 = QuestAfterAction__GetMapComponent_object_(
                   v254,
                   0,
                   updated,
                   this,
                   (const MethodInfo_2F0FD28 *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          updated = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v255, 0LL, 0LL);
          if ( (updated & 1) != 0 )
            return;
          if ( *(_DWORD *)(v253 + 24) <= 1u )
            goto LABEL_875;
          updated = System_Int32__Parse(*(System_String_o **)(v253 + 40), 0LL);
          if ( !v255 )
            goto LABEL_874;
          LODWORD(v255[14].klass) = updated;
          SrcSpotBasePrefab__UpdateDisp((SrcSpotBasePrefab_o *)v255, 1, 0LL);
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
        updated = (__int64)v15->fields.param;
        if ( !updated )
          goto LABEL_874;
        updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
        if ( !updated )
          goto LABEL_874;
        v34 = *(_QWORD *)(updated + 24);
        v35 = updated;
        if ( (int)v34 <= 0 )
          goto LABEL_622;
        if ( (int)v34 > 2 )
        {
          v403 = System_Single__Parse(*(System_String_o **)(updated + 48), 0LL);
          v34 = *(_QWORD *)(v35 + 24);
          v36 = v403 * 0.001;
        }
        else
        {
          v36 = 0.5;
        }
        sec = v36;
        if ( (int)v34 >= 2 )
        {
          updated = System_Int32__Parse(*(System_String_o **)(v35 + 40), 0LL);
          v34 = *(_QWORD *)(v35 + 24);
          v404 = updated;
        }
        else
        {
          v404 = 15;
        }
        if ( !(_DWORD)v34 )
          goto LABEL_875;
        v407 = (QuestAfterAction_o *)*v10;
        updated = System_Int32__Parse(*(System_String_o **)(v35 + 32), 0LL);
        if ( !v407 )
          goto LABEL_874;
        MapGameObject = (UnityEngine_Object_o *)QuestAfterAction__GetMapGameObject(v407, 0, updated, this, v408);
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
        if ( !byte_4A5629D )
        {
          sub_1B885B0(&TerminalSceneComponent_TypeInfo);
          byte_4A5629D = 1;
        }
        updated = (__int64)TerminalSceneComponent_TypeInfo;
        if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          updated = (__int64)TerminalSceneComponent_TypeInfo;
        }
        v413 = **(_QWORD **)(updated + 184);
        if ( !v413 )
          goto LABEL_874;
        updated = *(_QWORD *)(v413 + 264);
        if ( !updated )
          goto LABEL_874;
        v536.fields.x = x;
        v536.fields.y = y;
        v536.fields.z = z;
        v537 = ScrTerminalMap__ConvertLocalToScreenPosition((ScrTerminalMap_o *)updated, v536, 0LL);
        x = v537.fields.x;
        y = v537.fields.y;
        z = v537.fields.z;
LABEL_673:
        if ( !FSUtility_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
        updated = FSUtility__IsUnderVista(0LL);
        if ( (updated & 1) != 0 )
          goto LABEL_840;
        if ( !*(_DWORD *)(v35 + 24) )
          goto LABEL_875;
        v415 = *(System_String_o **)(v35 + 32);
        updated = System_String__op_Equality(v415, (System_String_o *)StringLiteral_1403/*"10703"*/, 0LL);
        if ( (updated & 1) != 0 )
        {
          y = y + -50.0;
        }
        else
        {
          updated = System_String__op_Equality(v415, (System_String_o *)StringLiteral_1478/*"30101"*/, 0LL);
          if ( (updated & 1) != 0 )
            y = y + -50.0;
        }
LABEL_840:
        if ( v15->fields.id != 305 || *(int *)(v35 + 24) < 4 )
        {
          if ( !*v10 )
            goto LABEL_874;
          v431 = *(MapCamera_o **)(*v10 + 144);
          v432 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
          v433 = &Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__10__;
          goto LABEL_844;
        }
        if ( !*v10 )
          goto LABEL_874;
        v501 = *(MapCamera_o **)(*v10 + 144);
        *(_QWORD *)&v529.fields.hasValue = &v516;
        v544.fields.x = x;
        v544.fields.y = y;
        *(_QWORD *)&v529.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
        v544.fields.z = z;
        v516 = (System_Nullable_Vector3__o)0LL;
        System_Nullable_Vector3____ctor(v529, v544, v414);
        if ( *(_DWORD *)(v35 + 24) <= 3u )
          goto LABEL_875;
        v506 = System_Single__Parse(*(System_String_o **)(v35 + 56), 0LL);
        v523 = (System_Nullable_float__o)&size;
        size = 0LL;
        System_Nullable_float____ctor(v523, v506, (const MethodInfo_361C4E4 *)Method_System_Nullable_float___ctor__);
        v503 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
        v504 = &Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__9__;
        break;
      case 301:
      case 306:
        updated = (__int64)v15->fields.param;
        if ( !updated )
          goto LABEL_874;
        updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
        if ( !updated )
          goto LABEL_874;
        v192 = *(_QWORD *)(updated + 24);
        v193 = updated;
        if ( (int)v192 <= 0 )
          goto LABEL_622;
        if ( (int)v192 > 2 )
        {
          v405 = System_Single__Parse(*(System_String_o **)(updated + 48), 0LL);
          v192 = *(_QWORD *)(v193 + 24);
          v194 = v405 * 0.001;
        }
        else
        {
          v194 = 0.5;
        }
        seca = v194;
        if ( (int)v192 >= 2 )
        {
          updated = System_Int32__Parse(*(System_String_o **)(v193 + 40), 0LL);
          v192 = *(_QWORD *)(v193 + 24);
        }
        else
        {
          updated = 15LL;
        }
        easeType = updated;
        if ( !(_DWORD)v192 )
          goto LABEL_875;
        v416 = (QuestAfterAction_o *)*v10;
        updated = System_Int32__Parse(*(System_String_o **)(v193 + 32), 0LL);
        if ( !v416 )
          goto LABEL_874;
        v418 = (UnityEngine_Object_o *)QuestAfterAction__GetMapGameObject(v416, 1, updated, this, v417);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        updated = UnityEngine_Object__op_Equality(v418, 0LL, 0LL);
        if ( (updated & 1) != 0 )
          return;
        if ( this->fields.IsMapModel )
        {
          if ( !v418 )
            goto LABEL_874;
          updated = (__int64)UnityEngine_GameObject__GetComponent_object_(
                               (UnityEngine_GameObject_o *)v418,
                               (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_ModelLineComponent___);
          if ( !updated )
            goto LABEL_874;
          Position = GameObjectExtensions__GetPosition((UnityEngine_GameObject_o *)*(_QWORD *)(updated + 32), 0LL);
          v419 = Position.fields.x;
          v420 = Position.fields.y;
          v421 = Position.fields.z;
          if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          if ( !byte_4A5629D )
          {
            sub_1B885B0(&TerminalSceneComponent_TypeInfo);
            byte_4A5629D = 1;
          }
          updated = (__int64)TerminalSceneComponent_TypeInfo;
          if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            updated = (__int64)TerminalSceneComponent_TypeInfo;
          }
          v422 = **(_QWORD **)(updated + 184);
          if ( !v422 )
            goto LABEL_874;
          updated = *(_QWORD *)(v422 + 264);
          if ( !updated )
            goto LABEL_874;
          v539.fields.x = v419;
          v539.fields.y = v420;
          v539.fields.z = v421;
          *(UnityEngine_Vector3_o *)&v423 = ScrTerminalMap__ConvertWorldToScreenPosition(
                                              (ScrTerminalMap_o *)updated,
                                              v539,
                                              0LL);
        }
        else
        {
          *(UnityEngine_Vector3_o *)&v423 = GameObjectExtensions__GetLocalPosition(
                                              (UnityEngine_GameObject_o *)v418,
                                              0LL);
        }
        v490 = v423;
        v491 = v424;
        v492 = v425;
        if ( !FSUtility_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
        updated = FSUtility__IsUnderVista(0LL);
        if ( (updated & 1) != 0 )
          goto LABEL_851;
        if ( !*(_DWORD *)(v193 + 24) )
          goto LABEL_875;
        v494 = *(System_String_o **)(v193 + 32);
        updated = System_String__op_Equality(v494, (System_String_o *)StringLiteral_1403/*"10703"*/, 0LL);
        if ( (updated & 1) != 0 )
        {
          v491 = v491 + -95.0;
        }
        else
        {
          updated = System_String__op_Equality(v494, (System_String_o *)StringLiteral_1479/*"30102"*/, 0LL);
          if ( (updated & 1) != 0 )
            v491 = v491 + 45.0;
        }
LABEL_851:
        if ( v15->fields.id != 306 || *(int *)(v193 + 24) < 4 )
        {
          if ( !*v10 )
            goto LABEL_874;
          v505 = *(MapCamera_o **)(*v10 + 144);
          v500 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
          System_Action___ctor(
            v500,
            (Il2CppObject *)v5,
            Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__12__,
            0LL);
          if ( !v505 )
            goto LABEL_874;
          v88 = seca;
          v89 = easeType;
          v84 = v505;
          v85 = v490;
          v86 = v491;
          v87 = v492;
          goto LABEL_856;
        }
        if ( !*v10 )
          goto LABEL_874;
        v508 = *(MapCamera_o **)(*v10 + 144);
        *(_QWORD *)&v530.fields.hasValue = &v516;
        v545.fields.x = v490;
        v545.fields.y = v491;
        *(_QWORD *)&v530.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
        v545.fields.z = v492;
        v516 = (System_Nullable_Vector3__o)0LL;
        System_Nullable_Vector3____ctor(v530, v545, v493);
        if ( *(_DWORD *)(v193 + 24) <= 3u )
          goto LABEL_875;
        v509 = System_Single__Parse(*(System_String_o **)(v193 + 56), 0LL);
        v524 = (System_Nullable_float__o)&size;
        size = 0LL;
        System_Nullable_float____ctor(v524, v509, (const MethodInfo_361C4E4 *)Method_System_Nullable_float___ctor__);
        v507 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
        System_Action___ctor(
          v507,
          (Il2CppObject *)v5,
          Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__11__,
          0LL);
        if ( !v508 )
          goto LABEL_874;
        v532 = v516;
        v526 = size;
        v268 = seca;
        v269 = easeType;
        v267 = v508;
        goto LABEL_867;
      case 302:
      case 307:
        updated = (__int64)v15->fields.param;
        if ( !updated )
          goto LABEL_874;
        updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
        if ( !updated )
          goto LABEL_874;
        v195 = *(_QWORD *)(updated + 24);
        v196 = updated;
        if ( (int)v195 <= 0 )
          goto LABEL_622;
        if ( (int)v195 > 2 )
        {
          v406 = System_Single__Parse(*(System_String_o **)(updated + 48), 0LL);
          v195 = *(_QWORD *)(v196 + 24);
          v197 = v406 * 0.001;
        }
        else
        {
          v197 = 0.5;
        }
        sec = v197;
        if ( (int)v195 >= 2 )
        {
          updated = System_Int32__Parse(*(System_String_o **)(v196 + 40), 0LL);
          v195 = *(_QWORD *)(v196 + 24);
          v404 = updated;
        }
        else
        {
          v404 = 15;
        }
        if ( !(_DWORD)v195 )
          goto LABEL_875;
        v426 = (QuestAfterAction_o *)*v10;
        updated = System_Int32__Parse(*(System_String_o **)(v196 + 32), 0LL);
        if ( !v426 )
          goto LABEL_874;
        v428 = (UnityEngine_Object_o *)QuestAfterAction__GetMapGameObject(v426, 2, updated, this, v427);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Equality(v428, 0LL, 0LL) )
          return;
        v540 = GameObjectExtensions__GetLocalPosition((UnityEngine_GameObject_o *)v428, 0LL);
        x = v540.fields.x;
        y = v540.fields.y;
        z = v540.fields.z;
        if ( !this->fields.IsMapModel )
          goto LABEL_713;
        if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        if ( !byte_4A5629D )
        {
          sub_1B885B0(&TerminalSceneComponent_TypeInfo);
          byte_4A5629D = 1;
        }
        updated = (__int64)TerminalSceneComponent_TypeInfo;
        if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          updated = (__int64)TerminalSceneComponent_TypeInfo;
        }
        v430 = **(_QWORD **)(updated + 184);
        if ( !v430 )
          goto LABEL_874;
        updated = *(_QWORD *)(v430 + 264);
        if ( !updated )
          goto LABEL_874;
        v541.fields.x = x;
        v541.fields.y = y;
        v541.fields.z = z;
        v542 = ScrTerminalMap__ConvertLocalToScreenPosition((ScrTerminalMap_o *)updated, v541, 0LL);
        x = v542.fields.x;
        y = v542.fields.y;
        z = v542.fields.z;
LABEL_713:
        if ( v15->fields.id != 307 || *(int *)(v196 + 24) < 4 )
        {
          if ( !*v10 )
            goto LABEL_874;
          v431 = *(MapCamera_o **)(*v10 + 144);
          v432 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
          v433 = &Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__14__;
LABEL_844:
          v500 = v432;
          System_Action___ctor(v432, (Il2CppObject *)v5, *v433, 0LL);
          if ( !v431 )
            goto LABEL_874;
          v88 = sec;
          v84 = v431;
          v85 = x;
          v86 = y;
          v87 = z;
          v89 = v404;
LABEL_856:
          v90 = v500;
LABEL_857:
          MapCamera__StartAutoMove(v84, *(UnityEngine_Vector3_o *)&v85, v88, v89, v90, 0LL);
          return;
        }
        if ( !*v10 )
          goto LABEL_874;
        v501 = *(MapCamera_o **)(*v10 + 144);
        *(_QWORD *)&v528.fields.hasValue = &v516;
        v543.fields.x = x;
        v543.fields.y = y;
        *(_QWORD *)&v528.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
        v543.fields.z = z;
        v516 = (System_Nullable_Vector3__o)0LL;
        System_Nullable_Vector3____ctor(v528, v543, v429);
        if ( *(_DWORD *)(v196 + 24) <= 3u )
          goto LABEL_875;
        v502 = System_Single__Parse(*(System_String_o **)(v196 + 56), 0LL);
        v522 = (System_Nullable_float__o)&size;
        size = 0LL;
        System_Nullable_float____ctor(v522, v502, (const MethodInfo_361C4E4 *)Method_System_Nullable_float___ctor__);
        v503 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
        v504 = &Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__13__;
        break;
      case 303:
      case 308:
        updated = (__int64)v15->fields.param;
        if ( !updated )
          goto LABEL_874;
        updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
        if ( !updated )
          goto LABEL_874;
        v198 = updated;
        if ( *(int *)(updated + 24) < 4 )
          goto LABEL_622;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_4A58085 )
        {
          sub_1B885B0(&TerminalPramsManager_TypeInfo);
          byte_4A58085 = 1;
        }
        updated = (__int64)TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          updated = (__int64)TerminalPramsManager_TypeInfo;
        }
        if ( *(_BYTE *)(*(_QWORD *)(updated + 184) + 105LL) )
          goto LABEL_622;
        if ( *(_DWORD *)(v198 + 24) <= 2u )
          goto LABEL_875;
        v199 = System_Single__Parse(*(System_String_o **)(v198 + 48), 0LL) * 0.001;
        v72 = v199 >= 0.0 ? v199 : 0.5;
        if ( *(_DWORD *)(v198 + 24) <= 3u )
          goto LABEL_875;
        v70 = System_Int32__Parse(*(System_String_o **)(v198 + 56), 0LL);
        if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        if ( !byte_4A5629D )
        {
          sub_1B885B0(&TerminalSceneComponent_TypeInfo);
          byte_4A5629D = 1;
        }
        updated = (__int64)TerminalSceneComponent_TypeInfo;
        if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          updated = (__int64)TerminalSceneComponent_TypeInfo;
        }
        v200 = **(_QWORD **)(updated + 184);
        if ( !v200 )
          goto LABEL_874;
        if ( !*(_DWORD *)(v198 + 24) )
          goto LABEL_875;
        v201 = *(ScrTerminalMap_o **)(v200 + 264);
        v202 = System_Single__Parse(*(System_String_o **)(v198 + 32), 0LL);
        if ( *(_DWORD *)(v198 + 24) <= 1u )
          goto LABEL_875;
        v203 = v202;
        v204 = System_Single__Parse(*(System_String_o **)(v198 + 40), 0LL);
        if ( !v201 )
          goto LABEL_874;
        *(UnityEngine_Vector3_o *)&v206 = ScrTerminalMap__LocalPosFromCoord(v201, v203, v204, 0.0, 0.0, 0LL);
        v77 = v206;
        v78 = v207;
        v79 = v208;
        if ( v15->fields.id != 308 || *(int *)(v198 + 24) < 5 )
        {
          if ( !*v10 )
            goto LABEL_874;
          v80 = *(MapCamera_o **)(*v10 + 144);
          v81 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
          v82 = &Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__16__;
          goto LABEL_108;
        }
        if ( !*v10 )
          goto LABEL_874;
        v262 = *(MapCamera_o **)(*v10 + 144);
        *(_QWORD *)&v531.fields.hasValue = &v516;
        *(_QWORD *)&v531.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
        v516 = (System_Nullable_Vector3__o)0LL;
        System_Nullable_Vector3____ctor(v531, *(UnityEngine_Vector3_o *)&v206, v205);
        if ( *(_DWORD *)(v198 + 24) <= 4u )
          goto LABEL_875;
        v510 = System_Single__Parse(*(System_String_o **)(v198 + 64), 0LL);
        v525 = (System_Nullable_float__o)&size;
        size = 0LL;
        System_Nullable_float____ctor(v525, v510, (const MethodInfo_361C4E4 *)Method_System_Nullable_float___ctor__);
        v264 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
        v265 = &Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__15__;
        goto LABEL_478;
      case 304:
        updated = (__int64)v15->fields.param;
        if ( !updated )
          goto LABEL_874;
        updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
        if ( !updated )
          goto LABEL_874;
        v271 = *(_DWORD *)(updated + 24);
        v272 = updated;
        if ( v271 <= 1 )
          goto LABEL_622;
        v273 = System_Single__Parse(*(System_String_o **)(updated + 32), 0LL);
        if ( *(_DWORD *)(v272 + 24) <= 1u )
          goto LABEL_875;
        v274 = v273;
        v275 = System_Single__Parse(*(System_String_o **)(v272 + 40), 0LL);
        if ( !*v10 )
          goto LABEL_874;
        v276 = *(MapCamera_o **)(*v10 + 144);
        v277 = v275 * 0.001;
        if ( v277 >= 0.0 )
          v278 = v277;
        else
          v278 = 0.5;
        if ( v271 < 3 )
        {
          v279 = 5;
        }
        else
        {
          if ( *(_DWORD *)(v272 + 24) <= 2u )
            goto LABEL_875;
          v279 = System_Int32__Parse(*(System_String_o **)(v272 + 48), 0LL);
        }
        v489 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
        System_Action___ctor(
          v489,
          (Il2CppObject *)v5,
          Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__17__,
          0LL);
        if ( !v276 )
          goto LABEL_874;
        MapCamera__StartAutoZoom(v276, v274, v278, v279, v489, 0LL);
        return;
      default:
        switch ( id )
        {
          case 200:
            if ( this->fields.IsMapModel )
            {
              v91 = sub_1B887FC(QuestAfterAction_StateMain___c__DisplayClass16_4_TypeInfo);
              System_Object___ctor((Il2CppObject *)v91, 0LL);
              if ( !v91 )
                goto LABEL_874;
              *(_QWORD *)(v91 + 24) = v5;
              sub_1B88554((ServantStatusBattleListViewItem_o *)(v91 + 24), v5, v92, v93);
              v94 = *(_QWORD *)(v91 + 24);
              if ( !v94 )
                goto LABEL_874;
              v95 = *(QuestAfterAction_o **)(v94 + 24);
              updated = System_Int32__Parse(v15->fields.param, 0LL);
              if ( !v95 )
                goto LABEL_874;
              v96 = QuestAfterAction__GetMapComponent_object_(
                      v95,
                      1,
                      updated,
                      this,
                      (const MethodInfo_2F0FD28 *)Method_QuestAfterAction_GetMapComponent_ModelLineComponent___);
              *(_QWORD *)(v91 + 16) = v96;
              sub_1B88554((ServantStatusBattleListViewItem_o *)(v91 + 16), (int32_t)v96, v97, v98);
              v99 = *(UnityEngine_Object_o **)(v91 + 16);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              if ( !UnityEngine_Object__op_Equality(v99, 0LL, 0LL) )
              {
                v100 = *(ModelLineComponent_o **)(v91 + 16);
                v101 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
                System_Action___ctor(
                  v101,
                  (Il2CppObject *)v91,
                  Method_QuestAfterAction_StateMain___c__DisplayClass16_4__UpdateAnim_b__3__,
                  0LL);
                if ( !v100 )
                  goto LABEL_874;
                v103 = 2;
                goto LABEL_509;
              }
            }
            else
            {
              v434 = sub_1B887FC(QuestAfterAction_StateMain___c__DisplayClass16_5_TypeInfo);
              System_Object___ctor((Il2CppObject *)v434, 0LL);
              if ( !v434 )
                goto LABEL_874;
              *(_QWORD *)(v434 + 24) = v5;
              sub_1B88554((ServantStatusBattleListViewItem_o *)(v434 + 24), v5, v435, v436);
              v437 = *(_QWORD *)(v434 + 24);
              if ( !v437 )
                goto LABEL_874;
              v438 = *(QuestAfterAction_o **)(v437 + 24);
              updated = System_Int32__Parse(v15->fields.param, 0LL);
              if ( !v438 )
                goto LABEL_874;
              v439 = QuestAfterAction__GetMapComponent_object_(
                       v438,
                       1,
                       updated,
                       this,
                       (const MethodInfo_2F0FD28 *)Method_QuestAfterAction_GetMapComponent_srcLineSprite___);
              *(_QWORD *)(v434 + 16) = v439;
              sub_1B88554((ServantStatusBattleListViewItem_o *)(v434 + 16), (int32_t)v439, v440, v441);
              v442 = *(UnityEngine_Object_o **)(v434 + 16);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              if ( !UnityEngine_Object__op_Equality(v442, 0LL, 0LL) )
              {
                v443 = *(srcLineSprite_o **)(v434 + 16);
                v444 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
                System_Action___ctor(
                  v444,
                  (Il2CppObject *)v434,
                  Method_QuestAfterAction_StateMain___c__DisplayClass16_5__UpdateAnim_b__4__,
                  0LL);
                if ( !v443 )
                  goto LABEL_874;
                v445 = 2;
                goto LABEL_741;
              }
            }
            return;
          case 201:
            if ( this->fields.IsMapModel )
            {
              v280 = sub_1B887FC(QuestAfterAction_StateMain___c__DisplayClass16_6_TypeInfo);
              System_Object___ctor((Il2CppObject *)v280, 0LL);
              if ( !v280 )
                goto LABEL_874;
              *(_QWORD *)(v280 + 24) = v5;
              sub_1B88554((ServantStatusBattleListViewItem_o *)(v280 + 24), v5, v281, v282);
              v283 = *(_QWORD *)(v280 + 24);
              if ( !v283 )
                goto LABEL_874;
              v284 = *(QuestAfterAction_o **)(v283 + 24);
              updated = System_Int32__Parse(v15->fields.param, 0LL);
              if ( !v284 )
                goto LABEL_874;
              v285 = QuestAfterAction__GetMapComponent_object_(
                       v284,
                       1,
                       updated,
                       this,
                       (const MethodInfo_2F0FD28 *)Method_QuestAfterAction_GetMapComponent_ModelLineComponent___);
              *(_QWORD *)(v280 + 16) = v285;
              sub_1B88554((ServantStatusBattleListViewItem_o *)(v280 + 16), (int32_t)v285, v286, v287);
              v288 = *(UnityEngine_Object_o **)(v280 + 16);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              if ( !UnityEngine_Object__op_Equality(v288, 0LL, 0LL) )
              {
                v100 = *(ModelLineComponent_o **)(v280 + 16);
                v101 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
                System_Action___ctor(
                  v101,
                  (Il2CppObject *)v280,
                  Method_QuestAfterAction_StateMain___c__DisplayClass16_6__UpdateAnim_b__5__,
                  0LL);
                if ( !v100 )
                  goto LABEL_874;
                v103 = 3;
                goto LABEL_509;
              }
            }
            else
            {
              v446 = sub_1B887FC(QuestAfterAction_StateMain___c__DisplayClass16_7_TypeInfo);
              System_Object___ctor((Il2CppObject *)v446, 0LL);
              if ( !v446 )
                goto LABEL_874;
              *(_QWORD *)(v446 + 24) = v5;
              sub_1B88554((ServantStatusBattleListViewItem_o *)(v446 + 24), v5, v447, v448);
              v449 = *(_QWORD *)(v446 + 24);
              if ( !v449 )
                goto LABEL_874;
              v450 = *(QuestAfterAction_o **)(v449 + 24);
              updated = System_Int32__Parse(v15->fields.param, 0LL);
              if ( !v450 )
                goto LABEL_874;
              v451 = QuestAfterAction__GetMapComponent_object_(
                       v450,
                       1,
                       updated,
                       this,
                       (const MethodInfo_2F0FD28 *)Method_QuestAfterAction_GetMapComponent_srcLineSprite___);
              *(_QWORD *)(v446 + 16) = v451;
              sub_1B88554((ServantStatusBattleListViewItem_o *)(v446 + 16), (int32_t)v451, v452, v453);
              v454 = *(UnityEngine_Object_o **)(v446 + 16);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              if ( !UnityEngine_Object__op_Equality(v454, 0LL, 0LL) )
              {
                v443 = *(srcLineSprite_o **)(v446 + 16);
                v444 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
                System_Action___ctor(
                  v444,
                  (Il2CppObject *)v446,
                  Method_QuestAfterAction_StateMain___c__DisplayClass16_7__UpdateAnim_b__6__,
                  0LL);
                if ( !v443 )
                  goto LABEL_874;
                v445 = 3;
                goto LABEL_741;
              }
            }
            return;
          case 202:
            if ( this->fields.IsMapModel )
            {
              v289 = sub_1B887FC(QuestAfterAction_StateMain___c__DisplayClass16_8_TypeInfo);
              System_Object___ctor((Il2CppObject *)v289, 0LL);
              if ( !v289 )
                goto LABEL_874;
              *(_QWORD *)(v289 + 24) = v5;
              sub_1B88554((ServantStatusBattleListViewItem_o *)(v289 + 24), v5, v290, v291);
              v292 = *(_QWORD *)(v289 + 24);
              if ( !v292 )
                goto LABEL_874;
              v293 = *(QuestAfterAction_o **)(v292 + 24);
              updated = System_Int32__Parse(v15->fields.param, 0LL);
              if ( !v293 )
                goto LABEL_874;
              v294 = QuestAfterAction__GetMapComponent_object_(
                       v293,
                       1,
                       updated,
                       this,
                       (const MethodInfo_2F0FD28 *)Method_QuestAfterAction_GetMapComponent_ModelLineComponent___);
              *(_QWORD *)(v289 + 16) = v294;
              sub_1B88554((ServantStatusBattleListViewItem_o *)(v289 + 16), (int32_t)v294, v295, v296);
              v297 = *(UnityEngine_Object_o **)(v289 + 16);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              if ( !UnityEngine_Object__op_Equality(v297, 0LL, 0LL) )
              {
                v100 = *(ModelLineComponent_o **)(v289 + 16);
                v101 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
                System_Action___ctor(
                  v101,
                  (Il2CppObject *)v289,
                  Method_QuestAfterAction_StateMain___c__DisplayClass16_8__UpdateAnim_b__7__,
                  0LL);
                if ( !v100 )
                  goto LABEL_874;
                v103 = 4;
LABEL_509:
                ModelLineComponent__SetState(v100, v103, v101, v102);
              }
            }
            else
            {
              v455 = sub_1B887FC(QuestAfterAction_StateMain___c__DisplayClass16_9_TypeInfo);
              System_Object___ctor((Il2CppObject *)v455, 0LL);
              if ( !v455 )
                goto LABEL_874;
              *(_QWORD *)(v455 + 24) = v5;
              sub_1B88554((ServantStatusBattleListViewItem_o *)(v455 + 24), v5, v456, v457);
              v458 = *(_QWORD *)(v455 + 24);
              if ( !v458 )
                goto LABEL_874;
              v459 = *(QuestAfterAction_o **)(v458 + 24);
              updated = System_Int32__Parse(v15->fields.param, 0LL);
              if ( !v459 )
                goto LABEL_874;
              v460 = QuestAfterAction__GetMapComponent_object_(
                       v459,
                       1,
                       updated,
                       this,
                       (const MethodInfo_2F0FD28 *)Method_QuestAfterAction_GetMapComponent_srcLineSprite___);
              *(_QWORD *)(v455 + 16) = v460;
              sub_1B88554((ServantStatusBattleListViewItem_o *)(v455 + 16), (int32_t)v460, v461, v462);
              v463 = *(UnityEngine_Object_o **)(v455 + 16);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              if ( !UnityEngine_Object__op_Equality(v463, 0LL, 0LL) )
              {
                v443 = *(srcLineSprite_o **)(v455 + 16);
                v444 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
                System_Action___ctor(
                  v444,
                  (Il2CppObject *)v455,
                  Method_QuestAfterAction_StateMain___c__DisplayClass16_9__UpdateAnim_b__8__,
                  0LL);
                if ( !v443 )
                  goto LABEL_874;
                v445 = 4;
LABEL_741:
                srcLineSprite__SetState(v443, v445, v444, 0LL);
              }
            }
            return;
          case 203:
            IsMapModel = this->fields.IsMapModel;
            v299 = (QuestAfterAction_o *)*v10;
            updated = System_Int32__Parse(v15->fields.param, 0LL);
            if ( !v299 )
              goto LABEL_874;
            if ( IsMapModel )
            {
              v300 = (UnityEngine_Object_o *)QuestAfterAction__GetMapComponent_object_(
                                               v299,
                                               1,
                                               updated,
                                               this,
                                               (const MethodInfo_2F0FD28 *)Method_QuestAfterAction_GetMapComponent_ModelLineComponent___);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              updated = UnityEngine_Object__op_Equality(v300, 0LL, 0LL);
              if ( (updated & 1) != 0 )
                return;
              if ( !v300 )
                goto LABEL_874;
              ModelLineComponent__SetQuestAfterActionScaleAnim_33814316((ModelLineComponent_o *)v300, 0, 0.0, v301);
              v302 = v300[3].klass;
              if ( !v302 )
                goto LABEL_874;
            }
            else
            {
              v464 = (UnityEngine_Object_o *)QuestAfterAction__GetMapComponent_object_(
                                               v299,
                                               1,
                                               updated,
                                               this,
                                               (const MethodInfo_2F0FD28 *)Method_QuestAfterAction_GetMapComponent_srcLineSprite___);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              updated = UnityEngine_Object__op_Equality(v464, 0LL, 0LL);
              if ( (updated & 1) != 0 )
                return;
              if ( !v464 )
                goto LABEL_874;
              srcLineSprite__SetQaaScaleAnimQuick((srcLineSprite_o *)v464, 0, 0LL);
              v302 = v464[5].monitor;
              if ( !v302 )
                goto LABEL_874;
            }
            goto LABEL_790;
          case 204:
            v303 = this->fields.IsMapModel;
            v304 = (QuestAfterAction_o *)*v10;
            updated = System_Int32__Parse(v15->fields.param, 0LL);
            if ( !v304 )
              goto LABEL_874;
            if ( v303 )
            {
              v305 = (UnityEngine_Object_o *)QuestAfterAction__GetMapComponent_object_(
                                               v304,
                                               1,
                                               updated,
                                               this,
                                               (const MethodInfo_2F0FD28 *)Method_QuestAfterAction_GetMapComponent_ModelLineComponent___);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              updated = UnityEngine_Object__op_Equality(v305, 0LL, 0LL);
              if ( (updated & 1) != 0 )
                return;
              if ( !v305 )
                goto LABEL_874;
              ModelLineComponent__SetQuestAfterActionScaleAnim_33814316((ModelLineComponent_o *)v305, 1, 0.0, v306);
              ModelLineComponent__SetQuestAfterActionColorAnim_33814792((ModelLineComponent_o *)v305, 0, 0.0, v307);
              v308 = v305[3].klass;
              if ( !v308 )
                goto LABEL_874;
            }
            else
            {
              v465 = (UnityEngine_Object_o *)QuestAfterAction__GetMapComponent_object_(
                                               v304,
                                               1,
                                               updated,
                                               this,
                                               (const MethodInfo_2F0FD28 *)Method_QuestAfterAction_GetMapComponent_srcLineSprite___);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              updated = UnityEngine_Object__op_Equality(v465, 0LL, 0LL);
              if ( (updated & 1) != 0 )
                return;
              if ( !v465 )
                goto LABEL_874;
              srcLineSprite__SetQaaScaleAnimQuick((srcLineSprite_o *)v465, 1, 0LL);
              srcLineSprite__SetQaaColorAnimQuick((srcLineSprite_o *)v465, 0, 0LL);
              v308 = v465[5].monitor;
              if ( !v308 )
                goto LABEL_874;
            }
            v466 = 2;
            goto LABEL_760;
          case 205:
            v309 = this->fields.IsMapModel;
            v310 = (QuestAfterAction_o *)*v10;
            updated = System_Int32__Parse(v15->fields.param, 0LL);
            if ( !v310 )
              goto LABEL_874;
            if ( v309 )
            {
              v311 = (UnityEngine_Object_o *)QuestAfterAction__GetMapComponent_object_(
                                               v310,
                                               1,
                                               updated,
                                               this,
                                               (const MethodInfo_2F0FD28 *)Method_QuestAfterAction_GetMapComponent_ModelLineComponent___);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              updated = UnityEngine_Object__op_Equality(v311, 0LL, 0LL);
              if ( (updated & 1) != 0 )
                return;
              if ( !v311 )
                goto LABEL_874;
              ModelLineComponent__SetQuestAfterActionScaleAnim_33814316((ModelLineComponent_o *)v311, 1, 0.0, v312);
              ModelLineComponent__SetQuestAfterActionColorAnim_33814792((ModelLineComponent_o *)v311, 1, 0.0, v313);
              v308 = v311[3].klass;
              if ( !v308 )
                goto LABEL_874;
            }
            else
            {
              v467 = (UnityEngine_Object_o *)QuestAfterAction__GetMapComponent_object_(
                                               v310,
                                               1,
                                               updated,
                                               this,
                                               (const MethodInfo_2F0FD28 *)Method_QuestAfterAction_GetMapComponent_srcLineSprite___);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              updated = UnityEngine_Object__op_Equality(v467, 0LL, 0LL);
              if ( (updated & 1) != 0 )
                return;
              if ( !v467 )
                goto LABEL_874;
              srcLineSprite__SetQaaScaleAnimQuick((srcLineSprite_o *)v467, 1, 0LL);
              srcLineSprite__SetQaaColorAnimQuick((srcLineSprite_o *)v467, 1, 0LL);
              v308 = v467[5].monitor;
              if ( !v308 )
                goto LABEL_874;
            }
            v466 = 1;
LABEL_760:
            v308[4] = v466;
            goto LABEL_18;
          default:
            if ( id != 350 )
              return;
            updated = (__int64)v15->fields.param;
            if ( !updated )
              goto LABEL_874;
            updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
            if ( !updated )
              goto LABEL_874;
            v209 = updated;
            if ( *(int *)(updated + 24) <= 0 )
              goto LABEL_622;
            v210 = System_Int32__Parse(*(System_String_o **)(updated + 32), 0LL);
            if ( v210 < 1 )
              goto LABEL_622;
            v211 = v210;
            v212 = 0.5;
            if ( *(int *)(v209 + 24) > 1 )
            {
              v213 = System_Int32__Parse(*(System_String_o **)(v209 + 40), 0LL);
              if ( *(int *)(v209 + 24) >= 3 )
                v212 = System_Single__Parse(*(System_String_o **)(v209 + 48), 0LL) * 0.001;
            }
            else
            {
              v213 = 15;
            }
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            if ( !byte_4A5629D )
            {
              sub_1B885B0(&TerminalSceneComponent_TypeInfo);
              byte_4A5629D = 1;
            }
            updated = (__int64)TerminalSceneComponent_TypeInfo;
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
              updated = (__int64)TerminalSceneComponent_TypeInfo;
            }
            v495 = **(_QWORD **)(updated + 184);
            if ( !v495 )
              goto LABEL_874;
            v496 = *(ScrTerminalMap_o **)(v495 + 264);
            v497 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
            System_Action___ctor(
              v497,
              (Il2CppObject *)v5,
              Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__18__,
              0LL);
            if ( !v496 )
              goto LABEL_874;
            ScrTerminalMap__RequestMapMove_34491016(v496, v211, v212, v213, v497, 0LL);
            return;
        }
    }
    v507 = v503;
    System_Action___ctor(v503, (Il2CppObject *)v5, *v504, 0LL);
    if ( !v501 )
      goto LABEL_874;
    v532 = v516;
    v526 = size;
    v268 = sec;
    v267 = v501;
    v269 = v404;
LABEL_867:
    v270 = v507;
    goto LABEL_868;
  }
  if ( id <= 700 )
  {
    if ( id > 550 )
    {
      switch ( id )
      {
        case 600:
          v29 = (System_String_o *)StringLiteral_1/*""*/;
          v30 = System_String__Concat_61707032((System_String_o *)StringLiteral_10823/*"QUEST_AFTER_ACTION_MESSAGE_"*/, v15->fields.param, 0LL);
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v31 = LocalizationManager__Get(v30, 0LL);
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v33 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
          System_Action___ctor(
            v33,
            (Il2CppObject *)v5,
            Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__36__,
            0LL);
          if ( !Instance )
            goto LABEL_874;
          CommonUI__OpenNotificationDialog(
            (CommonUI_o *)Instance,
            v29,
            v31,
            v33,
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
          v151 = (System_String_o *)StringLiteral_1/*""*/;
          updated = sub_1B88658(string___TypeInfo, 1LL);
          if ( !updated )
            goto LABEL_874;
          v154 = (System_String_array *)updated;
          if ( !*(_DWORD *)(updated + 24) )
            break;
          v155 = StringLiteral_89/*"\r\n"*/;
          *(_QWORD *)(updated + 32) = StringLiteral_89/*"\r\n"*/;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(updated + 32), v155, v152, v153);
          updated = (__int64)v15->fields.param;
          if ( !updated )
            goto LABEL_874;
          updated = (__int64)System_String__Split_61733264((System_String_o *)updated, v154, 0, 0LL);
          if ( !updated )
            goto LABEL_874;
          v156 = *(_DWORD *)(updated + 24);
          if ( v156 <= 0 )
            goto LABEL_622;
          v157 = *(System_String_o **)(updated + 32);
          if ( v156 == 1 )
          {
            v158 = *(System_String_o **)(updated + 32);
            v157 = v151;
          }
          else
          {
            v158 = *(System_String_o **)(updated + 40);
          }
          v401 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v402 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
          System_Action___ctor(
            v402,
            (Il2CppObject *)v5,
            Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__37__,
            0LL);
          if ( !v401 )
            goto LABEL_874;
          CommonUI__OpenNotificationDialog(
            (CommonUI_o *)v401,
            v157,
            v158,
            v402,
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
          v159 = (System_String_o *)StringLiteral_1/*""*/;
          v160 = System_String__Concat_61707032((System_String_o *)StringLiteral_10823/*"QUEST_AFTER_ACTION_MESSAGE_"*/, v15->fields.param, 0LL);
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v161 = LocalizationManager__Get(v160, 0LL);
          v162 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v163 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
          System_Action___ctor(
            v163,
            (Il2CppObject *)v5,
            Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__38__,
            0LL);
          if ( !v162 )
            goto LABEL_874;
          v164 = "UnityEngine.Yoga.Native::YGNodeLayoutGetMargin(System.IntPtr,UnityEngine.Yoga.YogaEdge)" + 12;
          onClickOkSeKind = 0;
          goto LABEL_647;
        case 603:
          v165 = (System_String_o *)StringLiteral_1/*""*/;
          updated = sub_1B88658(string___TypeInfo, 1LL);
          if ( !updated )
            goto LABEL_874;
          v168 = (System_String_array *)updated;
          if ( !*(_DWORD *)(updated + 24) )
            break;
          v169 = StringLiteral_89/*"\r\n"*/;
          *(_QWORD *)(updated + 32) = StringLiteral_89/*"\r\n"*/;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(updated + 32), v169, v166, v167);
          updated = (__int64)v15->fields.param;
          if ( !updated )
            goto LABEL_874;
          updated = (__int64)System_String__Split_61733264((System_String_o *)updated, v168, 0, 0LL);
          if ( !updated )
            goto LABEL_874;
          v170 = *(_DWORD *)(updated + 24);
          if ( v170 <= 0 )
            goto LABEL_622;
          v159 = *(System_String_o **)(updated + 32);
          if ( v170 == 1 )
          {
            v161 = *(System_String_o **)(updated + 32);
            v159 = v165;
          }
          else
          {
            v161 = *(System_String_o **)(updated + 40);
          }
          v162 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v163 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
          System_Action___ctor(
            v163,
            (Il2CppObject *)v5,
            Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__39__,
            0LL);
          if ( !v162 )
            goto LABEL_874;
          v164 = "Yoga.Native::YGNodeLayoutGetMargin(System.IntPtr,UnityEngine.Yoga.YogaEdge)";
          onClickOkSeKind = 1;
LABEL_647:
          CommonUI__OpenNotificationDialog_30495196(
            (CommonUI_o *)v162,
            v159,
            v161,
            v163,
            40.0,
            *((float *)v164 + 746),
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
          v171 = (System_String_o *)StringLiteral_1/*""*/;
          v172 = System_String__Concat_61707032((System_String_o *)StringLiteral_10823/*"QUEST_AFTER_ACTION_MESSAGE_"*/, v15->fields.param, 0LL);
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v173 = LocalizationManager__Get(v172, 0LL);
          v174 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v175 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
          System_Action___ctor(
            v175,
            (Il2CppObject *)v5,
            Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__40__,
            0LL);
          if ( !v174 )
            goto LABEL_874;
          CommonUI__OpenNotificationDialog_30495196(
            (CommonUI_o *)v174,
            v171,
            v173,
            v175,
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
            updated = (__int64)v15->fields.param;
            if ( !updated )
              goto LABEL_874;
            updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
            if ( !updated )
              goto LABEL_874;
            v176 = *(_QWORD *)(updated + 24);
            if ( v176 )
            {
              if ( !(_DWORD)v176 )
                break;
              updated = System_Int32__Parse(*(System_String_o **)(updated + 32), 0LL);
              v178 = *v10;
              if ( !*v10 )
                goto LABEL_874;
              v179 = *(QuestAfterAction_TitleInfoControlCallback_o **)(v178 + 40);
              if ( (int)updated >= 1 )
              {
                if ( !v179 )
                  goto LABEL_874;
                QuestAfterAction_TitleInfoControlCallback__Start(
                  *(QuestAfterAction_TitleInfoControlCallback_o **)(v178 + 40),
                  0LL,
                  v177);
                goto LABEL_18;
              }
            }
            else
            {
              if ( !*v10 )
                goto LABEL_874;
              v179 = *(QuestAfterAction_TitleInfoControlCallback_o **)(*v10 + 40);
            }
            v314 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
            System_Action___ctor(v314, (Il2CppObject *)this, (intptr_t)this->klass->vtable._15_onEnd.methodPtr, 0LL);
            if ( !v179 )
              goto LABEL_874;
            QuestAfterAction_TitleInfoControlCallback__Start(v179, v314, v315);
            return;
          }
          if ( id != 700 )
            return;
          updated = (__int64)v15->fields.param;
          if ( !updated )
            goto LABEL_874;
          updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
          if ( !updated )
            goto LABEL_874;
          v104 = updated;
          if ( *(_DWORD *)(updated + 24) )
          {
            v105 = System_Int32__Parse(*(System_String_o **)(updated + 32), 0LL);
            if ( *(int *)(v104 + 24) >= 2 )
              v106 = System_Int32__Parse(*(System_String_o **)(v104 + 40), 0LL) + 1;
            else
              v106 = 0;
            v261 = (SceneJumpInfo_o *)sub_1B887FC(SceneJumpInfo_TypeInfo);
            SceneJumpInfo___ctor_38664492(v261, (System_String_o *)StringLiteral_1/*""*/, v105, v106, 0LL);
            updated = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
            if ( !updated )
              goto LABEL_874;
            AvalonSceneManager__transitionScene((AvalonSceneManager_o *)updated, 72, 1, (Il2CppObject *)v261, 0LL);
            goto LABEL_622;
          }
          break;
      }
LABEL_875:
      sub_1B88814(updated, v7);
    }
    if ( id == 530 )
    {
      v134 = System_Int32__Parse(v15->fields.param, 0LL);
      updated = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !updated )
        goto LABEL_874;
      updated = (__int64)DataManager__GetMasterData_object_(
                           (DataManager_o *)updated,
                           (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_QuestMaster___);
      if ( !updated )
        goto LABEL_874;
      v135 = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)updated,
               v134,
               (const MethodInfo_311D934 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
      updated = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_QuestTree__get_Instance__);
      if ( !updated )
        goto LABEL_874;
      updated = (__int64)QuestTree__GetQuestInfo((QuestTree_o *)updated, v134, 0LL);
      if ( !updated )
        goto LABEL_874;
      v137 = updated;
      if ( *(_DWORD *)(updated + 32) == 1 )
      {
        if ( !v135 )
          goto LABEL_874;
        if ( QuestEntity__HasFlag((QuestEntity_o *)v135, 2LL, 0LL) )
        {
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          if ( !byte_4A57DC4 )
          {
            sub_1B885B0(&TerminalPramsManager_TypeInfo);
            byte_4A57DC4 = 1;
          }
          v138 = TerminalPramsManager_TypeInfo;
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            v138 = TerminalPramsManager_TypeInfo;
          }
          v138->static_fields->_QuestId_k__BackingField = v134;
          v139 = *(_DWORD *)(v137 + 44);
          if ( !byte_4A57DC8 )
          {
            sub_1B885B0(&TerminalPramsManager_TypeInfo);
            v138 = TerminalPramsManager_TypeInfo;
            byte_4A57DC8 = 1;
          }
          if ( !v138->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v138);
            v138 = TerminalPramsManager_TypeInfo;
          }
          v138->static_fields->_PhaseCnt_k__BackingField = v139;
          updated = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
          v140 = (clsQuestCheck_o *)updated;
          v141 = QuestAfterAction_StateMain___c_TypeInfo;
          if ( !QuestAfterAction_StateMain___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(QuestAfterAction_StateMain___c_TypeInfo);
            v141 = QuestAfterAction_StateMain___c_TypeInfo;
          }
          _9__16_33 = v141->static_fields->__9__16_33;
          if ( !_9__16_33 )
          {
            if ( !v141->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v141);
              v141 = QuestAfterAction_StateMain___c_TypeInfo;
            }
            v143 = (Il2CppObject *)v141->static_fields->__9;
            _9__16_33 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
            System_Action___ctor(_9__16_33, v143, Method_QuestAfterAction_StateMain___c__UpdateAnim_b__16_33__, 0LL);
            v144 = QuestAfterAction_StateMain___c_TypeInfo->static_fields;
            v144->__9__16_33 = _9__16_33;
            sub_1B88554((ServantStatusBattleListViewItem_o *)&v144->__9__16_33, (int32_t)_9__16_33, v145, v146);
          }
          if ( !v140 )
            goto LABEL_874;
          clsQuestCheck__PlayQuestStartAction(v140, _9__16_33, 0LL);
        }
      }
      else
      {
        QuestAfterAction_StateMain__ForceEndAnim(this, 1, v136);
      }
      return;
    }
    if ( id != 540 )
    {
      if ( id == 550 )
        goto LABEL_18;
      return;
    }
    updated = (__int64)v15->fields.param;
    if ( !updated )
      goto LABEL_874;
    updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
    if ( !updated )
      goto LABEL_874;
    v147 = updated;
    if ( !*(_DWORD *)(updated + 24) )
      goto LABEL_875;
    v148 = System_Int32__Parse(*(System_String_o **)(updated + 32), 0LL);
    if ( *(int *)(v147 + 24) < 2 )
    {
      v149 = -1;
    }
    else
    {
      v149 = System_Int32__Parse(*(System_String_o **)(v147 + 40), 0LL);
      if ( *(int *)(v147 + 24) >= 3 )
      {
        v150 = System_Int32__Parse(*(System_String_o **)(v147 + 48), 0LL);
LABEL_314:
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_4A5644B )
        {
          sub_1B885B0(&TerminalPramsManager_TypeInfo);
          byte_4A5644B = 1;
        }
        v188 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v188 = TerminalPramsManager_TypeInfo;
        }
        v188->static_fields->_IsAutoResume_k__BackingField = 1;
        if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        if ( !byte_4A5629D )
        {
          sub_1B885B0(&TerminalSceneComponent_TypeInfo);
          byte_4A5629D = 1;
        }
        updated = (__int64)TerminalSceneComponent_TypeInfo;
        if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          updated = (__int64)TerminalSceneComponent_TypeInfo;
        }
        v189 = **(_QWORD **)(updated + 184);
        if ( !v189 )
          goto LABEL_874;
        updated = *(_QWORD *)(v189 + 264);
        if ( !updated )
          goto LABEL_874;
        if ( !ScrTerminalMap__RequestMapChange((ScrTerminalMap_o *)updated, v148, v149, v150, 0LL) )
        {
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          if ( !byte_4A5644B )
          {
            sub_1B885B0(&TerminalPramsManager_TypeInfo);
            byte_4A5644B = 1;
          }
          v191 = TerminalPramsManager_TypeInfo;
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            v191 = TerminalPramsManager_TypeInfo;
          }
          v191->static_fields->_IsAutoResume_k__BackingField = 0;
          goto LABEL_18;
        }
        ((void (__fastcall *)(QuestAfterAction_StateMain_o *, Il2CppMethodPointer))this->klass->vtable._14_EndAnim.method)(
          this,
          this->klass->vtable._15_onEnd.methodPtr);
        updated = *v10;
        if ( !*v10 )
          goto LABEL_874;
        QuestAfterAction__SetState((QuestAfterAction_o *)updated, 0, v190);
        return;
      }
    }
    v150 = -1;
    goto LABEL_314;
  }
  if ( id <= 801 )
  {
    switch ( id )
    {
      case 701:
        if ( !System_String__op_Equality(v15->fields.param, (System_String_o *)StringLiteral_1212/*"0"*/, 0LL) )
          goto LABEL_18;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_4A58088 )
        {
          sub_1B885B0(&TerminalPramsManager_TypeInfo);
          byte_4A58088 = 1;
        }
        v125 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v125 = TerminalPramsManager_TypeInfo;
        }
        v125->static_fields->_IsTransOrdealCall_k__BackingField = 1;
        updated = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
        if ( !updated )
          goto LABEL_874;
        AvalonSceneManager__transitionSceneRefresh((AvalonSceneManager_o *)updated, 34, 1, 0LL, 0, 0LL);
        break;
      case 800:
        v126 = *v10;
        if ( !*v10 )
          goto LABEL_874;
        updated = *(_QWORD *)(v126 + 88);
        if ( !updated )
          goto LABEL_874;
        if ( System_Collections_Generic_Dictionary_int__object___TryGetValue(
               (System_Collections_Generic_Dictionary_int__object__o *)updated,
               *(_DWORD *)(v126 + 64),
               &value,
               (const MethodInfo_316F0E4 *)Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__TryGetValue__) )
        {
          updated = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
          if ( !updated )
            goto LABEL_874;
          AutomatedAction__TerminateMissionAction((AutomatedAction_o *)updated, 0LL);
          if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          if ( !byte_4A5629D )
          {
            sub_1B885B0(&TerminalSceneComponent_TypeInfo);
            byte_4A5629D = 1;
          }
          updated = (__int64)TerminalSceneComponent_TypeInfo;
          if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            updated = (__int64)TerminalSceneComponent_TypeInfo;
          }
          v127 = **(_QWORD **)(updated + 184);
          if ( !v127 )
            goto LABEL_874;
          if ( !*(_QWORD *)(v127 + 456) )
            goto LABEL_208;
          if ( !*(_DWORD *)(updated + 224) )
            j_il2cpp_runtime_class_init_0(updated);
          if ( !byte_4A5629D )
          {
            sub_1B885B0(&TerminalSceneComponent_TypeInfo);
            byte_4A5629D = 1;
          }
          updated = (__int64)TerminalSceneComponent_TypeInfo;
          if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            updated = (__int64)TerminalSceneComponent_TypeInfo;
          }
          v128 = **(_QWORD **)(updated + 184);
          if ( !v128 )
            goto LABEL_874;
          v129 = *(_QWORD *)(v128 + 456);
          if ( !v129 )
            goto LABEL_874;
          updated = *(unsigned int *)(v129 + 48);
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
            v316 = (System_String_o *)value[1].monitor;
            if ( !SoundManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
            SoundManager__playVoice(v316, 0LL);
          }
          else
          {
            updated = (__int64)ServantVoiceEntity__getVoiceAssetName_39766344(updated, 0LL);
            if ( !value )
              goto LABEL_874;
            v130 = (System_String_o *)updated;
            v131 = (System_String_o *)value[1].monitor;
            v132 = SeManager_TypeInfo;
            if ( !SeManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
              v132 = SeManager_TypeInfo;
            }
            DEFAULT_VOLUME = v132->static_fields->DEFAULT_VOLUME;
            if ( !SoundManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
            SoundManager__playVoice_38702940(v130, v131, DEFAULT_VOLUME, 0LL, 0LL);
          }
        }
        break;
      case 801:
        param = v15->fields.param;
        v38 = Method_QuestAfterAction_StateMain_UpdateAnim__;
        if ( (*((_BYTE *)Method_QuestAfterAction_StateMain_UpdateAnim__ + 83) & 2) != 0 )
          v38 = (_QWORD *)sub_1B885C8(Method_QuestAfterAction_StateMain_UpdateAnim__);
        v39 = (System_Reflection_MethodBase_o *)sub_1B88594(v38, v38[4]);
        OverwriteAssetSoundName__PlaySe(v39, param, 0LL);
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
      if ( !*v10 )
        goto LABEL_874;
      *(_BYTE *)(*v10 + 185) = 1;
      goto LABEL_18;
    case 851:
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      if ( !byte_4A5629D )
      {
        sub_1B885B0(&TerminalSceneComponent_TypeInfo);
        byte_4A5629D = 1;
      }
      v107 = TerminalSceneComponent_TypeInfo;
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        v107 = TerminalSceneComponent_TypeInfo;
      }
      v108 = v107->static_fields->mInstance;
      updated = (__int64)QuestAfterAction_Command__GetBgmName(v15, (const MethodInfo *)v7);
      if ( !v108 )
        goto LABEL_874;
      TerminalSceneComponent__playBgm(v108, (System_String_o *)updated, 0LL);
      if ( !*v10 )
        goto LABEL_874;
      *(_BYTE *)(*v10 + 185) = 0;
      goto LABEL_18;
    case 900:
      v20 = (float)System_Int32__Parse(v15->fields.param, 0LL) / 1000.0;
      if ( v20 <= 0.0 )
        goto LABEL_18;
      this->fields.waitTime = v20;
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

  if ( (byte_4A5803A & 1) == 0 )
  {
    sub_1B885B0(&TerminalSceneComponent_TypeInfo);
    byte_4A5803A = 1;
  }
  this->fields.that = that;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)that, (int32_t)method, v3);
  v8 = this->fields.that;
  if ( !v8 )
    goto LABEL_14;
  screenCollider = (TerminalSceneComponent_c *)v8->fields.screenCollider;
  if ( !screenCollider )
    goto LABEL_14;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)screenCollider, 1, 0LL);
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4A5629D )
  {
    sub_1B885B0(&TerminalSceneComponent_TypeInfo);
    byte_4A5629D = 1;
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
    sub_1B8880C(screenCollider, v7);
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
    sub_1B8880C(this, method);
  return that->fields.commandBuf;
}


int32_t __fastcall QuestAfterAction_StateMain__get_CommandIndex(
        QuestAfterAction_StateMain_o *this,
        const MethodInfo *method)
{
  struct QuestAfterAction_o *that; // x8

  that = this->fields.that;
  if ( !that )
    sub_1B8880C(this, method);
  return that->fields.commandIdx;
}


UnityEngine_GameObject_o *__fastcall QuestAfterAction_StateMain__get_SubGimmickRoot(
        QuestAfterAction_StateMain_o *this,
        const MethodInfo *method)
{
  TerminalSceneComponent_c *v2; // x0
  struct TerminalSceneComponent_o *mInstance; // x8
  struct ScrTerminalMap_o *mTerminalMap; // x8

  if ( (byte_4A58039 & 1) == 0 )
  {
    sub_1B885B0(&TerminalSceneComponent_TypeInfo);
    byte_4A58039 = 1;
  }
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4A5629D )
  {
    sub_1B885B0(&TerminalSceneComponent_TypeInfo);
    byte_4A5629D = 1;
  }
  v2 = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v2 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = v2->static_fields->mInstance;
  if ( !mInstance || (mTerminalMap = mInstance->fields.mTerminalMap) == 0LL )
    sub_1B8880C(v2, method);
  return mTerminalMap->fields.subRootGimmickP;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestAfterAction_StateMain__onEnd(
        QuestAfterAction_StateMain_o *this,
        bool deleteKey,
        const MethodInfo *method)
{
  TerminalSceneComponent_c *v5; // x0
  TerminalSceneComponent_o *mInstance; // x0
  const MethodInfo *v7; // x1

  if ( (byte_4A5803C & 1) == 0 )
  {
    sub_1B885B0(&TerminalSceneComponent_TypeInfo);
    sub_1B885B0(&StringLiteral_16709/*"afterActionBk"*/);
    byte_4A5803C = 1;
  }
  if ( deleteKey )
    UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_16709/*"afterActionBk"*/, 0LL);
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4A5629D )
  {
    sub_1B885B0(&TerminalSceneComponent_TypeInfo);
    byte_4A5629D = 1;
  }
  v5 = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v5 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = v5->static_fields->mInstance;
  if ( !mInstance
    || (TerminalSceneComponent__ClearTransitionInfo(mInstance, 0LL),
        QuestAfterAction_StateMain__StartMapGimmick(this, v7),
        (mInstance = (TerminalSceneComponent_o *)this->fields.that) == 0LL) )
  {
    sub_1B8880C(mInstance, deleteKey);
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
    sub_1B8880C(this, value);
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
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A5803E & 1) == 0 )
  {
    sub_1B885B0(&QuestAfterAction_StateMain___c_TypeInfo);
    byte_4A5803E = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(QuestAfterAction_StateMain___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  QuestAfterAction_StateMain___c_TypeInfo->static_fields->__9 = (struct QuestAfterAction_StateMain___c_o *)v1;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)QuestAfterAction_StateMain___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3);
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
  TerminalPramsManager_c *v2; // x0
  int32_t WarId_k__BackingField; // w19
  int32_t QuestId_k__BackingField; // w20
  QuestAfterAction_StateMain___c_c *v5; // x8
  int32_t PhaseCnt_k__BackingField; // w23
  ScriptManager_CallbackFunc_o *_9__16_34; // x21
  Il2CppObject *v8; // x22
  struct QuestAfterAction_StateMain___c_StaticFields *static_fields; // x0
  int32_t v10; // w2
  int32_t v11; // w3

  if ( (byte_4A5803F & 1) == 0 )
  {
    sub_1B885B0(&ScriptManager_CallbackFunc_TypeInfo);
    sub_1B885B0(&ScriptManager_TypeInfo);
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    sub_1B885B0(&Method_QuestAfterAction_StateMain___c__UpdateAnim_b__16_34__);
    sub_1B885B0(&QuestAfterAction_StateMain___c_TypeInfo);
    byte_4A5803F = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A57DC3 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A57DC3 = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  WarId_k__BackingField = v2->static_fields->_WarId_k__BackingField;
  if ( !byte_4A57DC0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
    byte_4A57DC0 = 1;
  }
  if ( !v2->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v2);
    v2 = TerminalPramsManager_TypeInfo;
  }
  QuestId_k__BackingField = v2->static_fields->_QuestId_k__BackingField;
  if ( !byte_4A57DCB )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
    byte_4A57DCB = 1;
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
  _9__16_34 = v5->static_fields->__9__16_34;
  if ( !_9__16_34 )
  {
    if ( !v5->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v5);
      v5 = QuestAfterAction_StateMain___c_TypeInfo;
    }
    v8 = (Il2CppObject *)v5->static_fields->__9;
    _9__16_34 = (ScriptManager_CallbackFunc_o *)sub_1B887FC(ScriptManager_CallbackFunc_TypeInfo);
    ScriptManager_CallbackFunc___ctor(_9__16_34, v8, Method_QuestAfterAction_StateMain___c__UpdateAnim_b__16_34__, 0LL);
    static_fields = QuestAfterAction_StateMain___c_TypeInfo->static_fields;
    static_fields->__9__16_34 = _9__16_34;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__16_34, (int32_t)_9__16_34, v10, v11);
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


void __fastcall QuestAfterAction_StateMain___c___UpdateAnim_b__16_34(
        QuestAfterAction_StateMain___c_o *this,
        bool isExit,
        const MethodInfo *method)
{
  QuestAfterAction_StateMain___c_c *v3; // x0
  NetworkManager_ResultCallbackFunc_o *_9__16_35; // x19
  Il2CppObject *v5; // x20
  struct QuestAfterAction_StateMain___c_StaticFields *static_fields; // x0
  int32_t v7; // w2
  int32_t v8; // w3
  Il2CppObject *Request_object; // x19
  TerminalPramsManager_c *v10; // x0
  int32_t QuestId_k__BackingField; // w21
  int32_t PhaseCnt_k__BackingField; // w20
  System_Int32_array *SelectRouteArray; // x0
  __int64 v14; // x1

  if ( (byte_4A58040 & 1) == 0 )
  {
    sub_1B885B0(&Method_NetworkManager_getRequest_BattleScenarioRequest___);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1B885B0(&ScriptManager_TypeInfo);
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    sub_1B885B0(&Method_QuestAfterAction_StateMain___c__UpdateAnim_b__16_35__);
    sub_1B885B0(&QuestAfterAction_StateMain___c_TypeInfo);
    byte_4A58040 = 1;
  }
  v3 = QuestAfterAction_StateMain___c_TypeInfo;
  if ( !QuestAfterAction_StateMain___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestAfterAction_StateMain___c_TypeInfo);
    v3 = QuestAfterAction_StateMain___c_TypeInfo;
  }
  _9__16_35 = v3->static_fields->__9__16_35;
  if ( !_9__16_35 )
  {
    if ( !v3->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v3);
      v3 = QuestAfterAction_StateMain___c_TypeInfo;
    }
    v5 = (Il2CppObject *)v3->static_fields->__9;
    _9__16_35 = (NetworkManager_ResultCallbackFunc_o *)sub_1B887FC(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      _9__16_35,
      v5,
      Method_QuestAfterAction_StateMain___c__UpdateAnim_b__16_35__,
      0LL);
    static_fields = QuestAfterAction_StateMain___c_TypeInfo->static_fields;
    static_fields->__9__16_35 = _9__16_35;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__16_35, (int32_t)_9__16_35, v7, v8);
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     _9__16_35,
                     (const MethodInfo_2F019D8 *)Method_NetworkManager_getRequest_BattleScenarioRequest___);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A57DC0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A57DC0 = 1;
  }
  v10 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v10 = TerminalPramsManager_TypeInfo;
  }
  QuestId_k__BackingField = v10->static_fields->_QuestId_k__BackingField;
  if ( !byte_4A57DCB )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    v10 = TerminalPramsManager_TypeInfo;
    byte_4A57DCB = 1;
  }
  if ( !v10->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v10);
    v10 = TerminalPramsManager_TypeInfo;
  }
  PhaseCnt_k__BackingField = v10->static_fields->_PhaseCnt_k__BackingField;
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  SelectRouteArray = ScriptManager__GetSelectRouteArray(0LL);
  if ( !Request_object )
    sub_1B8880C(SelectRouteArray, v14);
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
  Il2CppObject *v4; // x19
  System_Object_array *v5; // x19
  TerminalPramsManager_c *v6; // x0
  Il2CppObject *Instance; // x0
  __int64 v8; // x1

  if ( (byte_4A58041 & 1) == 0 )
  {
    sub_1B885B0(&Method_JsonManager_DeserializeArray_BattleResultComponent_resultData___);
    sub_1B885B0(&JsonManager_TypeInfo);
    sub_1B885B0(&ScriptManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    sub_1B885B0(&StringLiteral_16709/*"afterActionBk"*/);
    sub_1B885B0(&StringLiteral_15812/*"["*/);
    sub_1B885B0(&StringLiteral_16069/*"]"*/);
    byte_4A58041 = 1;
  }
  v4 = (Il2CppObject *)System_String__Concat_61718292(
                         (System_String_o *)StringLiteral_15812/*"["*/,
                         jsonstr,
                         (System_String_o *)StringLiteral_16069/*"]"*/,
                         0LL);
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v5 = JsonManager__DeserializeArray_object_(
         v4,
         (const MethodInfo_2EE5F40 *)Method_JsonManager_DeserializeArray_BattleResultComponent_resultData___);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_16709/*"afterActionBk"*/, 0LL);
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  ScriptManager__ClearSelectRouteArray(0LL);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  TerminalPramsManager__ReceiveQuestEndResultInfo((BattleResultComponent_resultData_array *)v5, 1, 0LL);
  if ( !byte_4A5644B )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A5644B = 1;
  }
  v6 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v6 = TerminalPramsManager_TypeInfo;
  }
  v6->static_fields->_IsAutoResume_k__BackingField = 1;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1B8880C(0LL, v8);
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
    sub_1B8880C(0LL, method);
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
    sub_1B8880C(0LL, method);
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
    sub_1B8880C(0LL, method);
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
    sub_1B8880C(0LL, method);
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
    sub_1B8880C(0LL, method);
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
    sub_1B8880C(0LL, method);
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
    sub_1B8880C(0LL, method);
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
    sub_1B8880C(0LL, method);
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
    sub_1B8880C(0LL, method);
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
    sub_1B8880C(0LL, method);
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
    sub_1B8880C(0LL, method);
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
    sub_1B8880C(0LL, method);
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
    sub_1B8880C(_4__this, method);
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
    sub_1B8880C(0LL, method);
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
    sub_1B8880C(0LL, method);
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
    sub_1B8880C(0LL, method);
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
    sub_1B8880C(0LL, method);
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
    sub_1B8880C(0LL, method);
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
    sub_1B8880C(0LL, method);
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
    sub_1B8880C(spot, method);
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
    sub_1B8880C(this, method);
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
    sub_1B8880C(this, method);
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
    sub_1B8880C(this, method);
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
    sub_1B8880C(this, method);
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
    sub_1B8880C(this, method);
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
  __int64 v3; // x19
  UnityEngine_Component_o *mapGimmick; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  int32_t v7; // w3
  UnityEngine_Component_o *v8; // x22
  Il2CppObject *v9; // x0
  UnityEngine_Color_o **v10; // x21
  int32_t v11; // w2
  int32_t v12; // w3
  struct System_String_array *paramsStr; // x8
  struct System_String_array *v14; // x8
  UnityEngine_Color_o *v15; // x20
  float v16; // s0
  UITweener_o *v17; // x20
  EventDelegate_Callback_o *v18; // x21
  UnityEngine_Color_o color; // [xsp+10h] [xbp-40h] BYREF

  if ( (byte_4A58042 & 1) == 0 )
  {
    sub_1B885B0(&EventDelegate_Callback_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_GameObject_AddComponent_TweenColor___);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponentInChildren_UISprite___);
    sub_1B885B0(&Method_QuestAfterAction_StateMain___c__DisplayClass16_14__UpdateAnim_b__28__);
    sub_1B885B0(&QuestAfterAction_StateMain___c__DisplayClass16_14_TypeInfo);
    byte_4A58042 = 1;
  }
  *(_QWORD *)&color.fields.r = 0LL;
  *(_QWORD *)&color.fields.b = 0LL;
  v3 = sub_1B887FC(QuestAfterAction_StateMain___c__DisplayClass16_14_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  if ( !v3 )
    goto LABEL_18;
  *(_QWORD *)(v3 + 24) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v3 + 24), (int32_t)this, v6, v7);
  mapGimmick = (UnityEngine_Component_o *)this->fields.mapGimmick;
  if ( !mapGimmick )
    goto LABEL_18;
  mapGimmick = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mapGimmick, 0LL);
  if ( !mapGimmick )
    goto LABEL_18;
  mapGimmick = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponentInChildren_object_(
                                            (UnityEngine_GameObject_o *)mapGimmick,
                                            (const MethodInfo_2ECF11C *)Method_UnityEngine_GameObject_GetComponentInChildren_UISprite___);
  if ( !mapGimmick )
    goto LABEL_18;
  v8 = mapGimmick;
  mapGimmick = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mapGimmick, 0LL);
  if ( !mapGimmick )
    goto LABEL_18;
  v9 = UnityEngine_GameObject__AddComponent_object_(
         (UnityEngine_GameObject_o *)mapGimmick,
         (const MethodInfo_2ECEDD0 *)Method_UnityEngine_GameObject_AddComponent_TweenColor___);
  *(_QWORD *)(v3 + 16) = v9;
  v10 = (UnityEngine_Color_o **)(v3 + 16);
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v3 + 16), (int32_t)v9, v11, v12);
  paramsStr = this->fields.paramsStr;
  if ( !paramsStr )
    goto LABEL_18;
  if ( paramsStr->max_length <= 1 )
    goto LABEL_19;
  mapGimmick = (UnityEngine_Component_o *)UnityEngine_ColorUtility__TryParseHtmlString(
                                            paramsStr->m_Items[1],
                                            &color,
                                            0LL);
  if ( !*v10
    || ((*v10)[8] = *(UnityEngine_Color_o *)((char *)&v8[6].klass + 4), !*v10)
    || ((*v10)[9] = color, (v14 = this->fields.paramsStr) == 0LL) )
  {
LABEL_18:
    sub_1B8880C(mapGimmick, v5);
  }
  if ( v14->max_length <= 2 )
LABEL_19:
    sub_1B88814(mapGimmick, v5);
  v15 = *v10;
  v16 = System_Single__Parse(v14->m_Items[2], 0LL);
  if ( !v15 )
    goto LABEL_18;
  v15[3].fields.b = v16;
  mapGimmick = (UnityEngine_Component_o *)*v10;
  if ( !*v10 )
    goto LABEL_18;
  UITweener__PlayForward((UITweener_o *)mapGimmick, 0LL);
  v17 = *(UITweener_o **)(v3 + 16);
  v18 = (EventDelegate_Callback_o *)sub_1B887FC(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(
    v18,
    (Il2CppObject *)v3,
    Method_QuestAfterAction_StateMain___c__DisplayClass16_14__UpdateAnim_b__28__,
    0LL);
  if ( !v17 )
    goto LABEL_18;
  UITweener__SetOnFinished(v17, v18, 0LL);
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

  if ( (byte_4A58043 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A58043 = 1;
  }
  tween = (UnityEngine_Object_o *)this->fields.tween;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_69459380(tween, 0LL);
  CS___8__locals14 = this->fields.CS___8__locals14;
  if ( !CS___8__locals14
    || (CS___8__locals13 = CS___8__locals14->fields.CS___8__locals13) == 0LL
    || (_4__this = CS___8__locals13->fields.__4__this) == 0LL )
  {
    sub_1B8880C(_4__this, v5);
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
    sub_1B8880C(this, method);
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
    sub_1B8880C(this, method);
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
    sub_1B8880C(spot, method);
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
    sub_1B8880C(spot, method);
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
    sub_1B8880C(this, method);
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
    sub_1B8880C(this, method);
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
    sub_1B8880C(this, method);
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
    sub_1B8880C(this, method);
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
    sub_1B8880C(this, method);
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
    sub_1B8880C(this, method);
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
  sub_1B88554(p_end, 0, v2, v3);
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
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)startCallback, (int32_t)method, v3);
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
  sub_1B88554((ServantStatusBattleListViewItem_o *)p_end, (int32_t)endCallback, (int32_t)method, v3);
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
  sub_1B88554((ServantStatusBattleListViewItem_o *)v6, (int32_t)vName, v7, v8);
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
  int32_t _1__state; // w8
  QuestAfterAction_o *_4__this; // x19
  struct System_Collections_Generic_IEnumerable_QuestAfterAction_Command__o *commandEnumerable; // x20
  System_Collections_Generic_IEnumerable_QuestAfterAction_Command__c *klass; // x8
  __int64 v7; // x9
  int *p_offset; // x10
  __int64 p_method; // x0
  __int64 v10; // x1
  int32_t v11; // w2
  int32_t v12; // w3
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
  QuestAfterAction_Command_o *v24; // x0
  const MethodInfo *v25; // x1
  struct QuestAfterAction_Command_o *v26; // x20
  int id; // w8
  unsigned int v28; // w8
  int32_t v29; // w21
  int32_t CommandTargetId; // w2
  const MethodInfo *v31; // x3
  int32_t v32; // w2
  int32_t v33; // w3
  int32_t v34; // w2
  int32_t v35; // w3
  bool result; // w0
  QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__78_o *v37; // [xsp+18h] [xbp-48h]

  v2 = this;
  v37 = this;
  if ( (byte_4A58047 & 1) == 0 )
  {
    sub_1B885B0(&System_Collections_Generic_IEnumerable_QuestAfterAction_Command__TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerator_QuestAfterAction_Command__TypeInfo);
    this = (QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__78_o *)sub_1B885B0(&System_Collections_IEnumerator_TypeInfo);
    byte_4A58047 = 1;
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
      sub_1B8880C(this, method);
    klass = commandEnumerable->klass;
    v7 = *(unsigned __int16 *)(&commandEnumerable->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&commandEnumerable->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerable_QuestAfterAction_Command__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_QuestAfterAction_Command__TypeInfo )
      {
        --v7;
        p_offset += 4;
        if ( !v7 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_1BDA590(
                   commandEnumerable,
                   System_Collections_Generic_IEnumerable_QuestAfterAction_Command__TypeInfo,
                   0LL);
    }
    v10 = (*(__int64 (__fastcall **)(struct System_Collections_Generic_IEnumerable_QuestAfterAction_Command__o *, _QWORD))p_method)(
            commandEnumerable,
            *(_QWORD *)(p_method + 8));
    v37->fields.__7__wrap1 = (struct System_Collections_Generic_IEnumerator_QuestAfterAction_Command__o *)v10;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v37->fields.__7__wrap1, v10, v11, v12);
    v2 = v37;
  }
  _7__wrap1 = v2->fields.__7__wrap1;
  v2->fields.__1__state = -3;
  if ( !_7__wrap1 )
LABEL_46:
    sub_1B8880C(this, method);
  while ( 1 )
  {
    v14 = _7__wrap1->klass;
    v15 = *(unsigned __int16 *)(&_7__wrap1->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&_7__wrap1->klass->_2.bitflags2 + 3) )
    {
      v16 = &v14->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)v16 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v15;
        v16 += 4;
        if ( !v15 )
          goto LABEL_18;
      }
      v17 = (__int64)&v14->vtable[*v16].method;
    }
    else
    {
LABEL_18:
      v17 = sub_1BDA590(_7__wrap1, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(struct System_Collections_Generic_IEnumerator_QuestAfterAction_Command__o *, _QWORD))v17)(
            _7__wrap1,
            *(_QWORD *)(v17 + 8)) & 1) == 0 )
    {
      QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__78____m__Finally1(v37, v18);
      v37->fields.__7__wrap1 = 0LL;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&v37->fields.__7__wrap1, 0, v34, v35);
      return 0;
    }
    v19 = v37->fields.__7__wrap1;
    if ( !v19 )
      sub_1B8880C(v37, v18);
    v20 = v19->klass;
    v21 = *(unsigned __int16 *)(&v19->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v19->klass->_2.bitflags2 + 3) )
    {
      v22 = &v20->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_QuestAfterAction_Command__c **)v22 - 1) != System_Collections_Generic_IEnumerator_QuestAfterAction_Command__TypeInfo )
      {
        --v21;
        v22 += 4;
        if ( !v21 )
          goto LABEL_26;
      }
      v23 = (__int64)&v20->vtable[*v22].method;
    }
    else
    {
LABEL_26:
      v23 = sub_1BDA590(
              v37->fields.__7__wrap1,
              System_Collections_Generic_IEnumerator_QuestAfterAction_Command__TypeInfo,
              0LL);
    }
    v24 = (QuestAfterAction_Command_o *)(*(__int64 (__fastcall **)(struct System_Collections_Generic_IEnumerator_QuestAfterAction_Command__o *, _QWORD))v23)(
                                          v19,
                                          *(_QWORD *)(v23 + 8));
    v26 = v24;
    if ( !v24 )
      sub_1B8880C(0LL, v25);
    if ( !_4__this )
      sub_1B8880C(v24, v25);
    id = v24->fields.id;
    if ( id <= 205 )
    {
      if ( (unsigned int)(id - 100) >= 0xF || ((0x7C1Fu >> (id - 100)) & 1) == 0 )
      {
        if ( (unsigned int)(id - 200) <= 5 )
        {
          v29 = 1;
          goto LABEL_44;
        }
        goto LABEL_41;
      }
      v29 = 0;
    }
    else
    {
      if ( id > 550 )
      {
        v28 = id - 1000;
        if ( v28 < 0xD )
        {
          v29 = dword_BEDE50[v28];
          goto LABEL_44;
        }
LABEL_41:
        v29 = -1;
        goto LABEL_44;
      }
      if ( (unsigned int)(id - 400) >= 0xA )
      {
        if ( id == 550 )
        {
          v29 = 3;
          goto LABEL_44;
        }
        goto LABEL_41;
      }
      v29 = 2;
    }
LABEL_44:
    CommandTargetId = QuestAfterAction__ExtractCommandTargetId(v24, v25);
    this = (QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__78_o *)QuestAfterAction__IsExistCommand(
                                                                                    _4__this,
                                                                                    v29,
                                                                                    CommandTargetId,
                                                                                    v31);
    if ( ((unsigned __int8)this & 1) == 0 )
      break;
    _7__wrap1 = v37->fields.__7__wrap1;
    if ( !_7__wrap1 )
      goto LABEL_46;
  }
  v37->fields.__2__current = v26;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v37->fields.__2__current, (int32_t)v26, v32, v33);
  result = 1;
  v37->fields.__1__state = 1;
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

  if ( (byte_4A58049 & 1) == 0 )
  {
    sub_1B885B0(&QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__78_TypeInfo);
    byte_4A58049 = 1;
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
    v6 = (QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__78_o *)sub_1B887FC(QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__78_TypeInfo);
    System_Object___ctor((Il2CppObject *)v6, 0LL);
    v6->fields.__1__state = 0;
    v6->fields.__l__initialThreadId = System_Environment__get_CurrentManagedThreadId(0LL);
    _4__this = this->fields.__4__this;
    v6->fields.__4__this = _4__this;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v6->fields.__4__this, (int32_t)_4__this, v8, v9);
  }
  _3__commandEnumerable = this->fields.__3__commandEnumerable;
  v6->fields.commandEnumerable = _3__commandEnumerable;
  sub_1B88554(
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

  v2 = sub_1B885C4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B887FC(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B885C4(&Method_QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__78_System_Collections_IEnumerator_Reset__);
  sub_1B886D8(v3, v4);
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

  if ( (byte_4A58048 & 1) == 0 )
  {
    sub_1B885B0(&System_IDisposable_TypeInfo);
    byte_4A58048 = 1;
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
      p_method = sub_1BDA590(_7__wrap1, System_IDisposable_TypeInfo, 0LL);
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
      sub_1B8880C(this, method);
    if ( _4__this->fields.isKeepingMainStateButFinished )
    {
      this->fields.__2__current = 0LL;
      p__2__current = &this->fields.__2__current;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.__2__current, 0, v2, v3);
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

  v2 = sub_1B885C4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B887FC(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B885C4(&Method_QuestAfterAction__WaitWhileMainStateFinished_d__82_System_Collections_IEnumerator_Reset__);
  sub_1B886D8(v3, v4);
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

  if ( (byte_4A58044 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo__RemoveAt__);
    byte_4A58044 = 1;
  }
  svtVInfos = (System_Collections_Generic_List_object__o *)this->fields.svtVInfos;
  if ( !svtVInfos
    || (System_Collections_Generic_List_object___RemoveAt(
          svtVInfos,
          0,
          (const MethodInfo_34FF008 *)Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo__RemoveAt__),
        (svtVInfos = (System_Collections_Generic_List_object__o *)this->fields.__4__this) == 0LL) )
  {
    sub_1B8880C(svtVInfos, method);
  }
  QuestAfterAction__LoadVoice_33832040((QuestAfterAction_o *)svtVInfos, this->fields.svtVInfos, this->fields.endAct, v4);
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

  if ( (byte_4A58045 & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    byte_4A58045 = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    sub_1B8880C(0LL, v4);
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

  if ( (byte_4A58046 & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    byte_4A58046 = 1;
  }
  _4__this = (char *)this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_8;
  *((_QWORD *)_4__this + 21) = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)_4__this + 1, 0, v2, v3);
  _4__this = (char *)this->fields.__4__this;
  if ( !_4__this
    || (*((_QWORD *)_4__this + 9) = 0LL,
        sub_1B88554((ServantStatusBattleListViewItem_o *)(_4__this + 72), 0, v6, v7),
        (_4__this = (char *)SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__)) == 0LL)
    || (MissionNotifyManager__EndPause((MissionNotifyManager_o *)_4__this, 0LL),
        (_4__this = (char *)this->fields.__4__this) == 0LL) )
  {
LABEL_8:
    sub_1B8880C(_4__this, method);
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
    sub_1B8880C(0LL, method);
  QuestAfterAction__SetState(_4__this, 2, v2);
}