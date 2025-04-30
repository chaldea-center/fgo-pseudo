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

  if ( (byte_4A4B110 & 1) == 0 )
  {
    sub_1B863B8(&BlankEarthQuestAfterAction_TypeInfo, method);
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo___ctor__, v3);
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int____ctor__, v4);
    sub_1B863B8(&System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___TypeInfo, v5);
    sub_1B863B8(&System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__TypeInfo, v6);
    sub_1B863B8(&Method_SingletonMonoBehaviour_QuestAfterAction___ctor__, v7);
    sub_1B863B8(&QuestAfterAction_TitleInfoControlCallback_TypeInfo, v8);
    byte_4A4B110 = 1;
  }
  v9 = (Il2CppObject *)sub_1B86604(QuestAfterAction_TitleInfoControlCallback_TypeInfo);
  System_Object___ctor(v9, 0LL);
  this->fields._TitleInfoCtrlCallback_k__BackingField = (struct QuestAfterAction_TitleInfoControlCallback_o *)v9;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields._TitleInfoCtrlCallback_k__BackingField, (int32_t)v9, v10, v11);
  v12 = (BlankEarthQuestAfterAction_o *)sub_1B86604(BlankEarthQuestAfterAction_TypeInfo);
  BlankEarthQuestAfterAction___ctor(v12, 0LL);
  this->fields._BlankEarthQuestAfterAction_k__BackingField = v12;
  sub_1B8635C(
    (CGThumbnailListItem_o *)&this->fields._BlankEarthQuestAfterAction_k__BackingField,
    (int32_t)v12,
    v13,
    v14);
  v15 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1B86604(System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___TypeInfo);
  System_Collections_Generic_Dictionary_Int32Enum__object____ctor(
    v15,
    (const MethodInfo_329DB24 *)Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int____ctor__);
  this->fields.commandTypeIds = (struct System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___o *)v15;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.commandTypeIds, (int32_t)v15, v16, v17);
  v18 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1B86604(System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v18,
    (const MethodInfo_326CD90 *)Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo___ctor__);
  this->fields.svtVoices = (struct System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__o *)v18;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.svtVoices, (int32_t)v18, v19, v20);
  this->fields.MapMoveBeforeFocusSpotId = -1;
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_3839A98 *)Method_SingletonMonoBehaviour_QuestAfterAction___ctor__);
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
  sub_1B8635C(p_endAct, 0, v2, v3);
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
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  __int64 v31; // x1
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  __int64 v34; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4A4B0F6 & 1) == 0 )
  {
    sub_1B863B8(&QuestAfterAction_Command___TypeInfo, method);
    sub_1B863B8(&QuestAfterAction_Command_TypeInfo, v3);
    sub_1B863B8(&Method_DataManager_GetMasterData_QuestMaster___, v4);
    sub_1B863B8(&Method_DataManager_GetMasterData_QuestPhaseDetailAddMaster___, v5);
    sub_1B863B8(&Method_DataManager_GetMasterData_QuestPhaseDetailMaster___, v6);
    sub_1B863B8(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__, v7);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v9);
    sub_1B863B8(&StringLiteral_1191/*"1"*/, v10);
    byte_4A4B0F6 = 1;
  }
  entity = 0LL;
  if ( this->fields.BlankEarthTargetWarId > 0 )
    return 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A4B11C )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v12);
    byte_4A4B11C = 1;
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
                          (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_QuestPhaseDetailAddMaster___);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4A48E97 )
    {
      sub_1B863B8(&TerminalPramsManager_TypeInfo, v12);
      byte_4A48E97 = 1;
    }
    v14 = (__int64)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v14 = (__int64)TerminalPramsManager_TypeInfo;
    }
    v16 = *(_DWORD *)(*(_QWORD *)(v14 + 184) + 20LL);
    if ( !byte_4A48E96 )
    {
      sub_1B863B8(&TerminalPramsManager_TypeInfo, v12);
      v14 = (__int64)TerminalPramsManager_TypeInfo;
      byte_4A48E96 = 1;
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
            (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_QuestPhaseDetailMaster___);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4A48E97 )
    {
      sub_1B863B8(&TerminalPramsManager_TypeInfo, v12);
      byte_4A48E97 = 1;
    }
    v14 = (__int64)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v14 = (__int64)TerminalPramsManager_TypeInfo;
    }
    v19 = *(_DWORD *)(*(_QWORD *)(v14 + 184) + 20LL);
    if ( !byte_4A48E96 )
    {
      sub_1B863B8(&TerminalPramsManager_TypeInfo, v12);
      v14 = (__int64)TerminalPramsManager_TypeInfo;
      byte_4A48E96 = 1;
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
  if ( !byte_4A4B11F )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v12);
    byte_4A4B11F = 1;
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
  if ( !byte_4A48E97 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v12);
    byte_4A48E97 = 1;
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
                          (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_QuestMaster___)) == 0) )
  {
LABEL_76:
    sub_1B86614(v14, v12);
  }
  v14 = DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)v14,
          &entity,
          v21,
          (const MethodInfo_32142CC *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
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
  v14 = sub_1B86460(QuestAfterAction_Command___TypeInfo, (unsigned int)v22 >> 1);
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
    v28 = sub_1B86604(QuestAfterAction_Command_TypeInfo);
    System_Object___ctor((Il2CppObject *)v28, 0LL);
    if ( (unsigned int)(i - 1) >= *((_DWORD *)p_image + 6) )
      goto LABEL_75;
    v14 = System_Int32__Parse((System_String_o *)p_image[i + 3], 0LL);
    if ( !v28 )
      goto LABEL_76;
    *(_DWORD *)(v28 + 16) = v14;
    if ( (unsigned int)i >= *((_DWORD *)p_image + 6) )
LABEL_75:
      sub_1B8661C(v14, v12);
    v31 = p_image[i + 4];
    *(_QWORD *)(v28 + 24) = v31;
    sub_1B8635C((CGThumbnailListItem_o *)(v28 + 24), v31, v29, v30);
    if ( *(_DWORD *)(v28 + 16) == 701
      && System_String__op_Equality(*(System_String_o **)(v28 + 24), (System_String_o *)StringLiteral_1191/*"1"*/, 0LL) )
    {
      break;
    }
    v14 = sub_1B864F4(v28, *(_QWORD *)(*(_QWORD *)v23 + 64LL));
    if ( !v14 )
    {
      v34 = sub_1B86638();
      sub_1B864E0(v34, 0LL);
    }
    if ( v25 >= v23[6] )
      goto LABEL_75;
    *(_QWORD *)(v26 + 8 * v25) = v28;
    sub_1B8635C((CGThumbnailListItem_o *)(v26 + v24), v28, v32, v33);
    ++v25;
    v24 += 8LL;
    if ( (__int64)v25 >= (int)v23[6] )
      return 0;
  }
  return 1;
}


void __fastcall QuestAfterAction__Clear(QuestAfterAction_o *this, const MethodInfo *method)
{
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  QuestAfterAction__DeleteContinueData((const MethodInfo *)this);
  this->fields.commandBuf = 0LL;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.commandBuf, 0, v3, v4);
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
  __int64 v32; // x1
  __int64 v33; // x1
  __int64 v34; // x1
  const MethodInfo *v35; // x1
  const MethodInfo *v36; // x2
  TerminalPramsManager_c *v37; // x0
  int32_t QuestId_k__BackingField; // w22
  System_String_array *afterActionVals; // x23
  __int64 v40; // x1
  Il2CppObject *Instance; // x22
  DataMasterBase_TMaster__TEntity__PKType__o *MasterData_object; // x0
  System_Collections_ObjectModel_ObservableCollection_TEntity__c *klass; // x8
  System_Collections_ObjectModel_ObservableCollection_TEntity__c *v44; // x8
  Il2CppMethodPointer methodPtr; // x8
  int32_t v46; // w24
  System_Collections_ObjectModel_ObservableCollection_TEntity__c *v47; // x8
  Il2CppMethodPointer v48; // x8
  int32_t v49; // w25
  System_Collections_ObjectModel_ObservableCollection_TEntity__c *v50; // x8
  Il2CppMethodPointer v51; // x8
  int32_t MasterName_k__BackingField_high; // w24
  System_Collections_ObjectModel_ObservableCollection_TEntity__c *v53; // x8
  Il2CppMethodPointer v54; // x8
  int32_t MasterKind_k__BackingField; // w19
  TerminalPramsManager_c *v56; // x0
  TerminalSceneComponent_c *v57; // x0
  TerminalPramsManager_c *v58; // x0
  DataMasterBase_TMaster__TEntity__PKType__o *v59; // x23
  int32_t v60; // w24
  int32_t v61; // w24
  System_String_o *lookup; // x24
  bool v63; // w24
  bool v64; // w23
  Il2CppObject *v65; // x23
  WarEntity_o *QuestId; // x0
  WarEntity_o *v67; // x23
  BalanceConfig_c *v68; // x0
  __int64 v69; // x1
  bool v70; // w8
  uint32_t cctor_finished; // w9
  TerminalPramsManager_c *v72; // x0
  TerminalPramsManager_c *v73; // x0
  int32_t id; // w19
  __int64 v75; // x1
  bool v76; // w23
  TerminalPramsManager_c *v77; // x0
  Il2CppObject *Master_object; // x23
  WarReleaseEntity_o *OpenEntity; // x24
  __int64 *v80; // x19
  Il2CppObject *v81; // x23
  bool QuestEntity; // w0
  __int64 v83; // x1
  TerminalPramsManager_c *v84; // x0
  Il2CppObject *v85; // x23
  int32_t items_high; // w24
  Il2CppObject *v87; // x22
  int32_t v88; // w23
  TerminalPramsManager_c *v89; // x0
  Il2CppObject *v90; // x22
  int32_t v91; // w24
  bool IsOverwriteCommandNone; // w0
  __int64 v93; // x8
  __int64 v94; // x0
  unsigned int **p_commandBuf; // x21
  int32_t v96; // w2
  const MethodInfo *v97; // x3
  int *commandBuf; // x8
  unsigned __int64 v99; // x22
  il2cpp_array_size_t v100; // w29
  __int64 v101; // x24
  int32_t v102; // w2
  const MethodInfo *v103; // x3
  __int64 v104; // x8
  System_String_o *v105; // x1
  System_String_o **v106; // x25
  const MethodInfo *v107; // x2
  int v108; // w8
  System_Collections_Generic_Dictionary_int__object__o *svtVoices; // x26
  int32_t v110; // w21
  DataMasterBase_TMaster__TEntity__PKType__o *v111; // x28
  __int64 v112; // x27
  int32_t v113; // w2
  const MethodInfo *v114; // x3
  int v115; // w8
  System_String_c *MasterName_k__BackingField; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v117; // x26
  int32_t v118; // w26
  BalanceConfig_c *v119; // x8
  int klass_high; // w27
  unsigned int v121; // w8
  System_Collections_Generic_List_int__o *Item; // x26
  const MethodInfo *v123; // x1
  struct System_Int32_array *items; // x8
  _QWORD *v125; // x9
  __int64 size; // x10
  QuestAfterAction_o *v127; // x0
  const MethodInfo *v128; // x2
  System_String_c *v129; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v130; // x25
  unsigned __int64 v131; // x26
  System_String_Fields v132; // x8
  _QWORD *v133; // x9
  __int64 MasterName_k__BackingField_low; // x10
  unsigned int *v135; // x25
  int32_t v136; // w2
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
  if ( (byte_4A4B0F5 & 1) == 0 )
  {
    sub_1B863B8(&BalanceConfig_TypeInfo, isBeforeAction);
    sub_1B863B8(&bool_TypeInfo, v5);
    sub_1B863B8(&QuestAfterAction_Command___TypeInfo, v6);
    sub_1B863B8(&QuestAfterAction_Command_TypeInfo, v7);
    sub_1B863B8(&Method_DataManager_GetMasterData_EventMissionMaster___, v8);
    sub_1B863B8(&Method_DataManager_GetMasterData_QuestMaster___, v9);
    sub_1B863B8(&Method_DataManager_GetMasterData_QuestPhaseDetailAddMaster___, v10);
    sub_1B863B8(&Method_DataManager_GetMasterData_QuestPhaseDetailMaster___, v11);
    sub_1B863B8(&Method_DataManager_GetMasterData_WarMaster___, v12);
    sub_1B863B8(&Method_DataManager_GetMaster_BlankEarthSpotMaster___, v13);
    sub_1B863B8(&Method_DataManager_GetMaster_QuestBehaviorMaster___, v14);
    sub_1B863B8(&Method_DataManager_GetMaster_QuestMaster___, v15);
    sub_1B863B8(&Method_DataManager_GetMaster_ShopMaster___, v16);
    sub_1B863B8(&Method_DataManager_GetMaster_WarMaster___, v17);
    sub_1B863B8(&Method_DataManager_GetMaster_WarReleaseMaster___, v18);
    sub_1B863B8(&DataManager_TypeInfo, v19);
    sub_1B863B8(&Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__, v20);
    sub_1B863B8(&Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__GetEntity__, v21);
    sub_1B863B8(&Method_DataMasterBase_BlankEarthSpotMaster__BlankEarthSpotEntity__int__TryGetEntity__, v22);
    sub_1B863B8(&Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__, v23);
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__Add__, v24);
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___get_Item__, v25);
    sub_1B863B8(&Method_System_Linq_Enumerable_Any_KeyValuePair_int__QuestAfterAction_VoiceInfo____, v26);
    sub_1B863B8(&Method_System_Linq_Enumerable_Contains_int___, v27);
    sub_1B863B8(&Method_System_Collections_Generic_List_int__Add__, v28);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v29);
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v30);
    sub_1B863B8(&TerminalSceneComponent_TypeInfo, v31);
    sub_1B863B8(&QuestAfterAction_VoiceInfo_TypeInfo, v32);
    sub_1B863B8(&StringLiteral_16474/*"afterActionBk"*/, v33);
    this = (QuestAfterAction_o *)sub_1B863B8(&StringLiteral_817/*","*/, v34);
    byte_4A4B0F5 = 1;
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
           (const MethodInfo_2F7ABE4 *)Method_System_Linq_Enumerable_Any_KeyValuePair_int__QuestAfterAction_VoiceInfo____) )
    {
      QuestAfterAction__releaseVoice(v4, v35);
    }
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4A48E97 )
    {
      sub_1B863B8(&TerminalPramsManager_TypeInfo, v35);
      byte_4A48E97 = 1;
    }
    v37 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v37 = TerminalPramsManager_TypeInfo;
    }
    QuestId_k__BackingField = v37->static_fields->_QuestId_k__BackingField;
    if ( !byte_4A48E96 )
    {
      sub_1B863B8(&TerminalPramsManager_TypeInfo, v35);
      v37 = TerminalPramsManager_TypeInfo;
      byte_4A48E96 = 1;
    }
    if ( !v37->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v37);
      v37 = TerminalPramsManager_TypeInfo;
    }
    afterActionVals = QuestAfterAction__GetBeforeAction(
                        QuestId_k__BackingField,
                        v37->static_fields->_PhaseCnt_k__BackingField + 1,
                        v36);
    goto LABEL_232;
  }
  QuestAfterAction__LoadTerminalTransitionInfo(this, (const MethodInfo *)isBeforeAction);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4A48DB8 )
  {
    sub_1B863B8(&TerminalSceneComponent_TypeInfo, v40);
    byte_4A48DB8 = 1;
  }
  MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalSceneComponent_TypeInfo;
  }
  klass = MasterData_object[2].fields.list->klass;
  if ( !klass )
    goto LABEL_330;
  if ( !klass->vtable._10_System_Collections_Generic_ICollection_T__get_IsReadOnly.methodPtr )
    goto LABEL_80;
  if ( !LODWORD(MasterData_object[3].monitor) )
    j_il2cpp_runtime_class_init_0(MasterData_object);
  if ( !byte_4A48DB8 )
  {
    sub_1B863B8(&TerminalSceneComponent_TypeInfo, v40);
    byte_4A48DB8 = 1;
  }
  MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalSceneComponent_TypeInfo;
  }
  v44 = MasterData_object[2].fields.list->klass;
  if ( !v44 )
    goto LABEL_330;
  methodPtr = v44->vtable._10_System_Collections_Generic_ICollection_T__get_IsReadOnly.methodPtr;
  if ( !methodPtr )
    goto LABEL_330;
  v46 = *((_DWORD *)methodPtr + 5);
  if ( !byte_4A48DB8 )
  {
    sub_1B863B8(&TerminalSceneComponent_TypeInfo, v40);
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalSceneComponent_TypeInfo;
    byte_4A48DB8 = 1;
  }
  if ( !LODWORD(MasterData_object[3].monitor) )
  {
    j_il2cpp_runtime_class_init_0(MasterData_object);
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalSceneComponent_TypeInfo;
  }
  v47 = MasterData_object[2].fields.list->klass;
  if ( !v47 )
    goto LABEL_330;
  v48 = v47->vtable._10_System_Collections_Generic_ICollection_T__get_IsReadOnly.methodPtr;
  if ( !v48 )
    goto LABEL_330;
  v49 = *((_DWORD *)v48 + 4);
  if ( v49 >= 1 )
  {
    if ( !LODWORD(MasterData_object[3].monitor) )
      j_il2cpp_runtime_class_init_0(MasterData_object);
    if ( !byte_4A48DB8 )
    {
      sub_1B863B8(&TerminalSceneComponent_TypeInfo, v40);
      byte_4A48DB8 = 1;
    }
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalSceneComponent_TypeInfo;
    }
    v50 = MasterData_object[2].fields.list->klass;
    if ( !v50 )
      goto LABEL_330;
    v51 = v50->vtable._10_System_Collections_Generic_ICollection_T__get_IsReadOnly.methodPtr;
    if ( !v51 )
      goto LABEL_330;
    if ( !Instance )
      goto LABEL_330;
    afterActionVals = (System_String_array *)*((_QWORD *)v51 + 4);
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMasterData_object_(
                                                                        (DataManager_o *)Instance,
                                                                        (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_EventMissionMaster___);
    if ( !MasterData_object )
      goto LABEL_330;
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__int___GetEntity(
                                                                        MasterData_object,
                                                                        v49,
                                                                        (const MethodInfo_3214280 *)Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__GetEntity__);
    if ( !MasterData_object )
      goto LABEL_330;
    MasterName_k__BackingField_high = HIDWORD(MasterData_object->fields._MasterName_k__BackingField);
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMasterData_object_(
                                                                        (DataManager_o *)Instance,
                                                                        (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_WarMaster___);
    if ( !MasterData_object )
      goto LABEL_330;
    goto LABEL_67;
  }
  if ( v46 >= 1 )
  {
    if ( !LODWORD(MasterData_object[3].monitor) )
      j_il2cpp_runtime_class_init_0(MasterData_object);
    if ( !byte_4A48DB8 )
    {
      sub_1B863B8(&TerminalSceneComponent_TypeInfo, v40);
      byte_4A48DB8 = 1;
    }
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalSceneComponent_TypeInfo;
    }
    v53 = MasterData_object[2].fields.list->klass;
    if ( !v53 )
      goto LABEL_330;
    v54 = v53->vtable._10_System_Collections_Generic_ICollection_T__get_IsReadOnly.methodPtr;
    if ( !v54 )
      goto LABEL_330;
    afterActionVals = (System_String_array *)*((_QWORD *)v54 + 4);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_ShopMaster___);
    if ( !MasterData_object )
      goto LABEL_330;
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__int___GetEntity(
                                                                        MasterData_object,
                                                                        v46,
                                                                        (const MethodInfo_3214280 *)Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__);
    if ( !MasterData_object )
      goto LABEL_330;
    MasterName_k__BackingField_high = (int32_t)MasterData_object->fields._MasterName_k__BackingField;
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_WarMaster___);
    if ( !MasterData_object )
      goto LABEL_330;
LABEL_67:
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)WarMaster__getByEventId(
                                                                        (WarMaster_o *)MasterData_object,
                                                                        MasterName_k__BackingField_high,
                                                                        0LL);
    if ( !MasterData_object )
      goto LABEL_330;
    MasterKind_k__BackingField = MasterData_object->fields._MasterKind_k__BackingField;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4A4AE80 )
    {
      sub_1B863B8(&TerminalPramsManager_TypeInfo, v40);
      byte_4A4AE80 = 1;
    }
    v56 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v56 = TerminalPramsManager_TypeInfo;
    }
    v56->static_fields->_WarId_k__BackingField = MasterKind_k__BackingField;
    if ( !byte_4A48DB8 )
    {
      sub_1B863B8(&TerminalSceneComponent_TypeInfo, v40);
      byte_4A48DB8 = 1;
    }
    v57 = TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      v57 = TerminalSceneComponent_TypeInfo;
    }
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)v57->static_fields->mInstance;
    if ( !MasterData_object )
      goto LABEL_330;
    TerminalSceneComponent__CallQuestInformationCloseAtAll((TerminalSceneComponent_o *)MasterData_object, 0, 0LL);
    if ( afterActionVals )
      goto LABEL_232;
  }
LABEL_80:
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A4B11C )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v40);
    byte_4A4B11C = 1;
  }
  v58 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v58 = TerminalPramsManager_TypeInfo;
  }
  if ( !v58->static_fields->_IsPhaseClear_k__BackingField
    && UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_16474/*"afterActionBk"*/, 0LL) )
  {
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)UnityEngine_PlayerPrefs__GetString_69314580(
                                                                        (System_String_o *)StringLiteral_16474/*"afterActionBk"*/,
                                                                        0LL);
    if ( !MasterData_object )
      goto LABEL_330;
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)System_String__Split(
                                                                        (System_String_o *)MasterData_object,
                                                                        0x2Cu,
                                                                        0,
                                                                        0LL);
    if ( !MasterData_object )
      goto LABEL_330;
    v59 = MasterData_object;
    if ( !LODWORD(MasterData_object->fields._MasterName_k__BackingField) )
      goto LABEL_470;
    v60 = System_Int32__Parse(*(System_String_o **)&MasterData_object->fields.revision, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4A4AE7A )
    {
      sub_1B863B8(&TerminalPramsManager_TypeInfo, v40);
      byte_4A4AE7A = 1;
    }
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
    }
    HIDWORD(MasterData_object[2].fields.list->fields.items) = v60;
    if ( LODWORD(v59->fields._MasterName_k__BackingField) <= 1 )
      goto LABEL_470;
    v61 = System_Int32__Parse((System_String_o *)v59->fields.list, 0LL);
    if ( !byte_4A4AE7E )
    {
      sub_1B863B8(&TerminalPramsManager_TypeInfo, v40);
      byte_4A4AE7E = 1;
    }
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
    }
    LODWORD(MasterData_object[2].fields.list->fields._monitor) = v61;
    if ( LODWORD(v59->fields._MasterName_k__BackingField) <= 2 )
      goto LABEL_470;
    lookup = (System_String_o *)v59->fields._lookup;
    if ( !bool_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(bool_TypeInfo);
    v63 = System_Boolean__Parse(lookup, 0LL);
    if ( !byte_4A4B11D )
    {
      sub_1B863B8(&TerminalPramsManager_TypeInfo, v40);
      byte_4A4B11D = 1;
    }
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
    }
    BYTE5(MasterData_object[2].fields.list[1].fields.CollectionChanged) = v63;
    if ( LODWORD(v59->fields._MasterName_k__BackingField) <= 3 )
      goto LABEL_470;
    v64 = System_Boolean__Parse((System_String_o *)v59->fields.seriazlier, 0LL);
    if ( !byte_4A4B11E )
    {
      sub_1B863B8(&TerminalPramsManager_TypeInfo, v40);
      byte_4A4B11E = 1;
    }
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
    }
    BYTE6(MasterData_object[2].fields.list[1].fields.CollectionChanged) = v64;
    if ( !byte_4A4B11F )
    {
      sub_1B863B8(&TerminalPramsManager_TypeInfo, v40);
      MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
      byte_4A4B11F = 1;
    }
    if ( !LODWORD(MasterData_object[3].monitor) )
    {
      j_il2cpp_runtime_class_init_0(MasterData_object);
      MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
    }
    if ( BYTE5(MasterData_object[2].fields.list[1].fields.CollectionChanged) )
    {
      if ( !Instance )
        goto LABEL_330;
      v65 = DataManager__GetMasterData_object_(
              (DataManager_o *)Instance,
              (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_WarMaster___);
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4A48E97 )
      {
        sub_1B863B8(&TerminalPramsManager_TypeInfo, v40);
        byte_4A48E97 = 1;
      }
      MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
      }
      if ( !v65 )
        goto LABEL_330;
      QuestId = WarMaster__getByLastQuestId(
                  (WarMaster_o *)v65,
                  HIDWORD(MasterData_object[2].fields.list->fields.items),
                  0LL);
      if ( QuestId )
      {
        v67 = QuestId;
        v68 = BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v68 = BalanceConfig_TypeInfo;
        }
        v70 = System_Linq_Enumerable__Contains_int_(
                (System_Collections_Generic_IEnumerable_TSource__o *)v68->static_fields->MainInterludeMapReturnWarIds,
                v67->fields.id,
                (const MethodInfo_2F884F0 *)Method_System_Linq_Enumerable_Contains_int___);
        cctor_finished = TerminalPramsManager_TypeInfo->_2.cctor_finished;
        if ( v70 )
        {
          if ( !cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          if ( !byte_4A4B120 )
          {
            sub_1B863B8(&TerminalPramsManager_TypeInfo, v69);
            byte_4A4B120 = 1;
          }
          v72 = TerminalPramsManager_TypeInfo;
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            v72 = TerminalPramsManager_TypeInfo;
          }
          v72->static_fields->_IsWarClear_k__BackingField = 0;
        }
        else
        {
          if ( !cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          if ( !byte_4A4B120 )
          {
            sub_1B863B8(&TerminalPramsManager_TypeInfo, v69);
            byte_4A4B120 = 1;
          }
          v73 = TerminalPramsManager_TypeInfo;
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            v73 = TerminalPramsManager_TypeInfo;
          }
          v73->static_fields->_IsWarClear_k__BackingField = 1;
          id = v67->fields.id;
          if ( !byte_4A4AE80 )
          {
            sub_1B863B8(&TerminalPramsManager_TypeInfo, v69);
            v73 = TerminalPramsManager_TypeInfo;
            byte_4A4AE80 = 1;
          }
          if ( !v73->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v73);
            v73 = TerminalPramsManager_TypeInfo;
          }
          v73->static_fields->_WarId_k__BackingField = id;
          v76 = TerminalPramsManager__CheckIsOrdealCallWarClear(v67, 0LL);
          if ( !byte_4A4B121 )
          {
            sub_1B863B8(&TerminalPramsManager_TypeInfo, v75);
            byte_4A4B121 = 1;
          }
          v77 = TerminalPramsManager_TypeInfo;
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            v77 = TerminalPramsManager_TypeInfo;
          }
          v77->static_fields->_IsOrdealCallWarClear_k__BackingField = v76;
        }
      }
    }
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_WarReleaseMaster___);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A4AE79 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v40);
    byte_4A4AE79 = 1;
  }
  MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
  }
  if ( !Master_object )
    goto LABEL_330;
  OpenEntity = WarReleaseMaster__GetOpenEntity(
                 (WarReleaseMaster_o *)Master_object,
                 HIDWORD(MasterData_object[2].fields.list->klass),
                 0LL);
  if ( !byte_4A4B122 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v40);
    byte_4A4B122 = 1;
  }
  MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
  }
  v80 = &qword_4A48000;
  if ( HIBYTE(MasterData_object[2].fields.list[1].fields._blockReentrancyCount) )
  {
    if ( !LODWORD(MasterData_object[3].monitor) )
      j_il2cpp_runtime_class_init_0(MasterData_object);
    if ( !byte_4A4ADC7 )
    {
      sub_1B863B8(&TerminalPramsManager_TypeInfo, v40);
      byte_4A4ADC7 = 1;
    }
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
    }
    v80 = &qword_4A48000;
    if ( !*((_BYTE *)&MasterData_object[2].fields.list[1].fields._blockReentrancyCount + 4) )
      goto LABEL_231;
  }
  if ( !Instance )
    goto LABEL_330;
  v81 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !*((_BYTE *)v80 + 3735) )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v40);
    *((_BYTE *)v80 + 3735) = 1;
  }
  MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
  }
  if ( !v81 )
    goto LABEL_330;
  QuestEntity = QuestMaster__TryGetQuestEntity(
                  (QuestMaster_o *)v81,
                  &entity,
                  HIDWORD(MasterData_object[2].fields.list->fields.items),
                  0LL);
  afterActionVals = 0LL;
  if ( !QuestEntity )
    goto LABEL_232;
  MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)entity;
  if ( !entity )
    goto LABEL_330;
  if ( QuestEntity__IsOpenByTime(entity, 0, 0LL) )
  {
LABEL_187:
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4A4B11C )
    {
      sub_1B863B8(&TerminalPramsManager_TypeInfo, v83);
      byte_4A4B11C = 1;
    }
    v84 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v84 = TerminalPramsManager_TypeInfo;
    }
    if ( v84->static_fields->_IsPhaseClear_k__BackingField )
    {
      v85 = DataManager__GetMasterData_object_(
              (DataManager_o *)Instance,
              (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_QuestPhaseDetailAddMaster___);
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !*((_BYTE *)v80 + 3735) )
      {
        sub_1B863B8(&TerminalPramsManager_TypeInfo, v40);
        *((_BYTE *)v80 + 3735) = 1;
      }
      MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
      }
      items_high = HIDWORD(MasterData_object[2].fields.list->fields.items);
      if ( !byte_4A48E96 )
      {
        sub_1B863B8(&TerminalPramsManager_TypeInfo, v40);
        MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
        byte_4A48E96 = 1;
      }
      if ( !LODWORD(MasterData_object[3].monitor) )
      {
        j_il2cpp_runtime_class_init_0(MasterData_object);
        MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
      }
      if ( !v85 )
        goto LABEL_330;
      afterActionVals = QuestPhaseDetailAddMaster__GetAfterAction(
                          (QuestPhaseDetailAddMaster_o *)v85,
                          items_high,
                          LODWORD(MasterData_object[2].fields.list->fields._monitor) + 1,
                          0LL);
      if ( afterActionVals )
        goto LABEL_232;
      v87 = DataManager__GetMasterData_object_(
              (DataManager_o *)Instance,
              (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_QuestPhaseDetailMaster___);
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !*((_BYTE *)v80 + 3735) )
      {
        sub_1B863B8(&TerminalPramsManager_TypeInfo, v40);
        *((_BYTE *)v80 + 3735) = 1;
      }
      MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
      }
      v88 = HIDWORD(MasterData_object[2].fields.list->fields.items);
      if ( !byte_4A48E96 )
      {
        sub_1B863B8(&TerminalPramsManager_TypeInfo, v40);
        MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
        byte_4A48E96 = 1;
      }
      if ( !LODWORD(MasterData_object[3].monitor) )
      {
        j_il2cpp_runtime_class_init_0(MasterData_object);
        MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
      }
      if ( !v87 )
        goto LABEL_330;
      afterActionVals = QuestPhaseDetailMaster__GetAfterAction(
                          (QuestPhaseDetailMaster_o *)v87,
                          v88,
                          LODWORD(MasterData_object[2].fields.list->fields._monitor) + 1,
                          0LL);
      if ( afterActionVals )
        goto LABEL_232;
      v84 = TerminalPramsManager_TypeInfo;
    }
    if ( !v84->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v84);
    if ( !byte_4A4B11F )
    {
      sub_1B863B8(&TerminalPramsManager_TypeInfo, v83);
      byte_4A4B11F = 1;
    }
    v89 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v89 = TerminalPramsManager_TypeInfo;
    }
    if ( v89->static_fields->_IsQuestClear_k__BackingField )
    {
      if ( !v89->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v89);
      MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager__get_Debug_IsQuestReleaseAll(0LL);
      afterActionVals = 0LL;
      if ( ((unsigned __int8)MasterData_object & 1) == 0 )
      {
        if ( !entity )
          goto LABEL_330;
        afterActionVals = entity->fields.afterActionVals;
      }
      goto LABEL_232;
    }
    goto LABEL_231;
  }
  if ( !OpenEntity )
  {
LABEL_231:
    afterActionVals = 0LL;
    goto LABEL_232;
  }
  afterActionVals = 0LL;
  if ( WarReleaseEntity__IsOpen(OpenEntity, 0LL) )
    goto LABEL_187;
LABEL_232:
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v90 = DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_QuestBehaviorMaster___);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A48E97 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v40);
    byte_4A48E97 = 1;
  }
  MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
  }
  v91 = HIDWORD(MasterData_object[2].fields.list->fields.items);
  if ( !byte_4A48E96 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v40);
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
    byte_4A48E96 = 1;
  }
  if ( !LODWORD(MasterData_object[3].monitor) )
  {
    j_il2cpp_runtime_class_init_0(MasterData_object);
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
  }
  if ( !v90 )
    goto LABEL_330;
  if ( QuestBehaviorMaster__IsOpenQuestBehaviorCond(
         (QuestBehaviorMaster_o *)v90,
         v91,
         LODWORD(MasterData_object[2].fields.list->fields._monitor) + 1,
         7,
         0LL)
    || (IsOverwriteCommandNone = QuestAfterAction__IsOverwriteCommandNone(afterActionVals, (const MethodInfo *)v40),
        !afterActionVals)
    || IsOverwriteCommandNone
    || (v93 = *(_QWORD *)&afterActionVals->max_length, (int)v93 < 2)
    || (v93 & 1) != 0 )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4A4B123 )
    {
      sub_1B863B8(&TerminalPramsManager_TypeInfo, v40);
      byte_4A4B123 = 1;
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
      if ( !byte_4A4907E )
      {
        sub_1B863B8(&TerminalPramsManager_TypeInfo, v40);
        byte_4A4907E = 1;
      }
      v140 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v140 = TerminalPramsManager_TypeInfo;
      }
      v140->static_fields->_IsAutoResume_k__BackingField = 1;
      if ( !byte_4A4AE7C )
      {
        sub_1B863B8(&TerminalPramsManager_TypeInfo, v40);
        v140 = TerminalPramsManager_TypeInfo;
        byte_4A4AE7C = 1;
      }
      if ( !v140->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v140);
        v140 = TerminalPramsManager_TypeInfo;
      }
      v140->static_fields->_DispState_k__BackingField = 2;
      if ( !byte_4A4B123 )
      {
        sub_1B863B8(&TerminalPramsManager_TypeInfo, v40);
        v140 = TerminalPramsManager_TypeInfo;
        byte_4A4B123 = 1;
      }
      if ( !v140->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v140);
        v140 = TerminalPramsManager_TypeInfo;
      }
      BeforeQuestStartWarId_k__BackingField = v140->static_fields->_BeforeQuestStartWarId_k__BackingField;
      if ( !byte_4A4AE80 )
      {
        sub_1B863B8(&TerminalPramsManager_TypeInfo, v40);
        v140 = TerminalPramsManager_TypeInfo;
        byte_4A4AE80 = 1;
      }
      if ( !v140->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v140);
        v140 = TerminalPramsManager_TypeInfo;
      }
      v140->static_fields->_WarId_k__BackingField = BeforeQuestStartWarId_k__BackingField;
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      if ( !byte_4A48DB8 )
      {
        sub_1B863B8(&TerminalSceneComponent_TypeInfo, v40);
        byte_4A48DB8 = 1;
      }
      v142 = TerminalSceneComponent_TypeInfo;
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        v142 = TerminalSceneComponent_TypeInfo;
      }
      MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)v142->static_fields->mInstance;
      if ( !MasterData_object )
        goto LABEL_330;
      TerminalSceneComponent__CallQuestInformationCloseAtAll((TerminalSceneComponent_o *)MasterData_object, 0, 0LL);
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      v143 = DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_WarMaster___);
      if ( !byte_4A4AE79 )
      {
        sub_1B863B8(&TerminalPramsManager_TypeInfo, v40);
        byte_4A4AE79 = 1;
      }
      MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
      }
      if ( !v143 )
        goto LABEL_330;
      if ( DataMasterBase_object__object__int___TryGetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)v143,
             &v160,
             HIDWORD(MasterData_object[2].fields.list->klass),
             (const MethodInfo_32142CC *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__) )
      {
        MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)v160;
        if ( !v160 )
          goto LABEL_330;
        v4->fields.ActionMapTargetId = WarEntity__GetBaseMap((WarEntity_o *)v160, 0LL);
      }
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4A4B124 )
      {
        sub_1B863B8(&TerminalPramsManager_TypeInfo, v40);
        byte_4A4B124 = 1;
      }
      v144 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v144 = TerminalPramsManager_TypeInfo;
      }
      v144->static_fields->_BeforeQuestStartWarId_k__BackingField = 0;
    }
    UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_16474/*"afterActionBk"*/, 0LL);
    return;
  }
  v94 = sub_1B86460(QuestAfterAction_Command___TypeInfo, (unsigned int)v93 >> 1);
  v4->fields.commandBuf = (struct QuestAfterAction_Command_array *)v94;
  p_commandBuf = (unsigned int **)&v4->fields.commandBuf;
  sub_1B8635C((CGThumbnailListItem_o *)&v4->fields.commandBuf, v94, v96, v97);
  commandBuf = (int *)v4->fields.commandBuf;
  if ( !commandBuf )
    goto LABEL_330;
  v158 = 0;
  v99 = 0LL;
  v100 = 0;
  while ( (__int64)v99 < commandBuf[6] )
  {
    v101 = sub_1B86604(QuestAfterAction_Command_TypeInfo);
    System_Object___ctor((Il2CppObject *)v101, 0LL);
    if ( v100 >= afterActionVals->max_length )
      goto LABEL_470;
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)System_Int32__Parse(
                                                                        afterActionVals->m_Items[v100],
                                                                        0LL);
    if ( !v101 )
      goto LABEL_330;
    *(_DWORD *)(v101 + 16) = (_DWORD)MasterData_object;
    v104 = (int)v100 | 1LL;
    if ( (unsigned int)v104 >= afterActionVals->max_length )
      goto LABEL_470;
    v105 = afterActionVals->m_Items[v104];
    *(_QWORD *)(v101 + 24) = v105;
    v106 = (System_String_o **)(v101 + 24);
    sub_1B8635C((CGThumbnailListItem_o *)(v101 + 24), (int32_t)v105, v102, v103);
    if ( !v100 && !v4->fields.isRequestedStopBgm && *(_DWORD *)(v101 + 16) == 850 )
      v4->fields.isRequestedStopBgm = 1;
    if ( (v4->fields.MapMoveBeforeFocusSpotId & 0x80000000) != 0 && *(_DWORD *)(v101 + 16) == 350 )
    {
      MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)*v106;
      if ( !*v106 )
        goto LABEL_330;
      MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)System_String__Split(
                                                                          (System_String_o *)MasterData_object,
                                                                          0x2Cu,
                                                                          0,
                                                                          0LL);
      if ( !MasterData_object )
        goto LABEL_330;
      if ( SLODWORD(MasterData_object->fields._MasterName_k__BackingField) >= 4 )
      {
        MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)System_Int32__Parse(
                                                                            (System_String_o *)MasterData_object->fields.seriazlier,
                                                                            0LL);
        v4->fields.MapMoveBeforeFocusSpotId = (int)MasterData_object;
      }
    }
    v108 = *(_DWORD *)(v101 + 16);
    if ( v4->fields.IsMoveToEventRewardShop || v108 != 700 )
    {
      if ( v108 == 800 )
      {
        MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)QuestAfterAction_Command__GetAvailableRandomVoice(
                                                                            (QuestAfterAction_Command_o *)v101,
                                                                            &svtId,
                                                                            v107);
        if ( MasterData_object )
        {
          svtVoices = (System_Collections_Generic_Dictionary_int__object__o *)v4->fields.svtVoices;
          v110 = svtId;
          v111 = MasterData_object;
          v112 = sub_1B86604(QuestAfterAction_VoiceInfo_TypeInfo);
          System_Object___ctor((Il2CppObject *)v112, 0LL);
          *(_DWORD *)(v112 + 16) = v110;
          *(_QWORD *)(v112 + 24) = v111;
          sub_1B8635C((CGThumbnailListItem_o *)(v112 + 24), (int32_t)v111, v113, v114);
          if ( !svtVoices )
            goto LABEL_330;
          System_Collections_Generic_Dictionary_int__object___Add(
            svtVoices,
            v99,
            (Il2CppObject *)v112,
            (const MethodInfo_326D764 *)Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__Add__);
          p_commandBuf = (unsigned int **)&v4->fields.commandBuf;
        }
      }
    }
    else
    {
      v4->fields.IsMoveToEventRewardShop = 1;
    }
    v115 = *(_DWORD *)(v101 + 16);
    if ( v115 == 702 )
    {
      MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)*v106;
      if ( !*v106 )
        goto LABEL_330;
      MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)System_String__Split_61697188(
                                                                          (System_String_o *)MasterData_object,
                                                                          (System_String_o *)StringLiteral_817/*","*/,
                                                                          0,
                                                                          0LL);
      if ( !MasterData_object )
        goto LABEL_330;
      MasterName_k__BackingField = (System_String_c *)MasterData_object->fields._MasterName_k__BackingField;
      v117 = MasterData_object;
      if ( MasterName_k__BackingField )
      {
        if ( !(_DWORD)MasterName_k__BackingField )
          goto LABEL_470;
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
          if ( !byte_4A4AE79 )
          {
            sub_1B863B8(&TerminalPramsManager_TypeInfo, v40);
            byte_4A4AE79 = 1;
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
      v115 = *(_DWORD *)(v101 + 16);
    }
    if ( v115 <= 205 )
    {
      if ( (unsigned int)(v115 - 100) < 0xF && ((0x7C1Fu >> (v115 - 100)) & 1) != 0 )
      {
        v40 = 0LL;
      }
      else
      {
        if ( (unsigned int)(v115 - 200) > 5 )
          goto LABEL_313;
        v40 = 1LL;
      }
    }
    else if ( v115 <= 550 )
    {
      if ( (unsigned int)(v115 - 400) < 0xD )
      {
        v40 = 2LL;
      }
      else
      {
        if ( v115 != 550 )
          goto LABEL_313;
        v40 = 3LL;
      }
    }
    else
    {
      v121 = v115 - 1000;
      if ( v121 >= 0xD || ((0x1C07u >> v121) & 1) == 0 )
        goto LABEL_313;
      v40 = 4LL;
    }
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)v4->fields.commandTypeIds;
    if ( !MasterData_object )
      goto LABEL_330;
    Item = (System_Collections_Generic_List_int__o *)System_Collections_Generic_Dictionary_Int32Enum__object___get_Item(
                                                       (System_Collections_Generic_Dictionary_TKey__TValue__o *)MasterData_object,
                                                       v40,
                                                       (const MethodInfo_329E458 *)Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___get_Item__);
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)QuestAfterAction__ExtractCommandTargetId(
                                                                        (QuestAfterAction_Command_o *)v101,
                                                                        v123);
    if ( !Item )
      goto LABEL_330;
    items = Item->fields._items;
    v125 = Method_System_Collections_Generic_List_int__Add__;
    ++Item->fields._version;
    if ( !items )
      goto LABEL_330;
    size = Item->fields._size;
    v40 = (unsigned int)MasterData_object;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_int___AddWithResize(
        Item,
        (int32_t)MasterData_object,
        *(const MethodInfo_35DF934 **)(*(_QWORD *)(v125[4] + 192LL) + 112LL));
    }
    else
    {
      Item->fields._size = size + 1;
      items->m_Items[size + 1] = (int)MasterData_object;
    }
LABEL_313:
    if ( v4->fields.ActionMapTargetId <= 0 )
      QuestAfterAction__SetActionMap(v4, (QuestAfterAction_Command_o *)v101, v107);
    if ( *(_DWORD *)(v101 + 16) == 102 )
    {
      v127 = (QuestAfterAction_o *)System_Int32__Parse(*v106, 0LL);
      MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)QuestAfterAction__GetMapGimmickId(
                                                                          v127,
                                                                          (int32_t)v127,
                                                                          v128);
      if ( !MasterData_object )
        goto LABEL_330;
      v129 = (System_String_c *)MasterData_object->fields._MasterName_k__BackingField;
      v130 = MasterData_object;
      if ( (int)v129 >= 1 )
      {
        v131 = 0LL;
        while ( v131 < (unsigned int)v129 )
        {
          MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)v4->fields.invalidMapGimmickIdList;
          if ( !MasterData_object )
            goto LABEL_330;
          v40 = *((unsigned int *)&v130->fields.revision + v131);
          v132 = *(System_String_Fields *)&MasterData_object->fields._MasterKind_k__BackingField;
          v133 = Method_System_Collections_Generic_List_int__Add__;
          ++HIDWORD(MasterData_object->fields._MasterName_k__BackingField);
          if ( !*(_QWORD *)&v132 )
            goto LABEL_330;
          MasterName_k__BackingField_low = SLODWORD(MasterData_object->fields._MasterName_k__BackingField);
          if ( (unsigned int)MasterName_k__BackingField_low >= *(_DWORD *)(*(_QWORD *)&v132 + 24LL) )
          {
            System_Collections_Generic_List_int___AddWithResize(
              (System_Collections_Generic_List_int__o *)MasterData_object,
              v40,
              *(const MethodInfo_35DF934 **)(*(_QWORD *)(v133[4] + 192LL) + 112LL));
          }
          else
          {
            LODWORD(MasterData_object->fields._MasterName_k__BackingField) = MasterName_k__BackingField_low + 1;
            *(_DWORD *)(*(_QWORD *)&v132 + 4 * MasterName_k__BackingField_low + 32) = v40;
          }
          LODWORD(v129) = v130->fields._MasterName_k__BackingField;
          if ( (__int64)++v131 >= (int)v129 )
            goto LABEL_326;
        }
LABEL_470:
        sub_1B8661C(MasterData_object, v40);
      }
    }
LABEL_326:
    v135 = *p_commandBuf;
    if ( !*p_commandBuf )
      goto LABEL_330;
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)sub_1B864F4(
                                                                        v101,
                                                                        *(_QWORD *)(*(_QWORD *)v135 + 64LL));
    if ( !MasterData_object )
    {
      v157 = sub_1B86638();
      sub_1B864E0(v157, 0LL);
    }
    if ( v99 >= v135[6] )
      goto LABEL_470;
    v138 = &v135[2 * v99];
    *((_QWORD *)v138 + 4) = v101;
    sub_1B8635C((CGThumbnailListItem_o *)(v138 + 8), v101, v136, v137);
    commandBuf = (int *)*p_commandBuf;
    v100 += 2;
    ++v99;
    if ( !*p_commandBuf )
      goto LABEL_330;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A4B11C )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v40);
    byte_4A4B11C = 1;
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
    v146 = DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_QuestMaster___);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4A48E97 )
    {
      sub_1B863B8(&TerminalPramsManager_TypeInfo, v40);
      byte_4A48E97 = 1;
    }
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
    }
    if ( !v146 )
      goto LABEL_330;
    if ( QuestMaster__TryGetQuestEntity(
           (QuestMaster_o *)v146,
           &v163,
           HIDWORD(MasterData_object[2].fields.list->fields.items),
           0LL) )
    {
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4A4AE79 )
      {
        sub_1B863B8(&TerminalPramsManager_TypeInfo, v40);
        byte_4A4AE79 = 1;
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
        MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_BlankEarthSpotMaster___);
        if ( v163 && MasterData_object )
        {
          MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__int___TryGetEntity(
                                                                              MasterData_object,
                                                                              &v162,
                                                                              v163->fields.spotId,
                                                                              (const MethodInfo_32142CC *)Method_DataMasterBase_BlankEarthSpotMaster__BlankEarthSpotEntity__int__TryGetEntity__);
          if ( ((unsigned __int8)MasterData_object & 1) == 0 )
            goto LABEL_420;
          if ( v162 )
          {
            v150 = (int32_t)v162[1].klass;
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            if ( !byte_4A4B125 )
            {
              sub_1B863B8(&TerminalPramsManager_TypeInfo, v40);
              byte_4A4B125 = 1;
            }
            v151 = TerminalPramsManager_TypeInfo;
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
              v151 = TerminalPramsManager_TypeInfo;
            }
            v151->static_fields->_BlankEarthAfterActionFocusSpotId_k__BackingField = v150;
            goto LABEL_420;
          }
        }
LABEL_330:
        sub_1B86614(MasterData_object, v40);
      }
    }
  }
LABEL_420:
  v152 = TerminalPramsManager_TypeInfo;
  if ( (v158 & 1) == 0 )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4A4907E )
    {
      sub_1B863B8(&TerminalPramsManager_TypeInfo, v40);
      byte_4A4907E = 1;
    }
    v153 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v153 = TerminalPramsManager_TypeInfo;
    }
    v153->static_fields->_IsAutoResume_k__BackingField = 1;
    if ( !byte_4A4AE7C )
    {
      sub_1B863B8(&TerminalPramsManager_TypeInfo, v40);
      v153 = TerminalPramsManager_TypeInfo;
      byte_4A4AE7C = 1;
    }
    if ( !v153->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v153);
      v153 = TerminalPramsManager_TypeInfo;
    }
    v153->static_fields->_DispState_k__BackingField = 2;
    if ( !byte_4A4AE79 )
    {
      sub_1B863B8(&TerminalPramsManager_TypeInfo, v40);
      v153 = TerminalPramsManager_TypeInfo;
      byte_4A4AE79 = 1;
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
      goto LABEL_474;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4A4ADC7 )
    {
      sub_1B863B8(&TerminalPramsManager_TypeInfo, v40);
      byte_4A4ADC7 = 1;
    }
    v152 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v152 = TerminalPramsManager_TypeInfo;
    }
    if ( v152->static_fields->_IsOrdealCallWarClear_k__BackingField )
    {
LABEL_474:
      if ( !v152->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v152);
      if ( !byte_4A4ADC8 )
      {
        sub_1B863B8(&TerminalPramsManager_TypeInfo, v40);
        byte_4A4ADC8 = 1;
      }
      v152 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v152 = TerminalPramsManager_TypeInfo;
      }
      v152->static_fields->_BlankEarthSpotId_k__BackingField = 0;
      if ( !byte_4A4ADC7 )
      {
        sub_1B863B8(&TerminalPramsManager_TypeInfo, v40);
        v152 = TerminalPramsManager_TypeInfo;
        byte_4A4ADC7 = 1;
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
        if ( !byte_4A4AE7C )
        {
          sub_1B863B8(&TerminalPramsManager_TypeInfo, v40);
          byte_4A4AE7C = 1;
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
  if ( !byte_4A4AE7F )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v40);
    byte_4A4AE7F = 1;
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

  if ( (byte_4A4B0F3 & 1) == 0 )
  {
    sub_1B863B8(&StringLiteral_16474/*"afterActionBk"*/, v1);
    byte_4A4B0F3 = 1;
  }
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_16474/*"afterActionBk"*/, 0LL);
}


int32_t __fastcall QuestAfterAction__ExtractCommandTargetId(
        QuestAfterAction_Command_o *command,
        const MethodInfo *method)
{
  QuestAfterAction_Command_o *v2; // x19
  QuestAfterAction_Command_c *param; // x8

  v2 = command;
  if ( (byte_4A4B0F7 & 1) == 0 )
  {
    command = (QuestAfterAction_Command_o *)sub_1B863B8(&StringLiteral_817/*","*/, method);
    byte_4A4B0F7 = 1;
  }
  if ( !v2 )
    goto LABEL_11;
  command = (QuestAfterAction_Command_o *)v2->fields.param;
  if ( !command )
    goto LABEL_11;
  command = (QuestAfterAction_Command_o *)System_String__Contains(
                                            (System_String_o *)command,
                                            (System_String_o *)StringLiteral_817/*","*/,
                                            0LL);
  param = (QuestAfterAction_Command_c *)v2->fields.param;
  if ( ((unsigned __int8)command & 1) == 0 )
    return System_Int32__Parse((System_String_o *)param, 0LL);
  if ( !param || (command = (QuestAfterAction_Command_o *)System_String__Split(v2->fields.param, 0x2Cu, 0, 0LL)) == 0LL )
LABEL_11:
    sub_1B86614(command, method);
  if ( !LODWORD(command->fields.param) )
    sub_1B8661C(command, method);
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

  if ( (byte_4A4B104 & 1) == 0 )
  {
    sub_1B863B8(&QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__83_TypeInfo, commandEnumerable);
    byte_4A4B104 = 1;
  }
  v5 = sub_1B86604(QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__83_TypeInfo);
  QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__83___ctor(
    (QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__83_o *)v5,
    -2,
    0LL);
  if ( !v5 )
    sub_1B86614(v6, v7);
  *(_QWORD *)(v5 + 56) = this;
  sub_1B8635C((CGThumbnailListItem_o *)(v5 + 56), (int32_t)this, v8, v9);
  *(_QWORD *)(v5 + 48) = commandEnumerable;
  sub_1B8635C((CGThumbnailListItem_o *)(v5 + 48), (int32_t)commandEnumerable, v10, v11);
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
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  System_String_o *v20; // x1
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  __int64 v24; // x0

  if ( (byte_4A4B0F8 & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Array_Empty_QuestAfterAction_Command___, method);
    sub_1B863B8(&QuestAfterAction_Command___TypeInfo, v3);
    sub_1B863B8(&QuestAfterAction_Command_TypeInfo, v4);
    byte_4A4B0F8 = 1;
  }
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)actionVals, 0LL);
  if ( (IsNullOrEmpty & 1) != 0 )
  {
    v8 = Method_System_Array_Empty_QuestAfterAction_Command___;
    v9 = *((_QWORD *)Method_System_Array_Empty_QuestAfterAction_Command___ + 7);
    if ( !v9 )
    {
      sub_1BD6AA4(Method_System_Array_Empty_QuestAfterAction_Command___);
      v9 = v8[7];
    }
    v10 = *(_QWORD *)(v9 + 16);
    if ( (*(_BYTE *)(v10 + 309) & 1) == 0 )
      v10 = sub_1BD6A48(inited);
    if ( !*(_DWORD *)(v10 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v10);
    v11 = *(_QWORD *)(v8[7] + 16LL);
    if ( (*(_BYTE *)(v11 + 309) & 1) == 0 )
      v11 = sub_1BD6A48(inited);
    return **(QuestAfterAction_Command_array ***)(v11 + 184);
  }
  else
  {
    if ( !actionVals
      || (IsNullOrEmpty = sub_1B86460(
                            QuestAfterAction_Command___TypeInfo,
                            (unsigned int)((signed int)actionVals->max_length / 2))) == 0 )
    {
LABEL_25:
      sub_1B86614(IsNullOrEmpty, v6);
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
        v17 = sub_1B86604(QuestAfterAction_Command_TypeInfo);
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
        sub_1B8635C((CGThumbnailListItem_o *)(v17 + 24), (int32_t)v20, v18, v19);
        IsNullOrEmpty = sub_1B864F4(v17, v12->obj.klass->_1.element_class);
        if ( !IsNullOrEmpty )
        {
          v24 = sub_1B86638();
          sub_1B864E0(v24, 0LL);
        }
        if ( v14 >= v12->max_length )
LABEL_24:
          sub_1B8661C(IsNullOrEmpty, v6);
        *(_QWORD *)(v15 + 8 * v14) = v17;
        sub_1B8635C((CGThumbnailListItem_o *)(v15 + v13), v17, v21, v22);
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

  if ( (byte_4A4B10F & 1) == 0 )
  {
    sub_1B863B8(&Method_DataManager_GetMasterData_QuestMaster___, *(_QWORD *)&phase);
    sub_1B863B8(&Method_DataManager_GetMasterData_QuestPhaseDetailAddMaster___, v5);
    sub_1B863B8(&Method_DataManager_GetMasterData_QuestPhaseDetailMaster___, v6);
    sub_1B863B8(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v7);
    sub_1B863B8(&Method_System_Linq_Enumerable_Any_string___, v8);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v10);
    byte_4A4B10F = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_33;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_QuestPhaseDetailAddMaster___);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A48E97 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v12);
    byte_4A48E97 = 1;
  }
  Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  }
  v14 = *(_DWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 20LL);
  if ( !byte_4A48E96 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v12);
    Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
    byte_4A48E96 = 1;
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
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_33;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_QuestPhaseDetailMaster___);
  if ( !Instance )
    goto LABEL_33;
  result = QuestPhaseDetailMaster__GetAfterAction((QuestPhaseDetailMaster_o *)Instance, questId, phase, 0LL);
  if ( result )
    return result;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_33;
  v19 = DataManager__GetMasterData_object_(
          Instance,
          (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A48E97 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v12);
    byte_4A48E97 = 1;
  }
  Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  }
  if ( !v19 )
LABEL_33:
    sub_1B86614(Instance, v12);
  result = (System_String_array *)DataMasterBase_object__object__int___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)v19,
                                    *(_DWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 20LL),
                                    (const MethodInfo_3214280 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
  if ( result )
  {
    v20 = result;
    if ( System_Linq_Enumerable__Any_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)result->m_Items[8],
           (const MethodInfo_2F7B8DC *)Method_System_Linq_Enumerable_Any_string___) )
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

  if ( (byte_4A4B10E & 1) == 0 )
  {
    sub_1B863B8(&Method_DataManager_GetMasterData_QuestMaster___, *(_QWORD *)&phase);
    sub_1B863B8(&Method_DataManager_GetMasterData_QuestPhaseDetailAddMaster___, v5);
    sub_1B863B8(&Method_DataManager_GetMasterData_QuestPhaseDetailMaster___, v6);
    sub_1B863B8(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v7);
    sub_1B863B8(&Method_System_Linq_Enumerable_Any_string___, v8);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v10);
    byte_4A4B10E = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_33;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_QuestPhaseDetailAddMaster___);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A48E97 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v12);
    byte_4A48E97 = 1;
  }
  Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  }
  v14 = *(_DWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 20LL);
  if ( !byte_4A48E96 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v12);
    Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
    byte_4A48E96 = 1;
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
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_33;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_QuestPhaseDetailMaster___);
  if ( !Instance )
    goto LABEL_33;
  result = QuestPhaseDetailMaster__GetBeforeAction((QuestPhaseDetailMaster_o *)Instance, questId, phase, 0LL);
  if ( result )
    return result;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_33;
  v19 = DataManager__GetMasterData_object_(
          Instance,
          (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A48E97 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v12);
    byte_4A48E97 = 1;
  }
  Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  }
  if ( !v19 )
LABEL_33:
    sub_1B86614(Instance, v12);
  result = (System_String_array *)DataMasterBase_object__object__int___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)v19,
                                    *(_DWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 20LL),
                                    (const MethodInfo_3214280 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
  if ( result )
  {
    v20 = result;
    if ( System_Linq_Enumerable__Any_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)result->m_Items[7],
           (const MethodInfo_2F7B8DC *)Method_System_Linq_Enumerable_Any_string___) )
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
        return dword_BFBB34[commandId - 1000];
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
        const MethodInfo_3002668 *method)
{
  UnityEngine_Object_o *MapGameObject; // x20
  _BOOL8 v11; // x0
  __int64 v12; // x1

  if ( !method->rgctx_data )
  {
    sub_1B863B8(&UnityEngine_Object_TypeInfo, *(_QWORD *)&comType);
    if ( !method->rgctx_data )
      sub_1BD6AA4();
  }
  MapGameObject = (UnityEngine_Object_o *)QuestAfterAction__GetMapGameObject(this, comType, id, state, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v11 = UnityEngine_Object__op_Equality(MapGameObject, 0LL, 0LL);
  if ( v11 )
    return 0LL;
  if ( !MapGameObject )
    sub_1B86614(v11, v12);
  return UnityEngine_GameObject__GetComponent_object_(
           (UnityEngine_GameObject_o *)MapGameObject,
           (const MethodInfo_2FC0DF0 *)method->rgctx_data->_0_UnityEngine_GameObject_GetComponent_T_);
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
  if ( (byte_4A4B10A & 1) == 0 )
  {
    sub_1B863B8(&UnityEngine_Object_TypeInfo, *(_QWORD *)&comType);
    this = (QuestAfterAction_o *)sub_1B863B8(&SrcSpotBasePrefab_TypeInfo, v9);
    byte_4A4B10A = 1;
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
        sub_1B86614(this, *(_QWORD *)&comType);
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
  int max_length; // w8
  System_Object_array *v14; // x21
  unsigned int v15; // w23
  Il2CppClass **v16; // x8
  Il2CppClass *v17; // x22
  struct System_Int32_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10

  if ( (byte_4A4B0F9 & 1) == 0 )
  {
    sub_1B863B8(&Method_DataManager_GetMasterData_MapGimmickMaster___, *(_QWORD *)&spotId);
    sub_1B863B8(&Method_DataMasterBase_MapGimmickMaster__MapGimmickEntity__int__getEntitys__, v4);
    sub_1B863B8(&Method_System_Collections_Generic_List_int__Add__, v5);
    sub_1B863B8(&Method_System_Collections_Generic_List_int__ToArray__, v6);
    sub_1B863B8(&Method_System_Collections_Generic_List_int___ctor__, v7);
    sub_1B863B8(&System_Collections_Generic_List_int__TypeInfo, v8);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_4A4B0F9 = 1;
  }
  v10 = (System_Collections_Generic_List_int__o *)sub_1B86604(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v10,
    (const MethodInfo_35DF0E0 *)Method_System_Collections_Generic_List_int___ctor__);
  Instance = (System_Object_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  Instance = (System_Object_array *)DataManager__GetMasterData_object_(
                                      (DataManager_o *)Instance,
                                      (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_MapGimmickMaster___);
  if ( !Instance )
    goto LABEL_19;
  Instance = DataMasterBase_object__object__int___getEntitys(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
               (const MethodInfo_3213504 *)Method_DataMasterBase_MapGimmickMaster__MapGimmickEntity__int__getEntitys__);
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
        sub_1B8661C(Instance, name_low);
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
            *(const MethodInfo_35DF934 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
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
    sub_1B86614(Instance, name_low);
  }
LABEL_17:
  if ( !v10 )
    goto LABEL_19;
  return System_Collections_Generic_List_int___ToArray(
           v10,
           (const MethodInfo_35E13EC *)Method_System_Collections_Generic_List_int__ToArray__);
}


int32_t __fastcall QuestAfterAction__GetState(QuestAfterAction_o *this, const MethodInfo *method)
{
  struct CStateManager_QuestAfterAction__o *fsm; // x8

  if ( (byte_4A4B108 & 1) == 0 )
  {
    sub_1B863B8(&Method_CStateManager_QuestAfterAction__getState__, method);
    byte_4A4B108 = 1;
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

  if ( (byte_4A4B0F4 & 1) == 0 )
  {
    sub_1B863B8(&Method_CStateManager_QuestAfterAction___ctor__, method);
    sub_1B863B8(&Method_CStateManager_QuestAfterAction__add__, v4);
    sub_1B863B8(&CStateManager_QuestAfterAction__TypeInfo, v5);
    sub_1B863B8(
      &Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___ContainsKey__,
      v6);
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___get_Item__, v7);
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___set_Item__, v8);
    sub_1B863B8(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___, v9);
    sub_1B863B8(&Method_System_Collections_Generic_List_int__Clear__, v10);
    sub_1B863B8(&Method_System_Collections_Generic_List_int___ctor__, v11);
    sub_1B863B8(&System_Collections_Generic_List_int__TypeInfo, v12);
    sub_1B863B8(&QuestAfterAction_StateAdditional_TypeInfo, v13);
    sub_1B863B8(&QuestAfterAction_StateInstant_TypeInfo, v14);
    sub_1B863B8(&QuestAfterAction_StateMain_TypeInfo, v15);
    sub_1B863B8(&QuestAfterAction_StateNone_TypeInfo, v16);
    byte_4A4B0F4 = 1;
  }
  p_fsm = &this->fields.fsm;
  if ( !this->fields.fsm )
  {
    v18 = (CStateManager_T__o *)sub_1B86604(CStateManager_QuestAfterAction__TypeInfo);
    CStateManager_object____ctor(
      v18,
      (Il2CppObject *)this,
      4,
      (const MethodInfo_31A3368 *)Method_CStateManager_QuestAfterAction___ctor__);
    this->fields.fsm = (struct CStateManager_QuestAfterAction__o *)v18;
    sub_1B8635C((CGThumbnailListItem_o *)&this->fields.fsm, (int32_t)v18, v19, v20);
    fsm = (CStateManager_T__o *)this->fields.fsm;
    v22 = (Il2CppObject *)sub_1B86604(QuestAfterAction_StateNone_TypeInfo);
    System_Object___ctor(v22, 0LL);
    if ( !fsm )
      goto LABEL_21;
    CStateManager_object___add(
      fsm,
      0,
      (IState_T__o *)v22,
      (const MethodInfo_31A3410 *)Method_CStateManager_QuestAfterAction__add__);
    v25 = (CStateManager_T__o *)*p_fsm;
    v26 = (Il2CppObject *)sub_1B86604(QuestAfterAction_StateMain_TypeInfo);
    System_Object___ctor(v26, 0LL);
    if ( !v25 )
      goto LABEL_21;
    CStateManager_object___add(
      v25,
      1,
      (IState_T__o *)v26,
      (const MethodInfo_31A3410 *)Method_CStateManager_QuestAfterAction__add__);
    v27 = (CStateManager_T__o *)*p_fsm;
    v28 = (QuestAfterAction_StateAdditional_o *)sub_1B86604(QuestAfterAction_StateAdditional_TypeInfo);
    QuestAfterAction_StateAdditional___ctor(v28, 0LL);
    if ( !v27 )
      goto LABEL_21;
    CStateManager_object___add(
      v27,
      2,
      (IState_T__o *)v28,
      (const MethodInfo_31A3410 *)Method_CStateManager_QuestAfterAction__add__);
    v29 = (CStateManager_T__o *)*p_fsm;
    v30 = (QuestAfterAction_StateInstant_o *)sub_1B86604(QuestAfterAction_StateInstant_TypeInfo);
    QuestAfterAction_StateInstant___ctor(v30, 0LL);
    if ( !v29 )
      goto LABEL_21;
    CStateManager_object___add(
      v29,
      3,
      (IState_T__o *)v30,
      (const MethodInfo_31A3410 *)Method_CStateManager_QuestAfterAction__add__);
  }
  QuestAfterAction__SetState(this, 0, v2);
  this->fields.commandBuf = 0LL;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.commandBuf, 0, v31, v32);
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
                                                                                (const MethodInfo_329E6EC *)Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___ContainsKey__);
    v34 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.commandTypeIds;
    if ( ((unsigned __int8)commandTypeIds & 1) != 0 )
    {
      if ( !v34 )
        goto LABEL_21;
      commandTypeIds = (System_Collections_Generic_Dictionary_TKey__TValue__o *)System_Collections_Generic_Dictionary_Int32Enum__object___get_Item(
                                                                                  (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.commandTypeIds,
                                                                                  v33,
                                                                                  (const MethodInfo_329E458 *)Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___get_Item__);
      if ( !commandTypeIds )
        goto LABEL_21;
      v35 = HIDWORD(commandTypeIds->fields._entries) + 1;
      LODWORD(commandTypeIds->fields._entries) = 0;
      HIDWORD(commandTypeIds->fields._entries) = v35;
    }
    else
    {
      v36 = (System_Collections_Generic_List_int__o *)sub_1B86604(System_Collections_Generic_List_int__TypeInfo);
      System_Collections_Generic_List_int____ctor(
        v36,
        (const MethodInfo_35DF0E0 *)Method_System_Collections_Generic_List_int___ctor__);
      if ( !v34 )
        goto LABEL_21;
      System_Collections_Generic_Dictionary_Int32Enum__object___set_Item(
        v34,
        v33,
        (Il2CppObject *)v36,
        (const MethodInfo_329E4E4 *)Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___set_Item__);
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
                             (const MethodInfo_2FC0DF0 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___),
        this->fields.screenCollider = (struct UnityEngine_BoxCollider_o *)Component_object,
        sub_1B8635C((CGThumbnailListItem_o *)&this->fields.screenCollider, (int32_t)Component_object, v38, v39),
        (commandTypeIds = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.screenCollider) == 0LL) )
  {
LABEL_21:
    sub_1B86614(commandTypeIds, v24);
  }
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)commandTypeIds, 0, 0LL);
  this->fields.lastDispSpot = 0LL;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.lastDispSpot, 0, v40, v41);
  v42 = (System_Collections_Generic_List_int__o *)sub_1B86604(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v42,
    (const MethodInfo_35DF0E0 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.invalidMapGimmickIdList = v42;
  p_invalidMapGimmickIdList = &this->fields.invalidMapGimmickIdList;
  sub_1B8635C((CGThumbnailListItem_o *)p_invalidMapGimmickIdList, (int32_t)v42, v44, v45);
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

  if ( (byte_4A4B0FC & 1) == 0 )
  {
    sub_1B863B8(
      &Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___ContainsKey__,
      *(_QWORD *)&commandType);
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___get_Item__, v7);
    sub_1B863B8(&Method_System_Collections_Generic_List_int__Contains__, v8);
    byte_4A4B0FC = 1;
  }
  commandTypeIds = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.commandTypeIds;
  if ( !commandTypeIds )
    goto LABEL_9;
  if ( System_Collections_Generic_Dictionary_Int32Enum__object___ContainsKey(
         commandTypeIds,
         commandType,
         (const MethodInfo_329E6EC *)Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___ContainsKey__) )
  {
    commandTypeIds = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.commandTypeIds;
    if ( commandTypeIds )
    {
      commandTypeIds = (System_Collections_Generic_Dictionary_TKey__TValue__o *)System_Collections_Generic_Dictionary_Int32Enum__object___get_Item(
                                                                                  commandTypeIds,
                                                                                  commandType,
                                                                                  (const MethodInfo_329E458 *)Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___get_Item__);
      if ( commandTypeIds )
        return System_Collections_Generic_List_int___Contains(
                 (System_Collections_Generic_List_int__o *)commandTypeIds,
                 commandTypeId,
                 (const MethodInfo_35DFCAC *)Method_System_Collections_Generic_List_int__Contains__);
    }
LABEL_9:
    sub_1B86614(commandTypeIds, *(_QWORD *)&commandType);
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
      sub_1B8661C(this, *(_QWORD *)&spotId);
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
    sub_1B86614(this, *(_QWORD *)&spotId);
  }
  return v8;
}


bool __fastcall QuestAfterAction__IsExistTerminalTransition(QuestAfterAction_o *this, const MethodInfo *method)
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
    v4 = 0LL;
    m_Items = commandBuf->m_Items;
    do
    {
      if ( (unsigned int)v4 >= max_length )
        sub_1B8661C(this, method);
      v6 = m_Items[v4];
      if ( !v6 )
        sub_1B86614(this, method);
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


bool __fastcall QuestAfterAction__IsGimmickDispCommand(int32_t cmd, const MethodInfo *method)
{
  return (cmd & 0xFFFFFFFD) == 401;
}


bool __fastcall QuestAfterAction__IsMapChangeable(QuestAfterAction_o *this, const MethodInfo *method)
{
  ScrTerminalMap_o *v2; // x0
  UnityEngine_GameObject_c *klass; // x8

  if ( (byte_4A4B10D & 1) == 0 )
  {
    sub_1B863B8(&TerminalSceneComponent_TypeInfo, method);
    byte_4A4B10D = 1;
  }
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4A48DB8 )
  {
    sub_1B863B8(&TerminalSceneComponent_TypeInfo, method);
    byte_4A48DB8 = 1;
  }
  v2 = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v2 = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
  }
  klass = v2->fields.subRootGimmickP->klass;
  if ( !klass || (v2 = *(ScrTerminalMap_o **)&klass->_2.thread_static_fields_offset) == 0LL )
    sub_1B86614(v2, method);
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
        sub_1B8661C(actionCommand, method);
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

  if ( (byte_4A4B108 & 1) == 0 )
  {
    sub_1B863B8(&Method_CStateManager_QuestAfterAction__getState__, method);
    byte_4A4B108 = 1;
  }
  fsm = this->fields.fsm;
  return fsm && fsm->fields.m_state == 1;
}


bool __fastcall QuestAfterAction__IsPlayingAction(QuestAfterAction_o *this, const MethodInfo *method)
{
  struct CStateManager_QuestAfterAction__o *fsm; // x8

  if ( (byte_4A4B108 & 1) == 0 )
  {
    sub_1B863B8(&Method_CStateManager_QuestAfterAction__getState__, method);
    byte_4A4B108 = 1;
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
  struct QuestAfterAction_Command_array *commandBuf; // x10
  int32_t commandIdx; // w8
  signed int max_length; // w9
  __int64 v5; // x10
  bool result; // w0
  int v7; // w11

  commandBuf = this->fields.commandBuf;
  if ( !commandBuf )
    return 0;
  commandIdx = this->fields.commandIdx;
  max_length = commandBuf->max_length;
  if ( commandIdx >= max_length )
    return 0;
  v5 = (__int64)&commandBuf->m_Items[commandIdx];
  result = 1;
  while ( 1 )
  {
    if ( commandIdx >= (unsigned int)max_length )
      sub_1B8661C(1LL, method);
    if ( !*(_QWORD *)v5 )
      sub_1B86614(1LL, method);
    v7 = *(_DWORD *)(*(_QWORD *)v5 + 16LL);
    if ( v7 == 405 || v7 == 520 )
      break;
    ++commandIdx;
    v5 += 8LL;
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

  if ( (byte_4A4B100 & 1) == 0 )
  {
    sub_1B863B8(&Method_DataManager_GetMasterData_EventMaster___, method);
    sub_1B863B8(&Method_DataManager_GetMasterData_EventMissionActionAddMaster___, v2);
    sub_1B863B8(&Method_DataManager_GetMasterData_EventMissionActionMaster___, v3);
    sub_1B863B8(&Method_DataManager_GetMasterData_EventMissionMaster___, v4);
    sub_1B863B8(&Method_DataManager_GetMaster_EventMaster___, v5);
    sub_1B863B8(&Method_DataManager_GetMaster_ShopActionMaster___, v6);
    sub_1B863B8(&Method_DataManager_GetMaster_ShopMaster___, v7);
    sub_1B863B8(&DataManager_TypeInfo, v8);
    sub_1B863B8(&Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__, v9);
    sub_1B863B8(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v10);
    sub_1B863B8(&Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__GetEntity__, v11);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_ShopActionEntity__Dispose__, v12);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_ShopActionEntity__MoveNext__, v13);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_ShopActionEntity__get_Current__, v14);
    sub_1B863B8(&EventMissionActionInfo_TypeInfo, v15);
    sub_1B863B8(&Method_System_Collections_Generic_List_ShopActionEntity__GetEnumerator__, v16);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v18);
    sub_1B863B8(&TerminalSceneComponent_TypeInfo, v19);
    byte_4A4B100 = 1;
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
  if ( !byte_4A48DB8 )
  {
    sub_1B863B8(&TerminalSceneComponent_TypeInfo, v21);
    byte_4A48DB8 = 1;
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
      Master_object = (char *)DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_ShopMaster___);
      if ( !Master_object )
        goto LABEL_67;
      Entity = DataMasterBase_object__object__int___GetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                 v22->fields.shopId,
                 (const MethodInfo_3214280 *)Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__);
      if ( Entity )
      {
        v30 = Entity;
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Master_object = (char *)DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_EventMaster___);
        if ( !Master_object )
          goto LABEL_67;
        v31 = DataMasterBase_object__object__int___GetEntity(
                (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                (int32_t)v30[1].monitor,
                (const MethodInfo_3214280 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
        if ( !v31 || !EventEntity__IsEventPeriod((EventEntity_o *)v31, 0LL, 0LL) )
          goto LABEL_66;
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Master_object = (char *)DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_ShopActionMaster___);
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
          (const MethodInfo_35FD450 *)Method_System_Collections_Generic_List_ShopActionEntity__GetEnumerator__);
        v55 = v54;
        while ( 1 )
        {
          v32 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v55,
                  (const MethodInfo_3398634 *)Method_System_Collections_Generic_List_Enumerator_ShopActionEntity__MoveNext__);
          if ( !v32 )
            break;
          current = v55.fields._current;
          if ( !v55.fields._current )
            sub_1B86614(v32, v33);
          if ( LODWORD(v55.fields._current[1].monitor) == 4 )
          {
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            if ( !byte_4A4B126 )
            {
              sub_1B863B8(&TerminalPramsManager_TypeInfo, v33);
              byte_4A4B126 = 1;
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
              sub_1B86614(0LL, v36);
            klass = current[2].klass;
            TransitionInfo_k__BackingField->fields.afterActionVals = (struct System_String_array *)klass;
            sub_1B8635C(
              (CGThumbnailListItem_o *)&TransitionInfo_k__BackingField->fields.afterActionVals,
              (int32_t)klass,
              v37,
              v38);
            v43 = v24->fields._TransitionInfo_k__BackingField;
            if ( !v43 )
              sub_1B86614(v41, v42);
            v43->fields.optionId = (int32_t)current[2].monitor;
            break;
          }
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v55,
          (const MethodInfo_3398630 *)Method_System_Collections_Generic_List_Enumerator_ShopActionEntity__Dispose__);
      }
    }
  }
  else
  {
    Master_object = (char *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Master_object )
      goto LABEL_67;
    v25 = (DataManager_o *)Master_object;
    Master_object = (char *)DataManager__GetMasterData_object_(
                              (DataManager_o *)Master_object,
                              (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_EventMissionActionAddMaster___);
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
      v28 = (EventMissionActionInfo_o *)sub_1B86604(EventMissionActionInfo_TypeInfo);
      EventMissionActionInfo___ctor_43015152(v28, v27, 0LL);
    }
    else
    {
      Master_object = (char *)DataManager__GetMasterData_object_(
                                v25,
                                (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_EventMissionActionMaster___);
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
      v28 = (EventMissionActionInfo_o *)sub_1B86604(EventMissionActionInfo_TypeInfo);
      EventMissionActionInfo___ctor(v28, v45, 0LL);
    }
    Master_object = (char *)DataManager__GetMasterData_object_(
                              v25,
                              (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_EventMissionMaster___);
    if ( !Master_object )
      goto LABEL_67;
    v46 = DataMasterBase_object__object__int___GetEntity(
            (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
            v22->fields.missionId,
            (const MethodInfo_3214280 *)Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__GetEntity__);
    if ( v46 )
    {
      v47 = v46;
      Master_object = (char *)DataManager__GetMasterData_object_(
                                v25,
                                (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_EventMaster___);
      if ( !Master_object )
        goto LABEL_67;
      Master_object = (char *)DataMasterBase_object__object__int___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                HIDWORD(v47[1].monitor),
                                (const MethodInfo_3214280 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
      if ( !Master_object )
        goto LABEL_67;
      if ( EventEntity__IsEventPeriod((EventEntity_o *)Master_object, 0LL, 0LL) )
      {
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_4A4B126 )
        {
          sub_1B863B8(&TerminalPramsManager_TypeInfo, v48);
          byte_4A4B126 = 1;
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
            sub_1B8635C((CGThumbnailListItem_o *)(Master_object + 32), (int32_t)vals, v50, v51);
            v53 = v24->fields._TransitionInfo_k__BackingField;
            if ( v53 )
            {
              v53->fields.optionId = v28->fields.optionId;
              return;
            }
          }
        }
LABEL_67:
        sub_1B86614(Master_object, v21);
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

  if ( (byte_4A4B0FD & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__get_Values__, endAct);
    sub_1B863B8(&Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo___ctor__, v5);
    sub_1B863B8(&System_Collections_Generic_List_QuestAfterAction_VoiceInfo__TypeInfo, v6);
    byte_4A4B0FD = 1;
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
      sub_1B86614(0LL, endAct);
    Values = System_Collections_Generic_Dictionary_int__object___get_Values(
               (System_Collections_Generic_Dictionary_int__object__o *)svtVoices,
               (const MethodInfo_326D574 *)Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__get_Values__);
    v9 = (System_Collections_Generic_List_object__o *)sub_1B86604(System_Collections_Generic_List_QuestAfterAction_VoiceInfo__TypeInfo);
    System_Collections_Generic_List_object____ctor_56607308(
      v9,
      (System_Collections_Generic_IEnumerable_T__o *)Values,
      (const MethodInfo_35FC24C *)Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo___ctor__);
    QuestAfterAction__LoadVoice_34492608(
      this,
      (System_Collections_Generic_List_QuestAfterAction_VoiceInfo__o *)v9,
      endAct,
      v10);
  }
}


void __fastcall QuestAfterAction__LoadVoice_34492608(
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
  System_String_o *VoiceAssetName_40875676; // x19
  Il2CppObject *v26; // x20
  System_Action_o *v27; // x22

  v5 = svtVInfos;
  while ( 1 )
  {
    if ( (byte_4A4B0FE & 1) == 0 )
    {
      sub_1B863B8(&System_Action_TypeInfo, svtVInfos);
      sub_1B863B8(&Method_System_Linq_Enumerable_Any_QuestAfterAction_VoiceInfo___, v7);
      sub_1B863B8(&Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo__RemoveAt__, v8);
      sub_1B863B8(&Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo__get_Item__, v9);
      sub_1B863B8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v10);
      sub_1B863B8(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__, v11);
      sub_1B863B8(&Method_QuestAfterAction___c__DisplayClass76_0__LoadVoice_b__0__, v12);
      sub_1B863B8(&QuestAfterAction___c__DisplayClass76_0_TypeInfo, v13);
      byte_4A4B0FE = 1;
    }
    v14 = sub_1B86604(QuestAfterAction___c__DisplayClass76_0_TypeInfo);
    QuestAfterAction___c__DisplayClass76_0___ctor((QuestAfterAction___c__DisplayClass76_0_o *)v14, 0LL);
    if ( !v14 )
      goto LABEL_18;
    *(_QWORD *)(v14 + 16) = v5;
    v19 = (CommonUI_o **)(v14 + 16);
    sub_1B8635C((CGThumbnailListItem_o *)(v14 + 16), (int32_t)v5, v17, v18);
    *(_QWORD *)(v14 + 24) = this;
    sub_1B8635C((CGThumbnailListItem_o *)(v14 + 24), (int32_t)this, v20, v21);
    *(_QWORD *)(v14 + 32) = endAct;
    v22 = (System_Action_o **)(v14 + 32);
    sub_1B8635C((CGThumbnailListItem_o *)(v14 + 32), (int32_t)endAct, v23, v24);
    if ( !System_Linq_Enumerable__Any_object_(
            *(System_Collections_Generic_IEnumerable_TSource__o **)(v14 + 16),
            (const MethodInfo_2F7B8DC *)Method_System_Linq_Enumerable_Any_QuestAfterAction_VoiceInfo___) )
    {
      Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( Instance )
      {
        CommonUI__SetLoadMode(Instance, 0, 0LL);
        ActionExtensions__Call(*v22, 0LL);
        return;
      }
LABEL_18:
      sub_1B86614(Instance, v16);
    }
    Instance = *v19;
    if ( !*v19 )
      goto LABEL_18;
    Instance = (CommonUI_o *)System_Collections_Generic_List_object___get_Item(
                               (System_Collections_Generic_List_object__o *)Instance,
                               0,
                               (const MethodInfo_35FC688 *)Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo__get_Item__);
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
      (const MethodInfo_35FE12C *)Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo__RemoveAt__);
    v5 = (System_Collections_Generic_List_QuestAfterAction_VoiceInfo__o *)*v19;
    endAct = *v22;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  CommonUI__SetLoadMode(Instance, 1, 0LL);
  Instance = *v19;
  if ( !*v19 )
    goto LABEL_18;
  Instance = (CommonUI_o *)System_Collections_Generic_List_object___get_Item(
                             (System_Collections_Generic_List_object__o *)Instance,
                             0,
                             (const MethodInfo_35FC688 *)Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo__get_Item__);
  if ( !Instance )
    goto LABEL_18;
  VoiceAssetName_40875676 = ServantVoiceEntity__getVoiceAssetName_40875676(Instance->fields.m_CachedPtr, 0LL);
  v26 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
  v27 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
  System_Action___ctor(v27, (Il2CppObject *)v14, Method_QuestAfterAction___c__DisplayClass76_0__LoadVoice_b__0__, 0LL);
  if ( !v26 )
    goto LABEL_18;
  SoundManager__LoadAudioAssetStorage((SoundManager_o *)v26, VoiceAssetName_40875676, v27, 1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall QuestAfterAction__MapObjName(
        QuestAfterAction_o *this,
        int32_t comType,
        int32_t id,
        const MethodInfo *method)
{
  __int64 v6; // x1

  if ( (byte_4A4B10C & 1) == 0 )
  {
    sub_1B863B8(&SrcSpotBasePrefab_TypeInfo, *(_QWORD *)&comType);
    sub_1B863B8(&StringLiteral_1/*""*/, v6);
    byte_4A4B10C = 1;
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

  if ( (byte_4A4B106 & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_Generic_List_int__Clear__, method);
    byte_4A4B106 = 1;
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
    sub_1B86614(screenCollider, v4);
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

  if ( (byte_4A4B102 & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, endAct);
    sub_1B863B8(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v5);
    sub_1B863B8(&Method_QuestAfterAction___c__DisplayClass80_0__Play_b__0__, v6);
    sub_1B863B8(&QuestAfterAction___c__DisplayClass80_0_TypeInfo, v7);
    byte_4A4B102 = 1;
  }
  v8 = sub_1B86604(QuestAfterAction___c__DisplayClass80_0_TypeInfo);
  QuestAfterAction___c__DisplayClass80_0___ctor((QuestAfterAction___c__DisplayClass80_0_o *)v8, 0LL);
  if ( !v8
    || (*(_QWORD *)(v8 + 16) = endAct,
        sub_1B8635C((CGThumbnailListItem_o *)(v8 + 16), (int32_t)endAct, v11, v12),
        (Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3839AA0 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__)) == 0LL) )
  {
    sub_1B86614(Instance, v10);
  }
  MissionNotifyManager__StartPause((MissionNotifyManager_o *)Instance, 0LL);
  v13 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
  System_Action___ctor(v13, (Il2CppObject *)v8, Method_QuestAfterAction___c__DisplayClass80_0__Play_b__0__, 0LL);
  this->fields.endAct = v13;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.endAct, (int32_t)v13, v14, v15);
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
  const MethodInfo *v15; // x3
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  const MethodInfo *v18; // x1
  struct QuestAfterAction_Command_array *CommandBuf; // x0
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  System_Action_o *v22; // x21
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  System_Action_o *v25; // x21
  const MethodInfo *v26; // x2
  System_Collections_IEnumerator_o *v27; // x1

  if ( (byte_4A4B103 & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, actionVals);
    sub_1B863B8(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v7);
    sub_1B863B8(&Method_QuestAfterAction___c__DisplayClass81_0__PlaySpecifiedAction_b__0__, v8);
    sub_1B863B8(&Method_QuestAfterAction___c__DisplayClass81_0__PlaySpecifiedAction_b__1__, v9);
    sub_1B863B8(&QuestAfterAction___c__DisplayClass81_0_TypeInfo, v10);
    byte_4A4B103 = 1;
  }
  v11 = sub_1B86604(QuestAfterAction___c__DisplayClass81_0_TypeInfo);
  QuestAfterAction___c__DisplayClass81_0___ctor((QuestAfterAction___c__DisplayClass81_0_o *)v11, 0LL);
  if ( !v11 )
    goto LABEL_8;
  *(_QWORD *)(v11 + 16) = this;
  sub_1B8635C((CGThumbnailListItem_o *)(v11 + 16), (int32_t)this, v14, v15);
  *(_QWORD *)(v11 + 24) = finishCallback;
  sub_1B8635C((CGThumbnailListItem_o *)(v11 + 24), (int32_t)finishCallback, v16, v17);
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)actionVals, 0LL) )
  {
    ActionExtensions__Call(*(System_Action_o **)(v11 + 24), 0LL);
    return;
  }
  CommandBuf = QuestAfterAction__GenerateCommandBuf(actionVals, v18);
  this->fields.temporaryCommandBuf = CommandBuf;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.temporaryCommandBuf, (int32_t)CommandBuf, v20, v21);
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3839AA0 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
LABEL_8:
    sub_1B86614(Instance, v13);
  MissionNotifyManager__StartPause((MissionNotifyManager_o *)Instance, 0LL);
  v22 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
  System_Action___ctor(
    v22,
    (Il2CppObject *)v11,
    Method_QuestAfterAction___c__DisplayClass81_0__PlaySpecifiedAction_b__0__,
    0LL);
  this->fields.endAct = v22;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.endAct, (int32_t)v22, v23, v24);
  v25 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
  System_Action___ctor(
    v25,
    (Il2CppObject *)v11,
    Method_QuestAfterAction___c__DisplayClass81_0__PlaySpecifiedAction_b__1__,
    0LL);
  v27 = QuestAfterAction__WaitWhileMainStateFinished(this, v25, v26);
  UnityEngine_MonoBehaviour__StartCoroutine_69341456((UnityEngine_MonoBehaviour_o *)this, v27, 0LL);
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

  if ( (byte_4A4B105 & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, commandArray);
    sub_1B863B8(&Method_QuestAfterAction__PlaySpecifiedActionInstantly_b__84_0__, v5);
    byte_4A4B105 = 1;
  }
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)commandArray, 0LL) )
  {
    this->fields.temporaryCommandBuf = commandArray;
    sub_1B8635C((CGThumbnailListItem_o *)&this->fields.temporaryCommandBuf, (int32_t)commandArray, v6, v7);
    v8 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
    System_Action___ctor(v8, (Il2CppObject *)this, Method_QuestAfterAction__PlaySpecifiedActionInstantly_b__84_0__, 0LL);
    this->fields.endAct = v8;
    sub_1B8635C((CGThumbnailListItem_o *)&this->fields.endAct, (int32_t)v8, v9, v10);
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

  if ( (byte_4A4B10B & 1) == 0 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, *(_QWORD *)&cType);
    sub_1B863B8(&TerminalSceneComponent_TypeInfo, v7);
    byte_4A4B10B = 1;
  }
  this->fields.ActionMapTargetType = cType;
  this->fields.ActionMapTargetId = cTarget;
  QuestAfterAction__SetState(this, 0, *(const MethodInfo **)&cTarget);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A4907E )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v8);
    byte_4A4907E = 1;
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
  if ( !byte_4A48DB8 )
  {
    sub_1B863B8(&TerminalSceneComponent_TypeInfo, v8);
    byte_4A48DB8 = 1;
  }
  v10 = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v10 = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
  }
  klass = v10->fields.subRootGimmickP->klass;
  if ( !klass || (v10 = *(ScrTerminalMap_o **)&klass->_2.thread_static_fields_offset) == 0LL )
    sub_1B86614(v10, v8);
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
  if ( (byte_4A4B0FB & 1) == 0 )
  {
    sub_1B863B8(&Method_DataManager_GetMasterData_QuestMaster___, com);
    sub_1B863B8(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v5);
    this = (QuestAfterAction_o *)sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_4A4B0FB = 1;
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
                sub_1B8661C(this, com);
              TitleInfoCtrlCallback_k__BackingField = (System_String_o *)this->fields.invalidMapGimmickIdList;
              goto LABEL_29;
            }
          }
LABEL_42:
          sub_1B86614(this, com);
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
          this = (QuestAfterAction_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( this )
          {
            MasterData_object = DataManager__GetMasterData_object_(
                                  (DataManager_o *)this,
                                  (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_QuestMaster___);
            param = com->fields.param;
            v16 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
            this = (QuestAfterAction_o *)System_Int32__Parse(param, 0LL);
            if ( v16 )
            {
              this = (QuestAfterAction_o *)DataMasterBase_object__object__int___GetEntity(
                                             v16,
                                             (int32_t)this,
                                             (const MethodInfo_3214280 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
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

  if ( (byte_4A4B109 & 1) == 0 )
  {
    sub_1B863B8(&Method_CStateManager_QuestAfterAction__setState__, *(_QWORD *)&state);
    byte_4A4B109 = 1;
  }
  fsm = (CStateManager_T__o *)this->fields.fsm;
  if ( !fsm )
    sub_1B86614(0LL, *(_QWORD *)&state);
  CStateManager_object___setState(
    fsm,
    state,
    (const MethodInfo_31A349C *)Method_CStateManager_QuestAfterAction__setState__);
}


void __fastcall QuestAfterAction__SkipToNextAction(QuestAfterAction_o *this, const MethodInfo *method)
{
  this->fields.isSkippedNext = 1;
}


void __fastcall QuestAfterAction__Update(QuestAfterAction_o *this, const MethodInfo *method)
{
  CStateManager_T__o *fsm; // x0

  if ( (byte_4A4B101 & 1) == 0 )
  {
    sub_1B863B8(&Method_CStateManager_QuestAfterAction__update__, method);
    byte_4A4B101 = 1;
  }
  fsm = (CStateManager_T__o *)this->fields.fsm;
  if ( fsm )
    CStateManager_object___update(fsm, (const MethodInfo_31A3478 *)Method_CStateManager_QuestAfterAction__update__);
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

  if ( (byte_4A4B107 & 1) == 0 )
  {
    sub_1B863B8(&QuestAfterAction__WaitWhileMainStateFinished_d__87_TypeInfo, action);
    byte_4A4B107 = 1;
  }
  v5 = sub_1B86604(QuestAfterAction__WaitWhileMainStateFinished_d__87_TypeInfo);
  QuestAfterAction__WaitWhileMainStateFinished_d__87___ctor(
    (QuestAfterAction__WaitWhileMainStateFinished_d__87_o *)v5,
    0,
    0LL);
  if ( !v5 )
    sub_1B86614(v6, v7);
  *(_QWORD *)(v5 + 32) = this;
  sub_1B8635C((CGThumbnailListItem_o *)(v5 + 32), (int32_t)this, v8, v9);
  *(_QWORD *)(v5 + 40) = action;
  sub_1B8635C((CGThumbnailListItem_o *)(v5 + 40), (int32_t)action, v10, v11);
  return (System_Collections_IEnumerator_o *)v5;
}


void __fastcall QuestAfterAction___PlaySpecifiedActionInstantly_b__84_0(
        QuestAfterAction_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  const MethodInfo *v7; // x2

  this->fields.endAct = 0LL;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.endAct, 0, v2, v3);
  this->fields.temporaryCommandBuf = 0LL;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.temporaryCommandBuf, 0, v5, v6);
  QuestAfterAction__SetState(this, 0, v7);
}


System_Int32_array *__fastcall QuestAfterAction__getMapGmkOffIdList(QuestAfterAction_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *invalidMapGimmickIdList; // x0

  if ( (byte_4A4B0FA & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_Generic_List_int__ToArray__, method);
    byte_4A4B0FA = 1;
  }
  invalidMapGimmickIdList = this->fields.invalidMapGimmickIdList;
  if ( !invalidMapGimmickIdList )
    sub_1B86614(0LL, method);
  return System_Collections_Generic_List_int___ToArray(
           invalidMapGimmickIdList,
           (const MethodInfo_35E13EC *)Method_System_Collections_Generic_List_int__ToArray__);
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
  System_String_o *VoiceAssetName_40875676; // x20
  System_Collections_Generic_List_Enumerator_object__o v17; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4A4B0FF & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__Clear__, method);
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__get_Values__, v3);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_QuestAfterAction_VoiceInfo__Dispose__, v4);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_QuestAfterAction_VoiceInfo__MoveNext__, v5);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_QuestAfterAction_VoiceInfo__get_Current__, v6);
    sub_1B863B8(&Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo__GetEnumerator__, v7);
    sub_1B863B8(&Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo___ctor__, v8);
    sub_1B863B8(&System_Collections_Generic_List_QuestAfterAction_VoiceInfo__TypeInfo, v9);
    sub_1B863B8(&SoundManager_TypeInfo, v10);
    byte_4A4B0FF = 1;
  }
  memset(&v17, 0, sizeof(v17));
  svtVoices = this->fields.svtVoices;
  if ( !svtVoices )
    goto LABEL_14;
  Values = System_Collections_Generic_Dictionary_int__object___get_Values(
             (System_Collections_Generic_Dictionary_int__object__o *)svtVoices,
             (const MethodInfo_326D574 *)Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__get_Values__);
  v13 = (System_Collections_Generic_List_object__o *)sub_1B86604(System_Collections_Generic_List_QuestAfterAction_VoiceInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor_56607308(
    v13,
    (System_Collections_Generic_IEnumerable_T__o *)Values,
    (const MethodInfo_35FC24C *)Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo___ctor__);
  if ( !v13 )
    goto LABEL_14;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v17,
    v13,
    (const MethodInfo_35FD450 *)Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo__GetEnumerator__);
  while ( 1 )
  {
    v14 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v17,
            (const MethodInfo_3398634 *)Method_System_Collections_Generic_List_Enumerator_QuestAfterAction_VoiceInfo__MoveNext__);
    if ( !v14 )
      break;
    if ( !v17.fields._current )
      sub_1B86614(v14, v15);
    VoiceAssetName_40875676 = ServantVoiceEntity__getVoiceAssetName_40875676((int32_t)v17.fields._current[1].klass, 0LL);
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    SoundManager__releaseAudioAssetStorage(VoiceAssetName_40875676, 0LL);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v17,
    (const MethodInfo_3398630 *)Method_System_Collections_Generic_List_Enumerator_QuestAfterAction_VoiceInfo__Dispose__);
  svtVoices = this->fields.svtVoices;
  if ( !svtVoices )
LABEL_14:
    sub_1B86614(svtVoices, method);
  System_Collections_Generic_Dictionary_int__object___Clear(
    (System_Collections_Generic_Dictionary_int__object__o *)svtVoices,
    (const MethodInfo_326D8EC *)Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__Clear__);
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
  int v29; // w8
  void *v30; // x21
  int32_t result; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_4A4B111 & 1) == 0 )
  {
    sub_1B863B8(&Method_DataManager_GetMasterData_VoicePlayCondMaster___, svtId);
    sub_1B863B8(&Method_System_Collections_Generic_List_string__RemoveAt__, v5);
    sub_1B863B8(&Method_System_Collections_Generic_List_string___ctor___76048048, v6);
    sub_1B863B8(&Method_System_Collections_Generic_List_string__get_Count__, v7);
    sub_1B863B8(&Method_System_Collections_Generic_List_string__get_Item__, v8);
    sub_1B863B8(&System_Collections_Generic_List_string__TypeInfo, v9);
    sub_1B863B8(&System_Random_TypeInfo, v10);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_1B863B8(&TerminalSceneComponent_TypeInfo, v12);
    sub_1B863B8(&StringLiteral_15886/*"_"*/, v13);
    byte_4A4B111 = 1;
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
    param = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( param )
    {
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)param,
                            (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_VoicePlayCondMaster___);
      v17 = (System_Collections_Generic_List_object__o *)sub_1B86604(System_Collections_Generic_List_string__TypeInfo);
      System_Collections_Generic_List_object____ctor_56607308(
        v17,
        v15,
        (const MethodInfo_35FC24C *)Method_System_Collections_Generic_List_string___ctor___76048048);
      result = 0;
      v18 = (System_Random_o *)sub_1B86604(System_Random_TypeInfo);
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
                      (const MethodInfo_35FC688 *)Method_System_Collections_Generic_List_string__get_Item__);
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
              param = System_String__Concat_61683424(
                        *((System_String_o **)v22 + 5),
                        (System_String_o *)StringLiteral_15886/*"_"*/,
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
                       (const MethodInfo_35FC688 *)Method_System_Collections_Generic_List_string__get_Item__);
              if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
              if ( !byte_4A48DB8 )
              {
                sub_1B863B8(&TerminalSceneComponent_TypeInfo, svtId);
                byte_4A48DB8 = 1;
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
              (const MethodInfo_35FE12C *)Method_System_Collections_Generic_List_string__RemoveAt__);
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
    sub_1B86614(param, svtId);
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
    sub_1B8661C(v27, v28);
  return System_String__Concat_61683424(
           *((System_String_o **)v30 + 5),
           (System_String_o *)StringLiteral_15886/*"_"*/,
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

  if ( (byte_4A4B113 & 1) == 0 )
  {
    sub_1B863B8(&Method_DataManager_GetMasterData_BgmMaster___, method);
    sub_1B863B8(&Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__, v3);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_4A4B113 = 1;
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
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_12;
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_BgmMaster___);
      if ( !Instance )
        goto LABEL_12;
      Instance = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                   (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                   &entity,
                                   result,
                                   (const MethodInfo_32142CC *)Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( entity )
          return (System_String_o *)entity[1].monitor;
LABEL_12:
        sub_1B86614(Instance, v8);
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
    sub_1B86614(v3, str);
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
  if ( (byte_4A4B112 & 1) == 0 )
  {
    this = (QuestAfterAction_Command_o *)sub_1B863B8(&StringLiteral_15886/*"_"*/, str);
    byte_4A4B112 = 1;
  }
  if ( v4->fields.id == 800 )
  {
    if ( !v3 || (this = (QuestAfterAction_Command_o *)System_String__Split(v3, 0x5Fu, 0, 0LL)) == 0LL )
      sub_1B86614(this, str);
    param = (int)this->fields.param;
    if ( param == 2 )
      return v3;
    if ( param == 3 )
      return System_String__Concat_61683424(
               (System_String_o *)this[1].monitor,
               (System_String_o *)StringLiteral_15886/*"_"*/,
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
    sub_1B86614(this, method);
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
    sub_1B86614(screenCollider, v5);
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
    sub_1B86614(this, 0LL);
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
    sub_1B86614(0LL, v7);
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
    sub_1B86614(0LL, v7);
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
  if ( (byte_4A4B118 & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_Generic_List_int__Remove__, method);
    sub_1B863B8(&Method_System_Collections_Generic_List_int__ToArray__, v3);
    sub_1B863B8(&UnityEngine_Object_TypeInfo, v4);
    sub_1B863B8(&Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___, v5);
    this = (QuestAfterAction_StateMain_o *)sub_1B863B8(&Method_SingletonTemplate_QuestTree__get_Instance__, v6);
    byte_4A4B118 = 1;
  }
  that = v2->fields.that;
  if ( !that )
    goto LABEL_22;
  this = (QuestAfterAction_StateMain_o *)that->fields.invalidMapGimmickIdList;
  if ( !this )
    goto LABEL_22;
  this = (QuestAfterAction_StateMain_o *)System_Collections_Generic_List_int___ToArray(
                                           (System_Collections_Generic_List_int__o *)this,
                                           (const MethodInfo_35E13EC *)Method_System_Collections_Generic_List_int__ToArray__);
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
        sub_1B8661C(this, method);
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
        (const MethodInfo_35E0E30 *)Method_System_Collections_Generic_List_int__Remove__);
      this = (QuestAfterAction_StateMain_o *)v2->fields.that;
      if ( !this )
        break;
      MapComponent_object = QuestAfterAction__GetMapComponent_object_(
                              (QuestAfterAction_o *)this,
                              2,
                              v12,
                              v2,
                              (const MethodInfo_3002668 *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (QuestAfterAction_StateMain_o *)UnityEngine_Object__op_Inequality(
                                               (UnityEngine_Object_o *)MapComponent_object,
                                               0LL,
                                               0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        this = (QuestAfterAction_StateMain_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3839AA0 *)Method_SingletonTemplate_QuestTree__get_Instance__);
        if ( !MapComponent_object || !this )
          break;
        this = (QuestAfterAction_StateMain_o *)QuestTree__CheckMapGimmickCond_34862436(
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
          MapGimmickComponent__SetDispAnim_34448660((MapGimmickComponent_o *)MapComponent_object, 1, AnimTime, 1, v16);
        }
      }
      LODWORD(v8) = *(_DWORD *)&v9->fields.IsAnimDoing;
      if ( (__int64)++v10 >= (int)v8 )
        return;
    }
LABEL_22:
    sub_1B86614(this, method);
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
  __int64 v95; // x22
  __int64 updated; // x0
  const MethodInfo *v97; // x1
  int32_t v98; // w2
  const MethodInfo *v99; // x3
  QuestAfterAction_o **v100; // x20
  int32_t v101; // w2
  const MethodInfo *v102; // x3
  QuestAfterAction_StateMain_c *klass; // x8
  __int64 v104; // x21
  QuestAfterAction_Command_o *v105; // x21
  QuestAfterAction_o *v106; // x23
  BlankEarthQuestAfterAction_o *BlankEarthQuestAfterAction_k__BackingField; // x24
  System_Action_o *v108; // x25
  int id; // w8
  float v110; // s0
  __int64 v111; // x1
  float DEFAULT_FADE_TIME; // s8
  AvalonSceneManager_c *v113; // x0
  TerminalSceneComponent_c *v114; // x0
  TerminalSceneComponent_o *mInstance; // x19
  System_Action_o *v116; // x20
  TerminalSceneComponent_o *v117; // x0
  float v118; // s0
  System_Action_o *v119; // x1
  System_String_o *v120; // x19
  System_String_o *v121; // x20
  System_String_o *v122; // x20
  Il2CppObject *Instance; // x21
  System_Action_o *v124; // x23
  __int64 v125; // x8
  __int64 v126; // x23
  float v127; // s0
  System_String_o *param; // x21
  _QWORD *v129; // x0
  System_Reflection_MethodBase_o *v130; // x0
  __int64 v131; // x20
  int32_t v132; // w2
  const MethodInfo *v133; // x3
  __int64 v134; // x23
  __int64 v135; // x8
  __int64 v136; // x22
  int32_t v137; // w21
  bool v138; // w24
  bool v139; // w25
  __int64 v140; // x23
  int32_t v141; // w21
  int32_t v142; // w22
  int32_t v143; // w23
  __int64 v144; // x20
  int32_t v145; // w2
  const MethodInfo *v146; // x3
  __int64 v147; // x8
  QuestAfterAction_o *v148; // x22
  Il2CppObject *v149; // x0
  int32_t v150; // w2
  const MethodInfo *v151; // x3
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
  const MethodInfo_37206A0 *v168; // x2
  float v169; // s0
  float v170; // s1
  float v171; // s2
  float v172; // s10
  float v173; // s9
  float v174; // s11
  MapCamera_o *mMapCamera; // x20
  System_Action_o *v176; // x21
  MapCamera_o *v177; // x0
  float v178; // s0
  float v179; // s1
  float v180; // s2
  float v181; // s3
  int32_t v182; // w1
  __int64 v183; // x20
  int32_t v184; // w2
  const MethodInfo *v185; // x3
  __int64 v186; // x8
  QuestAfterAction_o *v187; // x22
  Il2CppObject *v188; // x0
  int32_t v189; // w2
  const MethodInfo *v190; // x3
  UnityEngine_Object_o *v191; // x19
  ModelLineComponent_o *v192; // x19
  System_Action_o *v193; // x21
  const MethodInfo *v194; // x3
  int32_t v195; // w1
  __int64 v196; // x1
  TerminalPramsManager_c *v197; // x0
  __int64 v198; // x8
  __int64 v199; // x22
  _BOOL4 v200; // w23
  __int64 v201; // x20
  int32_t v202; // w2
  const MethodInfo *v203; // x3
  __int64 v204; // x23
  int32_t v205; // w21
  Il2CppObject *v206; // x0
  __int64 *v207; // x24
  int32_t v208; // w2
  const MethodInfo *v209; // x3
  MapControl_QuestInfo_o *QuestInfo; // x0
  __int64 v211; // x22
  int32_t v212; // w2
  const MethodInfo *v213; // x3
  const MethodInfo *v214; // x2
  int v215; // w21
  __int64 v216; // x8
  NetworkManager_ResultCallbackFunc_o *v217; // x21
  Il2CppObject *Request_object; // x20
  int32_t v219; // w21
  TerminalSceneComponent_c *v220; // x0
  TerminalSceneComponent_o *v221; // x22
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
  const MethodInfo *v232; // x3
  TerminalSceneComponent_c *v233; // x0
  __int64 v234; // x22
  int v235; // w23
  float v236; // s8
  int32_t v237; // w21
  __int64 v238; // x8
  __int64 v239; // x21
  int32_t v240; // w20
  QuestAfterAction_o *v241; // x8
  __int64 v242; // x8
  __int64 v243; // x8
  __int64 v244; // x8
  System_String_o *v245; // x20
  System_String_o *v246; // x21
  SeManager_c *v247; // x0
  float DEFAULT_VOLUME; // s8
  __int64 v249; // x21
  int32_t v250; // w20
  int32_t v251; // w22
  TerminalPramsManager_c *v252; // x0
  __int64 v253; // x8
  __int64 v254; // x1
  const MethodInfo *v255; // x2
  TerminalPramsManager_c *v256; // x0
  System_String_o *v257; // x23
  int32_t v258; // w2
  const MethodInfo *v259; // x3
  System_String_array *v260; // x20
  int32_t v261; // w1
  int v262; // w8
  System_String_o *v263; // x19
  System_String_o *v264; // x20
  System_String_o *v265; // x19
  System_String_o *v266; // x20
  System_String_o *v267; // x20
  Il2CppObject *v268; // x21
  System_Action_o *v269; // x23
  char *v270; // x10
  System_String_o *v271; // x23
  int32_t v272; // w2
  const MethodInfo *v273; // x3
  System_String_array *v274; // x20
  int32_t v275; // w1
  int v276; // w8
  System_String_o *v277; // x19
  System_String_o *v278; // x20
  System_String_o *v279; // x20
  Il2CppObject *v280; // x21
  System_Action_o *v281; // x23
  Il2CppObject *MapComponent_object; // x22
  Il2CppObject *v283; // x20
  __int64 v284; // x8
  ScrTerminalMap_o *v285; // x23
  __int64 v286; // x8
  ScrTerminalMap_o *v287; // x20
  UnityEngine_GameObject_o *gameObject; // x22
  System_Action_o *v289; // x23
  __int64 v290; // x8
  float v291; // s0
  __int64 v292; // x8
  float v293; // s0
  __int64 v294; // x23
  float v295; // s0
  float v296; // s8
  int32_t v297; // w22
  __int64 v298; // x8
  ScrTerminalMap_o *v299; // x24
  float v300; // s0
  float v301; // s9
  float v302; // s0
  const MethodInfo_37206A0 *v303; // x2
  int v304; // w8
  float v305; // s10
  float v306; // s9
  float v307; // s11
  MapCamera_o *v308; // x20
  __int64 v309; // x21
  int32_t v310; // w0
  int32_t v311; // w20
  float v312; // s8
  int32_t v313; // w19
  __int64 v314; // x20
  int32_t v315; // w2
  const MethodInfo *v316; // x3
  __int64 v317; // x8
  QuestAfterAction_o *v318; // x22
  Il2CppObject *v319; // x0
  int32_t v320; // w2
  const MethodInfo *v321; // x3
  UnityEngine_Object_o *v322; // x19
  __int64 v323; // x23
  int32_t v324; // w2
  const MethodInfo *v325; // x3
  __int64 v326; // x20
  QuestAfterAction_o *v327; // x22
  Il2CppObject *v328; // x0
  __int64 *v329; // x19
  int32_t v330; // w2
  const MethodInfo *v331; // x3
  UnityEngine_Object_o *v332; // x21
  SrcSpotBasePrefab_o *v333; // x21
  System_Action_o *v334; // x22
  int32_t v335; // w2
  const MethodInfo *v336; // x3
  __int64 v337; // x1
  CGThumbnailListItem_o *v338; // x0
  __int64 v339; // x22
  QuestAfterAction_o *v340; // x21
  Il2CppObject *v341; // x21
  System_Action_o *v342; // x22
  QuestAfterAction_o *v343; // x22
  Il2CppObject *v344; // x21
  _DWORD *monitor; // x8
  SrcSpotBasePrefab_o *v346; // x0
  int32_t v347; // w1
  QuestAfterAction_o *v348; // x22
  Il2CppObject *v349; // x21
  _DWORD *v350; // x8
  QuestAfterAction_o *v351; // x22
  _DWORD *v352; // x8
  __int64 v353; // x21
  QuestAfterAction_o *v354; // x22
  Il2CppObject *v355; // x22
  SceneJumpInfo_o *v356; // x21
  __int64 v357; // x1
  TerminalPramsManager_c *v358; // x0
  TerminalPramsManager_c *v359; // x0
  __int64 v360; // x1
  int32_t v361; // w21
  TerminalPramsManager_c *v362; // x0
  QuestAfterAction_o *v363; // x20
  Il2CppObject *v364; // x20
  __int64 v365; // x1
  TerminalPramsManager_c *v366; // x0
  MapCamera_o *v367; // x20
  float v368; // s0
  System_Action_o *v369; // x21
  MapCamera_o *v370; // x0
  float v371; // s0
  int32_t v372; // w4
  int v373; // w23
  __int64 v374; // x21
  float v375; // s0
  float v376; // s8
  float v377; // s0
  MapCamera_o *v378; // x19
  float v379; // s0
  float v380; // s9
  int32_t v381; // w20
  __int64 v382; // x20
  int32_t v383; // w2
  const MethodInfo *v384; // x3
  __int64 v385; // x8
  QuestAfterAction_o *v386; // x22
  Il2CppObject *v387; // x0
  int32_t v388; // w2
  const MethodInfo *v389; // x3
  UnityEngine_Object_o *v390; // x19
  __int64 v391; // x20
  int32_t v392; // w2
  const MethodInfo *v393; // x3
  __int64 v394; // x8
  QuestAfterAction_o *v395; // x22
  Il2CppObject *v396; // x0
  int32_t v397; // w2
  const MethodInfo *v398; // x3
  UnityEngine_Object_o *v399; // x19
  _BOOL4 IsMapModel; // w23
  QuestAfterAction_o *v401; // x22
  UnityEngine_Object_o *v402; // x21
  const MethodInfo *v403; // x2
  _DWORD *v404; // x8
  _BOOL4 v405; // w23
  QuestAfterAction_o *v406; // x22
  UnityEngine_Object_o *v407; // x21
  const MethodInfo *v408; // x2
  const MethodInfo *v409; // x2
  _DWORD *v410; // x8
  _BOOL4 v411; // w23
  QuestAfterAction_o *v412; // x22
  UnityEngine_Object_o *v413; // x21
  const MethodInfo *v414; // x2
  const MethodInfo *v415; // x2
  __int64 v416; // x21
  const MethodInfo *v417; // x3
  QuestAfterAction_o *v418; // x8
  QuestAfterAction_TitleInfoControlCallback_o *TitleInfoCtrlCallback_k__BackingField; // x22
  System_Action_o *v420; // x20
  const MethodInfo *v421; // x3
  Il2CppObject *v422; // x21
  System_Action_o *v423; // x23
  float v424; // s0
  float v425; // s0
  float v426; // s0
  QuestAfterAction_o *v427; // x24
  const MethodInfo *v428; // x4
  UnityEngine_Object_o *v429; // x24
  float v430; // s10
  float v431; // s8
  float v432; // s9
  __int64 v433; // x8
  const MethodInfo_37206A0 *v434; // x2
  System_String_o *v435; // x24
  QuestAfterAction_o *v436; // x24
  const MethodInfo *v437; // x4
  UnityEngine_Object_o *v438; // x24
  float v439; // s8
  float v440; // s9
  float v441; // s10
  __int64 v442; // x8
  float v443; // s0
  float v444; // s1
  float v445; // s2
  QuestAfterAction_o *v446; // x24
  const MethodInfo *v447; // x4
  UnityEngine_Object_o *v448; // x24
  __int64 v449; // x8
  int v450; // w8
  QuestAfterAction_o *v451; // x8
  MapCamera_o *v452; // x20
  MapCamera_o *v453; // x0
  float v454; // s0
  float v455; // s1
  float v456; // s2
  __int64 v457; // x23
  int32_t v458; // w2
  const MethodInfo *v459; // x3
  __int64 v460; // x20
  __int64 v461; // x8
  __int64 v462; // x21
  int32_t v463; // w22
  bool v464; // w25
  bool v465; // w27
  __int64 v466; // x8
  __int64 v467; // x22
  int32_t v468; // w21
  bool v469; // w22
  __int64 v470; // x8
  __int64 v471; // x22
  int32_t v472; // w21
  bool v473; // w22
  __int64 v474; // x21
  float v475; // s0
  QuestAfterAction_o *v476; // x20
  float v477; // s8
  Il2CppObject *v478; // x20
  _BOOL4 v479; // w23
  __int64 v480; // x20
  int32_t v481; // w2
  const MethodInfo *v482; // x3
  __int64 v483; // x8
  QuestAfterAction_o *v484; // x22
  Il2CppObject *v485; // x0
  int32_t v486; // w2
  const MethodInfo *v487; // x3
  UnityEngine_Object_o *v488; // x19
  MapGimmickComponent_o *v489; // x19
  System_Action_o *v490; // x21
  const MethodInfo *v491; // x3
  TerminalSceneComponent_o *v492; // x19
  __int64 v493; // x20
  int32_t v494; // w2
  const MethodInfo *v495; // x3
  System_String_array *v496; // x0
  __int64 *v497; // x21
  int32_t v498; // w2
  const MethodInfo *v499; // x3
  __int64 v500; // x8
  __int64 v501; // x9
  QuestAfterAction_o *v502; // x21
  Il2CppObject *v503; // x0
  int32_t v504; // w2
  const MethodInfo *v505; // x3
  UnityEngine_Object_o *v506; // x19
  MapGimmickComponent_o *v507; // x19
  System_Action_o *v508; // x0
  __int64 *v509; // x8
  System_Action_o *v510; // x21
  __int64 v511; // x21
  QuestAfterAction_o *v512; // x20
  Il2CppObject *v513; // x20
  UIWidget_o *v514; // x20
  int32_t v515; // w2
  const MethodInfo *v516; // x3
  __int64 v517; // x8
  QuestAfterAction_o *v518; // x22
  Il2CppObject *v519; // x0
  __int64 v520; // x19
  int32_t v521; // w2
  const MethodInfo *v522; // x3
  UnityEngine_Object_o *v523; // x21
  bool v524; // w0
  bool v525; // w22
  const MethodInfo *v526; // x3
  int32_t v527; // w1
  __int64 v528; // x8
  __int64 v529; // x22
  int32_t v530; // w21
  bool v531; // w22
  __int64 v532; // x21
  QuestAfterAction_o *v533; // x22
  Il2CppObject *v534; // x22
  QuestAfterAction_o *v535; // x23
  const MethodInfo *v536; // x4
  int32_t v537; // w2
  QuestAfterAction_o *v538; // x0
  int32_t v539; // w1
  QuestAfterAction_o *v540; // x22
  QuestAfterAction_o *v541; // x23
  const MethodInfo *v542; // x4
  UnityEngine_Object_o *MapGameObject; // x23
  float v544; // s0
  float v545; // s1
  float v546; // s2
  float x; // s9
  float y; // s8
  float z; // s10
  QuestAfterAction_o *v550; // x22
  QuestAfterAction_o *v551; // x23
  UnityEngine_Object_o *v552; // x23
  __int64 v553; // x8
  float v554; // s0
  float v555; // s11
  int32_t v556; // w23
  const MethodInfo *v557; // x3
  System_String_o *v558; // x20
  __int64 v559; // x20
  int32_t v560; // w2
  const MethodInfo *v561; // x3
  __int64 v562; // x8
  QuestAfterAction_o *v563; // x22
  Il2CppObject *v564; // x0
  int32_t v565; // w2
  const MethodInfo *v566; // x3
  UnityEngine_Object_o *v567; // x19
  srcLineSprite_o *v568; // x19
  System_Action_o *v569; // x21
  int32_t v570; // w1
  __int64 v571; // x20
  int32_t v572; // w2
  const MethodInfo *v573; // x3
  __int64 v574; // x8
  QuestAfterAction_o *v575; // x22
  Il2CppObject *v576; // x0
  int32_t v577; // w2
  const MethodInfo *v578; // x3
  UnityEngine_Object_o *v579; // x19
  __int64 v580; // x20
  int32_t v581; // w2
  const MethodInfo *v582; // x3
  __int64 v583; // x8
  QuestAfterAction_o *v584; // x22
  Il2CppObject *v585; // x0
  int32_t v586; // w2
  const MethodInfo *v587; // x3
  UnityEngine_Object_o *v588; // x19
  UnityEngine_Object_o *v589; // x21
  UnityEngine_Object_o *v590; // x21
  int v591; // w9
  UnityEngine_Object_o *v592; // x21
  System_Action_o *v593; // x21
  float v594; // s10
  float v595; // s9
  float v596; // s8
  System_String_o *v597; // x24
  Il2CppObject *v598; // x0
  int32_t v599; // w2
  const MethodInfo *v600; // x3
  UnityEngine_Object_o *v601; // x22
  MapGimmickComponent_o *v602; // x21
  System_Action_o *v603; // x0
  System_Action_o *v604; // x22
  MapGimmickComponent_o *v605; // x0
  System_Action_o *v606; // x2
  Il2CppObject *v607; // x0
  MapGimmickComponent_o **v608; // x22
  int32_t v609; // w2
  const MethodInfo *v610; // x3
  UnityEngine_Object_o *v611; // x24
  MapGimmickComponent_o *v612; // x24
  const MethodInfo *v613; // x3
  System_Action_o *v614; // x0
  Il2CppObject *v615; // x21
  const MethodInfo *v616; // x3
  Il2CppObject *v617; // x21
  const MethodInfo *v618; // x3
  Il2CppClass *v619; // x8
  Il2CppObject *v620; // x21
  float AnimTime; // s0
  const MethodInfo *v622; // x3
  Il2CppClass *v623; // x8
  QuestAfterAction_StateMain_c *v624; // x8
  int v625; // w0
  __int64 v626; // x8
  ScrTerminalMap_o *v627; // x21
  System_Action_o *v628; // x23
  MapCamera_o *v629; // x20
  MapCamera_o *v630; // x20
  int v631; // w8
  MapCamera_o *v632; // x20
  float v633; // s0
  float v634; // s1
  float v635; // s2
  float v636; // s0
  float v637; // s1
  float v638; // s2
  QuestAfterAction_o *v639; // x8
  float v640; // s3
  System_Action_o *v641; // x20
  const MethodInfo *v642; // x3
  MapGimmickComponent_o *v643; // x0
  float v644; // s0
  float v645; // s1
  float v646; // s2
  float v647; // s3
  int32_t v648; // w1
  System_Action_o *v649; // x2
  const MethodInfo *v650; // x3
  __int64 v651; // x8
  const MethodInfo *v652; // x3
  QuestAfterAction_o *v653; // x8
  float v654; // s0
  float v655; // s0
  MapCamera_o *v656; // x0
  float v657; // s0
  __int64 v658; // x8
  ScrTerminalMap_o *v659; // x22
  float v660; // s0
  float v661; // s9
  float v662; // s0
  float v663; // s0
  float v664; // s1
  float v665; // s2
  float v666; // s10
  float v667; // s9
  float v668; // s11
  float v669; // s8
  const MethodInfo *v670; // x3
  int32_t v671; // w21
  System_Action_o *v672; // x22
  float v673; // s0
  float v674; // s0
  int32_t onClickOkSeKind; // [xsp+10h] [xbp-E0h]
  float sec; // [xsp+3Ch] [xbp-B4h]
  System_Nullable_float__o size; // [xsp+40h] [xbp-B0h] BYREF
  System_Nullable_Vector3__o v678; // [xsp+48h] [xbp-A8h] BYREF
  Il2CppObject *value; // [xsp+58h] [xbp-98h] BYREF
  Il2CppObject *entity; // [xsp+60h] [xbp-90h] BYREF
  UnityEngine_Color_o color; // [xsp+68h] [xbp-88h] BYREF
  bool isQuickUpdate; // [xsp+7Ch] [xbp-74h] BYREF
  System_Nullable_float__o p_size; // 0:x0.8
  System_Nullable_float__o v684; // 0:x0.8
  System_Nullable_float__o v685; // 0:x0.8
  System_Nullable_float__o v686; // 0:x0.8
  System_Nullable_float__o v687; // 0:x0.8
  System_Nullable_float__o v688; // 0:x3.8
  System_Nullable_float__o v689; // 0:x3.8
  System_Nullable_Vector3__o v690; // 0:x0.16
  System_Nullable_Vector3__o v691; // 0:x0.16
  System_Nullable_Vector3__o v692; // 0:x0.16
  System_Nullable_Vector3__o v693; // 0:x0.16
  System_Nullable_Vector3__o v694; // 0:x0.16
  System_Nullable_Vector3__o v695; // 0:x1.16
  System_Nullable_Vector3__o v696; // 0:x1.16
  UnityEngine_Vector3_o v697; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v698; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v699; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v700; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v701; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o Position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v703; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v704; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v705; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v706; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v708; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v709; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v710; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v711; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v712; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v713; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A4B116 & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, that);
    sub_1B863B8(&AvalonSceneManager_TypeInfo, v5);
    sub_1B863B8(&Method_DataManager_GetMasterData_QuestMaster___, v6);
    sub_1B863B8(&Method_DataManager_GetMaster_QuestMaster___, v7);
    sub_1B863B8(&DataManager_TypeInfo, v8);
    sub_1B863B8(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v9);
    sub_1B863B8(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__, v10);
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__TryGetValue__, v11);
    sub_1B863B8(&FSUtility_TypeInfo, v12);
    sub_1B863B8(&Method_UnityEngine_GameObject_GetComponentInChildren_UISprite___, v13);
    sub_1B863B8(&Method_UnityEngine_GameObject_GetComponent_ModelLineComponent___, v14);
    sub_1B863B8(&LocalizationManager_TypeInfo, v15);
    sub_1B863B8(&Method_NetworkManager_getRequest_BattleSetupScenarioRequest___, v16);
    sub_1B863B8(&NetworkManager_TypeInfo, v17);
    sub_1B863B8(&Method_System_Nullable_Vector3___ctor__, v18);
    sub_1B863B8(&Method_System_Nullable_float___ctor__, v19);
    sub_1B863B8(&UnityEngine_Object_TypeInfo, v20);
    sub_1B863B8(&Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___, v21);
    sub_1B863B8(&Method_QuestAfterAction_GetMapComponent_ModelLineComponent___, v22);
    sub_1B863B8(&Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___, v23);
    sub_1B863B8(&Method_QuestAfterAction_GetMapComponent_srcLineSprite___, v24);
    sub_1B863B8(&NetworkManager_ResultCallbackFunc_TypeInfo, v25);
    sub_1B863B8(&SceneJumpInfo_TypeInfo, v26);
    sub_1B863B8(&SeManager_TypeInfo, v27);
    sub_1B863B8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v28);
    sub_1B863B8(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v29);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v30);
    sub_1B863B8(&Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__, v31);
    sub_1B863B8(&Method_SingletonTemplate_QuestTree__get_Instance__, v32);
    sub_1B863B8(&SoundManager_TypeInfo, v33);
    sub_1B863B8(&Method_QuestAfterAction_StateMain_UpdateAnim__, v34);
    sub_1B863B8(&string___TypeInfo, v35);
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v36);
    sub_1B863B8(&TerminalSceneComponent_TypeInfo, v37);
    sub_1B863B8(&QuestAfterAction_TitleInfoControlParam_TypeInfo, v38);
    sub_1B863B8(&Method_QuestAfterAction_StateMain___c__UpdateAnim_b__16_22__, v39);
    sub_1B863B8(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__10__, v40);
    sub_1B863B8(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__11__, v41);
    sub_1B863B8(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__12__, v42);
    sub_1B863B8(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__23__, v43);
    sub_1B863B8(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__29__, v44);
    sub_1B863B8(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__30__, v45);
    sub_1B863B8(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__31__, v46);
    sub_1B863B8(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__32__, v47);
    sub_1B863B8(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__33__, v48);
    sub_1B863B8(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__9__, v49);
    sub_1B863B8(&QuestAfterAction_StateMain___c__DisplayClass16_0_TypeInfo, v50);
    sub_1B863B8(&Method_QuestAfterAction_StateMain___c__DisplayClass16_10__UpdateAnim_b__13__, v51);
    sub_1B863B8(&Method_QuestAfterAction_StateMain___c__DisplayClass16_10__UpdateAnim_b__14__, v52);
    sub_1B863B8(&QuestAfterAction_StateMain___c__DisplayClass16_10_TypeInfo, v53);
    sub_1B863B8(&Method_QuestAfterAction_StateMain___c__DisplayClass16_11__UpdateAnim_b__15__, v54);
    sub_1B863B8(&Method_QuestAfterAction_StateMain___c__DisplayClass16_11__UpdateAnim_b__16__, v55);
    sub_1B863B8(&QuestAfterAction_StateMain___c__DisplayClass16_11_TypeInfo, v56);
    sub_1B863B8(&Method_QuestAfterAction_StateMain___c__DisplayClass16_12__UpdateAnim_b__17__, v57);
    sub_1B863B8(&QuestAfterAction_StateMain___c__DisplayClass16_12_TypeInfo, v58);
    sub_1B863B8(&Method_QuestAfterAction_StateMain___c__DisplayClass16_13__UpdateAnim_b__18__, v59);
    sub_1B863B8(&QuestAfterAction_StateMain___c__DisplayClass16_13_TypeInfo, v60);
    sub_1B863B8(&Method_QuestAfterAction_StateMain___c__DisplayClass16_15__UpdateAnim_b__20__, v61);
    sub_1B863B8(&Method_QuestAfterAction_StateMain___c__DisplayClass16_15__UpdateAnim_b__21__, v62);
    sub_1B863B8(&QuestAfterAction_StateMain___c__DisplayClass16_15_TypeInfo, v63);
    sub_1B863B8(&Method_QuestAfterAction_StateMain___c__DisplayClass16_16__UpdateAnim_b__24__, v64);
    sub_1B863B8(&QuestAfterAction_StateMain___c__DisplayClass16_16_TypeInfo, v65);
    sub_1B863B8(&Method_QuestAfterAction_StateMain___c__DisplayClass16_1__UpdateAnim_b__0__, v66);
    sub_1B863B8(&QuestAfterAction_StateMain___c__DisplayClass16_1_TypeInfo, v67);
    sub_1B863B8(&Method_QuestAfterAction_StateMain___c__DisplayClass16_2__UpdateAnim_b__1__, v68);
    sub_1B863B8(&QuestAfterAction_StateMain___c__DisplayClass16_2_TypeInfo, v69);
    sub_1B863B8(&Method_QuestAfterAction_StateMain___c__DisplayClass16_3__UpdateAnim_b__2__, v70);
    sub_1B863B8(&QuestAfterAction_StateMain___c__DisplayClass16_3_TypeInfo, v71);
    sub_1B863B8(&Method_QuestAfterAction_StateMain___c__DisplayClass16_4__UpdateAnim_b__3__, v72);
    sub_1B863B8(&QuestAfterAction_StateMain___c__DisplayClass16_4_TypeInfo, v73);
    sub_1B863B8(&Method_QuestAfterAction_StateMain___c__DisplayClass16_5__UpdateAnim_b__4__, v74);
    sub_1B863B8(&QuestAfterAction_StateMain___c__DisplayClass16_5_TypeInfo, v75);
    sub_1B863B8(&Method_QuestAfterAction_StateMain___c__DisplayClass16_6__UpdateAnim_b__5__, v76);
    sub_1B863B8(&QuestAfterAction_StateMain___c__DisplayClass16_6_TypeInfo, v77);
    sub_1B863B8(&Method_QuestAfterAction_StateMain___c__DisplayClass16_7__UpdateAnim_b__6__, v78);
    sub_1B863B8(&QuestAfterAction_StateMain___c__DisplayClass16_7_TypeInfo, v79);
    sub_1B863B8(&Method_QuestAfterAction_StateMain___c__DisplayClass16_8__UpdateAnim_b__7__, v80);
    sub_1B863B8(&QuestAfterAction_StateMain___c__DisplayClass16_8_TypeInfo, v81);
    sub_1B863B8(&Method_QuestAfterAction_StateMain___c__DisplayClass16_9__UpdateAnim_b__8__, v82);
    sub_1B863B8(&QuestAfterAction_StateMain___c__DisplayClass16_9_TypeInfo, v83);
    sub_1B863B8(&QuestAfterAction_StateMain___c_TypeInfo, v84);
    sub_1B863B8(&StringLiteral_89/*"\r\n"*/, v85);
    sub_1B863B8(&StringLiteral_1400/*"30101"*/, v86);
    sub_1B863B8(&StringLiteral_10661/*"QUEST_AFTER_ACTION_MESSAGE_"*/, v87);
    sub_1B863B8(&StringLiteral_1401/*"30102"*/, v88);
    sub_1B863B8(&StringLiteral_1326/*"10703"*/, v89);
    sub_1B863B8(&StringLiteral_817/*","*/, v90);
    sub_1B863B8(&StringLiteral_3316/*"CAPTER WAIT"*/, v91);
    sub_1B863B8(&StringLiteral_1/*""*/, v92);
    sub_1B863B8(&StringLiteral_19605/*"gevINFOBAR_BACK"*/, v93);
    sub_1B863B8(&StringLiteral_1139/*"0"*/, v94);
    byte_4A4B116 = 1;
  }
  isQuickUpdate = 0;
  *(_QWORD *)&color.fields.r = 0LL;
  *(_QWORD *)&color.fields.b = 0LL;
  value = 0LL;
  entity = 0LL;
  v95 = sub_1B86604(QuestAfterAction_StateMain___c__DisplayClass16_0_TypeInfo);
  QuestAfterAction_StateMain___c__DisplayClass16_0___ctor(
    (QuestAfterAction_StateMain___c__DisplayClass16_0_o *)v95,
    0LL);
  if ( !v95 )
    goto LABEL_1017;
  *(_QWORD *)(v95 + 16) = this;
  sub_1B8635C((CGThumbnailListItem_o *)(v95 + 16), (int32_t)this, v98, v99);
  *(_QWORD *)(v95 + 24) = that;
  v100 = (QuestAfterAction_o **)(v95 + 24);
  sub_1B8635C((CGThumbnailListItem_o *)(v95 + 24), (int32_t)that, v101, v102);
  if ( this->fields.IsAnimDoing )
    return;
  updated = ((__int64 (__fastcall *)(QuestAfterAction_StateMain_o *, Il2CppMethodPointer))this->klass->vtable._10_get_CommandBuf.method)(
              this,
              this->klass->vtable._11_get_CommandIndex.methodPtr);
  if ( !updated )
    return;
  if ( !*v100 )
    goto LABEL_1017;
  if ( (*v100)->fields.isSkippedNext )
  {
    updated = ((__int64 (__fastcall *)(QuestAfterAction_StateMain_o *, Il2CppMethodPointer))this->klass->vtable._14_EndAnim.method)(
                this,
                this->klass->vtable._15_onEnd.methodPtr);
    if ( *v100 )
    {
      (*v100)->fields.isSkippedNext = 0;
      return;
    }
LABEL_1017:
    sub_1B86614(updated, v97);
  }
  klass = this->klass;
  this->fields.IsAnimDoing = 1;
  v104 = ((__int64 (__fastcall *)(QuestAfterAction_StateMain_o *, Il2CppMethodPointer))klass->vtable._10_get_CommandBuf.method)(
           this,
           klass->vtable._11_get_CommandIndex.methodPtr);
  updated = ((__int64 (__fastcall *)(QuestAfterAction_StateMain_o *, Il2CppMethodPointer))this->klass->vtable._11_get_CommandIndex.method)(
              this,
              this->klass->vtable._12_set_CommandIndex.methodPtr);
  if ( !v104 )
    goto LABEL_1017;
  if ( (unsigned int)updated >= *(_DWORD *)(v104 + 24) )
    goto LABEL_1018;
  v105 = *(QuestAfterAction_Command_o **)(v104 + 8LL * (int)updated + 32);
  updated = ((__int64 (__fastcall *)(QuestAfterAction_StateMain_o *, QuestAfterAction_Command_o *, Il2CppMethodPointer))this->klass->vtable._9_IsUsableCommand.method)(
              this,
              v105,
              this->klass->vtable._10_get_CommandBuf.methodPtr);
  if ( (updated & 1) == 0 )
    goto LABEL_481;
  v106 = *v100;
  if ( !*v100 )
    goto LABEL_1017;
  BlankEarthQuestAfterAction_k__BackingField = v106->fields._BlankEarthQuestAfterAction_k__BackingField;
  v108 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
  System_Action___ctor(v108, (Il2CppObject *)this, (intptr_t)this->klass->vtable._15_onEnd.methodPtr, 0LL);
  if ( !BlankEarthQuestAfterAction_k__BackingField )
    goto LABEL_1017;
  updated = BlankEarthQuestAfterAction__UpdateAnim(
              BlankEarthQuestAfterAction_k__BackingField,
              v106,
              v105,
              v108,
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
        *v100,
        this->klass->vtable._14_EndAnim.methodPtr);
      return;
    }
    return;
  }
  if ( !v105 )
    goto LABEL_1017;
  id = v105->fields.id;
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
          if ( !byte_4A48DB8 )
          {
            sub_1B863B8(&TerminalSceneComponent_TypeInfo, v97);
            byte_4A48DB8 = 1;
          }
          updated = (__int64)TerminalSceneComponent_TypeInfo;
          if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            updated = (__int64)TerminalSceneComponent_TypeInfo;
          }
          v222 = **(_QWORD **)(updated + 184);
          if ( !v222 )
            goto LABEL_1017;
          updated = *(_QWORD *)(v222 + 256);
          if ( !updated )
            goto LABEL_1017;
          updated = (__int64)ScrTerminalListTop__mfGetMyFsmP((ScrTerminalListTop_o *)updated, 0LL);
          if ( !updated )
            goto LABEL_1017;
          v223 = (PlayMakerFSM_o *)updated;
          ActiveStateName = PlayMakerFSM__get_ActiveStateName((PlayMakerFSM_o *)updated, 0LL);
          if ( System_String__op_Equality(ActiveStateName, (System_String_o *)StringLiteral_3316/*"CAPTER WAIT"*/, 0LL) )
          {
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            if ( !byte_4A48DB8 )
            {
              sub_1B863B8(&TerminalSceneComponent_TypeInfo, v97);
              byte_4A48DB8 = 1;
            }
            updated = (__int64)TerminalSceneComponent_TypeInfo;
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
              updated = (__int64)TerminalSceneComponent_TypeInfo;
            }
            v225 = **(_QWORD **)(updated + 184);
            if ( !v225 )
              goto LABEL_1017;
            v226 = *(_QWORD *)(v225 + 256);
            if ( !v226 )
              goto LABEL_1017;
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
              v228 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
              System_Action___ctor(v228, v229, Method_QuestAfterAction_StateMain___c__UpdateAnim_b__16_22__, 0LL);
              static_fields = QuestAfterAction_StateMain___c_TypeInfo->static_fields;
              static_fields->__9__16_22 = v228;
              sub_1B8635C((CGThumbnailListItem_o *)&static_fields->__9__16_22, (int32_t)v228, v231, v232);
            }
            if ( !v227 )
              goto LABEL_1017;
            QuestBoardListViewManager__SetMode(v227, 4, v228, 0, 0, 0LL);
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            if ( !byte_4A48DB8 )
            {
              sub_1B863B8(&TerminalSceneComponent_TypeInfo, v97);
              byte_4A48DB8 = 1;
            }
            v233 = TerminalSceneComponent_TypeInfo;
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
              v233 = TerminalSceneComponent_TypeInfo;
            }
            updated = (__int64)v233->static_fields->mInstance;
            if ( !updated )
              goto LABEL_1017;
            TerminalSceneComponent__CallQuestInformationClose((TerminalSceneComponent_o *)updated, 0LL);
            PlayMakerFSM__SendEvent(v223, (System_String_o *)StringLiteral_19605/*"gevINFOBAR_BACK"*/, 0LL);
          }
          goto LABEL_481;
        }
        if ( id != 510 )
        {
          if ( id == 520 )
          {
            DEFAULT_FADE_TIME = System_Single__Parse(v105->fields.param, 0LL);
            if ( DEFAULT_FADE_TIME <= 0.0 )
            {
              v113 = AvalonSceneManager_TypeInfo;
              if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
                v113 = AvalonSceneManager_TypeInfo;
              }
              DEFAULT_FADE_TIME = v113->static_fields->DEFAULT_FADE_TIME;
            }
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            if ( !byte_4A48DB8 )
            {
              sub_1B863B8(&TerminalSceneComponent_TypeInfo, v111);
              byte_4A48DB8 = 1;
            }
            v114 = TerminalSceneComponent_TypeInfo;
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
              v114 = TerminalSceneComponent_TypeInfo;
            }
            mInstance = v114->static_fields->mInstance;
            v116 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
            System_Action___ctor(
              v116,
              (Il2CppObject *)v95,
              Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__23__,
              0LL);
            if ( !mInstance )
              goto LABEL_1017;
            v117 = mInstance;
            v118 = DEFAULT_FADE_TIME;
            v119 = v116;
LABEL_46:
            TerminalSceneComponent__Fadein_MapDisp(v117, v118, v119, 0LL);
          }
          return;
        }
        updated = (__int64)v105->fields.param;
        if ( !updated )
          goto LABEL_1017;
        updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
        if ( !updated )
          goto LABEL_1017;
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
          updated = (__int64)*v100;
          if ( !*v100 )
            goto LABEL_1017;
          MapComponent_object = QuestAfterAction__GetMapComponent_object_(
                                  (QuestAfterAction_o *)updated,
                                  0,
                                  v237,
                                  this,
                                  (const MethodInfo_3002668 *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)MapComponent_object, 0LL, 0LL) )
          {
            if ( v235 >= 1 )
            {
              updated = (__int64)*v100;
              if ( !*v100 )
                goto LABEL_1017;
              v283 = QuestAfterAction__GetMapComponent_object_(
                       (QuestAfterAction_o *)updated,
                       0,
                       v235,
                       this,
                       (const MethodInfo_3002668 *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v283, 0LL, 0LL) )
              {
                if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
                if ( !byte_4A48DB8 )
                {
                  sub_1B863B8(&TerminalSceneComponent_TypeInfo, v97);
                  byte_4A48DB8 = 1;
                }
                updated = (__int64)TerminalSceneComponent_TypeInfo;
                if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
                  updated = (__int64)TerminalSceneComponent_TypeInfo;
                }
                v284 = **(_QWORD **)(updated + 184);
                if ( !v284 )
                  goto LABEL_1017;
                if ( !v283 )
                  goto LABEL_1017;
                v285 = *(ScrTerminalMap_o **)(v284 + 264);
                updated = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v283, 0LL);
                if ( !v285 )
                  goto LABEL_1017;
                ScrTerminalMap__SetPlayerIcon(v285, (UnityEngine_GameObject_o *)updated, 0LL);
              }
            }
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            if ( !byte_4A48DB8 )
            {
              sub_1B863B8(&TerminalSceneComponent_TypeInfo, v97);
              byte_4A48DB8 = 1;
            }
            updated = (__int64)TerminalSceneComponent_TypeInfo;
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
              updated = (__int64)TerminalSceneComponent_TypeInfo;
            }
            v286 = **(_QWORD **)(updated + 184);
            if ( !v286 )
              goto LABEL_1017;
            if ( !MapComponent_object )
              goto LABEL_1017;
            v287 = *(ScrTerminalMap_o **)(v286 + 264);
            gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)MapComponent_object, 0LL);
            v289 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
            System_Action___ctor(v289, (Il2CppObject *)this, (intptr_t)this->klass->vtable._15_onEnd.methodPtr, 0LL);
            if ( !v287 )
              goto LABEL_1017;
            ScrTerminalMap__MovePlayerIcon(v287, gameObject, v237, v289, v236, 0LL);
          }
          return;
        }
        goto LABEL_1018;
      }
      if ( (unsigned int)(id - 351) >= 2 )
      {
        switch ( id )
        {
          case 400:
            v131 = sub_1B86604(QuestAfterAction_StateMain___c__DisplayClass16_10_TypeInfo);
            QuestAfterAction_StateMain___c__DisplayClass16_10___ctor(
              (QuestAfterAction_StateMain___c__DisplayClass16_10_o *)v131,
              0LL);
            if ( !v131 )
              goto LABEL_1017;
            *(_QWORD *)(v131 + 24) = v95;
            v134 = v131 + 24;
            sub_1B8635C((CGThumbnailListItem_o *)(v131 + 24), v95, v132, v133);
            updated = (__int64)v105->fields.param;
            if ( !updated )
              goto LABEL_1017;
            updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
            if ( !updated )
              goto LABEL_1017;
            v135 = *(_QWORD *)(updated + 24);
            v136 = updated;
            if ( v135 )
            {
              if ( !(_DWORD)v135 )
                goto LABEL_1018;
              updated = System_Int32__Parse(*(System_String_o **)(updated + 32), 0LL);
              v137 = updated;
              if ( *(int *)(v136 + 24) >= 2 )
              {
                updated = System_Int32__Parse(*(System_String_o **)(v136 + 40), 0LL);
                v138 = (int)updated < 1;
                if ( *(int *)(v136 + 24) < 3 )
                {
                  v139 = 0;
                }
                else
                {
                  updated = System_Int32__Parse(*(System_String_o **)(v136 + 48), 0LL);
                  v139 = (int)updated > 0;
                }
                goto LABEL_857;
              }
            }
            else
            {
              v137 = 0;
            }
            v139 = 0;
            v138 = 1;
LABEL_857:
            if ( !*(_QWORD *)v134 )
              goto LABEL_1017;
            updated = *(_QWORD *)(*(_QWORD *)v134 + 24LL);
            if ( !updated )
              goto LABEL_1017;
            v598 = QuestAfterAction__GetMapComponent_object_(
                     (QuestAfterAction_o *)updated,
                     2,
                     v137,
                     this,
                     (const MethodInfo_3002668 *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
            *(_QWORD *)(v131 + 16) = v598;
            sub_1B8635C((CGThumbnailListItem_o *)(v131 + 16), (int32_t)v598, v599, v600);
            v601 = *(UnityEngine_Object_o **)(v131 + 16);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            updated = UnityEngine_Object__op_Equality(v601, 0LL, 0LL);
            if ( (updated & 1) != 0 )
              return;
            v602 = *(MapGimmickComponent_o **)(v131 + 16);
            if ( !v602 )
              goto LABEL_1017;
            v602->fields.isForceNotActive = v139;
            v603 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
            v604 = v603;
            if ( v138 )
            {
              System_Action___ctor(
                v603,
                (Il2CppObject *)v131,
                Method_QuestAfterAction_StateMain___c__DisplayClass16_10__UpdateAnim_b__14__,
                0LL);
              v527 = 2;
              v605 = v602;
              v606 = v604;
LABEL_966:
              MapGimmickComponent__SetState(v605, v527, v606, v526);
              return;
            }
            System_Action___ctor(
              v603,
              (Il2CppObject *)v131,
              Method_QuestAfterAction_StateMain___c__DisplayClass16_10__UpdateAnim_b__13__,
              0LL);
            MapGimmickComponent__SetState(v602, 2, v604, v650);
            updated = ((__int64 (__fastcall *)(QuestAfterAction_StateMain_o *, Il2CppMethodPointer))this->klass->vtable._14_EndAnim.method)(
                        this,
                        this->klass->vtable._15_onEnd.methodPtr);
            v651 = *(_QWORD *)(v131 + 24);
            if ( !v651 )
              goto LABEL_1017;
            goto LABEL_971;
          case 401:
            v457 = sub_1B86604(QuestAfterAction_StateMain___c__DisplayClass16_11_TypeInfo);
            QuestAfterAction_StateMain___c__DisplayClass16_11___ctor(
              (QuestAfterAction_StateMain___c__DisplayClass16_11_o *)v457,
              0LL);
            if ( !v457 )
              goto LABEL_1017;
            *(_QWORD *)(v457 + 24) = v95;
            v460 = v457 + 24;
            sub_1B8635C((CGThumbnailListItem_o *)(v457 + 24), v95, v458, v459);
            updated = (__int64)v105->fields.param;
            if ( !updated )
              goto LABEL_1017;
            updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
            if ( !updated )
              goto LABEL_1017;
            v461 = *(_QWORD *)(updated + 24);
            v462 = updated;
            if ( v461 )
            {
              if ( !(_DWORD)v461 )
                goto LABEL_1018;
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
                goto LABEL_867;
              }
            }
            else
            {
              v463 = 0;
            }
            v465 = 0;
            v464 = 1;
LABEL_867:
            if ( !*(_QWORD *)v460 )
              goto LABEL_1017;
            updated = *(_QWORD *)(*(_QWORD *)v460 + 24LL);
            if ( !updated )
              goto LABEL_1017;
            v607 = QuestAfterAction__GetMapComponent_object_(
                     (QuestAfterAction_o *)updated,
                     2,
                     v463,
                     this,
                     (const MethodInfo_3002668 *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
            *(_QWORD *)(v457 + 16) = v607;
            v608 = (MapGimmickComponent_o **)(v457 + 16);
            sub_1B8635C((CGThumbnailListItem_o *)(v457 + 16), (int32_t)v607, v609, v610);
            v611 = *(UnityEngine_Object_o **)(v457 + 16);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            updated = UnityEngine_Object__op_Equality(v611, 0LL, 0LL);
            if ( (updated & 1) != 0 )
              return;
            v612 = *v608;
            if ( !*v608 )
              goto LABEL_1017;
            v612->fields.isForceLoop = v465;
            v612->fields.isForceNotActive = 0;
            if ( *(int *)(v462 + 24) >= 4 )
            {
              updated = System_Int32__Parse(*(System_String_o **)(v462 + 56), 0LL);
              if ( !*v608 )
                goto LABEL_1017;
              MapGimmickComponent__SetUseAnimNum(*v608, updated, 1, v613);
              v612 = *v608;
            }
            v614 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
            v510 = v614;
            if ( v464 )
            {
              System_Action___ctor(
                v614,
                (Il2CppObject *)v457,
                Method_QuestAfterAction_StateMain___c__DisplayClass16_11__UpdateAnim_b__16__,
                0LL);
              if ( !v612 )
                goto LABEL_1017;
              v527 = 3;
              v605 = v612;
LABEL_965:
              v606 = v510;
              goto LABEL_966;
            }
            System_Action___ctor(
              v614,
              (Il2CppObject *)v457,
              Method_QuestAfterAction_StateMain___c__DisplayClass16_11__UpdateAnim_b__15__,
              0LL);
            if ( !v612 )
              goto LABEL_1017;
            MapGimmickComponent__SetState(v612, 3, v510, v652);
            updated = ((__int64 (__fastcall *)(QuestAfterAction_StateMain_o *, Il2CppMethodPointer))this->klass->vtable._14_EndAnim.method)(
                        this,
                        this->klass->vtable._15_onEnd.methodPtr);
            v651 = *(_QWORD *)v460;
            if ( !*(_QWORD *)v460 )
              goto LABEL_1017;
LABEL_971:
            ((void (__fastcall *)(QuestAfterAction_StateMain_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._13_UpdateAnim.method)(
              this,
              *(_QWORD *)(v651 + 24),
              this->klass->vtable._14_EndAnim.methodPtr);
            return;
          case 402:
            updated = (__int64)v105->fields.param;
            if ( !updated )
              goto LABEL_1017;
            updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
            if ( !updated )
              goto LABEL_1017;
            v466 = *(_QWORD *)(updated + 24);
            v467 = updated;
            if ( v466 )
            {
              if ( !(_DWORD)v466 )
                goto LABEL_1018;
              v468 = System_Int32__Parse(*(System_String_o **)(updated + 32), 0LL);
              if ( *(int *)(v467 + 24) >= 2 )
              {
                v469 = System_Int32__Parse(*(System_String_o **)(v467 + 40), 0LL) > 0;
                goto LABEL_881;
              }
            }
            else
            {
              v468 = 0;
            }
            v469 = 0;
LABEL_881:
            updated = (__int64)*v100;
            if ( !*v100 )
              goto LABEL_1017;
            v615 = QuestAfterAction__GetMapComponent_object_(
                     (QuestAfterAction_o *)updated,
                     2,
                     v468,
                     this,
                     (const MethodInfo_3002668 *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            updated = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v615, 0LL, 0LL);
            if ( (updated & 1) == 0 )
            {
              if ( !v615 )
                goto LABEL_1017;
              BYTE1(v615[6].monitor) = v469;
              MapGimmickComponent__SetDispAnim_34448660((MapGimmickComponent_o *)v615, 0, 0.0, 0, v616);
              v404 = v615[7].klass;
              if ( !v404 )
                goto LABEL_1017;
LABEL_887:
              v404[4] = 0;
              goto LABEL_18;
            }
            return;
          case 403:
            updated = (__int64)v105->fields.param;
            if ( !updated )
              goto LABEL_1017;
            updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
            if ( !updated )
              goto LABEL_1017;
            v470 = *(_QWORD *)(updated + 24);
            v471 = updated;
            if ( v470 )
            {
              if ( !(_DWORD)v470 )
                goto LABEL_1018;
              v472 = System_Int32__Parse(*(System_String_o **)(updated + 32), 0LL);
              if ( *(int *)(v471 + 24) >= 2 )
              {
                v473 = System_Int32__Parse(*(System_String_o **)(v471 + 40), 0LL) > 0;
                goto LABEL_890;
              }
            }
            else
            {
              v472 = 0;
            }
            v473 = 0;
LABEL_890:
            updated = (__int64)*v100;
            if ( !*v100 )
              goto LABEL_1017;
            v617 = QuestAfterAction__GetMapComponent_object_(
                     (QuestAfterAction_o *)updated,
                     2,
                     v472,
                     this,
                     (const MethodInfo_3002668 *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            updated = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v617, 0LL, 0LL);
            if ( (updated & 1) == 0 )
            {
              if ( !v617 )
                goto LABEL_1017;
              LOBYTE(v617[6].monitor) = v473;
              BYTE1(v617[6].monitor) = 0;
              MapGimmickComponent__SetDispAnim_34448660((MapGimmickComponent_o *)v617, 1, 0.0, 0, v618);
              v619 = v617[7].klass;
              if ( !v619 )
                goto LABEL_1017;
              LODWORD(v619->_1.name) = 1;
              goto LABEL_18;
            }
            return;
          case 404:
            updated = (__int64)v105->fields.param;
            if ( !updated )
              goto LABEL_1017;
            updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
            if ( !updated )
              goto LABEL_1017;
            v474 = updated;
            if ( *(int *)(updated + 24) <= 4 )
              goto LABEL_481;
            v475 = System_Single__Parse(*(System_String_o **)(updated + 56), 0LL);
            if ( !*(_DWORD *)(v474 + 24) )
              goto LABEL_1018;
            v476 = *v100;
            v477 = v475;
            updated = System_Int32__Parse(*(System_String_o **)(v474 + 32), 0LL);
            if ( !v476 )
              goto LABEL_1017;
            v478 = QuestAfterAction__GetMapComponent_object_(
                     v476,
                     2,
                     updated,
                     this,
                     (const MethodInfo_3002668 *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v478, 0LL, 0LL) )
              return;
            v479 = *(int *)(v474 + 24) >= 6 && System_Int32__Parse(*(System_String_o **)(v474 + 72), 0LL) > 0;
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            if ( !byte_4A48DB8 )
            {
              sub_1B863B8(&TerminalSceneComponent_TypeInfo, v97);
              byte_4A48DB8 = 1;
            }
            updated = (__int64)TerminalSceneComponent_TypeInfo;
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
              updated = (__int64)TerminalSceneComponent_TypeInfo;
            }
            v658 = **(_QWORD **)(updated + 184);
            if ( !v658 )
              goto LABEL_1017;
            if ( *(_DWORD *)(v474 + 24) <= 1u )
              goto LABEL_1018;
            v659 = *(ScrTerminalMap_o **)(v658 + 264);
            v660 = System_Single__Parse(*(System_String_o **)(v474 + 40), 0LL);
            if ( *(_DWORD *)(v474 + 24) <= 2u )
              goto LABEL_1018;
            v661 = v660;
            v662 = System_Single__Parse(*(System_String_o **)(v474 + 48), 0LL);
            if ( !v659 )
              goto LABEL_1017;
            *(UnityEngine_Vector3_o *)&v663 = ScrTerminalMap__LocalPosFromCoord(v659, v661, v662, 0.0, 0.0, 0LL);
            if ( *(_DWORD *)(v474 + 24) <= 4u )
              goto LABEL_1018;
            v666 = v663;
            v667 = v664;
            v668 = v665;
            v669 = v477 * 0.001;
            updated = System_Int32__Parse(*(System_String_o **)(v474 + 64), 0LL);
            v671 = updated;
            if ( v479 )
            {
              if ( !v478 )
                goto LABEL_1017;
              v711.fields.x = v666;
              v711.fields.y = v667;
              v711.fields.z = v668;
              MapGimmickComponent__SetMoveAnim((MapGimmickComponent_o *)v478, v711, v669, updated, 0LL, v670);
              goto LABEL_481;
            }
            v672 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
            System_Action___ctor(v672, (Il2CppObject *)this, (intptr_t)this->klass->vtable._15_onEnd.methodPtr, 0LL);
            if ( !v478 )
              goto LABEL_1017;
            v643 = (MapGimmickComponent_o *)v478;
            v644 = v666;
            v645 = v667;
            v646 = v668;
            v647 = v669;
            v648 = v671;
            v649 = v672;
LABEL_1008:
            MapGimmickComponent__SetMoveAnim(v643, *(UnityEngine_Vector3_o *)&v644, v647, v648, v649, v642);
            return;
          case 405:
            v480 = sub_1B86604(QuestAfterAction_StateMain___c__DisplayClass16_12_TypeInfo);
            QuestAfterAction_StateMain___c__DisplayClass16_12___ctor(
              (QuestAfterAction_StateMain___c__DisplayClass16_12_o *)v480,
              0LL);
            if ( !v480 )
              goto LABEL_1017;
            *(_QWORD *)(v480 + 24) = v95;
            sub_1B8635C((CGThumbnailListItem_o *)(v480 + 24), v95, v481, v482);
            v483 = *(_QWORD *)(v480 + 24);
            if ( !v483 )
              goto LABEL_1017;
            v484 = *(QuestAfterAction_o **)(v483 + 24);
            updated = System_Int32__Parse(v105->fields.param, 0LL);
            if ( !v484 )
              goto LABEL_1017;
            v485 = QuestAfterAction__GetMapComponent_object_(
                     v484,
                     2,
                     updated,
                     this,
                     (const MethodInfo_3002668 *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
            *(_QWORD *)(v480 + 16) = v485;
            sub_1B8635C((CGThumbnailListItem_o *)(v480 + 16), (int32_t)v485, v486, v487);
            v488 = *(UnityEngine_Object_o **)(v480 + 16);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Equality(v488, 0LL, 0LL) )
              return;
            v489 = *(MapGimmickComponent_o **)(v480 + 16);
            v490 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
            System_Action___ctor(
              v490,
              (Il2CppObject *)v480,
              Method_QuestAfterAction_StateMain___c__DisplayClass16_12__UpdateAnim_b__17__,
              0LL);
            if ( !v489 )
              goto LABEL_1017;
            MapGimmickComponent__SetState(v489, 3, v490, v491);
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            if ( !byte_4A48DB8 )
            {
              sub_1B863B8(&TerminalSceneComponent_TypeInfo, v97);
              byte_4A48DB8 = 1;
            }
            updated = (__int64)TerminalSceneComponent_TypeInfo;
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
              updated = (__int64)TerminalSceneComponent_TypeInfo;
            }
            v492 = **(TerminalSceneComponent_o ***)(updated + 184);
            if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
            if ( !v492 )
              goto LABEL_1017;
            v117 = v492;
            v119 = 0LL;
            v118 = AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME;
            goto LABEL_46;
          case 406:
            v493 = sub_1B86604(QuestAfterAction_StateMain___c__DisplayClass16_13_TypeInfo);
            QuestAfterAction_StateMain___c__DisplayClass16_13___ctor(
              (QuestAfterAction_StateMain___c__DisplayClass16_13_o *)v493,
              0LL);
            if ( !v493 )
              goto LABEL_1017;
            *(_QWORD *)(v493 + 32) = v95;
            sub_1B8635C((CGThumbnailListItem_o *)(v493 + 32), v95, v494, v495);
            updated = (__int64)v105->fields.param;
            if ( !updated )
              goto LABEL_1017;
            v496 = System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
            *(_QWORD *)(v493 + 24) = v496;
            v497 = (__int64 *)(v493 + 24);
            sub_1B8635C((CGThumbnailListItem_o *)(v493 + 24), (int32_t)v496, v498, v499);
            v500 = *(_QWORD *)(v493 + 32);
            if ( !v500 )
              goto LABEL_1017;
            v501 = *v497;
            if ( !*v497 )
              goto LABEL_1017;
            if ( !*(_DWORD *)(v501 + 24) )
              goto LABEL_1018;
            v502 = *(QuestAfterAction_o **)(v500 + 24);
            updated = System_Int32__Parse(*(System_String_o **)(v501 + 32), 0LL);
            if ( !v502 )
              goto LABEL_1017;
            v503 = QuestAfterAction__GetMapComponent_object_(
                     v502,
                     2,
                     updated,
                     this,
                     (const MethodInfo_3002668 *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
            *(_QWORD *)(v493 + 16) = v503;
            sub_1B8635C((CGThumbnailListItem_o *)(v493 + 16), (int32_t)v503, v504, v505);
            v506 = *(UnityEngine_Object_o **)(v493 + 16);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Equality(v506, 0LL, 0LL) )
              return;
            v507 = *(MapGimmickComponent_o **)(v493 + 16);
            v508 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
            v509 = &Method_QuestAfterAction_StateMain___c__DisplayClass16_13__UpdateAnim_b__18__;
            v510 = v508;
            goto LABEL_733;
          case 407:
            updated = (__int64)v105->fields.param;
            if ( !updated )
              goto LABEL_1017;
            updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
            if ( !updated )
              goto LABEL_1017;
            v511 = updated;
            if ( !*(_DWORD *)(updated + 24) )
              goto LABEL_1018;
            v512 = *v100;
            updated = System_Int32__Parse(*(System_String_o **)(updated + 32), 0LL);
            if ( !v512 )
              goto LABEL_1017;
            v513 = QuestAfterAction__GetMapComponent_object_(
                     v512,
                     2,
                     updated,
                     this,
                     (const MethodInfo_3002668 *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            updated = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v513, 0LL, 0LL);
            if ( (updated & 1) != 0 )
              return;
            if ( !v513 )
              goto LABEL_1017;
            updated = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v513, 0LL);
            if ( !updated )
              goto LABEL_1017;
            updated = (__int64)UnityEngine_GameObject__GetComponentInChildren_object_(
                                 (UnityEngine_GameObject_o *)updated,
                                 (const MethodInfo_2FC1054 *)Method_UnityEngine_GameObject_GetComponentInChildren_UISprite___);
            if ( *(_DWORD *)(v511 + 24) <= 1u )
              goto LABEL_1018;
            v514 = (UIWidget_o *)updated;
            updated = UnityEngine_ColorUtility__TryParseHtmlString(*(System_String_o **)(v511 + 40), &color, 0LL);
            if ( !v514 )
              goto LABEL_1017;
            UIWidget__set_color(v514, color, 0LL);
            goto LABEL_481;
          case 408:
            v493 = sub_1B86604(QuestAfterAction_StateMain___c__DisplayClass16_15_TypeInfo);
            QuestAfterAction_StateMain___c__DisplayClass16_15___ctor(
              (QuestAfterAction_StateMain___c__DisplayClass16_15_o *)v493,
              0LL);
            if ( !v493 )
              goto LABEL_1017;
            *(_QWORD *)(v493 + 24) = v95;
            sub_1B8635C((CGThumbnailListItem_o *)(v493 + 24), v95, v515, v516);
            v517 = *(_QWORD *)(v493 + 24);
            if ( !v517 )
              goto LABEL_1017;
            v518 = *(QuestAfterAction_o **)(v517 + 24);
            updated = System_Int32__Parse(v105->fields.param, 0LL);
            if ( !v518 )
              goto LABEL_1017;
            v519 = QuestAfterAction__GetMapComponent_object_(
                     v518,
                     2,
                     updated,
                     this,
                     (const MethodInfo_3002668 *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
            *(_QWORD *)(v493 + 16) = v519;
            v520 = v493 + 16;
            sub_1B8635C((CGThumbnailListItem_o *)(v493 + 16), (int32_t)v519, v521, v522);
            v523 = *(UnityEngine_Object_o **)(v493 + 16);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Equality(v523, 0LL, 0LL) )
              return;
            updated = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_3839AA0 *)Method_SingletonTemplate_QuestTree__get_Instance__);
            if ( !*(_QWORD *)v520 || !updated )
              goto LABEL_1017;
            v524 = QuestTree__CheckMapGimmickCond_34862436(
                     (QuestTree_o *)updated,
                     *(MapControl_MapGimmickInfo_o **)(*(_QWORD *)v520 + 112LL),
                     0LL);
            v507 = *(MapGimmickComponent_o **)v520;
            v525 = v524;
            v508 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
            v510 = v508;
            if ( v525 )
            {
              v509 = &Method_QuestAfterAction_StateMain___c__DisplayClass16_15__UpdateAnim_b__20__;
LABEL_733:
              System_Action___ctor(v508, (Il2CppObject *)v493, *v509, 0LL);
              if ( !v507 )
                goto LABEL_1017;
              v527 = 3;
            }
            else
            {
              System_Action___ctor(
                v508,
                (Il2CppObject *)v493,
                Method_QuestAfterAction_StateMain___c__DisplayClass16_15__UpdateAnim_b__21__,
                0LL);
              if ( !v507 )
                goto LABEL_1017;
              v527 = 2;
            }
            v605 = v507;
            goto LABEL_965;
          case 409:
            updated = (__int64)v105->fields.param;
            if ( !updated )
              goto LABEL_1017;
            updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
            if ( !updated )
              goto LABEL_1017;
            v528 = *(_QWORD *)(updated + 24);
            v529 = updated;
            if ( v528 )
            {
              if ( !(_DWORD)v528 )
                goto LABEL_1018;
              v530 = System_Int32__Parse(*(System_String_o **)(updated + 32), 0LL);
              if ( *(int *)(v529 + 24) >= 2 )
              {
                v531 = System_Int32__Parse(*(System_String_o **)(v529 + 40), 0LL) > 0;
                goto LABEL_899;
              }
            }
            else
            {
              v530 = 0;
            }
            v531 = 0;
LABEL_899:
            updated = (__int64)*v100;
            if ( !*v100 )
              goto LABEL_1017;
            v620 = QuestAfterAction__GetMapComponent_object_(
                     (QuestAfterAction_o *)updated,
                     2,
                     v530,
                     this,
                     (const MethodInfo_3002668 *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            updated = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v620, 0LL, 0LL);
            if ( (updated & 1) == 0 )
            {
              if ( !v620 )
                goto LABEL_1017;
              LOBYTE(v620[6].monitor) = v531;
              BYTE1(v620[6].monitor) = 0;
              AnimTime = MapGimmickComponent__GetAnimTime((MapGimmickComponent_o *)v620, v97);
              MapGimmickComponent__SetDispAnim_34448660((MapGimmickComponent_o *)v620, 1, AnimTime, 1, v622);
              v623 = v620[7].klass;
              if ( !v623 )
                goto LABEL_1017;
              LODWORD(v623->_1.name) = 1;
              v624 = this->klass;
              this->fields.IsAnimDoing = 0;
              v625 = ((__int64 (__fastcall *)(QuestAfterAction_StateMain_o *, Il2CppMethodPointer))v624->vtable._11_get_CommandIndex.method)(
                       this,
                       v624->vtable._12_set_CommandIndex.methodPtr);
              ((void (__fastcall *)(QuestAfterAction_StateMain_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._12_set_CommandIndex.method)(
                this,
                (unsigned int)(v625 + 1),
                this->klass->vtable._13_UpdateAnim.methodPtr);
              goto LABEL_19;
            }
            return;
          case 410:
            updated = (__int64)v105->fields.param;
            if ( !updated )
              goto LABEL_1017;
            updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
            if ( !updated )
              goto LABEL_1017;
            v532 = updated;
            if ( *(int *)(updated + 24) <= 2 )
              goto LABEL_481;
            v533 = *v100;
            updated = System_Int32__Parse(*(System_String_o **)(updated + 32), 0LL);
            if ( !v533 )
              goto LABEL_1017;
            v534 = QuestAfterAction__GetMapComponent_object_(
                     v533,
                     2,
                     updated,
                     this,
                     (const MethodInfo_3002668 *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            updated = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v534, 0LL, 0LL);
            if ( (updated & 1) != 0 )
              return;
            if ( *(_DWORD *)(v532 + 24) <= 1u )
              goto LABEL_1018;
            v535 = *v100;
            updated = System_Int32__Parse(*(System_String_o **)(v532 + 40), 0LL);
            if ( !v535 )
              goto LABEL_1017;
            v537 = updated;
            v538 = v535;
            v539 = 0;
            goto LABEL_775;
          case 411:
            updated = (__int64)v105->fields.param;
            if ( !updated )
              goto LABEL_1017;
            updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
            if ( !updated )
              goto LABEL_1017;
            v532 = updated;
            if ( *(int *)(updated + 24) <= 2 )
              goto LABEL_481;
            v540 = *v100;
            updated = System_Int32__Parse(*(System_String_o **)(updated + 32), 0LL);
            if ( !v540 )
              goto LABEL_1017;
            v534 = QuestAfterAction__GetMapComponent_object_(
                     v540,
                     2,
                     updated,
                     this,
                     (const MethodInfo_3002668 *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            updated = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v534, 0LL, 0LL);
            if ( (updated & 1) != 0 )
              return;
            if ( *(_DWORD *)(v532 + 24) <= 1u )
              goto LABEL_1018;
            v541 = *v100;
            updated = System_Int32__Parse(*(System_String_o **)(v532 + 40), 0LL);
            if ( !v541 )
              goto LABEL_1017;
            MapGameObject = (UnityEngine_Object_o *)QuestAfterAction__GetMapGameObject(v541, 2, updated, this, v542);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Equality(MapGameObject, 0LL, 0LL) )
              return;
            *(UnityEngine_Vector3_o *)&v544 = GameObjectExtensions__GetLocalPosition(
                                                (UnityEngine_GameObject_o *)MapGameObject,
                                                0LL);
            if ( *(_DWORD *)(v532 + 24) <= 2u )
              goto LABEL_1018;
            x = v544;
            y = v545;
            z = v546;
            goto LABEL_789;
          case 412:
            updated = (__int64)v105->fields.param;
            if ( !updated )
              goto LABEL_1017;
            updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
            if ( !updated )
              goto LABEL_1017;
            v532 = updated;
            if ( *(int *)(updated + 24) <= 2 )
              goto LABEL_481;
            v550 = *v100;
            updated = System_Int32__Parse(*(System_String_o **)(updated + 32), 0LL);
            if ( !v550 )
              goto LABEL_1017;
            v534 = QuestAfterAction__GetMapComponent_object_(
                     v550,
                     2,
                     updated,
                     this,
                     (const MethodInfo_3002668 *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            updated = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v534, 0LL, 0LL);
            if ( (updated & 1) != 0 )
              return;
            if ( *(_DWORD *)(v532 + 24) <= 1u )
              goto LABEL_1018;
            v551 = *v100;
            updated = System_Int32__Parse(*(System_String_o **)(v532 + 40), 0LL);
            if ( !v551 )
              goto LABEL_1017;
            v537 = updated;
            v539 = 1;
            v538 = v551;
LABEL_775:
            v552 = (UnityEngine_Object_o *)QuestAfterAction__GetMapGameObject(v538, v539, v537, this, v536);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Equality(v552, 0LL, 0LL) )
              return;
            LocalPosition = GameObjectExtensions__GetLocalPosition((UnityEngine_GameObject_o *)v552, 0LL);
            x = LocalPosition.fields.x;
            y = LocalPosition.fields.y;
            z = LocalPosition.fields.z;
            if ( !this->fields.IsMapModel )
              goto LABEL_788;
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            if ( !byte_4A48DB8 )
            {
              sub_1B863B8(&TerminalSceneComponent_TypeInfo, v97);
              byte_4A48DB8 = 1;
            }
            updated = (__int64)TerminalSceneComponent_TypeInfo;
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
              updated = (__int64)TerminalSceneComponent_TypeInfo;
            }
            v553 = **(_QWORD **)(updated + 184);
            if ( !v553 )
              goto LABEL_1017;
            updated = *(_QWORD *)(v553 + 264);
            if ( !updated )
              goto LABEL_1017;
            v708.fields.x = x;
            v708.fields.y = y;
            v708.fields.z = z;
            v709 = ScrTerminalMap__ConvertLocalToScreenPosition((ScrTerminalMap_o *)updated, v708, 0LL);
            x = v709.fields.x;
            y = v709.fields.y;
            z = v709.fields.z;
LABEL_788:
            if ( *(_DWORD *)(v532 + 24) <= 2u )
              goto LABEL_1018;
LABEL_789:
            v554 = System_Single__Parse(*(System_String_o **)(v532 + 48), 0LL) * 0.001;
            if ( v554 >= 0.0 )
              v555 = v554;
            else
              v555 = 0.5;
            if ( *(_DWORD *)(v532 + 24) <= 3u )
              goto LABEL_1018;
            v556 = System_Int32__Parse(*(System_String_o **)(v532 + 56), 0LL);
            if ( *(int *)(v532 + 24) >= 5 )
            {
              updated = System_Int32__Parse(*(System_String_o **)(v532 + 64), 0LL);
              if ( (int)updated >= 1 )
              {
                if ( !v534 )
                  goto LABEL_1017;
                v710.fields.x = x;
                v710.fields.y = y;
                v710.fields.z = z;
                MapGimmickComponent__SetMoveAnim((MapGimmickComponent_o *)v534, v710, v555, v556, 0LL, v557);
                goto LABEL_18;
              }
            }
            v641 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
            System_Action___ctor(v641, (Il2CppObject *)this, (intptr_t)this->klass->vtable._15_onEnd.methodPtr, 0LL);
            if ( !v534 )
              goto LABEL_1017;
            v643 = (MapGimmickComponent_o *)v534;
            v644 = x;
            v645 = y;
            v646 = z;
            v647 = v555;
            v648 = v556;
            v649 = v641;
            goto LABEL_1008;
          default:
            if ( id != 500 )
              return;
            v361 = System_Int32__Parse(v105->fields.param, 0LL);
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            if ( !byte_4A4B128 )
            {
              sub_1B863B8(&TerminalPramsManager_TypeInfo, v360);
              byte_4A4B128 = 1;
            }
            v362 = TerminalPramsManager_TypeInfo;
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
              v362 = TerminalPramsManager_TypeInfo;
            }
            v362->static_fields->_AfterActionFocusQuestId_k__BackingField = v361;
            if ( !DataManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
            updated = (__int64)DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_QuestMaster___);
            if ( !updated )
              goto LABEL_1017;
            if ( !DataMasterBase_object__object__int___TryGetEntity(
                    (DataMasterBase_TMaster__TEntity__PKType__o *)updated,
                    &entity,
                    v361,
                    (const MethodInfo_32142CC *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__) )
              goto LABEL_481;
            updated = (__int64)entity;
            if ( !entity )
              goto LABEL_1017;
            v363 = *v100;
            updated = QuestEntity__getSpotId((QuestEntity_o *)entity, 0LL);
            if ( !v363 )
              goto LABEL_1017;
            v364 = QuestAfterAction__GetMapComponent_object_(
                     v363,
                     0,
                     updated,
                     this,
                     (const MethodInfo_3002668 *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            updated = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v364, 0LL, 0LL);
            if ( (updated & 1) == 0 )
              goto LABEL_481;
            if ( !v364 )
              goto LABEL_1017;
            SrcSpotBasePrefab__SelectSpot((SrcSpotBasePrefab_o *)v364, 0, 0LL);
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            if ( !byte_4A4B129 )
            {
              sub_1B863B8(&TerminalPramsManager_TypeInfo, v365);
              byte_4A4B129 = 1;
            }
            v366 = TerminalPramsManager_TypeInfo;
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
              v366 = TerminalPramsManager_TypeInfo;
            }
            v366->static_fields->_IsBackQuestBoardDisable_k__BackingField = 1;
            goto LABEL_481;
        }
      }
      updated = (__int64)v105->fields.param;
      if ( !updated )
        goto LABEL_1017;
      updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
      if ( !updated )
        goto LABEL_1017;
      v156 = updated;
      if ( *(int *)(updated + 24) <= 4 )
        goto LABEL_481;
      v157 = System_Single__Parse(*(System_String_o **)(updated + 32), 0LL);
      if ( *(_DWORD *)(v156 + 24) <= 1u )
        goto LABEL_1018;
      v158 = v157;
      v159 = System_Single__Parse(*(System_String_o **)(v156 + 40), 0LL);
      if ( *(_DWORD *)(v156 + 24) <= 2u )
        goto LABEL_1018;
      v160 = v159;
      v161 = System_Single__Parse(*(System_String_o **)(v156 + 48), 0LL);
      if ( *(_DWORD *)(v156 + 24) <= 3u )
        goto LABEL_1018;
      v162 = v161;
      v163 = System_Single__Parse(*(System_String_o **)(v156 + 56), 0LL);
      if ( *(_DWORD *)(v156 + 24) <= 4u )
        goto LABEL_1018;
      v164 = v163;
      v165 = System_Int32__Parse(*(System_String_o **)(v156 + 64), 0LL);
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      if ( !byte_4A48DB8 )
      {
        sub_1B863B8(&TerminalSceneComponent_TypeInfo, v97);
        byte_4A48DB8 = 1;
      }
      updated = (__int64)TerminalSceneComponent_TypeInfo;
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        updated = (__int64)TerminalSceneComponent_TypeInfo;
      }
      v166 = **(_QWORD **)(updated + 184);
      if ( !v166 )
        goto LABEL_1017;
      updated = *(_QWORD *)(v166 + 264);
      if ( !updated )
        goto LABEL_1017;
      v697.fields.y = v160;
      v697.fields.z = v162;
      v167 = v164 * 0.001;
      v697.fields.x = v158;
      *(UnityEngine_Vector3_o *)&v169 = ScrTerminalMap__ConvertLocalToScreenPosition(
                                          (ScrTerminalMap_o *)updated,
                                          v697,
                                          0LL);
      v172 = v169;
      v173 = v170;
      v174 = v171;
      if ( v105->fields.id != 352 || *(int *)(v156 + 24) < 6 )
      {
        if ( !*v100 )
          goto LABEL_1017;
        mMapCamera = (*v100)->fields.mMapCamera;
        v176 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
        System_Action___ctor(
          v176,
          (Il2CppObject *)v95,
          Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__12__,
          0LL);
        if ( !mMapCamera )
          goto LABEL_1017;
        v177 = mMapCamera;
        v178 = v172;
        v179 = v173;
        v180 = v174;
        v181 = v167;
        v182 = v165;
        goto LABEL_949;
      }
      if ( !*v100 )
        goto LABEL_1017;
      v367 = (*v100)->fields.mMapCamera;
      *(_QWORD *)&v690.fields.hasValue = &v678;
      *(_QWORD *)&v690.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
      *(_QWORD *)&v678.fields.hasValue = 0LL;
      *(_QWORD *)&v678.fields.value.fields.y = 0LL;
      System_Nullable_Vector3____ctor(v690, *(UnityEngine_Vector3_o *)&v169, v168);
      if ( *(_DWORD *)(v156 + 24) <= 5u )
        goto LABEL_1018;
      v368 = System_Single__Parse(*(System_String_o **)(v156 + 72), 0LL);
      p_size = (System_Nullable_float__o)&size;
      size = 0LL;
      System_Nullable_float____ctor(p_size, v368, (const MethodInfo_371E63C *)Method_System_Nullable_float___ctor__);
      v369 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
      System_Action___ctor(
        v369,
        (Il2CppObject *)v95,
        Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__11__,
        0LL);
      if ( !v367 )
        goto LABEL_1017;
      v695 = v678;
      v688 = size;
      v370 = v367;
      v371 = v167;
      v372 = v165;
LABEL_990:
      MapCamera__StartAutoWork(v370, v371, v695, v688, v372, v369, 0LL);
      return;
    }
    if ( id <= 113 )
    {
      switch ( id )
      {
        case 'd':
          v144 = sub_1B86604(QuestAfterAction_StateMain___c__DisplayClass16_1_TypeInfo);
          QuestAfterAction_StateMain___c__DisplayClass16_1___ctor(
            (QuestAfterAction_StateMain___c__DisplayClass16_1_o *)v144,
            0LL);
          if ( !v144 )
            goto LABEL_1017;
          *(_QWORD *)(v144 + 24) = v95;
          sub_1B8635C((CGThumbnailListItem_o *)(v144 + 24), v95, v145, v146);
          v147 = *(_QWORD *)(v144 + 24);
          if ( !v147 )
            goto LABEL_1017;
          v148 = *(QuestAfterAction_o **)(v147 + 24);
          updated = System_Int32__Parse(v105->fields.param, 0LL);
          if ( !v148 )
            goto LABEL_1017;
          v149 = QuestAfterAction__GetMapComponent_object_(
                   v148,
                   0,
                   updated,
                   this,
                   (const MethodInfo_3002668 *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
          *(_QWORD *)(v144 + 16) = v149;
          sub_1B8635C((CGThumbnailListItem_o *)(v144 + 16), (int32_t)v149, v150, v151);
          v152 = *(UnityEngine_Object_o **)(v144 + 16);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Equality(v152, 0LL, 0LL) )
            return;
          v153 = *(SrcSpotBasePrefab_o **)(v144 + 16);
          v154 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
          System_Action___ctor(
            v154,
            (Il2CppObject *)v144,
            Method_QuestAfterAction_StateMain___c__DisplayClass16_1__UpdateAnim_b__0__,
            0LL);
          if ( !v153 )
            goto LABEL_1017;
          v155 = 2;
          goto LABEL_405;
        case 'e':
          v314 = sub_1B86604(QuestAfterAction_StateMain___c__DisplayClass16_2_TypeInfo);
          QuestAfterAction_StateMain___c__DisplayClass16_2___ctor(
            (QuestAfterAction_StateMain___c__DisplayClass16_2_o *)v314,
            0LL);
          if ( !v314 )
            goto LABEL_1017;
          *(_QWORD *)(v314 + 24) = v95;
          sub_1B8635C((CGThumbnailListItem_o *)(v314 + 24), v95, v315, v316);
          v317 = *(_QWORD *)(v314 + 24);
          if ( !v317 )
            goto LABEL_1017;
          v318 = *(QuestAfterAction_o **)(v317 + 24);
          updated = System_Int32__Parse(v105->fields.param, 0LL);
          if ( !v318 )
            goto LABEL_1017;
          v319 = QuestAfterAction__GetMapComponent_object_(
                   v318,
                   0,
                   updated,
                   this,
                   (const MethodInfo_3002668 *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
          *(_QWORD *)(v314 + 16) = v319;
          sub_1B8635C((CGThumbnailListItem_o *)(v314 + 16), (int32_t)v319, v320, v321);
          v322 = *(UnityEngine_Object_o **)(v314 + 16);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Equality(v322, 0LL, 0LL) )
            return;
          v153 = *(SrcSpotBasePrefab_o **)(v314 + 16);
          v154 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
          System_Action___ctor(
            v154,
            (Il2CppObject *)v314,
            Method_QuestAfterAction_StateMain___c__DisplayClass16_2__UpdateAnim_b__1__,
            0LL);
          if ( !v153 )
            goto LABEL_1017;
          v155 = 3;
LABEL_405:
          SrcSpotBasePrefab__SetState(v153, v155, v154, 0LL);
          return;
        case 'f':
          v323 = sub_1B86604(QuestAfterAction_StateMain___c__DisplayClass16_3_TypeInfo);
          QuestAfterAction_StateMain___c__DisplayClass16_3___ctor(
            (QuestAfterAction_StateMain___c__DisplayClass16_3_o *)v323,
            0LL);
          if ( !v323 )
            goto LABEL_1017;
          *(_QWORD *)(v323 + 24) = v95;
          v326 = v323 + 24;
          sub_1B8635C((CGThumbnailListItem_o *)(v323 + 24), v95, v324, v325);
          if ( !*(_QWORD *)(v323 + 24) )
            goto LABEL_1017;
          v327 = *(QuestAfterAction_o **)(*(_QWORD *)(v323 + 24) + 24LL);
          updated = System_Int32__Parse(v105->fields.param, 0LL);
          if ( !v327 )
            goto LABEL_1017;
          v328 = QuestAfterAction__GetMapComponent_object_(
                   v327,
                   0,
                   updated,
                   this,
                   (const MethodInfo_3002668 *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
          *(_QWORD *)(v323 + 16) = v328;
          v329 = (__int64 *)(v323 + 16);
          sub_1B8635C((CGThumbnailListItem_o *)(v323 + 16), (int32_t)v328, v330, v331);
          v332 = *(UnityEngine_Object_o **)(v323 + 16);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Equality(v332, 0LL, 0LL) )
            return;
          v333 = *(SrcSpotBasePrefab_o **)(v323 + 16);
          v334 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
          System_Action___ctor(
            v334,
            (Il2CppObject *)v323,
            Method_QuestAfterAction_StateMain___c__DisplayClass16_3__UpdateAnim_b__2__,
            0LL);
          if ( !v333 )
            goto LABEL_1017;
          SrcSpotBasePrefab__SetState(v333, 4, v334, 0LL);
          if ( !*(_QWORD *)v326 )
            goto LABEL_1017;
          updated = *(_QWORD *)(*(_QWORD *)v326 + 24LL);
          if ( !updated )
            goto LABEL_1017;
          v337 = *v329;
          *(_QWORD *)(updated + 184) = *v329;
          v338 = (CGThumbnailListItem_o *)(updated + 184);
          goto LABEL_427;
        case 'g':
          updated = (__int64)v105->fields.param;
          if ( !updated )
            goto LABEL_1017;
          updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
          if ( !updated )
            goto LABEL_1017;
          v339 = updated;
          if ( *(int *)(updated + 24) <= 1 )
            goto LABEL_481;
          v340 = *v100;
          updated = System_Int32__Parse(*(System_String_o **)(updated + 32), 0LL);
          if ( !v340 )
            goto LABEL_1017;
          v341 = QuestAfterAction__GetMapComponent_object_(
                   v340,
                   0,
                   updated,
                   this,
                   (const MethodInfo_3002668 *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          updated = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v341, 0LL, 0LL);
          if ( (updated & 1) != 0 )
            return;
          if ( *(_DWORD *)(v339 + 24) <= 1u )
            goto LABEL_1018;
          updated = System_Int32__Parse(*(System_String_o **)(v339 + 40), 0LL);
          if ( !v341 )
            goto LABEL_1017;
          LODWORD(v341[14].klass) = updated;
          v342 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
          System_Action___ctor(v342, (Il2CppObject *)this, (intptr_t)this->klass->vtable._15_onEnd.methodPtr, 0LL);
          SrcSpotBasePrefab__SetState((SrcSpotBasePrefab_o *)v341, 5, v342, 0LL);
          updated = (__int64)*v100;
          if ( !*v100 )
            goto LABEL_1017;
          *(_QWORD *)(updated + 184) = v341;
          v338 = (CGThumbnailListItem_o *)(updated + 184);
          LODWORD(v337) = (_DWORD)v341;
LABEL_427:
          sub_1B8635C(v338, v337, v335, v336);
          return;
        case 'h':
        case 'i':
        case 'j':
        case 'k':
        case 'l':
        case 'm':
          return;
        case 'n':
          v343 = *v100;
          updated = System_Int32__Parse(v105->fields.param, 0LL);
          if ( !v343 )
            goto LABEL_1017;
          v344 = QuestAfterAction__GetMapComponent_object_(
                   v343,
                   0,
                   updated,
                   this,
                   (const MethodInfo_3002668 *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          updated = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v344, 0LL, 0LL);
          if ( (updated & 1) != 0 )
            return;
          if ( !v344 )
            goto LABEL_1017;
          SrcSpotBasePrefab__SetQaaScaleAnimQuick((SrcSpotBasePrefab_o *)v344, 0, 0LL);
          monitor = v344[14].monitor;
          if ( !monitor )
            goto LABEL_1017;
          monitor[5] = 0;
          v346 = (SrcSpotBasePrefab_o *)v344;
          v347 = 0;
          goto LABEL_450;
        case 'o':
          v348 = *v100;
          updated = System_Int32__Parse(v105->fields.param, 0LL);
          if ( !v348 )
            goto LABEL_1017;
          v349 = QuestAfterAction__GetMapComponent_object_(
                   v348,
                   0,
                   updated,
                   this,
                   (const MethodInfo_3002668 *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          updated = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v349, 0LL, 0LL);
          if ( (updated & 1) != 0 )
            return;
          if ( !v349 )
            goto LABEL_1017;
          SrcSpotBasePrefab__SetQaaScaleAnimQuick((SrcSpotBasePrefab_o *)v349, 1, 0LL);
          SrcSpotBasePrefab__SetQaaColorAnimQuick((SrcSpotBasePrefab_o *)v349, 0, 0LL);
          v350 = v349[14].monitor;
          if ( !v350 )
            goto LABEL_1017;
          v350[5] = 2;
          goto LABEL_449;
        case 'p':
          v351 = *v100;
          updated = System_Int32__Parse(v105->fields.param, 0LL);
          if ( !v351 )
            goto LABEL_1017;
          v349 = QuestAfterAction__GetMapComponent_object_(
                   v351,
                   0,
                   updated,
                   this,
                   (const MethodInfo_3002668 *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          updated = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v349, 0LL, 0LL);
          if ( (updated & 1) != 0 )
            return;
          if ( !v349 )
            goto LABEL_1017;
          SrcSpotBasePrefab__SetQaaScaleAnimQuick((SrcSpotBasePrefab_o *)v349, 1, 0LL);
          SrcSpotBasePrefab__SetQaaColorAnimQuick((SrcSpotBasePrefab_o *)v349, 1, 0LL);
          v352 = v349[14].monitor;
          if ( !v352 )
            goto LABEL_1017;
          v352[5] = 1;
LABEL_449:
          v347 = 1;
          v346 = (SrcSpotBasePrefab_o *)v349;
LABEL_450:
          SrcSpotBasePrefab__SetTouchType(v346, v347, 0LL);
          goto LABEL_18;
        case 'q':
          updated = (__int64)v105->fields.param;
          if ( !updated )
            goto LABEL_1017;
          updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
          if ( !updated )
            goto LABEL_1017;
          v353 = updated;
          if ( *(int *)(updated + 24) <= 1 )
            goto LABEL_481;
          v354 = *v100;
          updated = System_Int32__Parse(*(System_String_o **)(updated + 32), 0LL);
          if ( !v354 )
            goto LABEL_1017;
          v355 = QuestAfterAction__GetMapComponent_object_(
                   v354,
                   0,
                   updated,
                   this,
                   (const MethodInfo_3002668 *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          updated = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v355, 0LL, 0LL);
          if ( (updated & 1) != 0 )
            return;
          if ( *(_DWORD *)(v353 + 24) <= 1u )
            goto LABEL_1018;
          updated = System_Int32__Parse(*(System_String_o **)(v353 + 40), 0LL);
          if ( !v355 )
            goto LABEL_1017;
          LODWORD(v355[14].klass) = updated;
          SrcSpotBasePrefab__UpdateDisp((SrcSpotBasePrefab_o *)v355, 1, 0LL);
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
        updated = (__int64)v105->fields.param;
        if ( !updated )
          goto LABEL_1017;
        updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
        if ( !updated )
          goto LABEL_1017;
        v125 = *(_QWORD *)(updated + 24);
        v126 = updated;
        if ( (int)v125 <= 0 )
          goto LABEL_481;
        if ( (int)v125 > 2 )
        {
          v424 = System_Single__Parse(*(System_String_o **)(updated + 48), 0LL);
          v125 = *(_QWORD *)(v126 + 24);
          v127 = v424 * 0.001;
        }
        else
        {
          v127 = 0.5;
        }
        sec = v127;
        if ( (int)v125 >= 2 )
        {
          updated = System_Int32__Parse(*(System_String_o **)(v126 + 40), 0LL);
          v125 = *(_QWORD *)(v126 + 24);
          v297 = updated;
        }
        else
        {
          v297 = 15;
        }
        if ( !(_DWORD)v125 )
          goto LABEL_1018;
        v427 = *v100;
        updated = System_Int32__Parse(*(System_String_o **)(v126 + 32), 0LL);
        if ( !v427 )
          goto LABEL_1017;
        v429 = (UnityEngine_Object_o *)QuestAfterAction__GetMapGameObject(v427, 0, updated, this, v428);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Equality(v429, 0LL, 0LL) )
          return;
        v699 = GameObjectExtensions__GetLocalPosition((UnityEngine_GameObject_o *)v429, 0LL);
        v430 = v699.fields.x;
        v431 = v699.fields.y;
        v432 = v699.fields.z;
        if ( !this->fields.IsMapModel )
          goto LABEL_608;
        if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        if ( !byte_4A48DB8 )
        {
          sub_1B863B8(&TerminalSceneComponent_TypeInfo, v97);
          byte_4A48DB8 = 1;
        }
        updated = (__int64)TerminalSceneComponent_TypeInfo;
        if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          updated = (__int64)TerminalSceneComponent_TypeInfo;
        }
        v433 = **(_QWORD **)(updated + 184);
        if ( !v433 )
          goto LABEL_1017;
        updated = *(_QWORD *)(v433 + 264);
        if ( !updated )
          goto LABEL_1017;
        v700.fields.x = v430;
        v700.fields.y = v431;
        v700.fields.z = v432;
        v701 = ScrTerminalMap__ConvertLocalToScreenPosition((ScrTerminalMap_o *)updated, v700, 0LL);
        v430 = v701.fields.x;
        v431 = v701.fields.y;
        v432 = v701.fields.z;
LABEL_608:
        if ( !FSUtility_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
        updated = FSUtility__IsUnderVista(0LL);
        if ( (updated & 1) != 0 )
          goto LABEL_924;
        if ( !*(_DWORD *)(v126 + 24) )
          goto LABEL_1018;
        v435 = *(System_String_o **)(v126 + 32);
        updated = System_String__op_Equality(v435, (System_String_o *)StringLiteral_1326/*"10703"*/, 0LL);
        if ( (updated & 1) != 0 )
        {
          v431 = v431 + -50.0;
        }
        else
        {
          updated = System_String__op_Equality(v435, (System_String_o *)StringLiteral_1400/*"30101"*/, 0LL);
          if ( (updated & 1) != 0 )
            v431 = v431 + -50.0;
        }
LABEL_924:
        v450 = *(_DWORD *)(v126 + 24);
        if ( v105->fields.id == 305 )
        {
LABEL_925:
          if ( v450 < 4 )
            goto LABEL_926;
          if ( v450 == 4 )
          {
            if ( !*v100 )
              goto LABEL_1017;
            v630 = (*v100)->fields.mMapCamera;
          }
          else
          {
            updated = System_Int32__Parse(*(System_String_o **)(v126 + 64), 0LL);
            if ( !*v100 )
              goto LABEL_1017;
            v630 = (*v100)->fields.mMapCamera;
            if ( (int)updated >= 1 )
            {
              *(_QWORD *)&v691.fields.hasValue = &v678;
              v633 = v430;
              v634 = v431;
              *(_QWORD *)&v691.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
              v635 = v432;
              v678 = (System_Nullable_Vector3__o)0LL;
LABEL_981:
              System_Nullable_Vector3____ctor(v691, *(UnityEngine_Vector3_o *)&v633, v434);
              if ( *(_DWORD *)(v126 + 24) <= 3u )
                goto LABEL_1018;
              v654 = System_Single__Parse(*(System_String_o **)(v126 + 56), 0LL);
              v684 = (System_Nullable_float__o)&size;
              size = 0LL;
              System_Nullable_float____ctor(
                v684,
                v654,
                (const MethodInfo_371E63C *)Method_System_Nullable_float___ctor__);
              if ( !v630 )
                goto LABEL_1017;
              v696 = v678;
              v689 = size;
              v655 = sec;
              v656 = v630;
              goto LABEL_984;
            }
          }
          *(_QWORD *)&v692.fields.hasValue = &v678;
          v636 = v430;
          v637 = v431;
          *(_QWORD *)&v692.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
          v638 = v432;
          v678 = (System_Nullable_Vector3__o)0LL;
LABEL_986:
          System_Nullable_Vector3____ctor(v692, *(UnityEngine_Vector3_o *)&v636, v434);
          if ( *(_DWORD *)(v126 + 24) <= 3u )
            goto LABEL_1018;
          v657 = System_Single__Parse(*(System_String_o **)(v126 + 56), 0LL);
          v685 = (System_Nullable_float__o)&size;
          size = 0LL;
          System_Nullable_float____ctor(v685, v657, (const MethodInfo_371E63C *)Method_System_Nullable_float___ctor__);
          v369 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
          System_Action___ctor(v369, (Il2CppObject *)this, (intptr_t)this->klass->vtable._15_onEnd.methodPtr, 0LL);
          if ( !v630 )
            goto LABEL_1017;
          v695 = v678;
          v688 = size;
          v371 = sec;
          v370 = v630;
          goto LABEL_989;
        }
LABEL_649:
        if ( v450 < 4 )
        {
LABEL_926:
          if ( !*v100 )
            goto LABEL_1017;
          v452 = (*v100)->fields.mMapCamera;
          goto LABEL_928;
        }
        updated = System_Int32__Parse(*(System_String_o **)(v126 + 56), 0LL);
        v451 = *v100;
        if ( !*v100 )
          goto LABEL_1017;
        v452 = v451->fields.mMapCamera;
        if ( (int)updated < 1 )
        {
LABEL_928:
          v176 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
          System_Action___ctor(v176, (Il2CppObject *)this, (intptr_t)this->klass->vtable._15_onEnd.methodPtr, 0LL);
          if ( !v452 )
            goto LABEL_1017;
          v177 = v452;
          v178 = v430;
          v179 = v431;
          v180 = v432;
LABEL_947:
          v181 = sec;
LABEL_948:
          v182 = v297;
LABEL_949:
          MapCamera__StartAutoMove(v177, *(UnityEngine_Vector3_o *)&v178, v181, v182, v176, 0LL);
          return;
        }
        if ( !v452 )
          goto LABEL_1017;
        v453 = v451->fields.mMapCamera;
        v454 = v430;
        v455 = v431;
        v456 = v432;
        goto LABEL_958;
      case 301:
      case 306:
        updated = (__int64)v105->fields.param;
        if ( !updated )
          goto LABEL_1017;
        updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
        if ( !updated )
          goto LABEL_1017;
        v290 = *(_QWORD *)(updated + 24);
        v126 = updated;
        if ( (int)v290 <= 0 )
          goto LABEL_481;
        if ( (int)v290 > 2 )
        {
          v425 = System_Single__Parse(*(System_String_o **)(updated + 48), 0LL);
          v290 = *(_QWORD *)(v126 + 24);
          v291 = v425 * 0.001;
        }
        else
        {
          v291 = 0.5;
        }
        sec = v291;
        if ( (int)v290 >= 2 )
        {
          updated = System_Int32__Parse(*(System_String_o **)(v126 + 40), 0LL);
          v290 = *(_QWORD *)(v126 + 24);
          v297 = updated;
        }
        else
        {
          v297 = 15;
        }
        if ( !(_DWORD)v290 )
          goto LABEL_1018;
        v436 = *v100;
        updated = System_Int32__Parse(*(System_String_o **)(v126 + 32), 0LL);
        if ( !v436 )
          goto LABEL_1017;
        v438 = (UnityEngine_Object_o *)QuestAfterAction__GetMapGameObject(v436, 1, updated, this, v437);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        updated = UnityEngine_Object__op_Equality(v438, 0LL, 0LL);
        if ( (updated & 1) != 0 )
          return;
        if ( this->fields.IsMapModel )
        {
          if ( !v438 )
            goto LABEL_1017;
          updated = (__int64)UnityEngine_GameObject__GetComponent_object_(
                               (UnityEngine_GameObject_o *)v438,
                               (const MethodInfo_2FC0DF0 *)Method_UnityEngine_GameObject_GetComponent_ModelLineComponent___);
          if ( !updated )
            goto LABEL_1017;
          Position = GameObjectExtensions__GetPosition((UnityEngine_GameObject_o *)*(_QWORD *)(updated + 32), 0LL);
          v439 = Position.fields.x;
          v440 = Position.fields.y;
          v441 = Position.fields.z;
          if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          if ( !byte_4A48DB8 )
          {
            sub_1B863B8(&TerminalSceneComponent_TypeInfo, v97);
            byte_4A48DB8 = 1;
          }
          updated = (__int64)TerminalSceneComponent_TypeInfo;
          if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            updated = (__int64)TerminalSceneComponent_TypeInfo;
          }
          v442 = **(_QWORD **)(updated + 184);
          if ( !v442 )
            goto LABEL_1017;
          updated = *(_QWORD *)(v442 + 264);
          if ( !updated )
            goto LABEL_1017;
          v703.fields.x = v439;
          v703.fields.y = v440;
          v703.fields.z = v441;
          *(UnityEngine_Vector3_o *)&v443 = ScrTerminalMap__ConvertWorldToScreenPosition(
                                              (ScrTerminalMap_o *)updated,
                                              v703,
                                              0LL);
        }
        else
        {
          *(UnityEngine_Vector3_o *)&v443 = GameObjectExtensions__GetLocalPosition(
                                              (UnityEngine_GameObject_o *)v438,
                                              0LL);
        }
        v594 = v443;
        v595 = v444;
        v596 = v445;
        if ( !FSUtility_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
        updated = FSUtility__IsUnderVista(0LL);
        if ( (updated & 1) != 0 )
          goto LABEL_936;
        if ( !*(_DWORD *)(v126 + 24) )
          goto LABEL_1018;
        v597 = *(System_String_o **)(v126 + 32);
        updated = System_String__op_Equality(v597, (System_String_o *)StringLiteral_1326/*"10703"*/, 0LL);
        if ( (updated & 1) != 0 )
        {
          v595 = v595 + -95.0;
        }
        else
        {
          updated = System_String__op_Equality(v597, (System_String_o *)StringLiteral_1401/*"30102"*/, 0LL);
          if ( (updated & 1) != 0 )
            v595 = v595 + 45.0;
        }
LABEL_936:
        v631 = *(_DWORD *)(v126 + 24);
        if ( v105->fields.id == 306 )
        {
          if ( v631 >= 4 )
          {
            if ( v631 == 4 )
            {
              if ( !*v100 )
                goto LABEL_1017;
              v630 = (*v100)->fields.mMapCamera;
            }
            else
            {
              updated = System_Int32__Parse(*(System_String_o **)(v126 + 64), 0LL);
              if ( !*v100 )
                goto LABEL_1017;
              v630 = (*v100)->fields.mMapCamera;
              if ( (int)updated >= 1 )
              {
                v678 = (System_Nullable_Vector3__o)0LL;
                *(_QWORD *)&v691.fields.hasValue = &v678;
                v633 = v594;
                *(_QWORD *)&v691.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
                v634 = v595;
                v635 = v596;
                goto LABEL_981;
              }
            }
            v678 = (System_Nullable_Vector3__o)0LL;
            *(_QWORD *)&v692.fields.hasValue = &v678;
            v636 = v594;
            *(_QWORD *)&v692.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
            v637 = v595;
            v638 = v596;
            goto LABEL_986;
          }
          goto LABEL_943;
        }
        if ( v631 < 4 )
        {
LABEL_943:
          if ( !*v100 )
            goto LABEL_1017;
          v632 = (*v100)->fields.mMapCamera;
LABEL_945:
          v176 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
          System_Action___ctor(v176, (Il2CppObject *)this, (intptr_t)this->klass->vtable._15_onEnd.methodPtr, 0LL);
          if ( !v632 )
            goto LABEL_1017;
          v177 = v632;
          v178 = v594;
          v179 = v595;
          v180 = v596;
          goto LABEL_947;
        }
        updated = System_Int32__Parse(*(System_String_o **)(v126 + 56), 0LL);
        v639 = *v100;
        if ( !*v100 )
          goto LABEL_1017;
        v632 = v639->fields.mMapCamera;
        if ( (int)updated < 1 )
          goto LABEL_945;
        if ( !v632 )
          goto LABEL_1017;
        v453 = v639->fields.mMapCamera;
        v454 = v594;
        v455 = v595;
        v456 = v596;
LABEL_958:
        v640 = sec;
        goto LABEL_959;
      case 302:
      case 307:
        updated = (__int64)v105->fields.param;
        if ( !updated )
          goto LABEL_1017;
        updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
        if ( !updated )
          goto LABEL_1017;
        v292 = *(_QWORD *)(updated + 24);
        v126 = updated;
        if ( (int)v292 <= 0 )
          goto LABEL_481;
        if ( (int)v292 > 2 )
        {
          v426 = System_Single__Parse(*(System_String_o **)(updated + 48), 0LL);
          v292 = *(_QWORD *)(v126 + 24);
          v293 = v426 * 0.001;
        }
        else
        {
          v293 = 0.5;
        }
        sec = v293;
        if ( (int)v292 >= 2 )
        {
          updated = System_Int32__Parse(*(System_String_o **)(v126 + 40), 0LL);
          v292 = *(_QWORD *)(v126 + 24);
          v297 = updated;
        }
        else
        {
          v297 = 15;
        }
        if ( !(_DWORD)v292 )
          goto LABEL_1018;
        v446 = *v100;
        updated = System_Int32__Parse(*(System_String_o **)(v126 + 32), 0LL);
        if ( !v446 )
          goto LABEL_1017;
        v448 = (UnityEngine_Object_o *)QuestAfterAction__GetMapGameObject(v446, 2, updated, this, v447);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Equality(v448, 0LL, 0LL) )
          return;
        v704 = GameObjectExtensions__GetLocalPosition((UnityEngine_GameObject_o *)v448, 0LL);
        v430 = v704.fields.x;
        v431 = v704.fields.y;
        v432 = v704.fields.z;
        if ( !this->fields.IsMapModel )
          goto LABEL_648;
        if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        if ( !byte_4A48DB8 )
        {
          sub_1B863B8(&TerminalSceneComponent_TypeInfo, v97);
          byte_4A48DB8 = 1;
        }
        updated = (__int64)TerminalSceneComponent_TypeInfo;
        if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          updated = (__int64)TerminalSceneComponent_TypeInfo;
        }
        v449 = **(_QWORD **)(updated + 184);
        if ( !v449 )
          goto LABEL_1017;
        updated = *(_QWORD *)(v449 + 264);
        if ( !updated )
          goto LABEL_1017;
        v705.fields.x = v430;
        v705.fields.y = v431;
        v705.fields.z = v432;
        v706 = ScrTerminalMap__ConvertLocalToScreenPosition((ScrTerminalMap_o *)updated, v705, 0LL);
        v430 = v706.fields.x;
        v431 = v706.fields.y;
        v432 = v706.fields.z;
LABEL_648:
        v450 = *(_DWORD *)(v126 + 24);
        if ( v105->fields.id != 307 )
          goto LABEL_649;
        goto LABEL_925;
      case 303:
      case 308:
        updated = (__int64)v105->fields.param;
        if ( !updated )
          goto LABEL_1017;
        updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
        if ( !updated )
          goto LABEL_1017;
        v294 = updated;
        if ( *(int *)(updated + 24) < 4 )
          goto LABEL_481;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_4A4B127 )
        {
          sub_1B863B8(&TerminalPramsManager_TypeInfo, v97);
          byte_4A4B127 = 1;
        }
        updated = (__int64)TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          updated = (__int64)TerminalPramsManager_TypeInfo;
        }
        if ( *(_BYTE *)(*(_QWORD *)(updated + 184) + 105LL) )
          goto LABEL_481;
        if ( *(_DWORD *)(v294 + 24) <= 2u )
          goto LABEL_1018;
        v295 = System_Single__Parse(*(System_String_o **)(v294 + 48), 0LL) * 0.001;
        v296 = v295 >= 0.0 ? v295 : 0.5;
        if ( *(_DWORD *)(v294 + 24) <= 3u )
          goto LABEL_1018;
        v297 = System_Int32__Parse(*(System_String_o **)(v294 + 56), 0LL);
        if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        if ( !byte_4A48DB8 )
        {
          sub_1B863B8(&TerminalSceneComponent_TypeInfo, v97);
          byte_4A48DB8 = 1;
        }
        updated = (__int64)TerminalSceneComponent_TypeInfo;
        if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          updated = (__int64)TerminalSceneComponent_TypeInfo;
        }
        v298 = **(_QWORD **)(updated + 184);
        if ( !v298 )
          goto LABEL_1017;
        if ( !*(_DWORD *)(v294 + 24) )
          goto LABEL_1018;
        v299 = *(ScrTerminalMap_o **)(v298 + 264);
        v300 = System_Single__Parse(*(System_String_o **)(v294 + 32), 0LL);
        if ( *(_DWORD *)(v294 + 24) <= 1u )
          goto LABEL_1018;
        v301 = v300;
        v302 = System_Single__Parse(*(System_String_o **)(v294 + 40), 0LL);
        if ( !v299 )
          goto LABEL_1017;
        v698 = ScrTerminalMap__LocalPosFromCoord(v299, v301, v302, 0.0, 0.0, 0LL);
        v304 = *(_DWORD *)(v294 + 24);
        v305 = v698.fields.x;
        v306 = v698.fields.y;
        v307 = v698.fields.z;
        if ( v105->fields.id == 308 )
        {
          if ( v304 >= 5 )
          {
            if ( v304 == 5 )
            {
              if ( !*v100 )
                goto LABEL_1017;
              v308 = (*v100)->fields.mMapCamera;
            }
            else
            {
              updated = System_Int32__Parse(*(System_String_o **)(v294 + 72), 0LL);
              if ( !*v100 )
                goto LABEL_1017;
              v308 = (*v100)->fields.mMapCamera;
              if ( (int)updated >= 1 )
              {
                *(_QWORD *)&v693.fields.hasValue = &v678;
                v712.fields.x = v305;
                v712.fields.y = v306;
                *(_QWORD *)&v693.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
                v712.fields.z = v307;
                v678 = (System_Nullable_Vector3__o)0LL;
                System_Nullable_Vector3____ctor(v693, v712, v303);
                if ( *(_DWORD *)(v294 + 24) <= 4u )
                  goto LABEL_1018;
                v673 = System_Single__Parse(*(System_String_o **)(v294 + 64), 0LL);
                v686 = (System_Nullable_float__o)&size;
                size = 0LL;
                System_Nullable_float____ctor(
                  v686,
                  v673,
                  (const MethodInfo_371E63C *)Method_System_Nullable_float___ctor__);
                if ( !v308 )
                  goto LABEL_1017;
                v696 = v678;
                v689 = size;
                v656 = v308;
                v655 = v296;
LABEL_984:
                MapCamera__StartAutoWork(v656, v655, v696, v689, v297, 0LL, 0LL);
                goto LABEL_481;
              }
            }
            *(_QWORD *)&v694.fields.hasValue = &v678;
            v713.fields.x = v305;
            v713.fields.y = v306;
            *(_QWORD *)&v694.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
            v713.fields.z = v307;
            v678 = (System_Nullable_Vector3__o)0LL;
            System_Nullable_Vector3____ctor(v694, v713, v303);
            if ( *(_DWORD *)(v294 + 24) <= 4u )
              goto LABEL_1018;
            v674 = System_Single__Parse(*(System_String_o **)(v294 + 64), 0LL);
            v687 = (System_Nullable_float__o)&size;
            size = 0LL;
            System_Nullable_float____ctor(v687, v674, (const MethodInfo_371E63C *)Method_System_Nullable_float___ctor__);
            v369 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
            System_Action___ctor(v369, (Il2CppObject *)this, (intptr_t)this->klass->vtable._15_onEnd.methodPtr, 0LL);
            if ( !v308 )
              goto LABEL_1017;
            v695 = v678;
            v688 = size;
            v370 = v308;
            v371 = v296;
LABEL_989:
            v372 = v297;
            goto LABEL_990;
          }
        }
        else if ( v304 >= 5 )
        {
          updated = System_Int32__Parse(*(System_String_o **)(v294 + 64), 0LL);
          v653 = *v100;
          if ( !*v100 )
            goto LABEL_1017;
          v629 = v653->fields.mMapCamera;
          if ( (int)updated >= 1 )
          {
            if ( !v629 )
              goto LABEL_1017;
            v453 = v653->fields.mMapCamera;
            v454 = v305;
            v455 = v306;
            v456 = v307;
            v640 = v296;
LABEL_959:
            MapCamera__StartAutoMove(v453, *(UnityEngine_Vector3_o *)&v454, v640, v297, 0LL, 0LL);
            goto LABEL_481;
          }
LABEL_920:
          v176 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
          System_Action___ctor(v176, (Il2CppObject *)this, (intptr_t)this->klass->vtable._15_onEnd.methodPtr, 0LL);
          if ( !v629 )
            goto LABEL_1017;
          v177 = v629;
          v178 = v305;
          v179 = v306;
          v180 = v307;
          v181 = v296;
          goto LABEL_948;
        }
        if ( !*v100 )
          goto LABEL_1017;
        v629 = (*v100)->fields.mMapCamera;
        goto LABEL_920;
      case 304:
        updated = (__int64)v105->fields.param;
        if ( !updated )
          goto LABEL_1017;
        updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
        if ( !updated )
          goto LABEL_1017;
        v373 = *(_DWORD *)(updated + 24);
        v374 = updated;
        if ( v373 <= 1 )
          goto LABEL_481;
        v375 = System_Single__Parse(*(System_String_o **)(updated + 32), 0LL);
        if ( *(_DWORD *)(v374 + 24) <= 1u )
          goto LABEL_1018;
        v376 = v375;
        v377 = System_Single__Parse(*(System_String_o **)(v374 + 40), 0LL);
        if ( !*v100 )
          goto LABEL_1017;
        v378 = (*v100)->fields.mMapCamera;
        v379 = v377 * 0.001;
        if ( v379 >= 0.0 )
          v380 = v379;
        else
          v380 = 0.5;
        if ( v373 < 3 )
        {
          v381 = 5;
        }
        else
        {
          if ( *(_DWORD *)(v374 + 24) <= 2u )
            goto LABEL_1018;
          v381 = System_Int32__Parse(*(System_String_o **)(v374 + 48), 0LL);
        }
        v593 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
        System_Action___ctor(
          v593,
          (Il2CppObject *)v95,
          Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__9__,
          0LL);
        if ( !v378 )
          goto LABEL_1017;
        MapCamera__StartAutoZoom(v378, v376, v380, v381, v593, 0LL);
        return;
      default:
        switch ( id )
        {
          case 200:
            if ( this->fields.IsMapModel )
            {
              v183 = sub_1B86604(QuestAfterAction_StateMain___c__DisplayClass16_4_TypeInfo);
              QuestAfterAction_StateMain___c__DisplayClass16_4___ctor(
                (QuestAfterAction_StateMain___c__DisplayClass16_4_o *)v183,
                0LL);
              if ( !v183 )
                goto LABEL_1017;
              *(_QWORD *)(v183 + 24) = v95;
              sub_1B8635C((CGThumbnailListItem_o *)(v183 + 24), v95, v184, v185);
              v186 = *(_QWORD *)(v183 + 24);
              if ( !v186 )
                goto LABEL_1017;
              v187 = *(QuestAfterAction_o **)(v186 + 24);
              updated = System_Int32__Parse(v105->fields.param, 0LL);
              if ( !v187 )
                goto LABEL_1017;
              v188 = QuestAfterAction__GetMapComponent_object_(
                       v187,
                       1,
                       updated,
                       this,
                       (const MethodInfo_3002668 *)Method_QuestAfterAction_GetMapComponent_ModelLineComponent___);
              *(_QWORD *)(v183 + 16) = v188;
              sub_1B8635C((CGThumbnailListItem_o *)(v183 + 16), (int32_t)v188, v189, v190);
              v191 = *(UnityEngine_Object_o **)(v183 + 16);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              if ( !UnityEngine_Object__op_Equality(v191, 0LL, 0LL) )
              {
                v192 = *(ModelLineComponent_o **)(v183 + 16);
                v193 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
                System_Action___ctor(
                  v193,
                  (Il2CppObject *)v183,
                  Method_QuestAfterAction_StateMain___c__DisplayClass16_4__UpdateAnim_b__3__,
                  0LL);
                if ( !v192 )
                  goto LABEL_1017;
                v195 = 2;
                goto LABEL_539;
              }
            }
            else
            {
              v559 = sub_1B86604(QuestAfterAction_StateMain___c__DisplayClass16_5_TypeInfo);
              QuestAfterAction_StateMain___c__DisplayClass16_5___ctor(
                (QuestAfterAction_StateMain___c__DisplayClass16_5_o *)v559,
                0LL);
              if ( !v559 )
                goto LABEL_1017;
              *(_QWORD *)(v559 + 24) = v95;
              sub_1B8635C((CGThumbnailListItem_o *)(v559 + 24), v95, v560, v561);
              v562 = *(_QWORD *)(v559 + 24);
              if ( !v562 )
                goto LABEL_1017;
              v563 = *(QuestAfterAction_o **)(v562 + 24);
              updated = System_Int32__Parse(v105->fields.param, 0LL);
              if ( !v563 )
                goto LABEL_1017;
              v564 = QuestAfterAction__GetMapComponent_object_(
                       v563,
                       1,
                       updated,
                       this,
                       (const MethodInfo_3002668 *)Method_QuestAfterAction_GetMapComponent_srcLineSprite___);
              *(_QWORD *)(v559 + 16) = v564;
              sub_1B8635C((CGThumbnailListItem_o *)(v559 + 16), (int32_t)v564, v565, v566);
              v567 = *(UnityEngine_Object_o **)(v559 + 16);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              if ( !UnityEngine_Object__op_Equality(v567, 0LL, 0LL) )
              {
                v568 = *(srcLineSprite_o **)(v559 + 16);
                v569 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
                System_Action___ctor(
                  v569,
                  (Il2CppObject *)v559,
                  Method_QuestAfterAction_StateMain___c__DisplayClass16_5__UpdateAnim_b__4__,
                  0LL);
                if ( !v568 )
                  goto LABEL_1017;
                v570 = 2;
                goto LABEL_825;
              }
            }
            return;
          case 201:
            if ( this->fields.IsMapModel )
            {
              v382 = sub_1B86604(QuestAfterAction_StateMain___c__DisplayClass16_6_TypeInfo);
              QuestAfterAction_StateMain___c__DisplayClass16_6___ctor(
                (QuestAfterAction_StateMain___c__DisplayClass16_6_o *)v382,
                0LL);
              if ( !v382 )
                goto LABEL_1017;
              *(_QWORD *)(v382 + 24) = v95;
              sub_1B8635C((CGThumbnailListItem_o *)(v382 + 24), v95, v383, v384);
              v385 = *(_QWORD *)(v382 + 24);
              if ( !v385 )
                goto LABEL_1017;
              v386 = *(QuestAfterAction_o **)(v385 + 24);
              updated = System_Int32__Parse(v105->fields.param, 0LL);
              if ( !v386 )
                goto LABEL_1017;
              v387 = QuestAfterAction__GetMapComponent_object_(
                       v386,
                       1,
                       updated,
                       this,
                       (const MethodInfo_3002668 *)Method_QuestAfterAction_GetMapComponent_ModelLineComponent___);
              *(_QWORD *)(v382 + 16) = v387;
              sub_1B8635C((CGThumbnailListItem_o *)(v382 + 16), (int32_t)v387, v388, v389);
              v390 = *(UnityEngine_Object_o **)(v382 + 16);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              if ( !UnityEngine_Object__op_Equality(v390, 0LL, 0LL) )
              {
                v192 = *(ModelLineComponent_o **)(v382 + 16);
                v193 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
                System_Action___ctor(
                  v193,
                  (Il2CppObject *)v382,
                  Method_QuestAfterAction_StateMain___c__DisplayClass16_6__UpdateAnim_b__5__,
                  0LL);
                if ( !v192 )
                  goto LABEL_1017;
                v195 = 3;
                goto LABEL_539;
              }
            }
            else
            {
              v571 = sub_1B86604(QuestAfterAction_StateMain___c__DisplayClass16_7_TypeInfo);
              QuestAfterAction_StateMain___c__DisplayClass16_7___ctor(
                (QuestAfterAction_StateMain___c__DisplayClass16_7_o *)v571,
                0LL);
              if ( !v571 )
                goto LABEL_1017;
              *(_QWORD *)(v571 + 24) = v95;
              sub_1B8635C((CGThumbnailListItem_o *)(v571 + 24), v95, v572, v573);
              v574 = *(_QWORD *)(v571 + 24);
              if ( !v574 )
                goto LABEL_1017;
              v575 = *(QuestAfterAction_o **)(v574 + 24);
              updated = System_Int32__Parse(v105->fields.param, 0LL);
              if ( !v575 )
                goto LABEL_1017;
              v576 = QuestAfterAction__GetMapComponent_object_(
                       v575,
                       1,
                       updated,
                       this,
                       (const MethodInfo_3002668 *)Method_QuestAfterAction_GetMapComponent_srcLineSprite___);
              *(_QWORD *)(v571 + 16) = v576;
              sub_1B8635C((CGThumbnailListItem_o *)(v571 + 16), (int32_t)v576, v577, v578);
              v579 = *(UnityEngine_Object_o **)(v571 + 16);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              if ( !UnityEngine_Object__op_Equality(v579, 0LL, 0LL) )
              {
                v568 = *(srcLineSprite_o **)(v571 + 16);
                v569 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
                System_Action___ctor(
                  v569,
                  (Il2CppObject *)v571,
                  Method_QuestAfterAction_StateMain___c__DisplayClass16_7__UpdateAnim_b__6__,
                  0LL);
                if ( !v568 )
                  goto LABEL_1017;
                v570 = 3;
                goto LABEL_825;
              }
            }
            return;
          case 202:
            if ( this->fields.IsMapModel )
            {
              v391 = sub_1B86604(QuestAfterAction_StateMain___c__DisplayClass16_8_TypeInfo);
              QuestAfterAction_StateMain___c__DisplayClass16_8___ctor(
                (QuestAfterAction_StateMain___c__DisplayClass16_8_o *)v391,
                0LL);
              if ( !v391 )
                goto LABEL_1017;
              *(_QWORD *)(v391 + 24) = v95;
              sub_1B8635C((CGThumbnailListItem_o *)(v391 + 24), v95, v392, v393);
              v394 = *(_QWORD *)(v391 + 24);
              if ( !v394 )
                goto LABEL_1017;
              v395 = *(QuestAfterAction_o **)(v394 + 24);
              updated = System_Int32__Parse(v105->fields.param, 0LL);
              if ( !v395 )
                goto LABEL_1017;
              v396 = QuestAfterAction__GetMapComponent_object_(
                       v395,
                       1,
                       updated,
                       this,
                       (const MethodInfo_3002668 *)Method_QuestAfterAction_GetMapComponent_ModelLineComponent___);
              *(_QWORD *)(v391 + 16) = v396;
              sub_1B8635C((CGThumbnailListItem_o *)(v391 + 16), (int32_t)v396, v397, v398);
              v399 = *(UnityEngine_Object_o **)(v391 + 16);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              if ( !UnityEngine_Object__op_Equality(v399, 0LL, 0LL) )
              {
                v192 = *(ModelLineComponent_o **)(v391 + 16);
                v193 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
                System_Action___ctor(
                  v193,
                  (Il2CppObject *)v391,
                  Method_QuestAfterAction_StateMain___c__DisplayClass16_8__UpdateAnim_b__7__,
                  0LL);
                if ( !v192 )
                  goto LABEL_1017;
                v195 = 4;
LABEL_539:
                ModelLineComponent__SetState(v192, v195, v193, v194);
              }
            }
            else
            {
              v580 = sub_1B86604(QuestAfterAction_StateMain___c__DisplayClass16_9_TypeInfo);
              QuestAfterAction_StateMain___c__DisplayClass16_9___ctor(
                (QuestAfterAction_StateMain___c__DisplayClass16_9_o *)v580,
                0LL);
              if ( !v580 )
                goto LABEL_1017;
              *(_QWORD *)(v580 + 24) = v95;
              sub_1B8635C((CGThumbnailListItem_o *)(v580 + 24), v95, v581, v582);
              v583 = *(_QWORD *)(v580 + 24);
              if ( !v583 )
                goto LABEL_1017;
              v584 = *(QuestAfterAction_o **)(v583 + 24);
              updated = System_Int32__Parse(v105->fields.param, 0LL);
              if ( !v584 )
                goto LABEL_1017;
              v585 = QuestAfterAction__GetMapComponent_object_(
                       v584,
                       1,
                       updated,
                       this,
                       (const MethodInfo_3002668 *)Method_QuestAfterAction_GetMapComponent_srcLineSprite___);
              *(_QWORD *)(v580 + 16) = v585;
              sub_1B8635C((CGThumbnailListItem_o *)(v580 + 16), (int32_t)v585, v586, v587);
              v588 = *(UnityEngine_Object_o **)(v580 + 16);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              if ( !UnityEngine_Object__op_Equality(v588, 0LL, 0LL) )
              {
                v568 = *(srcLineSprite_o **)(v580 + 16);
                v569 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
                System_Action___ctor(
                  v569,
                  (Il2CppObject *)v580,
                  Method_QuestAfterAction_StateMain___c__DisplayClass16_9__UpdateAnim_b__8__,
                  0LL);
                if ( !v568 )
                  goto LABEL_1017;
                v570 = 4;
LABEL_825:
                srcLineSprite__SetState(v568, v570, v569, 0LL);
              }
            }
            return;
          case 203:
            IsMapModel = this->fields.IsMapModel;
            v401 = *v100;
            updated = System_Int32__Parse(v105->fields.param, 0LL);
            if ( !v401 )
              goto LABEL_1017;
            if ( IsMapModel )
            {
              v402 = (UnityEngine_Object_o *)QuestAfterAction__GetMapComponent_object_(
                                               v401,
                                               1,
                                               updated,
                                               this,
                                               (const MethodInfo_3002668 *)Method_QuestAfterAction_GetMapComponent_ModelLineComponent___);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              updated = UnityEngine_Object__op_Equality(v402, 0LL, 0LL);
              if ( (updated & 1) != 0 )
                return;
              if ( !v402 )
                goto LABEL_1017;
              ModelLineComponent__SetQuestAfterActionScaleAnim_34473376((ModelLineComponent_o *)v402, 0, 0.0, v403);
              v404 = v402[3].klass;
              if ( !v404 )
                goto LABEL_1017;
            }
            else
            {
              v589 = (UnityEngine_Object_o *)QuestAfterAction__GetMapComponent_object_(
                                               v401,
                                               1,
                                               updated,
                                               this,
                                               (const MethodInfo_3002668 *)Method_QuestAfterAction_GetMapComponent_srcLineSprite___);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              updated = UnityEngine_Object__op_Equality(v589, 0LL, 0LL);
              if ( (updated & 1) != 0 )
                return;
              if ( !v589 )
                goto LABEL_1017;
              srcLineSprite__SetQaaScaleAnimQuick((srcLineSprite_o *)v589, 0, 0LL);
              v404 = v589[5].monitor;
              if ( !v404 )
                goto LABEL_1017;
            }
            goto LABEL_887;
          case 204:
            v405 = this->fields.IsMapModel;
            v406 = *v100;
            updated = System_Int32__Parse(v105->fields.param, 0LL);
            if ( !v406 )
              goto LABEL_1017;
            if ( v405 )
            {
              v407 = (UnityEngine_Object_o *)QuestAfterAction__GetMapComponent_object_(
                                               v406,
                                               1,
                                               updated,
                                               this,
                                               (const MethodInfo_3002668 *)Method_QuestAfterAction_GetMapComponent_ModelLineComponent___);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              updated = UnityEngine_Object__op_Equality(v407, 0LL, 0LL);
              if ( (updated & 1) != 0 )
                return;
              if ( !v407 )
                goto LABEL_1017;
              ModelLineComponent__SetQuestAfterActionScaleAnim_34473376((ModelLineComponent_o *)v407, 1, 0.0, v408);
              ModelLineComponent__SetQuestAfterActionColorAnim_34473852((ModelLineComponent_o *)v407, 0, 0.0, v409);
              v410 = v407[3].klass;
              if ( !v410 )
                goto LABEL_1017;
            }
            else
            {
              v590 = (UnityEngine_Object_o *)QuestAfterAction__GetMapComponent_object_(
                                               v406,
                                               1,
                                               updated,
                                               this,
                                               (const MethodInfo_3002668 *)Method_QuestAfterAction_GetMapComponent_srcLineSprite___);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              updated = UnityEngine_Object__op_Equality(v590, 0LL, 0LL);
              if ( (updated & 1) != 0 )
                return;
              if ( !v590 )
                goto LABEL_1017;
              srcLineSprite__SetQaaScaleAnimQuick((srcLineSprite_o *)v590, 1, 0LL);
              srcLineSprite__SetQaaColorAnimQuick((srcLineSprite_o *)v590, 0, 0LL);
              v410 = v590[5].monitor;
              if ( !v410 )
                goto LABEL_1017;
            }
            v591 = 2;
            goto LABEL_844;
          case 205:
            v411 = this->fields.IsMapModel;
            v412 = *v100;
            updated = System_Int32__Parse(v105->fields.param, 0LL);
            if ( !v412 )
              goto LABEL_1017;
            if ( v411 )
            {
              v413 = (UnityEngine_Object_o *)QuestAfterAction__GetMapComponent_object_(
                                               v412,
                                               1,
                                               updated,
                                               this,
                                               (const MethodInfo_3002668 *)Method_QuestAfterAction_GetMapComponent_ModelLineComponent___);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              updated = UnityEngine_Object__op_Equality(v413, 0LL, 0LL);
              if ( (updated & 1) != 0 )
                return;
              if ( !v413 )
                goto LABEL_1017;
              ModelLineComponent__SetQuestAfterActionScaleAnim_34473376((ModelLineComponent_o *)v413, 1, 0.0, v414);
              ModelLineComponent__SetQuestAfterActionColorAnim_34473852((ModelLineComponent_o *)v413, 1, 0.0, v415);
              v410 = v413[3].klass;
              if ( !v410 )
                goto LABEL_1017;
            }
            else
            {
              v592 = (UnityEngine_Object_o *)QuestAfterAction__GetMapComponent_object_(
                                               v412,
                                               1,
                                               updated,
                                               this,
                                               (const MethodInfo_3002668 *)Method_QuestAfterAction_GetMapComponent_srcLineSprite___);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              updated = UnityEngine_Object__op_Equality(v592, 0LL, 0LL);
              if ( (updated & 1) != 0 )
                return;
              if ( !v592 )
                goto LABEL_1017;
              srcLineSprite__SetQaaScaleAnimQuick((srcLineSprite_o *)v592, 1, 0LL);
              srcLineSprite__SetQaaColorAnimQuick((srcLineSprite_o *)v592, 1, 0LL);
              v410 = v592[5].monitor;
              if ( !v410 )
                goto LABEL_1017;
            }
            v591 = 1;
LABEL_844:
            v410[4] = v591;
            goto LABEL_18;
          default:
            if ( id != 350 )
              return;
            updated = (__int64)v105->fields.param;
            if ( !updated )
              goto LABEL_1017;
            updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
            if ( !updated )
              goto LABEL_1017;
            v309 = updated;
            if ( *(int *)(updated + 24) <= 0 )
              goto LABEL_481;
            v310 = System_Int32__Parse(*(System_String_o **)(updated + 32), 0LL);
            if ( v310 < 1 )
              goto LABEL_481;
            v311 = v310;
            v312 = 0.5;
            if ( *(int *)(v309 + 24) > 1 )
            {
              v313 = System_Int32__Parse(*(System_String_o **)(v309 + 40), 0LL);
              if ( *(int *)(v309 + 24) >= 3 )
                v312 = System_Single__Parse(*(System_String_o **)(v309 + 48), 0LL) * 0.001;
            }
            else
            {
              v313 = 15;
            }
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            if ( !byte_4A48DB8 )
            {
              sub_1B863B8(&TerminalSceneComponent_TypeInfo, v97);
              byte_4A48DB8 = 1;
            }
            updated = (__int64)TerminalSceneComponent_TypeInfo;
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
              updated = (__int64)TerminalSceneComponent_TypeInfo;
            }
            v626 = **(_QWORD **)(updated + 184);
            if ( !v626 )
              goto LABEL_1017;
            v627 = *(ScrTerminalMap_o **)(v626 + 264);
            v628 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
            System_Action___ctor(
              v628,
              (Il2CppObject *)v95,
              Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__10__,
              0LL);
            if ( !v627 )
              goto LABEL_1017;
            ScrTerminalMap__RequestMapMove_35237504(v627, v311, v312, v313, v628, 0LL);
            return;
        }
    }
  }
  if ( id <= 604 )
  {
    if ( id > 540 )
    {
      switch ( id )
      {
        case 600:
          v120 = (System_String_o *)StringLiteral_1/*""*/;
          v121 = System_String__Concat_61645176((System_String_o *)StringLiteral_10661/*"QUEST_AFTER_ACTION_MESSAGE_"*/, v105->fields.param, 0LL);
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v122 = LocalizationManager__Get(v121, 0LL);
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v124 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
          System_Action___ctor(
            v124,
            (Il2CppObject *)v95,
            Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__29__,
            0LL);
          if ( !Instance )
            goto LABEL_1017;
          CommonUI__OpenNotificationDialog(
            (CommonUI_o *)Instance,
            v120,
            v122,
            v124,
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
          v257 = (System_String_o *)StringLiteral_1/*""*/;
          updated = sub_1B86460(string___TypeInfo, 1LL);
          if ( !updated )
            goto LABEL_1017;
          v260 = (System_String_array *)updated;
          if ( !*(_DWORD *)(updated + 24) )
            break;
          v261 = StringLiteral_89/*"\r\n"*/;
          *(_QWORD *)(updated + 32) = StringLiteral_89/*"\r\n"*/;
          sub_1B8635C((CGThumbnailListItem_o *)(updated + 32), v261, v258, v259);
          updated = (__int64)v105->fields.param;
          if ( !updated )
            goto LABEL_1017;
          updated = (__int64)System_String__Split_61698328((System_String_o *)updated, v260, 0, 0LL);
          if ( !updated )
            goto LABEL_1017;
          v262 = *(_DWORD *)(updated + 24);
          if ( v262 <= 0 )
            goto LABEL_481;
          v263 = *(System_String_o **)(updated + 32);
          if ( v262 == 1 )
          {
            v264 = *(System_String_o **)(updated + 32);
            v263 = v257;
          }
          else
          {
            v264 = *(System_String_o **)(updated + 40);
          }
          v422 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v423 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
          System_Action___ctor(
            v423,
            (Il2CppObject *)v95,
            Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__30__,
            0LL);
          if ( !v422 )
            goto LABEL_1017;
          CommonUI__OpenNotificationDialog(
            (CommonUI_o *)v422,
            v263,
            v264,
            v423,
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
          v265 = (System_String_o *)StringLiteral_1/*""*/;
          v266 = System_String__Concat_61645176((System_String_o *)StringLiteral_10661/*"QUEST_AFTER_ACTION_MESSAGE_"*/, v105->fields.param, 0LL);
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v267 = LocalizationManager__Get(v266, 0LL);
          v268 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v269 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
          System_Action___ctor(
            v269,
            (Il2CppObject *)v95,
            Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__31__,
            0LL);
          if ( !v268 )
            goto LABEL_1017;
          v270 = "/Applications/Unity/Hub/Editor/2022.3.28f1/Unity.app/Contents/il2cpp/libil2cpp/icalls/mscorlib/System/A"
                 "ppDomain.cpp(197) : Unsupported internal call for IL2CPP:AppDomain::InternalSetContext - \"This icall i"
                 "s only used in the System.Runtime.Remoting namespace.\""
               + 54;
          onClickOkSeKind = 0;
          goto LABEL_582;
        case 603:
          v271 = (System_String_o *)StringLiteral_1/*""*/;
          updated = sub_1B86460(string___TypeInfo, 1LL);
          if ( !updated )
            goto LABEL_1017;
          v274 = (System_String_array *)updated;
          if ( !*(_DWORD *)(updated + 24) )
            break;
          v275 = StringLiteral_89/*"\r\n"*/;
          *(_QWORD *)(updated + 32) = StringLiteral_89/*"\r\n"*/;
          sub_1B8635C((CGThumbnailListItem_o *)(updated + 32), v275, v272, v273);
          updated = (__int64)v105->fields.param;
          if ( !updated )
            goto LABEL_1017;
          updated = (__int64)System_String__Split_61698328((System_String_o *)updated, v274, 0, 0LL);
          if ( !updated )
            goto LABEL_1017;
          v276 = *(_DWORD *)(updated + 24);
          if ( v276 <= 0 )
            goto LABEL_481;
          v265 = *(System_String_o **)(updated + 32);
          if ( v276 == 1 )
          {
            v267 = *(System_String_o **)(updated + 32);
            v265 = v271;
          }
          else
          {
            v267 = *(System_String_o **)(updated + 40);
          }
          v268 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v269 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
          System_Action___ctor(
            v269,
            (Il2CppObject *)v95,
            Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__32__,
            0LL);
          if ( !v268 )
            goto LABEL_1017;
          v270 = "ontents/il2cpp/libil2cpp/icalls/mscorlib/System/AppDomain.cpp(197) : Unsupported internal call for IL2CPP:AppDomain::InternalSetContext - \"This icall is only used in the System.Runtime.Remoting namespace.\"";
          onClickOkSeKind = 1;
LABEL_582:
          CommonUI__OpenNotificationDialog_30484284(
            (CommonUI_o *)v268,
            v265,
            v267,
            v269,
            40.0,
            *((float *)v270 + 468),
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
          v277 = (System_String_o *)StringLiteral_1/*""*/;
          v278 = System_String__Concat_61645176((System_String_o *)StringLiteral_10661/*"QUEST_AFTER_ACTION_MESSAGE_"*/, v105->fields.param, 0LL);
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v279 = LocalizationManager__Get(v278, 0LL);
          v280 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v281 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
          System_Action___ctor(
            v281,
            (Il2CppObject *)v95,
            Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__33__,
            0LL);
          if ( !v280 )
            goto LABEL_1017;
          CommonUI__OpenNotificationDialog_30484284(
            (CommonUI_o *)v280,
            v277,
            v279,
            v281,
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
          if ( id == 550 )
            goto LABEL_18;
          if ( id != 560 )
            return;
          updated = (__int64)v105->fields.param;
          if ( !updated )
            goto LABEL_1017;
          updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
          if ( !updated )
            goto LABEL_1017;
          v198 = *(_QWORD *)(updated + 24);
          v199 = updated;
          if ( v198 )
          {
            if ( !(_DWORD)v198 )
              break;
            v200 = System_Int32__Parse(*(System_String_o **)(updated + 32), 0LL) > 0;
          }
          else
          {
            v200 = 0;
          }
          v416 = sub_1B86604(QuestAfterAction_TitleInfoControlParam_TypeInfo);
          System_Object___ctor((Il2CppObject *)v416, 0LL);
          if ( *(int *)(v199 + 24) < 2 )
            goto LABEL_570;
          updated = System_Int32__Parse(*(System_String_o **)(v199 + 40), 0LL);
          if ( (int)updated < 1 )
            goto LABEL_570;
          if ( *(_DWORD *)(v199 + 24) > 1u )
          {
            updated = System_Int32__Parse(*(System_String_o **)(v199 + 40), 0LL);
            if ( !v416 )
              goto LABEL_1017;
            *(_DWORD *)(v416 + 16) = updated;
LABEL_570:
            v418 = *v100;
            if ( !*v100 )
              goto LABEL_1017;
            TitleInfoCtrlCallback_k__BackingField = v418->fields._TitleInfoCtrlCallback_k__BackingField;
            if ( v200 )
            {
              if ( !TitleInfoCtrlCallback_k__BackingField )
                goto LABEL_1017;
              QuestAfterAction_TitleInfoControlCallback__Start(
                v418->fields._TitleInfoCtrlCallback_k__BackingField,
                (QuestAfterAction_TitleInfoControlParam_o *)v416,
                0LL,
                v417);
              goto LABEL_18;
            }
            v420 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
            System_Action___ctor(v420, (Il2CppObject *)this, (intptr_t)this->klass->vtable._15_onEnd.methodPtr, 0LL);
            if ( !TitleInfoCtrlCallback_k__BackingField )
              goto LABEL_1017;
            QuestAfterAction_TitleInfoControlCallback__Start(
              TitleInfoCtrlCallback_k__BackingField,
              (QuestAfterAction_TitleInfoControlParam_o *)v416,
              v420,
              v421);
            return;
          }
          break;
      }
LABEL_1018:
      sub_1B8661C(updated, v97);
    }
    if ( id == 530 )
    {
      v201 = sub_1B86604(QuestAfterAction_StateMain___c__DisplayClass16_16_TypeInfo);
      QuestAfterAction_StateMain___c__DisplayClass16_16___ctor(
        (QuestAfterAction_StateMain___c__DisplayClass16_16_o *)v201,
        0LL);
      if ( !v201 )
        goto LABEL_1017;
      *(_QWORD *)(v201 + 32) = v95;
      v204 = v201 + 32;
      sub_1B8635C((CGThumbnailListItem_o *)(v201 + 32), v95, v202, v203);
      v205 = System_Int32__Parse(v105->fields.param, 0LL);
      updated = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !updated )
        goto LABEL_1017;
      updated = (__int64)DataManager__GetMasterData_object_(
                           (DataManager_o *)updated,
                           (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_QuestMaster___);
      if ( !updated )
        goto LABEL_1017;
      v206 = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)updated,
               v205,
               (const MethodInfo_3214280 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
      *(_QWORD *)(v201 + 16) = v206;
      v207 = (__int64 *)(v201 + 16);
      sub_1B8635C((CGThumbnailListItem_o *)(v201 + 16), (int32_t)v206, v208, v209);
      updated = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_3839AA0 *)Method_SingletonTemplate_QuestTree__get_Instance__);
      if ( !updated )
        goto LABEL_1017;
      QuestInfo = QuestTree__GetQuestInfo((QuestTree_o *)updated, v205, 0LL);
      *(_QWORD *)(v201 + 24) = QuestInfo;
      v211 = v201 + 24;
      sub_1B8635C((CGThumbnailListItem_o *)(v201 + 24), (int32_t)QuestInfo, v212, v213);
      if ( !*(_QWORD *)(v201 + 24) )
        goto LABEL_1017;
      if ( *(_DWORD *)(*(_QWORD *)(v201 + 24) + 32LL) == 1 )
      {
        updated = *v207;
        if ( !*v207 )
          goto LABEL_1017;
        if ( QuestEntity__HasFlag((QuestEntity_o *)updated, 2LL, 0LL) )
        {
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          if ( !byte_4A4AE7A )
          {
            sub_1B863B8(&TerminalPramsManager_TypeInfo, v97);
            byte_4A4AE7A = 1;
          }
          updated = (__int64)TerminalPramsManager_TypeInfo;
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            updated = (__int64)TerminalPramsManager_TypeInfo;
          }
          *(_DWORD *)(*(_QWORD *)(updated + 184) + 20LL) = v205;
          if ( !*(_QWORD *)v211 )
            goto LABEL_1017;
          v215 = *(_DWORD *)(*(_QWORD *)v211 + 44LL);
          if ( !byte_4A4AE7E )
          {
            sub_1B863B8(&TerminalPramsManager_TypeInfo, v97);
            updated = (__int64)TerminalPramsManager_TypeInfo;
            byte_4A4AE7E = 1;
          }
          if ( !*(_DWORD *)(updated + 224) )
          {
            j_il2cpp_runtime_class_init_0(updated);
            updated = (__int64)TerminalPramsManager_TypeInfo;
          }
          *(_DWORD *)(*(_QWORD *)(updated + 184) + 24LL) = v215;
          if ( !*(_QWORD *)v204 )
            goto LABEL_1017;
          v216 = *(_QWORD *)(*(_QWORD *)v204 + 24LL);
          if ( !v216 )
            goto LABEL_1017;
          *(_BYTE *)(v216 + 194) = 1;
          v217 = (NetworkManager_ResultCallbackFunc_o *)sub_1B86604(NetworkManager_ResultCallbackFunc_TypeInfo);
          NetworkManager_ResultCallbackFunc___ctor(
            v217,
            (Il2CppObject *)v201,
            Method_QuestAfterAction_StateMain___c__DisplayClass16_16__UpdateAnim_b__24__,
            0LL);
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          Request_object = NetworkManager__getRequest_object_(
                             v217,
                             (const MethodInfo_2FF4AF4 *)Method_NetworkManager_getRequest_BattleSetupScenarioRequest___);
          if ( !byte_4A48E97 )
          {
            sub_1B863B8(&TerminalPramsManager_TypeInfo, v97);
            byte_4A48E97 = 1;
          }
          updated = (__int64)TerminalPramsManager_TypeInfo;
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            updated = (__int64)TerminalPramsManager_TypeInfo;
          }
          v219 = *(_DWORD *)(*(_QWORD *)(updated + 184) + 20LL);
          if ( !byte_4A48E96 )
          {
            sub_1B863B8(&TerminalPramsManager_TypeInfo, v97);
            updated = (__int64)TerminalPramsManager_TypeInfo;
            byte_4A48E96 = 1;
          }
          if ( !*(_DWORD *)(updated + 224) )
          {
            j_il2cpp_runtime_class_init_0(updated);
            updated = (__int64)TerminalPramsManager_TypeInfo;
          }
          if ( !Request_object )
            goto LABEL_1017;
          BattleSetupScenarioRequest__beginRequest(
            (BattleSetupScenarioRequest_o *)Request_object,
            v219,
            *(_DWORD *)(*(_QWORD *)(updated + 184) + 24LL) + 1,
            0LL);
        }
      }
      else
      {
        QuestAfterAction_StateMain__ForceEndAnim(this, 1, v214);
      }
      return;
    }
    if ( id != 540 )
      return;
    updated = (__int64)v105->fields.param;
    if ( !updated )
      goto LABEL_1017;
    updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
    if ( !updated )
      goto LABEL_1017;
    v140 = updated;
    if ( !*(_DWORD *)(updated + 24) )
      goto LABEL_1018;
    v141 = System_Int32__Parse(*(System_String_o **)(updated + 32), 0LL);
    if ( *(int *)(v140 + 24) < 2 )
    {
      v142 = -1;
    }
    else
    {
      v142 = System_Int32__Parse(*(System_String_o **)(v140 + 40), 0LL);
      if ( *(int *)(v140 + 24) >= 3 )
      {
        v143 = System_Int32__Parse(*(System_String_o **)(v140 + 48), 0LL);
LABEL_269:
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_4A4907E )
        {
          sub_1B863B8(&TerminalPramsManager_TypeInfo, v97);
          byte_4A4907E = 1;
        }
        v252 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v252 = TerminalPramsManager_TypeInfo;
        }
        v252->static_fields->_IsAutoResume_k__BackingField = 1;
        if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        if ( !byte_4A48DB8 )
        {
          sub_1B863B8(&TerminalSceneComponent_TypeInfo, v97);
          byte_4A48DB8 = 1;
        }
        updated = (__int64)TerminalSceneComponent_TypeInfo;
        if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          updated = (__int64)TerminalSceneComponent_TypeInfo;
        }
        v253 = **(_QWORD **)(updated + 184);
        if ( !v253 )
          goto LABEL_1017;
        updated = *(_QWORD *)(v253 + 264);
        if ( !updated )
          goto LABEL_1017;
        if ( !ScrTerminalMap__RequestMapChange((ScrTerminalMap_o *)updated, v141, v142, v143, 0LL) )
        {
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          if ( !byte_4A4907E )
          {
            sub_1B863B8(&TerminalPramsManager_TypeInfo, v254);
            byte_4A4907E = 1;
          }
          v256 = TerminalPramsManager_TypeInfo;
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            v256 = TerminalPramsManager_TypeInfo;
          }
          v256->static_fields->_IsAutoResume_k__BackingField = 0;
          goto LABEL_18;
        }
        ((void (__fastcall *)(QuestAfterAction_StateMain_o *, Il2CppMethodPointer))this->klass->vtable._14_EndAnim.method)(
          this,
          this->klass->vtable._15_onEnd.methodPtr);
        updated = (__int64)*v100;
        if ( !*v100 )
          goto LABEL_1017;
        QuestAfterAction__SetState((QuestAfterAction_o *)updated, 0, v255);
        return;
      }
    }
    v143 = -1;
    goto LABEL_269;
  }
  if ( id <= 801 )
  {
    if ( id <= 701 )
    {
      if ( id != 700 )
      {
        if ( id != 701 )
          return;
        if ( !System_String__op_Equality(v105->fields.param, (System_String_o *)StringLiteral_1139/*"0"*/, 0LL) )
          goto LABEL_18;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_4A4B12A )
        {
          sub_1B863B8(&TerminalPramsManager_TypeInfo, v196);
          byte_4A4B12A = 1;
        }
        v197 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v197 = TerminalPramsManager_TypeInfo;
        }
        v197->static_fields->_IsTransOrdealCall_k__BackingField = 1;
        goto LABEL_479;
      }
      updated = (__int64)v105->fields.param;
      if ( !updated )
        goto LABEL_1017;
      updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
      if ( !updated )
        goto LABEL_1017;
      v249 = updated;
      if ( *(_DWORD *)(updated + 24) )
      {
        v250 = System_Int32__Parse(*(System_String_o **)(updated + 32), 0LL);
        if ( *(int *)(v249 + 24) >= 2 )
          v251 = System_Int32__Parse(*(System_String_o **)(v249 + 40), 0LL) + 1;
        else
          v251 = 0;
        v356 = (SceneJumpInfo_o *)sub_1B86604(SceneJumpInfo_TypeInfo);
        SceneJumpInfo___ctor_39633996(v356, (System_String_o *)StringLiteral_1/*""*/, v250, v251, 0LL);
        updated = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
        if ( !updated )
          goto LABEL_1017;
        AvalonSceneManager__transitionScene((AvalonSceneManager_o *)updated, 72, 1, (Il2CppObject *)v356, 0LL);
        goto LABEL_481;
      }
    }
    else
    {
      if ( id != 702 )
      {
        if ( id != 800 )
        {
          if ( id == 801 )
          {
            param = v105->fields.param;
            v129 = Method_QuestAfterAction_StateMain_UpdateAnim__;
            if ( (*((_BYTE *)Method_QuestAfterAction_StateMain_UpdateAnim__ + 83) & 2) != 0 )
              v129 = (_QWORD *)sub_1B863D0(Method_QuestAfterAction_StateMain_UpdateAnim__);
            v130 = (System_Reflection_MethodBase_o *)sub_1B8639C(v129, v129[4]);
            OverwriteAssetSoundName__PlaySe(v130, param, 0, 0LL);
            goto LABEL_18;
          }
          return;
        }
        v241 = *v100;
        if ( !*v100 )
          goto LABEL_1017;
        updated = (__int64)v241->fields.svtVoices;
        if ( !updated )
          goto LABEL_1017;
        if ( System_Collections_Generic_Dictionary_int__object___TryGetValue(
               (System_Collections_Generic_Dictionary_int__object__o *)updated,
               v241->fields.commandIdx,
               &value,
               (const MethodInfo_326EEF0 *)Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__TryGetValue__) )
        {
          updated = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
          if ( !updated )
            goto LABEL_1017;
          AutomatedAction__TerminateMissionAction((AutomatedAction_o *)updated, 0LL);
          if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          if ( !byte_4A48DB8 )
          {
            sub_1B863B8(&TerminalSceneComponent_TypeInfo, v97);
            byte_4A48DB8 = 1;
          }
          updated = (__int64)TerminalSceneComponent_TypeInfo;
          if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            updated = (__int64)TerminalSceneComponent_TypeInfo;
          }
          v242 = **(_QWORD **)(updated + 184);
          if ( !v242 )
            goto LABEL_1017;
          if ( !*(_QWORD *)(v242 + 464) )
            goto LABEL_253;
          if ( !*(_DWORD *)(updated + 224) )
            j_il2cpp_runtime_class_init_0(updated);
          if ( !byte_4A48DB8 )
          {
            sub_1B863B8(&TerminalSceneComponent_TypeInfo, v97);
            byte_4A48DB8 = 1;
          }
          updated = (__int64)TerminalSceneComponent_TypeInfo;
          if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            updated = (__int64)TerminalSceneComponent_TypeInfo;
          }
          v243 = **(_QWORD **)(updated + 184);
          if ( !v243 )
            goto LABEL_1017;
          v244 = *(_QWORD *)(v243 + 464);
          if ( !v244 )
            goto LABEL_1017;
          updated = *(unsigned int *)(v244 + 48);
          if ( !(_DWORD)updated )
          {
LABEL_253:
            if ( !value )
              goto LABEL_1017;
            updated = LODWORD(value[1].klass);
          }
          if ( (int)updated < 1 )
          {
            if ( !value )
              goto LABEL_1017;
            v558 = (System_String_o *)value[1].monitor;
            if ( !SoundManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
            SoundManager__playVoice(v558, 0, 0LL);
          }
          else
          {
            updated = (__int64)ServantVoiceEntity__getVoiceAssetName_40875676(updated, 0LL);
            if ( !value )
              goto LABEL_1017;
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
            SoundManager__playVoice_39673076(v245, v246, DEFAULT_VOLUME, 0LL, 0, 0LL);
          }
        }
LABEL_481:
        ((void (__fastcall *)(QuestAfterAction_StateMain_o *, Il2CppMethodPointer))this->klass->vtable._14_EndAnim.method)(
          this,
          this->klass->vtable._15_onEnd.methodPtr);
        return;
      }
      updated = (__int64)v105->fields.param;
      if ( !updated )
        goto LABEL_1017;
      updated = (__int64)System_String__Split_61697188(
                           (System_String_o *)updated,
                           (System_String_o *)StringLiteral_817/*","*/,
                           0,
                           0LL);
      if ( !updated )
        goto LABEL_1017;
      v238 = *(_QWORD *)(updated + 24);
      v239 = updated;
      if ( !v238 )
        goto LABEL_464;
      if ( (_DWORD)v238 )
      {
        if ( System_Int32__Parse(*(System_String_o **)(updated + 32), 0LL) > 0 )
          goto LABEL_18;
        if ( *(int *)(v239 + 24) >= 2 )
        {
          v240 = System_Int32__Parse(*(System_String_o **)(v239 + 40), 0LL);
LABEL_465:
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          TerminalPramsManager__SetAutoResumeForFolder(v240, 0LL);
          if ( !byte_4A4B073 )
          {
            sub_1B863B8(&TerminalPramsManager_TypeInfo, v357);
            byte_4A4B073 = 1;
          }
          v358 = TerminalPramsManager_TypeInfo;
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            v358 = TerminalPramsManager_TypeInfo;
          }
          if ( v358->static_fields->_DispState_k__BackingField == 3 )
          {
            if ( !v358->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(v358);
            if ( !byte_4A4B12B )
            {
              sub_1B863B8(&TerminalPramsManager_TypeInfo, v357);
              byte_4A4B12B = 1;
            }
            v359 = TerminalPramsManager_TypeInfo;
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
              v359 = TerminalPramsManager_TypeInfo;
            }
            v359->static_fields->_IsMoveFolderByQuestAfterAction_k__BackingField = 1;
          }
LABEL_479:
          updated = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
          if ( !updated )
            goto LABEL_1017;
          AvalonSceneManager__transitionSceneRefresh((AvalonSceneManager_o *)updated, 34, 1, 0LL, 0, 0LL);
          goto LABEL_481;
        }
LABEL_464:
        v240 = 0;
        goto LABEL_465;
      }
    }
    goto LABEL_1018;
  }
  switch ( id )
  {
    case 850:
      if ( !SoundManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      SoundManager__stopBgm(0LL);
      if ( !*v100 )
        goto LABEL_1017;
      (*v100)->fields.isRequestedStopBgm = 1;
      goto LABEL_18;
    case 851:
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      if ( !byte_4A48DB8 )
      {
        sub_1B863B8(&TerminalSceneComponent_TypeInfo, v97);
        byte_4A48DB8 = 1;
      }
      v220 = TerminalSceneComponent_TypeInfo;
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        v220 = TerminalSceneComponent_TypeInfo;
      }
      v221 = v220->static_fields->mInstance;
      updated = (__int64)QuestAfterAction_Command__GetBgmName(v105, v97);
      if ( !v221 )
        goto LABEL_1017;
      TerminalSceneComponent__playBgm(v221, (System_String_o *)updated, 0LL);
      if ( !*v100 )
        goto LABEL_1017;
      (*v100)->fields.isRequestedStopBgm = 0;
      goto LABEL_18;
    case 900:
      v110 = (float)System_Int32__Parse(v105->fields.param, 0LL) / 1000.0;
      if ( v110 <= 0.0 )
        goto LABEL_18;
      this->fields.waitTime = v110;
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
  const MethodInfo *v3; // x3
  TerminalSceneComponent_c *screenCollider; // x0
  __int64 v7; // x1
  struct QuestAfterAction_o *v8; // x8
  struct TerminalSceneComponent_o *mInstance; // x8

  if ( (byte_4A4B115 & 1) == 0 )
  {
    sub_1B863B8(&TerminalSceneComponent_TypeInfo, that);
    byte_4A4B115 = 1;
  }
  this->fields.that = that;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields, (int32_t)that, (int32_t)method, v3);
  v8 = this->fields.that;
  if ( !v8 )
    goto LABEL_14;
  screenCollider = (TerminalSceneComponent_c *)v8->fields.screenCollider;
  if ( !screenCollider )
    goto LABEL_14;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)screenCollider, 1, 0LL);
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4A48DB8 )
  {
    sub_1B863B8(&TerminalSceneComponent_TypeInfo, v7);
    byte_4A48DB8 = 1;
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
    sub_1B86614(screenCollider, v7);
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
    sub_1B86614(this, method);
  return that->fields.commandBuf;
}


int32_t __fastcall QuestAfterAction_StateMain__get_CommandIndex(
        QuestAfterAction_StateMain_o *this,
        const MethodInfo *method)
{
  struct QuestAfterAction_o *that; // x8

  that = this->fields.that;
  if ( !that )
    sub_1B86614(this, method);
  return that->fields.commandIdx;
}


UnityEngine_GameObject_o *__fastcall QuestAfterAction_StateMain__get_SubGimmickRoot(
        QuestAfterAction_StateMain_o *this,
        const MethodInfo *method)
{
  TerminalSceneComponent_c *v2; // x0
  struct TerminalSceneComponent_o *mInstance; // x8
  struct ScrTerminalMap_o *mTerminalMap; // x8

  if ( (byte_4A4B114 & 1) == 0 )
  {
    sub_1B863B8(&TerminalSceneComponent_TypeInfo, method);
    byte_4A4B114 = 1;
  }
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4A48DB8 )
  {
    sub_1B863B8(&TerminalSceneComponent_TypeInfo, method);
    byte_4A48DB8 = 1;
  }
  v2 = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v2 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = v2->static_fields->mInstance;
  if ( !mInstance || (mTerminalMap = mInstance->fields.mTerminalMap) == 0LL )
    sub_1B86614(v2, method);
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

  if ( (byte_4A4B117 & 1) == 0 )
  {
    sub_1B863B8(&TerminalSceneComponent_TypeInfo, deleteKey);
    sub_1B863B8(&StringLiteral_16474/*"afterActionBk"*/, v5);
    byte_4A4B117 = 1;
  }
  if ( deleteKey )
    UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_16474/*"afterActionBk"*/, 0LL);
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4A48DB8 )
  {
    sub_1B863B8(&TerminalSceneComponent_TypeInfo, deleteKey);
    byte_4A48DB8 = 1;
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
    sub_1B86614(mInstance, deleteKey);
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
    sub_1B86614(this, value);
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

  if ( (byte_4A4B1F8 & 1) == 0 )
  {
    sub_1B863B8(&QuestAfterAction_StateMain___c_TypeInfo, v1);
    byte_4A4B1F8 = 1;
  }
  v2 = (Il2CppObject *)sub_1B86604(QuestAfterAction_StateMain___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  QuestAfterAction_StateMain___c_TypeInfo->static_fields->__9 = (struct QuestAfterAction_StateMain___c_o *)v2;
  sub_1B8635C((CGThumbnailListItem_o *)QuestAfterAction_StateMain___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
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

  if ( (byte_4A4B1F9 & 1) == 0 )
  {
    sub_1B863B8(&ScriptManager_CallbackFunc_TypeInfo, method);
    sub_1B863B8(&ScriptManager_TypeInfo, v2);
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v3);
    sub_1B863B8(&Method_QuestAfterAction_StateMain___c__UpdateAnim_b__16_27__, v4);
    sub_1B863B8(&QuestAfterAction_StateMain___c_TypeInfo, v5);
    byte_4A4B1F9 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A4AE79 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, method);
    byte_4A4AE79 = 1;
  }
  v6 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v6 = TerminalPramsManager_TypeInfo;
  }
  WarId_k__BackingField = v6->static_fields->_WarId_k__BackingField;
  if ( !byte_4A48E97 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, method);
    v6 = TerminalPramsManager_TypeInfo;
    byte_4A48E97 = 1;
  }
  if ( !v6->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v6);
    v6 = TerminalPramsManager_TypeInfo;
  }
  QuestId_k__BackingField = v6->static_fields->_QuestId_k__BackingField;
  if ( !byte_4A48E96 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, method);
    v6 = TerminalPramsManager_TypeInfo;
    byte_4A48E96 = 1;
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
    _9__16_27 = (ScriptManager_CallbackFunc_o *)sub_1B86604(ScriptManager_CallbackFunc_TypeInfo);
    ScriptManager_CallbackFunc___ctor(_9__16_27, v12, Method_QuestAfterAction_StateMain___c__UpdateAnim_b__16_27__, 0LL);
    static_fields = QuestAfterAction_StateMain___c_TypeInfo->static_fields;
    static_fields->__9__16_27 = _9__16_27;
    sub_1B8635C((CGThumbnailListItem_o *)&static_fields->__9__16_27, (int32_t)_9__16_27, v14, v15);
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

  if ( (byte_4A4B1FA & 1) == 0 )
  {
    sub_1B863B8(&Method_NetworkManager_getRequest_BattleScenarioRequest___, isExit);
    sub_1B863B8(&NetworkManager_TypeInfo, v3);
    sub_1B863B8(&NetworkManager_ResultCallbackFunc_TypeInfo, v4);
    sub_1B863B8(&ScriptManager_TypeInfo, v5);
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v6);
    sub_1B863B8(&Method_QuestAfterAction_StateMain___c__UpdateAnim_b__16_28__, v7);
    sub_1B863B8(&QuestAfterAction_StateMain___c_TypeInfo, v8);
    byte_4A4B1FA = 1;
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
    _9__16_28 = (NetworkManager_ResultCallbackFunc_o *)sub_1B86604(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      _9__16_28,
      v11,
      Method_QuestAfterAction_StateMain___c__UpdateAnim_b__16_28__,
      0LL);
    static_fields = QuestAfterAction_StateMain___c_TypeInfo->static_fields;
    static_fields->__9__16_28 = _9__16_28;
    sub_1B8635C((CGThumbnailListItem_o *)&static_fields->__9__16_28, (int32_t)_9__16_28, v13, v14);
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     _9__16_28,
                     (const MethodInfo_2FF4AF4 *)Method_NetworkManager_getRequest_BattleScenarioRequest___);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A48E97 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v15);
    byte_4A48E97 = 1;
  }
  v17 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v17 = TerminalPramsManager_TypeInfo;
  }
  QuestId_k__BackingField = v17->static_fields->_QuestId_k__BackingField;
  if ( !byte_4A48E96 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v15);
    v17 = TerminalPramsManager_TypeInfo;
    byte_4A48E96 = 1;
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
    sub_1B86614(SelectRouteArray, v21);
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

  if ( (byte_4A4B1FB & 1) == 0 )
  {
    sub_1B863B8(&Method_JsonManager_DeserializeArray_BattleResultComponent_resultData___, jsonstr);
    sub_1B863B8(&JsonManager_TypeInfo, v4);
    sub_1B863B8(&ScriptManager_TypeInfo, v5);
    sub_1B863B8(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v6);
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v7);
    sub_1B863B8(&StringLiteral_16474/*"afterActionBk"*/, v8);
    sub_1B863B8(&StringLiteral_15580/*"["*/, v9);
    sub_1B863B8(&StringLiteral_15836/*"]"*/, v10);
    sub_1B863B8(&StringLiteral_13488/*"TerminalTransitionInfoMissionId"*/, v11);
    byte_4A4B1FB = 1;
  }
  v12 = (Il2CppObject *)System_String__Concat_61683424(
                          (System_String_o *)StringLiteral_15580/*"["*/,
                          jsonstr,
                          (System_String_o *)StringLiteral_15836/*"]"*/,
                          0LL);
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v13 = JsonManager__DeserializeArray_object_(
          v12,
          (const MethodInfo_2FD883C *)Method_JsonManager_DeserializeArray_BattleResultComponent_resultData___);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_16474/*"afterActionBk"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13488/*"TerminalTransitionInfoMissionId"*/, 0LL);
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  ScriptManager__ClearSelectRouteArray(0LL);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  TerminalPramsManager__ReceiveQuestEndResultInfo((BattleResultComponent_resultData_array *)v13, 1, 0LL);
  if ( !byte_4A4907E )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v14);
    byte_4A4907E = 1;
  }
  v15 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v15 = TerminalPramsManager_TypeInfo;
  }
  v15->static_fields->_IsAutoResume_k__BackingField = 1;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1B86614(0LL, v17);
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
    sub_1B86614(0LL, method);
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
    sub_1B86614(0LL, method);
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
    sub_1B86614(0LL, method);
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
    sub_1B86614(_4__this, method);
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
    sub_1B86614(0LL, method);
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
    sub_1B86614(0LL, method);
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
    sub_1B86614(0LL, method);
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
    sub_1B86614(0LL, method);
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
    sub_1B86614(0LL, method);
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
    sub_1B86614(0LL, method);
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
    sub_1B86614(spot, method);
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
    sub_1B86614(this, method);
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
    sub_1B86614(this, method);
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
    sub_1B86614(this, method);
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
    sub_1B86614(this, method);
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
    sub_1B86614(this, method);
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
  struct System_String_array *paramsStr; // x8
  struct System_String_array *v18; // x8
  UnityEngine_Color_o *v19; // x20
  float v20; // s0
  UITweener_o *v21; // x20
  EventDelegate_Callback_o *v22; // x21
  UnityEngine_Color_o color; // [xsp+10h] [xbp-40h] BYREF

  if ( (byte_4A4B1FC & 1) == 0 )
  {
    sub_1B863B8(&EventDelegate_Callback_TypeInfo, method);
    sub_1B863B8(&Method_UnityEngine_GameObject_AddComponent_TweenColor___, v3);
    sub_1B863B8(&Method_UnityEngine_GameObject_GetComponentInChildren_UISprite___, v4);
    sub_1B863B8(&Method_QuestAfterAction_StateMain___c__DisplayClass16_14__UpdateAnim_b__19__, v5);
    sub_1B863B8(&QuestAfterAction_StateMain___c__DisplayClass16_14_TypeInfo, v6);
    byte_4A4B1FC = 1;
  }
  *(_QWORD *)&color.fields.r = 0LL;
  *(_QWORD *)&color.fields.b = 0LL;
  v7 = sub_1B86604(QuestAfterAction_StateMain___c__DisplayClass16_14_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7 )
    goto LABEL_18;
  *(_QWORD *)(v7 + 24) = this;
  sub_1B8635C((CGThumbnailListItem_o *)(v7 + 24), (int32_t)this, v10, v11);
  mapGimmick = (UnityEngine_Component_o *)this->fields.mapGimmick;
  if ( !mapGimmick )
    goto LABEL_18;
  mapGimmick = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mapGimmick, 0LL);
  if ( !mapGimmick )
    goto LABEL_18;
  mapGimmick = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponentInChildren_object_(
                                            (UnityEngine_GameObject_o *)mapGimmick,
                                            (const MethodInfo_2FC1054 *)Method_UnityEngine_GameObject_GetComponentInChildren_UISprite___);
  if ( !mapGimmick )
    goto LABEL_18;
  v12 = mapGimmick;
  mapGimmick = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mapGimmick, 0LL);
  if ( !mapGimmick )
    goto LABEL_18;
  v13 = UnityEngine_GameObject__AddComponent_object_(
          (UnityEngine_GameObject_o *)mapGimmick,
          (const MethodInfo_2FC0D08 *)Method_UnityEngine_GameObject_AddComponent_TweenColor___);
  *(_QWORD *)(v7 + 16) = v13;
  v14 = (UnityEngine_Color_o **)(v7 + 16);
  sub_1B8635C((CGThumbnailListItem_o *)(v7 + 16), (int32_t)v13, v15, v16);
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
    sub_1B86614(mapGimmick, v9);
  }
  if ( v18->max_length <= 2 )
LABEL_19:
    sub_1B8661C(mapGimmick, v9);
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
  v22 = (EventDelegate_Callback_o *)sub_1B86604(EventDelegate_Callback_TypeInfo);
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

  if ( (byte_4A4B1FD & 1) == 0 )
  {
    sub_1B863B8(&UnityEngine_Object_TypeInfo, method);
    byte_4A4B1FD = 1;
  }
  tween = (UnityEngine_Object_o *)this->fields.tween;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_69356292(tween, 0LL);
  CS___8__locals14 = this->fields.CS___8__locals14;
  if ( !CS___8__locals14
    || (CS___8__locals13 = CS___8__locals14->fields.CS___8__locals13) == 0LL
    || (_4__this = CS___8__locals13->fields.__4__this) == 0LL )
  {
    sub_1B86614(_4__this, v5);
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
    sub_1B86614(this, method);
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
    sub_1B86614(this, method);
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

  if ( (byte_4A4B1FE & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, result);
    sub_1B863B8(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v4);
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v5);
    sub_1B863B8(&TerminalSceneComponent_TypeInfo, v6);
    sub_1B863B8(&Method_QuestAfterAction_StateMain___c__UpdateAnim_b__16_26__, v7);
    sub_1B863B8(&Method_QuestAfterAction_StateMain___c__DisplayClass16_16__UpdateAnim_b__25__, v8);
    sub_1B863B8(&QuestAfterAction_StateMain___c_TypeInfo, v9);
    byte_4A4B1FE = 1;
  }
  questEntity = this->fields.questEntity;
  if ( !questEntity )
    goto LABEL_34;
  if ( QuestEntity__HasFlag(questEntity, 0x800000000000LL, 0LL) )
  {
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    if ( !byte_4A48DB8 )
    {
      sub_1B863B8(&TerminalSceneComponent_TypeInfo, result);
      byte_4A48DB8 = 1;
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
      if ( !byte_4A48E97 )
      {
        sub_1B863B8(&TerminalPramsManager_TypeInfo, result);
        byte_4A48E97 = 1;
      }
      questEntity = (QuestEntity_o *)TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        questEntity = (QuestEntity_o *)TerminalPramsManager_TypeInfo;
      }
      name_high = HIDWORD(questEntity[1].klass->_1.name);
      if ( !byte_4A48E96 )
      {
        sub_1B863B8(&TerminalPramsManager_TypeInfo, result);
        questEntity = (QuestEntity_o *)TerminalPramsManager_TypeInfo;
        byte_4A48E96 = 1;
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
        _9__25 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
        System_Action___ctor(
          _9__25,
          (Il2CppObject *)this,
          Method_QuestAfterAction_StateMain___c__DisplayClass16_16__UpdateAnim_b__25__,
          0LL);
        this->fields.__9__25 = _9__25;
        sub_1B8635C((CGThumbnailListItem_o *)&this->fields.__9__25, (int32_t)_9__25, v16, v17);
      }
      if ( v12 )
      {
        ScrTerminalListTop__StartWindowMessage_35166984(v12, name_high, namespaze + 1, 2, _9__25, 1, 0LL);
        return;
      }
    }
LABEL_34:
    sub_1B86614(questEntity, result);
  }
  questEntity = (QuestEntity_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3839AA0 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
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
    _9__16_26 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
    System_Action___ctor(_9__16_26, v21, Method_QuestAfterAction_StateMain___c__UpdateAnim_b__16_26__, 0LL);
    static_fields = QuestAfterAction_StateMain___c_TypeInfo->static_fields;
    static_fields->__9__16_26 = _9__16_26;
    sub_1B8635C((CGThumbnailListItem_o *)&static_fields->__9__16_26, (int32_t)_9__16_26, v23, v24);
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

  if ( (byte_4A4B1FF & 1) == 0 )
  {
    sub_1B863B8(&MyRoomParamsManager_TypeInfo, method);
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v3);
    sub_1B863B8(&TerminalSceneComponent_TypeInfo, v4);
    sub_1B863B8(&StringLiteral_16474/*"afterActionBk"*/, v5);
    sub_1B863B8(&StringLiteral_13488/*"TerminalTransitionInfoMissionId"*/, v6);
    byte_4A4B1FF = 1;
  }
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4A48DB8 )
  {
    sub_1B863B8(&TerminalSceneComponent_TypeInfo, method);
    byte_4A48DB8 = 1;
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
  if ( !byte_4A48DB8 )
  {
    sub_1B863B8(&TerminalSceneComponent_TypeInfo, method);
    byte_4A48DB8 = 1;
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
    sub_1B86614(_4__this, method);
  ScrTerminalMap__AllMaskEnd(_4__this, 0LL);
LABEL_21:
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4A48DB8 )
  {
    sub_1B863B8(&TerminalSceneComponent_TypeInfo, method);
    byte_4A48DB8 = 1;
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
  if ( !byte_4A48E97 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v11);
    byte_4A48E97 = 1;
  }
  v12 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v12 = TerminalPramsManager_TypeInfo;
  }
  QuestId_k__BackingField = v12->static_fields->_QuestId_k__BackingField;
  if ( !byte_4A4B2B5 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v11);
    v12 = TerminalPramsManager_TypeInfo;
    byte_4A4B2B5 = 1;
  }
  if ( !v12->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v12);
    v12 = TerminalPramsManager_TypeInfo;
  }
  v12->static_fields->_LastPlayedQuestId_k__BackingField = QuestId_k__BackingField;
  if ( !byte_4A48E97 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v11);
    v12 = TerminalPramsManager_TypeInfo;
    byte_4A48E97 = 1;
  }
  if ( !v12->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v12);
    v12 = TerminalPramsManager_TypeInfo;
  }
  TerminalPramsManager__CheckClearSelectedStoryQuestId(v12->static_fields->_QuestId_k__BackingField, 0LL);
  if ( !byte_4A48E97 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v14);
    byte_4A48E97 = 1;
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
    if ( !byte_4A48E97 )
    {
      sub_1B863B8(&TerminalPramsManager_TypeInfo, v17);
      byte_4A48E97 = 1;
    }
    v19 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v19 = TerminalPramsManager_TypeInfo;
    }
    SpotId = QuestMaster__GetSpotId(v19->static_fields->_QuestId_k__BackingField, 0LL);
    if ( !byte_4A4B2B6 )
    {
      sub_1B863B8(&TerminalPramsManager_TypeInfo, v20);
      byte_4A4B2B6 = 1;
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
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_16474/*"afterActionBk"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13488/*"TerminalTransitionInfoMissionId"*/, 0LL);
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4A48DB8 )
  {
    sub_1B863B8(&TerminalSceneComponent_TypeInfo, method);
    byte_4A48DB8 = 1;
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
  if ( !byte_4A4B2B7 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, method);
    byte_4A4B2B7 = 1;
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
  if ( !byte_4A4AE79 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, method);
    byte_4A4AE79 = 1;
  }
  v27 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v27 = TerminalPramsManager_TypeInfo;
  }
  WarId_k__BackingField = v27->static_fields->_WarId_k__BackingField;
  if ( !byte_4A4B124 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, method);
    v27 = TerminalPramsManager_TypeInfo;
    byte_4A4B124 = 1;
  }
  if ( !v27->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v27);
    v27 = TerminalPramsManager_TypeInfo;
  }
  v27->static_fields->_BeforeQuestStartWarId_k__BackingField = WarId_k__BackingField;
  if ( !byte_4A48DB8 )
  {
    sub_1B863B8(&TerminalSceneComponent_TypeInfo, method);
    byte_4A48DB8 = 1;
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
  if ( !byte_4A48E97 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, method);
    byte_4A48E97 = 1;
  }
  _4__this = (ScrTerminalMap_o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    _4__this = (ScrTerminalMap_o *)TerminalPramsManager_TypeInfo;
  }
  v31 = *((_DWORD *)&_4__this->fields.subRootGimmickP->fields + 1);
  if ( !byte_4A48E96 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, method);
    _4__this = (ScrTerminalMap_o *)TerminalPramsManager_TypeInfo;
    byte_4A48E96 = 1;
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
    sub_1B86614(spot, method);
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
    sub_1B86614(spot, method);
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
    sub_1B86614(this, method);
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
    sub_1B86614(this, method);
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
    sub_1B86614(this, method);
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
    sub_1B86614(this, method);
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
    sub_1B86614(this, method);
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
    sub_1B86614(this, method);
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
  sub_1B8635C(p_end, 0, v2, v3);
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
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields, (int32_t)startCallback, (int32_t)method, v3);
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
  sub_1B8635C((CGThumbnailListItem_o *)p_end, (int32_t)endCallback, (int32_t)endCallback, method);
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


int32_t __fastcall QuestAfterAction_TitleInfoControlParam__get_TutorialEffectNum(
        QuestAfterAction_TitleInfoControlParam_o *this,
        const MethodInfo *method)
{
  return this->fields._TutorialEffectNum_k__BackingField;
}


void __fastcall QuestAfterAction_TitleInfoControlParam__set_TutorialEffectNum(
        QuestAfterAction_TitleInfoControlParam_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._TutorialEffectNum_k__BackingField = value;
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
  sub_1B8635C((CGThumbnailListItem_o *)v6, (int32_t)vName, v7, v8);
}


void __fastcall QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__83___ctor(
        QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__83_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
  this->fields.__l__initialThreadId = System_Environment__get_CurrentManagedThreadId(0LL);
}


bool __fastcall QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__83__MoveNext(
        QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__83_o *this,
        const MethodInfo *method)
{
  QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__83_o *v2; // x21
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
  const MethodInfo *v14; // x3
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
  const MethodInfo *v32; // x3
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  bool result; // w0
  QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__83_o *v36; // [xsp+18h] [xbp-38h]

  v2 = this;
  v36 = this;
  if ( (byte_4A4B203 & 1) == 0 )
  {
    sub_1B863B8(&System_Collections_Generic_IEnumerable_QuestAfterAction_Command__TypeInfo, method);
    sub_1B863B8(&System_Collections_Generic_IEnumerator_QuestAfterAction_Command__TypeInfo, v3);
    this = (QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__83_o *)sub_1B863B8(
                                                                                    &System_Collections_IEnumerator_TypeInfo,
                                                                                    v4);
    byte_4A4B203 = 1;
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
      sub_1B86614(this, method);
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
      p_method = sub_1BD6B4C(
                   commandEnumerable,
                   System_Collections_Generic_IEnumerable_QuestAfterAction_Command__TypeInfo,
                   0LL);
    }
    v12 = (*(__int64 (__fastcall **)(struct System_Collections_Generic_IEnumerable_QuestAfterAction_Command__o *, _QWORD))p_method)(
            commandEnumerable,
            *(_QWORD *)(p_method + 8));
    v36->fields.__7__wrap1 = (struct System_Collections_Generic_IEnumerator_QuestAfterAction_Command__o *)v12;
    sub_1B8635C((CGThumbnailListItem_o *)&v36->fields.__7__wrap1, v12, v13, v14);
    v2 = v36;
  }
  _7__wrap1 = v2->fields.__7__wrap1;
  v2->fields.__1__state = -3;
  if ( !_7__wrap1 )
LABEL_32:
    sub_1B86614(this, method);
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
      v19 = sub_1BD6B4C(_7__wrap1, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(struct System_Collections_Generic_IEnumerator_QuestAfterAction_Command__o *, _QWORD))v19)(
            _7__wrap1,
            *(_QWORD *)(v19 + 8)) & 1) == 0 )
    {
      QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__83____m__Finally1(v36, v20);
      v36->fields.__7__wrap1 = 0LL;
      sub_1B8635C((CGThumbnailListItem_o *)&v36->fields.__7__wrap1, 0, v33, v34);
      return 0;
    }
    v21 = v36->fields.__7__wrap1;
    if ( !v21 )
      sub_1B86614(v36, v20);
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
      v25 = sub_1BD6B4C(
              v36->fields.__7__wrap1,
              System_Collections_Generic_IEnumerator_QuestAfterAction_Command__TypeInfo,
              0LL);
    }
    v26 = (*(__int64 (__fastcall **)(struct System_Collections_Generic_IEnumerator_QuestAfterAction_Command__o *, _QWORD))v25)(
            v21,
            *(_QWORD *)(v25 + 8));
    v28 = (QuestAfterAction_Command_o *)v26;
    if ( !v26 )
      sub_1B86614(0LL, v27);
    if ( !_4__this )
      sub_1B86614(v26, v27);
    CommandType = QuestAfterAction__GetCommandType(_4__this, *(_DWORD *)(v26 + 16), 0LL);
    CommandTargetId = QuestAfterAction__ExtractCommandTargetId(v28, 0LL);
    this = (QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__83_o *)QuestAfterAction__IsExistCommand(
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
  sub_1B8635C((CGThumbnailListItem_o *)&v36->fields.__2__current, (int32_t)v28, v31, v32);
  result = 1;
  v36->fields.__1__state = 1;
  return result;
}


System_Collections_Generic_IEnumerator_QuestAfterAction_Command__o *__fastcall QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__83__System_Collections_Generic_IEnumerable_QuestAfterAction_Command__GetEnumerator(
        QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__83_o *this,
        const MethodInfo *method)
{
  int32_t l__initialThreadId; // w20
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__83_o *v6; // x20
  struct QuestAfterAction_o *_4__this; // x1
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  struct System_Collections_Generic_IEnumerable_QuestAfterAction_Command__o *_3__commandEnumerable; // x1

  if ( (byte_4A4B205 & 1) == 0 )
  {
    sub_1B863B8(&QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__83_TypeInfo, method);
    byte_4A4B205 = 1;
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
    v6 = (QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__83_o *)sub_1B86604(QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__83_TypeInfo);
    System_Object___ctor((Il2CppObject *)v6, 0LL);
    v6->fields.__1__state = 0;
    v6->fields.__l__initialThreadId = System_Environment__get_CurrentManagedThreadId(0LL);
    _4__this = this->fields.__4__this;
    v6->fields.__4__this = _4__this;
    sub_1B8635C((CGThumbnailListItem_o *)&v6->fields.__4__this, (int32_t)_4__this, v8, v9);
  }
  _3__commandEnumerable = this->fields.__3__commandEnumerable;
  v6->fields.commandEnumerable = _3__commandEnumerable;
  sub_1B8635C((CGThumbnailListItem_o *)&v6->fields.commandEnumerable, (int32_t)_3__commandEnumerable, v4, v5);
  return (System_Collections_Generic_IEnumerator_QuestAfterAction_Command__o *)v6;
}


QuestAfterAction_Command_o *__fastcall QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__83__System_Collections_Generic_IEnumerator_QuestAfterAction_Command__get_Current(
        QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__83_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__83__System_Collections_IEnumerator_Reset(
        QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__83_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1B863CC(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B86604(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B863CC(&Method_QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__83_System_Collections_IEnumerator_Reset__);
  sub_1B864E0(v3, v4);
}


Il2CppObject *__fastcall QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__83__System_Collections_IEnumerator_get_Current(
        QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__83_o *this,
        const MethodInfo *method)
{
  return (Il2CppObject *)this->fields.__2__current;
}


void __fastcall QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__83__System_IDisposable_Dispose(
        QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__83_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w8

  _1__state = this->fields.__1__state;
  if ( _1__state == 1 || _1__state == -3 )
    QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__83____m__Finally1(this, method);
}


void __fastcall QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__83____m__Finally1(
        QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__83_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_IEnumerator_QuestAfterAction_Command__o *_7__wrap1; // x19
  System_Collections_Generic_IEnumerator_QuestAfterAction_Command__c *klass; // x8
  __int64 v5; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0

  if ( (byte_4A4B204 & 1) == 0 )
  {
    sub_1B863B8(&System_IDisposable_TypeInfo, method);
    byte_4A4B204 = 1;
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
      p_method = sub_1BD6B4C(_7__wrap1, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(struct System_Collections_Generic_IEnumerator_QuestAfterAction_Command__o *, _QWORD))p_method)(
      _7__wrap1,
      *(_QWORD *)(p_method + 8));
  }
}


void __fastcall QuestAfterAction__WaitWhileMainStateFinished_d__87___ctor(
        QuestAfterAction__WaitWhileMainStateFinished_d__87_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall QuestAfterAction__WaitWhileMainStateFinished_d__87__MoveNext(
        QuestAfterAction__WaitWhileMainStateFinished_d__87_o *this,
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
      sub_1B86614(this, method);
    if ( _4__this->fields.isKeepingMainStateButFinished )
    {
      this->fields.__2__current = 0LL;
      p__2__current = &this->fields.__2__current;
      sub_1B8635C((CGThumbnailListItem_o *)&this->fields.__2__current, 0, v2, v3);
      result = 1;
      *((_DWORD *)p__2__current - 2) = 1;
      return result;
    }
    ActionExtensions__Call(this->fields.action, 0LL);
  }
  return 0;
}


Il2CppObject *__fastcall QuestAfterAction__WaitWhileMainStateFinished_d__87__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        QuestAfterAction__WaitWhileMainStateFinished_d__87_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn QuestAfterAction__WaitWhileMainStateFinished_d__87__System_Collections_IEnumerator_Reset(
        QuestAfterAction__WaitWhileMainStateFinished_d__87_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1B863CC(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B86604(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B863CC(&Method_QuestAfterAction__WaitWhileMainStateFinished_d__87_System_Collections_IEnumerator_Reset__);
  sub_1B864E0(v3, v4);
}


Il2CppObject *__fastcall QuestAfterAction__WaitWhileMainStateFinished_d__87__System_Collections_IEnumerator_get_Current(
        QuestAfterAction__WaitWhileMainStateFinished_d__87_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall QuestAfterAction__WaitWhileMainStateFinished_d__87__System_IDisposable_Dispose(
        QuestAfterAction__WaitWhileMainStateFinished_d__87_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall QuestAfterAction___c__DisplayClass76_0___ctor(
        QuestAfterAction___c__DisplayClass76_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QuestAfterAction___c__DisplayClass76_0___LoadVoice_b__0(
        QuestAfterAction___c__DisplayClass76_0_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *svtVInfos; // x0

  if ( (byte_4A4B200 & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo__RemoveAt__, method);
    byte_4A4B200 = 1;
  }
  svtVInfos = (System_Collections_Generic_List_object__o *)this->fields.svtVInfos;
  if ( !svtVInfos
    || (System_Collections_Generic_List_object___RemoveAt(
          svtVInfos,
          0,
          (const MethodInfo_35FE12C *)Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo__RemoveAt__),
        (svtVInfos = (System_Collections_Generic_List_object__o *)this->fields.__4__this) == 0LL) )
  {
    sub_1B86614(svtVInfos, method);
  }
  QuestAfterAction__LoadVoice_34492608(
    (QuestAfterAction_o *)svtVInfos,
    this->fields.svtVInfos,
    this->fields.endAct,
    0LL);
}


void __fastcall QuestAfterAction___c__DisplayClass80_0___ctor(
        QuestAfterAction___c__DisplayClass80_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QuestAfterAction___c__DisplayClass80_0___Play_b__0(
        QuestAfterAction___c__DisplayClass80_0_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4A4B201 & 1) == 0 )
  {
    sub_1B863B8(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, method);
    byte_4A4B201 = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3839AA0 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    sub_1B86614(0LL, v4);
  MissionNotifyManager__EndPause((MissionNotifyManager_o *)Instance, 0LL);
  ActionExtensions__Call(this->fields.endAct, 0LL);
}


void __fastcall QuestAfterAction___c__DisplayClass81_0___ctor(
        QuestAfterAction___c__DisplayClass81_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QuestAfterAction___c__DisplayClass81_0___PlaySpecifiedAction_b__0(
        QuestAfterAction___c__DisplayClass81_0_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  char *_4__this; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_4A4B202 & 1) == 0 )
  {
    sub_1B863B8(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, method);
    byte_4A4B202 = 1;
  }
  _4__this = (char *)this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_8;
  *((_QWORD *)_4__this + 22) = 0LL;
  sub_1B8635C((CGThumbnailListItem_o *)(_4__this + 176), 0, v2, v3);
  _4__this = (char *)this->fields.__4__this;
  if ( !_4__this
    || (*((_QWORD *)_4__this + 9) = 0LL,
        sub_1B8635C((CGThumbnailListItem_o *)(_4__this + 72), 0, v6, v7),
        (_4__this = (char *)SingletonTemplate_object___get_Instance((const MethodInfo_3839AA0 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__)) == 0LL)
    || (MissionNotifyManager__EndPause((MissionNotifyManager_o *)_4__this, 0LL),
        (_4__this = (char *)this->fields.__4__this) == 0LL) )
  {
LABEL_8:
    sub_1B86614(_4__this, method);
  }
  QuestAfterAction__SetState((QuestAfterAction_o *)_4__this, 0, 0LL);
  ActionExtensions__Call(this->fields.finishCallback, 0LL);
}


void __fastcall QuestAfterAction___c__DisplayClass81_0___PlaySpecifiedAction_b__1(
        QuestAfterAction___c__DisplayClass81_0_o *this,
        const MethodInfo *method)
{
  QuestAfterAction_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1B86614(0LL, method);
  QuestAfterAction__SetState(_4__this, 2, 0LL);
}