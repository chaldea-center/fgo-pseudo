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
  Il2CppObject *v12; // x20
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  System_Collections_Generic_Dictionary_TKey__TValue__o *v15; // x20
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  System_Collections_Generic_Dictionary_int__object__o *v18; // x20
  int32_t v19; // w2
  const MethodInfo *v20; // x3

  if ( (byte_49B7BA4 & 1) == 0 )
  {
    sub_1B4CF90(&BlankEarthQuestAfterAction_TypeInfo, method);
    sub_1B4CF90(&Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo___ctor__, v3);
    sub_1B4CF90(&Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int____ctor__, v4);
    sub_1B4CF90(&System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___TypeInfo, v5);
    sub_1B4CF90(&System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__TypeInfo, v6);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_QuestAfterAction___ctor__, v7);
    sub_1B4CF90(&QuestAfterAction_TitleInfoControlCallback_TypeInfo, v8);
    byte_49B7BA4 = 1;
  }
  v9 = (Il2CppObject *)sub_1B4D1DC(QuestAfterAction_TitleInfoControlCallback_TypeInfo);
  System_Object___ctor(v9, 0LL);
  this->fields._TitleInfoCtrlCallback_k__BackingField = (struct QuestAfterAction_TitleInfoControlCallback_o *)v9;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields._TitleInfoCtrlCallback_k__BackingField, (int32_t)v9, v10, v11);
  v12 = (Il2CppObject *)sub_1B4D1DC(BlankEarthQuestAfterAction_TypeInfo);
  System_Object___ctor(v12, 0LL);
  this->fields._BlankEarthQuestAfterAction_k__BackingField = (struct BlankEarthQuestAfterAction_o *)v12;
  sub_1B4CF34(
    (CGThumbnailListItem_o *)&this->fields._BlankEarthQuestAfterAction_k__BackingField,
    (int32_t)v12,
    v13,
    v14);
  v15 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1B4D1DC(System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___TypeInfo);
  System_Collections_Generic_Dictionary_Int32Enum__object____ctor(
    v15,
    (const MethodInfo_3226E8C *)Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int____ctor__);
  this->fields.commandTypeIds = (struct System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___o *)v15;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.commandTypeIds, (int32_t)v15, v16, v17);
  v18 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1B4D1DC(System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v18,
    (const MethodInfo_31F64AC *)Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo___ctor__);
  this->fields.svtVoices = (struct System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__o *)v18;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.svtVoices, (int32_t)v18, v19, v20);
  this->fields.MapMoveBeforeFocusSpotId = -1;
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_37B4828 *)Method_SingletonMonoBehaviour_QuestAfterAction___ctor__);
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
  sub_1B4CF34(p_endAct, 0, v2, v3);
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

  if ( (byte_49B7B8A & 1) == 0 )
  {
    sub_1B4CF90(&QuestAfterAction_Command___TypeInfo, method);
    sub_1B4CF90(&QuestAfterAction_Command_TypeInfo, v3);
    sub_1B4CF90(&Method_DataManager_GetMasterData_QuestMaster___, v4);
    sub_1B4CF90(&Method_DataManager_GetMasterData_QuestPhaseDetailAddMaster___, v5);
    sub_1B4CF90(&Method_DataManager_GetMasterData_QuestPhaseDetailMaster___, v6);
    sub_1B4CF90(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__, v7);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    sub_1B4CF90(&TerminalPramsManager_TypeInfo, v9);
    sub_1B4CF90(&StringLiteral_1190/*"1"*/, v10);
    byte_49B7B8A = 1;
  }
  entity = 0LL;
  if ( this->fields.BlankEarthTargetWarId > 0 )
    return 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_49B7BC3 )
  {
    sub_1B4CF90(&TerminalPramsManager_TypeInfo, v12);
    byte_49B7BC3 = 1;
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
                          (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_QuestPhaseDetailAddMaster___);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_49B5A14 )
    {
      sub_1B4CF90(&TerminalPramsManager_TypeInfo, v12);
      byte_49B5A14 = 1;
    }
    v14 = (__int64)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v14 = (__int64)TerminalPramsManager_TypeInfo;
    }
    v16 = *(_DWORD *)(*(_QWORD *)(v14 + 184) + 20LL);
    if ( !byte_49B5A13 )
    {
      sub_1B4CF90(&TerminalPramsManager_TypeInfo, v12);
      v14 = (__int64)TerminalPramsManager_TypeInfo;
      byte_49B5A13 = 1;
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
            (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_QuestPhaseDetailMaster___);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_49B5A14 )
    {
      sub_1B4CF90(&TerminalPramsManager_TypeInfo, v12);
      byte_49B5A14 = 1;
    }
    v14 = (__int64)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v14 = (__int64)TerminalPramsManager_TypeInfo;
    }
    v19 = *(_DWORD *)(*(_QWORD *)(v14 + 184) + 20LL);
    if ( !byte_49B5A13 )
    {
      sub_1B4CF90(&TerminalPramsManager_TypeInfo, v12);
      v14 = (__int64)TerminalPramsManager_TypeInfo;
      byte_49B5A13 = 1;
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
  if ( !byte_49B7BC6 )
  {
    sub_1B4CF90(&TerminalPramsManager_TypeInfo, v12);
    byte_49B7BC6 = 1;
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
  if ( !byte_49B5A14 )
  {
    sub_1B4CF90(&TerminalPramsManager_TypeInfo, v12);
    byte_49B5A14 = 1;
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
                          (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_QuestMaster___)) == 0) )
  {
LABEL_76:
    sub_1B4D1EC(v14, v12);
  }
  v14 = DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)v14,
          &entity,
          v21,
          (const MethodInfo_319D9E8 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
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
  v14 = sub_1B4D038(QuestAfterAction_Command___TypeInfo, (unsigned int)v22 >> 1);
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
    v28 = sub_1B4D1DC(QuestAfterAction_Command_TypeInfo);
    System_Object___ctor((Il2CppObject *)v28, 0LL);
    if ( (unsigned int)(i - 1) >= *((_DWORD *)p_image + 6) )
      goto LABEL_75;
    v14 = System_Int32__Parse((System_String_o *)p_image[i + 3], 0LL);
    if ( !v28 )
      goto LABEL_76;
    *(_DWORD *)(v28 + 16) = v14;
    if ( (unsigned int)i >= *((_DWORD *)p_image + 6) )
LABEL_75:
      sub_1B4D1F4(v14, v12);
    v31 = p_image[i + 4];
    *(_QWORD *)(v28 + 24) = v31;
    sub_1B4CF34((CGThumbnailListItem_o *)(v28 + 24), v31, v29, v30);
    if ( *(_DWORD *)(v28 + 16) == 701
      && System_String__op_Equality(*(System_String_o **)(v28 + 24), (System_String_o *)StringLiteral_1190/*"1"*/, 0LL) )
    {
      break;
    }
    v14 = sub_1B4D0CC(v28, *(_QWORD *)(*(_QWORD *)v23 + 64LL));
    if ( !v14 )
    {
      v34 = sub_1B4D210();
      sub_1B4D0B8(v34, 0LL);
    }
    if ( v25 >= v23[6] )
      goto LABEL_75;
    *(_QWORD *)(v26 + 8 * v25) = v28;
    sub_1B4CF34((CGThumbnailListItem_o *)(v26 + v24), v28, v32, v33);
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
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.commandBuf, 0, v3, v4);
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
  int v109; // w8
  System_Collections_Generic_Dictionary_int__object__o *svtVoices; // x26
  int32_t v111; // w21
  DataMasterBase_TMaster__TEntity__PKType__o *v112; // x28
  __int64 v113; // x27
  int32_t v114; // w2
  const MethodInfo *v115; // x3
  int v116; // w8
  System_String_c *MasterName_k__BackingField; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v118; // x26
  int32_t v119; // w26
  BalanceConfig_c *v120; // x8
  int klass_high; // w27
  unsigned int v122; // w8
  System_Collections_Generic_List_int__o *Item; // x26
  const MethodInfo *v124; // x1
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
  int32_t v137; // w2
  const MethodInfo *v138; // x3
  unsigned int *v139; // x0
  TerminalPramsManager_c *v140; // x0
  TerminalPramsManager_c *v141; // x0
  int32_t BeforeQuestStartWarId_k__BackingField; // w19
  TerminalSceneComponent_c *v143; // x0
  Il2CppObject *v144; // x21
  TerminalPramsManager_c *v145; // x0
  TerminalPramsManager_c *v146; // x0
  Il2CppObject *v147; // x20
  TerminalPramsManager_c *v148; // x0
  BalanceConfig_c *v149; // x8
  int32_t WarId_k__BackingField; // w19
  int32_t v151; // w19
  TerminalPramsManager_c *v152; // x0
  TerminalPramsManager_c *v153; // x0
  TerminalPramsManager_c *v154; // x0
  BalanceConfig_c *v155; // x8
  int32_t v156; // w20
  TerminalPramsManager_c *v157; // x0
  __int64 v158; // x0
  char v159; // [xsp+Ch] [xbp-94h]
  int32_t svtId; // [xsp+1Ch] [xbp-84h] BYREF
  Il2CppObject *v161; // [xsp+20h] [xbp-80h] BYREF
  QuestEntity_o *entity; // [xsp+28h] [xbp-78h] BYREF
  Il2CppObject *v163; // [xsp+30h] [xbp-70h] BYREF
  QuestEntity_o *v164; // [xsp+38h] [xbp-68h] BYREF

  v4 = this;
  if ( (byte_49B7B89 & 1) == 0 )
  {
    sub_1B4CF90(&BalanceConfig_TypeInfo, isBeforeAction);
    sub_1B4CF90(&bool_TypeInfo, v5);
    sub_1B4CF90(&QuestAfterAction_Command___TypeInfo, v6);
    sub_1B4CF90(&QuestAfterAction_Command_TypeInfo, v7);
    sub_1B4CF90(&Method_DataManager_GetMasterData_EventMissionMaster___, v8);
    sub_1B4CF90(&Method_DataManager_GetMasterData_QuestMaster___, v9);
    sub_1B4CF90(&Method_DataManager_GetMasterData_QuestPhaseDetailAddMaster___, v10);
    sub_1B4CF90(&Method_DataManager_GetMasterData_QuestPhaseDetailMaster___, v11);
    sub_1B4CF90(&Method_DataManager_GetMasterData_WarMaster___, v12);
    sub_1B4CF90(&Method_DataManager_GetMaster_BlankEarthSpotMaster___, v13);
    sub_1B4CF90(&Method_DataManager_GetMaster_QuestBehaviorMaster___, v14);
    sub_1B4CF90(&Method_DataManager_GetMaster_QuestMaster___, v15);
    sub_1B4CF90(&Method_DataManager_GetMaster_ShopMaster___, v16);
    sub_1B4CF90(&Method_DataManager_GetMaster_WarMaster___, v17);
    sub_1B4CF90(&Method_DataManager_GetMaster_WarReleaseMaster___, v18);
    sub_1B4CF90(&DataManager_TypeInfo, v19);
    sub_1B4CF90(&Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__, v20);
    sub_1B4CF90(&Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__GetEntity__, v21);
    sub_1B4CF90(&Method_DataMasterBase_BlankEarthSpotMaster__BlankEarthSpotEntity__int__TryGetEntity__, v22);
    sub_1B4CF90(&Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__, v23);
    sub_1B4CF90(&Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__Add__, v24);
    sub_1B4CF90(&Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___get_Item__, v25);
    sub_1B4CF90(&Method_System_Linq_Enumerable_Any_KeyValuePair_int__QuestAfterAction_VoiceInfo____, v26);
    sub_1B4CF90(&Method_System_Linq_Enumerable_Contains_int___, v27);
    sub_1B4CF90(&Method_System_Collections_Generic_List_int__Add__, v28);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v29);
    sub_1B4CF90(&TerminalPramsManager_TypeInfo, v30);
    sub_1B4CF90(&TerminalSceneComponent_TypeInfo, v31);
    sub_1B4CF90(&QuestAfterAction_VoiceInfo_TypeInfo, v32);
    sub_1B4CF90(&StringLiteral_16401/*"afterActionBk"*/, v33);
    this = (QuestAfterAction_o *)sub_1B4CF90(&StringLiteral_816/*","*/, v34);
    byte_49B7B89 = 1;
  }
  v163 = 0LL;
  v164 = 0LL;
  v161 = 0LL;
  entity = 0LL;
  svtId = 0;
  *(_WORD *)&v4->fields.isLoadedVoice = 0;
  *(_QWORD *)&v4->fields.ActionMapTargetType = -1LL;
  if ( isBeforeAction )
  {
    if ( System_Linq_Enumerable__Any_KeyValuePair_int__object__(
           (System_Collections_Generic_IEnumerable_TSource__o *)v4->fields.svtVoices,
           (const MethodInfo_2F0E7B8 *)Method_System_Linq_Enumerable_Any_KeyValuePair_int__QuestAfterAction_VoiceInfo____) )
    {
      QuestAfterAction__releaseVoice(v4, v35);
    }
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_49B5A14 )
    {
      sub_1B4CF90(&TerminalPramsManager_TypeInfo, v35);
      byte_49B5A14 = 1;
    }
    v37 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v37 = TerminalPramsManager_TypeInfo;
    }
    QuestId_k__BackingField = v37->static_fields->_QuestId_k__BackingField;
    if ( !byte_49B5A13 )
    {
      sub_1B4CF90(&TerminalPramsManager_TypeInfo, v35);
      v37 = TerminalPramsManager_TypeInfo;
      byte_49B5A13 = 1;
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
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_49B5933 )
  {
    sub_1B4CF90(&TerminalSceneComponent_TypeInfo, v40);
    byte_49B5933 = 1;
  }
  MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalSceneComponent_TypeInfo;
  }
  klass = MasterData_object[2].fields.list->klass;
  if ( !klass )
    goto LABEL_334;
  if ( !klass->vtable._10_System_Collections_Generic_ICollection_T__get_IsReadOnly.methodPtr )
    goto LABEL_80;
  if ( !LODWORD(MasterData_object[3].monitor) )
    j_il2cpp_runtime_class_init_0(MasterData_object);
  if ( !byte_49B5933 )
  {
    sub_1B4CF90(&TerminalSceneComponent_TypeInfo, v40);
    byte_49B5933 = 1;
  }
  MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalSceneComponent_TypeInfo;
  }
  v44 = MasterData_object[2].fields.list->klass;
  if ( !v44 )
    goto LABEL_334;
  methodPtr = v44->vtable._10_System_Collections_Generic_ICollection_T__get_IsReadOnly.methodPtr;
  if ( !methodPtr )
    goto LABEL_334;
  v46 = *((_DWORD *)methodPtr + 5);
  if ( !byte_49B5933 )
  {
    sub_1B4CF90(&TerminalSceneComponent_TypeInfo, v40);
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalSceneComponent_TypeInfo;
    byte_49B5933 = 1;
  }
  if ( !LODWORD(MasterData_object[3].monitor) )
  {
    j_il2cpp_runtime_class_init_0(MasterData_object);
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalSceneComponent_TypeInfo;
  }
  v47 = MasterData_object[2].fields.list->klass;
  if ( !v47 )
    goto LABEL_334;
  v48 = v47->vtable._10_System_Collections_Generic_ICollection_T__get_IsReadOnly.methodPtr;
  if ( !v48 )
    goto LABEL_334;
  v49 = *((_DWORD *)v48 + 4);
  if ( v49 >= 1 )
  {
    if ( !LODWORD(MasterData_object[3].monitor) )
      j_il2cpp_runtime_class_init_0(MasterData_object);
    if ( !byte_49B5933 )
    {
      sub_1B4CF90(&TerminalSceneComponent_TypeInfo, v40);
      byte_49B5933 = 1;
    }
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalSceneComponent_TypeInfo;
    }
    v50 = MasterData_object[2].fields.list->klass;
    if ( !v50 )
      goto LABEL_334;
    v51 = v50->vtable._10_System_Collections_Generic_ICollection_T__get_IsReadOnly.methodPtr;
    if ( !v51 )
      goto LABEL_334;
    if ( !Instance )
      goto LABEL_334;
    afterActionVals = (System_String_array *)*((_QWORD *)v51 + 4);
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMasterData_object_(
                                                                        (DataManager_o *)Instance,
                                                                        (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_EventMissionMaster___);
    if ( !MasterData_object )
      goto LABEL_334;
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__int___GetEntity(
                                                                        MasterData_object,
                                                                        v49,
                                                                        (const MethodInfo_319D99C *)Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__GetEntity__);
    if ( !MasterData_object )
      goto LABEL_334;
    MasterName_k__BackingField_high = HIDWORD(MasterData_object->fields._MasterName_k__BackingField);
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMasterData_object_(
                                                                        (DataManager_o *)Instance,
                                                                        (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_WarMaster___);
    if ( !MasterData_object )
      goto LABEL_334;
    goto LABEL_67;
  }
  if ( v46 >= 1 )
  {
    if ( !LODWORD(MasterData_object[3].monitor) )
      j_il2cpp_runtime_class_init_0(MasterData_object);
    if ( !byte_49B5933 )
    {
      sub_1B4CF90(&TerminalSceneComponent_TypeInfo, v40);
      byte_49B5933 = 1;
    }
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalSceneComponent_TypeInfo;
    }
    v53 = MasterData_object[2].fields.list->klass;
    if ( !v53 )
      goto LABEL_334;
    v54 = v53->vtable._10_System_Collections_Generic_ICollection_T__get_IsReadOnly.methodPtr;
    if ( !v54 )
      goto LABEL_334;
    afterActionVals = (System_String_array *)*((_QWORD *)v54 + 4);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_ShopMaster___);
    if ( !MasterData_object )
      goto LABEL_334;
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__int___GetEntity(
                                                                        MasterData_object,
                                                                        v46,
                                                                        (const MethodInfo_319D99C *)Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__);
    if ( !MasterData_object )
      goto LABEL_334;
    MasterName_k__BackingField_high = (int32_t)MasterData_object->fields._MasterName_k__BackingField;
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_WarMaster___);
    if ( !MasterData_object )
      goto LABEL_334;
LABEL_67:
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)WarMaster__getByEventId(
                                                                        (WarMaster_o *)MasterData_object,
                                                                        MasterName_k__BackingField_high,
                                                                        0LL);
    if ( !MasterData_object )
      goto LABEL_334;
    MasterKind_k__BackingField = MasterData_object->fields._MasterKind_k__BackingField;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_49B7989 )
    {
      sub_1B4CF90(&TerminalPramsManager_TypeInfo, v40);
      byte_49B7989 = 1;
    }
    v56 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v56 = TerminalPramsManager_TypeInfo;
    }
    v56->static_fields->_WarId_k__BackingField = MasterKind_k__BackingField;
    if ( !byte_49B5933 )
    {
      sub_1B4CF90(&TerminalSceneComponent_TypeInfo, v40);
      byte_49B5933 = 1;
    }
    v57 = TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      v57 = TerminalSceneComponent_TypeInfo;
    }
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)v57->static_fields->mInstance;
    if ( !MasterData_object )
      goto LABEL_334;
    TerminalSceneComponent__CallQuestInformationCloseAtAll((TerminalSceneComponent_o *)MasterData_object, 0, 0LL);
    if ( afterActionVals )
      goto LABEL_232;
  }
LABEL_80:
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_49B7BC3 )
  {
    sub_1B4CF90(&TerminalPramsManager_TypeInfo, v40);
    byte_49B7BC3 = 1;
  }
  v58 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v58 = TerminalPramsManager_TypeInfo;
  }
  if ( !v58->static_fields->_IsPhaseClear_k__BackingField
    && UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_16401/*"afterActionBk"*/, 0LL) )
  {
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)UnityEngine_PlayerPrefs__GetString_68762736(
                                                                        (System_String_o *)StringLiteral_16401/*"afterActionBk"*/,
                                                                        0LL);
    if ( !MasterData_object )
      goto LABEL_334;
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)System_String__Split(
                                                                        (System_String_o *)MasterData_object,
                                                                        0x2Cu,
                                                                        0,
                                                                        0LL);
    if ( !MasterData_object )
      goto LABEL_334;
    v59 = MasterData_object;
    if ( !LODWORD(MasterData_object->fields._MasterName_k__BackingField) )
      goto LABEL_474;
    v60 = System_Int32__Parse(*(System_String_o **)&MasterData_object->fields.revision, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_49B7983 )
    {
      sub_1B4CF90(&TerminalPramsManager_TypeInfo, v40);
      byte_49B7983 = 1;
    }
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
    }
    HIDWORD(MasterData_object[2].fields.list->fields.items) = v60;
    if ( LODWORD(v59->fields._MasterName_k__BackingField) <= 1 )
      goto LABEL_474;
    v61 = System_Int32__Parse((System_String_o *)v59->fields.list, 0LL);
    if ( !byte_49B7987 )
    {
      sub_1B4CF90(&TerminalPramsManager_TypeInfo, v40);
      byte_49B7987 = 1;
    }
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
    }
    LODWORD(MasterData_object[2].fields.list->fields._monitor) = v61;
    if ( LODWORD(v59->fields._MasterName_k__BackingField) <= 2 )
      goto LABEL_474;
    lookup = (System_String_o *)v59->fields._lookup;
    if ( !bool_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(bool_TypeInfo);
    v63 = System_Boolean__Parse(lookup, 0LL);
    if ( !byte_49B7BC4 )
    {
      sub_1B4CF90(&TerminalPramsManager_TypeInfo, v40);
      byte_49B7BC4 = 1;
    }
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
    }
    BYTE5(MasterData_object[2].fields.list[1].fields.CollectionChanged) = v63;
    if ( LODWORD(v59->fields._MasterName_k__BackingField) <= 3 )
      goto LABEL_474;
    v64 = System_Boolean__Parse((System_String_o *)v59->fields.seriazlier, 0LL);
    if ( !byte_49B7BC5 )
    {
      sub_1B4CF90(&TerminalPramsManager_TypeInfo, v40);
      byte_49B7BC5 = 1;
    }
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
    }
    BYTE6(MasterData_object[2].fields.list[1].fields.CollectionChanged) = v64;
    if ( !byte_49B7BC6 )
    {
      sub_1B4CF90(&TerminalPramsManager_TypeInfo, v40);
      MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
      byte_49B7BC6 = 1;
    }
    if ( !LODWORD(MasterData_object[3].monitor) )
    {
      j_il2cpp_runtime_class_init_0(MasterData_object);
      MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
    }
    if ( BYTE5(MasterData_object[2].fields.list[1].fields.CollectionChanged) )
    {
      if ( !Instance )
        goto LABEL_334;
      v65 = DataManager__GetMasterData_object_(
              (DataManager_o *)Instance,
              (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_WarMaster___);
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_49B5A14 )
      {
        sub_1B4CF90(&TerminalPramsManager_TypeInfo, v40);
        byte_49B5A14 = 1;
      }
      MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
      }
      if ( !v65 )
        goto LABEL_334;
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
                (const MethodInfo_2F1C00C *)Method_System_Linq_Enumerable_Contains_int___);
        cctor_finished = TerminalPramsManager_TypeInfo->_2.cctor_finished;
        if ( v70 )
        {
          if ( !cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          if ( !byte_49B7BC7 )
          {
            sub_1B4CF90(&TerminalPramsManager_TypeInfo, v69);
            byte_49B7BC7 = 1;
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
          if ( !byte_49B7BC7 )
          {
            sub_1B4CF90(&TerminalPramsManager_TypeInfo, v69);
            byte_49B7BC7 = 1;
          }
          v73 = TerminalPramsManager_TypeInfo;
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            v73 = TerminalPramsManager_TypeInfo;
          }
          v73->static_fields->_IsWarClear_k__BackingField = 1;
          id = v67->fields.id;
          if ( !byte_49B7989 )
          {
            sub_1B4CF90(&TerminalPramsManager_TypeInfo, v69);
            v73 = TerminalPramsManager_TypeInfo;
            byte_49B7989 = 1;
          }
          if ( !v73->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v73);
            v73 = TerminalPramsManager_TypeInfo;
          }
          v73->static_fields->_WarId_k__BackingField = id;
          v76 = TerminalPramsManager__CheckIsOrdealCallWarClear(v67, 0LL);
          if ( !byte_49B7BC8 )
          {
            sub_1B4CF90(&TerminalPramsManager_TypeInfo, v75);
            byte_49B7BC8 = 1;
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
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_WarReleaseMaster___);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_49B7982 )
  {
    sub_1B4CF90(&TerminalPramsManager_TypeInfo, v40);
    byte_49B7982 = 1;
  }
  MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
  }
  if ( !Master_object )
    goto LABEL_334;
  OpenEntity = WarReleaseMaster__GetOpenEntity(
                 (WarReleaseMaster_o *)Master_object,
                 HIDWORD(MasterData_object[2].fields.list->klass),
                 0LL);
  if ( !byte_49B7BC9 )
  {
    sub_1B4CF90(&TerminalPramsManager_TypeInfo, v40);
    byte_49B7BC9 = 1;
  }
  MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
  }
  v80 = &qword_49B5000;
  if ( HIBYTE(MasterData_object[2].fields.list[1].fields._blockReentrancyCount) )
  {
    if ( !LODWORD(MasterData_object[3].monitor) )
      j_il2cpp_runtime_class_init_0(MasterData_object);
    if ( !byte_49B789B )
    {
      sub_1B4CF90(&TerminalPramsManager_TypeInfo, v40);
      byte_49B789B = 1;
    }
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
    }
    v80 = &qword_49B5000;
    if ( !*((_BYTE *)&MasterData_object[2].fields.list[1].fields._blockReentrancyCount + 4) )
      goto LABEL_231;
  }
  if ( !Instance )
    goto LABEL_334;
  v81 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !*((_BYTE *)v80 + 2580) )
  {
    sub_1B4CF90(&TerminalPramsManager_TypeInfo, v40);
    *((_BYTE *)v80 + 2580) = 1;
  }
  MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
  }
  if ( !v81 )
    goto LABEL_334;
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
    goto LABEL_334;
  if ( QuestEntity__IsOpenByTime(entity, 0, 0LL) )
  {
LABEL_187:
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_49B7BC3 )
    {
      sub_1B4CF90(&TerminalPramsManager_TypeInfo, v83);
      byte_49B7BC3 = 1;
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
              (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_QuestPhaseDetailAddMaster___);
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !*((_BYTE *)v80 + 2580) )
      {
        sub_1B4CF90(&TerminalPramsManager_TypeInfo, v40);
        *((_BYTE *)v80 + 2580) = 1;
      }
      MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
      }
      items_high = HIDWORD(MasterData_object[2].fields.list->fields.items);
      if ( !byte_49B5A13 )
      {
        sub_1B4CF90(&TerminalPramsManager_TypeInfo, v40);
        MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
        byte_49B5A13 = 1;
      }
      if ( !LODWORD(MasterData_object[3].monitor) )
      {
        j_il2cpp_runtime_class_init_0(MasterData_object);
        MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
      }
      if ( !v85 )
        goto LABEL_334;
      afterActionVals = QuestPhaseDetailAddMaster__GetAfterAction(
                          (QuestPhaseDetailAddMaster_o *)v85,
                          items_high,
                          LODWORD(MasterData_object[2].fields.list->fields._monitor) + 1,
                          0LL);
      if ( afterActionVals )
        goto LABEL_232;
      v87 = DataManager__GetMasterData_object_(
              (DataManager_o *)Instance,
              (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_QuestPhaseDetailMaster___);
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !*((_BYTE *)v80 + 2580) )
      {
        sub_1B4CF90(&TerminalPramsManager_TypeInfo, v40);
        *((_BYTE *)v80 + 2580) = 1;
      }
      MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
      }
      v88 = HIDWORD(MasterData_object[2].fields.list->fields.items);
      if ( !byte_49B5A13 )
      {
        sub_1B4CF90(&TerminalPramsManager_TypeInfo, v40);
        MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
        byte_49B5A13 = 1;
      }
      if ( !LODWORD(MasterData_object[3].monitor) )
      {
        j_il2cpp_runtime_class_init_0(MasterData_object);
        MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
      }
      if ( !v87 )
        goto LABEL_334;
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
    if ( !byte_49B7BC6 )
    {
      sub_1B4CF90(&TerminalPramsManager_TypeInfo, v83);
      byte_49B7BC6 = 1;
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
          goto LABEL_334;
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
  v90 = DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_QuestBehaviorMaster___);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_49B5A14 )
  {
    sub_1B4CF90(&TerminalPramsManager_TypeInfo, v40);
    byte_49B5A14 = 1;
  }
  MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
  }
  v91 = HIDWORD(MasterData_object[2].fields.list->fields.items);
  if ( !byte_49B5A13 )
  {
    sub_1B4CF90(&TerminalPramsManager_TypeInfo, v40);
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
    byte_49B5A13 = 1;
  }
  if ( !LODWORD(MasterData_object[3].monitor) )
  {
    j_il2cpp_runtime_class_init_0(MasterData_object);
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
  }
  if ( !v90 )
    goto LABEL_334;
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
    if ( !byte_49B7BCA )
    {
      sub_1B4CF90(&TerminalPramsManager_TypeInfo, v40);
      byte_49B7BCA = 1;
    }
    v140 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v140 = TerminalPramsManager_TypeInfo;
    }
    if ( v140->static_fields->_BeforeQuestStartWarId_k__BackingField >= 1 )
    {
      if ( !v140->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v140);
      if ( !byte_49B5B1A )
      {
        sub_1B4CF90(&TerminalPramsManager_TypeInfo, v40);
        byte_49B5B1A = 1;
      }
      v141 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v141 = TerminalPramsManager_TypeInfo;
      }
      v141->static_fields->_IsAutoResume_k__BackingField = 1;
      if ( !byte_49B7985 )
      {
        sub_1B4CF90(&TerminalPramsManager_TypeInfo, v40);
        v141 = TerminalPramsManager_TypeInfo;
        byte_49B7985 = 1;
      }
      if ( !v141->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v141);
        v141 = TerminalPramsManager_TypeInfo;
      }
      v141->static_fields->_DispState_k__BackingField = 2;
      if ( !byte_49B7BCA )
      {
        sub_1B4CF90(&TerminalPramsManager_TypeInfo, v40);
        v141 = TerminalPramsManager_TypeInfo;
        byte_49B7BCA = 1;
      }
      if ( !v141->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v141);
        v141 = TerminalPramsManager_TypeInfo;
      }
      BeforeQuestStartWarId_k__BackingField = v141->static_fields->_BeforeQuestStartWarId_k__BackingField;
      if ( !byte_49B7989 )
      {
        sub_1B4CF90(&TerminalPramsManager_TypeInfo, v40);
        v141 = TerminalPramsManager_TypeInfo;
        byte_49B7989 = 1;
      }
      if ( !v141->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v141);
        v141 = TerminalPramsManager_TypeInfo;
      }
      v141->static_fields->_WarId_k__BackingField = BeforeQuestStartWarId_k__BackingField;
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      if ( !byte_49B5933 )
      {
        sub_1B4CF90(&TerminalSceneComponent_TypeInfo, v40);
        byte_49B5933 = 1;
      }
      v143 = TerminalSceneComponent_TypeInfo;
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        v143 = TerminalSceneComponent_TypeInfo;
      }
      MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)v143->static_fields->mInstance;
      if ( !MasterData_object )
        goto LABEL_334;
      TerminalSceneComponent__CallQuestInformationCloseAtAll((TerminalSceneComponent_o *)MasterData_object, 0, 0LL);
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      v144 = DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_WarMaster___);
      if ( !byte_49B7982 )
      {
        sub_1B4CF90(&TerminalPramsManager_TypeInfo, v40);
        byte_49B7982 = 1;
      }
      MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
      }
      if ( !v144 )
        goto LABEL_334;
      if ( DataMasterBase_object__object__int___TryGetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)v144,
             &v161,
             HIDWORD(MasterData_object[2].fields.list->klass),
             (const MethodInfo_319D9E8 *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__) )
      {
        MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)v161;
        if ( !v161 )
          goto LABEL_334;
        v4->fields.ActionMapTargetId = WarEntity__GetBaseMap((WarEntity_o *)v161, 0LL);
      }
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_49B7BCB )
      {
        sub_1B4CF90(&TerminalPramsManager_TypeInfo, v40);
        byte_49B7BCB = 1;
      }
      v145 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v145 = TerminalPramsManager_TypeInfo;
      }
      v145->static_fields->_BeforeQuestStartWarId_k__BackingField = 0;
    }
    UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_16401/*"afterActionBk"*/, 0LL);
    return;
  }
  v94 = sub_1B4D038(QuestAfterAction_Command___TypeInfo, (unsigned int)v93 >> 1);
  v4->fields.commandBuf = (struct QuestAfterAction_Command_array *)v94;
  p_commandBuf = (unsigned int **)&v4->fields.commandBuf;
  sub_1B4CF34((CGThumbnailListItem_o *)&v4->fields.commandBuf, v94, v96, v97);
  commandBuf = (int *)v4->fields.commandBuf;
  if ( !commandBuf )
    goto LABEL_334;
  v159 = 0;
  v99 = 0LL;
  v100 = 0;
  while ( (__int64)v99 < commandBuf[6] )
  {
    v101 = sub_1B4D1DC(QuestAfterAction_Command_TypeInfo);
    System_Object___ctor((Il2CppObject *)v101, 0LL);
    if ( v100 >= afterActionVals->max_length )
      goto LABEL_474;
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)System_Int32__Parse(
                                                                        afterActionVals->m_Items[v100],
                                                                        0LL);
    if ( !v101 )
      goto LABEL_334;
    *(_DWORD *)(v101 + 16) = (_DWORD)MasterData_object;
    v104 = (int)v100 | 1LL;
    if ( (unsigned int)v104 >= afterActionVals->max_length )
      goto LABEL_474;
    v105 = afterActionVals->m_Items[v104];
    *(_QWORD *)(v101 + 24) = v105;
    v106 = (System_String_o **)(v101 + 24);
    sub_1B4CF34((CGThumbnailListItem_o *)(v101 + 24), (int32_t)v105, v102, v103);
    if ( !v4->fields.hasFadeCommand )
    {
      v108 = *(_DWORD *)(v101 + 16);
      if ( v108 == 520 || v108 == 405 )
        v4->fields.hasFadeCommand = 1;
    }
    if ( !v100 && !v4->fields.isRequestedStopBgm && *(_DWORD *)(v101 + 16) == 850 )
      v4->fields.isRequestedStopBgm = 1;
    if ( (v4->fields.MapMoveBeforeFocusSpotId & 0x80000000) != 0 && *(_DWORD *)(v101 + 16) == 350 )
    {
      MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)*v106;
      if ( !*v106 )
        goto LABEL_334;
      MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)System_String__Split(
                                                                          (System_String_o *)MasterData_object,
                                                                          0x2Cu,
                                                                          0,
                                                                          0LL);
      if ( !MasterData_object )
        goto LABEL_334;
      if ( SLODWORD(MasterData_object->fields._MasterName_k__BackingField) >= 4 )
      {
        MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)System_Int32__Parse(
                                                                            (System_String_o *)MasterData_object->fields.seriazlier,
                                                                            0LL);
        v4->fields.MapMoveBeforeFocusSpotId = (int)MasterData_object;
      }
    }
    v109 = *(_DWORD *)(v101 + 16);
    if ( v4->fields.IsMoveToEventRewardShop || v109 != 700 )
    {
      if ( v109 == 800 )
      {
        MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)QuestAfterAction_Command__GetAvailableRandomVoice(
                                                                            (QuestAfterAction_Command_o *)v101,
                                                                            &svtId,
                                                                            v107);
        if ( MasterData_object )
        {
          svtVoices = (System_Collections_Generic_Dictionary_int__object__o *)v4->fields.svtVoices;
          v111 = svtId;
          v112 = MasterData_object;
          v113 = sub_1B4D1DC(QuestAfterAction_VoiceInfo_TypeInfo);
          System_Object___ctor((Il2CppObject *)v113, 0LL);
          *(_DWORD *)(v113 + 16) = v111;
          *(_QWORD *)(v113 + 24) = v112;
          sub_1B4CF34((CGThumbnailListItem_o *)(v113 + 24), (int32_t)v112, v114, v115);
          if ( !svtVoices )
            goto LABEL_334;
          System_Collections_Generic_Dictionary_int__object___Add(
            svtVoices,
            v99,
            (Il2CppObject *)v113,
            (const MethodInfo_31F6E80 *)Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__Add__);
          p_commandBuf = (unsigned int **)&v4->fields.commandBuf;
        }
      }
    }
    else
    {
      v4->fields.IsMoveToEventRewardShop = 1;
    }
    v116 = *(_DWORD *)(v101 + 16);
    if ( v116 == 702 )
    {
      MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)*v106;
      if ( !*v106 )
        goto LABEL_334;
      MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)System_String__Split_61145480(
                                                                          (System_String_o *)MasterData_object,
                                                                          (System_String_o *)StringLiteral_816/*","*/,
                                                                          0,
                                                                          0LL);
      if ( !MasterData_object )
        goto LABEL_334;
      MasterName_k__BackingField = (System_String_c *)MasterData_object->fields._MasterName_k__BackingField;
      v118 = MasterData_object;
      if ( MasterName_k__BackingField )
      {
        if ( !(_DWORD)MasterName_k__BackingField )
          goto LABEL_474;
        MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)System_Int32__Parse(
                                                                            *(System_String_o **)&MasterData_object->fields.revision,
                                                                            0LL);
        if ( (int)MasterData_object >= 1 )
        {
          if ( SLODWORD(v118->fields._MasterName_k__BackingField) < 2 )
            v119 = 0;
          else
            v119 = System_Int32__Parse((System_String_o *)v118->fields.list, 0LL);
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          TerminalPramsManager__SetAutoResumeForFolder(v119, 0LL);
          if ( !byte_49B7982 )
          {
            sub_1B4CF90(&TerminalPramsManager_TypeInfo, v40);
            byte_49B7982 = 1;
          }
          MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
          }
          v120 = BalanceConfig_TypeInfo;
          klass_high = HIDWORD(MasterData_object[2].fields.list->klass);
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v120 = BalanceConfig_TypeInfo;
          }
          p_commandBuf = (unsigned int **)&v4->fields.commandBuf;
          if ( klass_high == v120->static_fields->OrdealCallWarId )
          {
            v4->fields.BlankEarthTargetWarId = v119;
            v159 = 1;
          }
        }
      }
      v116 = *(_DWORD *)(v101 + 16);
    }
    if ( v116 <= 205 )
    {
      if ( (unsigned int)(v116 - 100) < 0xF && ((0x7C1Fu >> (v116 - 100)) & 1) != 0 )
      {
        v40 = 0LL;
      }
      else
      {
        if ( (unsigned int)(v116 - 200) > 5 )
          goto LABEL_317;
        v40 = 1LL;
      }
    }
    else if ( v116 <= 550 )
    {
      if ( (unsigned int)(v116 - 400) < 0xD )
      {
        v40 = 2LL;
      }
      else
      {
        if ( v116 != 550 )
          goto LABEL_317;
        v40 = 3LL;
      }
    }
    else
    {
      v122 = v116 - 1000;
      if ( v122 >= 0xD || ((0x1C07u >> v122) & 1) == 0 )
        goto LABEL_317;
      v40 = 4LL;
    }
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)v4->fields.commandTypeIds;
    if ( !MasterData_object )
      goto LABEL_334;
    Item = (System_Collections_Generic_List_int__o *)System_Collections_Generic_Dictionary_Int32Enum__object___get_Item(
                                                       (System_Collections_Generic_Dictionary_TKey__TValue__o *)MasterData_object,
                                                       v40,
                                                       (const MethodInfo_32277C0 *)Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___get_Item__);
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)QuestAfterAction__ExtractCommandTargetId(
                                                                        (QuestAfterAction_Command_o *)v101,
                                                                        v124);
    if ( !Item )
      goto LABEL_334;
    items = Item->fields._items;
    v126 = Method_System_Collections_Generic_List_int__Add__;
    ++Item->fields._version;
    if ( !items )
      goto LABEL_334;
    size = Item->fields._size;
    v40 = (unsigned int)MasterData_object;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_int___AddWithResize(
        Item,
        (int32_t)MasterData_object,
        *(const MethodInfo_35631B8 **)(*(_QWORD *)(v126[4] + 192LL) + 112LL));
    }
    else
    {
      Item->fields._size = size + 1;
      items->m_Items[size + 1] = (int)MasterData_object;
    }
LABEL_317:
    if ( v4->fields.ActionMapTargetId <= 0 )
      QuestAfterAction__SetActionMap(v4, (QuestAfterAction_Command_o *)v101, v107);
    if ( *(_DWORD *)(v101 + 16) == 102 )
    {
      v128 = (QuestAfterAction_o *)System_Int32__Parse(*v106, 0LL);
      MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)QuestAfterAction__GetMapGimmickId(
                                                                          v128,
                                                                          (int32_t)v128,
                                                                          v129);
      if ( !MasterData_object )
        goto LABEL_334;
      v130 = (System_String_c *)MasterData_object->fields._MasterName_k__BackingField;
      v131 = MasterData_object;
      if ( (int)v130 >= 1 )
      {
        v132 = 0LL;
        while ( v132 < (unsigned int)v130 )
        {
          MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)v4->fields.invalidMapGimmickIdList;
          if ( !MasterData_object )
            goto LABEL_334;
          v40 = *((unsigned int *)&v131->fields.revision + v132);
          v133 = *(System_String_Fields *)&MasterData_object->fields._MasterKind_k__BackingField;
          v134 = Method_System_Collections_Generic_List_int__Add__;
          ++HIDWORD(MasterData_object->fields._MasterName_k__BackingField);
          if ( !*(_QWORD *)&v133 )
            goto LABEL_334;
          MasterName_k__BackingField_low = SLODWORD(MasterData_object->fields._MasterName_k__BackingField);
          if ( (unsigned int)MasterName_k__BackingField_low >= *(_DWORD *)(*(_QWORD *)&v133 + 24LL) )
          {
            System_Collections_Generic_List_int___AddWithResize(
              (System_Collections_Generic_List_int__o *)MasterData_object,
              v40,
              *(const MethodInfo_35631B8 **)(*(_QWORD *)(v134[4] + 192LL) + 112LL));
          }
          else
          {
            LODWORD(MasterData_object->fields._MasterName_k__BackingField) = MasterName_k__BackingField_low + 1;
            *(_DWORD *)(*(_QWORD *)&v133 + 4 * MasterName_k__BackingField_low + 32) = v40;
          }
          LODWORD(v130) = v131->fields._MasterName_k__BackingField;
          if ( (__int64)++v132 >= (int)v130 )
            goto LABEL_330;
        }
LABEL_474:
        sub_1B4D1F4(MasterData_object, v40);
      }
    }
LABEL_330:
    v136 = *p_commandBuf;
    if ( !*p_commandBuf )
      goto LABEL_334;
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)sub_1B4D0CC(
                                                                        v101,
                                                                        *(_QWORD *)(*(_QWORD *)v136 + 64LL));
    if ( !MasterData_object )
    {
      v158 = sub_1B4D210();
      sub_1B4D0B8(v158, 0LL);
    }
    if ( v99 >= v136[6] )
      goto LABEL_474;
    v139 = &v136[2 * v99];
    *((_QWORD *)v139 + 4) = v101;
    sub_1B4CF34((CGThumbnailListItem_o *)(v139 + 8), v101, v137, v138);
    commandBuf = (int *)*p_commandBuf;
    v100 += 2;
    ++v99;
    if ( !*p_commandBuf )
      goto LABEL_334;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_49B7BC3 )
  {
    sub_1B4CF90(&TerminalPramsManager_TypeInfo, v40);
    byte_49B7BC3 = 1;
  }
  v146 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v146 = TerminalPramsManager_TypeInfo;
  }
  if ( v146->static_fields->_IsPhaseClear_k__BackingField )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v147 = DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_QuestMaster___);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_49B5A14 )
    {
      sub_1B4CF90(&TerminalPramsManager_TypeInfo, v40);
      byte_49B5A14 = 1;
    }
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
    }
    if ( !v147 )
      goto LABEL_334;
    if ( QuestMaster__TryGetQuestEntity(
           (QuestMaster_o *)v147,
           &v164,
           HIDWORD(MasterData_object[2].fields.list->fields.items),
           0LL) )
    {
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_49B7982 )
      {
        sub_1B4CF90(&TerminalPramsManager_TypeInfo, v40);
        byte_49B7982 = 1;
      }
      v148 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v148 = TerminalPramsManager_TypeInfo;
      }
      v149 = BalanceConfig_TypeInfo;
      WarId_k__BackingField = v148->static_fields->_WarId_k__BackingField;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v149 = BalanceConfig_TypeInfo;
      }
      if ( WarId_k__BackingField == v149->static_fields->OrdealCallWarId )
      {
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_BlankEarthSpotMaster___);
        if ( v164 && MasterData_object )
        {
          MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__int___TryGetEntity(
                                                                              MasterData_object,
                                                                              &v163,
                                                                              v164->fields.spotId,
                                                                              (const MethodInfo_319D9E8 *)Method_DataMasterBase_BlankEarthSpotMaster__BlankEarthSpotEntity__int__TryGetEntity__);
          if ( ((unsigned __int8)MasterData_object & 1) == 0 )
            goto LABEL_424;
          if ( v163 )
          {
            v151 = (int32_t)v163[1].klass;
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            if ( !byte_49B7BCC )
            {
              sub_1B4CF90(&TerminalPramsManager_TypeInfo, v40);
              byte_49B7BCC = 1;
            }
            v152 = TerminalPramsManager_TypeInfo;
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
              v152 = TerminalPramsManager_TypeInfo;
            }
            v152->static_fields->_BlankEarthAfterActionFocusSpotId_k__BackingField = v151;
            goto LABEL_424;
          }
        }
LABEL_334:
        sub_1B4D1EC(MasterData_object, v40);
      }
    }
  }
LABEL_424:
  v153 = TerminalPramsManager_TypeInfo;
  if ( (v159 & 1) == 0 )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_49B5B1A )
    {
      sub_1B4CF90(&TerminalPramsManager_TypeInfo, v40);
      byte_49B5B1A = 1;
    }
    v154 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v154 = TerminalPramsManager_TypeInfo;
    }
    v154->static_fields->_IsAutoResume_k__BackingField = 1;
    if ( !byte_49B7985 )
    {
      sub_1B4CF90(&TerminalPramsManager_TypeInfo, v40);
      v154 = TerminalPramsManager_TypeInfo;
      byte_49B7985 = 1;
    }
    if ( !v154->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v154);
      v154 = TerminalPramsManager_TypeInfo;
    }
    v154->static_fields->_DispState_k__BackingField = 2;
    if ( !byte_49B7982 )
    {
      sub_1B4CF90(&TerminalPramsManager_TypeInfo, v40);
      v154 = TerminalPramsManager_TypeInfo;
      byte_49B7982 = 1;
    }
    if ( !v154->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v154);
      v154 = TerminalPramsManager_TypeInfo;
    }
    v155 = BalanceConfig_TypeInfo;
    v156 = v154->static_fields->_WarId_k__BackingField;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v155 = BalanceConfig_TypeInfo;
    }
    v153 = TerminalPramsManager_TypeInfo;
    if ( v156 == v155->static_fields->OrdealCallWarId )
      goto LABEL_478;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_49B789B )
    {
      sub_1B4CF90(&TerminalPramsManager_TypeInfo, v40);
      byte_49B789B = 1;
    }
    v153 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v153 = TerminalPramsManager_TypeInfo;
    }
    if ( v153->static_fields->_IsOrdealCallWarClear_k__BackingField )
    {
LABEL_478:
      if ( !v153->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v153);
      if ( !byte_49B789C )
      {
        sub_1B4CF90(&TerminalPramsManager_TypeInfo, v40);
        byte_49B789C = 1;
      }
      v153 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v153 = TerminalPramsManager_TypeInfo;
      }
      v153->static_fields->_BlankEarthSpotId_k__BackingField = 0;
      if ( !byte_49B789B )
      {
        sub_1B4CF90(&TerminalPramsManager_TypeInfo, v40);
        v153 = TerminalPramsManager_TypeInfo;
        byte_49B789B = 1;
      }
      if ( !v153->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v153);
        v153 = TerminalPramsManager_TypeInfo;
      }
      if ( !v153->static_fields->_IsOrdealCallWarClear_k__BackingField )
      {
        if ( !v153->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v153);
        if ( !byte_49B7985 )
        {
          sub_1B4CF90(&TerminalPramsManager_TypeInfo, v40);
          byte_49B7985 = 1;
        }
        v153 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v153 = TerminalPramsManager_TypeInfo;
        }
        v153->static_fields->_DispState_k__BackingField = 3;
      }
    }
  }
  if ( !v153->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v153);
  if ( !byte_49B7988 )
  {
    sub_1B4CF90(&TerminalPramsManager_TypeInfo, v40);
    byte_49B7988 = 1;
  }
  v157 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v157 = TerminalPramsManager_TypeInfo;
  }
  v157->static_fields->_SpotId_k__BackingField = -1;
}


void __fastcall QuestAfterAction__DeleteContinueData(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_49B7B87 & 1) == 0 )
  {
    sub_1B4CF90(&StringLiteral_16401/*"afterActionBk"*/, v1);
    byte_49B7B87 = 1;
  }
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_16401/*"afterActionBk"*/, 0LL);
}


int32_t __fastcall QuestAfterAction__ExtractCommandTargetId(
        QuestAfterAction_Command_o *command,
        const MethodInfo *method)
{
  QuestAfterAction_Command_o *v2; // x19
  QuestAfterAction_Command_c *param; // x8

  v2 = command;
  if ( (byte_49B7B8B & 1) == 0 )
  {
    command = (QuestAfterAction_Command_o *)sub_1B4CF90(&StringLiteral_816/*","*/, method);
    byte_49B7B8B = 1;
  }
  if ( !v2 )
    goto LABEL_11;
  command = (QuestAfterAction_Command_o *)v2->fields.param;
  if ( !command )
    goto LABEL_11;
  command = (QuestAfterAction_Command_o *)System_String__Contains(
                                            (System_String_o *)command,
                                            (System_String_o *)StringLiteral_816/*","*/,
                                            0LL);
  param = (QuestAfterAction_Command_c *)v2->fields.param;
  if ( ((unsigned __int8)command & 1) == 0 )
    return System_Int32__Parse((System_String_o *)param, 0LL);
  if ( !param || (command = (QuestAfterAction_Command_o *)System_String__Split(v2->fields.param, 0x2Cu, 0, 0LL)) == 0LL )
LABEL_11:
    sub_1B4D1EC(command, method);
  if ( !LODWORD(command->fields.param) )
    sub_1B4D1F4(command, method);
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
  const MethodInfo *v7; // x3
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_49B7B98 & 1) == 0 )
  {
    sub_1B4CF90(&QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__82_TypeInfo, commandEnumerable);
    byte_49B7B98 = 1;
  }
  v5 = sub_1B4D1DC(QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__82_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_DWORD *)(v5 + 16) = -2;
  *(_DWORD *)(v5 + 32) = System_Environment__get_CurrentManagedThreadId(0LL);
  *(_QWORD *)(v5 + 56) = this;
  sub_1B4CF34((CGThumbnailListItem_o *)(v5 + 56), (int32_t)this, v6, v7);
  *(_QWORD *)(v5 + 48) = commandEnumerable;
  sub_1B4CF34((CGThumbnailListItem_o *)(v5 + 48), (int32_t)commandEnumerable, v8, v9);
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

  if ( (byte_49B7B8C & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Array_Empty_QuestAfterAction_Command___, method);
    sub_1B4CF90(&QuestAfterAction_Command___TypeInfo, v3);
    sub_1B4CF90(&QuestAfterAction_Command_TypeInfo, v4);
    byte_49B7B8C = 1;
  }
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)actionVals, 0LL);
  if ( (IsNullOrEmpty & 1) != 0 )
  {
    v8 = Method_System_Array_Empty_QuestAfterAction_Command___;
    v9 = *((_QWORD *)Method_System_Array_Empty_QuestAfterAction_Command___ + 7);
    if ( !v9 )
    {
      sub_1B9D67C(Method_System_Array_Empty_QuestAfterAction_Command___);
      v9 = v8[7];
    }
    v10 = *(_QWORD *)(v9 + 16);
    if ( (*(_BYTE *)(v10 + 309) & 1) == 0 )
      v10 = sub_1B9D620(inited);
    if ( !*(_DWORD *)(v10 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v10);
    v11 = *(_QWORD *)(v8[7] + 16LL);
    if ( (*(_BYTE *)(v11 + 309) & 1) == 0 )
      v11 = sub_1B9D620(inited);
    return **(QuestAfterAction_Command_array ***)(v11 + 184);
  }
  else
  {
    if ( !actionVals
      || (IsNullOrEmpty = sub_1B4D038(
                            QuestAfterAction_Command___TypeInfo,
                            (unsigned int)((signed int)actionVals->max_length / 2))) == 0 )
    {
LABEL_25:
      sub_1B4D1EC(IsNullOrEmpty, v6);
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
        v17 = sub_1B4D1DC(QuestAfterAction_Command_TypeInfo);
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
        sub_1B4CF34((CGThumbnailListItem_o *)(v17 + 24), (int32_t)v20, v18, v19);
        IsNullOrEmpty = sub_1B4D0CC(v17, v12->obj.klass->_1.element_class);
        if ( !IsNullOrEmpty )
        {
          v24 = sub_1B4D210();
          sub_1B4D0B8(v24, 0LL);
        }
        if ( v14 >= v12->max_length )
LABEL_24:
          sub_1B4D1F4(IsNullOrEmpty, v6);
        *(_QWORD *)(v15 + 8 * v14) = v17;
        sub_1B4CF34((CGThumbnailListItem_o *)(v15 + v13), v17, v21, v22);
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

  if ( (byte_49B7BA3 & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataManager_GetMasterData_QuestMaster___, *(_QWORD *)&phase);
    sub_1B4CF90(&Method_DataManager_GetMasterData_QuestPhaseDetailAddMaster___, v5);
    sub_1B4CF90(&Method_DataManager_GetMasterData_QuestPhaseDetailMaster___, v6);
    sub_1B4CF90(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v7);
    sub_1B4CF90(&Method_System_Linq_Enumerable_Any_string___, v8);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    sub_1B4CF90(&TerminalPramsManager_TypeInfo, v10);
    byte_49B7BA3 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_33;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_QuestPhaseDetailAddMaster___);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_49B5A14 )
  {
    sub_1B4CF90(&TerminalPramsManager_TypeInfo, v12);
    byte_49B5A14 = 1;
  }
  Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  }
  v14 = *(_DWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 20LL);
  if ( !byte_49B5A13 )
  {
    sub_1B4CF90(&TerminalPramsManager_TypeInfo, v12);
    Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
    byte_49B5A13 = 1;
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
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_33;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_QuestPhaseDetailMaster___);
  if ( !Instance )
    goto LABEL_33;
  result = QuestPhaseDetailMaster__GetAfterAction((QuestPhaseDetailMaster_o *)Instance, questId, phase, 0LL);
  if ( result )
    return result;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_33;
  v19 = DataManager__GetMasterData_object_(
          Instance,
          (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_49B5A14 )
  {
    sub_1B4CF90(&TerminalPramsManager_TypeInfo, v12);
    byte_49B5A14 = 1;
  }
  Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  }
  if ( !v19 )
LABEL_33:
    sub_1B4D1EC(Instance, v12);
  result = (System_String_array *)DataMasterBase_object__object__int___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)v19,
                                    *(_DWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 20LL),
                                    (const MethodInfo_319D99C *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
  if ( result )
  {
    v20 = result;
    if ( System_Linq_Enumerable__Any_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)result->m_Items[8],
           (const MethodInfo_2F0F4B0 *)Method_System_Linq_Enumerable_Any_string___) )
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

  if ( (byte_49B7BA2 & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataManager_GetMasterData_QuestMaster___, *(_QWORD *)&phase);
    sub_1B4CF90(&Method_DataManager_GetMasterData_QuestPhaseDetailAddMaster___, v5);
    sub_1B4CF90(&Method_DataManager_GetMasterData_QuestPhaseDetailMaster___, v6);
    sub_1B4CF90(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v7);
    sub_1B4CF90(&Method_System_Linq_Enumerable_Any_string___, v8);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    sub_1B4CF90(&TerminalPramsManager_TypeInfo, v10);
    byte_49B7BA2 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_33;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_QuestPhaseDetailAddMaster___);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_49B5A14 )
  {
    sub_1B4CF90(&TerminalPramsManager_TypeInfo, v12);
    byte_49B5A14 = 1;
  }
  Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  }
  v14 = *(_DWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 20LL);
  if ( !byte_49B5A13 )
  {
    sub_1B4CF90(&TerminalPramsManager_TypeInfo, v12);
    Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
    byte_49B5A13 = 1;
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
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_33;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_QuestPhaseDetailMaster___);
  if ( !Instance )
    goto LABEL_33;
  result = QuestPhaseDetailMaster__GetBeforeAction((QuestPhaseDetailMaster_o *)Instance, questId, phase, 0LL);
  if ( result )
    return result;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_33;
  v19 = DataManager__GetMasterData_object_(
          Instance,
          (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_49B5A14 )
  {
    sub_1B4CF90(&TerminalPramsManager_TypeInfo, v12);
    byte_49B5A14 = 1;
  }
  Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  }
  if ( !v19 )
LABEL_33:
    sub_1B4D1EC(Instance, v12);
  result = (System_String_array *)DataMasterBase_object__object__int___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)v19,
                                    *(_DWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 20LL),
                                    (const MethodInfo_319D99C *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
  if ( result )
  {
    v20 = result;
    if ( System_Linq_Enumerable__Any_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)result->m_Items[7],
           (const MethodInfo_2F0F4B0 *)Method_System_Linq_Enumerable_Any_string___) )
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
        return dword_BE29E0[commandId - 1000];
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
        const MethodInfo_2F948BC *method)
{
  UnityEngine_Object_o *MapGameObject; // x20
  _BOOL8 v11; // x0
  __int64 v12; // x1

  if ( !method->rgctx_data )
  {
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, *(_QWORD *)&comType);
    if ( !method->rgctx_data )
      sub_1B9D67C();
  }
  MapGameObject = (UnityEngine_Object_o *)QuestAfterAction__GetMapGameObject(this, comType, id, state, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v11 = UnityEngine_Object__op_Equality(MapGameObject, 0LL, 0LL);
  if ( v11 )
    return 0LL;
  if ( !MapGameObject )
    sub_1B4D1EC(v11, v12);
  return UnityEngine_GameObject__GetComponent_object_(
           (UnityEngine_GameObject_o *)MapGameObject,
           (const MethodInfo_2F53444 *)method->rgctx_data->_0_UnityEngine_GameObject_GetComponent_T_);
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
  if ( (byte_49B7B9E & 1) == 0 )
  {
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, *(_QWORD *)&comType);
    this = (QuestAfterAction_o *)sub_1B4CF90(&SrcSpotBasePrefab_TypeInfo, v9);
    byte_49B7B9E = 1;
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
        sub_1B4D1EC(this, *(_QWORD *)&comType);
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
  Il2CppObject *Instance; // x0
  __int64 name_low; // x1
  Il2CppObject *v13; // x21
  __int64 v14; // x0
  int monitor; // w8
  Il2CppObject *v16; // x21
  unsigned int v17; // w23
  Il2CppClass **v18; // x8
  Il2CppClass *v19; // x22
  struct System_Int32_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10

  if ( (byte_49B7B8D & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataManager_GetMasterData_MapGimmickMaster___, *(_QWORD *)&spotId);
    sub_1B4CF90(&Method_DataMasterBase_MapGimmickMaster__MapGimmickEntity__int__getEntitys_MapGimmickEntity___, v4);
    sub_1B4CF90(&Method_System_Collections_Generic_List_int__Add__, v5);
    sub_1B4CF90(&Method_System_Collections_Generic_List_int__ToArray__, v6);
    sub_1B4CF90(&Method_System_Collections_Generic_List_int___ctor__, v7);
    sub_1B4CF90(&System_Collections_Generic_List_int__TypeInfo, v8);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_49B7B8D = 1;
  }
  v10 = (System_Collections_Generic_List_int__o *)sub_1B4D1DC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v10,
    (const MethodInfo_3562964 *)Method_System_Collections_Generic_List_int___ctor__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_MapGimmickMaster___);
  if ( !Instance )
    goto LABEL_19;
  v13 = Instance;
  v14 = sub_1B4D0C4(Instance->klass->vtable[*((unsigned __int16 *)Method_DataMasterBase_MapGimmickMaster__MapGimmickEntity__int__getEntitys_MapGimmickEntity___
                                            + 40)
                                          + 1].methodPtr);
  Instance = (Il2CppObject *)(*(__int64 (__fastcall **)(Il2CppObject *, __int64))(v14 + 8))(v13, v14);
  if ( !Instance )
    goto LABEL_19;
  monitor = (int)Instance[1].monitor;
  v16 = Instance;
  if ( monitor >= 1 )
  {
    v17 = 0;
    while ( 1 )
    {
      if ( v17 >= monitor )
        sub_1B4D1F4(Instance, name_low);
      v18 = &v16->klass + (int)v17;
      v19 = v18[4];
      if ( !v19 )
        break;
      Instance = (Il2CppObject *)MapGimmickEntity__GetRaidDispSpotIdFromScript((MapGimmickEntity_o *)v18[4], 0LL);
      if ( (_DWORD)Instance == spotId )
      {
        if ( !v10 )
          break;
        name_low = LODWORD(v19->_1.name);
        items = v10->fields._items;
        v21 = Method_System_Collections_Generic_List_int__Add__;
        ++v10->fields._version;
        if ( !items )
          break;
        size = v10->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v10,
            name_low,
            *(const MethodInfo_35631B8 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
        }
        else
        {
          v10->fields._size = size + 1;
          items->m_Items[size + 1] = name_low;
        }
      }
      monitor = (int)v16[1].monitor;
      if ( (int)++v17 >= monitor )
        goto LABEL_17;
    }
LABEL_19:
    sub_1B4D1EC(Instance, name_low);
  }
LABEL_17:
  if ( !v10 )
    goto LABEL_19;
  return System_Collections_Generic_List_int___ToArray(
           v10,
           (const MethodInfo_3564C70 *)Method_System_Collections_Generic_List_int__ToArray__);
}


int32_t __fastcall QuestAfterAction__GetState(QuestAfterAction_o *this, const MethodInfo *method)
{
  struct CStateManager_QuestAfterAction__o *fsm; // x8

  if ( (byte_49B7B9C & 1) == 0 )
  {
    sub_1B4CF90(&Method_CStateManager_QuestAfterAction__getState__, method);
    byte_49B7B9C = 1;
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
  Il2CppObject *v28; // x22
  CStateManager_T__o *v29; // x20
  Il2CppObject *v30; // x21
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

  if ( (byte_49B7B88 & 1) == 0 )
  {
    sub_1B4CF90(&Method_CStateManager_QuestAfterAction___ctor__, method);
    sub_1B4CF90(&Method_CStateManager_QuestAfterAction__add__, v4);
    sub_1B4CF90(&CStateManager_QuestAfterAction__TypeInfo, v5);
    sub_1B4CF90(
      &Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___ContainsKey__,
      v6);
    sub_1B4CF90(&Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___get_Item__, v7);
    sub_1B4CF90(&Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___set_Item__, v8);
    sub_1B4CF90(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___, v9);
    sub_1B4CF90(&Method_System_Collections_Generic_List_int__Clear__, v10);
    sub_1B4CF90(&Method_System_Collections_Generic_List_int___ctor__, v11);
    sub_1B4CF90(&System_Collections_Generic_List_int__TypeInfo, v12);
    sub_1B4CF90(&QuestAfterAction_StateAdditional_TypeInfo, v13);
    sub_1B4CF90(&QuestAfterAction_StateInstant_TypeInfo, v14);
    sub_1B4CF90(&QuestAfterAction_StateMain_TypeInfo, v15);
    sub_1B4CF90(&QuestAfterAction_StateNone_TypeInfo, v16);
    byte_49B7B88 = 1;
  }
  p_fsm = &this->fields.fsm;
  if ( !this->fields.fsm )
  {
    v18 = (CStateManager_T__o *)sub_1B4D1DC(CStateManager_QuestAfterAction__TypeInfo);
    CStateManager_object____ctor(
      v18,
      (Il2CppObject *)this,
      4,
      (const MethodInfo_312D7A4 *)Method_CStateManager_QuestAfterAction___ctor__);
    this->fields.fsm = (struct CStateManager_QuestAfterAction__o *)v18;
    sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.fsm, (int32_t)v18, v19, v20);
    fsm = (CStateManager_T__o *)this->fields.fsm;
    v22 = (Il2CppObject *)sub_1B4D1DC(QuestAfterAction_StateNone_TypeInfo);
    System_Object___ctor(v22, 0LL);
    if ( !fsm )
      goto LABEL_21;
    CStateManager_object___add(
      fsm,
      0,
      (IState_T__o *)v22,
      (const MethodInfo_312D84C *)Method_CStateManager_QuestAfterAction__add__);
    v25 = (CStateManager_T__o *)*p_fsm;
    v26 = (Il2CppObject *)sub_1B4D1DC(QuestAfterAction_StateMain_TypeInfo);
    System_Object___ctor(v26, 0LL);
    if ( !v25 )
      goto LABEL_21;
    CStateManager_object___add(
      v25,
      1,
      (IState_T__o *)v26,
      (const MethodInfo_312D84C *)Method_CStateManager_QuestAfterAction__add__);
    v27 = (CStateManager_T__o *)*p_fsm;
    v28 = (Il2CppObject *)sub_1B4D1DC(QuestAfterAction_StateAdditional_TypeInfo);
    System_Object___ctor(v28, 0LL);
    if ( !v27 )
      goto LABEL_21;
    CStateManager_object___add(
      v27,
      2,
      (IState_T__o *)v28,
      (const MethodInfo_312D84C *)Method_CStateManager_QuestAfterAction__add__);
    v29 = (CStateManager_T__o *)*p_fsm;
    v30 = (Il2CppObject *)sub_1B4D1DC(QuestAfterAction_StateInstant_TypeInfo);
    System_Object___ctor(v30, 0LL);
    if ( !v29 )
      goto LABEL_21;
    CStateManager_object___add(
      v29,
      3,
      (IState_T__o *)v30,
      (const MethodInfo_312D84C *)Method_CStateManager_QuestAfterAction__add__);
  }
  QuestAfterAction__SetState(this, 0, v2);
  this->fields.commandBuf = 0LL;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.commandBuf, 0, v31, v32);
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
                                                                                (const MethodInfo_3227A54 *)Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___ContainsKey__);
    v34 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.commandTypeIds;
    if ( ((unsigned __int8)commandTypeIds & 1) != 0 )
    {
      if ( !v34 )
        goto LABEL_21;
      commandTypeIds = (System_Collections_Generic_Dictionary_TKey__TValue__o *)System_Collections_Generic_Dictionary_Int32Enum__object___get_Item(
                                                                                  (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.commandTypeIds,
                                                                                  v33,
                                                                                  (const MethodInfo_32277C0 *)Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___get_Item__);
      if ( !commandTypeIds )
        goto LABEL_21;
      v35 = HIDWORD(commandTypeIds->fields._entries) + 1;
      LODWORD(commandTypeIds->fields._entries) = 0;
      HIDWORD(commandTypeIds->fields._entries) = v35;
    }
    else
    {
      v36 = (System_Collections_Generic_List_int__o *)sub_1B4D1DC(System_Collections_Generic_List_int__TypeInfo);
      System_Collections_Generic_List_int____ctor(
        v36,
        (const MethodInfo_3562964 *)Method_System_Collections_Generic_List_int___ctor__);
      if ( !v34 )
        goto LABEL_21;
      System_Collections_Generic_Dictionary_Int32Enum__object___set_Item(
        v34,
        v33,
        (Il2CppObject *)v36,
        (const MethodInfo_322784C *)Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___set_Item__);
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
                             (const MethodInfo_2F53444 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___),
        this->fields.screenCollider = (struct UnityEngine_BoxCollider_o *)Component_object,
        sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.screenCollider, (int32_t)Component_object, v38, v39),
        (commandTypeIds = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.screenCollider) == 0LL) )
  {
LABEL_21:
    sub_1B4D1EC(commandTypeIds, v24);
  }
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)commandTypeIds, 0, 0LL);
  this->fields.lastDispSpot = 0LL;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.lastDispSpot, 0, v40, v41);
  v42 = (System_Collections_Generic_List_int__o *)sub_1B4D1DC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v42,
    (const MethodInfo_3562964 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.invalidMapGimmickIdList = v42;
  p_invalidMapGimmickIdList = &this->fields.invalidMapGimmickIdList;
  sub_1B4CF34((CGThumbnailListItem_o *)p_invalidMapGimmickIdList, (int32_t)v42, v44, v45);
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

  if ( (byte_49B7B90 & 1) == 0 )
  {
    sub_1B4CF90(
      &Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___ContainsKey__,
      *(_QWORD *)&commandType);
    sub_1B4CF90(&Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___get_Item__, v7);
    sub_1B4CF90(&Method_System_Collections_Generic_List_int__Contains__, v8);
    byte_49B7B90 = 1;
  }
  commandTypeIds = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.commandTypeIds;
  if ( !commandTypeIds )
    goto LABEL_9;
  if ( System_Collections_Generic_Dictionary_Int32Enum__object___ContainsKey(
         commandTypeIds,
         commandType,
         (const MethodInfo_3227A54 *)Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___ContainsKey__) )
  {
    commandTypeIds = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.commandTypeIds;
    if ( commandTypeIds )
    {
      commandTypeIds = (System_Collections_Generic_Dictionary_TKey__TValue__o *)System_Collections_Generic_Dictionary_Int32Enum__object___get_Item(
                                                                                  commandTypeIds,
                                                                                  commandType,
                                                                                  (const MethodInfo_32277C0 *)Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___get_Item__);
      if ( commandTypeIds )
        return System_Collections_Generic_List_int___Contains(
                 (System_Collections_Generic_List_int__o *)commandTypeIds,
                 commandTypeId,
                 (const MethodInfo_3563530 *)Method_System_Collections_Generic_List_int__Contains__);
    }
LABEL_9:
    sub_1B4D1EC(commandTypeIds, *(_QWORD *)&commandType);
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
      sub_1B4D1F4(this, *(_QWORD *)&spotId);
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
    sub_1B4D1EC(this, *(_QWORD *)&spotId);
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
        sub_1B4D1F4(this, method);
      v6 = m_Items[v4];
      if ( !v6 )
        sub_1B4D1EC(this, method);
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

  if ( (byte_49B7BA1 & 1) == 0 )
  {
    sub_1B4CF90(&TerminalSceneComponent_TypeInfo, method);
    byte_49B7BA1 = 1;
  }
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_49B5933 )
  {
    sub_1B4CF90(&TerminalSceneComponent_TypeInfo, method);
    byte_49B5933 = 1;
  }
  v2 = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v2 = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
  }
  klass = v2->fields.subRootGimmickP->klass;
  if ( !klass || (v2 = *(ScrTerminalMap_o **)&klass->_2.thread_static_fields_offset) == 0LL )
    sub_1B4D1EC(v2, method);
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
        sub_1B4D1F4(actionCommand, method);
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

  if ( (byte_49B7B9C & 1) == 0 )
  {
    sub_1B4CF90(&Method_CStateManager_QuestAfterAction__getState__, method);
    byte_49B7B9C = 1;
  }
  fsm = this->fields.fsm;
  return fsm && fsm->fields.m_state == 1;
}


bool __fastcall QuestAfterAction__IsPlayingAction(QuestAfterAction_o *this, const MethodInfo *method)
{
  struct CStateManager_QuestAfterAction__o *fsm; // x8

  if ( (byte_49B7B9C & 1) == 0 )
  {
    sub_1B4CF90(&Method_CStateManager_QuestAfterAction__getState__, method);
    byte_49B7B9C = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    return 0;
  if ( fsm->fields.m_state == 1 )
    return 1;
  return fsm->fields.m_state == 2;
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

  if ( (byte_49B7B94 & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataManager_GetMasterData_EventMaster___, method);
    sub_1B4CF90(&Method_DataManager_GetMasterData_EventMissionActionAddMaster___, v2);
    sub_1B4CF90(&Method_DataManager_GetMasterData_EventMissionActionMaster___, v3);
    sub_1B4CF90(&Method_DataManager_GetMasterData_EventMissionMaster___, v4);
    sub_1B4CF90(&Method_DataManager_GetMaster_EventMaster___, v5);
    sub_1B4CF90(&Method_DataManager_GetMaster_ShopActionMaster___, v6);
    sub_1B4CF90(&Method_DataManager_GetMaster_ShopMaster___, v7);
    sub_1B4CF90(&DataManager_TypeInfo, v8);
    sub_1B4CF90(&Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__, v9);
    sub_1B4CF90(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v10);
    sub_1B4CF90(&Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__GetEntity__, v11);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_ShopActionEntity__Dispose__, v12);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_ShopActionEntity__MoveNext__, v13);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_ShopActionEntity__get_Current__, v14);
    sub_1B4CF90(&EventMissionActionInfo_TypeInfo, v15);
    sub_1B4CF90(&Method_System_Collections_Generic_List_ShopActionEntity__GetEnumerator__, v16);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    sub_1B4CF90(&TerminalPramsManager_TypeInfo, v18);
    sub_1B4CF90(&TerminalSceneComponent_TypeInfo, v19);
    byte_49B7B94 = 1;
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
  if ( !byte_49B5933 )
  {
    sub_1B4CF90(&TerminalSceneComponent_TypeInfo, v21);
    byte_49B5933 = 1;
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
      Master_object = (char *)DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_ShopMaster___);
      if ( !Master_object )
        goto LABEL_67;
      Entity = DataMasterBase_object__object__int___GetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                 v22->fields.shopId,
                 (const MethodInfo_319D99C *)Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__);
      if ( Entity )
      {
        v30 = Entity;
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Master_object = (char *)DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_EventMaster___);
        if ( !Master_object )
          goto LABEL_67;
        v31 = DataMasterBase_object__object__int___GetEntity(
                (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                (int32_t)v30[1].monitor,
                (const MethodInfo_319D99C *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
        if ( !v31 || !EventEntity__IsEventPeriod((EventEntity_o *)v31, 0LL, 0LL) )
          goto LABEL_66;
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Master_object = (char *)DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_ShopActionMaster___);
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
          (const MethodInfo_3580CD4 *)Method_System_Collections_Generic_List_ShopActionEntity__GetEnumerator__);
        v55 = v54;
        while ( 1 )
        {
          v32 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v55,
                  (const MethodInfo_3308B3C *)Method_System_Collections_Generic_List_Enumerator_ShopActionEntity__MoveNext__);
          if ( !v32 )
            break;
          current = v55.fields._current;
          if ( !v55.fields._current )
            sub_1B4D1EC(v32, v33);
          if ( LODWORD(v55.fields._current[1].monitor) == 4 )
          {
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            if ( !byte_49B7BCD )
            {
              sub_1B4CF90(&TerminalPramsManager_TypeInfo, v33);
              byte_49B7BCD = 1;
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
              sub_1B4D1EC(0LL, v36);
            klass = current[2].klass;
            TransitionInfo_k__BackingField->fields.afterActionVals = (struct System_String_array *)klass;
            sub_1B4CF34(
              (CGThumbnailListItem_o *)&TransitionInfo_k__BackingField->fields.afterActionVals,
              (int32_t)klass,
              v37,
              v38);
            v43 = v24->fields._TransitionInfo_k__BackingField;
            if ( !v43 )
              sub_1B4D1EC(v41, v42);
            v43->fields.optionId = (int32_t)current[2].monitor;
            break;
          }
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v55,
          (const MethodInfo_3308B38 *)Method_System_Collections_Generic_List_Enumerator_ShopActionEntity__Dispose__);
      }
    }
  }
  else
  {
    Master_object = (char *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Master_object )
      goto LABEL_67;
    v25 = (DataManager_o *)Master_object;
    Master_object = (char *)DataManager__GetMasterData_object_(
                              (DataManager_o *)Master_object,
                              (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_EventMissionActionAddMaster___);
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
      v28 = (EventMissionActionInfo_o *)sub_1B4D1DC(EventMissionActionInfo_TypeInfo);
      EventMissionActionInfo___ctor_42731632(v28, v27, 0LL);
    }
    else
    {
      Master_object = (char *)DataManager__GetMasterData_object_(
                                v25,
                                (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_EventMissionActionMaster___);
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
      v28 = (EventMissionActionInfo_o *)sub_1B4D1DC(EventMissionActionInfo_TypeInfo);
      EventMissionActionInfo___ctor(v28, v45, 0LL);
    }
    Master_object = (char *)DataManager__GetMasterData_object_(
                              v25,
                              (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_EventMissionMaster___);
    if ( !Master_object )
      goto LABEL_67;
    v46 = DataMasterBase_object__object__int___GetEntity(
            (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
            v22->fields.missionId,
            (const MethodInfo_319D99C *)Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__GetEntity__);
    if ( v46 )
    {
      v47 = v46;
      Master_object = (char *)DataManager__GetMasterData_object_(
                                v25,
                                (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_EventMaster___);
      if ( !Master_object )
        goto LABEL_67;
      Master_object = (char *)DataMasterBase_object__object__int___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                HIDWORD(v47[1].monitor),
                                (const MethodInfo_319D99C *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
      if ( !Master_object )
        goto LABEL_67;
      if ( EventEntity__IsEventPeriod((EventEntity_o *)Master_object, 0LL, 0LL) )
      {
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_49B7BCD )
        {
          sub_1B4CF90(&TerminalPramsManager_TypeInfo, v48);
          byte_49B7BCD = 1;
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
            sub_1B4CF34((CGThumbnailListItem_o *)(Master_object + 32), (int32_t)vals, v50, v51);
            v53 = v24->fields._TransitionInfo_k__BackingField;
            if ( v53 )
            {
              v53->fields.optionId = v28->fields.optionId;
              return;
            }
          }
        }
LABEL_67:
        sub_1B4D1EC(Master_object, v21);
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

  if ( (byte_49B7B91 & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__get_Values__, endAct);
    sub_1B4CF90(&Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo___ctor__, v5);
    sub_1B4CF90(&System_Collections_Generic_List_QuestAfterAction_VoiceInfo__TypeInfo, v6);
    byte_49B7B91 = 1;
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
      sub_1B4D1EC(0LL, endAct);
    Values = System_Collections_Generic_Dictionary_int__object___get_Values(
               (System_Collections_Generic_Dictionary_int__object__o *)svtVoices,
               (const MethodInfo_31F6C90 *)Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__get_Values__);
    v9 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_QuestAfterAction_VoiceInfo__TypeInfo);
    System_Collections_Generic_List_object____ctor_56097488(
      v9,
      (System_Collections_Generic_IEnumerable_T__o *)Values,
      (const MethodInfo_357FAD0 *)Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo___ctor__);
    QuestAfterAction__LoadVoice_34179848(
      this,
      (System_Collections_Generic_List_QuestAfterAction_VoiceInfo__o *)v9,
      endAct,
      v10);
  }
}


void __fastcall QuestAfterAction__LoadVoice_34179848(
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
  System_String_o *VoiceAssetName_40440052; // x19
  Il2CppObject *v26; // x20
  System_Action_o *v27; // x22

  v5 = svtVInfos;
  while ( 1 )
  {
    if ( (byte_49B7B92 & 1) == 0 )
    {
      sub_1B4CF90(&System_Action_TypeInfo, svtVInfos);
      sub_1B4CF90(&Method_System_Linq_Enumerable_Any_QuestAfterAction_VoiceInfo___, v7);
      sub_1B4CF90(&Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo__RemoveAt__, v8);
      sub_1B4CF90(&Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo__get_Item__, v9);
      sub_1B4CF90(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v10);
      sub_1B4CF90(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__, v11);
      sub_1B4CF90(&Method_QuestAfterAction___c__DisplayClass75_0__LoadVoice_b__0__, v12);
      sub_1B4CF90(&QuestAfterAction___c__DisplayClass75_0_TypeInfo, v13);
      byte_49B7B92 = 1;
    }
    v14 = sub_1B4D1DC(QuestAfterAction___c__DisplayClass75_0_TypeInfo);
    System_Object___ctor((Il2CppObject *)v14, 0LL);
    if ( !v14 )
      goto LABEL_18;
    *(_QWORD *)(v14 + 16) = v5;
    v19 = (CommonUI_o **)(v14 + 16);
    sub_1B4CF34((CGThumbnailListItem_o *)(v14 + 16), (int32_t)v5, v17, v18);
    *(_QWORD *)(v14 + 24) = this;
    sub_1B4CF34((CGThumbnailListItem_o *)(v14 + 24), (int32_t)this, v20, v21);
    *(_QWORD *)(v14 + 32) = endAct;
    v22 = (System_Action_o **)(v14 + 32);
    sub_1B4CF34((CGThumbnailListItem_o *)(v14 + 32), (int32_t)endAct, v23, v24);
    if ( !System_Linq_Enumerable__Any_object_(
            *(System_Collections_Generic_IEnumerable_TSource__o **)(v14 + 16),
            (const MethodInfo_2F0F4B0 *)Method_System_Linq_Enumerable_Any_QuestAfterAction_VoiceInfo___) )
    {
      Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( Instance )
      {
        CommonUI__SetLoadMode(Instance, 0, 0LL);
        ActionExtensions__Call(*v22, 0LL);
        return;
      }
LABEL_18:
      sub_1B4D1EC(Instance, v16);
    }
    Instance = *v19;
    if ( !*v19 )
      goto LABEL_18;
    Instance = (CommonUI_o *)System_Collections_Generic_List_object___get_Item(
                               (System_Collections_Generic_List_object__o *)Instance,
                               0,
                               (const MethodInfo_357FF0C *)Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo__get_Item__);
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
      (const MethodInfo_35819B0 *)Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo__RemoveAt__);
    v5 = (System_Collections_Generic_List_QuestAfterAction_VoiceInfo__o *)*v19;
    endAct = *v22;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  CommonUI__SetLoadMode(Instance, 1, 0LL);
  Instance = *v19;
  if ( !*v19 )
    goto LABEL_18;
  Instance = (CommonUI_o *)System_Collections_Generic_List_object___get_Item(
                             (System_Collections_Generic_List_object__o *)Instance,
                             0,
                             (const MethodInfo_357FF0C *)Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo__get_Item__);
  if ( !Instance )
    goto LABEL_18;
  VoiceAssetName_40440052 = ServantVoiceEntity__getVoiceAssetName_40440052(Instance->fields.m_CachedPtr, 0LL);
  v26 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
  v27 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
  System_Action___ctor(v27, (Il2CppObject *)v14, Method_QuestAfterAction___c__DisplayClass75_0__LoadVoice_b__0__, 0LL);
  if ( !v26 )
    goto LABEL_18;
  SoundManager__LoadAudioAssetStorage((SoundManager_o *)v26, VoiceAssetName_40440052, v27, 1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall QuestAfterAction__MapObjName(
        QuestAfterAction_o *this,
        int32_t comType,
        int32_t id,
        const MethodInfo *method)
{
  __int64 v6; // x1

  if ( (byte_49B7BA0 & 1) == 0 )
  {
    sub_1B4CF90(&SrcSpotBasePrefab_TypeInfo, *(_QWORD *)&comType);
    sub_1B4CF90(&StringLiteral_1/*""*/, v6);
    byte_49B7BA0 = 1;
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

  if ( (byte_49B7B9A & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_Generic_List_int__Clear__, method);
    byte_49B7B9A = 1;
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
    sub_1B4D1EC(screenCollider, v4);
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

  if ( (byte_49B7B96 & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_TypeInfo, endAct);
    sub_1B4CF90(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v5);
    sub_1B4CF90(&Method_QuestAfterAction___c__DisplayClass79_0__Play_b__0__, v6);
    sub_1B4CF90(&QuestAfterAction___c__DisplayClass79_0_TypeInfo, v7);
    byte_49B7B96 = 1;
  }
  v8 = sub_1B4D1DC(QuestAfterAction___c__DisplayClass79_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8
    || (*(_QWORD *)(v8 + 16) = endAct,
        sub_1B4CF34((CGThumbnailListItem_o *)(v8 + 16), (int32_t)endAct, v11, v12),
        (Instance = SingletonTemplate_object___get_Instance((const MethodInfo_37B4830 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__)) == 0LL) )
  {
    sub_1B4D1EC(Instance, v10);
  }
  MissionNotifyManager__StartPause((MissionNotifyManager_o *)Instance, 0LL);
  v13 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
  System_Action___ctor(v13, (Il2CppObject *)v8, Method_QuestAfterAction___c__DisplayClass79_0__Play_b__0__, 0LL);
  this->fields.endAct = v13;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.endAct, (int32_t)v13, v14, v15);
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

  if ( (byte_49B7B97 & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_TypeInfo, actionVals);
    sub_1B4CF90(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v7);
    sub_1B4CF90(&Method_QuestAfterAction___c__DisplayClass80_0__PlaySpecifiedAction_b__0__, v8);
    sub_1B4CF90(&Method_QuestAfterAction___c__DisplayClass80_0__PlaySpecifiedAction_b__1__, v9);
    sub_1B4CF90(&QuestAfterAction___c__DisplayClass80_0_TypeInfo, v10);
    byte_49B7B97 = 1;
  }
  v11 = sub_1B4D1DC(QuestAfterAction___c__DisplayClass80_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0LL);
  if ( !v11 )
    goto LABEL_8;
  *(_QWORD *)(v11 + 16) = this;
  sub_1B4CF34((CGThumbnailListItem_o *)(v11 + 16), (int32_t)this, v14, v15);
  *(_QWORD *)(v11 + 24) = finishCallback;
  sub_1B4CF34((CGThumbnailListItem_o *)(v11 + 24), (int32_t)finishCallback, v16, v17);
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)actionVals, 0LL) )
  {
    ActionExtensions__Call(*(System_Action_o **)(v11 + 24), 0LL);
    return;
  }
  CommandBuf = QuestAfterAction__GenerateCommandBuf(actionVals, v18);
  this->fields.temporaryCommandBuf = CommandBuf;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.temporaryCommandBuf, (int32_t)CommandBuf, v20, v21);
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_37B4830 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
LABEL_8:
    sub_1B4D1EC(Instance, v13);
  MissionNotifyManager__StartPause((MissionNotifyManager_o *)Instance, 0LL);
  v22 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
  System_Action___ctor(
    v22,
    (Il2CppObject *)v11,
    Method_QuestAfterAction___c__DisplayClass80_0__PlaySpecifiedAction_b__0__,
    0LL);
  this->fields.endAct = v22;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.endAct, (int32_t)v22, v23, v24);
  v25 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
  System_Action___ctor(
    v25,
    (Il2CppObject *)v11,
    Method_QuestAfterAction___c__DisplayClass80_0__PlaySpecifiedAction_b__1__,
    0LL);
  v27 = QuestAfterAction__WaitWhileMainStateFinished(this, v25, v26);
  UnityEngine_MonoBehaviour__StartCoroutine_68789728((UnityEngine_MonoBehaviour_o *)this, v27, 0LL);
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

  if ( (byte_49B7B99 & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_TypeInfo, commandArray);
    sub_1B4CF90(&Method_QuestAfterAction__PlaySpecifiedActionInstantly_b__83_0__, v5);
    byte_49B7B99 = 1;
  }
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)commandArray, 0LL) )
  {
    this->fields.temporaryCommandBuf = commandArray;
    sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.temporaryCommandBuf, (int32_t)commandArray, v6, v7);
    v8 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
    System_Action___ctor(v8, (Il2CppObject *)this, Method_QuestAfterAction__PlaySpecifiedActionInstantly_b__83_0__, 0LL);
    this->fields.endAct = v8;
    sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.endAct, (int32_t)v8, v9, v10);
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

  if ( (byte_49B7B9F & 1) == 0 )
  {
    sub_1B4CF90(&TerminalPramsManager_TypeInfo, *(_QWORD *)&cType);
    sub_1B4CF90(&TerminalSceneComponent_TypeInfo, v7);
    byte_49B7B9F = 1;
  }
  this->fields.ActionMapTargetType = cType;
  this->fields.ActionMapTargetId = cTarget;
  QuestAfterAction__SetState(this, 0, *(const MethodInfo **)&cTarget);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_49B5B1A )
  {
    sub_1B4CF90(&TerminalPramsManager_TypeInfo, v8);
    byte_49B5B1A = 1;
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
  if ( !byte_49B5933 )
  {
    sub_1B4CF90(&TerminalSceneComponent_TypeInfo, v8);
    byte_49B5933 = 1;
  }
  v10 = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v10 = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
  }
  klass = v10->fields.subRootGimmickP->klass;
  if ( !klass || (v10 = *(ScrTerminalMap_o **)&klass->_2.thread_static_fields_offset) == 0LL )
    sub_1B4D1EC(v10, v8);
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
  if ( (byte_49B7B8F & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataManager_GetMasterData_QuestMaster___, com);
    sub_1B4CF90(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v5);
    this = (QuestAfterAction_o *)sub_1B4CF90(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_49B7B8F = 1;
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
                sub_1B4D1F4(this, com);
              TitleInfoCtrlCallback_k__BackingField = (System_String_o *)this->fields.invalidMapGimmickIdList;
              goto LABEL_29;
            }
          }
LABEL_42:
          sub_1B4D1EC(this, com);
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
          this = (QuestAfterAction_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( this )
          {
            MasterData_object = DataManager__GetMasterData_object_(
                                  (DataManager_o *)this,
                                  (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_QuestMaster___);
            param = com->fields.param;
            v16 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
            this = (QuestAfterAction_o *)System_Int32__Parse(param, 0LL);
            if ( v16 )
            {
              this = (QuestAfterAction_o *)DataMasterBase_object__object__int___GetEntity(
                                             v16,
                                             (int32_t)this,
                                             (const MethodInfo_319D99C *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
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

  if ( (byte_49B7B9D & 1) == 0 )
  {
    sub_1B4CF90(&Method_CStateManager_QuestAfterAction__setState__, *(_QWORD *)&state);
    byte_49B7B9D = 1;
  }
  fsm = (CStateManager_T__o *)this->fields.fsm;
  if ( !fsm )
    sub_1B4D1EC(0LL, *(_QWORD *)&state);
  CStateManager_object___setState(
    fsm,
    state,
    (const MethodInfo_312D8D8 *)Method_CStateManager_QuestAfterAction__setState__);
}


void __fastcall QuestAfterAction__SkipToNextAction(QuestAfterAction_o *this, const MethodInfo *method)
{
  this->fields.isSkippedNext = 1;
}


void __fastcall QuestAfterAction__Update(QuestAfterAction_o *this, const MethodInfo *method)
{
  CStateManager_T__o *fsm; // x0

  if ( (byte_49B7B95 & 1) == 0 )
  {
    sub_1B4CF90(&Method_CStateManager_QuestAfterAction__update__, method);
    byte_49B7B95 = 1;
  }
  fsm = (CStateManager_T__o *)this->fields.fsm;
  if ( fsm )
    CStateManager_object___update(fsm, (const MethodInfo_312D8B4 *)Method_CStateManager_QuestAfterAction__update__);
}


System_Collections_IEnumerator_o *__fastcall QuestAfterAction__WaitWhileMainStateFinished(
        QuestAfterAction_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  __int64 v5; // x21
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_49B7B9B & 1) == 0 )
  {
    sub_1B4CF90(&QuestAfterAction__WaitWhileMainStateFinished_d__86_TypeInfo, action);
    byte_49B7B9B = 1;
  }
  v5 = sub_1B4D1DC(QuestAfterAction__WaitWhileMainStateFinished_d__86_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1B4CF34((CGThumbnailListItem_o *)(v5 + 32), (int32_t)this, v6, v7);
  *(_QWORD *)(v5 + 40) = action;
  sub_1B4CF34((CGThumbnailListItem_o *)(v5 + 40), (int32_t)action, v8, v9);
  return (System_Collections_IEnumerator_o *)v5;
}


void __fastcall QuestAfterAction___PlaySpecifiedActionInstantly_b__83_0(
        QuestAfterAction_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  const MethodInfo *v7; // x2

  this->fields.endAct = 0LL;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.endAct, 0, v2, v3);
  this->fields.temporaryCommandBuf = 0LL;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.temporaryCommandBuf, 0, v5, v6);
  QuestAfterAction__SetState(this, 0, v7);
}


System_Int32_array *__fastcall QuestAfterAction__getMapGmkOffIdList(QuestAfterAction_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *invalidMapGimmickIdList; // x0

  if ( (byte_49B7B8E & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_Generic_List_int__ToArray__, method);
    byte_49B7B8E = 1;
  }
  invalidMapGimmickIdList = this->fields.invalidMapGimmickIdList;
  if ( !invalidMapGimmickIdList )
    sub_1B4D1EC(0LL, method);
  return System_Collections_Generic_List_int___ToArray(
           invalidMapGimmickIdList,
           (const MethodInfo_3564C70 *)Method_System_Collections_Generic_List_int__ToArray__);
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
  System_String_o *VoiceAssetName_40440052; // x20
  System_Collections_Generic_List_Enumerator_object__o v17; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_49B7B93 & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__Clear__, method);
    sub_1B4CF90(&Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__get_Values__, v3);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_QuestAfterAction_VoiceInfo__Dispose__, v4);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_QuestAfterAction_VoiceInfo__MoveNext__, v5);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_QuestAfterAction_VoiceInfo__get_Current__, v6);
    sub_1B4CF90(&Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo__GetEnumerator__, v7);
    sub_1B4CF90(&Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo___ctor__, v8);
    sub_1B4CF90(&System_Collections_Generic_List_QuestAfterAction_VoiceInfo__TypeInfo, v9);
    sub_1B4CF90(&SoundManager_TypeInfo, v10);
    byte_49B7B93 = 1;
  }
  memset(&v17, 0, sizeof(v17));
  svtVoices = this->fields.svtVoices;
  if ( !svtVoices )
    goto LABEL_14;
  Values = System_Collections_Generic_Dictionary_int__object___get_Values(
             (System_Collections_Generic_Dictionary_int__object__o *)svtVoices,
             (const MethodInfo_31F6C90 *)Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__get_Values__);
  v13 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_QuestAfterAction_VoiceInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor_56097488(
    v13,
    (System_Collections_Generic_IEnumerable_T__o *)Values,
    (const MethodInfo_357FAD0 *)Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo___ctor__);
  if ( !v13 )
    goto LABEL_14;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v17,
    v13,
    (const MethodInfo_3580CD4 *)Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo__GetEnumerator__);
  while ( 1 )
  {
    v14 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v17,
            (const MethodInfo_3308B3C *)Method_System_Collections_Generic_List_Enumerator_QuestAfterAction_VoiceInfo__MoveNext__);
    if ( !v14 )
      break;
    if ( !v17.fields._current )
      sub_1B4D1EC(v14, v15);
    VoiceAssetName_40440052 = ServantVoiceEntity__getVoiceAssetName_40440052((int32_t)v17.fields._current[1].klass, 0LL);
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    SoundManager__releaseAudioAssetStorage(VoiceAssetName_40440052, 0LL);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v17,
    (const MethodInfo_3308B38 *)Method_System_Collections_Generic_List_Enumerator_QuestAfterAction_VoiceInfo__Dispose__);
  svtVoices = this->fields.svtVoices;
  if ( !svtVoices )
LABEL_14:
    sub_1B4D1EC(svtVoices, method);
  System_Collections_Generic_Dictionary_int__object___Clear(
    (System_Collections_Generic_Dictionary_int__object__o *)svtVoices,
    (const MethodInfo_31F7008 *)Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__Clear__);
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

  if ( (byte_49B7BA5 & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataManager_GetMasterData_VoicePlayCondMaster___, svtId);
    sub_1B4CF90(&Method_System_Collections_Generic_List_string__RemoveAt__, v5);
    sub_1B4CF90(&Method_System_Collections_Generic_List_string___ctor___75455016, v6);
    sub_1B4CF90(&Method_System_Collections_Generic_List_string__get_Count__, v7);
    sub_1B4CF90(&Method_System_Collections_Generic_List_string__get_Item__, v8);
    sub_1B4CF90(&System_Collections_Generic_List_string__TypeInfo, v9);
    sub_1B4CF90(&System_Random_TypeInfo, v10);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_1B4CF90(&TerminalSceneComponent_TypeInfo, v12);
    sub_1B4CF90(&StringLiteral_15813/*"_"*/, v13);
    byte_49B7BA5 = 1;
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
    param = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( param )
    {
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)param,
                            (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_VoicePlayCondMaster___);
      v17 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_string__TypeInfo);
      System_Collections_Generic_List_object____ctor_56097488(
        v17,
        v15,
        (const MethodInfo_357FAD0 *)Method_System_Collections_Generic_List_string___ctor___75455016);
      result = 0;
      v18 = (System_Random_o *)sub_1B4D1DC(System_Random_TypeInfo);
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
                      (const MethodInfo_357FF0C *)Method_System_Collections_Generic_List_string__get_Item__);
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
              param = System_String__Concat_61131716(
                        *((System_String_o **)v22 + 5),
                        (System_String_o *)StringLiteral_15813/*"_"*/,
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
                       (const MethodInfo_357FF0C *)Method_System_Collections_Generic_List_string__get_Item__);
              if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
              if ( !byte_49B5933 )
              {
                sub_1B4CF90(&TerminalSceneComponent_TypeInfo, svtId);
                byte_49B5933 = 1;
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
              (const MethodInfo_35819B0 *)Method_System_Collections_Generic_List_string__RemoveAt__);
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
    sub_1B4D1EC(param, svtId);
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
    sub_1B4D1F4(v27, v28);
  return System_String__Concat_61131716(
           *((System_String_o **)v30 + 5),
           (System_String_o *)StringLiteral_15813/*"_"*/,
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

  if ( (byte_49B7BA7 & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataManager_GetMasterData_BgmMaster___, method);
    sub_1B4CF90(&Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__, v3);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_49B7BA7 = 1;
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
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_12;
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_BgmMaster___);
      if ( !Instance )
        goto LABEL_12;
      Instance = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                   (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                   &entity,
                                   result,
                                   (const MethodInfo_319D9E8 *)Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( entity )
          return (System_String_o *)entity[1].monitor;
LABEL_12:
        sub_1B4D1EC(Instance, v8);
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
    sub_1B4D1EC(v3, str);
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
  if ( (byte_49B7BA6 & 1) == 0 )
  {
    this = (QuestAfterAction_Command_o *)sub_1B4CF90(&StringLiteral_15813/*"_"*/, str);
    byte_49B7BA6 = 1;
  }
  if ( v4->fields.id == 800 )
  {
    if ( !v3 || (this = (QuestAfterAction_Command_o *)System_String__Split(v3, 0x5Fu, 0, 0LL)) == 0LL )
      sub_1B4D1EC(this, str);
    param = (int)this->fields.param;
    if ( param == 2 )
      return v3;
    if ( param == 3 )
      return System_String__Concat_61131716(
               (System_String_o *)this[1].monitor,
               (System_String_o *)StringLiteral_15813/*"_"*/,
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
    sub_1B4D1EC(this, method);
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
  const MethodInfo *v8; // x3
  CGThumbnailListItem_o *p_monitor; // x0
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
    sub_1B4D1EC(screenCollider, v5);
  }
  monitor = (System_Action_o *)screenCollider[7].monitor;
  p_monitor = (CGThumbnailListItem_o *)&screenCollider[7].monitor;
  p_monitor->klass = 0LL;
  sub_1B4CF34(p_monitor, 0, v7, v8);
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
    sub_1B4D1EC(this, 0LL);
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
    sub_1B4D1EC(0LL, v7);
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
    sub_1B4D1EC(0LL, v7);
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
  if ( (byte_49B7BAC & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_Generic_List_int__Remove__, method);
    sub_1B4CF90(&Method_System_Collections_Generic_List_int__ToArray__, v3);
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, v4);
    sub_1B4CF90(&Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___, v5);
    this = (QuestAfterAction_StateMain_o *)sub_1B4CF90(&Method_SingletonTemplate_QuestTree__get_Instance__, v6);
    byte_49B7BAC = 1;
  }
  that = v2->fields.that;
  if ( !that )
    goto LABEL_22;
  this = (QuestAfterAction_StateMain_o *)that->fields.invalidMapGimmickIdList;
  if ( !this )
    goto LABEL_22;
  this = (QuestAfterAction_StateMain_o *)System_Collections_Generic_List_int___ToArray(
                                           (System_Collections_Generic_List_int__o *)this,
                                           (const MethodInfo_3564C70 *)Method_System_Collections_Generic_List_int__ToArray__);
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
        sub_1B4D1F4(this, method);
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
        (const MethodInfo_35646B4 *)Method_System_Collections_Generic_List_int__Remove__);
      this = (QuestAfterAction_StateMain_o *)v2->fields.that;
      if ( !this )
        break;
      MapComponent_object = QuestAfterAction__GetMapComponent_object_(
                              (QuestAfterAction_o *)this,
                              2,
                              v12,
                              v2,
                              (const MethodInfo_2F948BC *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (QuestAfterAction_StateMain_o *)UnityEngine_Object__op_Inequality(
                                               (UnityEngine_Object_o *)MapComponent_object,
                                               0LL,
                                               0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        this = (QuestAfterAction_StateMain_o *)SingletonTemplate_object___get_Instance((const MethodInfo_37B4830 *)Method_SingletonTemplate_QuestTree__get_Instance__);
        if ( !MapComponent_object || !this )
          break;
        this = (QuestAfterAction_StateMain_o *)QuestTree__CheckMapGimmickCond_34548816(
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
    sub_1B4D1EC(this, method);
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
  __int64 v94; // x22
  __int64 updated; // x0
  QuestAfterAction_o *v96; // x1
  int32_t v97; // w2
  const MethodInfo *v98; // x3
  __int64 *v99; // x20
  int32_t v100; // w2
  const MethodInfo *v101; // x3
  QuestAfterAction_StateMain_c *klass; // x8
  __int64 v103; // x21
  QuestAfterAction_Command_o *v104; // x21
  BlankEarthQuestAfterAction_o *v105; // x23
  System_Action_o *v106; // x24
  const MethodInfo *v107; // x5
  int id; // w8
  float v109; // s0
  __int64 v110; // x1
  float DEFAULT_FADE_TIME; // s8
  AvalonSceneManager_c *v112; // x0
  TerminalSceneComponent_c *v113; // x0
  TerminalSceneComponent_o *mInstance; // x19
  System_Action_o *v115; // x20
  TerminalSceneComponent_o *v116; // x0
  float v117; // s0
  System_Action_o *v118; // x1
  System_String_o *v119; // x19
  System_String_o *v120; // x20
  System_String_o *v121; // x20
  Il2CppObject *Instance; // x21
  System_Action_o *v123; // x23
  __int64 v124; // x8
  __int64 v125; // x23
  float v126; // s0
  System_String_o *param; // x21
  _QWORD *v128; // x0
  System_Reflection_MethodBase_o *v129; // x0
  __int64 v130; // x20
  int32_t v131; // w2
  const MethodInfo *v132; // x3
  __int64 v133; // x23
  __int64 v134; // x8
  __int64 v135; // x22
  int32_t v136; // w21
  bool v137; // w24
  bool v138; // w26
  __int64 v139; // x23
  int32_t v140; // w21
  int32_t v141; // w22
  int32_t v142; // w23
  __int64 v143; // x20
  int32_t v144; // w2
  const MethodInfo *v145; // x3
  __int64 v146; // x8
  QuestAfterAction_o *v147; // x22
  Il2CppObject *v148; // x0
  int32_t v149; // w2
  const MethodInfo *v150; // x3
  UnityEngine_Object_o *v151; // x19
  SrcSpotBasePrefab_o *v152; // x19
  System_Action_o *v153; // x21
  int32_t v154; // w1
  __int64 v155; // x23
  float v156; // s0
  float v157; // s9
  float v158; // s0
  float v159; // s10
  float v160; // s0
  float v161; // s11
  float v162; // s0
  float v163; // s8
  int32_t v164; // w19
  __int64 v165; // x8
  float v166; // s8
  const MethodInfo_369DEB4 *v167; // x2
  float v168; // s0
  float v169; // s1
  float v170; // s2
  float v171; // s10
  float v172; // s9
  float v173; // s11
  MapCamera_o *v174; // x20
  System_Action_o *v175; // x21
  MapCamera_o *v176; // x0
  float v177; // s0
  float v178; // s1
  float v179; // s2
  float v180; // s3
  int32_t v181; // w1
  __int64 v182; // x20
  int32_t v183; // w2
  const MethodInfo *v184; // x3
  __int64 v185; // x8
  QuestAfterAction_o *v186; // x22
  Il2CppObject *v187; // x0
  int32_t v188; // w2
  const MethodInfo *v189; // x3
  UnityEngine_Object_o *v190; // x19
  ModelLineComponent_o *v191; // x19
  System_Action_o *v192; // x21
  const MethodInfo *v193; // x3
  int32_t v194; // w1
  __int64 v195; // x1
  TerminalPramsManager_c *v196; // x0
  __int64 v197; // x8
  const MethodInfo *v198; // x2
  __int64 v199; // x8
  QuestAfterAction_TitleInfoControlCallback_o *v200; // x21
  __int64 v201; // x20
  int32_t v202; // w2
  const MethodInfo *v203; // x3
  __int64 v204; // x23
  int32_t v205; // w21
  Il2CppObject *v206; // x0
  __int64 *v207; // x24
  int32_t v208; // w2
  const MethodInfo *v209; // x3
  const MethodInfo *v210; // x2
  __int64 v211; // x22
  int v212; // w21
  __int64 v213; // x8
  NetworkManager_ResultCallbackFunc_o *v214; // x21
  Il2CppObject *Request_object; // x20
  int32_t v216; // w21
  TerminalSceneComponent_c *v217; // x0
  TerminalSceneComponent_o *v218; // x22
  __int64 v219; // x8
  PlayMakerFSM_o *v220; // x20
  System_String_o *ActiveStateName; // x0
  __int64 v222; // x8
  __int64 v223; // x8
  QuestBoardListViewManager_o *v224; // x21
  System_Action_o *v225; // x22
  __int64 v226; // x22
  int v227; // w23
  float v228; // s8
  int32_t v229; // w21
  __int64 v230; // x8
  __int64 v231; // x21
  int32_t v232; // w20
  __int64 v233; // x8
  __int64 v234; // x8
  __int64 v235; // x8
  __int64 v236; // x8
  System_String_o *v237; // x20
  System_String_o *v238; // x21
  SeManager_c *v239; // x0
  float DEFAULT_VOLUME; // s8
  __int64 v241; // x21
  int32_t v242; // w20
  int32_t v243; // w22
  TerminalPramsManager_c *v244; // x0
  __int64 v245; // x8
  __int64 v246; // x1
  const MethodInfo *v247; // x2
  TerminalPramsManager_c *v248; // x0
  System_String_o *v249; // x23
  int32_t v250; // w2
  const MethodInfo *v251; // x3
  System_String_array *v252; // x20
  int32_t v253; // w1
  int v254; // w8
  System_String_o *v255; // x19
  System_String_o *v256; // x20
  System_String_o *v257; // x19
  System_String_o *v258; // x20
  System_String_o *v259; // x20
  Il2CppObject *v260; // x21
  System_Action_o *v261; // x23
  char *v262; // x10
  System_String_o *v263; // x23
  int32_t v264; // w2
  const MethodInfo *v265; // x3
  System_String_array *v266; // x20
  int32_t v267; // w1
  int v268; // w8
  System_String_o *v269; // x19
  System_String_o *v270; // x20
  System_String_o *v271; // x20
  Il2CppObject *v272; // x21
  System_Action_o *v273; // x23
  Il2CppObject *MapComponent_object; // x22
  Il2CppObject *v275; // x20
  __int64 v276; // x8
  ScrTerminalMap_o *v277; // x23
  __int64 v278; // x8
  ScrTerminalMap_o *v279; // x20
  UnityEngine_GameObject_o *gameObject; // x22
  System_Action_o *v281; // x23
  __int64 v282; // x8
  float v283; // s0
  __int64 v284; // x8
  float v285; // s0
  __int64 v286; // x23
  float v287; // s0
  float v288; // s8
  int32_t v289; // w22
  __int64 v290; // x8
  ScrTerminalMap_o *v291; // x24
  float v292; // s0
  float v293; // s9
  float v294; // s0
  const MethodInfo_369DEB4 *v295; // x2
  int v296; // w8
  float v297; // s10
  float v298; // s9
  float v299; // s11
  MapCamera_o *v300; // x20
  __int64 v301; // x21
  int32_t v302; // w0
  int32_t v303; // w20
  float v304; // s8
  int32_t v305; // w19
  __int64 v306; // x20
  int32_t v307; // w2
  const MethodInfo *v308; // x3
  __int64 v309; // x8
  QuestAfterAction_o *v310; // x22
  Il2CppObject *v311; // x0
  int32_t v312; // w2
  const MethodInfo *v313; // x3
  UnityEngine_Object_o *v314; // x19
  __int64 v315; // x23
  int32_t v316; // w2
  const MethodInfo *v317; // x3
  __int64 v318; // x20
  QuestAfterAction_o *v319; // x22
  Il2CppObject *v320; // x0
  __int64 *v321; // x19
  int32_t v322; // w2
  const MethodInfo *v323; // x3
  UnityEngine_Object_o *v324; // x21
  SrcSpotBasePrefab_o *v325; // x21
  System_Action_o *v326; // x22
  int32_t v327; // w2
  const MethodInfo *v328; // x3
  __int64 v329; // x1
  CGThumbnailListItem_o *v330; // x0
  __int64 v331; // x22
  QuestAfterAction_o *v332; // x21
  Il2CppObject *v333; // x21
  System_Action_o *v334; // x22
  QuestAfterAction_o *v335; // x22
  Il2CppObject *v336; // x21
  _DWORD *monitor; // x8
  SrcSpotBasePrefab_o *v338; // x0
  int32_t v339; // w1
  QuestAfterAction_o *v340; // x22
  Il2CppObject *v341; // x21
  _DWORD *v342; // x8
  QuestAfterAction_o *v343; // x22
  _DWORD *v344; // x8
  __int64 v345; // x21
  QuestAfterAction_o *v346; // x22
  Il2CppObject *v347; // x22
  SceneJumpInfo_o *v348; // x21
  __int64 v349; // x1
  TerminalPramsManager_c *v350; // x0
  TerminalPramsManager_c *v351; // x0
  __int64 v352; // x1
  int32_t v353; // w21
  TerminalPramsManager_c *v354; // x0
  QuestAfterAction_o *v355; // x20
  Il2CppObject *v356; // x20
  __int64 v357; // x1
  TerminalPramsManager_c *v358; // x0
  MapCamera_o *v359; // x20
  float v360; // s0
  System_Action_o *v361; // x21
  MapCamera_o *v362; // x0
  float v363; // s0
  int32_t v364; // w4
  int v365; // w23
  __int64 v366; // x21
  float v367; // s0
  float v368; // s8
  float v369; // s0
  MapCamera_o *v370; // x19
  float v371; // s0
  float v372; // s9
  int32_t v373; // w20
  __int64 v374; // x20
  int32_t v375; // w2
  const MethodInfo *v376; // x3
  __int64 v377; // x8
  QuestAfterAction_o *v378; // x22
  Il2CppObject *v379; // x0
  int32_t v380; // w2
  const MethodInfo *v381; // x3
  UnityEngine_Object_o *v382; // x19
  __int64 v383; // x20
  int32_t v384; // w2
  const MethodInfo *v385; // x3
  __int64 v386; // x8
  QuestAfterAction_o *v387; // x22
  Il2CppObject *v388; // x0
  int32_t v389; // w2
  const MethodInfo *v390; // x3
  UnityEngine_Object_o *v391; // x19
  _BOOL4 IsMapModel; // w23
  QuestAfterAction_o *v393; // x22
  UnityEngine_Object_o *v394; // x21
  const MethodInfo *v395; // x2
  _DWORD *v396; // x8
  _BOOL4 v397; // w23
  QuestAfterAction_o *v398; // x22
  UnityEngine_Object_o *v399; // x21
  const MethodInfo *v400; // x2
  const MethodInfo *v401; // x2
  _DWORD *v402; // x8
  _BOOL4 v403; // w23
  QuestAfterAction_o *v404; // x22
  UnityEngine_Object_o *v405; // x21
  const MethodInfo *v406; // x2
  const MethodInfo *v407; // x2
  System_Action_o *v408; // x20
  const MethodInfo *v409; // x2
  Il2CppObject *v410; // x21
  System_Action_o *v411; // x23
  float v412; // s0
  float v413; // s0
  float v414; // s0
  QuestAfterAction_o *v415; // x24
  const MethodInfo *v416; // x4
  UnityEngine_Object_o *v417; // x24
  float v418; // s10
  float v419; // s8
  float v420; // s9
  __int64 v421; // x8
  const MethodInfo_369DEB4 *v422; // x2
  System_String_o *v423; // x24
  QuestAfterAction_o *v424; // x24
  const MethodInfo *v425; // x4
  UnityEngine_Object_o *v426; // x24
  float v427; // s8
  float v428; // s9
  float v429; // s10
  __int64 v430; // x8
  float v431; // s0
  float v432; // s1
  float v433; // s2
  QuestAfterAction_o *v434; // x24
  const MethodInfo *v435; // x4
  UnityEngine_Object_o *v436; // x24
  __int64 v437; // x8
  int v438; // w8
  __int64 v439; // x8
  MapCamera_o *v440; // x20
  MapCamera_o *v441; // x0
  float v442; // s0
  float v443; // s1
  float v444; // s2
  __int64 v445; // x23
  int32_t v446; // w2
  const MethodInfo *v447; // x3
  __int64 v448; // x20
  __int64 v449; // x8
  __int64 v450; // x21
  int32_t v451; // w22
  bool v452; // w26
  bool v453; // w27
  __int64 v454; // x8
  __int64 v455; // x22
  int32_t v456; // w21
  bool v457; // w22
  __int64 v458; // x8
  __int64 v459; // x22
  int32_t v460; // w21
  bool v461; // w22
  __int64 v462; // x21
  float v463; // s0
  QuestAfterAction_o *v464; // x20
  float v465; // s8
  Il2CppObject *v466; // x20
  _BOOL4 v467; // w23
  __int64 v468; // x20
  int32_t v469; // w2
  const MethodInfo *v470; // x3
  __int64 v471; // x8
  QuestAfterAction_o *v472; // x22
  Il2CppObject *v473; // x0
  int32_t v474; // w2
  const MethodInfo *v475; // x3
  UnityEngine_Object_o *v476; // x19
  MapGimmickComponent_o *v477; // x19
  System_Action_o *v478; // x21
  TerminalSceneComponent_o *v479; // x19
  __int64 v480; // x20
  int32_t v481; // w2
  const MethodInfo *v482; // x3
  System_String_array *v483; // x0
  __int64 *v484; // x21
  int32_t v485; // w2
  const MethodInfo *v486; // x3
  __int64 v487; // x8
  __int64 v488; // x9
  QuestAfterAction_o *v489; // x21
  Il2CppObject *v490; // x0
  int32_t v491; // w2
  const MethodInfo *v492; // x3
  UnityEngine_Object_o *v493; // x19
  MapGimmickComponent_o *v494; // x19
  System_Action_o *v495; // x0
  __int64 *v496; // x8
  System_Action_o *v497; // x21
  __int64 v498; // x21
  QuestAfterAction_o *v499; // x20
  Il2CppObject *v500; // x20
  UIWidget_o *v501; // x20
  int32_t v502; // w2
  const MethodInfo *v503; // x3
  __int64 v504; // x8
  QuestAfterAction_o *v505; // x22
  Il2CppObject *v506; // x0
  __int64 v507; // x19
  int32_t v508; // w2
  const MethodInfo *v509; // x3
  UnityEngine_Object_o *v510; // x21
  bool v511; // w0
  bool v512; // w22
  int32_t v513; // w1
  __int64 v514; // x8
  __int64 v515; // x22
  int32_t v516; // w21
  bool v517; // w22
  __int64 v518; // x22
  QuestAfterAction_o *v519; // x21
  Il2CppObject *v520; // x21
  QuestAfterAction_o *v521; // x23
  const MethodInfo *v522; // x4
  int32_t v523; // w2
  QuestAfterAction_o *v524; // x0
  int32_t v525; // w1
  QuestAfterAction_o *v526; // x21
  QuestAfterAction_o *v527; // x23
  const MethodInfo *v528; // x4
  UnityEngine_Object_o *MapGameObject; // x23
  float v530; // s0
  float v531; // s1
  float v532; // s2
  float x; // s9
  float y; // s8
  float z; // s10
  QuestAfterAction_o *v536; // x21
  QuestAfterAction_o *v537; // x23
  UnityEngine_Object_o *v538; // x23
  __int64 v539; // x8
  float v540; // s0
  float v541; // s11
  int32_t v542; // w23
  System_String_o *v543; // x20
  __int64 v544; // x20
  int32_t v545; // w2
  const MethodInfo *v546; // x3
  __int64 v547; // x8
  QuestAfterAction_o *v548; // x22
  Il2CppObject *v549; // x0
  int32_t v550; // w2
  const MethodInfo *v551; // x3
  UnityEngine_Object_o *v552; // x19
  srcLineSprite_o *v553; // x19
  System_Action_o *v554; // x21
  int32_t v555; // w1
  __int64 v556; // x20
  int32_t v557; // w2
  const MethodInfo *v558; // x3
  __int64 v559; // x8
  QuestAfterAction_o *v560; // x22
  Il2CppObject *v561; // x0
  int32_t v562; // w2
  const MethodInfo *v563; // x3
  UnityEngine_Object_o *v564; // x19
  __int64 v565; // x20
  int32_t v566; // w2
  const MethodInfo *v567; // x3
  __int64 v568; // x8
  QuestAfterAction_o *v569; // x22
  Il2CppObject *v570; // x0
  int32_t v571; // w2
  const MethodInfo *v572; // x3
  UnityEngine_Object_o *v573; // x19
  UnityEngine_Object_o *v574; // x21
  UnityEngine_Object_o *v575; // x21
  int v576; // w9
  UnityEngine_Object_o *v577; // x21
  Il2CppObject *v578; // x23
  struct QuestAfterAction_StateMain___c_StaticFields *static_fields; // x0
  int32_t v580; // w2
  const MethodInfo *v581; // x3
  TerminalSceneComponent_c *v582; // x0
  System_Action_o *v583; // x21
  float v584; // s10
  float v585; // s9
  float v586; // s8
  System_String_o *v587; // x24
  Il2CppObject *v588; // x0
  int32_t v589; // w2
  const MethodInfo *v590; // x3
  UnityEngine_Object_o *v591; // x22
  MapGimmickComponent_o *v592; // x21
  System_Action_o *v593; // x0
  System_Action_o *v594; // x22
  MapGimmickComponent_o *v595; // x0
  System_Action_o *v596; // x2
  Il2CppObject *v597; // x0
  MapGimmickComponent_o **v598; // x22
  int32_t v599; // w2
  const MethodInfo *v600; // x3
  UnityEngine_Object_o *v601; // x24
  MapGimmickComponent_o *v602; // x24
  System_Action_o *v603; // x0
  Il2CppObject *v604; // x21
  Il2CppObject *v605; // x21
  Il2CppClass *v606; // x8
  Il2CppObject *v607; // x21
  Il2CppClass *v608; // x8
  QuestAfterAction_StateMain_c *v609; // x8
  int v610; // w0
  __int64 v611; // x8
  ScrTerminalMap_o *v612; // x21
  System_Action_o *v613; // x23
  MapCamera_o *v614; // x20
  MapCamera_o *v615; // x20
  int v616; // w8
  MapCamera_o *v617; // x20
  float v618; // s0
  float v619; // s1
  float v620; // s2
  float v621; // s0
  float v622; // s1
  float v623; // s2
  __int64 v624; // x8
  float v625; // s3
  System_Action_o *v626; // x20
  MapGimmickComponent_o *v627; // x0
  float v628; // s0
  float v629; // s1
  float v630; // s2
  float v631; // s3
  int32_t v632; // w1
  System_Action_o *v633; // x2
  __int64 v634; // x8
  __int64 v635; // x8
  float v636; // s0
  float v637; // s0
  MapCamera_o *v638; // x0
  float v639; // s0
  __int64 v640; // x8
  ScrTerminalMap_o *v641; // x22
  float v642; // s0
  float v643; // s9
  float v644; // s0
  float v645; // s0
  float v646; // s1
  float v647; // s2
  float v648; // s10
  float v649; // s9
  float v650; // s11
  float v651; // s8
  int32_t v652; // w21
  System_Action_o *v653; // x22
  float v654; // s0
  float v655; // s0
  int32_t onClickOkSeKind; // [xsp+10h] [xbp-E0h]
  float sec; // [xsp+3Ch] [xbp-B4h]
  System_Nullable_float__o size; // [xsp+40h] [xbp-B0h] BYREF
  System_Nullable_Vector3__o v659; // [xsp+48h] [xbp-A8h] BYREF
  Il2CppObject *value; // [xsp+58h] [xbp-98h] BYREF
  Il2CppObject *entity; // [xsp+60h] [xbp-90h] BYREF
  UnityEngine_Color_o color; // [xsp+68h] [xbp-88h] BYREF
  bool isQuickUpdate; // [xsp+7Ch] [xbp-74h] BYREF
  System_Nullable_float__o p_size; // 0:x0.8
  System_Nullable_float__o v665; // 0:x0.8
  System_Nullable_float__o v666; // 0:x0.8
  System_Nullable_float__o v667; // 0:x0.8
  System_Nullable_float__o v668; // 0:x0.8
  System_Nullable_float__o v669; // 0:x3.8
  System_Nullable_float__o v670; // 0:x3.8
  System_Nullable_Vector3__o v671; // 0:x0.16
  System_Nullable_Vector3__o v672; // 0:x0.16
  System_Nullable_Vector3__o v673; // 0:x0.16
  System_Nullable_Vector3__o v674; // 0:x0.16
  System_Nullable_Vector3__o v675; // 0:x0.16
  System_Nullable_Vector3__o v676; // 0:x1.16
  System_Nullable_Vector3__o v677; // 0:x1.16
  UnityEngine_Vector3_o v678; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v679; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v680; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v681; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v682; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o Position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v684; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v685; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v686; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v687; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v689; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v690; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v691; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v692; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v693; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v694; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_49B7BAA & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_TypeInfo, that);
    sub_1B4CF90(&AvalonSceneManager_TypeInfo, v5);
    sub_1B4CF90(&Method_DataManager_GetMasterData_QuestMaster___, v6);
    sub_1B4CF90(&Method_DataManager_GetMaster_QuestMaster___, v7);
    sub_1B4CF90(&DataManager_TypeInfo, v8);
    sub_1B4CF90(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v9);
    sub_1B4CF90(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__, v10);
    sub_1B4CF90(&Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__TryGetValue__, v11);
    sub_1B4CF90(&FSUtility_TypeInfo, v12);
    sub_1B4CF90(&Method_UnityEngine_GameObject_GetComponentInChildren_UISprite___, v13);
    sub_1B4CF90(&Method_UnityEngine_GameObject_GetComponent_ModelLineComponent___, v14);
    sub_1B4CF90(&LocalizationManager_TypeInfo, v15);
    sub_1B4CF90(&Method_NetworkManager_getRequest_BattleSetupScenarioRequest___, v16);
    sub_1B4CF90(&NetworkManager_TypeInfo, v17);
    sub_1B4CF90(&Method_System_Nullable_Vector3___ctor__, v18);
    sub_1B4CF90(&Method_System_Nullable_float___ctor__, v19);
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, v20);
    sub_1B4CF90(&Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___, v21);
    sub_1B4CF90(&Method_QuestAfterAction_GetMapComponent_ModelLineComponent___, v22);
    sub_1B4CF90(&Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___, v23);
    sub_1B4CF90(&Method_QuestAfterAction_GetMapComponent_srcLineSprite___, v24);
    sub_1B4CF90(&NetworkManager_ResultCallbackFunc_TypeInfo, v25);
    sub_1B4CF90(&SceneJumpInfo_TypeInfo, v26);
    sub_1B4CF90(&SeManager_TypeInfo, v27);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v28);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v29);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v30);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__, v31);
    sub_1B4CF90(&Method_SingletonTemplate_QuestTree__get_Instance__, v32);
    sub_1B4CF90(&SoundManager_TypeInfo, v33);
    sub_1B4CF90(&Method_QuestAfterAction_StateMain_UpdateAnim__, v34);
    sub_1B4CF90(&string___TypeInfo, v35);
    sub_1B4CF90(&TerminalPramsManager_TypeInfo, v36);
    sub_1B4CF90(&TerminalSceneComponent_TypeInfo, v37);
    sub_1B4CF90(&Method_QuestAfterAction_StateMain___c__UpdateAnim_b__16_22__, v38);
    sub_1B4CF90(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__10__, v39);
    sub_1B4CF90(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__11__, v40);
    sub_1B4CF90(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__12__, v41);
    sub_1B4CF90(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__23__, v42);
    sub_1B4CF90(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__29__, v43);
    sub_1B4CF90(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__30__, v44);
    sub_1B4CF90(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__31__, v45);
    sub_1B4CF90(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__32__, v46);
    sub_1B4CF90(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__33__, v47);
    sub_1B4CF90(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__9__, v48);
    sub_1B4CF90(&QuestAfterAction_StateMain___c__DisplayClass16_0_TypeInfo, v49);
    sub_1B4CF90(&Method_QuestAfterAction_StateMain___c__DisplayClass16_10__UpdateAnim_b__13__, v50);
    sub_1B4CF90(&Method_QuestAfterAction_StateMain___c__DisplayClass16_10__UpdateAnim_b__14__, v51);
    sub_1B4CF90(&QuestAfterAction_StateMain___c__DisplayClass16_10_TypeInfo, v52);
    sub_1B4CF90(&Method_QuestAfterAction_StateMain___c__DisplayClass16_11__UpdateAnim_b__15__, v53);
    sub_1B4CF90(&Method_QuestAfterAction_StateMain___c__DisplayClass16_11__UpdateAnim_b__16__, v54);
    sub_1B4CF90(&QuestAfterAction_StateMain___c__DisplayClass16_11_TypeInfo, v55);
    sub_1B4CF90(&Method_QuestAfterAction_StateMain___c__DisplayClass16_12__UpdateAnim_b__17__, v56);
    sub_1B4CF90(&QuestAfterAction_StateMain___c__DisplayClass16_12_TypeInfo, v57);
    sub_1B4CF90(&Method_QuestAfterAction_StateMain___c__DisplayClass16_13__UpdateAnim_b__18__, v58);
    sub_1B4CF90(&QuestAfterAction_StateMain___c__DisplayClass16_13_TypeInfo, v59);
    sub_1B4CF90(&Method_QuestAfterAction_StateMain___c__DisplayClass16_15__UpdateAnim_b__20__, v60);
    sub_1B4CF90(&Method_QuestAfterAction_StateMain___c__DisplayClass16_15__UpdateAnim_b__21__, v61);
    sub_1B4CF90(&QuestAfterAction_StateMain___c__DisplayClass16_15_TypeInfo, v62);
    sub_1B4CF90(&Method_QuestAfterAction_StateMain___c__DisplayClass16_16__UpdateAnim_b__24__, v63);
    sub_1B4CF90(&QuestAfterAction_StateMain___c__DisplayClass16_16_TypeInfo, v64);
    sub_1B4CF90(&Method_QuestAfterAction_StateMain___c__DisplayClass16_1__UpdateAnim_b__0__, v65);
    sub_1B4CF90(&QuestAfterAction_StateMain___c__DisplayClass16_1_TypeInfo, v66);
    sub_1B4CF90(&Method_QuestAfterAction_StateMain___c__DisplayClass16_2__UpdateAnim_b__1__, v67);
    sub_1B4CF90(&QuestAfterAction_StateMain___c__DisplayClass16_2_TypeInfo, v68);
    sub_1B4CF90(&Method_QuestAfterAction_StateMain___c__DisplayClass16_3__UpdateAnim_b__2__, v69);
    sub_1B4CF90(&QuestAfterAction_StateMain___c__DisplayClass16_3_TypeInfo, v70);
    sub_1B4CF90(&Method_QuestAfterAction_StateMain___c__DisplayClass16_4__UpdateAnim_b__3__, v71);
    sub_1B4CF90(&QuestAfterAction_StateMain___c__DisplayClass16_4_TypeInfo, v72);
    sub_1B4CF90(&Method_QuestAfterAction_StateMain___c__DisplayClass16_5__UpdateAnim_b__4__, v73);
    sub_1B4CF90(&QuestAfterAction_StateMain___c__DisplayClass16_5_TypeInfo, v74);
    sub_1B4CF90(&Method_QuestAfterAction_StateMain___c__DisplayClass16_6__UpdateAnim_b__5__, v75);
    sub_1B4CF90(&QuestAfterAction_StateMain___c__DisplayClass16_6_TypeInfo, v76);
    sub_1B4CF90(&Method_QuestAfterAction_StateMain___c__DisplayClass16_7__UpdateAnim_b__6__, v77);
    sub_1B4CF90(&QuestAfterAction_StateMain___c__DisplayClass16_7_TypeInfo, v78);
    sub_1B4CF90(&Method_QuestAfterAction_StateMain___c__DisplayClass16_8__UpdateAnim_b__7__, v79);
    sub_1B4CF90(&QuestAfterAction_StateMain___c__DisplayClass16_8_TypeInfo, v80);
    sub_1B4CF90(&Method_QuestAfterAction_StateMain___c__DisplayClass16_9__UpdateAnim_b__8__, v81);
    sub_1B4CF90(&QuestAfterAction_StateMain___c__DisplayClass16_9_TypeInfo, v82);
    sub_1B4CF90(&QuestAfterAction_StateMain___c_TypeInfo, v83);
    sub_1B4CF90(&StringLiteral_89/*"\r\n"*/, v84);
    sub_1B4CF90(&StringLiteral_1399/*"30101"*/, v85);
    sub_1B4CF90(&StringLiteral_10605/*"QUEST_AFTER_ACTION_MESSAGE_"*/, v86);
    sub_1B4CF90(&StringLiteral_1400/*"30102"*/, v87);
    sub_1B4CF90(&StringLiteral_1325/*"10703"*/, v88);
    sub_1B4CF90(&StringLiteral_816/*","*/, v89);
    sub_1B4CF90(&StringLiteral_3298/*"CAPTER WAIT"*/, v90);
    sub_1B4CF90(&StringLiteral_1/*""*/, v91);
    sub_1B4CF90(&StringLiteral_19517/*"gevINFOBAR_BACK"*/, v92);
    sub_1B4CF90(&StringLiteral_1138/*"0"*/, v93);
    byte_49B7BAA = 1;
  }
  isQuickUpdate = 0;
  *(_QWORD *)&color.fields.r = 0LL;
  *(_QWORD *)&color.fields.b = 0LL;
  value = 0LL;
  entity = 0LL;
  v94 = sub_1B4D1DC(QuestAfterAction_StateMain___c__DisplayClass16_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v94, 0LL);
  if ( !v94 )
    goto LABEL_1012;
  *(_QWORD *)(v94 + 16) = this;
  sub_1B4CF34((CGThumbnailListItem_o *)(v94 + 16), (int32_t)this, v97, v98);
  *(_QWORD *)(v94 + 24) = that;
  v99 = (__int64 *)(v94 + 24);
  sub_1B4CF34((CGThumbnailListItem_o *)(v94 + 24), (int32_t)that, v100, v101);
  if ( this->fields.IsAnimDoing )
    return;
  updated = ((__int64 (__fastcall *)(QuestAfterAction_StateMain_o *, Il2CppMethodPointer))this->klass->vtable._10_get_CommandBuf.method)(
              this,
              this->klass->vtable._11_get_CommandIndex.methodPtr);
  if ( !updated )
    return;
  if ( !*v99 )
    goto LABEL_1012;
  if ( *(_BYTE *)(*v99 + 169) )
  {
    updated = ((__int64 (__fastcall *)(QuestAfterAction_StateMain_o *, Il2CppMethodPointer))this->klass->vtable._14_EndAnim.method)(
                this,
                this->klass->vtable._15_onEnd.methodPtr);
    if ( *v99 )
    {
      *(_BYTE *)(*v99 + 169) = 0;
      return;
    }
LABEL_1012:
    sub_1B4D1EC(updated, v96);
  }
  klass = this->klass;
  this->fields.IsAnimDoing = 1;
  v103 = ((__int64 (__fastcall *)(QuestAfterAction_StateMain_o *, Il2CppMethodPointer))klass->vtable._10_get_CommandBuf.method)(
           this,
           klass->vtable._11_get_CommandIndex.methodPtr);
  updated = ((__int64 (__fastcall *)(QuestAfterAction_StateMain_o *, Il2CppMethodPointer))this->klass->vtable._11_get_CommandIndex.method)(
              this,
              this->klass->vtable._12_set_CommandIndex.methodPtr);
  if ( !v103 )
    goto LABEL_1012;
  if ( (unsigned int)updated >= *(_DWORD *)(v103 + 24) )
    goto LABEL_1013;
  v104 = *(QuestAfterAction_Command_o **)(v103 + 8LL * (int)updated + 32);
  updated = ((__int64 (__fastcall *)(QuestAfterAction_StateMain_o *, QuestAfterAction_Command_o *, Il2CppMethodPointer))this->klass->vtable._9_IsUsableCommand.method)(
              this,
              v104,
              this->klass->vtable._10_get_CommandBuf.methodPtr);
  if ( (updated & 1) == 0 )
    goto LABEL_839;
  if ( !*v99 )
    goto LABEL_1012;
  v105 = *(BlankEarthQuestAfterAction_o **)(*v99 + 48);
  v106 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
  System_Action___ctor(v106, (Il2CppObject *)this, (intptr_t)this->klass->vtable._15_onEnd.methodPtr, 0LL);
  if ( !v105 )
    goto LABEL_1012;
  updated = BlankEarthQuestAfterAction__UpdateAnim(v105, v96, v104, v106, &isQuickUpdate, v107);
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
        *v99,
        this->klass->vtable._14_EndAnim.methodPtr);
      return;
    }
    return;
  }
  if ( !v104 )
    goto LABEL_1012;
  id = v104->fields.id;
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
          if ( !byte_49B5933 )
          {
            sub_1B4CF90(&TerminalSceneComponent_TypeInfo, v96);
            byte_49B5933 = 1;
          }
          updated = (__int64)TerminalSceneComponent_TypeInfo;
          if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            updated = (__int64)TerminalSceneComponent_TypeInfo;
          }
          v219 = **(_QWORD **)(updated + 184);
          if ( !v219 )
            goto LABEL_1012;
          updated = *(_QWORD *)(v219 + 256);
          if ( !updated )
            goto LABEL_1012;
          updated = (__int64)ScrTerminalListTop__mfGetMyFsmP((ScrTerminalListTop_o *)updated, 0LL);
          if ( !updated )
            goto LABEL_1012;
          v220 = (PlayMakerFSM_o *)updated;
          ActiveStateName = PlayMakerFSM__get_ActiveStateName((PlayMakerFSM_o *)updated, 0LL);
          if ( System_String__op_Equality(ActiveStateName, (System_String_o *)StringLiteral_3298/*"CAPTER WAIT"*/, 0LL) )
          {
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            if ( !byte_49B5933 )
            {
              sub_1B4CF90(&TerminalSceneComponent_TypeInfo, v96);
              byte_49B5933 = 1;
            }
            updated = (__int64)TerminalSceneComponent_TypeInfo;
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
              updated = (__int64)TerminalSceneComponent_TypeInfo;
            }
            v222 = **(_QWORD **)(updated + 184);
            if ( !v222 )
              goto LABEL_1012;
            v223 = *(_QWORD *)(v222 + 256);
            if ( !v223 )
              goto LABEL_1012;
            v224 = *(QuestBoardListViewManager_o **)(v223 + 296);
            updated = (__int64)QuestAfterAction_StateMain___c_TypeInfo;
            if ( !QuestAfterAction_StateMain___c_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(QuestAfterAction_StateMain___c_TypeInfo);
              updated = (__int64)QuestAfterAction_StateMain___c_TypeInfo;
            }
            v225 = *(System_Action_o **)(*(_QWORD *)(updated + 184) + 8LL);
            if ( !v225 )
            {
              if ( !*(_DWORD *)(updated + 224) )
              {
                j_il2cpp_runtime_class_init_0(updated);
                updated = (__int64)QuestAfterAction_StateMain___c_TypeInfo;
              }
              v578 = **(Il2CppObject ***)(updated + 184);
              v225 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
              System_Action___ctor(v225, v578, Method_QuestAfterAction_StateMain___c__UpdateAnim_b__16_22__, 0LL);
              static_fields = QuestAfterAction_StateMain___c_TypeInfo->static_fields;
              static_fields->__9__16_22 = v225;
              sub_1B4CF34((CGThumbnailListItem_o *)&static_fields->__9__16_22, (int32_t)v225, v580, v581);
            }
            if ( !v224 )
              goto LABEL_1012;
            QuestBoardListViewManager__SetMode(v224, 4, v225, 0, 0, 0LL);
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            if ( !byte_49B5933 )
            {
              sub_1B4CF90(&TerminalSceneComponent_TypeInfo, v96);
              byte_49B5933 = 1;
            }
            v582 = TerminalSceneComponent_TypeInfo;
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
              v582 = TerminalSceneComponent_TypeInfo;
            }
            updated = (__int64)v582->static_fields->mInstance;
            if ( !updated )
              goto LABEL_1012;
            TerminalSceneComponent__CallQuestInformationClose((TerminalSceneComponent_o *)updated, 0LL);
            PlayMakerFSM__SendEvent(v220, (System_String_o *)StringLiteral_19517/*"gevINFOBAR_BACK"*/, 0LL);
          }
          goto LABEL_839;
        }
        if ( id != 510 )
        {
          if ( id == 520 )
          {
            DEFAULT_FADE_TIME = System_Single__Parse(v104->fields.param, 0LL);
            if ( DEFAULT_FADE_TIME <= 0.0 )
            {
              v112 = AvalonSceneManager_TypeInfo;
              if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
                v112 = AvalonSceneManager_TypeInfo;
              }
              DEFAULT_FADE_TIME = v112->static_fields->DEFAULT_FADE_TIME;
            }
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            if ( !byte_49B5933 )
            {
              sub_1B4CF90(&TerminalSceneComponent_TypeInfo, v110);
              byte_49B5933 = 1;
            }
            v113 = TerminalSceneComponent_TypeInfo;
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
              v113 = TerminalSceneComponent_TypeInfo;
            }
            mInstance = v113->static_fields->mInstance;
            v115 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
            System_Action___ctor(
              v115,
              (Il2CppObject *)v94,
              Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__23__,
              0LL);
            if ( !mInstance )
              goto LABEL_1012;
            v116 = mInstance;
            v117 = DEFAULT_FADE_TIME;
            v118 = v115;
LABEL_46:
            TerminalSceneComponent__Fadein_MapDisp(v116, v117, v118, 0LL);
          }
          return;
        }
        updated = (__int64)v104->fields.param;
        if ( !updated )
          goto LABEL_1012;
        updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
        if ( !updated )
          goto LABEL_1012;
        v226 = updated;
        if ( *(_DWORD *)(updated + 24) )
        {
          v227 = System_Int32__Parse(*(System_String_o **)(updated + 32), 0LL);
          v228 = 0.5;
          if ( *(int *)(v226 + 24) >= 2 )
          {
            v229 = System_Int32__Parse(*(System_String_o **)(v226 + 40), 0LL);
            if ( *(int *)(v226 + 24) >= 3 )
              v228 = System_Single__Parse(*(System_String_o **)(v226 + 48), 0LL);
          }
          else
          {
            v229 = v227;
            v227 = -1;
          }
          updated = *v99;
          if ( !*v99 )
            goto LABEL_1012;
          MapComponent_object = QuestAfterAction__GetMapComponent_object_(
                                  (QuestAfterAction_o *)updated,
                                  0,
                                  v229,
                                  this,
                                  (const MethodInfo_2F948BC *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)MapComponent_object, 0LL, 0LL) )
          {
            if ( v227 >= 1 )
            {
              updated = *v99;
              if ( !*v99 )
                goto LABEL_1012;
              v275 = QuestAfterAction__GetMapComponent_object_(
                       (QuestAfterAction_o *)updated,
                       0,
                       v227,
                       this,
                       (const MethodInfo_2F948BC *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v275, 0LL, 0LL) )
              {
                if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
                if ( !byte_49B5933 )
                {
                  sub_1B4CF90(&TerminalSceneComponent_TypeInfo, v96);
                  byte_49B5933 = 1;
                }
                updated = (__int64)TerminalSceneComponent_TypeInfo;
                if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
                  updated = (__int64)TerminalSceneComponent_TypeInfo;
                }
                v276 = **(_QWORD **)(updated + 184);
                if ( !v276 )
                  goto LABEL_1012;
                if ( !v275 )
                  goto LABEL_1012;
                v277 = *(ScrTerminalMap_o **)(v276 + 264);
                updated = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v275, 0LL);
                if ( !v277 )
                  goto LABEL_1012;
                ScrTerminalMap__SetPlayerIcon(v277, (UnityEngine_GameObject_o *)updated, 0LL);
              }
            }
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            if ( !byte_49B5933 )
            {
              sub_1B4CF90(&TerminalSceneComponent_TypeInfo, v96);
              byte_49B5933 = 1;
            }
            updated = (__int64)TerminalSceneComponent_TypeInfo;
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
              updated = (__int64)TerminalSceneComponent_TypeInfo;
            }
            v278 = **(_QWORD **)(updated + 184);
            if ( !v278 )
              goto LABEL_1012;
            if ( !MapComponent_object )
              goto LABEL_1012;
            v279 = *(ScrTerminalMap_o **)(v278 + 264);
            gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)MapComponent_object, 0LL);
            v281 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
            System_Action___ctor(v281, (Il2CppObject *)this, (intptr_t)this->klass->vtable._15_onEnd.methodPtr, 0LL);
            if ( !v279 )
              goto LABEL_1012;
            ScrTerminalMap__MovePlayerIcon(v279, gameObject, v229, v281, v228, 0LL);
          }
          return;
        }
        goto LABEL_1013;
      }
      if ( (unsigned int)(id - 351) >= 2 )
      {
        switch ( id )
        {
          case 400:
            v130 = sub_1B4D1DC(QuestAfterAction_StateMain___c__DisplayClass16_10_TypeInfo);
            System_Object___ctor((Il2CppObject *)v130, 0LL);
            if ( !v130 )
              goto LABEL_1012;
            *(_QWORD *)(v130 + 24) = v94;
            v133 = v130 + 24;
            sub_1B4CF34((CGThumbnailListItem_o *)(v130 + 24), v94, v131, v132);
            updated = (__int64)v104->fields.param;
            if ( !updated )
              goto LABEL_1012;
            updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
            if ( !updated )
              goto LABEL_1012;
            v134 = *(_QWORD *)(updated + 24);
            v135 = updated;
            if ( v134 )
            {
              if ( !(_DWORD)v134 )
                goto LABEL_1013;
              updated = System_Int32__Parse(*(System_String_o **)(updated + 32), 0LL);
              v136 = updated;
              if ( *(int *)(v135 + 24) >= 2 )
              {
                updated = System_Int32__Parse(*(System_String_o **)(v135 + 40), 0LL);
                v137 = (int)updated < 1;
                if ( *(int *)(v135 + 24) < 3 )
                {
                  v138 = 0;
                }
                else
                {
                  updated = System_Int32__Parse(*(System_String_o **)(v135 + 48), 0LL);
                  v138 = (int)updated > 0;
                }
                goto LABEL_852;
              }
            }
            else
            {
              v136 = 0;
            }
            v138 = 0;
            v137 = 1;
LABEL_852:
            if ( !*(_QWORD *)v133 )
              goto LABEL_1012;
            updated = *(_QWORD *)(*(_QWORD *)v133 + 24LL);
            if ( !updated )
              goto LABEL_1012;
            v588 = QuestAfterAction__GetMapComponent_object_(
                     (QuestAfterAction_o *)updated,
                     2,
                     v136,
                     this,
                     (const MethodInfo_2F948BC *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
            *(_QWORD *)(v130 + 16) = v588;
            sub_1B4CF34((CGThumbnailListItem_o *)(v130 + 16), (int32_t)v588, v589, v590);
            v591 = *(UnityEngine_Object_o **)(v130 + 16);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            updated = UnityEngine_Object__op_Equality(v591, 0LL, 0LL);
            if ( (updated & 1) != 0 )
              return;
            v592 = *(MapGimmickComponent_o **)(v130 + 16);
            if ( !v592 )
              goto LABEL_1012;
            v592->fields.isForceNotActive = v138;
            v593 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
            v594 = v593;
            if ( v137 )
            {
              System_Action___ctor(
                v593,
                (Il2CppObject *)v130,
                Method_QuestAfterAction_StateMain___c__DisplayClass16_10__UpdateAnim_b__14__,
                0LL);
              v513 = 2;
              v595 = v592;
              v596 = v594;
LABEL_961:
              MapGimmickComponent__SetState(v595, v513, v596, 0LL);
              return;
            }
            System_Action___ctor(
              v593,
              (Il2CppObject *)v130,
              Method_QuestAfterAction_StateMain___c__DisplayClass16_10__UpdateAnim_b__13__,
              0LL);
            MapGimmickComponent__SetState(v592, 2, v594, 0LL);
            updated = ((__int64 (__fastcall *)(QuestAfterAction_StateMain_o *, Il2CppMethodPointer))this->klass->vtable._14_EndAnim.method)(
                        this,
                        this->klass->vtable._15_onEnd.methodPtr);
            v634 = *(_QWORD *)(v130 + 24);
            if ( !v634 )
              goto LABEL_1012;
            goto LABEL_966;
          case 401:
            v445 = sub_1B4D1DC(QuestAfterAction_StateMain___c__DisplayClass16_11_TypeInfo);
            System_Object___ctor((Il2CppObject *)v445, 0LL);
            if ( !v445 )
              goto LABEL_1012;
            *(_QWORD *)(v445 + 24) = v94;
            v448 = v445 + 24;
            sub_1B4CF34((CGThumbnailListItem_o *)(v445 + 24), v94, v446, v447);
            updated = (__int64)v104->fields.param;
            if ( !updated )
              goto LABEL_1012;
            updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
            if ( !updated )
              goto LABEL_1012;
            v449 = *(_QWORD *)(updated + 24);
            v450 = updated;
            if ( v449 )
            {
              if ( !(_DWORD)v449 )
                goto LABEL_1013;
              updated = System_Int32__Parse(*(System_String_o **)(updated + 32), 0LL);
              v451 = updated;
              if ( *(int *)(v450 + 24) >= 2 )
              {
                updated = System_Int32__Parse(*(System_String_o **)(v450 + 40), 0LL);
                v452 = (int)updated < 1;
                if ( *(int *)(v450 + 24) < 3 )
                {
                  v453 = 0;
                }
                else
                {
                  updated = System_Int32__Parse(*(System_String_o **)(v450 + 48), 0LL);
                  v453 = (int)updated > 0;
                }
                goto LABEL_862;
              }
            }
            else
            {
              v451 = 0;
            }
            v453 = 0;
            v452 = 1;
LABEL_862:
            if ( !*(_QWORD *)v448 )
              goto LABEL_1012;
            updated = *(_QWORD *)(*(_QWORD *)v448 + 24LL);
            if ( !updated )
              goto LABEL_1012;
            v597 = QuestAfterAction__GetMapComponent_object_(
                     (QuestAfterAction_o *)updated,
                     2,
                     v451,
                     this,
                     (const MethodInfo_2F948BC *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
            *(_QWORD *)(v445 + 16) = v597;
            v598 = (MapGimmickComponent_o **)(v445 + 16);
            sub_1B4CF34((CGThumbnailListItem_o *)(v445 + 16), (int32_t)v597, v599, v600);
            v601 = *(UnityEngine_Object_o **)(v445 + 16);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            updated = UnityEngine_Object__op_Equality(v601, 0LL, 0LL);
            if ( (updated & 1) != 0 )
              return;
            v602 = *v598;
            if ( !*v598 )
              goto LABEL_1012;
            v602->fields.isForceLoop = v453;
            v602->fields.isForceNotActive = 0;
            if ( *(int *)(v450 + 24) >= 4 )
            {
              updated = System_Int32__Parse(*(System_String_o **)(v450 + 56), 0LL);
              if ( !*v598 )
                goto LABEL_1012;
              MapGimmickComponent__SetUseAnimNum(*v598, updated, 1, 0LL);
              v602 = *v598;
            }
            v603 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
            v497 = v603;
            if ( v452 )
            {
              System_Action___ctor(
                v603,
                (Il2CppObject *)v445,
                Method_QuestAfterAction_StateMain___c__DisplayClass16_11__UpdateAnim_b__16__,
                0LL);
              if ( !v602 )
                goto LABEL_1012;
              v513 = 3;
              v595 = v602;
LABEL_960:
              v596 = v497;
              goto LABEL_961;
            }
            System_Action___ctor(
              v603,
              (Il2CppObject *)v445,
              Method_QuestAfterAction_StateMain___c__DisplayClass16_11__UpdateAnim_b__15__,
              0LL);
            if ( !v602 )
              goto LABEL_1012;
            MapGimmickComponent__SetState(v602, 3, v497, 0LL);
            updated = ((__int64 (__fastcall *)(QuestAfterAction_StateMain_o *, Il2CppMethodPointer))this->klass->vtable._14_EndAnim.method)(
                        this,
                        this->klass->vtable._15_onEnd.methodPtr);
            v634 = *(_QWORD *)v448;
            if ( !*(_QWORD *)v448 )
              goto LABEL_1012;
LABEL_966:
            ((void (__fastcall *)(QuestAfterAction_StateMain_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._13_UpdateAnim.method)(
              this,
              *(_QWORD *)(v634 + 24),
              this->klass->vtable._14_EndAnim.methodPtr);
            return;
          case 402:
            updated = (__int64)v104->fields.param;
            if ( !updated )
              goto LABEL_1012;
            updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
            if ( !updated )
              goto LABEL_1012;
            v454 = *(_QWORD *)(updated + 24);
            v455 = updated;
            if ( v454 )
            {
              if ( !(_DWORD)v454 )
                goto LABEL_1013;
              v456 = System_Int32__Parse(*(System_String_o **)(updated + 32), 0LL);
              if ( *(int *)(v455 + 24) >= 2 )
              {
                v457 = System_Int32__Parse(*(System_String_o **)(v455 + 40), 0LL) > 0;
                goto LABEL_876;
              }
            }
            else
            {
              v456 = 0;
            }
            v457 = 0;
LABEL_876:
            updated = *v99;
            if ( !*v99 )
              goto LABEL_1012;
            v604 = QuestAfterAction__GetMapComponent_object_(
                     (QuestAfterAction_o *)updated,
                     2,
                     v456,
                     this,
                     (const MethodInfo_2F948BC *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            updated = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v604, 0LL, 0LL);
            if ( (updated & 1) == 0 )
            {
              if ( !v604 )
                goto LABEL_1012;
              BYTE1(v604[6].monitor) = v457;
              MapGimmickComponent__SetDispAnimQuick((MapGimmickComponent_o *)v604, 0, 0LL);
              v396 = v604[7].klass;
              if ( !v396 )
                goto LABEL_1012;
LABEL_882:
              v396[4] = 0;
              goto LABEL_18;
            }
            return;
          case 403:
            updated = (__int64)v104->fields.param;
            if ( !updated )
              goto LABEL_1012;
            updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
            if ( !updated )
              goto LABEL_1012;
            v458 = *(_QWORD *)(updated + 24);
            v459 = updated;
            if ( v458 )
            {
              if ( !(_DWORD)v458 )
                goto LABEL_1013;
              v460 = System_Int32__Parse(*(System_String_o **)(updated + 32), 0LL);
              if ( *(int *)(v459 + 24) >= 2 )
              {
                v461 = System_Int32__Parse(*(System_String_o **)(v459 + 40), 0LL) > 0;
                goto LABEL_885;
              }
            }
            else
            {
              v460 = 0;
            }
            v461 = 0;
LABEL_885:
            updated = *v99;
            if ( !*v99 )
              goto LABEL_1012;
            v605 = QuestAfterAction__GetMapComponent_object_(
                     (QuestAfterAction_o *)updated,
                     2,
                     v460,
                     this,
                     (const MethodInfo_2F948BC *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            updated = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v605, 0LL, 0LL);
            if ( (updated & 1) == 0 )
            {
              if ( !v605 )
                goto LABEL_1012;
              LOBYTE(v605[6].monitor) = v461;
              BYTE1(v605[6].monitor) = 0;
              MapGimmickComponent__SetDispAnimQuick((MapGimmickComponent_o *)v605, 1, 0LL);
              v606 = v605[7].klass;
              if ( !v606 )
                goto LABEL_1012;
              LODWORD(v606->_1.name) = 1;
              goto LABEL_18;
            }
            return;
          case 404:
            updated = (__int64)v104->fields.param;
            if ( !updated )
              goto LABEL_1012;
            updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
            if ( !updated )
              goto LABEL_1012;
            v462 = updated;
            if ( *(int *)(updated + 24) <= 4 )
              goto LABEL_839;
            v463 = System_Single__Parse(*(System_String_o **)(updated + 56), 0LL);
            if ( !*(_DWORD *)(v462 + 24) )
              goto LABEL_1013;
            v464 = (QuestAfterAction_o *)*v99;
            v465 = v463;
            updated = System_Int32__Parse(*(System_String_o **)(v462 + 32), 0LL);
            if ( !v464 )
              goto LABEL_1012;
            v466 = QuestAfterAction__GetMapComponent_object_(
                     v464,
                     2,
                     updated,
                     this,
                     (const MethodInfo_2F948BC *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v466, 0LL, 0LL) )
              return;
            v467 = *(int *)(v462 + 24) >= 6 && System_Int32__Parse(*(System_String_o **)(v462 + 72), 0LL) > 0;
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            if ( !byte_49B5933 )
            {
              sub_1B4CF90(&TerminalSceneComponent_TypeInfo, v96);
              byte_49B5933 = 1;
            }
            updated = (__int64)TerminalSceneComponent_TypeInfo;
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
              updated = (__int64)TerminalSceneComponent_TypeInfo;
            }
            v640 = **(_QWORD **)(updated + 184);
            if ( !v640 )
              goto LABEL_1012;
            if ( *(_DWORD *)(v462 + 24) <= 1u )
              goto LABEL_1013;
            v641 = *(ScrTerminalMap_o **)(v640 + 264);
            v642 = System_Single__Parse(*(System_String_o **)(v462 + 40), 0LL);
            if ( *(_DWORD *)(v462 + 24) <= 2u )
              goto LABEL_1013;
            v643 = v642;
            v644 = System_Single__Parse(*(System_String_o **)(v462 + 48), 0LL);
            if ( !v641 )
              goto LABEL_1012;
            *(UnityEngine_Vector3_o *)&v645 = ScrTerminalMap__LocalPosFromCoord(v641, v643, v644, 0.0, 0.0, 0LL);
            if ( *(_DWORD *)(v462 + 24) <= 4u )
              goto LABEL_1013;
            v648 = v645;
            v649 = v646;
            v650 = v647;
            v651 = v465 * 0.001;
            updated = System_Int32__Parse(*(System_String_o **)(v462 + 64), 0LL);
            v652 = updated;
            if ( v467 )
            {
              if ( !v466 )
                goto LABEL_1012;
              v692.fields.x = v648;
              v692.fields.y = v649;
              v692.fields.z = v650;
              MapGimmickComponent__SetMoveAnim((MapGimmickComponent_o *)v466, v692, v651, updated, 0LL, 0LL);
              goto LABEL_839;
            }
            v653 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
            System_Action___ctor(v653, (Il2CppObject *)this, (intptr_t)this->klass->vtable._15_onEnd.methodPtr, 0LL);
            if ( !v466 )
              goto LABEL_1012;
            v627 = (MapGimmickComponent_o *)v466;
            v628 = v648;
            v629 = v649;
            v630 = v650;
            v631 = v651;
            v632 = v652;
            v633 = v653;
LABEL_1003:
            MapGimmickComponent__SetMoveAnim(v627, *(UnityEngine_Vector3_o *)&v628, v631, v632, v633, 0LL);
            return;
          case 405:
            v468 = sub_1B4D1DC(QuestAfterAction_StateMain___c__DisplayClass16_12_TypeInfo);
            System_Object___ctor((Il2CppObject *)v468, 0LL);
            if ( !v468 )
              goto LABEL_1012;
            *(_QWORD *)(v468 + 24) = v94;
            sub_1B4CF34((CGThumbnailListItem_o *)(v468 + 24), v94, v469, v470);
            v471 = *(_QWORD *)(v468 + 24);
            if ( !v471 )
              goto LABEL_1012;
            v472 = *(QuestAfterAction_o **)(v471 + 24);
            updated = System_Int32__Parse(v104->fields.param, 0LL);
            if ( !v472 )
              goto LABEL_1012;
            v473 = QuestAfterAction__GetMapComponent_object_(
                     v472,
                     2,
                     updated,
                     this,
                     (const MethodInfo_2F948BC *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
            *(_QWORD *)(v468 + 16) = v473;
            sub_1B4CF34((CGThumbnailListItem_o *)(v468 + 16), (int32_t)v473, v474, v475);
            v476 = *(UnityEngine_Object_o **)(v468 + 16);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Equality(v476, 0LL, 0LL) )
              return;
            v477 = *(MapGimmickComponent_o **)(v468 + 16);
            v478 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
            System_Action___ctor(
              v478,
              (Il2CppObject *)v468,
              Method_QuestAfterAction_StateMain___c__DisplayClass16_12__UpdateAnim_b__17__,
              0LL);
            if ( !v477 )
              goto LABEL_1012;
            MapGimmickComponent__SetState(v477, 3, v478, 0LL);
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            if ( !byte_49B5933 )
            {
              sub_1B4CF90(&TerminalSceneComponent_TypeInfo, v96);
              byte_49B5933 = 1;
            }
            updated = (__int64)TerminalSceneComponent_TypeInfo;
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
              updated = (__int64)TerminalSceneComponent_TypeInfo;
            }
            v479 = **(TerminalSceneComponent_o ***)(updated + 184);
            if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
            if ( !v479 )
              goto LABEL_1012;
            v116 = v479;
            v118 = 0LL;
            v117 = AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME;
            goto LABEL_46;
          case 406:
            v480 = sub_1B4D1DC(QuestAfterAction_StateMain___c__DisplayClass16_13_TypeInfo);
            System_Object___ctor((Il2CppObject *)v480, 0LL);
            if ( !v480 )
              goto LABEL_1012;
            *(_QWORD *)(v480 + 32) = v94;
            sub_1B4CF34((CGThumbnailListItem_o *)(v480 + 32), v94, v481, v482);
            updated = (__int64)v104->fields.param;
            if ( !updated )
              goto LABEL_1012;
            v483 = System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
            *(_QWORD *)(v480 + 24) = v483;
            v484 = (__int64 *)(v480 + 24);
            sub_1B4CF34((CGThumbnailListItem_o *)(v480 + 24), (int32_t)v483, v485, v486);
            v487 = *(_QWORD *)(v480 + 32);
            if ( !v487 )
              goto LABEL_1012;
            v488 = *v484;
            if ( !*v484 )
              goto LABEL_1012;
            if ( !*(_DWORD *)(v488 + 24) )
              goto LABEL_1013;
            v489 = *(QuestAfterAction_o **)(v487 + 24);
            updated = System_Int32__Parse(*(System_String_o **)(v488 + 32), 0LL);
            if ( !v489 )
              goto LABEL_1012;
            v490 = QuestAfterAction__GetMapComponent_object_(
                     v489,
                     2,
                     updated,
                     this,
                     (const MethodInfo_2F948BC *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
            *(_QWORD *)(v480 + 16) = v490;
            sub_1B4CF34((CGThumbnailListItem_o *)(v480 + 16), (int32_t)v490, v491, v492);
            v493 = *(UnityEngine_Object_o **)(v480 + 16);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Equality(v493, 0LL, 0LL) )
              return;
            v494 = *(MapGimmickComponent_o **)(v480 + 16);
            v495 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
            v496 = &Method_QuestAfterAction_StateMain___c__DisplayClass16_13__UpdateAnim_b__18__;
            v497 = v495;
            goto LABEL_716;
          case 407:
            updated = (__int64)v104->fields.param;
            if ( !updated )
              goto LABEL_1012;
            updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
            if ( !updated )
              goto LABEL_1012;
            v498 = updated;
            if ( !*(_DWORD *)(updated + 24) )
              goto LABEL_1013;
            v499 = (QuestAfterAction_o *)*v99;
            updated = System_Int32__Parse(*(System_String_o **)(updated + 32), 0LL);
            if ( !v499 )
              goto LABEL_1012;
            v500 = QuestAfterAction__GetMapComponent_object_(
                     v499,
                     2,
                     updated,
                     this,
                     (const MethodInfo_2F948BC *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            updated = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v500, 0LL, 0LL);
            if ( (updated & 1) != 0 )
              return;
            if ( !v500 )
              goto LABEL_1012;
            updated = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v500, 0LL);
            if ( !updated )
              goto LABEL_1012;
            updated = (__int64)UnityEngine_GameObject__GetComponentInChildren_object_(
                                 (UnityEngine_GameObject_o *)updated,
                                 (const MethodInfo_2F536A8 *)Method_UnityEngine_GameObject_GetComponentInChildren_UISprite___);
            if ( *(_DWORD *)(v498 + 24) <= 1u )
              goto LABEL_1013;
            v501 = (UIWidget_o *)updated;
            updated = UnityEngine_ColorUtility__TryParseHtmlString(*(System_String_o **)(v498 + 40), &color, 0LL);
            if ( !v501 )
              goto LABEL_1012;
            UIWidget__set_color(v501, color, 0LL);
            goto LABEL_839;
          case 408:
            v480 = sub_1B4D1DC(QuestAfterAction_StateMain___c__DisplayClass16_15_TypeInfo);
            System_Object___ctor((Il2CppObject *)v480, 0LL);
            if ( !v480 )
              goto LABEL_1012;
            *(_QWORD *)(v480 + 24) = v94;
            sub_1B4CF34((CGThumbnailListItem_o *)(v480 + 24), v94, v502, v503);
            v504 = *(_QWORD *)(v480 + 24);
            if ( !v504 )
              goto LABEL_1012;
            v505 = *(QuestAfterAction_o **)(v504 + 24);
            updated = System_Int32__Parse(v104->fields.param, 0LL);
            if ( !v505 )
              goto LABEL_1012;
            v506 = QuestAfterAction__GetMapComponent_object_(
                     v505,
                     2,
                     updated,
                     this,
                     (const MethodInfo_2F948BC *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
            *(_QWORD *)(v480 + 16) = v506;
            v507 = v480 + 16;
            sub_1B4CF34((CGThumbnailListItem_o *)(v480 + 16), (int32_t)v506, v508, v509);
            v510 = *(UnityEngine_Object_o **)(v480 + 16);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Equality(v510, 0LL, 0LL) )
              return;
            updated = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_37B4830 *)Method_SingletonTemplate_QuestTree__get_Instance__);
            if ( !*(_QWORD *)v507 || !updated )
              goto LABEL_1012;
            v511 = QuestTree__CheckMapGimmickCond_34548816(
                     (QuestTree_o *)updated,
                     *(MapControl_MapGimmickInfo_o **)(*(_QWORD *)v507 + 112LL),
                     0LL);
            v494 = *(MapGimmickComponent_o **)v507;
            v512 = v511;
            v495 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
            v497 = v495;
            if ( v512 )
            {
              v496 = &Method_QuestAfterAction_StateMain___c__DisplayClass16_15__UpdateAnim_b__20__;
LABEL_716:
              System_Action___ctor(v495, (Il2CppObject *)v480, *v496, 0LL);
              if ( !v494 )
                goto LABEL_1012;
              v513 = 3;
            }
            else
            {
              System_Action___ctor(
                v495,
                (Il2CppObject *)v480,
                Method_QuestAfterAction_StateMain___c__DisplayClass16_15__UpdateAnim_b__21__,
                0LL);
              if ( !v494 )
                goto LABEL_1012;
              v513 = 2;
            }
            v595 = v494;
            goto LABEL_960;
          case 409:
            updated = (__int64)v104->fields.param;
            if ( !updated )
              goto LABEL_1012;
            updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
            if ( !updated )
              goto LABEL_1012;
            v514 = *(_QWORD *)(updated + 24);
            v515 = updated;
            if ( v514 )
            {
              if ( !(_DWORD)v514 )
                goto LABEL_1013;
              v516 = System_Int32__Parse(*(System_String_o **)(updated + 32), 0LL);
              if ( *(int *)(v515 + 24) >= 2 )
              {
                v517 = System_Int32__Parse(*(System_String_o **)(v515 + 40), 0LL) > 0;
                goto LABEL_894;
              }
            }
            else
            {
              v516 = 0;
            }
            v517 = 0;
LABEL_894:
            updated = *v99;
            if ( !*v99 )
              goto LABEL_1012;
            v607 = QuestAfterAction__GetMapComponent_object_(
                     (QuestAfterAction_o *)updated,
                     2,
                     v516,
                     this,
                     (const MethodInfo_2F948BC *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            updated = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v607, 0LL, 0LL);
            if ( (updated & 1) == 0 )
            {
              if ( !v607 )
                goto LABEL_1012;
              LOBYTE(v607[6].monitor) = v517;
              BYTE1(v607[6].monitor) = 0;
              MapGimmickComponent__SetDispAnim((MapGimmickComponent_o *)v607, 1, 0LL);
              v608 = v607[7].klass;
              if ( !v608 )
                goto LABEL_1012;
              LODWORD(v608->_1.name) = 1;
              v609 = this->klass;
              this->fields.IsAnimDoing = 0;
              v610 = ((__int64 (__fastcall *)(QuestAfterAction_StateMain_o *, Il2CppMethodPointer))v609->vtable._11_get_CommandIndex.method)(
                       this,
                       v609->vtable._12_set_CommandIndex.methodPtr);
              ((void (__fastcall *)(QuestAfterAction_StateMain_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._12_set_CommandIndex.method)(
                this,
                (unsigned int)(v610 + 1),
                this->klass->vtable._13_UpdateAnim.methodPtr);
              goto LABEL_19;
            }
            return;
          case 410:
            updated = (__int64)v104->fields.param;
            if ( !updated )
              goto LABEL_1012;
            updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
            if ( !updated )
              goto LABEL_1012;
            v518 = updated;
            if ( *(int *)(updated + 24) <= 2 )
              goto LABEL_839;
            v519 = (QuestAfterAction_o *)*v99;
            updated = System_Int32__Parse(*(System_String_o **)(updated + 32), 0LL);
            if ( !v519 )
              goto LABEL_1012;
            v520 = QuestAfterAction__GetMapComponent_object_(
                     v519,
                     2,
                     updated,
                     this,
                     (const MethodInfo_2F948BC *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            updated = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v520, 0LL, 0LL);
            if ( (updated & 1) != 0 )
              return;
            if ( *(_DWORD *)(v518 + 24) <= 1u )
              goto LABEL_1013;
            v521 = (QuestAfterAction_o *)*v99;
            updated = System_Int32__Parse(*(System_String_o **)(v518 + 40), 0LL);
            if ( !v521 )
              goto LABEL_1012;
            v523 = updated;
            v524 = v521;
            v525 = 0;
            goto LABEL_758;
          case 411:
            updated = (__int64)v104->fields.param;
            if ( !updated )
              goto LABEL_1012;
            updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
            if ( !updated )
              goto LABEL_1012;
            v518 = updated;
            if ( *(int *)(updated + 24) <= 2 )
              goto LABEL_839;
            v526 = (QuestAfterAction_o *)*v99;
            updated = System_Int32__Parse(*(System_String_o **)(updated + 32), 0LL);
            if ( !v526 )
              goto LABEL_1012;
            v520 = QuestAfterAction__GetMapComponent_object_(
                     v526,
                     2,
                     updated,
                     this,
                     (const MethodInfo_2F948BC *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            updated = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v520, 0LL, 0LL);
            if ( (updated & 1) != 0 )
              return;
            if ( *(_DWORD *)(v518 + 24) <= 1u )
              goto LABEL_1013;
            v527 = (QuestAfterAction_o *)*v99;
            updated = System_Int32__Parse(*(System_String_o **)(v518 + 40), 0LL);
            if ( !v527 )
              goto LABEL_1012;
            MapGameObject = (UnityEngine_Object_o *)QuestAfterAction__GetMapGameObject(v527, 2, updated, this, v528);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Equality(MapGameObject, 0LL, 0LL) )
              return;
            *(UnityEngine_Vector3_o *)&v530 = GameObjectExtensions__GetLocalPosition(
                                                (UnityEngine_GameObject_o *)MapGameObject,
                                                0LL);
            if ( *(_DWORD *)(v518 + 24) <= 2u )
              goto LABEL_1013;
            x = v530;
            y = v531;
            z = v532;
            goto LABEL_772;
          case 412:
            updated = (__int64)v104->fields.param;
            if ( !updated )
              goto LABEL_1012;
            updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
            if ( !updated )
              goto LABEL_1012;
            v518 = updated;
            if ( *(int *)(updated + 24) <= 2 )
              goto LABEL_839;
            v536 = (QuestAfterAction_o *)*v99;
            updated = System_Int32__Parse(*(System_String_o **)(updated + 32), 0LL);
            if ( !v536 )
              goto LABEL_1012;
            v520 = QuestAfterAction__GetMapComponent_object_(
                     v536,
                     2,
                     updated,
                     this,
                     (const MethodInfo_2F948BC *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            updated = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v520, 0LL, 0LL);
            if ( (updated & 1) != 0 )
              return;
            if ( *(_DWORD *)(v518 + 24) <= 1u )
              goto LABEL_1013;
            v537 = (QuestAfterAction_o *)*v99;
            updated = System_Int32__Parse(*(System_String_o **)(v518 + 40), 0LL);
            if ( !v537 )
              goto LABEL_1012;
            v523 = updated;
            v525 = 1;
            v524 = v537;
LABEL_758:
            v538 = (UnityEngine_Object_o *)QuestAfterAction__GetMapGameObject(v524, v525, v523, this, v522);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Equality(v538, 0LL, 0LL) )
              return;
            LocalPosition = GameObjectExtensions__GetLocalPosition((UnityEngine_GameObject_o *)v538, 0LL);
            x = LocalPosition.fields.x;
            y = LocalPosition.fields.y;
            z = LocalPosition.fields.z;
            if ( !this->fields.IsMapModel )
              goto LABEL_771;
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            if ( !byte_49B5933 )
            {
              sub_1B4CF90(&TerminalSceneComponent_TypeInfo, v96);
              byte_49B5933 = 1;
            }
            updated = (__int64)TerminalSceneComponent_TypeInfo;
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
              updated = (__int64)TerminalSceneComponent_TypeInfo;
            }
            v539 = **(_QWORD **)(updated + 184);
            if ( !v539 )
              goto LABEL_1012;
            updated = *(_QWORD *)(v539 + 264);
            if ( !updated )
              goto LABEL_1012;
            v689.fields.x = x;
            v689.fields.y = y;
            v689.fields.z = z;
            v690 = ScrTerminalMap__ConvertLocalToScreenPosition((ScrTerminalMap_o *)updated, v689, 0LL);
            x = v690.fields.x;
            y = v690.fields.y;
            z = v690.fields.z;
LABEL_771:
            if ( *(_DWORD *)(v518 + 24) <= 2u )
              goto LABEL_1013;
LABEL_772:
            v540 = System_Single__Parse(*(System_String_o **)(v518 + 48), 0LL) * 0.001;
            if ( v540 >= 0.0 )
              v541 = v540;
            else
              v541 = 0.5;
            if ( *(_DWORD *)(v518 + 24) <= 3u )
              goto LABEL_1013;
            v542 = System_Int32__Parse(*(System_String_o **)(v518 + 56), 0LL);
            if ( *(int *)(v518 + 24) >= 5 )
            {
              updated = System_Int32__Parse(*(System_String_o **)(v518 + 64), 0LL);
              if ( (int)updated >= 1 )
              {
                if ( !v520 )
                  goto LABEL_1012;
                v691.fields.x = x;
                v691.fields.y = y;
                v691.fields.z = z;
                MapGimmickComponent__SetMoveAnim((MapGimmickComponent_o *)v520, v691, v541, v542, 0LL, 0LL);
                goto LABEL_18;
              }
            }
            v626 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
            System_Action___ctor(v626, (Il2CppObject *)this, (intptr_t)this->klass->vtable._15_onEnd.methodPtr, 0LL);
            if ( !v520 )
              goto LABEL_1012;
            v627 = (MapGimmickComponent_o *)v520;
            v628 = x;
            v629 = y;
            v630 = z;
            v631 = v541;
            v632 = v542;
            v633 = v626;
            goto LABEL_1003;
          default:
            if ( id != 500 )
              return;
            v353 = System_Int32__Parse(v104->fields.param, 0LL);
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            if ( !byte_49B7BCF )
            {
              sub_1B4CF90(&TerminalPramsManager_TypeInfo, v352);
              byte_49B7BCF = 1;
            }
            v354 = TerminalPramsManager_TypeInfo;
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
              v354 = TerminalPramsManager_TypeInfo;
            }
            v354->static_fields->_AfterActionFocusQuestId_k__BackingField = v353;
            if ( !DataManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
            updated = (__int64)DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_QuestMaster___);
            if ( !updated )
              goto LABEL_1012;
            if ( !DataMasterBase_object__object__int___TryGetEntity(
                    (DataMasterBase_TMaster__TEntity__PKType__o *)updated,
                    &entity,
                    v353,
                    (const MethodInfo_319D9E8 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__) )
              goto LABEL_839;
            updated = (__int64)entity;
            if ( !entity )
              goto LABEL_1012;
            v355 = (QuestAfterAction_o *)*v99;
            updated = QuestEntity__getSpotId((QuestEntity_o *)entity, 0LL);
            if ( !v355 )
              goto LABEL_1012;
            v356 = QuestAfterAction__GetMapComponent_object_(
                     v355,
                     0,
                     updated,
                     this,
                     (const MethodInfo_2F948BC *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            updated = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v356, 0LL, 0LL);
            if ( (updated & 1) == 0 )
              goto LABEL_839;
            if ( !v356 )
              goto LABEL_1012;
            SrcSpotBasePrefab__SelectSpot((SrcSpotBasePrefab_o *)v356, 0, 0LL);
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            if ( !byte_49B7BD0 )
            {
              sub_1B4CF90(&TerminalPramsManager_TypeInfo, v357);
              byte_49B7BD0 = 1;
            }
            v358 = TerminalPramsManager_TypeInfo;
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
              v358 = TerminalPramsManager_TypeInfo;
            }
            v358->static_fields->_IsBackQuestBoardDisable_k__BackingField = 1;
            goto LABEL_839;
        }
      }
      updated = (__int64)v104->fields.param;
      if ( !updated )
        goto LABEL_1012;
      updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
      if ( !updated )
        goto LABEL_1012;
      v155 = updated;
      if ( *(int *)(updated + 24) <= 4 )
        goto LABEL_839;
      v156 = System_Single__Parse(*(System_String_o **)(updated + 32), 0LL);
      if ( *(_DWORD *)(v155 + 24) <= 1u )
        goto LABEL_1013;
      v157 = v156;
      v158 = System_Single__Parse(*(System_String_o **)(v155 + 40), 0LL);
      if ( *(_DWORD *)(v155 + 24) <= 2u )
        goto LABEL_1013;
      v159 = v158;
      v160 = System_Single__Parse(*(System_String_o **)(v155 + 48), 0LL);
      if ( *(_DWORD *)(v155 + 24) <= 3u )
        goto LABEL_1013;
      v161 = v160;
      v162 = System_Single__Parse(*(System_String_o **)(v155 + 56), 0LL);
      if ( *(_DWORD *)(v155 + 24) <= 4u )
        goto LABEL_1013;
      v163 = v162;
      v164 = System_Int32__Parse(*(System_String_o **)(v155 + 64), 0LL);
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      if ( !byte_49B5933 )
      {
        sub_1B4CF90(&TerminalSceneComponent_TypeInfo, v96);
        byte_49B5933 = 1;
      }
      updated = (__int64)TerminalSceneComponent_TypeInfo;
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        updated = (__int64)TerminalSceneComponent_TypeInfo;
      }
      v165 = **(_QWORD **)(updated + 184);
      if ( !v165 )
        goto LABEL_1012;
      updated = *(_QWORD *)(v165 + 264);
      if ( !updated )
        goto LABEL_1012;
      v678.fields.y = v159;
      v678.fields.z = v161;
      v166 = v163 * 0.001;
      v678.fields.x = v157;
      *(UnityEngine_Vector3_o *)&v168 = ScrTerminalMap__ConvertLocalToScreenPosition(
                                          (ScrTerminalMap_o *)updated,
                                          v678,
                                          0LL);
      v171 = v168;
      v172 = v169;
      v173 = v170;
      if ( v104->fields.id != 352 || *(int *)(v155 + 24) < 6 )
      {
        if ( !*v99 )
          goto LABEL_1012;
        v174 = *(MapCamera_o **)(*v99 + 152);
        v175 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
        System_Action___ctor(
          v175,
          (Il2CppObject *)v94,
          Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__12__,
          0LL);
        if ( !v174 )
          goto LABEL_1012;
        v176 = v174;
        v177 = v171;
        v178 = v172;
        v179 = v173;
        v180 = v166;
        v181 = v164;
        goto LABEL_944;
      }
      if ( !*v99 )
        goto LABEL_1012;
      v359 = *(MapCamera_o **)(*v99 + 152);
      *(_QWORD *)&v671.fields.hasValue = &v659;
      *(_QWORD *)&v671.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
      *(_QWORD *)&v659.fields.hasValue = 0LL;
      *(_QWORD *)&v659.fields.value.fields.y = 0LL;
      System_Nullable_Vector3____ctor(v671, *(UnityEngine_Vector3_o *)&v168, v167);
      if ( *(_DWORD *)(v155 + 24) <= 5u )
        goto LABEL_1013;
      v360 = System_Single__Parse(*(System_String_o **)(v155 + 72), 0LL);
      p_size = (System_Nullable_float__o)&size;
      size = 0LL;
      System_Nullable_float____ctor(p_size, v360, (const MethodInfo_369BE50 *)Method_System_Nullable_float___ctor__);
      v361 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
      System_Action___ctor(
        v361,
        (Il2CppObject *)v94,
        Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__11__,
        0LL);
      if ( !v359 )
        goto LABEL_1012;
      v676 = v659;
      v669 = size;
      v362 = v359;
      v363 = v166;
      v364 = v164;
LABEL_985:
      MapCamera__StartAutoWork(v362, v363, v676, v669, v364, v361, 0LL);
      return;
    }
    if ( id <= 113 )
    {
      switch ( id )
      {
        case 'd':
          v143 = sub_1B4D1DC(QuestAfterAction_StateMain___c__DisplayClass16_1_TypeInfo);
          System_Object___ctor((Il2CppObject *)v143, 0LL);
          if ( !v143 )
            goto LABEL_1012;
          *(_QWORD *)(v143 + 24) = v94;
          sub_1B4CF34((CGThumbnailListItem_o *)(v143 + 24), v94, v144, v145);
          v146 = *(_QWORD *)(v143 + 24);
          if ( !v146 )
            goto LABEL_1012;
          v147 = *(QuestAfterAction_o **)(v146 + 24);
          updated = System_Int32__Parse(v104->fields.param, 0LL);
          if ( !v147 )
            goto LABEL_1012;
          v148 = QuestAfterAction__GetMapComponent_object_(
                   v147,
                   0,
                   updated,
                   this,
                   (const MethodInfo_2F948BC *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
          *(_QWORD *)(v143 + 16) = v148;
          sub_1B4CF34((CGThumbnailListItem_o *)(v143 + 16), (int32_t)v148, v149, v150);
          v151 = *(UnityEngine_Object_o **)(v143 + 16);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Equality(v151, 0LL, 0LL) )
            return;
          v152 = *(SrcSpotBasePrefab_o **)(v143 + 16);
          v153 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
          System_Action___ctor(
            v153,
            (Il2CppObject *)v143,
            Method_QuestAfterAction_StateMain___c__DisplayClass16_1__UpdateAnim_b__0__,
            0LL);
          if ( !v152 )
            goto LABEL_1012;
          v154 = 2;
          goto LABEL_397;
        case 'e':
          v306 = sub_1B4D1DC(QuestAfterAction_StateMain___c__DisplayClass16_2_TypeInfo);
          System_Object___ctor((Il2CppObject *)v306, 0LL);
          if ( !v306 )
            goto LABEL_1012;
          *(_QWORD *)(v306 + 24) = v94;
          sub_1B4CF34((CGThumbnailListItem_o *)(v306 + 24), v94, v307, v308);
          v309 = *(_QWORD *)(v306 + 24);
          if ( !v309 )
            goto LABEL_1012;
          v310 = *(QuestAfterAction_o **)(v309 + 24);
          updated = System_Int32__Parse(v104->fields.param, 0LL);
          if ( !v310 )
            goto LABEL_1012;
          v311 = QuestAfterAction__GetMapComponent_object_(
                   v310,
                   0,
                   updated,
                   this,
                   (const MethodInfo_2F948BC *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
          *(_QWORD *)(v306 + 16) = v311;
          sub_1B4CF34((CGThumbnailListItem_o *)(v306 + 16), (int32_t)v311, v312, v313);
          v314 = *(UnityEngine_Object_o **)(v306 + 16);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Equality(v314, 0LL, 0LL) )
            return;
          v152 = *(SrcSpotBasePrefab_o **)(v306 + 16);
          v153 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
          System_Action___ctor(
            v153,
            (Il2CppObject *)v306,
            Method_QuestAfterAction_StateMain___c__DisplayClass16_2__UpdateAnim_b__1__,
            0LL);
          if ( !v152 )
            goto LABEL_1012;
          v154 = 3;
LABEL_397:
          SrcSpotBasePrefab__SetState(v152, v154, v153, 0LL);
          return;
        case 'f':
          v315 = sub_1B4D1DC(QuestAfterAction_StateMain___c__DisplayClass16_3_TypeInfo);
          System_Object___ctor((Il2CppObject *)v315, 0LL);
          if ( !v315 )
            goto LABEL_1012;
          *(_QWORD *)(v315 + 24) = v94;
          v318 = v315 + 24;
          sub_1B4CF34((CGThumbnailListItem_o *)(v315 + 24), v94, v316, v317);
          if ( !*(_QWORD *)(v315 + 24) )
            goto LABEL_1012;
          v319 = *(QuestAfterAction_o **)(*(_QWORD *)(v315 + 24) + 24LL);
          updated = System_Int32__Parse(v104->fields.param, 0LL);
          if ( !v319 )
            goto LABEL_1012;
          v320 = QuestAfterAction__GetMapComponent_object_(
                   v319,
                   0,
                   updated,
                   this,
                   (const MethodInfo_2F948BC *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
          *(_QWORD *)(v315 + 16) = v320;
          v321 = (__int64 *)(v315 + 16);
          sub_1B4CF34((CGThumbnailListItem_o *)(v315 + 16), (int32_t)v320, v322, v323);
          v324 = *(UnityEngine_Object_o **)(v315 + 16);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Equality(v324, 0LL, 0LL) )
            return;
          v325 = *(SrcSpotBasePrefab_o **)(v315 + 16);
          v326 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
          System_Action___ctor(
            v326,
            (Il2CppObject *)v315,
            Method_QuestAfterAction_StateMain___c__DisplayClass16_3__UpdateAnim_b__2__,
            0LL);
          if ( !v325 )
            goto LABEL_1012;
          SrcSpotBasePrefab__SetState(v325, 4, v326, 0LL);
          if ( !*(_QWORD *)v318 )
            goto LABEL_1012;
          updated = *(_QWORD *)(*(_QWORD *)v318 + 24LL);
          if ( !updated )
            goto LABEL_1012;
          v329 = *v321;
          *(_QWORD *)(updated + 184) = *v321;
          v330 = (CGThumbnailListItem_o *)(updated + 184);
          goto LABEL_419;
        case 'g':
          updated = (__int64)v104->fields.param;
          if ( !updated )
            goto LABEL_1012;
          updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
          if ( !updated )
            goto LABEL_1012;
          v331 = updated;
          if ( *(int *)(updated + 24) <= 1 )
            goto LABEL_839;
          v332 = (QuestAfterAction_o *)*v99;
          updated = System_Int32__Parse(*(System_String_o **)(updated + 32), 0LL);
          if ( !v332 )
            goto LABEL_1012;
          v333 = QuestAfterAction__GetMapComponent_object_(
                   v332,
                   0,
                   updated,
                   this,
                   (const MethodInfo_2F948BC *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          updated = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v333, 0LL, 0LL);
          if ( (updated & 1) != 0 )
            return;
          if ( *(_DWORD *)(v331 + 24) <= 1u )
            goto LABEL_1013;
          updated = System_Int32__Parse(*(System_String_o **)(v331 + 40), 0LL);
          if ( !v333 )
            goto LABEL_1012;
          LODWORD(v333[14].klass) = updated;
          v334 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
          System_Action___ctor(v334, (Il2CppObject *)this, (intptr_t)this->klass->vtable._15_onEnd.methodPtr, 0LL);
          SrcSpotBasePrefab__SetState((SrcSpotBasePrefab_o *)v333, 5, v334, 0LL);
          updated = *v99;
          if ( !*v99 )
            goto LABEL_1012;
          *(_QWORD *)(updated + 184) = v333;
          v330 = (CGThumbnailListItem_o *)(updated + 184);
          LODWORD(v329) = (_DWORD)v333;
LABEL_419:
          sub_1B4CF34(v330, v329, v327, v328);
          return;
        case 'h':
        case 'i':
        case 'j':
        case 'k':
        case 'l':
        case 'm':
          return;
        case 'n':
          v335 = (QuestAfterAction_o *)*v99;
          updated = System_Int32__Parse(v104->fields.param, 0LL);
          if ( !v335 )
            goto LABEL_1012;
          v336 = QuestAfterAction__GetMapComponent_object_(
                   v335,
                   0,
                   updated,
                   this,
                   (const MethodInfo_2F948BC *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          updated = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v336, 0LL, 0LL);
          if ( (updated & 1) != 0 )
            return;
          if ( !v336 )
            goto LABEL_1012;
          SrcSpotBasePrefab__SetQaaScaleAnimQuick((SrcSpotBasePrefab_o *)v336, 0, 0LL);
          monitor = v336[14].monitor;
          if ( !monitor )
            goto LABEL_1012;
          monitor[5] = 0;
          v338 = (SrcSpotBasePrefab_o *)v336;
          v339 = 0;
          goto LABEL_442;
        case 'o':
          v340 = (QuestAfterAction_o *)*v99;
          updated = System_Int32__Parse(v104->fields.param, 0LL);
          if ( !v340 )
            goto LABEL_1012;
          v341 = QuestAfterAction__GetMapComponent_object_(
                   v340,
                   0,
                   updated,
                   this,
                   (const MethodInfo_2F948BC *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          updated = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v341, 0LL, 0LL);
          if ( (updated & 1) != 0 )
            return;
          if ( !v341 )
            goto LABEL_1012;
          SrcSpotBasePrefab__SetQaaScaleAnimQuick((SrcSpotBasePrefab_o *)v341, 1, 0LL);
          SrcSpotBasePrefab__SetQaaColorAnimQuick((SrcSpotBasePrefab_o *)v341, 0, 0LL);
          v342 = v341[14].monitor;
          if ( !v342 )
            goto LABEL_1012;
          v342[5] = 2;
          goto LABEL_441;
        case 'p':
          v343 = (QuestAfterAction_o *)*v99;
          updated = System_Int32__Parse(v104->fields.param, 0LL);
          if ( !v343 )
            goto LABEL_1012;
          v341 = QuestAfterAction__GetMapComponent_object_(
                   v343,
                   0,
                   updated,
                   this,
                   (const MethodInfo_2F948BC *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          updated = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v341, 0LL, 0LL);
          if ( (updated & 1) != 0 )
            return;
          if ( !v341 )
            goto LABEL_1012;
          SrcSpotBasePrefab__SetQaaScaleAnimQuick((SrcSpotBasePrefab_o *)v341, 1, 0LL);
          SrcSpotBasePrefab__SetQaaColorAnimQuick((SrcSpotBasePrefab_o *)v341, 1, 0LL);
          v344 = v341[14].monitor;
          if ( !v344 )
            goto LABEL_1012;
          v344[5] = 1;
LABEL_441:
          v339 = 1;
          v338 = (SrcSpotBasePrefab_o *)v341;
LABEL_442:
          SrcSpotBasePrefab__SetTouchType(v338, v339, 0LL);
          goto LABEL_18;
        case 'q':
          updated = (__int64)v104->fields.param;
          if ( !updated )
            goto LABEL_1012;
          updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
          if ( !updated )
            goto LABEL_1012;
          v345 = updated;
          if ( *(int *)(updated + 24) <= 1 )
            goto LABEL_839;
          v346 = (QuestAfterAction_o *)*v99;
          updated = System_Int32__Parse(*(System_String_o **)(updated + 32), 0LL);
          if ( !v346 )
            goto LABEL_1012;
          v347 = QuestAfterAction__GetMapComponent_object_(
                   v346,
                   0,
                   updated,
                   this,
                   (const MethodInfo_2F948BC *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          updated = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v347, 0LL, 0LL);
          if ( (updated & 1) != 0 )
            return;
          if ( *(_DWORD *)(v345 + 24) <= 1u )
            goto LABEL_1013;
          updated = System_Int32__Parse(*(System_String_o **)(v345 + 40), 0LL);
          if ( !v347 )
            goto LABEL_1012;
          LODWORD(v347[14].klass) = updated;
          SrcSpotBasePrefab__UpdateDisp((SrcSpotBasePrefab_o *)v347, 1, 0LL);
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
        updated = (__int64)v104->fields.param;
        if ( !updated )
          goto LABEL_1012;
        updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
        if ( !updated )
          goto LABEL_1012;
        v124 = *(_QWORD *)(updated + 24);
        v125 = updated;
        if ( (int)v124 <= 0 )
          goto LABEL_839;
        if ( (int)v124 > 2 )
        {
          v412 = System_Single__Parse(*(System_String_o **)(updated + 48), 0LL);
          v124 = *(_QWORD *)(v125 + 24);
          v126 = v412 * 0.001;
        }
        else
        {
          v126 = 0.5;
        }
        sec = v126;
        if ( (int)v124 >= 2 )
        {
          updated = System_Int32__Parse(*(System_String_o **)(v125 + 40), 0LL);
          v124 = *(_QWORD *)(v125 + 24);
          v289 = updated;
        }
        else
        {
          v289 = 15;
        }
        if ( !(_DWORD)v124 )
          goto LABEL_1013;
        v415 = (QuestAfterAction_o *)*v99;
        updated = System_Int32__Parse(*(System_String_o **)(v125 + 32), 0LL);
        if ( !v415 )
          goto LABEL_1012;
        v417 = (UnityEngine_Object_o *)QuestAfterAction__GetMapGameObject(v415, 0, updated, this, v416);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Equality(v417, 0LL, 0LL) )
          return;
        v680 = GameObjectExtensions__GetLocalPosition((UnityEngine_GameObject_o *)v417, 0LL);
        v418 = v680.fields.x;
        v419 = v680.fields.y;
        v420 = v680.fields.z;
        if ( !this->fields.IsMapModel )
          goto LABEL_591;
        if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        if ( !byte_49B5933 )
        {
          sub_1B4CF90(&TerminalSceneComponent_TypeInfo, v96);
          byte_49B5933 = 1;
        }
        updated = (__int64)TerminalSceneComponent_TypeInfo;
        if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          updated = (__int64)TerminalSceneComponent_TypeInfo;
        }
        v421 = **(_QWORD **)(updated + 184);
        if ( !v421 )
          goto LABEL_1012;
        updated = *(_QWORD *)(v421 + 264);
        if ( !updated )
          goto LABEL_1012;
        v681.fields.x = v418;
        v681.fields.y = v419;
        v681.fields.z = v420;
        v682 = ScrTerminalMap__ConvertLocalToScreenPosition((ScrTerminalMap_o *)updated, v681, 0LL);
        v418 = v682.fields.x;
        v419 = v682.fields.y;
        v420 = v682.fields.z;
LABEL_591:
        if ( !FSUtility_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
        updated = FSUtility__IsUnderVista(0LL);
        if ( (updated & 1) != 0 )
          goto LABEL_919;
        if ( !*(_DWORD *)(v125 + 24) )
          goto LABEL_1013;
        v423 = *(System_String_o **)(v125 + 32);
        updated = System_String__op_Equality(v423, (System_String_o *)StringLiteral_1325/*"10703"*/, 0LL);
        if ( (updated & 1) != 0 )
        {
          v419 = v419 + -50.0;
        }
        else
        {
          updated = System_String__op_Equality(v423, (System_String_o *)StringLiteral_1399/*"30101"*/, 0LL);
          if ( (updated & 1) != 0 )
            v419 = v419 + -50.0;
        }
LABEL_919:
        v438 = *(_DWORD *)(v125 + 24);
        if ( v104->fields.id == 305 )
        {
LABEL_920:
          if ( v438 < 4 )
            goto LABEL_921;
          if ( v438 == 4 )
          {
            if ( !*v99 )
              goto LABEL_1012;
            v615 = *(MapCamera_o **)(*v99 + 152);
          }
          else
          {
            updated = System_Int32__Parse(*(System_String_o **)(v125 + 64), 0LL);
            if ( !*v99 )
              goto LABEL_1012;
            v615 = *(MapCamera_o **)(*v99 + 152);
            if ( (int)updated >= 1 )
            {
              *(_QWORD *)&v672.fields.hasValue = &v659;
              v618 = v418;
              v619 = v419;
              *(_QWORD *)&v672.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
              v620 = v420;
              v659 = (System_Nullable_Vector3__o)0LL;
LABEL_976:
              System_Nullable_Vector3____ctor(v672, *(UnityEngine_Vector3_o *)&v618, v422);
              if ( *(_DWORD *)(v125 + 24) <= 3u )
                goto LABEL_1013;
              v636 = System_Single__Parse(*(System_String_o **)(v125 + 56), 0LL);
              v665 = (System_Nullable_float__o)&size;
              size = 0LL;
              System_Nullable_float____ctor(
                v665,
                v636,
                (const MethodInfo_369BE50 *)Method_System_Nullable_float___ctor__);
              if ( !v615 )
                goto LABEL_1012;
              v677 = v659;
              v670 = size;
              v637 = sec;
              v638 = v615;
              goto LABEL_979;
            }
          }
          *(_QWORD *)&v673.fields.hasValue = &v659;
          v621 = v418;
          v622 = v419;
          *(_QWORD *)&v673.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
          v623 = v420;
          v659 = (System_Nullable_Vector3__o)0LL;
LABEL_981:
          System_Nullable_Vector3____ctor(v673, *(UnityEngine_Vector3_o *)&v621, v422);
          if ( *(_DWORD *)(v125 + 24) <= 3u )
            goto LABEL_1013;
          v639 = System_Single__Parse(*(System_String_o **)(v125 + 56), 0LL);
          v666 = (System_Nullable_float__o)&size;
          size = 0LL;
          System_Nullable_float____ctor(v666, v639, (const MethodInfo_369BE50 *)Method_System_Nullable_float___ctor__);
          v361 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
          System_Action___ctor(v361, (Il2CppObject *)this, (intptr_t)this->klass->vtable._15_onEnd.methodPtr, 0LL);
          if ( !v615 )
            goto LABEL_1012;
          v676 = v659;
          v669 = size;
          v363 = sec;
          v362 = v615;
          goto LABEL_984;
        }
LABEL_632:
        if ( v438 < 4 )
        {
LABEL_921:
          if ( !*v99 )
            goto LABEL_1012;
          v440 = *(MapCamera_o **)(*v99 + 152);
          goto LABEL_923;
        }
        updated = System_Int32__Parse(*(System_String_o **)(v125 + 56), 0LL);
        v439 = *v99;
        if ( !*v99 )
          goto LABEL_1012;
        v440 = *(MapCamera_o **)(v439 + 152);
        if ( (int)updated < 1 )
        {
LABEL_923:
          v175 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
          System_Action___ctor(v175, (Il2CppObject *)this, (intptr_t)this->klass->vtable._15_onEnd.methodPtr, 0LL);
          if ( !v440 )
            goto LABEL_1012;
          v176 = v440;
          v177 = v418;
          v178 = v419;
          v179 = v420;
LABEL_942:
          v180 = sec;
LABEL_943:
          v181 = v289;
LABEL_944:
          MapCamera__StartAutoMove(v176, *(UnityEngine_Vector3_o *)&v177, v180, v181, v175, 0LL);
          return;
        }
        if ( !v440 )
          goto LABEL_1012;
        v441 = *(MapCamera_o **)(v439 + 152);
        v442 = v418;
        v443 = v419;
        v444 = v420;
        goto LABEL_953;
      case 301:
      case 306:
        updated = (__int64)v104->fields.param;
        if ( !updated )
          goto LABEL_1012;
        updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
        if ( !updated )
          goto LABEL_1012;
        v282 = *(_QWORD *)(updated + 24);
        v125 = updated;
        if ( (int)v282 <= 0 )
          goto LABEL_839;
        if ( (int)v282 > 2 )
        {
          v413 = System_Single__Parse(*(System_String_o **)(updated + 48), 0LL);
          v282 = *(_QWORD *)(v125 + 24);
          v283 = v413 * 0.001;
        }
        else
        {
          v283 = 0.5;
        }
        sec = v283;
        if ( (int)v282 >= 2 )
        {
          updated = System_Int32__Parse(*(System_String_o **)(v125 + 40), 0LL);
          v282 = *(_QWORD *)(v125 + 24);
          v289 = updated;
        }
        else
        {
          v289 = 15;
        }
        if ( !(_DWORD)v282 )
          goto LABEL_1013;
        v424 = (QuestAfterAction_o *)*v99;
        updated = System_Int32__Parse(*(System_String_o **)(v125 + 32), 0LL);
        if ( !v424 )
          goto LABEL_1012;
        v426 = (UnityEngine_Object_o *)QuestAfterAction__GetMapGameObject(v424, 1, updated, this, v425);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        updated = UnityEngine_Object__op_Equality(v426, 0LL, 0LL);
        if ( (updated & 1) != 0 )
          return;
        if ( this->fields.IsMapModel )
        {
          if ( !v426 )
            goto LABEL_1012;
          updated = (__int64)UnityEngine_GameObject__GetComponent_object_(
                               (UnityEngine_GameObject_o *)v426,
                               (const MethodInfo_2F53444 *)Method_UnityEngine_GameObject_GetComponent_ModelLineComponent___);
          if ( !updated )
            goto LABEL_1012;
          Position = GameObjectExtensions__GetPosition((UnityEngine_GameObject_o *)*(_QWORD *)(updated + 32), 0LL);
          v427 = Position.fields.x;
          v428 = Position.fields.y;
          v429 = Position.fields.z;
          if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          if ( !byte_49B5933 )
          {
            sub_1B4CF90(&TerminalSceneComponent_TypeInfo, v96);
            byte_49B5933 = 1;
          }
          updated = (__int64)TerminalSceneComponent_TypeInfo;
          if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            updated = (__int64)TerminalSceneComponent_TypeInfo;
          }
          v430 = **(_QWORD **)(updated + 184);
          if ( !v430 )
            goto LABEL_1012;
          updated = *(_QWORD *)(v430 + 264);
          if ( !updated )
            goto LABEL_1012;
          v684.fields.x = v427;
          v684.fields.y = v428;
          v684.fields.z = v429;
          *(UnityEngine_Vector3_o *)&v431 = ScrTerminalMap__ConvertWorldToScreenPosition(
                                              (ScrTerminalMap_o *)updated,
                                              v684,
                                              0LL);
        }
        else
        {
          *(UnityEngine_Vector3_o *)&v431 = GameObjectExtensions__GetLocalPosition(
                                              (UnityEngine_GameObject_o *)v426,
                                              0LL);
        }
        v584 = v431;
        v585 = v432;
        v586 = v433;
        if ( !FSUtility_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
        updated = FSUtility__IsUnderVista(0LL);
        if ( (updated & 1) != 0 )
          goto LABEL_931;
        if ( !*(_DWORD *)(v125 + 24) )
          goto LABEL_1013;
        v587 = *(System_String_o **)(v125 + 32);
        updated = System_String__op_Equality(v587, (System_String_o *)StringLiteral_1325/*"10703"*/, 0LL);
        if ( (updated & 1) != 0 )
        {
          v585 = v585 + -95.0;
        }
        else
        {
          updated = System_String__op_Equality(v587, (System_String_o *)StringLiteral_1400/*"30102"*/, 0LL);
          if ( (updated & 1) != 0 )
            v585 = v585 + 45.0;
        }
LABEL_931:
        v616 = *(_DWORD *)(v125 + 24);
        if ( v104->fields.id == 306 )
        {
          if ( v616 >= 4 )
          {
            if ( v616 == 4 )
            {
              if ( !*v99 )
                goto LABEL_1012;
              v615 = *(MapCamera_o **)(*v99 + 152);
            }
            else
            {
              updated = System_Int32__Parse(*(System_String_o **)(v125 + 64), 0LL);
              if ( !*v99 )
                goto LABEL_1012;
              v615 = *(MapCamera_o **)(*v99 + 152);
              if ( (int)updated >= 1 )
              {
                v659 = (System_Nullable_Vector3__o)0LL;
                *(_QWORD *)&v672.fields.hasValue = &v659;
                v618 = v584;
                *(_QWORD *)&v672.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
                v619 = v585;
                v620 = v586;
                goto LABEL_976;
              }
            }
            v659 = (System_Nullable_Vector3__o)0LL;
            *(_QWORD *)&v673.fields.hasValue = &v659;
            v621 = v584;
            *(_QWORD *)&v673.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
            v622 = v585;
            v623 = v586;
            goto LABEL_981;
          }
          goto LABEL_938;
        }
        if ( v616 < 4 )
        {
LABEL_938:
          if ( !*v99 )
            goto LABEL_1012;
          v617 = *(MapCamera_o **)(*v99 + 152);
LABEL_940:
          v175 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
          System_Action___ctor(v175, (Il2CppObject *)this, (intptr_t)this->klass->vtable._15_onEnd.methodPtr, 0LL);
          if ( !v617 )
            goto LABEL_1012;
          v176 = v617;
          v177 = v584;
          v178 = v585;
          v179 = v586;
          goto LABEL_942;
        }
        updated = System_Int32__Parse(*(System_String_o **)(v125 + 56), 0LL);
        v624 = *v99;
        if ( !*v99 )
          goto LABEL_1012;
        v617 = *(MapCamera_o **)(v624 + 152);
        if ( (int)updated < 1 )
          goto LABEL_940;
        if ( !v617 )
          goto LABEL_1012;
        v441 = *(MapCamera_o **)(v624 + 152);
        v442 = v584;
        v443 = v585;
        v444 = v586;
LABEL_953:
        v625 = sec;
        goto LABEL_954;
      case 302:
      case 307:
        updated = (__int64)v104->fields.param;
        if ( !updated )
          goto LABEL_1012;
        updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
        if ( !updated )
          goto LABEL_1012;
        v284 = *(_QWORD *)(updated + 24);
        v125 = updated;
        if ( (int)v284 <= 0 )
          goto LABEL_839;
        if ( (int)v284 > 2 )
        {
          v414 = System_Single__Parse(*(System_String_o **)(updated + 48), 0LL);
          v284 = *(_QWORD *)(v125 + 24);
          v285 = v414 * 0.001;
        }
        else
        {
          v285 = 0.5;
        }
        sec = v285;
        if ( (int)v284 >= 2 )
        {
          updated = System_Int32__Parse(*(System_String_o **)(v125 + 40), 0LL);
          v284 = *(_QWORD *)(v125 + 24);
          v289 = updated;
        }
        else
        {
          v289 = 15;
        }
        if ( !(_DWORD)v284 )
          goto LABEL_1013;
        v434 = (QuestAfterAction_o *)*v99;
        updated = System_Int32__Parse(*(System_String_o **)(v125 + 32), 0LL);
        if ( !v434 )
          goto LABEL_1012;
        v436 = (UnityEngine_Object_o *)QuestAfterAction__GetMapGameObject(v434, 2, updated, this, v435);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Equality(v436, 0LL, 0LL) )
          return;
        v685 = GameObjectExtensions__GetLocalPosition((UnityEngine_GameObject_o *)v436, 0LL);
        v418 = v685.fields.x;
        v419 = v685.fields.y;
        v420 = v685.fields.z;
        if ( !this->fields.IsMapModel )
          goto LABEL_631;
        if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        if ( !byte_49B5933 )
        {
          sub_1B4CF90(&TerminalSceneComponent_TypeInfo, v96);
          byte_49B5933 = 1;
        }
        updated = (__int64)TerminalSceneComponent_TypeInfo;
        if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          updated = (__int64)TerminalSceneComponent_TypeInfo;
        }
        v437 = **(_QWORD **)(updated + 184);
        if ( !v437 )
          goto LABEL_1012;
        updated = *(_QWORD *)(v437 + 264);
        if ( !updated )
          goto LABEL_1012;
        v686.fields.x = v418;
        v686.fields.y = v419;
        v686.fields.z = v420;
        v687 = ScrTerminalMap__ConvertLocalToScreenPosition((ScrTerminalMap_o *)updated, v686, 0LL);
        v418 = v687.fields.x;
        v419 = v687.fields.y;
        v420 = v687.fields.z;
LABEL_631:
        v438 = *(_DWORD *)(v125 + 24);
        if ( v104->fields.id != 307 )
          goto LABEL_632;
        goto LABEL_920;
      case 303:
      case 308:
        updated = (__int64)v104->fields.param;
        if ( !updated )
          goto LABEL_1012;
        updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
        if ( !updated )
          goto LABEL_1012;
        v286 = updated;
        if ( *(int *)(updated + 24) < 4 )
          goto LABEL_839;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_49B7BCE )
        {
          sub_1B4CF90(&TerminalPramsManager_TypeInfo, v96);
          byte_49B7BCE = 1;
        }
        updated = (__int64)TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          updated = (__int64)TerminalPramsManager_TypeInfo;
        }
        if ( *(_BYTE *)(*(_QWORD *)(updated + 184) + 105LL) )
          goto LABEL_839;
        if ( *(_DWORD *)(v286 + 24) <= 2u )
          goto LABEL_1013;
        v287 = System_Single__Parse(*(System_String_o **)(v286 + 48), 0LL) * 0.001;
        v288 = v287 >= 0.0 ? v287 : 0.5;
        if ( *(_DWORD *)(v286 + 24) <= 3u )
          goto LABEL_1013;
        v289 = System_Int32__Parse(*(System_String_o **)(v286 + 56), 0LL);
        if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        if ( !byte_49B5933 )
        {
          sub_1B4CF90(&TerminalSceneComponent_TypeInfo, v96);
          byte_49B5933 = 1;
        }
        updated = (__int64)TerminalSceneComponent_TypeInfo;
        if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          updated = (__int64)TerminalSceneComponent_TypeInfo;
        }
        v290 = **(_QWORD **)(updated + 184);
        if ( !v290 )
          goto LABEL_1012;
        if ( !*(_DWORD *)(v286 + 24) )
          goto LABEL_1013;
        v291 = *(ScrTerminalMap_o **)(v290 + 264);
        v292 = System_Single__Parse(*(System_String_o **)(v286 + 32), 0LL);
        if ( *(_DWORD *)(v286 + 24) <= 1u )
          goto LABEL_1013;
        v293 = v292;
        v294 = System_Single__Parse(*(System_String_o **)(v286 + 40), 0LL);
        if ( !v291 )
          goto LABEL_1012;
        v679 = ScrTerminalMap__LocalPosFromCoord(v291, v293, v294, 0.0, 0.0, 0LL);
        v296 = *(_DWORD *)(v286 + 24);
        v297 = v679.fields.x;
        v298 = v679.fields.y;
        v299 = v679.fields.z;
        if ( v104->fields.id == 308 )
        {
          if ( v296 >= 5 )
          {
            if ( v296 == 5 )
            {
              if ( !*v99 )
                goto LABEL_1012;
              v300 = *(MapCamera_o **)(*v99 + 152);
            }
            else
            {
              updated = System_Int32__Parse(*(System_String_o **)(v286 + 72), 0LL);
              if ( !*v99 )
                goto LABEL_1012;
              v300 = *(MapCamera_o **)(*v99 + 152);
              if ( (int)updated >= 1 )
              {
                *(_QWORD *)&v674.fields.hasValue = &v659;
                v693.fields.x = v297;
                v693.fields.y = v298;
                *(_QWORD *)&v674.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
                v693.fields.z = v299;
                v659 = (System_Nullable_Vector3__o)0LL;
                System_Nullable_Vector3____ctor(v674, v693, v295);
                if ( *(_DWORD *)(v286 + 24) <= 4u )
                  goto LABEL_1013;
                v654 = System_Single__Parse(*(System_String_o **)(v286 + 64), 0LL);
                v667 = (System_Nullable_float__o)&size;
                size = 0LL;
                System_Nullable_float____ctor(
                  v667,
                  v654,
                  (const MethodInfo_369BE50 *)Method_System_Nullable_float___ctor__);
                if ( !v300 )
                  goto LABEL_1012;
                v677 = v659;
                v670 = size;
                v638 = v300;
                v637 = v288;
LABEL_979:
                MapCamera__StartAutoWork(v638, v637, v677, v670, v289, 0LL, 0LL);
                goto LABEL_839;
              }
            }
            *(_QWORD *)&v675.fields.hasValue = &v659;
            v694.fields.x = v297;
            v694.fields.y = v298;
            *(_QWORD *)&v675.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
            v694.fields.z = v299;
            v659 = (System_Nullable_Vector3__o)0LL;
            System_Nullable_Vector3____ctor(v675, v694, v295);
            if ( *(_DWORD *)(v286 + 24) <= 4u )
              goto LABEL_1013;
            v655 = System_Single__Parse(*(System_String_o **)(v286 + 64), 0LL);
            v668 = (System_Nullable_float__o)&size;
            size = 0LL;
            System_Nullable_float____ctor(v668, v655, (const MethodInfo_369BE50 *)Method_System_Nullable_float___ctor__);
            v361 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
            System_Action___ctor(v361, (Il2CppObject *)this, (intptr_t)this->klass->vtable._15_onEnd.methodPtr, 0LL);
            if ( !v300 )
              goto LABEL_1012;
            v676 = v659;
            v669 = size;
            v362 = v300;
            v363 = v288;
LABEL_984:
            v364 = v289;
            goto LABEL_985;
          }
        }
        else if ( v296 >= 5 )
        {
          updated = System_Int32__Parse(*(System_String_o **)(v286 + 64), 0LL);
          v635 = *v99;
          if ( !*v99 )
            goto LABEL_1012;
          v614 = *(MapCamera_o **)(v635 + 152);
          if ( (int)updated >= 1 )
          {
            if ( !v614 )
              goto LABEL_1012;
            v441 = *(MapCamera_o **)(v635 + 152);
            v442 = v297;
            v443 = v298;
            v444 = v299;
            v625 = v288;
LABEL_954:
            MapCamera__StartAutoMove(v441, *(UnityEngine_Vector3_o *)&v442, v625, v289, 0LL, 0LL);
            goto LABEL_839;
          }
LABEL_915:
          v175 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
          System_Action___ctor(v175, (Il2CppObject *)this, (intptr_t)this->klass->vtable._15_onEnd.methodPtr, 0LL);
          if ( !v614 )
            goto LABEL_1012;
          v176 = v614;
          v177 = v297;
          v178 = v298;
          v179 = v299;
          v180 = v288;
          goto LABEL_943;
        }
        if ( !*v99 )
          goto LABEL_1012;
        v614 = *(MapCamera_o **)(*v99 + 152);
        goto LABEL_915;
      case 304:
        updated = (__int64)v104->fields.param;
        if ( !updated )
          goto LABEL_1012;
        updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
        if ( !updated )
          goto LABEL_1012;
        v365 = *(_DWORD *)(updated + 24);
        v366 = updated;
        if ( v365 <= 1 )
          goto LABEL_839;
        v367 = System_Single__Parse(*(System_String_o **)(updated + 32), 0LL);
        if ( *(_DWORD *)(v366 + 24) <= 1u )
          goto LABEL_1013;
        v368 = v367;
        v369 = System_Single__Parse(*(System_String_o **)(v366 + 40), 0LL);
        if ( !*v99 )
          goto LABEL_1012;
        v370 = *(MapCamera_o **)(*v99 + 152);
        v371 = v369 * 0.001;
        if ( v371 >= 0.0 )
          v372 = v371;
        else
          v372 = 0.5;
        if ( v365 < 3 )
        {
          v373 = 5;
        }
        else
        {
          if ( *(_DWORD *)(v366 + 24) <= 2u )
            goto LABEL_1013;
          v373 = System_Int32__Parse(*(System_String_o **)(v366 + 48), 0LL);
        }
        v583 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
        System_Action___ctor(
          v583,
          (Il2CppObject *)v94,
          Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__9__,
          0LL);
        if ( !v370 )
          goto LABEL_1012;
        MapCamera__StartAutoZoom(v370, v368, v372, v373, v583, 0LL);
        return;
      default:
        switch ( id )
        {
          case 200:
            if ( this->fields.IsMapModel )
            {
              v182 = sub_1B4D1DC(QuestAfterAction_StateMain___c__DisplayClass16_4_TypeInfo);
              System_Object___ctor((Il2CppObject *)v182, 0LL);
              if ( !v182 )
                goto LABEL_1012;
              *(_QWORD *)(v182 + 24) = v94;
              sub_1B4CF34((CGThumbnailListItem_o *)(v182 + 24), v94, v183, v184);
              v185 = *(_QWORD *)(v182 + 24);
              if ( !v185 )
                goto LABEL_1012;
              v186 = *(QuestAfterAction_o **)(v185 + 24);
              updated = System_Int32__Parse(v104->fields.param, 0LL);
              if ( !v186 )
                goto LABEL_1012;
              v187 = QuestAfterAction__GetMapComponent_object_(
                       v186,
                       1,
                       updated,
                       this,
                       (const MethodInfo_2F948BC *)Method_QuestAfterAction_GetMapComponent_ModelLineComponent___);
              *(_QWORD *)(v182 + 16) = v187;
              sub_1B4CF34((CGThumbnailListItem_o *)(v182 + 16), (int32_t)v187, v188, v189);
              v190 = *(UnityEngine_Object_o **)(v182 + 16);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              if ( !UnityEngine_Object__op_Equality(v190, 0LL, 0LL) )
              {
                v191 = *(ModelLineComponent_o **)(v182 + 16);
                v192 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
                System_Action___ctor(
                  v192,
                  (Il2CppObject *)v182,
                  Method_QuestAfterAction_StateMain___c__DisplayClass16_4__UpdateAnim_b__3__,
                  0LL);
                if ( !v191 )
                  goto LABEL_1012;
                v194 = 2;
                goto LABEL_530;
              }
            }
            else
            {
              v544 = sub_1B4D1DC(QuestAfterAction_StateMain___c__DisplayClass16_5_TypeInfo);
              System_Object___ctor((Il2CppObject *)v544, 0LL);
              if ( !v544 )
                goto LABEL_1012;
              *(_QWORD *)(v544 + 24) = v94;
              sub_1B4CF34((CGThumbnailListItem_o *)(v544 + 24), v94, v545, v546);
              v547 = *(_QWORD *)(v544 + 24);
              if ( !v547 )
                goto LABEL_1012;
              v548 = *(QuestAfterAction_o **)(v547 + 24);
              updated = System_Int32__Parse(v104->fields.param, 0LL);
              if ( !v548 )
                goto LABEL_1012;
              v549 = QuestAfterAction__GetMapComponent_object_(
                       v548,
                       1,
                       updated,
                       this,
                       (const MethodInfo_2F948BC *)Method_QuestAfterAction_GetMapComponent_srcLineSprite___);
              *(_QWORD *)(v544 + 16) = v549;
              sub_1B4CF34((CGThumbnailListItem_o *)(v544 + 16), (int32_t)v549, v550, v551);
              v552 = *(UnityEngine_Object_o **)(v544 + 16);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              if ( !UnityEngine_Object__op_Equality(v552, 0LL, 0LL) )
              {
                v553 = *(srcLineSprite_o **)(v544 + 16);
                v554 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
                System_Action___ctor(
                  v554,
                  (Il2CppObject *)v544,
                  Method_QuestAfterAction_StateMain___c__DisplayClass16_5__UpdateAnim_b__4__,
                  0LL);
                if ( !v553 )
                  goto LABEL_1012;
                v555 = 2;
                goto LABEL_808;
              }
            }
            return;
          case 201:
            if ( this->fields.IsMapModel )
            {
              v374 = sub_1B4D1DC(QuestAfterAction_StateMain___c__DisplayClass16_6_TypeInfo);
              System_Object___ctor((Il2CppObject *)v374, 0LL);
              if ( !v374 )
                goto LABEL_1012;
              *(_QWORD *)(v374 + 24) = v94;
              sub_1B4CF34((CGThumbnailListItem_o *)(v374 + 24), v94, v375, v376);
              v377 = *(_QWORD *)(v374 + 24);
              if ( !v377 )
                goto LABEL_1012;
              v378 = *(QuestAfterAction_o **)(v377 + 24);
              updated = System_Int32__Parse(v104->fields.param, 0LL);
              if ( !v378 )
                goto LABEL_1012;
              v379 = QuestAfterAction__GetMapComponent_object_(
                       v378,
                       1,
                       updated,
                       this,
                       (const MethodInfo_2F948BC *)Method_QuestAfterAction_GetMapComponent_ModelLineComponent___);
              *(_QWORD *)(v374 + 16) = v379;
              sub_1B4CF34((CGThumbnailListItem_o *)(v374 + 16), (int32_t)v379, v380, v381);
              v382 = *(UnityEngine_Object_o **)(v374 + 16);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              if ( !UnityEngine_Object__op_Equality(v382, 0LL, 0LL) )
              {
                v191 = *(ModelLineComponent_o **)(v374 + 16);
                v192 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
                System_Action___ctor(
                  v192,
                  (Il2CppObject *)v374,
                  Method_QuestAfterAction_StateMain___c__DisplayClass16_6__UpdateAnim_b__5__,
                  0LL);
                if ( !v191 )
                  goto LABEL_1012;
                v194 = 3;
                goto LABEL_530;
              }
            }
            else
            {
              v556 = sub_1B4D1DC(QuestAfterAction_StateMain___c__DisplayClass16_7_TypeInfo);
              System_Object___ctor((Il2CppObject *)v556, 0LL);
              if ( !v556 )
                goto LABEL_1012;
              *(_QWORD *)(v556 + 24) = v94;
              sub_1B4CF34((CGThumbnailListItem_o *)(v556 + 24), v94, v557, v558);
              v559 = *(_QWORD *)(v556 + 24);
              if ( !v559 )
                goto LABEL_1012;
              v560 = *(QuestAfterAction_o **)(v559 + 24);
              updated = System_Int32__Parse(v104->fields.param, 0LL);
              if ( !v560 )
                goto LABEL_1012;
              v561 = QuestAfterAction__GetMapComponent_object_(
                       v560,
                       1,
                       updated,
                       this,
                       (const MethodInfo_2F948BC *)Method_QuestAfterAction_GetMapComponent_srcLineSprite___);
              *(_QWORD *)(v556 + 16) = v561;
              sub_1B4CF34((CGThumbnailListItem_o *)(v556 + 16), (int32_t)v561, v562, v563);
              v564 = *(UnityEngine_Object_o **)(v556 + 16);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              if ( !UnityEngine_Object__op_Equality(v564, 0LL, 0LL) )
              {
                v553 = *(srcLineSprite_o **)(v556 + 16);
                v554 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
                System_Action___ctor(
                  v554,
                  (Il2CppObject *)v556,
                  Method_QuestAfterAction_StateMain___c__DisplayClass16_7__UpdateAnim_b__6__,
                  0LL);
                if ( !v553 )
                  goto LABEL_1012;
                v555 = 3;
                goto LABEL_808;
              }
            }
            return;
          case 202:
            if ( this->fields.IsMapModel )
            {
              v383 = sub_1B4D1DC(QuestAfterAction_StateMain___c__DisplayClass16_8_TypeInfo);
              System_Object___ctor((Il2CppObject *)v383, 0LL);
              if ( !v383 )
                goto LABEL_1012;
              *(_QWORD *)(v383 + 24) = v94;
              sub_1B4CF34((CGThumbnailListItem_o *)(v383 + 24), v94, v384, v385);
              v386 = *(_QWORD *)(v383 + 24);
              if ( !v386 )
                goto LABEL_1012;
              v387 = *(QuestAfterAction_o **)(v386 + 24);
              updated = System_Int32__Parse(v104->fields.param, 0LL);
              if ( !v387 )
                goto LABEL_1012;
              v388 = QuestAfterAction__GetMapComponent_object_(
                       v387,
                       1,
                       updated,
                       this,
                       (const MethodInfo_2F948BC *)Method_QuestAfterAction_GetMapComponent_ModelLineComponent___);
              *(_QWORD *)(v383 + 16) = v388;
              sub_1B4CF34((CGThumbnailListItem_o *)(v383 + 16), (int32_t)v388, v389, v390);
              v391 = *(UnityEngine_Object_o **)(v383 + 16);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              if ( !UnityEngine_Object__op_Equality(v391, 0LL, 0LL) )
              {
                v191 = *(ModelLineComponent_o **)(v383 + 16);
                v192 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
                System_Action___ctor(
                  v192,
                  (Il2CppObject *)v383,
                  Method_QuestAfterAction_StateMain___c__DisplayClass16_8__UpdateAnim_b__7__,
                  0LL);
                if ( !v191 )
                  goto LABEL_1012;
                v194 = 4;
LABEL_530:
                ModelLineComponent__SetState(v191, v194, v192, v193);
              }
            }
            else
            {
              v565 = sub_1B4D1DC(QuestAfterAction_StateMain___c__DisplayClass16_9_TypeInfo);
              System_Object___ctor((Il2CppObject *)v565, 0LL);
              if ( !v565 )
                goto LABEL_1012;
              *(_QWORD *)(v565 + 24) = v94;
              sub_1B4CF34((CGThumbnailListItem_o *)(v565 + 24), v94, v566, v567);
              v568 = *(_QWORD *)(v565 + 24);
              if ( !v568 )
                goto LABEL_1012;
              v569 = *(QuestAfterAction_o **)(v568 + 24);
              updated = System_Int32__Parse(v104->fields.param, 0LL);
              if ( !v569 )
                goto LABEL_1012;
              v570 = QuestAfterAction__GetMapComponent_object_(
                       v569,
                       1,
                       updated,
                       this,
                       (const MethodInfo_2F948BC *)Method_QuestAfterAction_GetMapComponent_srcLineSprite___);
              *(_QWORD *)(v565 + 16) = v570;
              sub_1B4CF34((CGThumbnailListItem_o *)(v565 + 16), (int32_t)v570, v571, v572);
              v573 = *(UnityEngine_Object_o **)(v565 + 16);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              if ( !UnityEngine_Object__op_Equality(v573, 0LL, 0LL) )
              {
                v553 = *(srcLineSprite_o **)(v565 + 16);
                v554 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
                System_Action___ctor(
                  v554,
                  (Il2CppObject *)v565,
                  Method_QuestAfterAction_StateMain___c__DisplayClass16_9__UpdateAnim_b__8__,
                  0LL);
                if ( !v553 )
                  goto LABEL_1012;
                v555 = 4;
LABEL_808:
                srcLineSprite__SetState(v553, v555, v554, 0LL);
              }
            }
            return;
          case 203:
            IsMapModel = this->fields.IsMapModel;
            v393 = (QuestAfterAction_o *)*v99;
            updated = System_Int32__Parse(v104->fields.param, 0LL);
            if ( !v393 )
              goto LABEL_1012;
            if ( IsMapModel )
            {
              v394 = (UnityEngine_Object_o *)QuestAfterAction__GetMapComponent_object_(
                                               v393,
                                               1,
                                               updated,
                                               this,
                                               (const MethodInfo_2F948BC *)Method_QuestAfterAction_GetMapComponent_ModelLineComponent___);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              updated = UnityEngine_Object__op_Equality(v394, 0LL, 0LL);
              if ( (updated & 1) != 0 )
                return;
              if ( !v394 )
                goto LABEL_1012;
              ModelLineComponent__SetQuestAfterActionScaleAnim_34160628((ModelLineComponent_o *)v394, 0, 0.0, v395);
              v396 = v394[3].klass;
              if ( !v396 )
                goto LABEL_1012;
            }
            else
            {
              v574 = (UnityEngine_Object_o *)QuestAfterAction__GetMapComponent_object_(
                                               v393,
                                               1,
                                               updated,
                                               this,
                                               (const MethodInfo_2F948BC *)Method_QuestAfterAction_GetMapComponent_srcLineSprite___);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              updated = UnityEngine_Object__op_Equality(v574, 0LL, 0LL);
              if ( (updated & 1) != 0 )
                return;
              if ( !v574 )
                goto LABEL_1012;
              srcLineSprite__SetQaaScaleAnimQuick((srcLineSprite_o *)v574, 0, 0LL);
              v396 = v574[5].monitor;
              if ( !v396 )
                goto LABEL_1012;
            }
            goto LABEL_882;
          case 204:
            v397 = this->fields.IsMapModel;
            v398 = (QuestAfterAction_o *)*v99;
            updated = System_Int32__Parse(v104->fields.param, 0LL);
            if ( !v398 )
              goto LABEL_1012;
            if ( v397 )
            {
              v399 = (UnityEngine_Object_o *)QuestAfterAction__GetMapComponent_object_(
                                               v398,
                                               1,
                                               updated,
                                               this,
                                               (const MethodInfo_2F948BC *)Method_QuestAfterAction_GetMapComponent_ModelLineComponent___);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              updated = UnityEngine_Object__op_Equality(v399, 0LL, 0LL);
              if ( (updated & 1) != 0 )
                return;
              if ( !v399 )
                goto LABEL_1012;
              ModelLineComponent__SetQuestAfterActionScaleAnim_34160628((ModelLineComponent_o *)v399, 1, 0.0, v400);
              ModelLineComponent__SetQuestAfterActionColorAnim_34161104((ModelLineComponent_o *)v399, 0, 0.0, v401);
              v402 = v399[3].klass;
              if ( !v402 )
                goto LABEL_1012;
            }
            else
            {
              v575 = (UnityEngine_Object_o *)QuestAfterAction__GetMapComponent_object_(
                                               v398,
                                               1,
                                               updated,
                                               this,
                                               (const MethodInfo_2F948BC *)Method_QuestAfterAction_GetMapComponent_srcLineSprite___);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              updated = UnityEngine_Object__op_Equality(v575, 0LL, 0LL);
              if ( (updated & 1) != 0 )
                return;
              if ( !v575 )
                goto LABEL_1012;
              srcLineSprite__SetQaaScaleAnimQuick((srcLineSprite_o *)v575, 1, 0LL);
              srcLineSprite__SetQaaColorAnimQuick((srcLineSprite_o *)v575, 0, 0LL);
              v402 = v575[5].monitor;
              if ( !v402 )
                goto LABEL_1012;
            }
            v576 = 2;
            goto LABEL_827;
          case 205:
            v403 = this->fields.IsMapModel;
            v404 = (QuestAfterAction_o *)*v99;
            updated = System_Int32__Parse(v104->fields.param, 0LL);
            if ( !v404 )
              goto LABEL_1012;
            if ( v403 )
            {
              v405 = (UnityEngine_Object_o *)QuestAfterAction__GetMapComponent_object_(
                                               v404,
                                               1,
                                               updated,
                                               this,
                                               (const MethodInfo_2F948BC *)Method_QuestAfterAction_GetMapComponent_ModelLineComponent___);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              updated = UnityEngine_Object__op_Equality(v405, 0LL, 0LL);
              if ( (updated & 1) != 0 )
                return;
              if ( !v405 )
                goto LABEL_1012;
              ModelLineComponent__SetQuestAfterActionScaleAnim_34160628((ModelLineComponent_o *)v405, 1, 0.0, v406);
              ModelLineComponent__SetQuestAfterActionColorAnim_34161104((ModelLineComponent_o *)v405, 1, 0.0, v407);
              v402 = v405[3].klass;
              if ( !v402 )
                goto LABEL_1012;
            }
            else
            {
              v577 = (UnityEngine_Object_o *)QuestAfterAction__GetMapComponent_object_(
                                               v404,
                                               1,
                                               updated,
                                               this,
                                               (const MethodInfo_2F948BC *)Method_QuestAfterAction_GetMapComponent_srcLineSprite___);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              updated = UnityEngine_Object__op_Equality(v577, 0LL, 0LL);
              if ( (updated & 1) != 0 )
                return;
              if ( !v577 )
                goto LABEL_1012;
              srcLineSprite__SetQaaScaleAnimQuick((srcLineSprite_o *)v577, 1, 0LL);
              srcLineSprite__SetQaaColorAnimQuick((srcLineSprite_o *)v577, 1, 0LL);
              v402 = v577[5].monitor;
              if ( !v402 )
                goto LABEL_1012;
            }
            v576 = 1;
LABEL_827:
            v402[4] = v576;
            goto LABEL_18;
          default:
            if ( id != 350 )
              return;
            updated = (__int64)v104->fields.param;
            if ( !updated )
              goto LABEL_1012;
            updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
            if ( !updated )
              goto LABEL_1012;
            v301 = updated;
            if ( *(int *)(updated + 24) <= 0 )
              goto LABEL_839;
            v302 = System_Int32__Parse(*(System_String_o **)(updated + 32), 0LL);
            if ( v302 < 1 )
              goto LABEL_839;
            v303 = v302;
            v304 = 0.5;
            if ( *(int *)(v301 + 24) > 1 )
            {
              v305 = System_Int32__Parse(*(System_String_o **)(v301 + 40), 0LL);
              if ( *(int *)(v301 + 24) >= 3 )
                v304 = System_Single__Parse(*(System_String_o **)(v301 + 48), 0LL) * 0.001;
            }
            else
            {
              v305 = 15;
            }
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            if ( !byte_49B5933 )
            {
              sub_1B4CF90(&TerminalSceneComponent_TypeInfo, v96);
              byte_49B5933 = 1;
            }
            updated = (__int64)TerminalSceneComponent_TypeInfo;
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
              updated = (__int64)TerminalSceneComponent_TypeInfo;
            }
            v611 = **(_QWORD **)(updated + 184);
            if ( !v611 )
              goto LABEL_1012;
            v612 = *(ScrTerminalMap_o **)(v611 + 264);
            v613 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
            System_Action___ctor(
              v613,
              (Il2CppObject *)v94,
              Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__10__,
              0LL);
            if ( !v612 )
              goto LABEL_1012;
            ScrTerminalMap__RequestMapMove_34925684(v612, v303, v304, v305, v613, 0LL);
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
          v119 = (System_String_o *)StringLiteral_1/*""*/;
          v120 = System_String__Concat_61093468((System_String_o *)StringLiteral_10605/*"QUEST_AFTER_ACTION_MESSAGE_"*/, v104->fields.param, 0LL);
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v121 = LocalizationManager__Get(v120, 0LL);
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v123 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
          System_Action___ctor(
            v123,
            (Il2CppObject *)v94,
            Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__29__,
            0LL);
          if ( !Instance )
            goto LABEL_1012;
          CommonUI__OpenNotificationDialog(
            (CommonUI_o *)Instance,
            v119,
            v121,
            v123,
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
          v249 = (System_String_o *)StringLiteral_1/*""*/;
          updated = sub_1B4D038(string___TypeInfo, 1LL);
          if ( !updated )
            goto LABEL_1012;
          v252 = (System_String_array *)updated;
          if ( !*(_DWORD *)(updated + 24) )
            goto LABEL_1013;
          v253 = StringLiteral_89/*"\r\n"*/;
          *(_QWORD *)(updated + 32) = StringLiteral_89/*"\r\n"*/;
          sub_1B4CF34((CGThumbnailListItem_o *)(updated + 32), v253, v250, v251);
          updated = (__int64)v104->fields.param;
          if ( !updated )
            goto LABEL_1012;
          updated = (__int64)System_String__Split_61146620((System_String_o *)updated, v252, 0, 0LL);
          if ( !updated )
            goto LABEL_1012;
          v254 = *(_DWORD *)(updated + 24);
          if ( v254 <= 0 )
            goto LABEL_839;
          v255 = *(System_String_o **)(updated + 32);
          if ( v254 == 1 )
          {
            v256 = *(System_String_o **)(updated + 32);
            v255 = v249;
          }
          else
          {
            v256 = *(System_String_o **)(updated + 40);
          }
          v410 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v411 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
          System_Action___ctor(
            v411,
            (Il2CppObject *)v94,
            Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__30__,
            0LL);
          if ( !v410 )
            goto LABEL_1012;
          CommonUI__OpenNotificationDialog(
            (CommonUI_o *)v410,
            v255,
            v256,
            v411,
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
          v257 = (System_String_o *)StringLiteral_1/*""*/;
          v258 = System_String__Concat_61093468((System_String_o *)StringLiteral_10605/*"QUEST_AFTER_ACTION_MESSAGE_"*/, v104->fields.param, 0LL);
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v259 = LocalizationManager__Get(v258, 0LL);
          v260 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v261 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
          System_Action___ctor(
            v261,
            (Il2CppObject *)v94,
            Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__31__,
            0LL);
          if ( !v260 )
            goto LABEL_1012;
          v262 = "/Applications/Unity/Hub/Editor/2022.3.28f1/Unity.app/Contents/il2cpp/libil2cpp/icalls/mscorlib/System.R"
                 "untime.Remoting.Proxies/RealProxy.cpp(27) : Unsupported internal call for IL2CPP:RealProxy::InternalGet"
                 "ProxyType - System.Runtime.Remoting is not supported."
               + 61;
          onClickOkSeKind = 0;
          goto LABEL_565;
        case 603:
          v263 = (System_String_o *)StringLiteral_1/*""*/;
          updated = sub_1B4D038(string___TypeInfo, 1LL);
          if ( !updated )
            goto LABEL_1012;
          v266 = (System_String_array *)updated;
          if ( !*(_DWORD *)(updated + 24) )
            goto LABEL_1013;
          v267 = StringLiteral_89/*"\r\n"*/;
          *(_QWORD *)(updated + 32) = StringLiteral_89/*"\r\n"*/;
          sub_1B4CF34((CGThumbnailListItem_o *)(updated + 32), v267, v264, v265);
          updated = (__int64)v104->fields.param;
          if ( !updated )
            goto LABEL_1012;
          updated = (__int64)System_String__Split_61146620((System_String_o *)updated, v266, 0, 0LL);
          if ( !updated )
            goto LABEL_1012;
          v268 = *(_DWORD *)(updated + 24);
          if ( v268 <= 0 )
            goto LABEL_839;
          v257 = *(System_String_o **)(updated + 32);
          if ( v268 == 1 )
          {
            v259 = *(System_String_o **)(updated + 32);
            v257 = v263;
          }
          else
          {
            v259 = *(System_String_o **)(updated + 40);
          }
          v260 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v261 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
          System_Action___ctor(
            v261,
            (Il2CppObject *)v94,
            Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__32__,
            0LL);
          if ( !v260 )
            goto LABEL_1012;
          v262 = "/il2cpp/libil2cpp/icalls/mscorlib/System.Runtime.Remoting.Proxies/RealProxy.cpp(27) : Unsupported internal call for IL2CPP:RealProxy::InternalGetProxyType - System.Runtime.Remoting is not supported.";
          onClickOkSeKind = 1;
LABEL_565:
          CommonUI__OpenNotificationDialog_30249348(
            (CommonUI_o *)v260,
            v257,
            v259,
            v261,
            40.0,
            *((float *)v262 + 395),
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
          v269 = (System_String_o *)StringLiteral_1/*""*/;
          v270 = System_String__Concat_61093468((System_String_o *)StringLiteral_10605/*"QUEST_AFTER_ACTION_MESSAGE_"*/, v104->fields.param, 0LL);
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v271 = LocalizationManager__Get(v270, 0LL);
          v272 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v273 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
          System_Action___ctor(
            v273,
            (Il2CppObject *)v94,
            Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__33__,
            0LL);
          if ( !v272 )
            goto LABEL_1012;
          CommonUI__OpenNotificationDialog_30249348(
            (CommonUI_o *)v272,
            v269,
            v271,
            v273,
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
          updated = (__int64)v104->fields.param;
          if ( !updated )
            goto LABEL_1012;
          updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
          if ( !updated )
            goto LABEL_1012;
          v197 = *(_QWORD *)(updated + 24);
          if ( v197 )
          {
            if ( !(_DWORD)v197 )
              goto LABEL_1013;
            updated = System_Int32__Parse(*(System_String_o **)(updated + 32), 0LL);
            v199 = *v99;
            if ( !*v99 )
              goto LABEL_1012;
            v200 = *(QuestAfterAction_TitleInfoControlCallback_o **)(v199 + 40);
            if ( (int)updated >= 1 )
            {
              if ( !v200 )
                goto LABEL_1012;
              QuestAfterAction_TitleInfoControlCallback__Start(
                *(QuestAfterAction_TitleInfoControlCallback_o **)(v199 + 40),
                0LL,
                v198);
              goto LABEL_18;
            }
          }
          else
          {
            if ( !*v99 )
              goto LABEL_1012;
            v200 = *(QuestAfterAction_TitleInfoControlCallback_o **)(*v99 + 40);
          }
          v408 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
          System_Action___ctor(v408, (Il2CppObject *)this, (intptr_t)this->klass->vtable._15_onEnd.methodPtr, 0LL);
          if ( !v200 )
            goto LABEL_1012;
          QuestAfterAction_TitleInfoControlCallback__Start(v200, v408, v409);
          return;
      }
    }
    if ( id == 530 )
    {
      v201 = sub_1B4D1DC(QuestAfterAction_StateMain___c__DisplayClass16_16_TypeInfo);
      System_Object___ctor((Il2CppObject *)v201, 0LL);
      if ( !v201 )
        goto LABEL_1012;
      *(_QWORD *)(v201 + 24) = v94;
      v204 = v201 + 24;
      sub_1B4CF34((CGThumbnailListItem_o *)(v201 + 24), v94, v202, v203);
      v205 = System_Int32__Parse(v104->fields.param, 0LL);
      updated = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !updated )
        goto LABEL_1012;
      updated = (__int64)DataManager__GetMasterData_object_(
                           (DataManager_o *)updated,
                           (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_QuestMaster___);
      if ( !updated )
        goto LABEL_1012;
      v206 = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)updated,
               v205,
               (const MethodInfo_319D99C *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
      *(_QWORD *)(v201 + 16) = v206;
      v207 = (__int64 *)(v201 + 16);
      sub_1B4CF34((CGThumbnailListItem_o *)(v201 + 16), (int32_t)v206, v208, v209);
      updated = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_37B4830 *)Method_SingletonTemplate_QuestTree__get_Instance__);
      if ( !updated )
        goto LABEL_1012;
      updated = (__int64)QuestTree__GetQuestInfo((QuestTree_o *)updated, v205, 0LL);
      if ( !updated )
        goto LABEL_1012;
      v211 = updated;
      if ( *(_DWORD *)(updated + 32) == 1 )
      {
        updated = *v207;
        if ( !*v207 )
          goto LABEL_1012;
        if ( QuestEntity__HasFlag((QuestEntity_o *)updated, 2LL, 0LL) )
        {
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          if ( !byte_49B7983 )
          {
            sub_1B4CF90(&TerminalPramsManager_TypeInfo, v96);
            byte_49B7983 = 1;
          }
          updated = (__int64)TerminalPramsManager_TypeInfo;
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            updated = (__int64)TerminalPramsManager_TypeInfo;
          }
          *(_DWORD *)(*(_QWORD *)(updated + 184) + 20LL) = v205;
          v212 = *(_DWORD *)(v211 + 44);
          if ( !byte_49B7987 )
          {
            sub_1B4CF90(&TerminalPramsManager_TypeInfo, v96);
            updated = (__int64)TerminalPramsManager_TypeInfo;
            byte_49B7987 = 1;
          }
          if ( !*(_DWORD *)(updated + 224) )
          {
            j_il2cpp_runtime_class_init_0(updated);
            updated = (__int64)TerminalPramsManager_TypeInfo;
          }
          *(_DWORD *)(*(_QWORD *)(updated + 184) + 24LL) = v212;
          if ( !*(_QWORD *)v204 )
            goto LABEL_1012;
          v213 = *(_QWORD *)(*(_QWORD *)v204 + 24LL);
          if ( !v213 )
            goto LABEL_1012;
          *(_BYTE *)(v213 + 195) = 1;
          v214 = (NetworkManager_ResultCallbackFunc_o *)sub_1B4D1DC(NetworkManager_ResultCallbackFunc_TypeInfo);
          NetworkManager_ResultCallbackFunc___ctor(
            v214,
            (Il2CppObject *)v201,
            Method_QuestAfterAction_StateMain___c__DisplayClass16_16__UpdateAnim_b__24__,
            0LL);
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          Request_object = NetworkManager__getRequest_object_(
                             v214,
                             (const MethodInfo_2F86AFC *)Method_NetworkManager_getRequest_BattleSetupScenarioRequest___);
          if ( !byte_49B5A14 )
          {
            sub_1B4CF90(&TerminalPramsManager_TypeInfo, v96);
            byte_49B5A14 = 1;
          }
          updated = (__int64)TerminalPramsManager_TypeInfo;
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            updated = (__int64)TerminalPramsManager_TypeInfo;
          }
          v216 = *(_DWORD *)(*(_QWORD *)(updated + 184) + 20LL);
          if ( !byte_49B5A13 )
          {
            sub_1B4CF90(&TerminalPramsManager_TypeInfo, v96);
            updated = (__int64)TerminalPramsManager_TypeInfo;
            byte_49B5A13 = 1;
          }
          if ( !*(_DWORD *)(updated + 224) )
          {
            j_il2cpp_runtime_class_init_0(updated);
            updated = (__int64)TerminalPramsManager_TypeInfo;
          }
          if ( !Request_object )
            goto LABEL_1012;
          BattleSetupScenarioRequest__beginRequest(
            (BattleSetupScenarioRequest_o *)Request_object,
            v216,
            *(_DWORD *)(*(_QWORD *)(updated + 184) + 24LL) + 1,
            0LL);
        }
      }
      else
      {
        QuestAfterAction_StateMain__ForceEndAnim(this, 1, v210);
      }
      return;
    }
    if ( id != 540 )
      return;
    updated = (__int64)v104->fields.param;
    if ( !updated )
      goto LABEL_1012;
    updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
    if ( !updated )
      goto LABEL_1012;
    v139 = updated;
    if ( !*(_DWORD *)(updated + 24) )
LABEL_1013:
      sub_1B4D1F4(updated, v96);
    v140 = System_Int32__Parse(*(System_String_o **)(updated + 32), 0LL);
    if ( *(int *)(v139 + 24) < 2 )
    {
      v141 = -1;
    }
    else
    {
      v141 = System_Int32__Parse(*(System_String_o **)(v139 + 40), 0LL);
      if ( *(int *)(v139 + 24) >= 3 )
      {
        v142 = System_Int32__Parse(*(System_String_o **)(v139 + 48), 0LL);
LABEL_261:
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_49B5B1A )
        {
          sub_1B4CF90(&TerminalPramsManager_TypeInfo, v96);
          byte_49B5B1A = 1;
        }
        v244 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v244 = TerminalPramsManager_TypeInfo;
        }
        v244->static_fields->_IsAutoResume_k__BackingField = 1;
        if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        if ( !byte_49B5933 )
        {
          sub_1B4CF90(&TerminalSceneComponent_TypeInfo, v96);
          byte_49B5933 = 1;
        }
        updated = (__int64)TerminalSceneComponent_TypeInfo;
        if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          updated = (__int64)TerminalSceneComponent_TypeInfo;
        }
        v245 = **(_QWORD **)(updated + 184);
        if ( !v245 )
          goto LABEL_1012;
        updated = *(_QWORD *)(v245 + 264);
        if ( !updated )
          goto LABEL_1012;
        if ( !ScrTerminalMap__RequestMapChange((ScrTerminalMap_o *)updated, v140, v141, v142, 0LL) )
        {
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          if ( !byte_49B5B1A )
          {
            sub_1B4CF90(&TerminalPramsManager_TypeInfo, v246);
            byte_49B5B1A = 1;
          }
          v248 = TerminalPramsManager_TypeInfo;
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            v248 = TerminalPramsManager_TypeInfo;
          }
          v248->static_fields->_IsAutoResume_k__BackingField = 0;
          goto LABEL_18;
        }
        ((void (__fastcall *)(QuestAfterAction_StateMain_o *, Il2CppMethodPointer))this->klass->vtable._14_EndAnim.method)(
          this,
          this->klass->vtable._15_onEnd.methodPtr);
        updated = *v99;
        if ( !*v99 )
          goto LABEL_1012;
        QuestAfterAction__SetState((QuestAfterAction_o *)updated, 0, v247);
        return;
      }
    }
    v142 = -1;
    goto LABEL_261;
  }
  if ( id <= 801 )
  {
    if ( id <= 701 )
    {
      if ( id != 700 )
      {
        if ( id != 701 )
          return;
        if ( !System_String__op_Equality(v104->fields.param, (System_String_o *)StringLiteral_1138/*"0"*/, 0LL) )
          goto LABEL_18;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_49B7BD1 )
        {
          sub_1B4CF90(&TerminalPramsManager_TypeInfo, v195);
          byte_49B7BD1 = 1;
        }
        v196 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v196 = TerminalPramsManager_TypeInfo;
        }
        v196->static_fields->_IsTransOrdealCall_k__BackingField = 1;
        goto LABEL_471;
      }
      updated = (__int64)v104->fields.param;
      if ( !updated )
        goto LABEL_1012;
      updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0LL);
      if ( !updated )
        goto LABEL_1012;
      v241 = updated;
      if ( *(_DWORD *)(updated + 24) )
      {
        v242 = System_Int32__Parse(*(System_String_o **)(updated + 32), 0LL);
        if ( *(int *)(v241 + 24) >= 2 )
          v243 = System_Int32__Parse(*(System_String_o **)(v241 + 40), 0LL) + 1;
        else
          v243 = 0;
        v348 = (SceneJumpInfo_o *)sub_1B4D1DC(SceneJumpInfo_TypeInfo);
        SceneJumpInfo___ctor_39216332(v348, (System_String_o *)StringLiteral_1/*""*/, v242, v243, 0LL);
        updated = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
        if ( !updated )
          goto LABEL_1012;
        AvalonSceneManager__transitionScene((AvalonSceneManager_o *)updated, 72, 1, (Il2CppObject *)v348, 0LL);
        goto LABEL_839;
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
            param = v104->fields.param;
            v128 = Method_QuestAfterAction_StateMain_UpdateAnim__;
            if ( (*((_BYTE *)Method_QuestAfterAction_StateMain_UpdateAnim__ + 83) & 2) != 0 )
              v128 = (_QWORD *)sub_1B4CFA8(Method_QuestAfterAction_StateMain_UpdateAnim__);
            v129 = (System_Reflection_MethodBase_o *)sub_1B4CF74(v128, v128[4]);
            OverwriteAssetSoundName__PlaySe(v129, param, 0, 0LL);
            goto LABEL_18;
          }
          return;
        }
        v233 = *v99;
        if ( !*v99 )
          goto LABEL_1012;
        updated = *(_QWORD *)(v233 + 88);
        if ( !updated )
          goto LABEL_1012;
        if ( System_Collections_Generic_Dictionary_int__object___TryGetValue(
               (System_Collections_Generic_Dictionary_int__object__o *)updated,
               *(_DWORD *)(v233 + 64),
               &value,
               (const MethodInfo_31F860C *)Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__TryGetValue__) )
        {
          updated = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
          if ( !updated )
            goto LABEL_1012;
          AutomatedAction__TerminateMissionAction((AutomatedAction_o *)updated, 0LL);
          if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          if ( !byte_49B5933 )
          {
            sub_1B4CF90(&TerminalSceneComponent_TypeInfo, v96);
            byte_49B5933 = 1;
          }
          updated = (__int64)TerminalSceneComponent_TypeInfo;
          if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            updated = (__int64)TerminalSceneComponent_TypeInfo;
          }
          v234 = **(_QWORD **)(updated + 184);
          if ( !v234 )
            goto LABEL_1012;
          if ( !*(_QWORD *)(v234 + 464) )
            goto LABEL_245;
          if ( !*(_DWORD *)(updated + 224) )
            j_il2cpp_runtime_class_init_0(updated);
          if ( !byte_49B5933 )
          {
            sub_1B4CF90(&TerminalSceneComponent_TypeInfo, v96);
            byte_49B5933 = 1;
          }
          updated = (__int64)TerminalSceneComponent_TypeInfo;
          if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            updated = (__int64)TerminalSceneComponent_TypeInfo;
          }
          v235 = **(_QWORD **)(updated + 184);
          if ( !v235 )
            goto LABEL_1012;
          v236 = *(_QWORD *)(v235 + 464);
          if ( !v236 )
            goto LABEL_1012;
          updated = *(unsigned int *)(v236 + 48);
          if ( !(_DWORD)updated )
          {
LABEL_245:
            if ( !value )
              goto LABEL_1012;
            updated = LODWORD(value[1].klass);
          }
          if ( (int)updated < 1 )
          {
            if ( !value )
              goto LABEL_1012;
            v543 = (System_String_o *)value[1].monitor;
            if ( !SoundManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
            SoundManager__playVoice(v543, 0, 0LL);
          }
          else
          {
            updated = (__int64)ServantVoiceEntity__getVoiceAssetName_40440052(updated, 0LL);
            if ( !value )
              goto LABEL_1012;
            v237 = (System_String_o *)updated;
            v238 = (System_String_o *)value[1].monitor;
            v239 = SeManager_TypeInfo;
            if ( !SeManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
              v239 = SeManager_TypeInfo;
            }
            DEFAULT_VOLUME = v239->static_fields->DEFAULT_VOLUME;
            if ( !SoundManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
            SoundManager__playVoice_39255412(v237, v238, DEFAULT_VOLUME, 0LL, 0, 0LL);
          }
        }
LABEL_839:
        ((void (__fastcall *)(QuestAfterAction_StateMain_o *, Il2CppMethodPointer))this->klass->vtable._14_EndAnim.method)(
          this,
          this->klass->vtable._15_onEnd.methodPtr);
        return;
      }
      updated = (__int64)v104->fields.param;
      if ( !updated )
        goto LABEL_1012;
      updated = (__int64)System_String__Split_61145480(
                           (System_String_o *)updated,
                           (System_String_o *)StringLiteral_816/*","*/,
                           0,
                           0LL);
      if ( !updated )
        goto LABEL_1012;
      v230 = *(_QWORD *)(updated + 24);
      v231 = updated;
      if ( !v230 )
        goto LABEL_456;
      if ( (_DWORD)v230 )
      {
        if ( System_Int32__Parse(*(System_String_o **)(updated + 32), 0LL) > 0 )
          goto LABEL_18;
        if ( *(int *)(v231 + 24) >= 2 )
        {
          v232 = System_Int32__Parse(*(System_String_o **)(v231 + 40), 0LL);
LABEL_457:
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          TerminalPramsManager__SetAutoResumeForFolder(v232, 0LL);
          if ( !byte_49B7B60 )
          {
            sub_1B4CF90(&TerminalPramsManager_TypeInfo, v349);
            byte_49B7B60 = 1;
          }
          v350 = TerminalPramsManager_TypeInfo;
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            v350 = TerminalPramsManager_TypeInfo;
          }
          if ( v350->static_fields->_DispState_k__BackingField == 3 )
          {
            if ( !v350->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(v350);
            if ( !byte_49B7BD2 )
            {
              sub_1B4CF90(&TerminalPramsManager_TypeInfo, v349);
              byte_49B7BD2 = 1;
            }
            v351 = TerminalPramsManager_TypeInfo;
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
              v351 = TerminalPramsManager_TypeInfo;
            }
            v351->static_fields->_IsMoveFolderByQuestAfterAction_k__BackingField = 1;
          }
LABEL_471:
          updated = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
          if ( !updated )
            goto LABEL_1012;
          AvalonSceneManager__transitionSceneRefresh((AvalonSceneManager_o *)updated, 34, 1, 0LL, 0, 0LL);
          goto LABEL_839;
        }
LABEL_456:
        v232 = 0;
        goto LABEL_457;
      }
    }
    goto LABEL_1013;
  }
  switch ( id )
  {
    case 850:
      if ( !SoundManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      SoundManager__stopBgm(0LL);
      if ( !*v99 )
        goto LABEL_1012;
      *(_BYTE *)(*v99 + 193) = 1;
      goto LABEL_18;
    case 851:
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      if ( !byte_49B5933 )
      {
        sub_1B4CF90(&TerminalSceneComponent_TypeInfo, v96);
        byte_49B5933 = 1;
      }
      v217 = TerminalSceneComponent_TypeInfo;
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        v217 = TerminalSceneComponent_TypeInfo;
      }
      v218 = v217->static_fields->mInstance;
      updated = (__int64)QuestAfterAction_Command__GetBgmName(v104, (const MethodInfo *)v96);
      if ( !v218 )
        goto LABEL_1012;
      TerminalSceneComponent__playBgm(v218, (System_String_o *)updated, 0LL);
      if ( !*v99 )
        goto LABEL_1012;
      *(_BYTE *)(*v99 + 193) = 0;
      goto LABEL_18;
    case 900:
      v109 = (float)System_Int32__Parse(v104->fields.param, 0LL) / 1000.0;
      if ( v109 <= 0.0 )
        goto LABEL_18;
      this->fields.waitTime = v109;
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

  if ( (byte_49B7BA9 & 1) == 0 )
  {
    sub_1B4CF90(&TerminalSceneComponent_TypeInfo, that);
    byte_49B7BA9 = 1;
  }
  this->fields.that = that;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields, (int32_t)that, (int32_t)method, v3);
  v8 = this->fields.that;
  if ( !v8 )
    goto LABEL_14;
  screenCollider = (TerminalSceneComponent_c *)v8->fields.screenCollider;
  if ( !screenCollider )
    goto LABEL_14;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)screenCollider, 1, 0LL);
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_49B5933 )
  {
    sub_1B4CF90(&TerminalSceneComponent_TypeInfo, v7);
    byte_49B5933 = 1;
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
    sub_1B4D1EC(screenCollider, v7);
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
    sub_1B4D1EC(this, method);
  return that->fields.commandBuf;
}


int32_t __fastcall QuestAfterAction_StateMain__get_CommandIndex(
        QuestAfterAction_StateMain_o *this,
        const MethodInfo *method)
{
  struct QuestAfterAction_o *that; // x8

  that = this->fields.that;
  if ( !that )
    sub_1B4D1EC(this, method);
  return that->fields.commandIdx;
}


UnityEngine_GameObject_o *__fastcall QuestAfterAction_StateMain__get_SubGimmickRoot(
        QuestAfterAction_StateMain_o *this,
        const MethodInfo *method)
{
  TerminalSceneComponent_c *v2; // x0
  struct TerminalSceneComponent_o *mInstance; // x8
  struct ScrTerminalMap_o *mTerminalMap; // x8

  if ( (byte_49B7BA8 & 1) == 0 )
  {
    sub_1B4CF90(&TerminalSceneComponent_TypeInfo, method);
    byte_49B7BA8 = 1;
  }
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_49B5933 )
  {
    sub_1B4CF90(&TerminalSceneComponent_TypeInfo, method);
    byte_49B5933 = 1;
  }
  v2 = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v2 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = v2->static_fields->mInstance;
  if ( !mInstance || (mTerminalMap = mInstance->fields.mTerminalMap) == 0LL )
    sub_1B4D1EC(v2, method);
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

  if ( (byte_49B7BAB & 1) == 0 )
  {
    sub_1B4CF90(&TerminalSceneComponent_TypeInfo, deleteKey);
    sub_1B4CF90(&StringLiteral_16401/*"afterActionBk"*/, v5);
    byte_49B7BAB = 1;
  }
  if ( deleteKey )
    UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_16401/*"afterActionBk"*/, 0LL);
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_49B5933 )
  {
    sub_1B4CF90(&TerminalSceneComponent_TypeInfo, deleteKey);
    byte_49B5933 = 1;
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
    sub_1B4D1EC(mInstance, deleteKey);
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
    sub_1B4D1EC(this, value);
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

  if ( (byte_49B7BAD & 1) == 0 )
  {
    sub_1B4CF90(&QuestAfterAction_StateMain___c_TypeInfo, v1);
    byte_49B7BAD = 1;
  }
  v2 = (Il2CppObject *)sub_1B4D1DC(QuestAfterAction_StateMain___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  QuestAfterAction_StateMain___c_TypeInfo->static_fields->__9 = (struct QuestAfterAction_StateMain___c_o *)v2;
  sub_1B4CF34((CGThumbnailListItem_o *)QuestAfterAction_StateMain___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
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

  if ( (byte_49B7BAE & 1) == 0 )
  {
    sub_1B4CF90(&ScriptManager_CallbackFunc_TypeInfo, method);
    sub_1B4CF90(&ScriptManager_TypeInfo, v2);
    sub_1B4CF90(&TerminalPramsManager_TypeInfo, v3);
    sub_1B4CF90(&Method_QuestAfterAction_StateMain___c__UpdateAnim_b__16_27__, v4);
    sub_1B4CF90(&QuestAfterAction_StateMain___c_TypeInfo, v5);
    byte_49B7BAE = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_49B7982 )
  {
    sub_1B4CF90(&TerminalPramsManager_TypeInfo, method);
    byte_49B7982 = 1;
  }
  v6 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v6 = TerminalPramsManager_TypeInfo;
  }
  WarId_k__BackingField = v6->static_fields->_WarId_k__BackingField;
  if ( !byte_49B5A14 )
  {
    sub_1B4CF90(&TerminalPramsManager_TypeInfo, method);
    v6 = TerminalPramsManager_TypeInfo;
    byte_49B5A14 = 1;
  }
  if ( !v6->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v6);
    v6 = TerminalPramsManager_TypeInfo;
  }
  QuestId_k__BackingField = v6->static_fields->_QuestId_k__BackingField;
  if ( !byte_49B5A13 )
  {
    sub_1B4CF90(&TerminalPramsManager_TypeInfo, method);
    v6 = TerminalPramsManager_TypeInfo;
    byte_49B5A13 = 1;
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
    _9__16_27 = (ScriptManager_CallbackFunc_o *)sub_1B4D1DC(ScriptManager_CallbackFunc_TypeInfo);
    ScriptManager_CallbackFunc___ctor(_9__16_27, v12, Method_QuestAfterAction_StateMain___c__UpdateAnim_b__16_27__, 0LL);
    static_fields = QuestAfterAction_StateMain___c_TypeInfo->static_fields;
    static_fields->__9__16_27 = _9__16_27;
    sub_1B4CF34((CGThumbnailListItem_o *)&static_fields->__9__16_27, (int32_t)_9__16_27, v14, v15);
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

  if ( (byte_49B7BAF & 1) == 0 )
  {
    sub_1B4CF90(&Method_NetworkManager_getRequest_BattleScenarioRequest___, isExit);
    sub_1B4CF90(&NetworkManager_TypeInfo, v3);
    sub_1B4CF90(&NetworkManager_ResultCallbackFunc_TypeInfo, v4);
    sub_1B4CF90(&ScriptManager_TypeInfo, v5);
    sub_1B4CF90(&TerminalPramsManager_TypeInfo, v6);
    sub_1B4CF90(&Method_QuestAfterAction_StateMain___c__UpdateAnim_b__16_28__, v7);
    sub_1B4CF90(&QuestAfterAction_StateMain___c_TypeInfo, v8);
    byte_49B7BAF = 1;
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
    _9__16_28 = (NetworkManager_ResultCallbackFunc_o *)sub_1B4D1DC(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      _9__16_28,
      v11,
      Method_QuestAfterAction_StateMain___c__UpdateAnim_b__16_28__,
      0LL);
    static_fields = QuestAfterAction_StateMain___c_TypeInfo->static_fields;
    static_fields->__9__16_28 = _9__16_28;
    sub_1B4CF34((CGThumbnailListItem_o *)&static_fields->__9__16_28, (int32_t)_9__16_28, v13, v14);
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     _9__16_28,
                     (const MethodInfo_2F86AFC *)Method_NetworkManager_getRequest_BattleScenarioRequest___);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_49B5A14 )
  {
    sub_1B4CF90(&TerminalPramsManager_TypeInfo, v15);
    byte_49B5A14 = 1;
  }
  v17 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v17 = TerminalPramsManager_TypeInfo;
  }
  QuestId_k__BackingField = v17->static_fields->_QuestId_k__BackingField;
  if ( !byte_49B5A13 )
  {
    sub_1B4CF90(&TerminalPramsManager_TypeInfo, v15);
    v17 = TerminalPramsManager_TypeInfo;
    byte_49B5A13 = 1;
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
    sub_1B4D1EC(SelectRouteArray, v21);
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

  if ( (byte_49B7BB0 & 1) == 0 )
  {
    sub_1B4CF90(&Method_JsonManager_DeserializeArray_BattleResultComponent_resultData___, jsonstr);
    sub_1B4CF90(&JsonManager_TypeInfo, v4);
    sub_1B4CF90(&ScriptManager_TypeInfo, v5);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v6);
    sub_1B4CF90(&TerminalPramsManager_TypeInfo, v7);
    sub_1B4CF90(&StringLiteral_16401/*"afterActionBk"*/, v8);
    sub_1B4CF90(&StringLiteral_15507/*"["*/, v9);
    sub_1B4CF90(&StringLiteral_15763/*"]"*/, v10);
    sub_1B4CF90(&StringLiteral_13415/*"TerminalTransitionInfoMissionId"*/, v11);
    byte_49B7BB0 = 1;
  }
  v12 = (Il2CppObject *)System_String__Concat_61131716(
                          (System_String_o *)StringLiteral_15507/*"["*/,
                          jsonstr,
                          (System_String_o *)StringLiteral_15763/*"]"*/,
                          0LL);
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v13 = JsonManager__DeserializeArray_object_(
          v12,
          (const MethodInfo_2F6ADF0 *)Method_JsonManager_DeserializeArray_BattleResultComponent_resultData___);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_16401/*"afterActionBk"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13415/*"TerminalTransitionInfoMissionId"*/, 0LL);
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  ScriptManager__ClearSelectRouteArray(0LL);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  TerminalPramsManager__ReceiveQuestEndResultInfo((BattleResultComponent_resultData_array *)v13, 1, 0LL);
  if ( !byte_49B5B1A )
  {
    sub_1B4CF90(&TerminalPramsManager_TypeInfo, v14);
    byte_49B5B1A = 1;
  }
  v15 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v15 = TerminalPramsManager_TypeInfo;
  }
  v15->static_fields->_IsAutoResume_k__BackingField = 1;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1B4D1EC(0LL, v17);
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
    sub_1B4D1EC(0LL, method);
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
    sub_1B4D1EC(0LL, method);
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
    sub_1B4D1EC(0LL, method);
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
    sub_1B4D1EC(_4__this, method);
  }
  ((void (__fastcall *)(struct QuestAfterAction_StateMain_o *, struct QuestAfterAction_o *, Il2CppMethodPointer))_4__this->klass->vtable._13_UpdateAnim.method)(
    _4__this,
    this->fields.that,
    _4__this->klass->vtable._14_EndAnim.methodPtr);
}


void __fastcall QuestAfterAction_StateMain___c__DisplayClass16_0___UpdateAnim_b__25(
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
  TerminalPramsManager_c *v24; // x0
  int32_t WarId_k__BackingField; // w19
  UnityEngine_GameObject_c *v26; // x8
  ScrTerminalListTop_o *v27; // x19
  int32_t v28; // w21

  if ( (byte_49B7BB1 & 1) == 0 )
  {
    sub_1B4CF90(&TerminalPramsManager_TypeInfo, method);
    sub_1B4CF90(&TerminalSceneComponent_TypeInfo, v3);
    sub_1B4CF90(&StringLiteral_16401/*"afterActionBk"*/, v4);
    sub_1B4CF90(&StringLiteral_13415/*"TerminalTransitionInfoMissionId"*/, v5);
    byte_49B7BB1 = 1;
  }
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_49B5933 )
  {
    sub_1B4CF90(&TerminalSceneComponent_TypeInfo, method);
    byte_49B5933 = 1;
  }
  _4__this = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    _4__this = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
  }
  klass = _4__this->fields.subRootGimmickP->klass;
  if ( !klass )
    goto LABEL_97;
  _4__this = *(ScrTerminalMap_o **)&klass->_2.thread_static_fields_offset;
  if ( !_4__this )
    goto LABEL_97;
  if ( !ScrTerminalMap__IsAllMaskActive(_4__this, 0LL) )
    goto LABEL_21;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_49B5933 )
  {
    sub_1B4CF90(&TerminalSceneComponent_TypeInfo, method);
    byte_49B5933 = 1;
  }
  _4__this = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    _4__this = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
  }
  v8 = _4__this->fields.subRootGimmickP->klass;
  if ( !v8 || (_4__this = *(ScrTerminalMap_o **)&v8->_2.thread_static_fields_offset) == 0LL )
LABEL_97:
    sub_1B4D1EC(_4__this, method);
  ScrTerminalMap__AllMaskEnd(_4__this, 0LL);
LABEL_21:
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_49B5933 )
  {
    sub_1B4CF90(&TerminalSceneComponent_TypeInfo, method);
    byte_49B5933 = 1;
  }
  _4__this = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    _4__this = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
  }
  v9 = _4__this->fields.subRootGimmickP->klass;
  if ( !v9 )
    goto LABEL_97;
  _4__this = *(ScrTerminalMap_o **)&v9->_2.static_fields_size;
  if ( !_4__this )
    goto LABEL_97;
  ScrTerminalListTop__IsAllTouchEnable((ScrTerminalListTop_o *)_4__this, 0, 0LL, 0LL);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_49B5A14 )
  {
    sub_1B4CF90(&TerminalPramsManager_TypeInfo, v10);
    byte_49B5A14 = 1;
  }
  v11 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v11 = TerminalPramsManager_TypeInfo;
  }
  QuestId_k__BackingField = v11->static_fields->_QuestId_k__BackingField;
  if ( !byte_49B7BD3 )
  {
    sub_1B4CF90(&TerminalPramsManager_TypeInfo, v10);
    v11 = TerminalPramsManager_TypeInfo;
    byte_49B7BD3 = 1;
  }
  if ( !v11->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v11);
    v11 = TerminalPramsManager_TypeInfo;
  }
  v11->static_fields->_LastPlayedQuestId_k__BackingField = QuestId_k__BackingField;
  if ( !byte_49B5A14 )
  {
    sub_1B4CF90(&TerminalPramsManager_TypeInfo, v10);
    v11 = TerminalPramsManager_TypeInfo;
    byte_49B5A14 = 1;
  }
  if ( !v11->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v11);
    v11 = TerminalPramsManager_TypeInfo;
  }
  TerminalPramsManager__CheckClearSelectedStoryQuestId(v11->static_fields->_QuestId_k__BackingField, 0LL);
  if ( !byte_49B5A14 )
  {
    sub_1B4CF90(&TerminalPramsManager_TypeInfo, v13);
    byte_49B5A14 = 1;
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
    if ( !byte_49B5A14 )
    {
      sub_1B4CF90(&TerminalPramsManager_TypeInfo, v16);
      byte_49B5A14 = 1;
    }
    v18 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v18 = TerminalPramsManager_TypeInfo;
    }
    SpotId = QuestMaster__GetSpotId(v18->static_fields->_QuestId_k__BackingField, 0LL);
    if ( !byte_49B7BD4 )
    {
      sub_1B4CF90(&TerminalPramsManager_TypeInfo, v19);
      byte_49B7BD4 = 1;
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
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_16401/*"afterActionBk"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13415/*"TerminalTransitionInfoMissionId"*/, 0LL);
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_49B5933 )
  {
    sub_1B4CF90(&TerminalSceneComponent_TypeInfo, method);
    byte_49B5933 = 1;
  }
  _4__this = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    _4__this = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
  }
  v21 = _4__this->fields.subRootGimmickP->klass;
  if ( !v21 )
    goto LABEL_97;
  _4__this = *(ScrTerminalMap_o **)&v21->_2.static_fields_size;
  if ( !_4__this )
    goto LABEL_97;
  Effect = ScrTerminalListTop__IsDisplayGetEffect((ScrTerminalListTop_o *)_4__this, 0LL);
  if ( !byte_49B7BD5 )
  {
    sub_1B4CF90(&TerminalPramsManager_TypeInfo, method);
    byte_49B7BD5 = 1;
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
    goto LABEL_97;
  ((void (__fastcall *)(ScrTerminalMap_o *, Il2CppRuntimeInterfaceOffsetPair *))_4__this->klass[1]._1.implementedInterfaces)(
    _4__this,
    _4__this->klass[1]._1.interfaceOffsets);
  if ( !byte_49B7982 )
  {
    sub_1B4CF90(&TerminalPramsManager_TypeInfo, method);
    byte_49B7982 = 1;
  }
  v24 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v24 = TerminalPramsManager_TypeInfo;
  }
  WarId_k__BackingField = v24->static_fields->_WarId_k__BackingField;
  if ( !byte_49B7BCB )
  {
    sub_1B4CF90(&TerminalPramsManager_TypeInfo, method);
    v24 = TerminalPramsManager_TypeInfo;
    byte_49B7BCB = 1;
  }
  if ( !v24->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v24);
    v24 = TerminalPramsManager_TypeInfo;
  }
  v24->static_fields->_BeforeQuestStartWarId_k__BackingField = WarId_k__BackingField;
  if ( !byte_49B5933 )
  {
    sub_1B4CF90(&TerminalSceneComponent_TypeInfo, method);
    byte_49B5933 = 1;
  }
  _4__this = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    _4__this = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
  }
  v26 = _4__this->fields.subRootGimmickP->klass;
  if ( !v26 )
    goto LABEL_97;
  v27 = *(ScrTerminalListTop_o **)&v26->_2.static_fields_size;
  if ( !byte_49B5A14 )
  {
    sub_1B4CF90(&TerminalPramsManager_TypeInfo, method);
    byte_49B5A14 = 1;
  }
  _4__this = (ScrTerminalMap_o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    _4__this = (ScrTerminalMap_o *)TerminalPramsManager_TypeInfo;
  }
  v28 = *((_DWORD *)&_4__this->fields.subRootGimmickP->fields + 1);
  if ( !byte_49B5A13 )
  {
    sub_1B4CF90(&TerminalPramsManager_TypeInfo, method);
    _4__this = (ScrTerminalMap_o *)TerminalPramsManager_TypeInfo;
    byte_49B5A13 = 1;
  }
  if ( !LODWORD(_4__this->fields.pfbBaseP) )
  {
    j_il2cpp_runtime_class_init_0(_4__this);
    _4__this = (ScrTerminalMap_o *)TerminalPramsManager_TypeInfo;
  }
  if ( !v27 )
    goto LABEL_97;
  ScrTerminalListTop__RequestBattleSecnario(v27, v28, LODWORD(_4__this->fields.subRootGimmickP[1].klass) + 1, 0LL);
}


void __fastcall QuestAfterAction_StateMain___c__DisplayClass16_0___UpdateAnim_b__29(
        QuestAfterAction_StateMain___c__DisplayClass16_0_o *this,
        const MethodInfo *method)
{
  struct QuestAfterAction_StateMain_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1B4D1EC(0LL, method);
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
    sub_1B4D1EC(0LL, method);
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
    sub_1B4D1EC(0LL, method);
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
    sub_1B4D1EC(0LL, method);
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
    sub_1B4D1EC(0LL, method);
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
    sub_1B4D1EC(0LL, method);
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
    sub_1B4D1EC(spot, method);
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
    sub_1B4D1EC(this, method);
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
    sub_1B4D1EC(this, method);
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
    sub_1B4D1EC(this, method);
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
    sub_1B4D1EC(this, method);
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
    sub_1B4D1EC(this, method);
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

  if ( (byte_49B7BB2 & 1) == 0 )
  {
    sub_1B4CF90(&EventDelegate_Callback_TypeInfo, method);
    sub_1B4CF90(&Method_UnityEngine_GameObject_AddComponent_TweenColor___, v3);
    sub_1B4CF90(&Method_UnityEngine_GameObject_GetComponentInChildren_UISprite___, v4);
    sub_1B4CF90(&Method_QuestAfterAction_StateMain___c__DisplayClass16_14__UpdateAnim_b__19__, v5);
    sub_1B4CF90(&QuestAfterAction_StateMain___c__DisplayClass16_14_TypeInfo, v6);
    byte_49B7BB2 = 1;
  }
  *(_QWORD *)&color.fields.r = 0LL;
  *(_QWORD *)&color.fields.b = 0LL;
  v7 = sub_1B4D1DC(QuestAfterAction_StateMain___c__DisplayClass16_14_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7 )
    goto LABEL_18;
  *(_QWORD *)(v7 + 24) = this;
  sub_1B4CF34((CGThumbnailListItem_o *)(v7 + 24), (int32_t)this, v10, v11);
  mapGimmick = (UnityEngine_Component_o *)this->fields.mapGimmick;
  if ( !mapGimmick )
    goto LABEL_18;
  mapGimmick = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mapGimmick, 0LL);
  if ( !mapGimmick )
    goto LABEL_18;
  mapGimmick = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponentInChildren_object_(
                                            (UnityEngine_GameObject_o *)mapGimmick,
                                            (const MethodInfo_2F536A8 *)Method_UnityEngine_GameObject_GetComponentInChildren_UISprite___);
  if ( !mapGimmick )
    goto LABEL_18;
  v12 = mapGimmick;
  mapGimmick = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mapGimmick, 0LL);
  if ( !mapGimmick )
    goto LABEL_18;
  v13 = UnityEngine_GameObject__AddComponent_object_(
          (UnityEngine_GameObject_o *)mapGimmick,
          (const MethodInfo_2F5335C *)Method_UnityEngine_GameObject_AddComponent_TweenColor___);
  *(_QWORD *)(v7 + 16) = v13;
  v14 = (UnityEngine_Color_o **)(v7 + 16);
  sub_1B4CF34((CGThumbnailListItem_o *)(v7 + 16), (int32_t)v13, v15, v16);
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
    sub_1B4D1EC(mapGimmick, v9);
  }
  if ( v18->max_length <= 2 )
LABEL_19:
    sub_1B4D1F4(mapGimmick, v9);
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
  v22 = (EventDelegate_Callback_o *)sub_1B4D1DC(EventDelegate_Callback_TypeInfo);
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

  if ( (byte_49B7BB3 & 1) == 0 )
  {
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, method);
    byte_49B7BB3 = 1;
  }
  tween = (UnityEngine_Object_o *)this->fields.tween;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_68804456(tween, 0LL);
  CS___8__locals14 = this->fields.CS___8__locals14;
  if ( !CS___8__locals14
    || (CS___8__locals13 = CS___8__locals14->fields.CS___8__locals13) == 0LL
    || (_4__this = CS___8__locals13->fields.__4__this) == 0LL )
  {
    sub_1B4D1EC(_4__this, v5);
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
    sub_1B4D1EC(this, method);
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
    sub_1B4D1EC(this, method);
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
  struct QuestAfterAction_StateMain___c__DisplayClass16_0_o *CS___8__locals16; // x22
  int namespaze; // w24
  System_Action_o *_9__25; // x19
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  clsQuestCheck_o *v19; // x19
  QuestAfterAction_StateMain___c_c *v20; // x8
  System_Action_o *_9__16_26; // x20
  Il2CppObject *v22; // x21
  struct QuestAfterAction_StateMain___c_StaticFields *static_fields; // x0
  int32_t v24; // w2
  const MethodInfo *v25; // x3

  if ( (byte_49B7BB4 & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_TypeInfo, result);
    sub_1B4CF90(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v4);
    sub_1B4CF90(&TerminalPramsManager_TypeInfo, v5);
    sub_1B4CF90(&TerminalSceneComponent_TypeInfo, v6);
    sub_1B4CF90(&Method_QuestAfterAction_StateMain___c__UpdateAnim_b__16_26__, v7);
    sub_1B4CF90(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__25__, v8);
    sub_1B4CF90(&QuestAfterAction_StateMain___c_TypeInfo, v9);
    byte_49B7BB4 = 1;
  }
  questEntity = this->fields.questEntity;
  if ( !questEntity )
    goto LABEL_35;
  if ( QuestEntity__HasFlag(questEntity, 0x800000000000LL, 0LL) )
  {
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    if ( !byte_49B5933 )
    {
      sub_1B4CF90(&TerminalSceneComponent_TypeInfo, result);
      byte_49B5933 = 1;
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
      if ( !byte_49B5A14 )
      {
        sub_1B4CF90(&TerminalPramsManager_TypeInfo, result);
        byte_49B5A14 = 1;
      }
      questEntity = (QuestEntity_o *)TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        questEntity = (QuestEntity_o *)TerminalPramsManager_TypeInfo;
      }
      name_high = HIDWORD(questEntity[1].klass->_1.name);
      if ( !byte_49B5A13 )
      {
        sub_1B4CF90(&TerminalPramsManager_TypeInfo, result);
        questEntity = (QuestEntity_o *)TerminalPramsManager_TypeInfo;
        byte_49B5A13 = 1;
      }
      if ( !questEntity[1].fields.type )
      {
        j_il2cpp_runtime_class_init_0(questEntity);
        questEntity = (QuestEntity_o *)TerminalPramsManager_TypeInfo;
      }
      CS___8__locals16 = this->fields.CS___8__locals16;
      if ( CS___8__locals16 )
      {
        namespaze = (int)questEntity[1].klass->_1.namespaze;
        _9__25 = CS___8__locals16->fields.__9__25;
        if ( !_9__25 )
        {
          _9__25 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
          System_Action___ctor(
            _9__25,
            (Il2CppObject *)CS___8__locals16,
            Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__25__,
            0LL);
          CS___8__locals16->fields.__9__25 = _9__25;
          sub_1B4CF34((CGThumbnailListItem_o *)&CS___8__locals16->fields.__9__25, (int32_t)_9__25, v17, v18);
        }
        if ( v12 )
        {
          ScrTerminalListTop__StartWindowMessage_34769740(v12, name_high, namespaze + 1, 2, _9__25, 1, 0LL);
          return;
        }
      }
    }
LABEL_35:
    sub_1B4D1EC(questEntity, result);
  }
  questEntity = (QuestEntity_o *)SingletonTemplate_object___get_Instance((const MethodInfo_37B4830 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  v19 = (clsQuestCheck_o *)questEntity;
  v20 = QuestAfterAction_StateMain___c_TypeInfo;
  if ( !QuestAfterAction_StateMain___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestAfterAction_StateMain___c_TypeInfo);
    v20 = QuestAfterAction_StateMain___c_TypeInfo;
  }
  _9__16_26 = v20->static_fields->__9__16_26;
  if ( !_9__16_26 )
  {
    if ( !v20->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v20);
      v20 = QuestAfterAction_StateMain___c_TypeInfo;
    }
    v22 = (Il2CppObject *)v20->static_fields->__9;
    _9__16_26 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
    System_Action___ctor(_9__16_26, v22, Method_QuestAfterAction_StateMain___c__UpdateAnim_b__16_26__, 0LL);
    static_fields = QuestAfterAction_StateMain___c_TypeInfo->static_fields;
    static_fields->__9__16_26 = _9__16_26;
    sub_1B4CF34((CGThumbnailListItem_o *)&static_fields->__9__16_26, (int32_t)_9__16_26, v24, v25);
  }
  if ( !v19 )
    goto LABEL_35;
  clsQuestCheck__PlayQuestStartAction(v19, _9__16_26, 0LL);
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
    sub_1B4D1EC(spot, method);
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
    sub_1B4D1EC(spot, method);
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
    sub_1B4D1EC(this, method);
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
    sub_1B4D1EC(this, method);
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
    sub_1B4D1EC(this, method);
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
    sub_1B4D1EC(this, method);
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
    sub_1B4D1EC(this, method);
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
    sub_1B4D1EC(this, method);
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
  sub_1B4CF34(p_end, 0, v2, v3);
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
  const MethodInfo *v3; // x3

  this->fields.start = startCallback;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields, (int32_t)startCallback, (int32_t)method, v3);
}


void __fastcall QuestAfterAction_TitleInfoControlCallback__Start(
        QuestAfterAction_TitleInfoControlCallback_o *this,
        System_Action_o *endCallback,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
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
  sub_1B4CF34((CGThumbnailListItem_o *)p_end, (int32_t)endCallback, (int32_t)method, v3);
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
  const MethodInfo *v8; // x3

  v6 = this;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v6->fields.voiceName = vName;
  v6 = (QuestAfterAction_VoiceInfo_o *)((char *)v6 + 24);
  LODWORD(v6[-1].fields.voiceName) = sId;
  sub_1B4CF34((CGThumbnailListItem_o *)v6, (int32_t)vName, v7, v8);
}


void __fastcall QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__82___ctor(
        QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__82_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
  this->fields.__l__initialThreadId = System_Environment__get_CurrentManagedThreadId(0LL);
}


bool __fastcall QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__82__MoveNext(
        QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__82_o *this,
        const MethodInfo *method)
{
  QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__82_o *v2; // x21
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
  QuestAfterAction_Command_o *v26; // x0
  const MethodInfo *v27; // x1
  struct QuestAfterAction_Command_o *v28; // x20
  int id; // w8
  unsigned int v30; // w8
  int32_t v31; // w21
  int32_t CommandTargetId; // w2
  const MethodInfo *v33; // x3
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  bool result; // w0
  QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__82_o *v39; // [xsp+18h] [xbp-48h]

  v2 = this;
  v39 = this;
  if ( (byte_49B7BB8 & 1) == 0 )
  {
    sub_1B4CF90(&System_Collections_Generic_IEnumerable_QuestAfterAction_Command__TypeInfo, method);
    sub_1B4CF90(&System_Collections_Generic_IEnumerator_QuestAfterAction_Command__TypeInfo, v3);
    this = (QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__82_o *)sub_1B4CF90(
                                                                                    &System_Collections_IEnumerator_TypeInfo,
                                                                                    v4);
    byte_49B7BB8 = 1;
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
      sub_1B4D1EC(this, method);
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
      p_method = sub_1B9D724(
                   commandEnumerable,
                   System_Collections_Generic_IEnumerable_QuestAfterAction_Command__TypeInfo,
                   0LL);
    }
    v12 = (*(__int64 (__fastcall **)(struct System_Collections_Generic_IEnumerable_QuestAfterAction_Command__o *, _QWORD))p_method)(
            commandEnumerable,
            *(_QWORD *)(p_method + 8));
    v39->fields.__7__wrap1 = (struct System_Collections_Generic_IEnumerator_QuestAfterAction_Command__o *)v12;
    sub_1B4CF34((CGThumbnailListItem_o *)&v39->fields.__7__wrap1, v12, v13, v14);
    v2 = v39;
  }
  _7__wrap1 = v2->fields.__7__wrap1;
  v2->fields.__1__state = -3;
  if ( !_7__wrap1 )
LABEL_46:
    sub_1B4D1EC(this, method);
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
      v19 = sub_1B9D724(_7__wrap1, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(struct System_Collections_Generic_IEnumerator_QuestAfterAction_Command__o *, _QWORD))v19)(
            _7__wrap1,
            *(_QWORD *)(v19 + 8)) & 1) == 0 )
    {
      QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__82____m__Finally1(v39, v20);
      v39->fields.__7__wrap1 = 0LL;
      sub_1B4CF34((CGThumbnailListItem_o *)&v39->fields.__7__wrap1, 0, v36, v37);
      return 0;
    }
    v21 = v39->fields.__7__wrap1;
    if ( !v21 )
      sub_1B4D1EC(v39, v20);
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
      v25 = sub_1B9D724(
              v39->fields.__7__wrap1,
              System_Collections_Generic_IEnumerator_QuestAfterAction_Command__TypeInfo,
              0LL);
    }
    v26 = (QuestAfterAction_Command_o *)(*(__int64 (__fastcall **)(struct System_Collections_Generic_IEnumerator_QuestAfterAction_Command__o *, _QWORD))v25)(
                                          v21,
                                          *(_QWORD *)(v25 + 8));
    v28 = v26;
    if ( !v26 )
      sub_1B4D1EC(0LL, v27);
    if ( !_4__this )
      sub_1B4D1EC(v26, v27);
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
          v31 = dword_BE29E0[v30];
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
    this = (QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__82_o *)QuestAfterAction__IsExistCommand(
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
  sub_1B4CF34((CGThumbnailListItem_o *)&v39->fields.__2__current, (int32_t)v28, v34, v35);
  result = 1;
  v39->fields.__1__state = 1;
  return result;
}


System_Collections_Generic_IEnumerator_QuestAfterAction_Command__o *__fastcall QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__82__System_Collections_Generic_IEnumerable_QuestAfterAction_Command__GetEnumerator(
        QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__82_o *this,
        const MethodInfo *method)
{
  int32_t l__initialThreadId; // w20
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__82_o *v6; // x20
  struct QuestAfterAction_o *_4__this; // x1
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  struct System_Collections_Generic_IEnumerable_QuestAfterAction_Command__o *_3__commandEnumerable; // x1

  if ( (byte_49B7BBA & 1) == 0 )
  {
    sub_1B4CF90(&QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__82_TypeInfo, method);
    byte_49B7BBA = 1;
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
    v6 = (QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__82_o *)sub_1B4D1DC(QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__82_TypeInfo);
    System_Object___ctor((Il2CppObject *)v6, 0LL);
    v6->fields.__1__state = 0;
    v6->fields.__l__initialThreadId = System_Environment__get_CurrentManagedThreadId(0LL);
    _4__this = this->fields.__4__this;
    v6->fields.__4__this = _4__this;
    sub_1B4CF34((CGThumbnailListItem_o *)&v6->fields.__4__this, (int32_t)_4__this, v8, v9);
  }
  _3__commandEnumerable = this->fields.__3__commandEnumerable;
  v6->fields.commandEnumerable = _3__commandEnumerable;
  sub_1B4CF34((CGThumbnailListItem_o *)&v6->fields.commandEnumerable, (int32_t)_3__commandEnumerable, v4, v5);
  return (System_Collections_Generic_IEnumerator_QuestAfterAction_Command__o *)v6;
}


QuestAfterAction_Command_o *__fastcall QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__82__System_Collections_Generic_IEnumerator_QuestAfterAction_Command__get_Current(
        QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__82_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__82__System_Collections_IEnumerator_Reset(
        QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__82_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1B4CFA4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B4D1DC(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B4CFA4(&Method_QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__82_System_Collections_IEnumerator_Reset__);
  sub_1B4D0B8(v3, v4);
}


Il2CppObject *__fastcall QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__82__System_Collections_IEnumerator_get_Current(
        QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__82_o *this,
        const MethodInfo *method)
{
  return (Il2CppObject *)this->fields.__2__current;
}


void __fastcall QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__82__System_IDisposable_Dispose(
        QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__82_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w8

  _1__state = this->fields.__1__state;
  if ( _1__state == 1 || _1__state == -3 )
    QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__82____m__Finally1(this, method);
}


void __fastcall QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__82____m__Finally1(
        QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__82_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_IEnumerator_QuestAfterAction_Command__o *_7__wrap1; // x19
  System_Collections_Generic_IEnumerator_QuestAfterAction_Command__c *klass; // x8
  __int64 v5; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0

  if ( (byte_49B7BB9 & 1) == 0 )
  {
    sub_1B4CF90(&System_IDisposable_TypeInfo, method);
    byte_49B7BB9 = 1;
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
      p_method = sub_1B9D724(_7__wrap1, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(struct System_Collections_Generic_IEnumerator_QuestAfterAction_Command__o *, _QWORD))p_method)(
      _7__wrap1,
      *(_QWORD *)(p_method + 8));
  }
}


void __fastcall QuestAfterAction__WaitWhileMainStateFinished_d__86___ctor(
        QuestAfterAction__WaitWhileMainStateFinished_d__86_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall QuestAfterAction__WaitWhileMainStateFinished_d__86__MoveNext(
        QuestAfterAction__WaitWhileMainStateFinished_d__86_o *this,
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
      sub_1B4D1EC(this, method);
    if ( _4__this->fields.isKeepingMainStateButFinished )
    {
      this->fields.__2__current = 0LL;
      p__2__current = &this->fields.__2__current;
      sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.__2__current, 0, v2, v3);
      result = 1;
      *((_DWORD *)p__2__current - 2) = 1;
      return result;
    }
    ActionExtensions__Call(this->fields.action, 0LL);
  }
  return 0;
}


Il2CppObject *__fastcall QuestAfterAction__WaitWhileMainStateFinished_d__86__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        QuestAfterAction__WaitWhileMainStateFinished_d__86_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn QuestAfterAction__WaitWhileMainStateFinished_d__86__System_Collections_IEnumerator_Reset(
        QuestAfterAction__WaitWhileMainStateFinished_d__86_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1B4CFA4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B4D1DC(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B4CFA4(&Method_QuestAfterAction__WaitWhileMainStateFinished_d__86_System_Collections_IEnumerator_Reset__);
  sub_1B4D0B8(v3, v4);
}


Il2CppObject *__fastcall QuestAfterAction__WaitWhileMainStateFinished_d__86__System_Collections_IEnumerator_get_Current(
        QuestAfterAction__WaitWhileMainStateFinished_d__86_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall QuestAfterAction__WaitWhileMainStateFinished_d__86__System_IDisposable_Dispose(
        QuestAfterAction__WaitWhileMainStateFinished_d__86_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall QuestAfterAction___c__DisplayClass75_0___ctor(
        QuestAfterAction___c__DisplayClass75_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QuestAfterAction___c__DisplayClass75_0___LoadVoice_b__0(
        QuestAfterAction___c__DisplayClass75_0_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *svtVInfos; // x0
  const MethodInfo *v4; // x3

  if ( (byte_49B7BB5 & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo__RemoveAt__, method);
    byte_49B7BB5 = 1;
  }
  svtVInfos = (System_Collections_Generic_List_object__o *)this->fields.svtVInfos;
  if ( !svtVInfos
    || (System_Collections_Generic_List_object___RemoveAt(
          svtVInfos,
          0,
          (const MethodInfo_35819B0 *)Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo__RemoveAt__),
        (svtVInfos = (System_Collections_Generic_List_object__o *)this->fields.__4__this) == 0LL) )
  {
    sub_1B4D1EC(svtVInfos, method);
  }
  QuestAfterAction__LoadVoice_34179848((QuestAfterAction_o *)svtVInfos, this->fields.svtVInfos, this->fields.endAct, v4);
}


void __fastcall QuestAfterAction___c__DisplayClass79_0___ctor(
        QuestAfterAction___c__DisplayClass79_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QuestAfterAction___c__DisplayClass79_0___Play_b__0(
        QuestAfterAction___c__DisplayClass79_0_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_49B7BB6 & 1) == 0 )
  {
    sub_1B4CF90(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, method);
    byte_49B7BB6 = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_37B4830 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    sub_1B4D1EC(0LL, v4);
  MissionNotifyManager__EndPause((MissionNotifyManager_o *)Instance, 0LL);
  ActionExtensions__Call(this->fields.endAct, 0LL);
}


void __fastcall QuestAfterAction___c__DisplayClass80_0___ctor(
        QuestAfterAction___c__DisplayClass80_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QuestAfterAction___c__DisplayClass80_0___PlaySpecifiedAction_b__0(
        QuestAfterAction___c__DisplayClass80_0_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  char *_4__this; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  const MethodInfo *v8; // x2

  if ( (byte_49B7BB7 & 1) == 0 )
  {
    sub_1B4CF90(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, method);
    byte_49B7BB7 = 1;
  }
  _4__this = (char *)this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_8;
  *((_QWORD *)_4__this + 22) = 0LL;
  sub_1B4CF34((CGThumbnailListItem_o *)(_4__this + 176), 0, v2, v3);
  _4__this = (char *)this->fields.__4__this;
  if ( !_4__this
    || (*((_QWORD *)_4__this + 9) = 0LL,
        sub_1B4CF34((CGThumbnailListItem_o *)(_4__this + 72), 0, v6, v7),
        (_4__this = (char *)SingletonTemplate_object___get_Instance((const MethodInfo_37B4830 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__)) == 0LL)
    || (MissionNotifyManager__EndPause((MissionNotifyManager_o *)_4__this, 0LL),
        (_4__this = (char *)this->fields.__4__this) == 0LL) )
  {
LABEL_8:
    sub_1B4D1EC(_4__this, method);
  }
  QuestAfterAction__SetState((QuestAfterAction_o *)_4__this, 0, v8);
  ActionExtensions__Call(this->fields.finishCallback, 0LL);
}


void __fastcall QuestAfterAction___c__DisplayClass80_0___PlaySpecifiedAction_b__1(
        QuestAfterAction___c__DisplayClass80_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  QuestAfterAction_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1B4D1EC(0LL, method);
  QuestAfterAction__SetState(_4__this, 2, v2);
}